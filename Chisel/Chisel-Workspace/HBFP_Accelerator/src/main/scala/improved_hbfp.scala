// VERSION1: 4 BIT MULTIPLIER AND 4 MULTIPLIERS.  FOR m = 4/6
// import chisel3._
// import chisel3.util._
// import chisel3.util.Reverse

// class Improved_hbfp(blockSize: Int, m: Int, e: Int) extends Module {
//   val io = IO(new Bundle {
//     val man_a = Input(Vec(blockSize, UInt(m.W)))
//     val man_b = Input(Vec(blockSize, UInt(m.W)))
//     val sign_a = Input(Vec(blockSize, UInt(1.W)))
//     val sign_b = Input(Vec(blockSize, UInt(1.W)))
//     val exp_a = Input(UInt(e.W))
//     val exp_b = Input(UInt(e.W))
//     val result = Output(UInt((m + e + 1).W))
//   })

//   val exp_a = io.exp_a
//   val exp_b = io.exp_b
//   val exp_output = Wire(UInt((e+1).W))
//   exp_output := exp_a +& exp_b

//   val dotProductRegs = Seq.fill(blockSize)(RegInit(0.U((2 * m).W)))
//   val two_complement_buffer = Seq.fill(blockSize)(RegInit(0.S((2 * m + 1).W)))
//   val two_complement = Seq.fill(blockSize)(RegInit(0.U((2 * m + 1).W)))
//   val signs = Seq.fill(blockSize)(RegInit(0.U(1.W)))
//   val acc = RegInit(0.S((2*m+blockSize).W))
//   val acc_hbfp = RegInit(0.U((2*m+blockSize).W))
//   val acc_buf = RegInit(0.U((2*m+blockSize).W))

//   if (m == 6.toInt){
//     // printf("here")
//     for (i <- 0 until blockSize) {
//       val multiplierReg = RegInit(0.U(6.W))
//       val multiplierReg2 = RegInit(0.U(6.W))
//       val padding = RegInit(0.U(2.W))
//       val signReg = RegInit(0.U(1.W))
//       signReg := io.sign_a(i)
//       multiplierReg := io.man_a(i)
//       multiplierReg2 := io.man_b(i)
//       dotProductRegs(i) := multiplierReg(3,0) * multiplierReg2(3,0) +& (((padding ## multiplierReg(5,4)) * multiplierReg2(3,0)) << 4.U) +& ((multiplierReg(3,0) * (padding ## multiplierReg2(5,4))) << 4.U) +& (((padding##multiplierReg(5,4)) * (padding##multiplierReg2(5,4))) << 8.U)
//       signs(i) := signReg ^ io.sign_b(i)
//       two_complement(i) := Mux(signs(i)===1.U, (~(0.U ## dotProductRegs(i)) + 1.U), (0.U ## dotProductRegs(i)))
//       two_complement_buffer(i) := two_complement(i).asSInt
//   }
//   }

//   else{
//   for (i <- 0 until blockSize) {
//     val multiplierReg = RegInit(0.U(m.W))
//     val signReg = RegInit(0.U(1.W))
//     signReg := io.sign_a(i)
//     multiplierReg := io.man_a(i)
//     dotProductRegs(i) := multiplierReg * io.man_b(i)
//     signs(i) := signReg ^ io.sign_b(i)
//     two_complement(i) := Mux(signs(i)===1.U, (~(0.U ## dotProductRegs(i)) + 1.U), (0.U ## dotProductRegs(i)))
//     two_complement_buffer(i) := two_complement(i).asSInt
//   }
// }

//   acc := two_complement_buffer.reduce(_+&_)
//   acc_buf := acc.asUInt

//   acc_hbfp := Mux(acc_buf(2*m+blockSize-1)===1.U, ~(0.U ## acc_buf(2*m+blockSize-2, 0)) + 1.U, acc_buf)
//   val right_shift = RegInit(0.U(8.W))
//   val actual_shift = RegInit(0.U(8.W))
//   val buf = 0.U ## Reverse{acc_hbfp(2*m+blockSize-2, m)}

//   right_shift := PriorityEncoder(buf)

//   actual_shift := (2*m+blockSize-2).asUInt - right_shift - (m-1).U

//   val man_out_shifted = acc_hbfp >> (actual_shift)
//   val exp_actual = Wire(UInt((e+2).W))
//   exp_actual := exp_output +& actual_shift

//   io.result := acc(2*m+blockSize-1).asUInt ## exp_actual(e+1,2) ## man_out_shifted(m - 1, 0)
//   // io.result := acc_hbfp(2*m+blockSize-1) ## exp_output ## acc_hbfp(m - 1, 0)

