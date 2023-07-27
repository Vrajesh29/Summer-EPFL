import chisel3._

class Hbfp(blockSize: Int, m: Int, e: Int) extends Module{
  val io = IO(new Bundle{
    val man = Input(Vec(blockSize, SInt(m.W)))
    val exp = Input(SInt(e.W))
    val result = Output(SInt((m+e).W))
    val man_a = man.cloneType
    val man_b = man.cloneType
    val exp_a = exp.cloneType
    val exp_b = exp.cloneType
  })
  val man = io.man
  val exp = io.exp
  val exp_output = Wire(UInt(e.W))
  exp_output := io.in.exp_a + io.in.exp_b
  val dot_product_man = VecInit(io.man_a.zip(io.man_b).map { case (a, b) => a * b })
  val accumulator = RegInit(0.S(2*m+blockSize-1))
  io.result := accumulator(2*m+blockSize-1) ## exp_output ## accumulator(m-2, 0)

}
