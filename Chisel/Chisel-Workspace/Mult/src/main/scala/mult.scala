import chisel3._

class Multiplication(n: Int, m: Int) extends Module{
    val io = IO(new Bundle {
    val a = Input(UInt(n.W))
    val b = Input(UInt(n.W))
    val y = Output(UInt(n.W))
  })
  val a = io.a
  val b = io.b
  val sign = a(n-1)^b(n-1)
  val exponent = a(n-2,m) + b(n-2,m)
  val mantissa = a(m-1,0)*b(m-1,0)
  val exp = exponent(n-m-2,0)
  val mant = mantissa(m-1,0)

  io.y := sign ## exp ## mant
}

object MultiplicationMain extends App {
//   println("Hello World, I will now generate the Verilog file!")
  emitVerilog(new Multiplication(16, 10))
}