// import chisel3._
// import chisel3.util._
// import chisel3.util.Reverse

// class HbfpTensor(blockSize: Int, m: Int, e: Int, tensorSize: Int)
//     extends Module {
//   val io = IO(new Bundle {
//     val man_a = Input(Vec(tensorSize, UInt(m.W)))
//     val man_b = Input(Vec(tensorSize, UInt(m.W)))
//     val sign_a = Input(Vec(tensorSize, UInt(1.W)))
//     val sign_b = Input(Vec(tensorSize, UInt(1.W)))
//     val exp_a = Input(Vec(tensorSize / blockSize, UInt(e.W)))
//     val exp_b = Input(Vec(tensorSize / blockSize, UInt(e.W)))
//     val control = Input(Bool())
//     val control2 = Input(Bool())
//     val result = Output(UInt((m + e + 1).W))
//   })

//   val exp_output = Seq.fill(tensorSize / blockSize)(RegInit(0.U((e+1).W)))
// //   val dotProductRegs = Seq.fill(blockSize)(RegInit(0.U((2 * m).W)))
// //   val signs = Seq.fill(blockSize)(RegInit(0.U(1.W)))
// //   val two_complement = Seq.fill(blockSize)(RegInit(0.U((2 * m + 1).W)))
// //   val two_complement_buffer = Seq.fill(blockSize)(RegInit(0.S((2 * m + 1).W)))
//   val acc = Seq.fill(tensorSize / blockSize)(RegInit(0.S((2 * m + blockSize).W)))

//   for (j <- 0 until tensorSize / blockSize) {
//     exp_output(j) := io.exp_a(j) +& io.exp_b(j)
//     val dotProductRegs = Reg(Vec(blockSize, UInt((2 * m).W)))
//     val signs = Reg(Vec(blockSize, UInt(1.W)))
//     val two_complement = Reg(Vec(blockSize, UInt((2 * m + 1).W)))
//     val two_complement_buffer = Reg(Vec(blockSize, SInt((2 * m + 1).W)))
//     for (i <- 0 until blockSize) {
//       val multiplierReg = RegInit(0.U(m.W))
//       val signReg = RegInit(0.U(1.W))
//       signReg := io.sign_a(i + j * blockSize)
//       multiplierReg := io.man_a(i + j * blockSize)
//       dotProductRegs(i) := multiplierReg * io.man_b(i + j * blockSize)
//       signs(i) := signReg ^ io.sign_b(i + j * blockSize)
//       two_complement(i) := Mux(
//         signs(i) === 1.U,
//         (~(0.U ## dotProductRegs(i)) + 1.U),
//         (0.U ## dotProductRegs(i))
//       )
//       two_complement_buffer(i) := two_complement(i).asSInt
//     }
//     acc(j) := two_complement_buffer.reduce(_ +& _)
//   }
//   // printf("here")

//   val adderTreeInst = Module(new adderTree2(blockSize, m, e, tensorSize))
//   adderTreeInst.io.sign_man <> VecInit(acc)
//   adderTreeInst.io.exps <> VecInit(exp_output)
//   adderTreeInst.io.control_signal <> io.control
//   adderTreeInst.io.control_signal2 <> io.control2
//   io.result := adderTreeInst.io.result_tree
// }

// class adderTree2(blockSize: Int, m: Int, e: Int, tensorSize: Int)
//     extends Module {
//   val io = IO(new Bundle {
//     val sign_man =
//     Input(Vec(tensorSize / blockSize, SInt((2 * m + blockSize).W)))
//     val exps = Input(Vec(tensorSize / blockSize, UInt((e+1).W)))
//     val control_signal = Input(Bool())
//     val control_signal2 = Input(Bool())
//     val result_tree = Output(UInt((m + e + 1).W))
//   })
  

//   val exp_buffer = Seq.fill(tensorSize / blockSize)(RegInit(0.U((e+1).W)))
//   var man_buffer_two_complement = Seq.fill(tensorSize / blockSize)(
//     RegInit(0.S((2 * m + blockSize - 1 + (tensorSize / blockSize)).W))
//   )
  

  
//   when(io.control_signal === 0.B){
    
//     for (i <- 0 until tensorSize / blockSize) {
      
//       exp_buffer(i) := io.exps(i)
//       man_buffer_two_complement(i) := io.sign_man(i)
//     }
// }


