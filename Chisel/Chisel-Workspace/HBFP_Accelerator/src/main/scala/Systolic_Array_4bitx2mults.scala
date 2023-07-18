import chisel3._
import chisel3.util._
import chisel3.util.log2Ceil
import chisel3.util.DecoupledIO
import chisel3.util.EnqIO
import chisel3.util.QueueIO
import chisel3.stage.ChiselStage
import scala.sys.process._ 



class HBFP_MAC_MIXMAN_4x2(blockSize: Int, m: Int, e: Int) extends Module{
    val io = IO(new Bundle{
        val in = Input(new Bundle{
            val a = new HBFP_MIXMAN(blockSize, m, e)
            val b = new HBFP_MIXMAN(blockSize, m, e)
        })
        val out = Output(new Bundle{
            val result = new HBFP_result_MIXMAN(m, e)
        })
    })

    val exp_addition = ShiftRegister(io.in.a.exp +& io.in.b.exp, 3)  
    io.out.result.exp := Mux(exp_addition > (1<<e).asUInt - 1.U, (1<<e).asUInt - 1.U, exp_addition)

    val dotProductRegs = Seq.fill(blockSize)(RegInit(0.U((m).W)))
    val two_complement_buffer = Seq.fill(blockSize)(RegInit(0.S((m + 1).W)))
    val signs = Seq.fill(blockSize)(RegInit(0.U(1.W)))

