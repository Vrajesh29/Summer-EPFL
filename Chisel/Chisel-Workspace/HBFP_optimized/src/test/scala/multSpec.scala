import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec

class HBFPSpec extends AnyFlatSpec with ChiselScalatestTester {
  "mult" should "pass" in {

    test(new HBFP(2, 2, 5, 8, 0, 1, 14)) { dut =>
      dut.io.man(0).poke("b00010".U)
      dut.io.man(1).poke("b0000_1".U)
      dut.io.man(2).poke("b0000_1".U)
      dut.io.man(3).poke("b0000_1".U)
      // println(dut.io.block(1).peekInt())
      // dut.clock.step()
      dut.io.exp(0).poke("b0000_0000".U)
      dut.io.exp(1).poke("b0000_0000".U)
      dut.io.signs(0).poke(1.U)
      dut.io.signs(1).poke(0.U)
      dut.io.signs(2).poke(0.U)
      dut.io.signs(3).poke(0.U)
      // println(final_out)
      // dut.io.b.poke(2.U)
      dut.clock.step()
      dut.io.result.expect("b00000000000010".U)
    }
  }
}
