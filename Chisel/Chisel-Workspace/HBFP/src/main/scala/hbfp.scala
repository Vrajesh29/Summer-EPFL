// // VERSION:1
// import chisel3._

// class Hbfp(blockSize: Int, m: Int, e: Int) extends Module{
//   val io = IO(new Bundle{
//     val man_a = Input(Vec(blockSize, SInt(m.W)))
//     val man_b = Input(Vec(blockSize, SInt(m.W)))
//     val exp_a = Input(UInt(e.W))
//     val exp_b = Input(UInt(e.W))
//     val result = Output(UInt((m+e).W))
//     // val man_a = man.cloneType
//     // val man_b = man.cloneType
//     // val exp_a = exp.cloneType
//     // val exp_b = exp.cloneType
//   })
//     val man_a = io.man_a
//     val man_b = io.man_b
//     val exp_a = io.exp_a
//     val exp_b = io.exp_b
//     val exp_output = Wire(UInt(e.W))
//   exp_output := (exp_a + exp_b)
//   val dot_product_man = VecInit(io.man_a.zip(io.man_b).map { case (a, b) => a * b })
//   val accumulator = RegInit(0.S((2*m+blockSize-1).W))
//   accumulator := dot_product_man.reduceTree(_+_)
//   io.result := accumulator(2*m+blockSize-2) ## exp_output ## accumulator(m-2, 0)

// }

// object HbfpMain extends App {
//   emitVerilog(new Hbfp(16, 6, 8))
// }


// VERSION:2 (Sequential)

// import chisel3._
// import chisel3.util._

// class Hbfp(blockSize: Int, m: Int, e: Int) extends Module {
//   val io = IO(new Bundle {
//     val man_a = Input(Vec(blockSize, SInt(m.W)))
//     val man_b = Input(Vec(blockSize, SInt(m.W)))
//     val exp_a = Input(UInt(e.W))
//     val exp_b = Input(UInt(e.W))
//     val result = Output(UInt((m + e).W))
//   })

//   val exp_a = io.exp_a
//   val exp_b = io.exp_b
//   val exp_output = Wire(UInt(e.W))
//   exp_output := exp_a + exp_b

//   val dot_product_man = Wire(Vec(blockSize, SInt((2 * m).W)))
//   val accumulator = RegInit(0.S((2 * m + blockSize - 1).W))

//   val dotProductRegs = Reg(Vec(blockSize, SInt((2 * m).W)))
//   for (i <- 0 until blockSize) {
//     dot_product_man(i) := dotProductRegs(i)
//   }

//   val multiplierRegs = Seq.fill(blockSize)(Module(new Multiplier(m)).io)
//   for (i <- 0 until blockSize) {
//     multiplierRegs(i).a := io.man_a(i)
//     multiplierRegs(i).b := io.man_b(i)
//     dotProductRegs(i) := multiplierRegs(i).result
//   }

//   accumulator := dot_product_man.reduceTree(_+_)

//   io.result := accumulator(2 * m + blockSize - 2) ## exp_output ## accumulator(m - 2, 0)
// }

// class Multiplier(m: Int) extends Module {
//   val io = IO(new Bundle {
//     val a = Input(SInt(m.W))
//     val b = Input(SInt(m.W))
//     val result = Output(SInt((2 * m).W))
//   })
//   io.result := io.a * io.b
// }

// object HbfpMain extends App {
//   emitVerilog(new Hbfp(16, 6, 8))
// }


// VERSION:3
// import chisel3._
// import chisel3.util._

// class Hbfp(blockSize: Int, m: Int, e: Int) extends Module {
//   val io = IO(new Bundle {
//     val man_a = Input(Vec(blockSize, SInt(m.W)))
//     val man_b = Input(Vec(blockSize, SInt(m.W)))
//     val exp_a = Input(UInt(e.W))
//     val exp_b = Input(UInt(e.W))
//     val result = Output(UInt((m + e).W))
//   })

//   val exp_a = io.exp_a
//   val exp_b = io.exp_b
//   val exp_output = Wire(UInt(e.W))
//   exp_output := exp_a + exp_b

//   val dotProductRegs = Reg(Vec(blockSize, SInt((2 * m).W)))
//   val accumulator = RegInit(0.S((2 * m + blockSize - 1).W))