// //   enable := 1.B
//   val v = RegInit(0.U(10.W))
//   var enable = Reg(Bool())
//   when (io.control_signal2 === 1.B){
//     enable := 1.B
//   }
  
  
//   when (io.control_signal && enable  === 1.B) {
    
    
//     for (i <- 0 until log2Ceil(tensorSize / blockSize)) {
//         v := v + 1.U
//       for (j <- 0 until Math.ceil((tensorSize / blockSize) / (2 << i)).toInt) {
//         if (2 * j + 1 < Math.ceil((tensorSize / blockSize) / (1 << i)).toInt) {
//             exp_buffer(j) := Mux(
//             exp_buffer(2 * j) > exp_buffer(2 * j + 1),
//             exp_buffer(2 * j),
//             exp_buffer(2 * j + 1)
//           )
//           val exp_difference = Mux(
//             exp_buffer(2 * j) > exp_buffer(2 * j + 1),
//             exp_buffer(2 * j) - exp_buffer(2 * j + 1),
//             exp_buffer(2 * j + 1) - exp_buffer(2 * j)
//           )
//           man_buffer_two_complement(j) := Mux(
//             exp_buffer(2 * j) > exp_buffer(2 * j + 1),
//             man_buffer_two_complement(2 * j) + Mux((man_buffer_two_complement(2 * j + 1)(2 * m + blockSize - 2 + (tensorSize / blockSize)).asUInt === 1.U), 
//             0.S - ((~(man_buffer_two_complement(2 * j + 1)) + 1.S) >> exp_difference), 
//             (man_buffer_two_complement(2 * j + 1) >> exp_difference)),

//             man_buffer_two_complement(2 * j + 1) + Mux((man_buffer_two_complement(2 * j)(2 * m + blockSize - 2 + (tensorSize / blockSize)).asUInt === 1.U), 
//             0.S - ((~(man_buffer_two_complement(2 * j)) + 1.S) >> exp_difference), 
//             (man_buffer_two_complement(2 * j) >> exp_difference))
//           )
//         } else {
//           exp_buffer(j) := exp_buffer(2 * j)
//           man_buffer_two_complement(j) := man_buffer_two_complement(2 * j)
//         }
//       }
//       when (v === (log2Ceil(tensorSize/blockSize) - 1.toInt).U){      
//         enable := 0.B
//       }
//     }
//   }

  
//   val sign_man_hbfp = RegInit(
//     0.U((2 * m + blockSize - 1 + (tensorSize / blockSize)).W)
//   )
//   sign_man_hbfp := Mux(
//     man_buffer_two_complement(0)(
//       2 * m + blockSize - 2 + (tensorSize / blockSize)
//     ).asUInt === 1.U,
//     ~(0.U ## (man_buffer_two_complement(0)(
//       2 * m + blockSize - 3 + (tensorSize / blockSize),
//       0
//     )).asUInt) + 1.U,
//     (man_buffer_two_complement(0)).asUInt
//   )

//   val right_shift = RegInit(0.U(8.W))
//   val actual_shift = RegInit(0.U(8.W))
//   val buf = 0.U ## Reverse {
//     sign_man_hbfp(2 * m + blockSize - 3 + (tensorSize / blockSize), m)
//   }

//   right_shift := PriorityEncoder(buf)

//   actual_shift := (2*m + blockSize - 3 + (tensorSize / blockSize)).asUInt - right_shift - (m-1).U

//   val man_out_shifted = sign_man_hbfp >> (actual_shift)
//   val exp_actual = Wire(UInt((e+2).W))
//   exp_actual := exp_buffer(0) +& actual_shift

//   io.result_tree := man_buffer_two_complement(0)(
//     2 * m + blockSize - 2 + (tensorSize / blockSize)
//   ) ## exp_actual(e+1, 2) ## man_out_shifted(m - 1, 0)
// }

// object HbfpTensorMain extends App {
//   emitVerilog(new HbfpTensor(2, 5, 8, 8))
// }




// // VERSION2: MANTISSA MAX

// import chisel3._
// import chisel3.util._
// import chisel3.util.Reverse

