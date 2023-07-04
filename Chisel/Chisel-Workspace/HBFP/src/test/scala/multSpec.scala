import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec

class HbfpSpec extends AnyFlatSpec with ChiselScalatestTester {
  "mult" should "pass" in {

    test(new Hbfpblock(16,6,8, 4)) { dut =>
      dut.io.man_a(0).poke(-1.S)
      dut.io.man_a(1).poke(0.S)
      dut.io.man_a(2).poke(0.S)
      dut.io.man_a(3).poke(0.S)
      dut.io.man_a(4).poke(-1.S)
      dut.io.man_a(5).poke(0.S)
      dut.io.man_a(6).poke(0.S)
      dut.io.man_a(7).poke(0.S)
      dut.io.man_a(8).poke(-1.S)
      dut.io.man_a(9).poke(0.S)
      dut.io.man_a(10).poke(0.S)
      dut.io.man_a(11).poke(0.S)
      dut.io.man_a(12).poke(-1.S)
      dut.io.man_a(13).poke(0.S)
      dut.io.man_a(14).poke(0.S)
      dut.io.man_a(15).poke(0.S)
      dut.io.man_b(0).poke(1.S)
      dut.io.man_b(1).poke(0.S)
      dut.io.man_b(2).poke(0.S)
      dut.io.man_b(3).poke(0.S)
      dut.io.man_b(4).poke(1.S)
      dut.io.man_b(5).poke(0.S)
      dut.io.man_b(6).poke(0.S)
      dut.io.man_b(7).poke(0.S)
      dut.io.man_b(8).poke(1.S)
      dut.io.man_b(9).poke(0.S)
      dut.io.man_b(10).poke(0.S)
      dut.io.man_b(11).poke(0.S)
      dut.io.man_b(12).poke(1.S)
      dut.io.man_b(13).poke(0.S)
      dut.io.man_b(14).poke(0.S)
      dut.io.man_b(15).poke(0.S)

      // println(dut.io.block(1).peekInt())
      // dut.clock.step()
      dut.io.exp_a(0).poke("b0000_0010".U)
      dut.io.exp_b(0).poke("b0000_0000".U)
      dut.io.exp_a(1).poke("b0000_0000".U)
      dut.io.exp_b(1).poke("b0000_0000".U)
      dut.io.exp_a(2).poke("b0000_0000".U)
      dut.io.exp_b(2).poke("b0000_0000".U)
      dut.io.exp_a(3).poke("b0000_0000".U)
      dut.io.exp_b(3).poke("b0000_0000".U)
      // dut.io.signs(0).poke(1.U)
      // dut.io.signs(1).poke(0.U)
      // dut.io.signs(2).poke(0.U)
      // dut.io.signs(3).poke(0.U)
      // println(final_out)
      // dut.io.b.poke(2.U)
      dut.clock.step()
      dut.clock.step()
      // dut.clock.step()

      dut.io.result.expect("b1000_0000_011100".U)
    }
  }
}
