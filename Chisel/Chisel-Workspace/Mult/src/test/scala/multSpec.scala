import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec

class MultiplicationSpec extends AnyFlatSpec with ChiselScalatestTester {
  "mult" should "pass" in {

    test(new Multiplication(16,10)) { dut =>
      dut.io.a.poke(1.U)
      dut.io.b.poke(2.U)
      println(dut.io.a)
      dut.clock.step()
      dut.io.y.expect(2.U)
      dut.io.a.poke(3.U)
      dut.io.b.poke(2.U)
      dut.clock.step()
      dut.io.y.expect(6.U)
    }
  }
}
