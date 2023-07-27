/* A FP multiplier to multiply two Floating point numbers of the same precision. Kindly note that the mantissa width and the 
exponent width are parametrized so you may use any of FP32 or FP16 or anything in between*/

import chisel3._
import chisel3.util._
import chisel3.util.log2Ceil
import chisel3.util.DecoupledIO
import chisel3.util.EnqIO
import chisel3.util.QueueIO
import chisel3.stage.ChiselStage
import scala.sys.process._

class FPMult(m: Int, e: Int) extends Module{
  val io = IO(new Bundle{
    val in = Input(new Bundle{
      val a = new FP(m, e)  // Inputs in FP format
      val b = new FP(m, e)
    })
    val out = Output(new Bundle{
      val result = new FP(m, e)    // Output in FP format 
    })
  })

  io.out.result.sign := io.in.a.sign ^ io.in.b.sign   // Sign of the output is the XOR of the signs of the inputs
  val exp_addition = io.in.a.exp +& io.in.b.exp       // Exponent of the output is the sum of the exponents of the inputs. 
  io.out.result.exp := Mux(exp_addition > (1<<e).asUInt - 1.U, (1<<e).asUInt - 1.U, exp_addition)  // If the exponent exceddes the maximum permissible value, saturate it to the maximum value.
  io.out.result.man := Mux(io.in.a.man*io.in.b.man > (1<<m).asUInt - 1.U, (1<<m).asUInt - 1.U, io.in.a.man*io.in.b.man) // If mantissa exceeds the maximum permissible value, saturate it to the maximum value.
}