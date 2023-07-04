// // import chisel3._
// // import chiseltest._
// // import chisel3.util._
// // import chisel3.util.Reverse
// // import scala.util.Random
// // import org.scalatest.flatspec.AnyFlatSpec
// // import chiseltest.internal._
// // import firrtl.options.TargetDirAnnotation
// // import chiseltest.simulator.VerilatorBackendAnnotation
// // import java.nio.file.{Paths, Path}
// // import org.scalactic._
// // import org.apache.poi.ss.usermodel.WorkbookFactory


// // class HbfpSpec extends AnyFlatSpec with ChiselScalatestTester {
// //   "mult" should "pass" in {
// //     val tensorSize = 1024
// //     val blockSize = 16
// //     val m = 5
// //     val e = 8

// //     test(new Hbfp(blockSize, 5, 8)).withAnnotations(Seq(TargetDirAnnotation("test/HbfpPass"), WriteVcdAnnotation /*, VerilatorBackendAnnotation */)) {
// //       dut =>

// //       // Load the Excel file
// //       val path: Path = Paths.get("/home/vpatel/Documents/Chisel/Chisel-Workspace/HBFP_Accelerator/src/test/scala/random_lists.xlsx")
// //       val workbook: Workbook = WorkbookFactory.create(path.toFile)
// //       val sheet: Sheet = workbook.getSheetAt(0)

// //       // Read values from the first four columns and poke them
// //       for (i <- 0 until blockSize) {
// //         val manA = sheet.getRow(i + 1).getCell(1).getNumericCellValue.toInt
// //         val manB = sheet.getRow(i + 1).getCell(2).getNumericCellValue.toInt
// //         val signA = sheet.getRow(i + 1).getCell(3).getNumericCellValue.toInt
// //         val signB = sheet.getRow(i + 1).getCell(4).getNumericCellValue.toInt

// //         dut.io.man_a(i).poke(manA.U)
// //         dut.io.man_b(i).poke(manB.U)
// //         dut.io.sign_a(i).poke(signA.U)
// //         dut.io.sign_b(i).poke(signB.U)
// //       }

// //       // Continue with the rest of the test
// //       dut.io.exp_a.poke(166.U)
// //       dut.io.exp_b.poke(245.U)
// //       dut.clock.step(2)
// //       dut.clock.step(12)
// //       dut.clock.step(7)
// //       dut.io.result.expect("b1_10100001_11000".U)
// //     }
// //   }
// // }

// // import chisel3._
// // import chiseltest._
// // import chisel3.util._
// // import chisel3.util.Reverse
// // import scala.util.Random
// // import org.scalatest.flatspec.AnyFlatSpec
// // import chiseltest.internal._
// // import firrtl.options.TargetDirAnnotation
// // import chiseltest.simulator.VerilatorBackendAnnotation
// // import com.github.tototoshi.xlsx._

// // class HbfpSpec extends AnyFlatSpec with ChiselScalatestTester {
// //   "mult" should "pass" in {
// //     val tensorSize = 1024
// //     val blockSize = 16
// //     val m = 5
// //     val e = 8

// //     test(new Hbfp(blockSize, 5, 8)).withAnnotations(Seq(TargetDirAnnotation("test/HbfpPass"), WriteVcdAnnotation /*, VerilatorBackendAnnotation */)) {
// //       dut =>

// //       // Load the Excel file
// //       val path = "/home/vpatel/Documents/Chisel/Chisel-Workspace/HBFP_Accelerator/src/test/scala/random_lists.xlsx"
// //       val workbook = XLSXReader(path)

// //       // Read values from the first four columns and poke them
// //       for (i <- 0 until blockSize) {
// //         val manA = workbook.cellNumericValue(0, i, 0).toInt
// //         val manB = workbook.cellNumericValue(0, i, 1).toInt
// //         val signA = workbook.cellNumericValue(0, i, 2).toInt
// //         val signB = workbook.cellNumericValue(0, i, 3).toInt