// }

// object Improved_hbfpMain extends App {
//   emitVerilog(new Improved_hbfp(1024, 6, 8))
// }

// // VERSION2: 4 BIT MULTIPLIER AND 2 MULTIPLIERS.  FOR m = 4/6
// import chisel3._
// import chisel3.util._
// import chisel3.util.Reverse

// class Improved_hbfp(blockSize: Int, m: Int, e: Int) extends Module {
//   val io = IO(new Bundle {
//     val man_a = Input(Vec(blockSize, UInt(m.W)))
//     val man_b = Input(Vec(blockSize, UInt(m.W)))
//     val sign_a = Input(Vec(blockSize, UInt(1.W)))
//     val sign_b = Input(Vec(blockSize, UInt(1.W)))
//     val exp_a = Input(UInt(e.W))
//     val exp_b = Input(UInt(e.W))
//     val result = Output(UInt((m + e + 1).W))
//   })
//   val exp_a = io.exp_a
//   val exp_b = io.exp_b
//   val exp_output = Wire(UInt((e+1).W))
//   exp_output := exp_a +& exp_b

//   val dotProductRegs = Seq.fill(blockSize)(RegInit(0.U((2 * m).W)))
//   val two_complement_buffer = Seq.fill(blockSize)(RegInit(0.S((2 * m + 1).W)))
//   val two_complement = Seq.fill(blockSize)(RegInit(0.U((2 * m + 1).W)))
//   val signs = Seq.fill(blockSize)(RegInit(0.U(1.W)))
//   val acc = RegInit(0.S((2*m+blockSize).W))
//   val acc_hbfp = RegInit(0.U((2*m+blockSize).W))
//   val acc_buf = RegInit(0.U((2*m+blockSize).W))

//   if (m == 6.toInt){
//     for (i <- 0 until blockSize) {
//       val multiplierReg = RegInit(0.U(6.W))
//       val multiplierReg2 = RegInit(0.U(6.W))
//       val padding = RegInit(0.U(2.W))
//       val signReg = RegInit(0.U(1.W))
//       val pp1 = RegInit(0.U(12.W))
//       val pp2 = RegInit(0.U(12.W))
//       signReg := io.sign_a(i)
//       multiplierReg := io.man_a(i)
//       multiplierReg2 := io.man_b(i)

//       pp1 := multiplierReg(3,0) * multiplierReg2(3,0) +& (((padding ## multiplierReg(5,4)) * multiplierReg2(3,0)) << 4.U)
//       dotProductRegs(i) := pp1 +& RegNext(((multiplierReg(3,0) * (padding ## multiplierReg2(5,4))) << 4.U) +& (((padding##multiplierReg(5,4)) * (padding##multiplierReg2(5,4))) << 8.U))
//       signs(i) := signReg ^ io.sign_b(i)
//       two_complement(i) := Mux(signs(i)===1.U, (~(0.U ## dotProductRegs(i)) + 1.U), (0.U ## dotProductRegs(i)))
//       two_complement_buffer(i) := two_complement(i).asSInt
//     }

//   } else {
//     for (i <- 0 until blockSize) {
//       val multiplierReg = RegInit(0.U(m.W))
//       val signReg = RegInit(0.U(1.W))
//       signReg := io.sign_a(i)
//       multiplierReg := io.man_a(i)
//       dotProductRegs(i) := multiplierReg * io.man_b(i)
//       signs(i) := signReg ^ io.sign_b(i)
//       two_complement(i) := Mux(signs(i)===1.U, (~(0.U ## dotProductRegs(i)) + 1.U), (0.U ## dotProductRegs(i)))
//       two_complement_buffer(i) := two_complement(i).asSInt
//     }
//   }

//   acc := two_complement_buffer.reduce(_+&_)
//   acc_buf := acc.asUInt

//   acc_hbfp := Mux(acc_buf(2*m+blockSize-1)===1.U, ~(0.U ## acc_buf(2*m+blockSize-2, 0)) + 1.U, acc_buf)
//   val right_shift = RegInit(0.U(8.W))
//   val actual_shift = RegInit(0.U(8.W))
//   val buf = 0.U ## Reverse{acc_hbfp(2*m+blockSize-2, m)}

//   right_shift := PriorityEncoder(buf)

//   actual_shift := (2*m+blockSize-2).asUInt - right_shift - (m-1).U

//   val man_out_shifted = acc_hbfp >> (actual_shift)
//   val exp_actual = Wire(UInt((e+2).W))
//   exp_actual := exp_output +& actual_shift