// class HbfpTensor(blockSize: Int, m: Int, e: Int, tensorSize: Int)
//     extends Module {
//   val io = IO(new Bundle {
//     val man_a = Input(Vec(tensorSize, UInt(m.W)))
//     val man_b = Input(Vec(tensorSize, UInt(m.W)))
//     val sign_a = Input(Vec(tensorSize, UInt(1.W)))
//     val sign_b = Input(Vec(tensorSize, UInt(1.W)))
//     val exp_a = Input(Vec(tensorSize / blockSize, UInt(e.W)))
//     val exp_b = Input(Vec(tensorSize / blockSize, UInt(e.W)))
//     val control = Input(Bool())
//     val control2 = Input(Bool())
//     val result = Output(UInt((m + e + 1).W))
//   })

//   val exp_output = Seq.fill(tensorSize / blockSize)(RegInit(0.U((e+1).W)))
//   val acc = Seq.fill(tensorSize / blockSize)(RegInit(0.U((m + 1).W)))

//   for (j <- 0 until tensorSize / blockSize) {
//     exp_output(j) := io.exp_a(j) +& io.exp_b(j)
//     val dotProductRegs = Reg(Vec(blockSize, UInt((m).W)))
//     val signs = Reg(Vec(blockSize, UInt(1.W)))
//     val two_complement = Reg(Vec(blockSize, UInt((m + 1).W)))
//     val two_complement_buffer = Reg(Vec(blockSize, SInt((m + 1).W)))
//     for (i <- 0 until blockSize) {
//       val multiplierReg = RegInit(0.U(m.W))
//       val signReg = RegInit(0.U(1.W))
//       signReg := io.sign_a(i + j * blockSize)
//       multiplierReg := io.man_a(i + j * blockSize)
//       val multiplication = multiplierReg * io.man_b(i + j * blockSize)
//       dotProductRegs(i) := Mux(multiplication > (2<<m-1).U - 1.U, (2<<m-1).U - 1.U, multiplication)
//       signs(i) := signReg ^ io.sign_b(i + j * blockSize)
//       two_complement(i) := Mux(
//         signs(i) === 1.U,
//         (~(0.U ## dotProductRegs(i)) + 1.U),
//         (0.U ## dotProductRegs(i))
//       )
//       two_complement_buffer(i) := two_complement(i).asSInt
//     }
//     val sum = two_complement_buffer.reduce(_ +& _)
//     acc(j) := Mux(sum(m+blockSize-1).asUInt===1.U, Mux((~sum(m+blockSize-2,0).asUInt + 1.U) > (2<<m-1).U - 1.U, (~((2<<m-1).U - 1.U)) + 1.U, sum(m+blockSize-1, 0).asUInt), 
//   Mux(sum(m+blockSize-2, 0).asUInt > (2<<m-1).U - 1.U, (2<<m-1).U - 1.U, sum(m+blockSize-1,0).asUInt))
//   }

//   val adderTreeInst = Module(new adderTree2(blockSize, m, e, tensorSize))
//   adderTreeInst.io.sign_man <> VecInit(acc)
//   adderTreeInst.io.exps <> VecInit(exp_output)
//   adderTreeInst.io.control_signal <> io.control  
//   adderTreeInst.io.control_signal2 <> io.control2
//   io.result := adderTreeInst.io.result_tree
// }

// class adderTree2(blockSize: Int, m: Int, e: Int, tensorSize: Int)
//     extends Module {
//   val io = IO(new Bundle {
//     val sign_man =
//     Input(Vec(tensorSize / blockSize, UInt((m + 1).W)))
//     val exps = Input(Vec(tensorSize / blockSize, UInt((e+1).W)))
//     val control_signal = Input(Bool())
//     val control_signal2 = Input(Bool())
//     val result_tree = Output(UInt((m + e + 1).W))
//   })
  

//   val exp_buffer = Seq.fill(tensorSize / blockSize)(RegInit(0.U((e+1).W)))
//   var man_buffer_two_complement = Seq.fill(tensorSize / blockSize)(
//     RegInit(0.S((m + 1).W)))
  

  
//   when(io.control_signal === 0.B){
    
//     for (i <- 0 until tensorSize / blockSize) {
//       exp_buffer(i) := io.exps(i)
//       man_buffer_two_complement(i) := io.sign_man(i).asSInt
//     }
// }


