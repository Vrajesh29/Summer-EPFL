import chisel3._
import chisel3.util._
import chisel3.util.log2Ceil
import chisel3.util.DecoupledIO
import chisel3.util.EnqIO
import chisel3.util.QueueIO
import chisel3.stage.ChiselStage
import scala.sys.process._


class FP(m: Int, e: Int) extends Bundle {
  val sign = UInt(1.W)
  val man  = UInt(m.W)
  val exp  = UInt(e.W)
}


class FPMult(m: Int, e: Int) extends Module{
  val io = IO(new Bundle{
    val in = Input(new Bundle{
      val a = new FP(m, e)
      val b = new FP(m, e)
    })
    val out = Output(new Bundle{
      val result = new FP(m, e)
    })
  })

  io.out.result.sign := io.in.a.sign ^ io.in.b.sign
  val exp_addition = io.in.a.exp +& io.in.b.exp
  io.out.result.exp := Mux(exp_addition > (1<<e).asUInt - 1.U, (1<<e).asUInt - 1.U, exp_addition)
  io.out.result.man := Mux(io.in.a.man*io.in.b.man > (1<<m).asUInt - 1.U, (1<<m).asUInt - 1.U, io.in.a.man*io.in.b.man)
}

class FPAdder(m: Int, e: Int) extends Module{
  val io = IO(new Bundle{
    val in = Input(new Bundle{
      val a = new FP(m, e)
      val b = new FP(m, e)
    })
    val out = Output(new Bundle{
      val result = new FP(m, e)
    })
  })

  val exp_diff = Mux(io.in.a.exp > io.in.b.exp, io.in.a.exp - io.in.b.exp, io.in.b.exp - io.in.a.exp)

  io.out.result.sign := Mux(io.in.a.exp > io.in.b.exp, Mux(io.in.a.man > (io.in.b.man >> exp_diff), io.in.a.sign, io.in.b.sign), Mux((io.in.a.man)>>exp_diff > io.in.b.man, io.in.a.sign, io.in.b.sign))
  io.out.result.exp := Mux(io.in.a.exp > io.in.b.exp, io.in.a.exp, io.in.b.exp)
  val addition = Mux(io.in.a.exp > io.in.b.exp, Mux(io.in.a.sign === io.in.b.sign, io.in.a.man +& (io.in.b.man >> exp_diff), Mux(io.in.a.man > (io.in.b.man >> exp_diff), io.in.a.man - (io.in.b.man>>exp_diff), (io.in.b.man >> exp_diff) - io.in.a.man)),  Mux(io.in.a.sign === io.in.b.sign, io.in.b.man +& (io.in.a.man >> exp_diff), Mux(io.in.b.man > (io.in.a.man >> exp_diff), io.in.b.man - (io.in.a.man>>exp_diff), (io.in.a.man >> exp_diff) - io.in.b.man)))
  io.out.result.man := Mux(addition > (1<<m).asUInt - 1.U, (1<<m).asUInt - 1.U, addition)

}



class PE(m: Int, e: Int) extends Module{
  val io = IO(new Bundle{
    val in = Input(new Bundle{
      val hor = new FP(m, e)
      val ver = new FP(m, e)
    })
    val out = Output(new Bundle {
      val hor = new FP(m, e)
      val ver = new FP(m, e)
      val result = new FP(m, e)
    })
    })

    val result_buffer = Reg(new FP(m, e))
    // val mult_buffer = Reg(new FP(m, e))

    val fpmult = Module(new FPMult(m, e))
    fpmult.io.in.a <> io.in.hor
    fpmult.io.in.b <> io.in.ver

    val fpadder = Module(new FPAdder(m, e))
    fpadder.io.in.a <> fpmult.io.out.result
    fpadder.io.in.b <> result_buffer
    result_buffer := fpadder.io.out.result

    io.out.hor := io.in.hor
    io.out.ver := io.in.ver
    io.out.result := result_buffer

  }


// The below systolic array is good, but make it better by using a queue to store the input and output
class SystolicArray_forTesting(n: Int, m: Int, e: Int) extends Module {
  val io = IO(new Bundle {
    val in = Flipped(Decoupled(Vec(n, Vec(n, new Bundle {
      val hor = new FP(m, e)
      val ver = new FP(m, e)
    }))))
    val out = Output(Vec(n, Vec(n, new Bundle {
      val hor = new FP(m, e)
      val ver = new FP(m, e)
      val result = new FP(m, e)
    })))
  })