//   io.result := acc(2*m+blockSize-1).asUInt ## exp_actual(e+1,2) ## man_out_shifted(m - 1, 0)
//   // io.result := acc_hbfp(2*m+blockSize-1) ## exp_output ## acc_hbfp(m - 1, 0)

// // }
// }

// object Improved_hbfpMain extends App {
//   emitVerilog(new Improved_hbfp(1024, 6, 8))
// }

// // VERSION3: 4 BIT MULTIPLIER AND 1 MULTIPLIER.  FOR m = 4/6
// import chisel3._
// import chisel3.util._
// import chisel3.util.Reverse

// class Improved_hbfp(blockSize: Int, m: Int, e: Int) extends Module {
//   val io = IO(new Bundle {
//     val man_a = Input(Vec(blockSize, UInt(m.W)))
//     val man_b = Input(Vec(blockSize, UInt(m.W)))
//     val sign_a = Input(Vec(blockSize, UInt(1.W)))
//     val sign_b = Input(Vec(blockSize, UInt(1.W)))
//     val exp_a = Input(UInt(e.W))
//     val exp_b = Input(UInt(e.W))
//     val result = Output(UInt((m + e + 1).W))
//   })

//   val exp_a = io.exp_a
//   val exp_b = io.exp_b
//   val exp_output = Wire(UInt((e + 1).W))
//   exp_output := exp_a +& exp_b

//   val dotProductRegs = Seq.fill(blockSize)(RegInit(0.U((2 * m).W)))
//   val two_complement_buffer = Seq.fill(blockSize)(RegInit(0.S((2 * m + 1).W)))
//   val two_complement = Seq.fill(blockSize)(RegInit(0.U((2 * m + 1).W)))
//   val signs = Seq.fill(blockSize)(RegInit(0.U(1.W)))
//   val acc = RegInit(0.S((2 * m + blockSize).W))
//   val acc_hbfp = RegInit(0.U((2 * m + blockSize).W))
//   val acc_buf = RegInit(0.U((2 * m + blockSize).W))

//   if (m == 6.toInt) {
//     // printf("here")
//     for (i <- 0 until blockSize) {
//       val multiplierReg = RegInit(0.U(6.W))
//       val multiplierReg2 = RegInit(0.U(6.W))
//       val padding = RegInit(0.U(2.W))
//       val signReg = RegInit(0.U(1.W))
//       val pp1 = RegInit(0.U(12.W))
//       val pp2 = RegInit(0.U(12.W))
//       val pp3 = RegInit(0.U(12.W))
//       val pp4 = RegInit(0.U(12.W))
//       signReg := io.sign_a(i)
//       multiplierReg := io.man_a(i)
//       multiplierReg2 := io.man_b(i)

//       pp1 := multiplierReg(3, 0) * multiplierReg2(3, 0)

//       pp2 := RegNext(
//         ((padding ## multiplierReg(5, 4)) * multiplierReg2(3, 0)) << 4.U
//       )

//       pp3 := RegNext(
//         RegNext(
//           (multiplierReg(3, 0) * (padding ## multiplierReg2(5, 4))) << 4.U
//         )
//       )

//       dotProductRegs(i) := pp1 +& pp2 +& pp3 +& RegNext(
//         RegNext(
//           RegNext(
//             ((padding ## multiplierReg(5, 4)) * (padding ## multiplierReg2(
//               5,
//               4
//             ))) << 8.U
//           )
//         )
//       )
//       signs(i) := signReg ^ io.sign_b(i)
//       two_complement(i) := Mux(
//         signs(i) === 1.U,
//         (~(0.U ## dotProductRegs(i)) + 1.U),
//         (0.U ## dotProductRegs(i))
//       )
//       two_complement_buffer(i) := two_complement(i).asSInt
//     }
//   } else {
//     for (i <- 0 until blockSize) {
//       val multiplierReg = RegInit(0.U(m.W))
//       val signReg = RegInit(0.U(1.W))
//       signReg := io.sign_a(i)
//       multiplierReg := io.man_a(i)
//       dotProductRegs(i) := multiplierReg * io.man_b(i)
//       signs(i) := signReg ^ io.sign_b(i)
//       two_complement(i) := Mux(
//         signs(i) === 1.U,
//         (~(0.U ## dotProductRegs(i)) + 1.U),
//         (0.U ## dotProductRegs(i))
//       )
//       two_complement_buffer(i) := two_complement(i).asSInt
//     }
//   }

//   acc := two_complement_buffer.reduce(_ +& _)
//   acc_buf := acc.asUInt

