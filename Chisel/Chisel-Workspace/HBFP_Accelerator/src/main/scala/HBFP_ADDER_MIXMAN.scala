import chisel3._
import chisel3.util._
import chisel3.util.log2Ceil
import chisel3.util.DecoupledIO
import chisel3.util.EnqIO
import chisel3.util.QueueIO
import chisel3.stage.ChiselStage
import scala.sys.process._ 


class HBFP_Adder_MIXMAN(m: Int, e: Int) extends Module{
  val io = IO(new Bundle{
    val in = Input(new Bundle{
      val a = new HBFP_result_MIXMAN(m, e)
      val b = new HBFP_result_MIXMAN(m, e)
    })
    val out = Output(new Bundle{
      val result = new HBFP_result_MIXMAN(m, e)
    })
  })

  val exp_diff = Mux(io.in.a.exp > io.in.b.exp, io.in.a.exp - io.in.b.exp, io.in.b.exp - io.in.a.exp)

  io.out.result.sign := Mux(io.in.a.exp > io.in.b.exp, Mux(io.in.a.man > (io.in.b.man >> exp_diff), io.in.a.sign, io.in.b.sign), Mux((io.in.a.man)>>exp_diff > io.in.b.man, io.in.a.sign, io.in.b.sign))
  io.out.result.exp := Mux(io.in.a.exp > io.in.b.exp, io.in.a.exp, io.in.b.exp)
  val addition = Mux(io.in.a.exp > io.in.b.exp, Mux(io.in.a.sign === io.in.b.sign, io.in.a.man +& (io.in.b.man >> exp_diff), Mux(io.in.a.man > (io.in.b.man >> exp_diff), io.in.a.man - (io.in.b.man>>exp_diff), (io.in.b.man >> exp_diff) - io.in.a.man)),  Mux(io.in.a.sign === io.in.b.sign, io.in.b.man +& (io.in.a.man >> exp_diff), Mux(io.in.b.man > (io.in.a.man >> exp_diff), io.in.b.man - (io.in.a.man>>exp_diff), (io.in.a.man >> exp_diff) - io.in.b.man)))
  io.out.result.man := Mux(addition > (1<<m).asUInt - 1.U, (1<<m).asUInt - 1.U, addition)
}