//   val multiplierRegs = Seq.fill(blockSize)(Module(new Multiplier(m)).io)
//   for (i <- 0 until blockSize) {
//     multiplierRegs(i).a := io.man_a(i)
//     multiplierRegs(i).b := io.man_b(i)
//     dotProductRegs(i) := multiplierRegs(i).result
//   }

//   accumulator := dotProductRegs.reduce(_+_)

//   io.result := accumulator(2 * m + blockSize - 2) ## exp_output ## accumulator(m - 2, 0)
// }

// class Multiplier(m: Int) extends Module {
//   val io = IO(new Bundle {
//     val a = Input(SInt(m.W))
//     val b = Input(SInt(m.W))
//     val result = Output(SInt((2 * m).W))
//   })

//   io.result := RegNext(io.a * io.b)
// }

// object HbfpMain extends App {
//   emitVerilog(new Hbfp(16, 6, 8))
// }

// VERSION:4 (Registers at each multiplication)
// import chisel3._
// import chisel3.util._

// class Hbfp(blockSize: Int, m: Int, e: Int) extends Module {
//   val io = IO(new Bundle {
//     val man_a = Input(Vec(blockSize, SInt(m.W)))
//     val man_b = Input(Vec(blockSize, SInt(m.W)))
//     val exp_a = Input(UInt(e.W))
//     val exp_b = Input(UInt(e.W))
//     val result = Output(UInt((m + e).W))
//   })

//   val exp_a = io.exp_a
//   val exp_b = io.exp_b
//   val exp_output = Wire(UInt(e.W))
//   exp_output := exp_a + exp_b

//   val dotProductRegs = Seq.fill(blockSize)(RegInit(0.S((2 * m).W)))
//   val accumulator = RegInit(0.S((2 * m + blockSize - 1).W))

//   for (i <- 0 until blockSize) {
//     val multiplierReg = RegInit(0.S(m.W))
//     multiplierReg := io.man_a(i)
//     dotProductRegs(i) := multiplierReg * io.man_b(i)
//   }

//   accumulator := dotProductRegs.reduce(_ +& _)

//   io.result := accumulator(2 * m + blockSize - 2) ## exp_output ## accumulator(m - 2, 0)
// }


// // VERSION:5 (seperate sign)
import chisel3._
import chisel3.util._

class Hbfp(blockSize: Int, m: Int, e: Int) extends Module {
  val io = IO(new Bundle {
    val man_a = Input(Vec(blockSize, UInt(m.W)))
    val man_b = Input(Vec(blockSize, UInt(m.W)))
    val sign_a = Input(Vec(blockSize, UInt(1.W)))
    val sign_b = Input(Vec(blockSize, UInt(1.W)))
    val exp_a = Input(UInt(e.W))
    val exp_b = Input(UInt(e.W))
    val result = Output(UInt((m + e + 1).W))
  })

  val exp_a = io.exp_a
  val exp_b = io.exp_b
  val exp_output = Wire(UInt(e.W))
  exp_output := exp_a + exp_b

  val dotProductRegs = Seq.fill(blockSize)(RegInit(0.U((2 * m).W)))
  val signs = Seq.fill(blockSize)(RegInit(0.U(1.W)))
  val accumulator = RegInit(0.U((2 * m + blockSize - 1).W))
  // val sign_sum = RegInit(0.U(1.W))
  // val magnitude_sum = RegInit(0.U((2 * m + blockSize - 1).W))
  // val current_sign = RegInit(0.U(1.W))

  for (i <- 0 until blockSize) {
    val multiplierReg = RegInit(0.U(m.W))
    val signReg = RegInit(0.U(1.W))
    signReg := io.sign_a(i)
    multiplierReg := io.man_a(i)
    dotProductRegs(i) := multiplierReg * io.man_b(i)
    signs(i) := signReg ^ io.sign_b(i)
  }


  accumulator := dotProductRegs.reduce(_ +& _)

  io.result := accumulator(2 * m + blockSize - 2) ## exp_output ## accumulator(m - 2, 0)
}

object HbfpMain extends App {
  emitVerilog(new Hbfp(16, 6, 8))
}