//   acc_hbfp := Mux(
//     acc_buf(2 * m + blockSize - 1) === 1.U,
//     ~(0.U ## acc_buf(2 * m + blockSize - 2, 0)) + 1.U,
//     acc_buf
//   )
//   val right_shift = RegInit(0.U(8.W))
//   val actual_shift = RegInit(0.U(8.W))
//   val buf = 0.U ## Reverse { acc_hbfp(2 * m + blockSize - 2, m) }

//   right_shift := PriorityEncoder(buf)

//   actual_shift := (2 * m + blockSize - 2).asUInt - right_shift - (m - 1).U

//   val man_out_shifted = acc_hbfp >> (actual_shift)
//   val exp_actual = Wire(UInt((e + 2).W))
//   exp_actual := exp_output +& actual_shift

//   io.result := acc(2 * m + blockSize - 1).asUInt ## exp_actual(
//     e + 1,
//     2
//   ) ## man_out_shifted(m - 1, 0)
// }

// object Improved_hbfpMain extends App {
//   emitVerilog(new Improved_hbfp(1024, 6, 8))
// }

// // VERSION4: 2 BIT MULTIPLIER AND 4 MULTIPLIERS.  FOR m = 4/6
// import chisel3._
// import chisel3.util._
// import chisel3.util.Reverse

// class Improved_hbfp(blockSize: Int, m: Int, e: Int) extends Module {
//   val io = IO(new Bundle {
//     val man_a = Input(Vec(blockSize, UInt(m.W)))
//     val man_b = Input(Vec(blockSize, UInt(m.W)))
//     val sign_a = Input(Vec(blockSize, UInt(1.W)))
//     val sign_b = Input(Vec(blockSize, UInt(1.W)))
//     val exp_a = Input(UInt(e.W))
//     val exp_b = Input(UInt(e.W))
//     val result = Output(UInt((m + e + 1).W))
//   })

//   val exp_a = io.exp_a
//   val exp_b = io.exp_b
//   val exp_output = Wire(UInt((e+1).W))
//   exp_output := exp_a +& exp_b

//   val dotProductRegs = Seq.fill(blockSize)(RegInit(0.U((2 * m).W)))
//   val two_complement_buffer = Seq.fill(blockSize)(RegInit(0.S((2 * m + 1).W)))
//   val two_complement = Seq.fill(blockSize)(RegInit(0.U((2 * m + 1).W)))
//   val signs = Seq.fill(blockSize)(RegInit(0.U(1.W)))
//   val acc = RegInit(0.S((2*m+blockSize).W))
//   val acc_hbfp = RegInit(0.U((2*m+blockSize).W))
//   val acc_buf = RegInit(0.U((2*m+blockSize).W))

//   if (m == 6.toInt){
//     // printf("here")
//     for (i <- 0 until blockSize) {
//       val multiplierReg = RegInit(0.U(6.W))
//       val multiplierReg2 = RegInit(0.U(6.W))
//       // val padding = RegInit(0.U(2.W))
//       val signReg = RegInit(0.U(1.W))
//       val pp1 = RegInit(0.U(12.W))
//       val pp2 = RegInit(0.U(12.W))
//       val pp3 = RegInit(0.U(12.W))
//       // val pp4 = RegInit(0.U(12.W))
//       signReg := io.sign_a(i)
//       multiplierReg := io.man_a(i)
//       multiplierReg2 := io.man_b(i)

//       for (j<- 0 until 3){
//         if (j == 0.toInt){
//           pp1 := multiplierReg(1,0) * multiplierReg2(1,0) + ((multiplierReg(1,0) * multiplierReg2(3,2)) << 2.U) + ((multiplierReg(1,0) * multiplierReg2(5,4)) << 4.U) + ((multiplierReg(3,2) * multiplierReg2(1,0)) << 2.U)
//         }
//         else if(j == 1.toInt){
//           pp2 := RegNext(((multiplierReg(3,2) * multiplierReg2(3,2)) << 4.U) + ((multiplierReg(3,2) * multiplierReg2(5,4)) << 6.U) + ((multiplierReg(5,4) * multiplierReg2(1,0)) << 4.U) + ((multiplierReg(5,4) * multiplierReg2(3,2)) << 6.U))

