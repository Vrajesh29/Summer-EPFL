// A FP PE, which takes two numbers, one from the horizontal direction and another from the vertical direction for MAC operation.

import chisel3._
import chisel3.util._
import chisel3.util.log2Ceil
import chisel3.util.DecoupledIO
import chisel3.util.EnqIO
import chisel3.util.QueueIO
import chisel3.stage.ChiselStage
import scala.sys.process._


class PE(m: Int, e: Int) extends Module{
  val io = IO(new Bundle{
    val in = Input(new Bundle{
      val hor = new FP(m, e)
      val ver = new FP(m, e)
    })
    val out = Output(new Bundle {
      val hor = new FP(m, e)   // To pass it on to the next PE in the horizontal direction
      val ver = new FP(m, e)   // To pass it on to the next PE in the vertical direction
      val result = new FP(m, e)
    })
    })

    val result_buffer = Reg(new FP(m, e))  // A buffer to store the result of the multiplication and addition. To avoid combinational loop.

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