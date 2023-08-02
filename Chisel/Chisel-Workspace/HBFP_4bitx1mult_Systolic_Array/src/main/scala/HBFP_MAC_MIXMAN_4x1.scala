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

    val exp_addition = ShiftRegister(io.in.a.exp +& io.in.b.exp, 5)  // Need shift register since we need to compare the exponents in HBFP_adder.
    io.out.result.exp := Mux(exp_addition > (1<<e).asUInt - 1.U, (1<<e).asUInt - 1.U, exp_addition) // If the exponent is greater than the maximum value, then the maximum value is assigned to the exponent.

    val dotProductRegs = Seq.fill(blockSize)(RegInit(0.U((m).W)))
    val two_complement_buffer = Seq.fill(blockSize)(RegInit(0.S((m + 1).W)))
    val signs = Seq.fill(blockSize)(RegInit(0.U(1.W)))

    val counter = RegInit(1.U(2.W))

    for (i <- 0 until blockSize) {
      val padding = RegInit(0.U(2.W))

      val partial_result = RegInit(0.U((2*m).W))
      val final_result = RegInit(0.U((2*m).W))

      val multiplier_1 = Module(new Multiplier())

      when (counter === 0.U) {
        multiplier_1.io.in.a <> Mux(io.in.flag === 1.B, io.in.a.man(i)(3,0), io.in.a.man(i))
        multiplier_1.io.in.b <> Mux(io.in.flag === 1.B, io.in.b.man(i)(3,0), io.in.b.man(i))
        partial_result := multiplier_1.io.out
      }
      .elsewhen (counter === 1.U){
        multiplier_1.io.in.a <> Mux(io.in.flag === 1.B, (padding ## io.in.a.man(i)(m-1,m-2)), io.in.a.man(i))
        multiplier_1.io.in.b <> Mux(io.in.flag === 1.B, io.in.b.man(i)(3,0), io.in.b.man(i))
        partial_result := Mux(io.in.flag === 1.B, partial_result +& (multiplier_1.io.out << 4.U), multiplier_1.io.out)
      }
      .elsewhen (counter === 2.U){
        multiplier_1.io.in.a <> Mux(io.in.flag === 1.B, io.in.a.man(i)(3,0), io.in.a.man(i))
        multiplier_1.io.in.b <> Mux(io.in.flag === 1.B, (padding ## io.in.b.man(i)(m-1,m-2)), io.in.b.man(i))
        partial_result := Mux(io.in.flag === 1.B, partial_result +& (multiplier_1.io.out << 4.U), multiplier_1.io.out)
      }
      .otherwise{
        multiplier_1.io.in.a <> Mux(io.in.flag === 1.B, (padding ## io.in.a.man(i)(m-1,m-2)), io.in.a.man(i))
        multiplier_1.io.in.b <> Mux(io.in.flag === 1.B, (padding ## io.in.b.man(i)(m-1,m-2)), io.in.b.man(i))
        partial_result := Mux(io.in.flag === 1.B, partial_result +& (multiplier_1.io.out << 8.U), multiplier_1.io.out)
      }

      final_result := partial_result


    //   val multiplication = Mux(m.asUInt === 6.asUInt, io.in.a.man(i)(3,0) * io.in.b.man(i)(3,0) +& ShiftRegister(((padding ## io.in.a.man(i)(5,4)) * io.in.b.man(i)(3,0)) << 4.U, 1) +& ShiftRegister(((io.in.a.man(i)(3,0) * (padding ## io.in.b.man(i)(5,4))) << 4.U), 2) +& ShiftRegister(((padding##io.in.a.man(i)(5,4)) * (padding##io.in.b.man(i)(5,4))) << 8.U, 3), io.in.a.man(i) * io.in.b.man(i))
      dotProductRegs(i) := Mux(io.in.flag === 1.B, Mux(final_result > (1 << m).asUInt - 1.U, (1 << m).asUInt - 1.U, final_result), Mux(final_result > (1 << 4).asUInt - 1.U, (1 << 4).asUInt - 1.U, final_result))
      signs(i) := ShiftRegister(io.in.a.sign(i) ^ io.in.b.sign(i), 2)
      two_complement_buffer(i) := Mux(signs(i)===1.U, (~(0.U ## dotProductRegs(i)) + 1.U), (0.U ## dotProductRegs(i))).asSInt
  }

    when (counter < 3.U) {
        counter := counter + 1.U
    }
    .otherwise {
        counter := 0.U
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