//         }
//         else{
//           dotProductRegs(i) := pp1 +& pp2 +& RegNext(RegNext((multiplierReg(5,4) * multiplierReg2(5,4)) << 8.U))
//         }
//       }
//     //   dotProductRegs(i) := pp1 +& pp2 +& pp3
//       // dotProductRegs(i) := multiplierReg(3,0) * multiplierReg2(3,0) + (((padding ## multiplierReg(5,4)) * multiplierReg2(3,0)) << 4.U) + ((multiplierReg(3,0) * (padding ## multiplierReg2(5,4))) << 4.U) + (((padding##multiplierReg(5,4)) * (padding##multiplierReg2(5,4))) << 8.U)
//       signs(i) := signReg ^ io.sign_b(i)
//       two_complement(i) := Mux(signs(i)===1.U, (~(0.U ## dotProductRegs(i)) + 1.U), (0.U ## dotProductRegs(i)))
//       two_complement_buffer(i) := two_complement(i).asSInt
//     }
//   }

//   else if(m == 4.toInt){
//   for (i <- 0 until blockSize) {
//     val multiplierReg = RegInit(0.U(m.W))
//     val multiplierReg2 = RegInit(0.U(m.W))
//     val signReg = RegInit(0.U(1.W))
//     signReg := io.sign_a(i)
//     multiplierReg := io.man_a(i)
//     multiplierReg2 := io.man_b(i)
//     dotProductRegs(i) := multiplierReg(1,0) * multiplierReg2(1,0) + ((multiplierReg(1,0) * multiplierReg2(3,2)) << 2.U) + ((multiplierReg(3,2) * multiplierReg2(1,0)) << 2.U) + ((multiplierReg(3,2) * multiplierReg2(3,2)) << 4.U)
//     signs(i) := signReg ^ io.sign_b(i)
//     two_complement(i) := Mux(signs(i)===1.U, (~(0.U ## dotProductRegs(i)) + 1.U), (0.U ## dotProductRegs(i)))
//     two_complement_buffer(i) := two_complement(i).asSInt
//   }
// }

//   acc := two_complement_buffer.reduce(_+&_)
//   acc_buf := acc.asUInt

//   acc_hbfp := Mux(acc_buf(2*m+blockSize-1)===1.U, ~(0.U ## acc_buf(2*m+blockSize-2, 0)) + 1.U, acc_buf)
//   val right_shift = RegInit(0.U(8.W))
//   val actual_shift = RegInit(0.U(8.W))
//   val buf = 0.U ## Reverse{acc_hbfp(2*m+blockSize-2, m)}

//   right_shift := PriorityEncoder(buf)

//   actual_shift := (2*m+blockSize-2).asUInt - right_shift - (m-1).U

//   val man_out_shifted = acc_hbfp >> (actual_shift)
//   val exp_actual = Wire(UInt((e+2).W))
//   exp_actual := exp_output +& actual_shift

//   io.result := acc(2*m+blockSize-1).asUInt ## exp_actual(e+1,2) ## man_out_shifted(m - 1, 0)
//   // io.result := acc_hbfp(2*m+blockSize-1) ## exp_output ## acc_hbfp(m - 1, 0)

// }

// object Improved_hbfpMain extends App {
//   emitVerilog(new Improved_hbfp(1024, 6, 8))
// }

// // VERSION5: 2 BIT MULTIPLIER AND 2 MULTIPLIERS.  FOR m = 4/6
// import chisel3._
// import chisel3.util._
// import chisel3.util.Reverse

// class Improved_hbfp(blockSize: Int, m: Int, e: Int) extends Module {
//   val io = IO(new Bundle {
//     val man_a = Input(Vec(blockSize, UInt(m.W)))
//     val man_b = Input(Vec(blockSize, UInt(m.W)))
//     val sign_a = Input(Vec(blockSize, UInt(1.W)))
//     val sign_b = Input(Vec(blockSize, UInt(1.W)))
//     val exp_a = Input(UInt(e.W))
//     val exp_b = Input(UInt(e.W))
//     val result = Output(UInt((m + e + 1).W))
//   })

//   val exp_a = io.exp_a
//   val exp_b = io.exp_b
//   val exp_output = Wire(UInt((e+1).W))
//   exp_output := exp_a +& exp_b

//   val dotProductRegs = Seq.fill(blockSize)(RegInit(0.U((2 * m).W)))
//   val two_complement_buffer = Seq.fill(blockSize)(RegInit(0.S((2 * m + 1).W)))
//   val two_complement = Seq.fill(blockSize)(RegInit(0.U((2 * m + 1).W)))
//   val signs = Seq.fill(blockSize)(RegInit(0.U(1.W)))
//   val acc = RegInit(0.S((2*m+blockSize).W))
//   val acc_hbfp = RegInit(0.U((2*m+blockSize).W))
//   val acc_buf = RegInit(0.U((2*m+blockSize).W))

