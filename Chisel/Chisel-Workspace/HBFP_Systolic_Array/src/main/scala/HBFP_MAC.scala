// A MAC that multiplier two blocks and adds all the multiplications together
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
        })
        val out = Output(new Bundle{
            val result = new HBFP_result(m, e) // result is the output of the MAC
        })
    })

    val exp_addition = ShiftRegister(io.in.a.exp +& io.in.b.exp, 3) // Need shift register since we need to compare the exponents in HBFP_adder. The final Mantissa is generated after 3 cycles hence exponent addition is shifted by 3 cycles.
    io.out.result.exp := Mux(exp_addition > (1<<e).asUInt - 1.U, (1<<e).asUInt - 1.U, exp_addition) // If the exponent is greater than the maximum value, then the maximum value is assigned to the exponent.

    val dotProductRegs = Seq.fill(blockSize)(RegInit(0.U((m).W)))
    val two_complement_buffer = Seq.fill(blockSize)(RegInit(0.S((m + 1).W)))
    val signs = Seq.fill(blockSize)(RegInit(0.U(1.W)))

    for (i <- 0 until blockSize){
        val multiplication = io.in.a.man(i) * io.in.b.man(i)
        dotProductRegs(i) := Mux(multiplication > (1<<m).asUInt - 1.U, (1<<m).asUInt - 1.U, multiplication) // If the multiplication is greater than the maximum value, then the maximum value is assigned to the multiplication.
        signs(i) := io.in.a.sign(i) ^ io.in.b.sign(i)
        two_complement_buffer(i) := Mux(signs(i)===1.U, (~(0.U ## dotProductRegs(i)) + 1.U), (0.U ## dotProductRegs(i))).asSInt // Converting HBFP to two's complement format.
    }

    val sum = two_complement_buffer.reduce(_ +& _)  // Adding all the elements of the dot product.

    val acc_hbfp = RegInit(0.U((m+1).W))

    // Converting back to the hbfp format and also checking if the result is greater than the maximum value.
    acc_hbfp := Mux(sum(m+blockSize-1).asUInt===1.U, Mux((~sum(m+blockSize-2,0).asUInt + 1.U) > (2<<m-1).U - 1.U, (2<<m).U - 1.U, ~(0.U ## sum(m-1, 0).asUInt) + 1.U), 
        Mux(sum(m+blockSize-2, 0).asUInt > (2<<m-1).U - 1.U, (2<<m-1).U - 1.U, 0.U ## sum(m-1,0).asUInt))

    io.out.result.sign := acc_hbfp(m).asUInt  // Final sign bit.
    io.out.result.man := acc_hbfp(m-1, 0).asUInt  // Final mantissa.
}