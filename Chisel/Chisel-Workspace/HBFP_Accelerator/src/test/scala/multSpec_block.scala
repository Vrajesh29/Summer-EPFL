// import chisel3._
// import chiseltest._
// import chisel3.util._
// import chisel3.util.Reverse
// import scala.util.Random
// import org.scalatest.flatspec.AnyFlatSpec
// import chiseltest.internal._
// import firrtl.options.TargetDirAnnotation
// import chiseltest.simulator.VerilatorBackendAnnotation
// import java.io.File
// import scala.io.Source


// class HbfpSpec extends AnyFlatSpec with ChiselScalatestTester {
//   "mult" should "pass" in {
//     val tensorSize = 64
//     val blockSize = 16
//     val m = 6
//     val e = 8


//     test(new HbfpTensor(blockSize, m, e, tensorSize)).withAnnotations(Seq(TargetDirAnnotation("test/HbfpPass"), WriteVcdAnnotation , VerilatorBackendAnnotation)) {
//       dut =>

//       // Load the CSV file
//       val file = new File("/home/vpatel/Documents/Chisel/Chisel-Workspace/HBFP_Accelerator/src/test/scala/random_lists_block.csv")
//       val lines = Source.fromFile(file).getLines().toList

//       // Read values from the CSV file and poke them
//       for ((line, i) <- lines.tail.take(tensorSize).zipWithIndex) {
//         val values = line.split(",")
//         val manA = values(0).toInt
//         val manB = values(1).toInt
//         val signA = values(2).toInt
//         val signB = values(3).toInt

//         dut.io.man_a(i).poke(manA.U)
//         dut.io.man_b(i).poke(manB.U)
//         dut.io.sign_a(i).poke(signA.U)
//         dut.io.sign_b(i).poke(signB.U)
//       }

//       for ((line, i) <- lines.tail.take(tensorSize/blockSize).zipWithIndex) {
//         val values = line.split(",")
//         val expA = values(4).toInt
//         val expB = values(5).toInt


//         dut.io.exp_a(i).poke(expA.U)
//         dut.io.exp_b(i).poke(expB.U)
//       }

//       dut.io.control.poke(0.B)
//       dut.io.control2.poke(1.B)
//       dut.clock.step(2)
//       dut.io.control2.poke(0.B)
//       dut.clock.step(12)
//       dut.io.control.poke(1.B)
//       dut.clock.step(7)
//       val value = lines(1).split(",")(8).toInt
//       dut.io.result.expect(value.U)
//     }
//   }
// }




// // FOR IMPROVED HBFP TENSOR
// import chisel3._
// import chiseltest._
// import chisel3.util._
// import chisel3.util.Reverse
// import scala.util.Random
// import org.scalatest.flatspec.AnyFlatSpec
// import chiseltest.internal._
// import firrtl.options.TargetDirAnnotation
// import chiseltest.simulator.VerilatorBackendAnnotation
// import java.io.File
// import scala.io.Source


// class HbfpSpec extends AnyFlatSpec with ChiselScalatestTester {
//   "mult" should "pass" in {
//     val tensorSize = 1024
//     val blockSize = 64
//     val m = 6
//     val e = 8


//     test(new Improved_HbfpTensor(blockSize, m, e, tensorSize)).withAnnotations(Seq(TargetDirAnnotation("test/HbfpPass"), WriteVcdAnnotation , VerilatorBackendAnnotation)) {
//       dut =>

//       // Load the CSV file
//       val file = new File("/home/vpatel/Documents/Chisel/Chisel-Workspace/HBFP_Accelerator/src/test/scala/random_lists_block.csv")
//       val lines = Source.fromFile(file).getLines().toList

//       // Read values from the CSV file and poke them
//       for ((line, i) <- lines.tail.take(tensorSize).zipWithIndex) {
//         val values = line.split(",")
//         val manA = values(0).toInt
//         val manB = values(1).toInt
//         val signA = values(2).toInt
//         val signB = values(3).toInt

//         dut.io.man_a(i).poke(manA.U)
//         dut.io.man_b(i).poke(manB.U)
//         dut.io.sign_a(i).poke(signA.U)
//         dut.io.sign_b(i).poke(signB.U)
//       }

//       for ((line, i) <- lines.tail.take(tensorSize/blockSize).zipWithIndex) {
//         val values = line.split(",")
//         val expA = values(4).toInt
//         val expB = values(5).toInt


//         dut.io.exp_a(i).poke(expA.U)
//         dut.io.exp_b(i).poke(expB.U)
//       }

//       dut.io.control.poke(0.B)
//       dut.io.control2.poke(1.B)
//       dut.clock.step(2)
//       dut.io.control2.poke(0.B)
//       dut.clock.step(14)
//       dut.io.control.poke(1.B)
//       dut.clock.step(7)
//       val value = lines(1).split(",")(8).toInt
//       dut.io.result.expect(value.U)
//     }
//   }
// }





// // FOR BUNDLED BLOCK DIVISION
// import chisel3._
// import chiseltest._
// import chisel3.util._
// import chisel3.util.Reverse
// import scala.util.Random
// import org.scalatest.flatspec.AnyFlatSpec
// import chiseltest.internal._
// import firrtl.options.TargetDirAnnotation
// import chiseltest.simulator.VerilatorBackendAnnotation
// import java.io.File
// import scala.io.Source


// class HbfpSpec extends AnyFlatSpec with ChiselScalatestTester {
//   "mult" should "pass" in {
//     val tensorSize = 16
//     val blockSize = 4
//     val m = 6
//     val e = 8


//     test(new Improved_HbfpTensor(blockSize, m, e, tensorSize)).withAnnotations(Seq(TargetDirAnnotation("test/HbfpPass"), WriteVcdAnnotation , VerilatorBackendAnnotation)) {
//       dut =>

//       // Load the CSV file
//       val file = new File("/home/vpatel/Documents/Chisel/Chisel-Workspace/HBFP_Accelerator/src/test/scala/random_lists_block.csv")
//       val lines = Source.fromFile(file).getLines().toList

//       // Read values from the CSV file and poke them
//       for ((line, i) <- lines.tail.take(tensorSize).zipWithIndex) {
//         val values = line.split(",")
//         val manA = values(0).toInt
//         val manB = values(1).toInt
//         val signA = values(2).toInt
//         val signB = values(3).toInt

//         dut.io.in.a.man(i).poke(manA.U)
//         dut.io.in.b.man(i).poke(manB.U)
//         dut.io.in.a.sign(i).poke(signA.U)
//         dut.io.in.b.sign(i).poke(signB.U)
//       }

//       for ((line, i) <- lines.tail.take(tensorSize/blockSize).zipWithIndex) {
//         val values = line.split(",")
//         val expA = values(4).toInt
//         val expB = values(5).toInt


//         dut.io.in.a.exp(i).poke(expA.U)
//         dut.io.in.b.exp(i).poke(expB.U)
//       }

//       dut.io.in.control.poke(0.B)
//       dut.io.in.control2.poke(1.B)
//       dut.clock.step(2)
//       dut.io.in.control2.poke(0.B)
//       dut.clock.step(14)
//       dut.io.in.control.poke(1.B)
//       dut.clock.step(7)
//       val value = lines(1).split(",")(8).toInt
//       dut.io.result.expect(value.U)
//     }
//   }
// }