//   if (m == 6.toInt){
//     // printf("here")
//     for (i <- 0 until blockSize) {
//       val multiplierReg = RegInit(0.U(6.W))
//       val multiplierReg2 = RegInit(0.U(6.W))
//       // val padding = RegInit(0.U(2.W))
//       val signReg = RegInit(0.U(1.W))
//       val pp1 = RegInit(0.U(12.W))
//       val pp2 = RegInit(0.U(12.W))
//       val pp3 = RegInit(0.U(12.W))
//       val pp4 = RegInit(0.U(12.W))
//       val pp5 = RegInit(0.U(12.W))
//       signReg := io.sign_a(i)
//       multiplierReg := io.man_a(i)
//       multiplierReg2 := io.man_b(i)

//       for (j<- 0 until 5){
//         if (j == 0.toInt){
//           pp1 := multiplierReg(1,0) * multiplierReg2(1,0) + ((multiplierReg(1,0) * multiplierReg2(3,2)) << 2.U)
//         }
//         else if (j == 1.toInt){
//           pp2 := RegNext(((multiplierReg(1,0) * multiplierReg2(5,4)) << 4.U) + ((multiplierReg(3,2) * multiplierReg2(1,0)) << 2.U))
//         }
//         else if(j == 2.toInt){
//           pp3 := RegNext(RegNext(((multiplierReg(3,2) * multiplierReg2(3,2)) << 4.U) + ((multiplierReg(3,2) * multiplierReg2(5,4)) << 6.U)))
//         }
//         else if(j == 3.toInt){
//           pp4 :=  RegNext(RegNext(RegNext(((multiplierReg(5,4) * multiplierReg2(1,0)) << 4.U) + ((multiplierReg(5,4) * multiplierReg2(3,2)) << 6.U))))
//         }
//         else{
//           dotProductRegs(i) := pp1 +& pp2 +& pp3 +& pp4 +& RegNext(RegNext(RegNext(RegNext((multiplierReg(5,4) * multiplierReg2(5,4)) << 8.U))))
//         }
//       }
//       // dotProductRegs(i) := pp1 +& pp2 +& pp3 +& pp4 +& pp5
//       // dotProductRegs(i) := multiplierReg(3,0) * multiplierReg2(3,0) + (((padding ## multiplierReg(5,4)) * multiplierReg2(3,0)) << 4.U) + ((multiplierReg(3,0) * (padding ## multiplierReg2(5,4))) << 4.U) + (((padding##multiplierReg(5,4)) * (padding##multiplierReg2(5,4))) << 8.U)
//       signs(i) := signReg ^ io.sign_b(i)
//       two_complement(i) := Mux(signs(i)===1.U, (~(0.U ## dotProductRegs(i)) + 1.U), (0.U ## dotProductRegs(i)))
//       two_complement_buffer(i) := two_complement(i).asSInt
//     }
//   }

//   else if(m == 4.toInt){
//   for (i <- 0 until blockSize) {
//     val multiplierReg = RegInit(0.U(m.W))
//     val multiplierReg2 = RegInit(0.U(m.W))
//     val pp1 = RegInit(0.U(12.W))
//     val pp2 = RegInit(0.U(12.W))
//     val signReg = RegInit(0.U(1.W))
//     signReg := io.sign_a(i)
//     multiplierReg := io.man_a(i)
//     multiplierReg2 := io.man_b(i)
//     for (j<- 0 until 2){
//       if (j == 0.toInt){
//         pp1 := multiplierReg(1,0) * multiplierReg2(1,0) + ((multiplierReg(1,0) * multiplierReg2(3,2)) << 2.U)
//       }
//       else{
//         dotProductRegs(i) := pp1 +& RegNext(((multiplierReg(3,2) * multiplierReg2(1,0)) << 2.U) + ((multiplierReg(3,2) * multiplierReg2(3,2)) << 4.U))
//       }
//     }
//     // dotProductRegs(i) := pp1 +& pp2
//     signs(i) := signReg ^ io.sign_b(i)
//     two_complement(i) := Mux(signs(i)===1.U, (~(0.U ## dotProductRegs(i)) + 1.U), (0.U ## dotProductRegs(i)))
//     two_complement_buffer(i) := two_complement(i).asSInt
//   }
// }

//   acc := two_complement_buffer.reduce(_+&_)
//   acc_buf := acc.asUInt

//   acc_hbfp := Mux(acc_buf(2*m+blockSize-1)===1.U, ~(0.U ## acc_buf(2*m+blockSize-2, 0)) + 1.U, acc_buf)
//   val right_shift = RegInit(0.U(8.W))
//   val actual_shift = RegInit(0.U(8.W))
//   val buf = 0.U ## Reverse{acc_hbfp(2*m+blockSize-2, m)}

