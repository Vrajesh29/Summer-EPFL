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
        val in = new Bundle {
            val hor = Flipped(Vec(n, EnqIO(new HBFP(blockSize, m, e))))
            val ver = Flipped(Vec(n, EnqIO(new HBFP(blockSize, m, e))))
            val flag = Input(Bool())
        }
        val out = Output(Vec(n, Vec(n, new Bundle {
          val result = new HBFP_result(m, e)
        })))
    })

  val pes = Seq.fill(n, n)(Module(new HBFP_PE(blockSize, m, e)))  // Creating n*n PEs.
  for (i <- 0 until n) {
    for (j <- 0 until n) {
      pes(i)(j).io.in.flag <> io.in.flag
    }
  }

  val myinputQ_hor = Seq.fill(n)(Module(new Queue(new HBFP(blockSize, m, e), n*n, false, false)))  // The queue depth needs to be increased to prevent overflow for the m =6 case.
  val myinputQ_ver = Seq.fill(n)(Module(new Queue(new HBFP(blockSize, m, e), n*n, false, false)))

  for (i <- 0 until n){
    myinputQ_hor(i).io.enq <> io.in.hor(i)
    myinputQ_ver(i).io.enq <> io.in.ver(i)
  }


  for (i <- 0 until n) {

    if (i != 0) {
      // The ready of the input queue of row(i) is the RegNext of that of row(i-1) and so on.
      myinputQ_hor(i).io.deq.ready := Mux(io.in.flag === 1.B, ShiftRegister(io.in.hor(0).fire,2*i + 1), ShiftRegister(io.in.hor(0).fire,i+1))
    // The ready of the input queue of column(i) is the RegNext of that of column(i-1) and so on.
      myinputQ_ver(i).io.deq.ready := Mux(io.in.flag === 1.B, ShiftRegister(io.in.ver(0).fire,2*i + 1), ShiftRegister(io.in.ver(0).fire,i+1))
    }
    pes(i)(0).io.in.hor := Mux(myinputQ_hor(i).io.deq.fire, myinputQ_hor(i).io.deq.bits, 0.U.asTypeOf(new HBFP(blockSize, m, e)))
    pes(0)(i).io.in.ver := Mux(myinputQ_ver(i).io.deq.fire, myinputQ_ver(i).io.deq.bits, 0.U.asTypeOf(new HBFP(blockSize, m, e)))
 }
  myinputQ_ver(0).io.deq.ready := myinputQ_hor.map(_.io.deq.valid).reduce(_ && _)
  myinputQ_hor(0).io.deq.ready := myinputQ_ver.map(_.io.deq.valid).reduce(_ && _)


  // Connect PEs horizontally
  for (i <- 0 until n) {
    for (j <- 1 until n) {
      pes(i)(j).io.in.hor := Mux(io.in.flag === 1.B, ShiftRegister(pes(i)(j-1).io.out.hor, 2), ShiftRegister(pes(i)(j-1).io.out.hor, 1)) // Pass the horizontal input to the next PE after x cycles.
    }
  }

  // Connect PEs vertically
  for (i <- 1 until n) {
    for (j <- 0 until n) {
      pes(i)(j).io.in.ver := Mux(io.in.flag === 1.B, ShiftRegister(pes(i-1)(j).io.out.ver, 2), ShiftRegister(pes(i-1)(j).io.out.ver, 1))// Pass the vertical input to the next PE after x cycles.
    }
  }
  // Connect outputs. The output of the PEs are stored in the Array. TODO: Flush the outputs in Queues.
  for (i <- 0 until n) {
    for (j <- 0 until n) {
      io.out(i)(j).result := pes(i)(j).io.out.result
    }
  }
}

// TODO: Change the above systolic array such that output is a queue. In short flush the results in the PEs to the output queue.





object SystolicArray_HBFP_forTestingMain extends App {
  emitVerilog(new SystolicArray_HBFP_forTesting(32, 16, 6, 8))
}