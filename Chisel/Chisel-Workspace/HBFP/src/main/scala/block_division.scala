// import chisel3._
// import chisel3.util._

// class Hbfpblock(blockSize: Int, m: Int, e: Int, reducedBlockSize: Int) extends Module {
//   val io = IO(new Bundle {
//     val man_a = Input(Vec(blockSize, SInt(m.W)))
//     val man_b = Input(Vec(blockSize, SInt(m.W)))
//     val exp_a = Input(Vec(blockSize/reducedBlockSize, UInt(e.W)))
//     val exp_b = Input(Vec(blockSize/reducedBlockSize, UInt(e.W)))
//     val result = Output(UInt((m + e).W))
//   })

//   val exp_a = io.exp_a
//   val exp_b = io.exp_b
//   val exp_output = Wire(Vec(blockSize/reducedBlockSize,UInt(e.W)))


//   val dotProducts = Seq.fill(blockSize / reducedBlockSize)(Wire(SInt((2 * m).W)))
// //   val shifteddotProducts = Seq.fill(blockSize / reducedBlockSize)(Wire(SInt((2 * m).W)))
//   val accumulator = RegInit(0.S((2 * m + blockSize - 1).W))
// //   val exp_min = Wire(UInt(e.W))
//   for (i <- 0 until blockSize / reducedBlockSize) {
//     val dotProductRegs = Reg(Vec(reducedBlockSize, SInt((2 * m).W)))
//     exp_output(i) := exp_a(i) + exp_b(i)
//     for (j <- 0 until reducedBlockSize) {
//       dotProductRegs(j) := io.man_a(i * reducedBlockSize + j) * io.man_b(i * reducedBlockSize + j)
//     }

//     dotProducts(i) := dotProductRegs.reduce(_ + _)
//   }
// //   exp_min := exp_output.reduce((x, y) => Mux(x < y, x, y))

// //   for (i<- 0 until blockSize/reducedBlockSize){
// //     val exp_diff = exp_output(i) - exp_min
// //     shifteddotProducts(i) := dotProducts(i) >> exp_diff 
// //   }
//   accumulator := shifteddotProducts.reduce(_+_)
//   io.result := accumulator(2 * m + blockSize - 2) ## exp_min ## accumulator(m - 2, 0)
// }


// object HbfpblockMain extends App {
//   emitVerilog(new Hbfpblock(16, 6, 8, 4))
// }

//     // when (i > 0){
//     //    val exp_max = Mux(exp_output(i) > exp_output(i-1), exp_output(i), exp_output(i-1))
//     //    val exp_diff = exp_max - exp_output(i)
//     //    shifteddotProducts(i) := dotProducts(i) >> exp_diff
//     //    adder(i) := shifteddotProducts(i) + adder(i-1)
//     //    rsadder(i) := Mux(adder(i)(2*m) === 1.U, adder(i) >> 1, adder(i))
//     //    exp_final := Mux(adder(i)(2*m) === 1.U, exp_max + 1, exp_max)
//     // }



//     // val exp_diff = exp_output(i) - exp_output(0)

//     // shifteddotProducts(i) :=  dotProducts(i) >> exp_diff
    
//     // exp_min(i+1) := Mux(exp_output(i) < exp_min(i), exp_output(i), exp_min(i))