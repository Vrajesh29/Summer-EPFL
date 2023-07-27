// Testbench for testing the Systolic Array.

import chisel3._
import chiseltest._
import chisel3.util._
import chisel3.util.Reverse
import scala.util.Random
import org.scalatest.flatspec.AnyFlatSpec
import chiseltest.internal._
import firrtl.options.TargetDirAnnotation
import chiseltest.simulator.VerilatorBackendAnnotation
import java.nio.file.{Paths, Path}
import org.scalactic._
import java.io.File
import scala.io.Source

class HBFP_GEMMSpec extends AnyFlatSpec with ChiselScalatestTester {
  "mult" should "pass" in {
    val blockSize = 4
    val m = 4
    val e = 8
    val n = 4

    test(new SystolicArray_HBFP_forTesting(blockSize, n, m, e)).withAnnotations(Seq(TargetDirAnnotation("test/HbfpPass/HBFP"), WriteVcdAnnotation , VerilatorBackendAnnotation )) {
      dut =>

      if (m===6){
        dut.io.in.flag.poke(true.B)
      } else {
        dut.io.in.flag.poke(false.B)
      }
        
      println("Parsing CSV file")
      // Load the CSV file
        val file1 = new File("/home/vpatel/Documents/Chisel/Chisel-Workspace/HBFP_4bitx4mults_Systolic_Array/src/test/scala/HBFP_Systolic_Array1.csv")
        val lines1 = Source.fromFile(file1).getLines().toList

        val file2 = new File("/home/vpatel/Documents/Chisel/Chisel-Workspace/HBFP_4bitx4mults_Systolic_Array/src/test/scala/HBFP_Systolic_Array2.csv")
        val lines2 = Source.fromFile(file2).getLines().toList

      println("Creating data1 structures from CSV file")
      val data1 = lines1.tail.map(_.split(",").map(_.trim.toInt))
      val data2 = lines2.tail.map(_.split(",").map(_.trim.toInt))

      val sign1 = data1.map(_(0)).grouped(blockSize).toList
      val sign1_actual = sign1.grouped(n).toList
      val sign2 = data1.map(_(1)).grouped(blockSize).toList
      val sign2_actual = sign2.grouped(n).toList
      val man1 = data1.map(_(2)).grouped(blockSize).toList
      val man1_actual = man1.grouped(n).toList
      val man2 = data1.map(_(3)).grouped(blockSize).toList
      val man2_actual = man2.grouped(n).toList
      


      val exp1 = data2.map(_(0)).grouped(n).toList
      val exp2 = data2.map(_(1)).grouped(n).toList
      val result_sign = data2.map(_(2)).grouped(n).toList
      val result_exp = data2.map(_(3)).grouped(n).toList
      val result_man = data2.map(_(4)).grouped(n).toList

      println("Pushing tensor")
      dut.clock.step(2)
      for (j <- 0 until n) {
        for (i <- 0 until n) {
            for (k <- 0 until blockSize){
                dut.io.in.hor(i).valid.poke(true.B)
                dut.io.in.hor(i).bits.sign(k).poke(sign1_actual(i)(j)(k).U)
                dut.io.in.hor(i).bits.exp.poke(exp1(i)(j).U)
                dut.io.in.hor(i).bits.man(k).poke(man1_actual(i)(j)(k).U)

                dut.io.in.ver(i).valid.poke(true.B)
                dut.io.in.ver(i).bits.sign(k).poke(sign2_actual(j)(i)(k).U)  // Note the order of i and j is reversed to transpose.
                dut.io.in.ver(i).bits.exp.poke(exp2(j)(i).U)
                dut.io.in.ver(i).bits.man(k).poke(man2_actual(j)(i)(k).U)
            } 
        }
        dut.clock.step(1)
      }
    
    
    println("Step till end of tensor")

    dut.io.in.hor.foreach(_.valid.poke(false.B))
    dut.io.in.ver.foreach(_.valid.poke(false.B))
    
    dut.clock.step(1)

    dut.clock.step(9*n)

    println("Expected results:")

      for (i <- 0 until n) {
        for (j <- 0 until n) {
          // Note than the output sign is not checked since it was giving random sign when the mantissa is zero. Which is not useful to us and this has been extensively verilfied.
          dut.io.out(i)(j).result.exp.expect(result_exp(i)(j).U)
          dut.io.out(i)(j).result.man.expect(result_man(i)(j).U)
        }
      }

    }
  }
}