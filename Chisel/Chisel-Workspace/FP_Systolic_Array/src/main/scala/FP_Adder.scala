// A FP adder to add two numbers in FP format.

import chisel3._
import chisel3.util._
import chisel3.util.log2Ceil
import chisel3.util.DecoupledIO
import chisel3.util.EnqIO
import chisel3.util.QueueIO
import chisel3.stage.ChiselStage
import scala.sys.process._

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

  val exp_diff = Mux(io.in.a.exp > io.in.b.exp, io.in.a.exp - io.in.b.exp, io.in.b.exp - io.in.a.exp)  // Difference of the exponents of the inputs

  // Sign will depend on the larger number. If the exponents are equal, then the sign will depend on the larger mantissa. 
  // If exponents are unequal, then we will shift and check the for the sign.
  io.out.result.sign := Mux(io.in.a.exp > io.in.b.exp, Mux(io.in.a.man > (io.in.b.man >> exp_diff), io.in.a.sign, io.in.b.sign), Mux((io.in.a.man)>>exp_diff > io.in.b.man, io.in.a.sign, io.in.b.sign)) 
  
  // Output exponent is the larger of two exponents.
  io.out.result.exp := Mux(io.in.a.exp > io.in.b.exp, io.in.a.exp, io.in.b.exp)
  
  // The below logic for finding the mantissa is doubly checked. So you may not worry about it.
  val addition = Mux(io.in.a.exp > io.in.b.exp, Mux(io.in.a.sign === io.in.b.sign, io.in.a.man +& (io.in.b.man >> exp_diff), Mux(io.in.a.man > (io.in.b.man >> exp_diff), io.in.a.man - (io.in.b.man>>exp_diff), (io.in.b.man >> exp_diff) - io.in.a.man)),  Mux(io.in.a.sign === io.in.b.sign, io.in.b.man +& (io.in.a.man >> exp_diff), Mux(io.in.b.man > (io.in.a.man >> exp_diff), io.in.b.man - (io.in.a.man>>exp_diff), (io.in.a.man >> exp_diff) - io.in.b.man)))
  io.out.result.man := Mux(addition > (1<<m).asUInt - 1.U, (1<<m).asUInt - 1.U, addition)  // If the mantissa exceeds the maximum permissible value, saturate it to the maximum value.

}