// //   enable := 1.B
//   val v = RegInit(0.U(10.W))
//   var enable = Reg(Bool())
//   when (io.control_signal2 === 1.B){
//     enable := 1.B
//   }
  
  
//   when (io.control_signal && enable  === 1.B) {
    
    
//     for (i <- 0 until log2Ceil(tensorSize / blockSize)) {
//         v := v + 1.U
//       for (j <- 0 until Math.ceil((tensorSize / blockSize) / (2 << i)).toInt) {
//         if (2 * j + 1 < Math.ceil((tensorSize / blockSize) / (1 << i)).toInt) {
//             exp_buffer(j) := Mux(
//             exp_buffer(2 * j) > exp_buffer(2 * j + 1),
//             exp_buffer(2 * j),
//             exp_buffer(2 * j + 1)
//           )
//           val exp_difference = Mux(
//             exp_buffer(2 * j) > exp_buffer(2 * j + 1),
//             exp_buffer(2 * j) - exp_buffer(2 * j + 1),
//             exp_buffer(2 * j + 1) - exp_buffer(2 * j)
//           )
//           val sum = Mux(
//             exp_buffer(2 * j) > exp_buffer(2 * j + 1),
//             man_buffer_two_complement(2 * j) +& Mux((man_buffer_two_complement(2 * j + 1)(m).asUInt === 1.U), 
//             0.S - ((~(man_buffer_two_complement(2 * j + 1)) + 1.S) >> exp_difference), 
//             (man_buffer_two_complement(2 * j + 1) >> exp_difference)),
//             man_buffer_two_complement(2 * j + 1) +& Mux((man_buffer_two_complement(2 * j)(m).asUInt === 1.U), 
//             0.S - ((~(man_buffer_two_complement(2 * j)) + 1.S) >> exp_difference), 
//             (man_buffer_two_complement(2 * j) >> exp_difference))
//           )

//           man_buffer_two_complement(j) := Mux(sum(m+1).asUInt === 1.U, Mux(((~sum).asUInt + 1.U) > (2<<m-1).U - 1.U, ~((2<<m-1).U - 1.U) + 1.U, sum.asUInt),
//           Mux(sum(m, 0).asUInt > (2<<m-1).U - 1.U, 0.U ## (2<<m-1).U - 1.U, 0.U ## sum(m,0).asUInt)).asSInt
//         } else {
//           exp_buffer(j) := exp_buffer(2 * j)
//           man_buffer_two_complement(j) := man_buffer_two_complement(2 * j)
//         }
//       }
//       when (v === (log2Ceil(tensorSize/blockSize)).U - 1.U){      
//         enable := 0.B
//       }
//     }
//   }

  
//   val sign_man_hbfp = RegInit(
//     0.U((m+1).W)
//   )
//   sign_man_hbfp := Mux(
//     man_buffer_two_complement(0)(m).asUInt === 1.U,
//     (~(0.U ## (man_buffer_two_complement(0)(m-1,0)).asUInt) + 1.U),
//     (man_buffer_two_complement(0)).asUInt
//   )

//   io.result_tree := man_buffer_two_complement(0)(m) ## exp_buffer(0)(e, 1) ## sign_man_hbfp(m - 1, 0)
// }

// object HbfpTensorMain extends App {
//   emitVerilog(new HbfpTensor(64, 5, 8, 256))
// }



































// // // import chisel3._
// // // import chisel3.util._
// // // import chisel3.util.Reverse

// // // class HbfpTensor(blockSize: Int, m: Int, e: Int, tensorSize: Int)
// // //     extends Module {
// // //     val io = IO(new Bundle {
// // //     val man_a = Input(Vec(tensorSize, UInt(m.W)))
// // //     val man_b = Input(Vec(tensorSize, UInt(m.W)))
// // //     val sign_a = Input(Vec(tensorSize, UInt(1.W)))
// // //     val sign_b = Input(Vec(tensorSize, UInt(1.W)))
// // //     val exp_a = Input(Vec(tensorSize / blockSize, UInt(e.W)))
// // //     val exp_b = Input(Vec(tensorSize / blockSize, UInt(e.W)))
// // //     val result = Output(UInt((m + e + 1).W))
// // //   })

