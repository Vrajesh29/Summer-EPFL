// A MAC that multiplies two blocks and adds all the multiplications together
// The exponent is added for both the blocks.

import chisel3._
import chisel3.util._
import chisel3.util.log2Ceil
import chisel3.util.DecoupledIO
import chisel3.util.EnqIO
import chisel3.util.QueueIO
import chisel3.stage.ChiselStage
import scala.sys.process._ 

class HBFP_MAC(blockSize: Int, m: Int, e: Int) extends Module{
    val io = IO(new Bundle{
        val in = Input(new Bundle{
            val a = new HBFP(blockSize, m, e) // a is the first block
            val b = new HBFP(blockSize, m, e) // b is the second block
            val flag = Input(Bool()) 
        })
        val out = Output(new Bundle{
            val result = new HBFP_result(m, e) // result is the output of the MAC
        })
    })

    val exp_addition = ShiftRegister(io.in.a.exp +& io.in.b.exp, 4) // Need shift register since we need to compare the exponents in HBFP_adder. The final Mantissa is generated after 3 cycles hence exponent addition is shifted by 3 cycles.
    io.out.result.exp := Mux(exp_addition > (1<<e).asUInt - 1.U, (1<<e).asUInt - 1.U, exp_addition) // If the exponent is greater than the maximum value, then the maximum value is assigned to the exponent.

    val dotProductRegs = Seq.fill(blockSize)(RegInit(0.U((m).W)))
    val two_complement_buffer = Seq.fill(blockSize)(RegInit(0.S((m + 1).W)))
    val signs = Seq.fill(blockSize)(RegInit(0.U(1.W)))


    for (i <- 0 until blockSize) {
      val padding = RegInit(0.U(2.W))
      val final_result = RegInit(0.U((2*m).W))

      val multiplier_1 = Module(new Multiplier())
      val multiplier_2 = Module(new Multiplier())
      val multiplier_3 = Module(new Multiplier())
      val multiplier_4 = Module(new Multiplier())

      multiplier_1.io.in.a <> Mux(io.in.flag === 1.B, io.in.a.man(i)(3,0), io.in.a.man(i))
      multiplier_1.io.in.b <> Mux(io.in.flag === 1.B, io.in.b.man(i)(3,0), io.in.b.man(i))
      multiplier_2.io.in.a <> Mux(io.in.flag === 1.B, (padding ## io.in.a.man(i)(m-1,m-2)), 0.U)
      multiplier_2.io.in.b <> Mux(io.in.flag === 1.B, io.in.b.man(i)(3,0), 0.U)
      multiplier_3.io.in.a <> Mux(io.in.flag === 1.B, io.in.a.man(i)(3,0), 0.U)
      multiplier_3.io.in.b <> Mux(io.in.flag === 1.B, (padding ## io.in.b.man(i)(m-1,m-2)), 0.U)
      multiplier_4.io.in.a <> Mux(io.in.flag === 1.B, (padding ## io.in.a.man(i)(m-1,m-2)), 0.U)
      multiplier_4.io.in.b <> Mux(io.in.flag === 1.B, (padding ## io.in.b.man(i)(m-1,m-2)), 0.U)

      final_result := Mux(io.in.flag === 1.B, (multiplier_1.io.out +& ((multiplier_2.io.out +& multiplier_3.io.out) << 4.U) +& (multiplier_4.io.out << 8.U)), (multiplier_1.io.out))

      dotProductRegs(i) := Mux(io.in.flag === 1.B, Mux(final_result > (1 << m).asUInt - 1.U, (1 << m).asUInt - 1.U, final_result), Mux(final_result > (1 << 4).asUInt - 1.U, (1 << 4).asUInt - 1.U, final_result))
      signs(i) := ShiftRegister(io.in.a.sign(i) ^ io.in.b.sign(i), 1)
      two_complement_buffer(i) := Mux(signs(i)===1.U, (~(0.U ## dotProductRegs(i)) + 1.U), (0.U ## dotProductRegs(i))).asSInt
  }

    val sum = two_complement_buffer.reduce(_ +& _)  // Adding all the elements of the dot product.

    val acc_hbfp = RegInit(0.U((m+1).W))

    // Converting back to the hbfp format and also checking if the result is greater than the maximum value.
    acc_hbfp := Mux(sum(m+blockSize-1).asUInt===1.U, Mux((~sum(m+blockSize-2,0).asUInt + 1.U) > (2<<m-1).U - 1.U, (2<<m).U - 1.U, ~(0.U ## sum(m-1, 0).asUInt) + 1.U), 
        Mux(sum(m+blockSize-2, 0).asUInt > (2<<m-1).U - 1.U, (2<<m-1).U - 1.U, 0.U ## sum(m-1,0).asUInt))

    io.out.result.sign := acc_hbfp(m).asUInt  // Final sign bit.
    io.out.result.man := Mux(io.in.flag === 1.B, acc_hbfp(m-1, 0).asUInt, Mux(acc_hbfp(m-1, 0).asUInt > (1 << 4).asUInt - 1.U, (1<<4).asUInt - 1.U, acc_hbfp(m-1, 0).asUInt))  // Final mantissa.
}

class Multiplier() extends Module{
    val io = IO(new Bundle{
        val in = Input(new Bundle{
            val a = UInt(4.W)
            val b = UInt(4.W)
        })
        val out = Output(UInt(8.W))
    })
    io.out := io.in.a * io.in.b
}