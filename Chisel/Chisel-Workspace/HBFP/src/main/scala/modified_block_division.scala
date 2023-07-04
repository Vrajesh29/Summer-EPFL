// import chisel3._
// import chisel3.util._

// class Hbfpblock2(blockSize: Int, m: Int, e: Int, reducedBlockSize: Int) extends Module {
//   val io = IO(new Bundle {
//     val man_a = Input(Vec(blockSize, SInt(m.W)))
//     val man_b = Input(Vec(blockSize, SInt(m.W)))
//     val exp_a = Input(Vec(blockSize/reducedBlockSize, UInt(e.W)))
//     val exp_b = Input(Vec(blockSize/reducedBlockSize, UInt(e.W)))
//     val result = Output(UInt((m + e).W))
//   })

//   val exp_a = io.exp_a
//   val exp_b = io.exp_b
//   val exp_output = Wire(Vec(blockSize/reducedBlockSize, UInt(e.W)))

//   val dotProducts = Seq.fill(blockSize / reducedBlockSize)(Wire(SInt((2 * m).W)))

//   for (i <- 0 until blockSize / reducedBlockSize) {
//     val dotProductRegs = Reg(Vec(reducedBlockSize, SInt((2 * m).W)))
//     exp_output(i) := exp_a(i) + exp_b(i)
//     for (j <- 0 until reducedBlockSize) {
//       dotProductRegs(j) := io.man_a(i * reducedBlockSize + j) * io.man_b(i * reducedBlockSize + j)
//     }

//     dotProducts(i) := dotProductRegs.reduce(_ + _)
//   }

//   val shiftedDotProducts = Wire(Vec(blockSize / reducedBlockSize, SInt((2 * m).W)))
//   shiftedDotProducts(0) := Mux(exp_output(1)>exp_output(0), dotProducts(0)>>(exp_output(1)-exp_output(0)), dotProducts(0))

//   for (i <- 1 until blockSize / reducedBlockSize) {
//     val exp_max = Mux(exp_output(i)>exp_output(i-1), exp_output(i), exp_output(i-1))
//     val exp_diff = exp_output(i) - exp_max
//     shiftedDotProducts(i) := dotProducts(i) >> exp_diff
//   }

//   val adderTreeOutputs = Wire(Seq(blockSize / reducedBlockSize, UInt((2 * m).W)))
//   val adderTreeInputs = Seq.fill(blockSize/reducedBlockSize)(Wire(SInt((2*m).W)))

//   for (i <- 0 until blockSize / reducedBlockSize) {
//     adderTreeInputs(i) := shiftedDotProducts(i)
//   }

//   def buildAdderTree(inputs: Seq[SInt]): Seq[SInt] = {
//     // val inputs = Seq.fill(blockSize/reducedBlockSize)(Wire(SInt((2*m).W)))
//     if (inputs.length == 1) {
//       inputs
//     } else {
//       val nextLevel = buildAdderTree(inputs.grouped(2).map {
//         case Seq(a, b) => a+b
//         case Seq(a) => a
//       }.toList)

//       nextLevel.zip(inputs).map { case (out, in) => Mux(in(0), out, in) }
//     }
//   }

//   adderTreeOutputs := buildAdderTree(adderTreeInputs)

//   val accumulator = RegInit(0.S((2 * m + blockSize - 1).W))
//   accumulator := adderTreeOutputs.reduce(_ + _)

//   io.result := accumulator(2 * m + blockSize - 2) ## exp_output.reduce(_ min _) ## accumulator(m - 2, 0)
// }


// // def signedAdderTree(n: Int, m: Int, inputs: Seq[SInt]): SInt = {
// //   require(n > 0, "Number of inputs (n) must be greater than zero.")
// //   require(m > 0, "Width of each input (m) must be greater than zero.")
// //   require(inputs.length == n, "Number of inputs must match the number of blocks.")

// //   if (n == 1) {
// //     inputs.head
// //   } else {
// //     val numLevels = log2Ceil(n)
// //     val levelInputs = Wire(Vec(n, SInt(m.W)))

// //     // Connect inputs to level 0 of the tree
// //     for (i <- 0 until n) {
// //       levelInputs(i) := inputs(i)
// //     }

// //     // Build the adder tree recursively
// //     var currentLevelInputs = levelInputs
// //     for (level <- 0 until numLevels) {
// //       val nextLevelSize = (n + (1 << level) - 1) / (1 << level)
// //       val nextLevelInputs = Wire(Vec(nextLevelSize, SInt(m.W)))

// //       for (i <- 0 until nextLevelSize) {
// //         if (i * 2 + 1 < currentLevelInputs.length) {
// //           nextLevelInputs(i) := currentLevelInputs(i * 2) +& currentLevelInputs(i * 2 + 1)
// //         } else {
// //           nextLevelInputs(i) := currentLevelInputs(i * 2)
// //         }
// //       }

// //       currentLevelInputs = nextLevelInputs
// //     }

// //     currentLevelInputs.head
// //   }
// // }

// object Hbfpblock2Main extends App {
//   emitVerilog(new Hbfpblock2(16, 6, 8, 4))
// }