//   right_shift := PriorityEncoder(buf)

//   actual_shift := (2*m+blockSize-2).asUInt - right_shift - (m-1).U

//   val man_out_shifted = acc_hbfp >> (actual_shift)
//   val exp_actual = Wire(UInt((e+2).W))
//   exp_actual := exp_output +& actual_shift

//   io.result := acc(2*m+blockSize-1).asUInt ## exp_actual(e+1,2) ## man_out_shifted(m - 1, 0)
//   // io.result := acc_hbfp(2*m+blockSize-1) ## exp_output ## acc_hbfp(m - 1, 0)

// }

// object Improved_hbfpMain extends App {
//   emitVerilog(new Improved_hbfp(1024, 6, 8))
// }

// // VERSION6: 2 BIT MULTIPLIER AND 1 MULTIPLIER.  FOR m = 4/6
// import chisel3._
// import chisel3.util._
// import chisel3.util.Reverse

// class Improved_hbfp(blockSize: Int, m: Int, e: Int) extends Module {
//   val io = IO(new Bundle {
//     val man_a = Input(Vec(blockSize, UInt(m.W)))
//     val man_b = Input(Vec(blockSize, UInt(m.W)))
//     val sign_a = Input(Vec(blockSize, UInt(1.W)))
//     val sign_b = Input(Vec(blockSize, UInt(1.W)))
//     val exp_a = Input(UInt(e.W))
//     val exp_b = Input(UInt(e.W))
//     val result = Output(UInt((m + e + 1).W))
//   })

//   val exp_a = io.exp_a
//   val exp_b = io.exp_b
//   val exp_output = Wire(UInt((e+1).W))
//   exp_output := exp_a +& exp_b

//   val dotProductRegs = Seq.fill(blockSize)(RegInit(0.U((2 * m).W)))
//   val two_complement_buffer = Seq.fill(blockSize)(RegInit(0.S((2 * m + 1).W)))
//   val two_complement = Seq.fill(blockSize)(RegInit(0.U((2 * m + 1).W)))
//   val signs = Seq.fill(blockSize)(RegInit(0.U(1.W)))
//   val acc = RegInit(0.S((2*m+blockSize).W))
//   val acc_hbfp = RegInit(0.U((2*m+blockSize).W))
//   val acc_buf = RegInit(0.U((2*m+blockSize).W))

//   if (m == 6.toInt){
//     // printf("here")
//     for (i <- 0 until blockSize) {
//       val multiplierReg = RegInit(0.U(6.W))
//       val multiplierReg2 = RegInit(0.U(6.W))
//       // val padding = RegInit(0.U(2.W))
//       val signReg = RegInit(0.U(1.W))
//       val pp1 = RegInit(0.U(12.W))
//       val pp2 = RegInit(0.U(12.W))
//       val pp3 = RegInit(0.U(12.W))
//       val pp4 = RegInit(0.U(12.W))
//       val pp5 = RegInit(0.U(12.W))
//       val pp6 = RegInit(0.U(12.W))
//       val pp7 = RegInit(0.U(12.W))
//       val pp8 = RegInit(0.U(12.W))
//       val pp9 = RegInit(0.U(12.W))
//       signReg := io.sign_a(i)
//       multiplierReg := io.man_a(i)
//       multiplierReg2 := io.man_b(i)

