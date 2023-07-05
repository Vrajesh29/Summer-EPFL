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

class HbfpSpec extends AnyFlatSpec with ChiselScalatestTester {
  "mult" should "pass" in {
    val m = 5
    val e = 8
    val n = 2

    test(new SystolicArray(n, m, e)).withAnnotations(Seq(TargetDirAnnotation("test/HbfpPass"), WriteVcdAnnotation , VerilatorBackendAnnotation )) {
      dut =>

        dut.io.in.bits(0)(0).hor.sign.poke(0.U)
        dut.io.in.bits(0)(0).hor.exp.poke(0.U)
        dut.io.in.bits(0)(0).hor.man.poke(1.U)

        dut.io.in.valid.poke(1.B)

        dut.io.in.bits(0)(0).ver.sign.poke(0.U)
        dut.io.in.bits(0)(0).ver.exp.poke(0.U)
        dut.io.in.bits(0)(0).ver.man.poke(1.U)

        // dut.clock.step(1)

        dut.io.in.bits(0)(1).hor.sign.poke(0.U)
        dut.io.in.bits(0)(1).hor.exp.poke(0.U)
        dut.io.in.bits(0)(1).hor.man.poke(2.U)

        dut.io.in.bits(1)(0).hor.sign.poke(0.U)
        dut.io.in.bits(1)(0).hor.exp.poke(0.U)
        dut.io.in.bits(1)(0).hor.man.poke(3.U)

        dut.io.in.bits(0)(1).ver.sign.poke(0.U)
        dut.io.in.bits(0)(1).ver.exp.poke(0.U)
        dut.io.in.bits(0)(1).ver.man.poke(2.U)

        dut.io.in.bits(1)(0).ver.sign.poke(0.U)
        dut.io.in.bits(1)(0).ver.exp.poke(0.U)
        dut.io.in.bits(1)(0).ver.man.poke(3.U)

        // dut.clock.step(1)

        dut.io.in.bits(1)(1).hor.sign.poke(0.U)
        dut.io.in.bits(1)(1).hor.exp.poke(0.U)
        dut.io.in.bits(1)(1).hor.man.poke(4.U)

        dut.io.in.bits(1)(1).ver.sign.poke(0.U)
        dut.io.in.bits(1)(1).ver.exp.poke(0.U)
        dut.io.in.bits(1)(1).ver.man.poke(4.U)
        
        dut.clock.step(n)

        dut.io.in.valid.poke(0.B)

        dut.clock.step(2*n -1)

        dut.io.out(0)(0).result.sign.expect(0.U)
        dut.io.out(0)(0).result.exp.expect(0.U)
        dut.io.out(0)(0).result.man.expect(7.U)

        // dut.clock.step(1)

        dut.io.out(0)(1).result.sign.expect(0.U)
        dut.io.out(0)(1).result.exp.expect(0.U)
        dut.io.out(0)(1).result.man.expect(10.U)

        // dut.clock.step(1)

        dut.io.out(1)(0).result.sign.expect(0.U)
        dut.io.out(1)(0).result.exp.expect(0.U)
        dut.io.out(1)(0).result.man.expect(15.U)

        

        dut.io.out(1)(1).result.sign.expect(0.U)
        dut.io.out(1)(1).result.exp.expect(0.U)
        dut.io.out(1)(1).result.man.expect(22.U)


    }
  }
}