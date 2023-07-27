// This is the TOP MODULE.
// A systolic array is a grid of processing elements (PEs) that communicate with each other only through their nearest neighbors.
// There are two modules of systolic array. One of them is only for testing purposes. The other one is the actual systolic array.
/* However, the actual systolic array is Accumulation stationary, meaning the final accumulated results will be in the PEs, 
hence the TODO is to find a way to flush the outputs from the PEs. Ayan told me not to focus on that for now.*/
// The systolic array for testing has two matrices as input, hence n^2 IO ports.
// The actual systolic array has n Queues as inputs and only n IO ports.
// The remaining logic of everything else remains the same.

import chisel3._
import chisel3.util._
import chisel3.util.log2Ceil
import chisel3.util.DecoupledIO
import chisel3.util.EnqIO
import chisel3.util.QueueIO
import chisel3.stage.ChiselStage
import scala.sys.process._


// The below systolic array is just used for testing, hence it has two matrices as input.
// Kindly note that taking input as a Queue is absolutely working fine as you will see in the systolic array of HBFP.
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

  val pes = Seq.fill(n, n)(Module(new PE(m, e)))  // Creating n*n PEs.

  val inputQueue = Module(new Queue(io.in.bits.cloneType, n))

  inputQueue.io.deq.ready := true.B

  inputQueue.io.enq <> io.in

  val counter = RegInit(0.U(log2Ceil(n).W))


  for (i <- 0 until n) {

    // Once we reach the end of inputs, we need to pass zero to avoid further multiplication.
    pes(i)(0).io.in.hor := Mux(ShiftRegister(inputQueue.io.deq.valid, i), ShiftRegister(inputQueue.io.deq.bits(i)(counter).hor, i), ShiftRegister(0.U.asTypeOf(new FP(m, e)), i))
    pes(0)(i).io.in.ver := Mux(ShiftRegister(inputQueue.io.deq.valid, i), ShiftRegister(inputQueue.io.deq.bits(counter)(i).ver, i), ShiftRegister(0.U.asTypeOf(new FP(m, e)), i))
 }

  when(inputQueue.io.deq.valid && inputQueue.io.deq.ready) {
    counter := counter + 1.U
  }

  // Connect PEs horizontally
  for (i <- 0 until n) {
    for (j <- 1 until n) {
      pes(i)(j).io.in.hor := ShiftRegister(pes(i)(j - 1).io.out.hor, 1)  // Pass the horizontal input to the next PE after every cycle.
    }
  }

  // Connect PEs vertically
  for (i <- 1 until n) {
    for (j <- 0 until n) {
      pes(i)(j).io.in.ver := ShiftRegister(pes(i - 1)(j).io.out.ver, 1)  // Pass the vertical input to the next PE after every cycle.
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



// The Actual Systolic Array with Queues as inputs and outputs
class SystolicArray(n: Int, m: Int, e: Int) extends Module {
    val io = IO(new Bundle {
        val in = Input(new Bundle {
            val hor = Vec(n, Flipped(EnqIO(new FP(m, e))))
            val ver = Vec(n, Flipped(EnqIO(new FP(m, e))))
        })
        val out = Output(new Bundle {
            val result = Vec(n, Flipped(DeqIO(new FP(m, e))))
        })
    })

  val pes = Seq.fill(n, n)(Module(new PE(m, e)))

  val myinputQ_hor = Seq.fill(n)(Module(new Queue(new FP(m, e), n)))
  val myinputQ_ver = Seq.fill(n)(Module(new Queue(new FP(m, e), n)))
  val myoutputQ = Seq.fill(n)(Module(new Queue(new FP(m, e), n)))

  for (i <- 0 until n){
    myinputQ_hor(i).io.enq.valid := true.B
    myinputQ_hor(i).io.enq.bits := io.in.hor(i).bits

    myinputQ_ver(i).io.enq.valid := true.B
    myinputQ_ver(i).io.enq.bits := io.in.ver(i).bits
  }


  for (i <- 0 until n) {
    myinputQ_hor(i).io.deq.ready := ShiftRegister(myinputQ_hor(i).io.deq.valid, i)
    myinputQ_ver(i).io.deq.ready := ShiftRegister(myinputQ_ver(i).io.deq.valid, i)
    // Once we reach the end of inputs, we need to pass zero to avoid further multiplication.
    pes(i)(0).io.in.hor := Mux(myinputQ_hor(i).io.deq.fire, myinputQ_hor(i).io.deq.bits, 0.U.asTypeOf(new FP(m, e)))
    pes(0)(i).io.in.ver := Mux(myinputQ_ver(i).io.deq.fire, myinputQ_ver(i).io.deq.bits, 0.U.asTypeOf(new FP(m, e)))
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


  // The below part is not correct.
  // TODO: Flush the outputs from Systolic Array PEs to the output queue
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


object SystolicArray_forTestingMain extends App {
  emitVerilog(new SystolicArray_forTesting(32, 6, 8))
}