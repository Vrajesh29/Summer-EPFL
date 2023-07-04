// import chisel3._
// import chisel3.util._

// class FloatingPointAdderTree(val numInputs: Int, val expWidth: Int, val mantWidth: Int) extends Module {
//   val io = IO(new Bundle {
//     val expInputs = Input(Vec(numInputs, UInt(expWidth.W)))
//     val mantInputs = Input(Vec(numInputs, UInt(mantWidth.W)))
//     val expOutput = Output(UInt(expWidth.W))
//     val mantOutput = Output(UInt(mantWidth.W))
//   })

//   // Create a vector of FloatingPoint instances
//   val inputs = Wire(Vec(numInputs, new FloatingPoint(sign, expWidth, mantWidth)))

//   // Assign the inputs' exponents and mantissas
//   for (i <- 0 until numInputs) {
//     inputs(i).exp := io.expInputs(i)
//     inputs(i).mant := io.mantInputs(i)
//   }

//   // Calculate the number of levels in the adder tree
//   val numLevels = log2Ceil(numInputs)

//   // Wire to hold the intermediate results at each level
//   val intermediateResults = Wire(Vec(numLevels, new FloatingPoint(expWidth, mantWidth)))

//   // Assign the inputs to the intermediate results
//   intermediateResults(0) := inputs

//   // Generate the adder tree levels
//   for (i <- 1 until numLevels) {
//     val levelInputs = intermediateResults(i - 1)
//     val levelOutputs = Wire(Vec(numInputs / (1 << i), new FloatingPoint(expWidth, mantWidth)))

//     for (j <- 0 until (numInputs / (1 << i))) {
//       val input1 = levelInputs(j * 2)
//       val input2 = levelInputs(j * 2 + 1)
//       levelOutputs(j) := input1 + input2
//     }

//     intermediateResults(i) := levelOutputs
//   }

//   // Assign the final result to the output
//   io.expOutput := intermediateResults(numLevels - 1).exp
//   io.mantOutput := intermediateResults(numLevels - 1).mant
// }



// object FloatingPointAdderTreeMain extends App {
//   emitVerilog(new FloatingPointAdderTree(16, 6, 4))
// }



// // class adderTree(m: Int, blockSize:Int, reducedBlockSize:Int) extends Module{
// //     val io = IO(new Bundle{
// //         val adderTreeInputs = Input(Vec(blockSize/reducedBlockSize, SInt((2*m).W)))
// //         val adderTreeOutputs = Output(SInt((2*m+(blockSize/reducedBlockSize)-1).W))
// //     })
// //     val adderTreeInputs = io.adderTreeInputs
// //     if (blockSize/reducedBlockSize ==1){
// //         io.adderTreeOutputs := adderTreeInputs(0)
// //     }
// //     else {
// //         val stages = log2Ceil(blockSize/reducedBlockSize)
// //         val levelInputs = Wire(Vec(blockSize/reducedBlockSize, SInt(m.W)))
// //         for (i<- 0 until blockSize/reducedBlockSize){
// //             levelInputs(i) := adderTreeInputs(i)
// //         }

// //         var currentLevelInputs = levelInputs
// //         for (i <- 1 until stages+1){
// //             // val nextLevelSize = (blockSize/reducedBlockSize + (1<<i) -1)/(1<<i)
// //             val nextLevelSize = (blockSize/(2*i*reducedBlockSize))
// //             val nextLevelInputs = Wire(Vec(nextLevelSize, SInt((2*m).W)))
// //             for (j<- 0 until nextLevelSize){
// //                 if (2*j+1 < currentLevelInputs.length){
// //                     nextLevelInputs(j) := currentLevelInputs(j * 2) +& currentLevelInputs(j * 2 + 1)
// //                 }
// //                 else{
// //                     nextLevelInputs(j) := currentLevelInputs(j * 2)
// //                 }
// //             }
// //             currentLevelInputs = nextLevelInputs
// //         }
// //         io.adderTreeOutputs := currentLevelInputs(0)
// //     }
// // }