  if (m == 6.toInt){
    // printf("here")
    for (i <- 0 until blockSize) {
      val padding = RegInit(0.U(2.W))
      val multiplication = io.in.a.man(i)(3,0) * io.in.b.man(i)(3,0) +& (((padding ## io.in.a.man(i)(5,4)) * io.in.b.man(i)(3,0)) << 4.U) +& ShiftRegister(((io.in.a.man(i)(3,0) * (padding ## io.in.b.man(i)(5,4))) << 4.U) +& (((padding##io.in.a.man(i)(5,4)) * (padding##io.in.b.man(i)(5,4))) << 8.U), 1)
      dotProductRegs(i) := Mux(multiplication > (1<<m).asUInt - 1.U, (1<<m).asUInt - 1.U, multiplication)
      signs(i) := io.in.a.sign(i) ^ io.in.b.sign(i)
      two_complement_buffer(i) := Mux(signs(i)===1.U, (~(0.U ## dotProductRegs(i)) + 1.U), (0.U ## dotProductRegs(i))).asSInt
  }
  }

  else if(m == 4.toInt){
  for (i <- 0 until blockSize) {
    val multiplication = io.in.a.man(i) * io.in.b.man(i)
    dotProductRegs(i) := Mux(multiplication > (1<<m).asUInt - 1.U, (1<<m).asUInt - 1.U, multiplication)
    signs(i) := io.in.a.sign(i) ^ io.in.b.sign(i)
    two_complement_buffer(i) := Mux(signs(i)===1.U, (~(0.U ## dotProductRegs(i)) + 1.U), (0.U ## dotProductRegs(i))).asSInt
  }
}

    val sum = two_complement_buffer.reduce(_ +& _)

    val acc_hbfp = RegInit(0.U((m+1).W))
    acc_hbfp := Mux(sum(m+blockSize-1).asUInt===1.U, Mux((~sum(m+blockSize-2,0).asUInt + 1.U) > (2<<m-1).U - 1.U, (2<<m).U - 1.U, ~(0.U ## sum(m-1, 0).asUInt) + 1.U), 
        Mux(sum(m+blockSize-2, 0).asUInt > (2<<m-1).U - 1.U, (2<<m-1).U - 1.U, 0.U ## sum(m-1,0).asUInt))

    io.out.result.sign := acc_hbfp(m).asUInt
    io.out.result.man := acc_hbfp(m-1, 0).asUInt 
}


class HBFP_PE_MIXMAN_4x2(blockSize: Int, m: Int, e: Int) extends Module{
  val io = IO(new Bundle{
    val in = Input(new Bundle{
      val hor = new HBFP_MIXMAN(blockSize, m, e)
      val ver = new HBFP_MIXMAN(blockSize, m, e)
    })
    val out = Output(new Bundle {
      val hor = new HBFP_MIXMAN(blockSize, m, e)
      val ver = new HBFP_MIXMAN(blockSize, m, e)
      val result = new HBFP_result_MIXMAN(m, e)
    })
    })

    val result_buffer = Reg(new HBFP_result_MIXMAN(m, e))

    val mac = Module(new HBFP_MAC_MIXMAN_4x4(blockSize, m, e))
    mac.io.in.a <> io.in.hor
    mac.io.in.b <> io.in.ver

    val adder = Module(new HBFP_Adder_MIXMAN(m, e))
    adder.io.in.a.man <> mac.io.out.result.man
    adder.io.in.a.sign <> mac.io.out.result.sign
    adder.io.in.a.exp <> mac.io.out.result.exp
    adder.io.in.b <> ShiftRegister(result_buffer, 1)
    result_buffer := adder.io.out.result

    io.out.hor := io.in.hor
    io.out.ver := io.in.ver
    io.out.result := result_buffer

  }


// The below systolic array is good, but only for testing purposes. The real systolic array is after this one.
  class SystolicArray_HBFP_forTesting_MIXMAN_4x2(blockSize: Int, n: Int, m: Int, e: Int) extends Module {
    val io = IO(new Bundle {
        val in = Input(new Bundle {
            val hor = Vec(n, Flipped(EnqIO(new HBFP_MIXMAN(blockSize, m, e))))
            val ver = Vec(n, Flipped(EnqIO(new HBFP_MIXMAN(blockSize, m, e))))
        })
        val out = Output(Vec(n, Vec(n, new Bundle {
          val result = new HBFP_result_MIXMAN(m, e)
        })))
    })

  val pes = Seq.fill(n, n)(Module(new HBFP_PE_MIXMAN_4x2(blockSize, m, e)))

  val myinputQ_hor = Seq.fill(n)(Module(new Queue(new HBFP_MIXMAN(blockSize, m, e), n*n))) // The Queue depth needs to be increased to prevent data loss.
  val myinputQ_ver = Seq.fill(n)(Module(new Queue(new HBFP_MIXMAN(blockSize, m, e), n*n)))
  // val myoutputQ = Seq.fill(n)(Module(new Queue(new HBFP_result_MIXMAN(m, e), n)))

  for (i <- 0 until n){
    myinputQ_hor(i).io.enq.valid := true.B
    myinputQ_hor(i).io.enq.bits := io.in.hor(i).bits

    myinputQ_ver(i).io.enq.valid := true.B
    myinputQ_ver(i).io.enq.bits := io.in.ver(i).bits
  }


  for (i <- 0 until n) {
    myinputQ_hor(i).io.deq.ready := ShiftRegister(io.in.hor(i).valid, 2*i + 1) // Shift changes based on the configuration. For normal case it will be i+1
    myinputQ_ver(i).io.deq.ready := ShiftRegister(io.in.ver(i).valid, 2*i + 1)
    pes(i)(0).io.in.hor := Mux(myinputQ_hor(i).io.deq.fire, myinputQ_hor(i).io.deq.bits, 0.U.asTypeOf(new HBFP_MIXMAN(blockSize, m, e)))
    pes(0)(i).io.in.ver := Mux(myinputQ_ver(i).io.deq.fire, myinputQ_ver(i).io.deq.bits, 0.U.asTypeOf(new HBFP_MIXMAN(blockSize, m, e)))
 }


  // Connect PEs horizontally
  for (i <- 0 until n) {
    for (j <- 1 until n) {
      pes(i)(j).io.in.hor := ShiftRegister(pes(i)(j - 1).io.out.hor, 2) // Will change based on the configuration. For normal case it will be 1.
    }
  }

  // Connect PEs vertically
  for (i <- 1 until n) {
    for (j <- 0 until n) {
      pes(i)(j).io.in.ver := ShiftRegister(pes(i - 1)(j).io.out.ver, 2) // Will change based on the configuration. For normal case it will be 1.
    }
  }
  // Connect outputs
  for (i <- 0 until n) {
    for (j <- 0 until n) {
      io.out(i)(j).result := pes(i)(j).io.out.result
    }
  }
}







//   class SystolicArray_HBFP_MIXMAN(blockSize: Int, n: Int, m: Int, e: Int) extends Module {
//     val io = IO(new Bundle {
//         val in = Input(new Bundle {
//             val hor = Vec(n, Flipped(EnqIO(new HBFP_MIXMAN(blockSize, m, e))))
//             val ver = Vec(n, Flipped(EnqIO(new HBFP_MIXMAN(blockSize, m, e))))
//         })
//         val out = Output(new Bundle {
//             val result = Vec(n, Flipped(DeqIO(new HBFP_result_MIXMAN(m, e))))
//         })
//     })

//   val pes = Seq.fill(n, n)(Module(new HBFP_PE_MIXMAN_4x2(blockSize, m, e)))

//   val myinputQ_hor = Seq.fill(n)(Module(new Queue(new HBFP_MIXMAN(blockSize, m, e), n)))
//   val myinputQ_ver = Seq.fill(n)(Module(new Queue(new HBFP_MIXMAN(blockSize, m, e), n)))
//   val myoutputQ = Seq.fill(n)(Module(new Queue(new HBFP_result_MIXMAN(m, e), n)))

//   for (i <- 0 until n){
//     myinputQ_hor(i).io.enq.valid := true.B
//     myinputQ_hor(i).io.enq.bits := io.in.hor(i).bits

//     myinputQ_ver(i).io.enq.valid := true.B
//     myinputQ_ver(i).io.enq.bits := io.in.ver(i).bits
//   }


//   for (i <- 0 until n) {
//     myinputQ_hor(i).io.deq.ready := ShiftRegister(myinputQ_hor(i).io.deq.valid, i)
//     myinputQ_ver(i).io.deq.ready := ShiftRegister(myinputQ_ver(i).io.deq.valid, i)
//     pes(i)(0).io.in.hor := Mux(myinputQ_hor(i).io.deq.fire, myinputQ_hor(i).io.deq.bits, 0.U.asTypeOf(new HBFP_MIXMAN(blockSize, m, e)))
//     pes(0)(i).io.in.ver := Mux(myinputQ_ver(i).io.deq.fire, myinputQ_ver(i).io.deq.bits, 0.U.asTypeOf(new HBFP_MIXMAN(blockSize, m, e)))
//  }


//   // Connect PEs horizontally
//   for (i <- 0 until n) {
//     for (j <- 1 until n) {
//       pes(i)(j).io.in.hor := ShiftRegister(pes(i)(j - 1).io.out.hor, 1)
//     }
//   }

//   // Connect PEs vertically
//   for (i <- 1 until n) {
//     for (j <- 0 until n) {
//       pes(i)(j).io.in.ver := ShiftRegister(pes(i - 1)(j).io.out.ver, 1)
//     }
//   }


//   // TODO: PROPERLY FLUSH THE OUTPUTS. THE VALUES IN THE PEs ARE CORRECT BUT WE NEED TO IMPLEMENT THE CONTROL TO GET THE OUTPUTS IN THE OUTPUT QUEUE. THE BELOW ONE IS INCORRECT LOGIC.
//   for (i <- 0 until n) {
//       myoutputQ(i).io.enq.valid := 1.B
//       myoutputQ(i).io.enq.bits := pes(i)(n-1).io.out.result
//   }


//   for (i <- 0 until n) {
//     io.out.result(i).valid := myoutputQ(i).io.deq.valid
//     io.out.result(i).ready := true.B
//     io.out.result(i).bits := myoutputQ(i).io.deq.bits
//     myoutputQ(i).io.deq.ready := io.out.result(i).ready
//   }

// }





object SystolicArray_HBFP_forTesting_MIXMAN_4x2Main extends App {
  emitVerilog(new SystolicArray_HBFP_forTesting_MIXMAN_4x2(4, 2, 6, 8))
}