// // //   val exp_output = Seq.fill(tensorSize / blockSize)(RegInit(0.U(e.W)))
// // // //   val dotProductRegs = Seq.fill(blockSize)(RegInit(0.U((2 * m).W)))
// // // //   val signs = Seq.fill(blockSize)(RegInit(0.U(1.W)))
// // // //   val two_complement = Seq.fill(blockSize)(RegInit(0.U((2 * m + 1).W)))
// // // //   val two_complement_buffer = Seq.fill(blockSize)(RegInit(0.S((2 * m + 1).W)))
// // //   val acc = Seq.fill(tensorSize / blockSize)(RegInit(0.S((2 * m + blockSize).W)))

// // //   for (j <- 0 until tensorSize / blockSize) {
// // //     exp_output(j) := io.exp_a(j) + io.exp_b(j)
// // //     val dotProductRegs = Reg(Vec(blockSize, UInt((2 * m).W)))
// // //     val signs = Reg(Vec(blockSize, UInt(1.W)))
// // //     val two_complement = Reg(Vec(blockSize, UInt((2 * m + 1).W)))
// // //     val two_complement_buffer = Reg(Vec(blockSize, SInt((2 * m + 1).W)))
// // //     for (i <- 0 until blockSize) {
// // //       val multiplierReg = RegInit(0.U(m.W))
// // //       val signReg = RegInit(0.U(1.W))
// // //       signReg := io.sign_a(i + j * blockSize)
// // //       multiplierReg := io.man_a(i + j * blockSize)
// // //       dotProductRegs(i) := multiplierReg * io.man_b(i + j * blockSize)
// // //       signs(i) := signReg ^ io.sign_b(i + j * blockSize)
// // //       two_complement(i) := Mux(
// // //         signs(i) === 1.U,
// // //         (~(0.U ## dotProductRegs(i)) + 1.U),
// // //         (0.U ## dotProductRegs(i))
// // //       )
// // //       two_complement_buffer(i) := two_complement(i).asSInt
// // //     }
// // //     acc(j) := two_complement_buffer.reduce(_ + _)
// // //   }

// // //   val adderTreeInst = Module(new adderTree2(blockSize, m, e, tensorSize))
// // //   adderTreeInst.io.sign_man <> VecInit(acc)
// // //   adderTreeInst.io.exps <> VecInit(exp_output)
// // //   io.result := adderTreeInst.io.result_tree
// // // }

// // // class adderTree2(blockSize: Int, m: Int, e: Int, tensorSize: Int)
// // //     extends Module {
// // //   val io = IO(new Bundle {
// // //     val sign_man =
// // //     Input(Vec(tensorSize / blockSize, SInt((2 * m + blockSize).W)))
// // //     val exps = Input(Vec(tensorSize / blockSize, UInt(e.W)))
// // //     val result_tree = Output(UInt((m + e + 1).W))
// // //   })

// // //   val exp_buffer = Seq.fill(tensorSize / blockSize)(RegInit(0.U(e.W)))
// // //   var man_buffer_two_complement = Seq.fill(tensorSize / blockSize)(
// // //     RegInit(0.S((2 * m + blockSize - 1 + (tensorSize / blockSize)).W))
// // //   )
// // // val exponent = RegInit(0.U(e.W))
// // // val sign_mantissa = RegInit(0.S((2 * m + blockSize - 1 + (tensorSize / blockSize)).W))
  
  
// // // //   val enable = RegInit(0.B)
// // // //   when(enable === 0.B){
// // // //     for (i <- 0 until tensorSize / blockSize) {
// // // //       exp_buffer(i) := io.exps(i)
// // // //       man_buffer_two_complement(i) := io.sign_man(i)
// // // //     }
// // // // }

// // // //   enable := 1.B
  