//       for (j<- 0 until 9){
//         if (j == 0.toInt){
//           pp1 := multiplierReg(1,0) * multiplierReg2(1,0)
//         }
//         else if (j == 1.toInt){
//           pp2 := RegNext((multiplierReg(1,0) * multiplierReg2(3,2)) << 2.U)
//         }
//         else if(j == 2.toInt){
//           pp3 := RegNext(RegNext((multiplierReg(1,0) * multiplierReg2(5,4)) << 4.U))
//         }
//         else if(j == 3.toInt){
//           pp4 := RegNext(RegNext(RegNext((multiplierReg(3,2) * multiplierReg2(1,0)) << 2.U)))
//         }
//         else if(j == 4.toInt){
//           pp5 := RegNext(RegNext(RegNext(RegNext((multiplierReg(3,2) * multiplierReg2(3,2)) << 4.U))))
//         }
//         else if(j == 5.toInt){
//           pp6 := RegNext(RegNext(RegNext(RegNext(RegNext((multiplierReg(3,2) * multiplierReg2(5,4)) << 6.U)))))
//         }
//         else if(j == 6.toInt){
//           pp7 := RegNext(RegNext(RegNext(RegNext(RegNext(RegNext((multiplierReg(5,4) * multiplierReg2(1,0)) << 4.U))))))
//         }
//         else if(j == 7.toInt){
//           pp8 := RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext((multiplierReg(5,4) * multiplierReg2(3,2)) << 6.U)))))))
//         }
//         else {
//           dotProductRegs(i) := pp1 +& pp2 +& pp3 +& pp4 +& pp5 +& pp6 +& pp7 +& pp8 +& RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext((multiplierReg(5,4) * multiplierReg2(5,4)) << 8.U))))))))
//         }
//       }
//       // dotProductRegs(i) := pp1 +& pp2 +& pp3 +& pp4 +& pp5 +& pp6 +& pp7 +& pp8 +& pp9
//       // dotProductRegs(i) := multiplierReg(3,0) * multiplierReg2(3,0) + (((padding ## multiplierReg(5,4)) * multiplierReg2(3,0)) << 4.U) + ((multiplierReg(3,0) * (padding ## multiplierReg2(5,4))) << 4.U) + (((padding##multiplierReg(5,4)) * (padding##multiplierReg2(5,4))) << 8.U)
//       signs(i) := signReg ^ io.sign_b(i)
//       two_complement(i) := Mux(signs(i)===1.U, (~(0.U ## dotProductRegs(i)) + 1.U), (0.U ## dotProductRegs(i)))
//       two_complement_buffer(i) := two_complement(i).asSInt
//     }
//   }

//   else if(m == 4.toInt){
//   for (i <- 0 until blockSize) {
//     val multiplierReg = RegInit(0.U(m.W))
//     val multiplierReg2 = RegInit(0.U(m.W))
//     val pp1 = RegInit(0.U(12.W))
//     val pp2 = RegInit(0.U(12.W))
//     val pp3 = RegInit(0.U(12.W))
//     val pp4 = RegInit(0.U(12.W))
//     val signReg = RegInit(0.U(1.W))
//     signReg := io.sign_a(i)
//     multiplierReg := io.man_a(i)
//     multiplierReg2 := io.man_b(i)
//     for (j<- 0 until 4){
//       if (j == 0.toInt){
//         pp1 := multiplierReg(1,0) * multiplierReg2(1,0)
//       }
//       else if(j == 1.toInt){
//         pp2 := RegNext((multiplierReg(1,0) * multiplierReg2(3,2)) << 2.U)
//       }
//       else if (j == 2.toInt){
//         pp3 := RegNext(RegNext((multiplierReg(3,2) * multiplierReg2(1,0)) << 2.U))
//       }
//       else{
//         dotProductRegs(i) := pp1 +& pp2 +& pp3 +&  RegNext(RegNext(RegNext((multiplierReg(3,2) * multiplierReg2(3,2)) << 4.U)))
//       }
//     }
//     // dotProductRegs(i) := pp1 +& pp2 +& pp3 +& pp4
//     signs(i) := signReg ^ io.sign_b(i)
//     two_complement(i) := Mux(signs(i)===1.U, (~(0.U ## dotProductRegs(i)) + 1.U), (0.U ## dotProductRegs(i)))
//     two_complement_buffer(i) := two_complement(i).asSInt
//   }
// }

//   acc := two_complement_buffer.reduce(_+&_)
//   acc_buf := acc.asUInt

//   acc_hbfp := Mux(acc_buf(2*m+blockSize-1)===1.U, ~(0.U ## acc_buf(2*m+blockSize-2, 0)) + 1.U, acc_buf)
//   val right_shift = RegInit(0.U(8.W))
//   val actual_shift = RegInit(0.U(8.W))
//   val buf = 0.U ## Reverse{acc_hbfp(2*m+blockSize-2, m)}

//   right_shift := PriorityEncoder(buf)

//   actual_shift := (2*m+blockSize-2).asUInt - right_shift - (m-1).U

//   val man_out_shifted = acc_hbfp >> (actual_shift)
//   val exp_actual = Wire(UInt((e+2).W))
//   exp_actual := exp_output +& actual_shift

//   io.result := acc(2*m+blockSize-1).asUInt ## exp_actual(e+1,2) ## man_out_shifted(m - 1, 0)
//   // io.result := acc_hbfp(2*m+blockSize-1) ## exp_output ## acc_hbfp(m - 1, 0)

// }

// object Improved_hbfpMain extends App {
//   emitVerilog(new Improved_hbfp(1024, 6, 8))
// }

//// VERSION 7: 1 BIT MULTIPLIER AND 4 MULTIPLIERS