// //         dut.io.man_a(i).poke(manA.U)
// //         dut.io.man_b(i).poke(manB.U)
// //         dut.io.sign_a(i).poke(signA.U)
// //         dut.io.sign_b(i).poke(signB.U)
// //       }

// //       // Continue with the rest of the test
// //       dut.io.exp_a.poke(166.U)
// //       dut.io.exp_b.poke(245.U)
// //       dut.clock.step(2)
// //       dut.clock.step(12)
// //       dut.clock.step(7)
// //       dut.io.result.expect("b1_10100001_11000".U)
// //     }
// //   }
// // }


// // import chisel3._
// // import chiseltest._
// // import chisel3.util._
// // import chisel3.util.Reverse
// // import scala.util.Random
// // import org.scalatest.flatspec.AnyFlatSpec
// // import chiseltest.internal._
// // import firrtl.options.TargetDirAnnotation
// // import chiseltest.simulator.VerilatorBackendAnnotation
// // import java.io.File
// // import org.apache

// // class HbfpSpec extends AnyFlatSpec with ChiselScalatestTester {
// //   "mult" should "pass" in {
// //     val tensorSize = 1024
// //     val blockSize = 16
// //     val m = 5
// //     val e = 8

// //     test(new Hbfp(blockSize, 5, 8)).withAnnotations(Seq(TargetDirAnnotation("test/HbfpPass"), WriteVcdAnnotation /*, VerilatorBackendAnnotation */)) {
// //       dut =>

// //       // Load the Excel file
// //       val file = new File("/home/vpatel/Documents/Chisel/Chisel-Workspace/HBFP_Accelerator/src/test/scala/random_lists.xlsx")
// //       val workbook = WorkbookFactory.create(file)
// //       val sheet = workbook.getSheetAt(0)

// //       // Read values from the first four columns and poke them
// //       for (i <- 0 until blockSize) {
// //         val manA = sheet.getRow(i).getCell(0).getNumericCellValue.toInt
// //         val manB = sheet.getRow(i).getCell(1).getNumericCellValue.toInt
// //         val signA = sheet.getRow(i).getCell(2).getNumericCellValue.toInt
// //         val signB = sheet.getRow(i).getCell(3).getNumericCellValue.toInt

// //         dut.io.man_a(i).poke(manA.U)
// //         dut.io.man_b(i).poke(manB.U)
// //         dut.io.sign_a(i).poke(signA.U)
// //         dut.io.sign_b(i).poke(signB.U)
// //       }

// //       // Continue with the rest of the test
// //       dut.io.exp_a.poke(166.U)
// //       dut.io.exp_b.poke(245.U)
// //       dut.clock.step(2)
// //       dut.clock.step(12)
// //       dut.clock.step(7)
// //       dut.io.result.expect("b1_10100001_11000".U)
// //     }
// //   }
// // }


// // THIS ONE IS FOR HBFP
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
//     val blockSize = 4
//     val m = 5
//     val e = 8


//     test(new Hbfp(blockSize, 5, 8)).withAnnotations(Seq(TargetDirAnnotation("test/HbfpPass"), WriteVcdAnnotation , VerilatorBackendAnnotation)) {
//       dut =>

//       // Load the CSV file
//       val file = new File("/home/vpatel/Documents/Chisel/Chisel-Workspace/HBFP_Accelerator/src/test/scala/random_lists.csv")
//       val lines = Source.fromFile(file).getLines().toList

//       // Read values from the CSV file and poke them
//       for ((line, i) <- lines.tail.take(blockSize).zipWithIndex) {
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

//       // Continue with the rest of the test
//       val exp_1 = lines(blockSize + 1).split(",")(8).toInt
//       val exp_2 = lines(blockSize + 1).split(",")(9).toInt
//       dut.io.exp_a.poke(exp_1.U)
//       dut.io.exp_b.poke(exp_2.U)
//       dut.clock.step(2)
//       dut.clock.step(12)
//       dut.clock.step(7)
//       val value = lines(blockSize + 1).split(",")(12).toInt
//       dut.io.result.expect(value.U)
//     }
//   }
// }