// // // //   when (enable  === 1.B) {
// // //     for (i <- 0 until log2Ceil(tensorSize / blockSize)) {
// // //     //   val exp_buffer_intr = Reg(Vec(tensorSize/blockSize, UInt(e.W)))
// // //     //   val man_buffer_two_complement_intr = Reg(Vec(tensorSize/blockSize, SInt((2 * m + blockSize - 1 + (tensorSize / blockSize)).W)))
// // //       if (i < 1){
// // //         for (j <- 0 until Math.ceil((tensorSize / blockSize) / (2 << i)).toInt) {
// // //         if (2 * j + 1 < Math.ceil((tensorSize / blockSize) / (1 << i)).toInt) {
// // //           exp_buffer(j) := Mux(
// // //             io.exps(2 * j) > io.exps(2 * j + 1),
// // //             io.exps(2 * j),
// // //             io.exps(2 * j + 1)
// // //           )
// // //           val exp_difference = Mux(
// // //             io.exps(2 * j) > io.exps(2 * j + 1),
// // //             io.exps(2 * j) - io.exps(2 * j + 1),
// // //             io.exps(2 * j + 1) - io.exps(2 * j)
// // //           )
// // //           man_buffer_two_complement(j) := Mux(
// // //             io.exps(2 * j) > io.exps(2 * j + 1),
// // //             io.sign_man(2 * j) + (io.sign_man(
// // //               2 * j + 1
// // //             ) >> exp_difference),
// // //             io.sign_man(2 * j + 1) + (io.sign_man(
// // //               2 * j
// // //             ) >> exp_difference)
// // //           )
// // //         } else {
// // //           exp_buffer(j) := io.exps(2 * j)
// // //           man_buffer_two_complement(j) := io.sign_man(2 * j)
// // //         }
// // //       }
// // //     }

// // //       else{
// // //       for (j <- 0 until Math.ceil((tensorSize / blockSize) / (2 << i)).toInt) {
// // //         if (2 * j + 1 < Math.ceil((tensorSize / blockSize) / (1 << i)).toInt) {
// // //           exp_buffer(j) := Mux(
// // //             exp_buffer(2 * j) > exp_buffer(2 * j + 1),
// // //             exp_buffer(2 * j),
// // //             exp_buffer(2 * j + 1)
// // //           )
// // //           val exp_difference = Mux(
// // //             exp_buffer(2 * j) > exp_buffer(2 * j + 1),
// // //             exp_buffer(2 * j) - exp_buffer(2 * j + 1),
// // //             exp_buffer(2 * j + 1) - exp_buffer(2 * j)
// // //           )
// // //           man_buffer_two_complement(j) := Mux(
// // //             exp_buffer(2 * j) > exp_buffer(2 * j + 1),
// // //             man_buffer_two_complement(2 * j) + (man_buffer_two_complement(
// // //               2 * j + 1
// // //             ) >> exp_difference),
// // //             man_buffer_two_complement(2 * j + 1) + (man_buffer_two_complement(
// // //               2 * j
// // //             ) >> exp_difference)
// // //           )
// // //         } else {
// // //           exp_buffer(j) := exp_buffer(2 * j)
// // //           man_buffer_two_complement(j) := man_buffer_two_complement(2 * j)
// // //         }
// // //       }
// // //     }
// // //     exponent := exp_buffer(0)
// // //     sign_mantissa := man_buffer_two_complement(0)
// // // }
// // //     // enable := 0.B
// // // //   }
  
// // //   val sign_man_hbfp = RegInit(
// // //     0.U((2 * m + blockSize - 1 + (tensorSize / blockSize)).W)
// // //   )
// // //   sign_man_hbfp := Mux(
// // //     sign_mantissa(
// // //       2 * m + blockSize - 2 + (tensorSize / blockSize)
// // //     ).asUInt === 1.U,
// // //     ~(0.U ## (sign_mantissa(
// // //       2 * m + blockSize - 3 + (tensorSize / blockSize),
// // //       0
// // //     )).asUInt) + 1.U,
// // //     (sign_mantissa).asUInt
// // //   )

// // //   val right_shift = RegInit(0.U(8.W))
// // //   val actual_shift = RegInit(0.U(8.W))
// // //   val buf = Reverse {
// // //     sign_man_hbfp(2 * m + blockSize - 3 + (tensorSize / blockSize), m)
// // //   }

// // //   right_shift := PriorityEncoder(buf)

// // //   actual_shift := (m + blockSize - 3 + (tensorSize / blockSize)).asUInt - right_shift

// // //   val man_out_shifted = sign_man_hbfp >> (actual_shift)

// // //   io.result_tree := sign_man_hbfp(
// // //     2 * m + blockSize - 2 + (tensorSize / blockSize)
// // //   ) ## (exponent + actual_shift) ## man_out_shifted(m - 1, 0)
// // // }

// // // object HbfpTensorMain extends App {
// // //   emitVerilog(new HbfpTensor(4, 5, 8, 16))
// // // }

