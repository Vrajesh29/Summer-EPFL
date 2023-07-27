// This is the TOP MODULE.
// A systolic array is a grid of processing elements (PEs) that communicate with each other only through their nearest neighbors.
// There are two modules of systolic array. One of them is only for testing purposes. The other one is the actual systolic array.
/* However, the actual systolic array is Accumulation stationary, meaning the final accumulated results will be in the PEs, 
hence the TODO is to find a way to flush the outputs from the PEs. Ayan told me not to focus on that for now.*/
// The remaining logic of everything else remains the same.

import chisel3._
import chisel3.util._
import chisel3.util.log2Ceil
import chisel3.util.DecoupledIO
import chisel3.util.EnqIO
import chisel3.util.QueueIO
import chisel3.stage.ChiselStage
import scala.sys.process._ 

// Note that this one is only for testing. The inputs are Queues which is correct, but I am keeping the outputs in the Array which actually should
// be flushed in Queues but Ayan told that he will do that.
class SystolicArray_HBFP_forTesting(blockSize: Int, n: Int, m: Int, e: Int) extends Module {
    val io = IO(new Bundle {
        val in = Input(new Bundle {
            val hor = Vec(n, Flipped(EnqIO(new HBFP(blockSize, m, e))))
            val ver = Vec(n, Flipped(EnqIO(new HBFP(blockSize, m, e))))
        })
        val out = Output(Vec(n, Vec(n, new Bundle {
          val result = new HBFP_result(m, e)
        })))
    })

  val pes = Seq.fill(n, n)(Module(new HBFP_PE(blockSize, m, e)))  // Creating n*n PEs.

  val myinputQ_hor = Seq.fill(n)(Module(new Queue(new HBFP(blockSize, m, e), n)))
  val myinputQ_ver = Seq.fill(n)(Module(new Queue(new HBFP(blockSize, m, e), n)))

  for (i <- 0 until n){
    myinputQ_hor(i).io.enq.valid := true.B
    myinputQ_hor(i).io.enq.bits := io.in.hor(i).bits

    myinputQ_ver(i).io.enq.valid := true.B
    myinputQ_ver(i).io.enq.bits := io.in.ver(i).bits
  }


  for (i <- 0 until n) {

    // The ready of the input queue of row(i) is the RegNext of that of row(i-1) and so on.
    myinputQ_hor(i).io.deq.ready := ShiftRegister(io.in.hor(i).valid, i+1)
    // The ready of the input queue of column(i) is the RegNext of that of column(i-1) and so on.
    myinputQ_ver(i).io.deq.ready := ShiftRegister(io.in.ver(i).valid, i+1)
    pes(i)(0).io.in.hor := Mux(myinputQ_hor(i).io.deq.fire, myinputQ_hor(i).io.deq.bits, 0.U.asTypeOf(new HBFP(blockSize, m, e)))
    pes(0)(i).io.in.ver := Mux(myinputQ_ver(i).io.deq.fire, myinputQ_ver(i).io.deq.bits, 0.U.asTypeOf(new HBFP(blockSize, m, e)))
 }


  // Connect PEs horizontally
  for (i <- 0 until n) {
    for (j <- 1 until n) {
      pes(i)(j).io.in.hor := ShiftRegister(pes(i)(j - 1).io.out.hor, 1) // Pass the horizontal input to the next PE after every cycle.
    }
  }

  // Connect PEs vertically
  for (i <- 1 until n) {
    for (j <- 0 until n) {
      pes(i)(j).io.in.ver := ShiftRegister(pes(i - 1)(j).io.out.ver, 1) // Pass the vertical input to the next PE after every cycle.
    }
  }
  // Connect outputs. The output of the PEs are stored in the Array. TODO: Flush the outputs in Queues.
  for (i <- 0 until n) {
    for (j <- 0 until n) {
      io.out(i)(j).result := pes(i)(j).io.out.result
    }
  }
}







class SystolicArray_HBFP(blockSize: Int, n: Int, m: Int, e: Int) extends Module {
    val io = IO(new Bundle {
        val in = Input(new Bundle {
            val hor = Vec(n, Flipped(EnqIO(new HBFP(blockSize, m, e))))
            val ver = Vec(n, Flipped(EnqIO(new HBFP(blockSize ,m, e))))
        })
        val out = Output(new Bundle {
            val result = Vec(n, Flipped(DeqIO(new HBFP_result(m, e))))
        })
    })

  val pes = Seq.fill(n, n)(Module(new HBFP_PE(blockSize, m, e))) // Creating n*n PEs.

  val myinputQ_hor = Seq.fill(n)(Module(new Queue(new HBFP(blockSize, m, e), n)))
  val myinputQ_ver = Seq.fill(n)(Module(new Queue(new HBFP(blockSize, m, e), n)))
  val myoutputQ = Seq.fill(n)(Module(new Queue(new HBFP_result(m, e), n)))

  for (i <- 0 until n){
    myinputQ_hor(i).io.enq.valid := true.B
    myinputQ_hor(i).io.enq.bits := io.in.hor(i).bits

    myinputQ_ver(i).io.enq.valid := true.B
    myinputQ_ver(i).io.enq.bits := io.in.ver(i).bits
  }


  for (i <- 0 until n) {
    // The ready of the input queue of row(i) is the RegNext of that of row(i-1) and so on.
    myinputQ_hor(i).io.deq.ready := ShiftRegister(myinputQ_hor(i).io.deq.valid, i)
    // The ready of the input queue of column(i) is the RegNext of that of column(i-1) and so on.
    myinputQ_ver(i).io.deq.ready := ShiftRegister(myinputQ_ver(i).io.deq.valid, i)
    pes(i)(0).io.in.hor := Mux(myinputQ_hor(i).io.deq.fire, myinputQ_hor(i).io.deq.bits, 0.U.asTypeOf(new HBFP(blockSize, m, e)))
    pes(0)(i).io.in.ver := Mux(myinputQ_ver(i).io.deq.fire, myinputQ_ver(i).io.deq.bits, 0.U.asTypeOf(new HBFP(blockSize, m, e)))
 }


  // Connect PEs horizontally
  for (i <- 0 until n) {
    for (j <- 1 until n) {
      pes(i)(j).io.in.hor := ShiftRegister(pes(i)(j - 1).io.out.hor, 1) // Pass the horizontal input to the next PE after every cycle.
    }
  }

  // Connect PEs vertically
  for (i <- 1 until n) {
    for (j <- 0 until n) {
      pes(i)(j).io.in.ver := ShiftRegister(pes(i - 1)(j).io.out.ver, 1) // Pass the vertical input to the next PE after every cycle.
    }
  }


  // TODO: PROPERLY FLUSH THE OUTPUTS. THE VALUES IN THE PEs ARE CORRECT BUT WE NEED TO IMPLEMENT THE CONTROL TO GET THE OUTPUTS IN THE OUTPUT QUEUE. THE BELOW ONE IS INCORRECT LOGIC.
  for (i <- 0 until n) {
      myoutputQ(i).io.enq.valid := 1.B
      myoutputQ(i).io.enq.bits := pes(i)(n-1).io.out.result
  }


  for (i <- 0 until n) {
    io.out.result(i).valid := myoutputQ(i).io.deq.valid
    io.out.result(i).ready := true.B
    io.out.result(i).bits := myoutputQ(i).io.deq.bits
    myoutputQ(i).io.deq.ready := io.out.result(i).ready
  }

}





object SystolicArray_HBFP_forTestingMain extends App {
  emitVerilog(new SystolicArray_HBFP_forTesting(32, 16, 6, 8))
}