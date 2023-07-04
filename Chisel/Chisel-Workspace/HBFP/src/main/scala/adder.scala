// import chisel3._
// import chisel3.util._

// class AdderTree(val numInputs: Int, val mantissaWidth: Int, val exponentWidth: Int) extends Module {
//   val io = IO(new Bundle {
//     val sign = Input(Vec(numInputs, UInt(1.W)))
//     val mantissa = Input(Vec(numInputs, UInt(mantissaWidth.W)))
//     val exponent = Input(Vec(numInputs, UInt(exponentWidth.W)))
//     val sum = Output(UInt(mantissaWidth.W))
//   })

//   val adderTree = Wire(Vec(numInputs, UInt(mantissaWidth.W)))
//   val adjustedExponents = Wire(Vec(numInputs, UInt(exponentWidth.W)))

//   // Create a binary tree of adders
//   for (i <- 0 until numInputs) {
//     adderTree(i) := Mux(io.sign(i) === 1.U, -io.mantissa(i), io.mantissa(i))
//     adjustedExponents(i) := io.exponent(i)
//   }

//   for (depth <- 1 until log2Ceil(numInputs) + 1) {
//     for (i <- 0 until numInputs by (1 << depth)) {
//       val leftIdx = i
//       val rightIdx = i + (1 << (depth - 1))
//       val sum = Wire(UInt(mantissaWidth.W))
//       val adjustedSum = Wire(UInt(mantissaWidth.W))

//       val adjustedLeftMantissa = Mux(io.exponent(leftIdx) > io.exponent(rightIdx), adderTree(leftIdx) >> (io.exponent(leftIdx) - io.exponent(rightIdx)), adderTree(leftIdx) << (io.exponent(rightIdx) - io.exponent(leftIdx)))
//       val adjustedRightMantissa = Mux(io.exponent(rightIdx) > io.exponent(leftIdx), adderTree(rightIdx) >> (io.exponent(rightIdx) - io.exponent(leftIdx)), adderTree(rightIdx) << (io.exponent(leftIdx) - io.exponent(rightIdx)))

//       sum := adjustedLeftMantissa + adjustedRightMantissa
//       adjustedSum := Mux(sum(mantissaWidth - 1), sum >> 1, sum)

//       val carry = sum(mantissaWidth)
//       val carryPropagatedExponent = Mux(carry, adjustedExponents(leftIdx) + 1.U, adjustedExponents(leftIdx))
//       adjustedExponents(leftIdx) := carryPropagatedExponent

//       adderTree(leftIdx) := adjustedSum
//       adjustedExponents(rightIdx) := adjustedExponents(leftIdx)
//     }
//   }

//   io.sum := adderTree(0)
// }


import chisel3._
import chisel3.util._

class AdderTree(val numInputs: Int, val mantissaWidth: Int, val exponentWidth: Int) extends Module {
  val io = IO(new Bundle {
    val sign = Input(Vec(numInputs, UInt(1.W)))
    val mantissa = Input(Vec(numInputs, UInt(mantissaWidth.W)))
    val exponent = Input(Vec(numInputs, UInt(exponentWidth.W)))
    val sum = Output(UInt(mantissaWidth.W))
  })

  val adderTree = Wire(Vec(numInputs, UInt(mantissaWidth.W)))

  // Create a binary tree of adders
  for (i <- 0 until numInputs) {
    adderTree(i) := Mux(io.sign(i) === 1.U, -io.mantissa(i), io.mantissa(i))
  }

  for (depth <- 1 until log2Ceil(numInputs) + 1) {
    for (i <- 0 until numInputs by (1 << depth)) {
      val leftIdx = i
      val rightIdx = i + (1 << (depth - 1))
      val sum = Wire(UInt(mantissaWidth.W))

      val adjustedLeftMantissa = Mux(io.exponent(leftIdx) > io.exponent(rightIdx), adderTree(leftIdx) >> (io.exponent(leftIdx) - io.exponent(rightIdx)), adderTree(leftIdx) << (io.exponent(rightIdx) - io.exponent(leftIdx)))
      val adjustedRightMantissa = Mux(io.exponent(rightIdx) > io.exponent(leftIdx), adderTree(rightIdx) >> (io.exponent(rightIdx) - io.exponent(leftIdx)), adderTree(rightIdx) << (io.exponent(leftIdx) - io.exponent(rightIdx)))

      sum := adjustedLeftMantissa + adjustedRightMantissa
      adderTree(leftIdx) := sum
    }
  }

  io.sum := adderTree(0)
}


object AdderTreeMain extends App {
  emitVerilog(new AdderTree(8, 6, 8))
}

