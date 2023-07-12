import chisel3._
import chisel3.util._
import chisel3.util.log2Ceil
import chisel3.util.DecoupledIO
import chisel3.util.EnqIO
import chisel3.util.QueueIO
import chisel3.stage.ChiselStage
import scala.sys.process._ 

class HBFP_MIXMAN(blockSize: Int, m: Int, e:Int) extends Bundle{
    val sign = Vec(blockSize, UInt(1.W))
    val man = Vec(blockSize, UInt(m.W))
    val exp = UInt(e.W)
}

// HBFP_result bundle will be similar to the FP bundle since it will contain single sign, single man, and single exp
class HBFP_result_MIXMAN(m: Int, e: Int) extends Bundle{
    val sign = UInt(1.W)
    val man = UInt(m.W)
    val exp = UInt(e.W)
}


class HBFP_MAC_MIXMAN_4x4(blockSize: Int, m: Int, e: Int) extends Module{
    val io = IO(new Bundle{
        val in = Input(new Bundle{
            val a = new HBFP_MIXMAN(blockSize, m, e)
            val b = new HBFP_MIXMAN(blockSize, m, e)
        })
        val out = Output(new Bundle{
            val result = new HBFP_result_MIXMAN(m, e)
        })
    })

    val exp_addition = io.in.a.exp +& io.in.b.exp
    io.out.result.exp := Mux(exp_addition > (1<<e).asUInt - 1.U, (1<<e).asUInt - 1.U, exp_addition)

    val dotProductRegs = Seq.fill(blockSize)(RegInit(0.U((m).W)))
    val two_complement_buffer = Seq.fill(blockSize)(RegInit(0.S((m + 1).W)))
    val signs = Seq.fill(blockSize)(RegInit(0.U(1.W)))

  if (m == 6.toInt){
    // printf("here")
    for (i <- 0 until blockSize) {
      val multiplierReg = RegInit(0.U(6.W))
      val multiplierReg2 = RegInit(0.U(6.W))
      val padding = RegInit(0.U(2.W))
      val signReg = RegInit(0.U(1.W))
      signReg := io.in.a.sign(i)
      multiplierReg := io.in.a.man(i)
      multiplierReg2 := io.in.b.man(i)
      dotProductRegs(i) := multiplierReg(3,0) * multiplierReg2(3,0) +& (((padding ## multiplierReg(5,4)) * multiplierReg2(3,0)) << 4.U) +& ((multiplierReg(3,0) * (padding ## multiplierReg2(5,4))) << 4.U) +& (((padding##multiplierReg(5,4)) * (padding##multiplierReg2(5,4))) << 8.U)
      signs(i) := signReg ^ io.in.b.sign(i)
      two_complement_buffer(i) := Mux(signs(i)===1.U, (~(0.U ## dotProductRegs(i)) + 1.U), (0.U ## dotProductRegs(i))).asSInt
  }
  }

  else{
  for (i <- 0 until blockSize) {
    val multiplierReg = RegInit(0.U(m.W))
    val signReg = RegInit(0.U(1.W))
    signReg := io.in.a.sign(i)
    multiplierReg := io.in.a.man(i)
    dotProductRegs(i) := multiplierReg * io.in.b.man(i)
    signs(i) := signReg ^ io.in.b.sign(i)
    two_complement_buffer(i) := Mux(signs(i)===1.U, (~(0.U ## dotProductRegs(i)) + 1.U), (0.U ## dotProductRegs(i))).asSInt
  }
}

    val sum = two_complement_buffer.reduce(_ +& _)

    val acc_hbfp = RegInit(0.U((m+1).W))
    acc_hbfp := Mux(sum(m+blockSize-1).asUInt===1.U, Mux((~sum(m+blockSize-2,0).asUInt + 1.U) > (2<<m-1).U - 1.U, (2<<m).U - 1.U, ~(0.U ## sum(m+blockSize-2, 0).asUInt) + 1.U), 
        Mux(sum(m+blockSize-2, 0).asUInt > (2<<m-1).U - 1.U, (2<<m-1).U - 1.U, 0.U ## sum(m+blockSize-2,0).asUInt))

    io.out.result.sign := acc_hbfp(m).asUInt
    io.out.result.man := acc_hbfp(m-1, 0).asUInt 
}


class HBFP_Adder_MIXMAN(m: Int, e: Int) extends Module{
  val io = IO(new Bundle{
    val in = Input(new Bundle{
      val a = new HBFP_result_MIXMAN(m, e)
      val b = new HBFP_result_MIXMAN(m, e)
    })
    val out = Output(new Bundle{
      val result = new HBFP_result(m, e)
    })
  })

  val exp_diff = Mux(io.in.a.exp > io.in.b.exp, io.in.a.exp - io.in.b.exp, io.in.b.exp - io.in.a.exp)

  io.out.result.sign := Mux(io.in.a.exp > io.in.b.exp, Mux(io.in.a.man > (io.in.b.man >> exp_diff), io.in.a.sign, io.in.b.sign), Mux((io.in.a.man)>>exp_diff > io.in.b.man, io.in.a.sign, io.in.b.sign))
  io.out.result.exp := Mux(io.in.a.exp > io.in.b.exp, io.in.a.exp, io.in.b.exp)
  val addition = Mux(io.in.a.exp > io.in.b.exp, Mux(io.in.a.sign === io.in.b.sign, io.in.a.man +& (io.in.b.man >> exp_diff), Mux(io.in.a.man > (io.in.b.man >> exp_diff), io.in.a.man - (io.in.b.man>>exp_diff), (io.in.b.man >> exp_diff) - io.in.a.man)),  Mux(io.in.a.sign === io.in.b.sign, io.in.b.man +& (io.in.a.man >> exp_diff), Mux(io.in.b.man > (io.in.a.man >> exp_diff), io.in.b.man - (io.in.a.man>>exp_diff), (io.in.a.man >> exp_diff) - io.in.b.man)))
  io.out.result.man := Mux(addition > (1<<m).asUInt - 1.U, (1<<m).asUInt - 1.U, addition)

}