  val pes = Seq.fill(n, n)(Module(new PE(m, e)))
  // val inputQueue = Module(new Queue(Vec(n, Vec(n, new Bundle {
  //   val hor = new FP(m, e)
  //   val ver = new FP(m, e)
  // })), n))
  val inputQueue = Module(new Queue(io.in.bits.cloneType, n))

  inputQueue.io.deq.ready := true.B

  inputQueue.io.enq <> io.in

  val counter = RegInit(0.U(log2Ceil(n).W))


  for (i <- 0 until n) {
    pes(i)(0).io.in.hor := Mux(ShiftRegister(inputQueue.io.deq.valid, i), ShiftRegister(inputQueue.io.deq.bits(i)(counter).hor, i), ShiftRegister(0.U.asTypeOf(new FP(m, e)), i))
    pes(0)(i).io.in.ver := Mux(ShiftRegister(inputQueue.io.deq.valid, i), ShiftRegister(inputQueue.io.deq.bits(counter)(i).ver, i), ShiftRegister(0.U.asTypeOf(new FP(m, e)), i))
 }

  when(inputQueue.io.deq.valid && inputQueue.io.deq.ready) {
    counter := counter + 1.U
  }

  // Connect PEs horizontally
  for (i <- 0 until n) {
    for (j <- 1 until n) {
      pes(i)(j).io.in.hor := ShiftRegister(pes(i)(j - 1).io.out.hor, 1)
    }
  }

  // Connect PEs vertically
  for (i <- 1 until n) {
    for (j <- 0 until n) {
      pes(i)(j).io.in.ver := ShiftRegister(pes(i - 1)(j).io.out.ver, 1)
    }
  }

  // Connect outputs
  for (i <- 0 until n) {
    for (j <- 0 until n) {
      io.out(i)(j).hor := pes(i)(j).io.out.hor
      io.out(i)(j).ver := pes(i)(j).io.out.ver
      io.out(i)(j).result := pes(i)(j).io.out.result
    }
  }
}




// // Proper Systolic Array
// class SystolicArray(n: Int, m: Int, e: Int) extends Module {
//     val io = IO(new Bundle {
//         val in = Input(new Bundle {
//             val hor = Vec(n, Flipped(EnqIO(new FP(m, e))))
//             val ver = Vec(n, Flipped(EnqIO(new FP(m, e))))
//         })
//         val out = Output(new Bundle {
//             val result = Vec(n, Flipped(DeqIO(new FP(m, e))))
//         })
//     })

//   val pes = Seq.fill(n, n)(Module(new PE(m, e)))

//   val myinputQ_hor = Seq.fill(n)(Module(new Queue(new FP(m, e), n)))
//   val myinputQ_ver = Seq.fill(n)(Module(new Queue(new FP(m, e), n)))
//   val myoutputQ = Seq.fill(n)(Module(new Queue(new FP(m, e), n)))

//   for (i <- 0 until n){
//     myinputQ_hor(i).io.enq.valid := true.B
//     myinputQ_hor(i).io.enq.bits := io.in.hor(i).bits

//     myinputQ_ver(i).io.enq.valid := true.B
//     myinputQ_ver(i).io.enq.bits := io.in.ver(i).bits
//   }


//   for (i <- 0 until n) {
//     myinputQ_hor(i).io.deq.ready := ShiftRegister(myinputQ_hor(i).io.deq.valid, i)
//     myinputQ_ver(i).io.deq.ready := ShiftRegister(myinputQ_ver(i).io.deq.valid, i)
//     pes(i)(0).io.in.hor := Mux(myinputQ_hor(i).io.deq.fire, myinputQ_hor(i).io.deq.bits, 0.U.asTypeOf(new FP(m, e)))
//     pes(0)(i).io.in.ver := Mux(myinputQ_ver(i).io.deq.fire, myinputQ_ver(i).io.deq.bits, 0.U.asTypeOf(new FP(m, e)))
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


//   // Connect outputs
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


// object SystolicArrayMain extends App {
//   emitVerilog(new SystolicArray(32, 6, 8))
// }