// //THIS ONE IS FOR IMPROVED_HBFP
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
//     val blockSize = 16
//     val m = 6
//     val e = 8


//     test(new Improved_hbfp(blockSize, m, e)).withAnnotations(Seq(TargetDirAnnotation("test/HbfpPass"), WriteVcdAnnotation , VerilatorBackendAnnotation)) {
//       dut =>

//       // Load the CSV file
//       val file = new File("/home/vpatel/Documents/Chisel/Chisel-Workspace/HBFP_Accelerator/src/test/scala/random_lists.csv")
//       val lines = Source.fromFile(file).getLines().toList

//       // Read values from the CSV file and poke them
//       for ((line, i) <- lines.tail.take(blockSize).zipWithIndex) {
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

//       // Continue with the rest of the test
//       val exp_1 = lines(blockSize + 1).split(",")(8).toInt
//       val exp_2 = lines(blockSize + 1).split(",")(9).toInt
//       dut.io.exp_a.poke(exp_1.U)
//       dut.io.exp_b.poke(exp_2.U)
//       dut.clock.step(2)
//       dut.clock.step(12)
//       dut.clock.step(7)
//       val value = lines(blockSize + 1).split(",")(12).toInt
//       dut.io.result.expect(value.U)
//     }
//   }
// }



// //Double checking
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
//     val blockSize = 16
//     val m = 6
//     val e = 8


//     test(new Improved_hbfp(blockSize, m, e)).withAnnotations(Seq(TargetDirAnnotation("test/HbfpPass"), WriteVcdAnnotation , VerilatorBackendAnnotation)) {
//       dut =>

//       // Load the CSV file
//       val file = new File("/home/vpatel/Documents/Chisel/Chisel-Workspace/HBFP_Accelerator/src/test/scala/random_lists.csv")
//       val lines = Source.fromFile(file).getLines().toList

//       // Read values from the CSV file and poke them
//     //   dut.io.control.poke(1.B)
//       for ((line, i) <- lines.tail.take(blockSize).zipWithIndex) {
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

//       // Continue with the rest of the test
//       val exp_1 = lines(blockSize + 1).split(",")(8).toInt
//       val exp_2 = lines(blockSize + 1).split(",")(9).toInt
//       dut.io.exp_a.poke(exp_1.U)
//       dut.io.exp_b.poke(exp_2.U)
//       dut.clock.step(2)
//     //   dut.io.control.poke(0.B)
//       dut.clock.step(12)
//       dut.clock.step(7)
//       val value = lines(blockSize + 1).split(",")(12).toInt
//       dut.io.result.expect(value.U)
//     }
//   }
// }



// // For elegant.scala

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
//     val blockSize = 16
//     val m = 6
//     val e = 8


//     test(new Improved_hbfp(blockSize, m, e)).withAnnotations(Seq(TargetDirAnnotation("test/HbfpPass"), WriteVcdAnnotation , VerilatorBackendAnnotation)) {
//       dut =>

//       // Load the CSV file
//       val file = new File("/home/vpatel/Documents/Chisel/Chisel-Workspace/HBFP_Accelerator/src/test/scala/random_lists.csv")
//       val lines = Source.fromFile(file).getLines().toList

//       // Read values from the CSV file and poke them
//       for ((line, i) <- lines.tail.take(blockSize).zipWithIndex) {
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

//       // Continue with the rest of the test
//       val exp_1 = lines(blockSize + 1).split(",")(8).toInt
//       val exp_2 = lines(blockSize + 1).split(",")(9).toInt
//       dut.io.in.a.exp.poke(exp_1.U)
//       dut.io.in.b.exp.poke(exp_2.U)
//       dut.clock.step(2)
//       dut.clock.step(12)
//       dut.clock.step(7)
//       val value = lines(blockSize + 1).split(",")(12).toInt
//       dut.io.result.expect(value.U)
//     }
//   }
// }



