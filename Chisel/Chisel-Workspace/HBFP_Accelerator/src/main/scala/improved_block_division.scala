// // VERSION 1: 4 BIT MULTIPLIER AND 4 MULTIPLIERS
// import chisel3._
// import chisel3.util._
// import chisel3.util.Reverse

// class Improved_HbfpTensor(blockSize: Int, m: Int, e: Int, tensorSize: Int)
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
//   val acc = Seq.fill(tensorSize / blockSize)(RegInit(0.S((2 * m + blockSize).W)))

//   for (j <- 0 until tensorSize / blockSize) {
//     exp_output(j) := io.exp_a(j) +& io.exp_b(j)
//     val dotProductRegs = Reg(Vec(blockSize, UInt((2 * m).W)))
//     val signs = Reg(Vec(blockSize, UInt(1.W)))
//     val two_complement = Reg(Vec(blockSize, UInt((2 * m + 1).W)))
//     val two_complement_buffer = Reg(Vec(blockSize, SInt((2 * m + 1).W)))
//   if (m == 6.toInt){
//     for (i <- 0 until blockSize) {
//       val multiplierReg = RegInit(0.U(6.W))
//       val multiplierReg2 = RegInit(0.U(6.W))
//       val padding = RegInit(0.U(2.W))
//       val signReg = RegInit(0.U(1.W))
//       signReg := io.sign_a(i + j*blockSize)
//       multiplierReg := io.man_a(i + j*blockSize)
//       multiplierReg2 := io.man_b(i + j*blockSize)
//       val multiplication = multiplierReg(3,0) * multiplierReg2(3,0) +& (((padding ## multiplierReg(5,4)) * multiplierReg2(3,0)) << 4.U) +& ((multiplierReg(3,0) * (padding ## multiplierReg2(5,4))) << 4.U) +& (((padding##multiplierReg(5,4)) * (padding##multiplierReg2(5,4))) << 8.U)
//       dotProductRegs(i) := multiplication(11,0)
//       signs(i) := signReg ^ io.sign_b(i + j*blockSize)
//       two_complement(i) := Mux(signs(i)===1.U, (~(0.U ## dotProductRegs(i)) + 1.U), (0.U ## dotProductRegs(i)))
//       two_complement_buffer(i) := two_complement(i).asSInt
//   } 
//   }


//   else{
//   for (i <- 0 until blockSize) {
//     val multiplierReg = RegInit(0.U(m.W))
//     val signReg = RegInit(0.U(1.W))
//     signReg := io.sign_a(i + j*blockSize)
//     multiplierReg := io.man_a(i + j*blockSize)
//     dotProductRegs(i) := multiplierReg * io.man_b(i + j*blockSize)
//     signs(i) := signReg ^ io.sign_b(i + j*blockSize)
//     two_complement(i) := Mux(signs(i)===1.U, (~(0.U ## dotProductRegs(i)) + 1.U), (0.U ## dotProductRegs(i)))
//     two_complement_buffer(i) := two_complement(i).asSInt
//   }
// }
//     acc(j) := two_complement_buffer.reduce(_ +& _)
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

// object Improved_HbfpTensorMain extends App {
//   emitVerilog(new Improved_HbfpTensor(16, 6, 8, 64))
// }






// // VERSION 2: 4 BIT MULTIPLIER AND 2 MULTIPLIERS
// import chisel3._
// import chisel3.util._
// import chisel3.util.Reverse

// class Improved_HbfpTensor(blockSize: Int, m: Int, e: Int, tensorSize: Int)
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
//   val acc = Seq.fill(tensorSize / blockSize)(RegInit(0.S((2 * m + blockSize).W)))

//   for (j <- 0 until tensorSize / blockSize) {
//     exp_output(j) := io.exp_a(j) +& io.exp_b(j)
//     val dotProductRegs = Reg(Vec(blockSize, UInt((2 * m).W)))
//     val signs = Reg(Vec(blockSize, UInt(1.W)))
//     val two_complement = Reg(Vec(blockSize, UInt((2 * m + 1).W)))
//     val two_complement_buffer = Reg(Vec(blockSize, SInt((2 * m + 1).W)))
//   if (m == 6.toInt){
//     for (i <- 0 until blockSize) {
//       val multiplierReg = RegInit(0.U(6.W))
//       val multiplierReg2 = RegInit(0.U(6.W))
//       val padding = RegInit(0.U(2.W))
//       val signReg = RegInit(0.U(1.W))
//       val pp1 = RegInit(0.U(12.W))
//       val pp2 = RegInit(0.U(12.W))
//       signReg := io.sign_a(i + j*blockSize)
//       multiplierReg := io.man_a(i + j*blockSize)
//       multiplierReg2 := io.man_b(i + j*blockSize)

//       for (j<- 0 until 2){
//         if (j == 0.toInt){
//           pp1 := multiplierReg(3,0) * multiplierReg2(3,0) +& (((padding ## multiplierReg(5,4)) * multiplierReg2(3,0)) << 4.U)
//         }
//         else{
//           val pp = RegInit(0.U(12.W))
//           pp := ((multiplierReg(3,0) * (padding ## multiplierReg2(5,4))) << 4.U) +& (((padding##multiplierReg(5,4)) * (padding##multiplierReg2(5,4))) << 8.U)
//           pp2 := pp
//         }
//       }
//       dotProductRegs(i) := pp1 +& pp2
//       // dotProductRegs(i) := multiplierReg(3,0) * multiplierReg2(3,0) + (((padding ## multiplierReg(5,4)) * multiplierReg2(3,0)) << 4.U) + ((multiplierReg(3,0) * (padding ## multiplierReg2(5,4))) << 4.U) + (((padding##multiplierReg(5,4)) * (padding##multiplierReg2(5,4))) << 8.U)                
//       signs(i) := signReg ^ io.sign_b(i + j*blockSize)
//       two_complement(i) := Mux(signs(i)===1.U, (~(0.U ## dotProductRegs(i)) + 1.U), (0.U ## dotProductRegs(i)))
//       two_complement_buffer(i) := two_complement(i).asSInt
//     } 
//   }


//   else{
//   for (i <- 0 until blockSize) {
//     val multiplierReg = RegInit(0.U(m.W))
//     val signReg = RegInit(0.U(1.W))
//     signReg := io.sign_a(i + j*blockSize)
//     multiplierReg := io.man_a(i + j*blockSize)
//     dotProductRegs(i) := multiplierReg * io.man_b(i + j*blockSize)
//     signs(i) := signReg ^ io.sign_b(i + j*blockSize)
//     two_complement(i) := Mux(signs(i)===1.U, (~(0.U ## dotProductRegs(i)) + 1.U), (0.U ## dotProductRegs(i)))
//     two_complement_buffer(i) := two_complement(i).asSInt
//   }
// }
//     acc(j) := two_complement_buffer.reduce(_ +& _)
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

// object Improved_HbfpTensorMain extends App {
//   emitVerilog(new Improved_HbfpTensor(16, 6, 8, 64))
// }







// // VERSION 3: 4 BIT MULTIPLIER AND 1 MULTIPLIER
// import chisel3._
// import chisel3.util._
// import chisel3.util.Reverse

// class Improved_HbfpTensor(blockSize: Int, m: Int, e: Int, tensorSize: Int)
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
//   val acc = Seq.fill(tensorSize / blockSize)(RegInit(0.S((2 * m + blockSize).W)))

//   for (j <- 0 until tensorSize / blockSize) {
//     exp_output(j) := io.exp_a(j) +& io.exp_b(j)
//     val dotProductRegs = Reg(Vec(blockSize, UInt((2 * m).W)))
//     val signs = Reg(Vec(blockSize, UInt(1.W)))
//     val two_complement = Reg(Vec(blockSize, UInt((2 * m + 1).W)))
//     val two_complement_buffer = Reg(Vec(blockSize, SInt((2 * m + 1).W)))
//   if (m == 6.toInt){
//     for (i <- 0 until blockSize) {
//       val multiplierReg = RegInit(0.U(6.W))
//       val multiplierReg2 = RegInit(0.U(6.W))
//       val padding = RegInit(0.U(2.W))
//       val signReg = RegInit(0.U(1.W))
//       val pp1 = RegInit(0.U(12.W))
//       val pp2 = RegInit(0.U(12.W))
//       val pp3 = RegInit(0.U(12.W))
//       val pp4 = RegInit(0.U(12.W))
//       signReg := io.sign_a(i + j*blockSize)
//       multiplierReg := io.man_a(i + j*blockSize)
//       multiplierReg2 := io.man_b(i + j*blockSize)

//       for (j<- 0 until 4){
//         if (j == 0.toInt){
//           pp1 := multiplierReg(3,0) * multiplierReg2(3,0)
//         }
//         else if(j == 1.toInt){
//           val ppa = RegInit(0.U(12.W))
//           ppa := (((padding ## multiplierReg(5,4)) * multiplierReg2(3,0)) << 4.U)
//           pp2 := ppa

//         }
//         else if(j == 2.toInt){
//           val ppb0 = RegInit(0.U(12.W))
//           val ppb1 = RegInit(0.U(12.W))
//           ppb0 := ((multiplierReg(3,0) * (padding ## multiplierReg2(5,4))) << 4.U)
//           ppb1 := ppb0
//           pp3 := ppb1
//         }
//         else{
//           val ppc0 = RegInit(0.U(12.W))
//           val ppc1 = RegInit(0.U(12.W))
//           val ppc2 = RegInit(0.U(12.W))
//           ppc0 :=  (((padding##multiplierReg(5,4)) * (padding##multiplierReg2(5,4))) << 8.U)
//           ppc1 := ppc0
//           ppc2 := ppc1
//           pp4 := ppc2
//         }
//       }
//       dotProductRegs(i) := pp1 +& pp2 +& pp3 +& pp4
//       // dotProductRegs(i) := multiplierReg(3,0) * multiplierReg2(3,0) + (((padding ## multiplierReg(5,4)) * multiplierReg2(3,0)) << 4.U) + ((multiplierReg(3,0) * (padding ## multiplierReg2(5,4))) << 4.U) + (((padding##multiplierReg(5,4)) * (padding##multiplierReg2(5,4))) << 8.U)                
//       signs(i) := signReg ^ io.sign_b(i + j*blockSize)
//       two_complement(i) := Mux(signs(i)===1.U, (~(0.U ## dotProductRegs(i)) + 1.U), (0.U ## dotProductRegs(i)))
//       two_complement_buffer(i) := two_complement(i).asSInt
//     } 
//   }


//   else{
//   for (i <- 0 until blockSize) {
//     val multiplierReg = RegInit(0.U(m.W))
//     val signReg = RegInit(0.U(1.W))
//     signReg := io.sign_a(i + j*blockSize)
//     multiplierReg := io.man_a(i + j*blockSize)
//     dotProductRegs(i) := multiplierReg * io.man_b(i + j*blockSize)
//     signs(i) := signReg ^ io.sign_b(i + j*blockSize)
//     two_complement(i) := Mux(signs(i)===1.U, (~(0.U ## dotProductRegs(i)) + 1.U), (0.U ## dotProductRegs(i)))
//     two_complement_buffer(i) := two_complement(i).asSInt
//   }
// }
//     acc(j) := two_complement_buffer.reduce(_ +& _)
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

// object Improved_HbfpTensorMain extends App {
//   emitVerilog(new Improved_HbfpTensor(16, 6, 8, 64))
// }






// // VERSION 4: 2 BIT MULTIPLIER AND 4 MULTIPLIERS
// import chisel3._
// import chisel3.util._
// import chisel3.util.Reverse

// class Improved_HbfpTensor(blockSize: Int, m: Int, e: Int, tensorSize: Int)
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
//   val acc = Seq.fill(tensorSize / blockSize)(RegInit(0.S((2 * m + blockSize).W)))

//   for (j <- 0 until tensorSize / blockSize) {
//     exp_output(j) := io.exp_a(j) +& io.exp_b(j)
//     val dotProductRegs = Reg(Vec(blockSize, UInt((2 * m).W)))
//     val signs = Reg(Vec(blockSize, UInt(1.W)))
//     val two_complement = Reg(Vec(blockSize, UInt((2 * m + 1).W)))
//     val two_complement_buffer = Reg(Vec(blockSize, SInt((2 * m + 1).W)))
//   if (m == 6.toInt){
//     for (i <- 0 until blockSize) {
//       val multiplierReg = RegInit(0.U(6.W))
//       val multiplierReg2 = RegInit(0.U(6.W))
//       // val padding = RegInit(0.U(2.W))
//       val signReg = RegInit(0.U(1.W))
//       val pp1 = RegInit(0.U(12.W))
//       val pp2 = RegInit(0.U(12.W))
//       val pp3 = RegInit(0.U(12.W))
//       // val pp4 = RegInit(0.U(12.W))
//       signReg := io.sign_a(i + j*blockSize)
//       multiplierReg := io.man_a(i + j*blockSize)
//       multiplierReg2 := io.man_b(i + j*blockSize)

//       for (j<- 0 until 3){
//         if (j == 0.toInt){
//           pp1 := multiplierReg(1,0) * multiplierReg2(1,0) + ((multiplierReg(1,0) * multiplierReg2(3,2)) << 2.U) + ((multiplierReg(1,0) * multiplierReg2(5,4)) << 4.U) + ((multiplierReg(3,2) * multiplierReg2(1,0)) << 2.U)
//         }
//         else if(j == 1.toInt){
//           val ppa = RegInit(0.U(12.W))
//           ppa := ((multiplierReg(3,2) * multiplierReg2(3,2)) << 4.U) + ((multiplierReg(3,2) * multiplierReg2(5,4)) << 6.U) + ((multiplierReg(5,4) * multiplierReg2(1,0)) << 4.U) + ((multiplierReg(5,4) * multiplierReg2(3,2)) << 6.U)
//           pp2 := ppa

//         }
//         else{
//           val ppb0 = RegInit(0.U(12.W))
//           val ppb1 = RegInit(0.U(12.W))
//           ppb0 := ((multiplierReg(5,4) * multiplierReg2(5,4)) << 8.U)
//           ppb1 := ppb0
//           pp3 := ppb1
//         }
//       }
//       dotProductRegs(i) := pp1 +& pp2 +& pp3
//       // dotProductRegs(i) := multiplierReg(3,0) * multiplierReg2(3,0) + (((padding ## multiplierReg(5,4)) * multiplierReg2(3,0)) << 4.U) + ((multiplierReg(3,0) * (padding ## multiplierReg2(5,4))) << 4.U) + (((padding##multiplierReg(5,4)) * (padding##multiplierReg2(5,4))) << 8.U)                
//       signs(i) := signReg ^ io.sign_b(i + j*blockSize)
//       two_complement(i) := Mux(signs(i)===1.U, (~(0.U ## dotProductRegs(i)) + 1.U), (0.U ## dotProductRegs(i)))
//       two_complement_buffer(i) := two_complement(i).asSInt
//     } 
//   }


//   else if(m == 4.toInt){
//   for (i <- 0 until blockSize) {
//     val multiplierReg = RegInit(0.U(m.W))
//     val multiplierReg2 = RegInit(0.U(m.W))
//     val signReg = RegInit(0.U(1.W))
//     signReg := io.sign_a(i + j*blockSize)
//     multiplierReg := io.man_a(i + j*blockSize)
//     multiplierReg2 := io.man_b(i + j*blockSize)
//     dotProductRegs(i) := multiplierReg(1,0) * multiplierReg2(1,0) + ((multiplierReg(1,0) * multiplierReg2(3,2)) << 2.U) + ((multiplierReg(3,2) * multiplierReg2(1,0)) << 2.U) + ((multiplierReg(3,2) * multiplierReg2(3,2)) << 4.U)
//     signs(i) := signReg ^ io.sign_b(i + j*blockSize)
//     two_complement(i) := Mux(signs(i)===1.U, (~(0.U ## dotProductRegs(i)) + 1.U), (0.U ## dotProductRegs(i)))
//     two_complement_buffer(i) := two_complement(i).asSInt
//   }
// }
//     acc(j) := two_complement_buffer.reduce(_ +& _)
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

// object Improved_HbfpTensorMain extends App {
//   emitVerilog(new Improved_HbfpTensor(16, 6, 8, 64))
// }







// // VERSION 5: 2 BIT MULTIPLIER AND 2 MULTIPLIERS
// import chisel3._
// import chisel3.util._
// import chisel3.util.Reverse

// class Improved_HbfpTensor(blockSize: Int, m: Int, e: Int, tensorSize: Int)
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
//   val acc = Seq.fill(tensorSize / blockSize)(RegInit(0.S((2 * m + blockSize).W)))

//   for (j <- 0 until tensorSize / blockSize) {
//     exp_output(j) := io.exp_a(j) +& io.exp_b(j)
//     val dotProductRegs = Reg(Vec(blockSize, UInt((2 * m).W)))
//     val signs = Reg(Vec(blockSize, UInt(1.W)))
//     val two_complement = Reg(Vec(blockSize, UInt((2 * m + 1).W)))
//     val two_complement_buffer = Reg(Vec(blockSize, SInt((2 * m + 1).W)))
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
//       signReg := io.sign_a(i + j*blockSize)
//       multiplierReg := io.man_a(i + j*blockSize)
//       multiplierReg2 := io.man_b(i + j*blockSize)

//       for (j<- 0 until 5){
//         if (j == 0.toInt){
//           pp1 := multiplierReg(1,0) * multiplierReg2(1,0) + ((multiplierReg(1,0) * multiplierReg2(3,2)) << 2.U)
//         }
//         else if (j == 1.toInt){
//           val ppa = RegInit(0.U(12.W))
//           ppa := ((multiplierReg(1,0) * multiplierReg2(5,4)) << 4.U) + ((multiplierReg(3,2) * multiplierReg2(1,0)) << 2.U)
//           pp2 := ppa
//         }
//         else if(j == 2.toInt){
//           val ppb0 = RegInit(0.U(12.W))
//           val ppb1 = RegInit(0.U(12.W))
//           ppb0 := ((multiplierReg(3,2) * multiplierReg2(3,2)) << 4.U) + ((multiplierReg(3,2) * multiplierReg2(5,4)) << 6.U)
//           ppb1 := ppb0
//           pp3 := ppb1

//         }
//         else if(j == 3.toInt){
//           val ppc0 = RegInit(0.U(12.W))
//           val ppc1 = RegInit(0.U(12.W))  
//           val ppc2 = RegInit(0.U(12.W))
//           ppc0 :=  ((multiplierReg(5,4) * multiplierReg2(1,0)) << 4.U) + ((multiplierReg(5,4) * multiplierReg2(3,2)) << 6.U)
//           ppc1 := ppc0
//           ppc2 := ppc1
//           pp4 := ppc2
//         }
//         else{
//           val ppd0 = RegInit(0.U(12.W))
//           val ppd1 = RegInit(0.U(12.W))
//           val ppd2 = RegInit(0.U(12.W))
//           val ppd3 = RegInit(0.U(12.W))
//           ppd0 := ((multiplierReg(5,4) * multiplierReg2(5,4)) << 8.U)
//           ppd1 := ppd0
//           ppd2 := ppd1
//           ppd3 := ppd2
//           pp5 := ppd3
//         }
//       }
//       dotProductRegs(i) := pp1 +& pp2 +& pp3 +& pp4 +& pp5
//       // dotProductRegs(i) := multiplierReg(3,0) * multiplierReg2(3,0) + (((padding ## multiplierReg(5,4)) * multiplierReg2(3,0)) << 4.U) + ((multiplierReg(3,0) * (padding ## multiplierReg2(5,4))) << 4.U) + (((padding##multiplierReg(5,4)) * (padding##multiplierReg2(5,4))) << 8.U)                
//       signs(i) := signReg ^ io.sign_b(i + j*blockSize)
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
//     signReg := io.sign_a(i + j*blockSize)
//     multiplierReg := io.man_a(i + j*blockSize)
//     multiplierReg2 := io.man_b(i + j*blockSize)
//     for (j<- 0 until 2){
//       if (j == 0.toInt){
//         pp1 := multiplierReg(1,0) * multiplierReg2(1,0) + ((multiplierReg(1,0) * multiplierReg2(3,2)) << 2.U)
//       }
//       else{
//         val pp = RegInit(0.U(12.W))
//         pp := ((multiplierReg(3,2) * multiplierReg2(1,0)) << 2.U) + ((multiplierReg(3,2) * multiplierReg2(3,2)) << 4.U)
//         pp2 := pp
//       }
//     }
//     dotProductRegs(i) := pp1 +& pp2 
//     signs(i) := signReg ^ io.sign_b(i + j*blockSize)
//     two_complement(i) := Mux(signs(i)===1.U, (~(0.U ## dotProductRegs(i)) + 1.U), (0.U ## dotProductRegs(i)))
//     two_complement_buffer(i) := two_complement(i).asSInt
//   }
// }
//     acc(j) := two_complement_buffer.reduce(_ +& _)
// }

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

// object Improved_HbfpTensorMain extends App {
//   emitVerilog(new Improved_HbfpTensor(16, 6, 8, 64))
// }







// // VERSION 6: 2 BIT MULTIPLIER AND 1 MULTIPLIER
// import chisel3._
// import chisel3.util._
// import chisel3.util.Reverse

// class Improved_HbfpTensor(blockSize: Int, m: Int, e: Int, tensorSize: Int)
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
//   val acc = Seq.fill(tensorSize / blockSize)(RegInit(0.S((2 * m + blockSize).W)))

//   for (j <- 0 until tensorSize / blockSize) {
//     exp_output(j) := io.exp_a(j) +& io.exp_b(j)
//     val dotProductRegs = Reg(Vec(blockSize, UInt((2 * m).W)))
//     val signs = Reg(Vec(blockSize, UInt(1.W)))
//     val two_complement = Reg(Vec(blockSize, UInt((2 * m + 1).W)))
//     val two_complement_buffer = Reg(Vec(blockSize, SInt((2 * m + 1).W)))
//   if (m == 6.toInt){
//     for (i <- 0 until blockSize) {
//       val multiplierReg = RegInit(0.U(6.W))
//       val multiplierReg2 = RegInit(0.U(6.W))
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
//       signReg := io.sign_a(i + j*blockSize)
//       multiplierReg := io.man_a(i + j*blockSize)
//       multiplierReg2 := io.man_b(i + j*blockSize)

//       for (j<- 0 until 9){
//         if (j == 0.toInt){
//           pp1 := multiplierReg(1,0) * multiplierReg2(1,0) 
//         }
//         else if (j == 1.toInt){
//           val ppa = RegInit(0.U(12.W))
//           ppa := ((multiplierReg(1,0) * multiplierReg2(3,2)) << 2.U)                                 
//           pp2 := ppa
//         }
//         else if(j == 2.toInt){
//           val ppb0 = RegInit(0.U(12.W))
//           val ppb1 = RegInit(0.U(12.W))
//           ppb0 := ((multiplierReg(1,0) * multiplierReg2(5,4)) << 4.U)                    
//           ppb1 := ppb0
//           pp3 := ppb1

//         }
//         else if(j == 3.toInt){
//           val ppc0 = RegInit(0.U(12.W))
//           val ppc1 = RegInit(0.U(12.W))  
//           val ppc2 = RegInit(0.U(12.W))
//           ppc0 := ((multiplierReg(3,2) * multiplierReg2(1,0)) << 2.U)                   
//           ppc1 := ppc0
//           ppc2 := ppc1
//           pp4 := ppc2
//         }
//         else if(j == 4.toInt){
//           val ppd0 = RegInit(0.U(12.W))
//           val ppd1 = RegInit(0.U(12.W))
//           val ppd2 = RegInit(0.U(12.W))
//           val ppd3 = RegInit(0.U(12.W))
//           ppd0 := ((multiplierReg(3,2) * multiplierReg2(3,2)) << 4.U)                            
//           ppd1 := ppd0
//           ppd2 := ppd1
//           ppd3 := ppd2
//           pp5 := ppd3
//         }
//         else if(j == 5.toInt){
//           val ppe0 = RegInit(0.U(12.W))
//           val ppe1 = RegInit(0.U(12.W))
//           val ppe2 = RegInit(0.U(12.W))
//           val ppe3 = RegInit(0.U(12.W))
//           val ppe4 = RegInit(0.U(12.W))
//           ppe0 := ((multiplierReg(3,2) * multiplierReg2(5,4)) << 6.U)                           
//           ppe1 := ppe0
//           ppe2 := ppe1
//           ppe3 := ppe2
//           ppe4 := ppe3
//           pp6 := ppe4
//         }
//         else if(j == 6.toInt){
//           val ppf0 = RegInit(0.U(12.W))
//           val ppf1 = RegInit(0.U(12.W))
//           val ppf2 = RegInit(0.U(12.W))
//           val ppf3 = RegInit(0.U(12.W))
//           val ppf4 = RegInit(0.U(12.W))
//           val ppf5 = RegInit(0.U(12.W))
//           ppf0 := ((multiplierReg(5,4) * multiplierReg2(1,0)) << 4.U)                           
//           ppf1 := ppf0
//           ppf2 := ppf1
//           ppf3 := ppf2
//           ppf4 := ppf3
//           ppf5 := ppf4
//           pp7 := ppf5
//         }
//         else if(j == 7.toInt){
//           val ppg0 = RegInit(0.U(12.W))
//           val ppg1 = RegInit(0.U(12.W))
//           val ppg2 = RegInit(0.U(12.W))
//           val ppg3 = RegInit(0.U(12.W))
//           val ppg4 = RegInit(0.U(12.W))
//           val ppg5 = RegInit(0.U(12.W))
//           val ppg6 = RegInit(0.U(12.W))
//           ppg0 := ((multiplierReg(5,4) * multiplierReg2(3,2)) << 6.U)
//           ppg1 := ppg0
//           ppg2 := ppg1
//           ppg3 := ppg2
//           ppg4 := ppg3
//           ppg5 := ppg4
//           ppg6 := ppg5
//           pp8 := ppg6
//         }
//         else {
//           val pph0 = RegInit(0.U(12.W))
//           val pph1 = RegInit(0.U(12.W))
//           val pph2 = RegInit(0.U(12.W))
//           val pph3 = RegInit(0.U(12.W))
//           val pph4 = RegInit(0.U(12.W))
//           val pph5 = RegInit(0.U(12.W))
//           val pph6 = RegInit(0.U(12.W))
//           val pph7 = RegInit(0.U(12.W))
//           pph0 := ((multiplierReg(5,4) * multiplierReg2(5,4)) << 8.U)
//           pph1 := pph0
//           pph2 := pph1
//           pph3 := pph2
//           pph4 := pph3
//           pph5 := pph4
//           pph6 := pph5
//           pph7 := pph6
//           pp9 := pph7
//         }
//       }
//       dotProductRegs(i) := pp1 +& pp2 +& pp3 +& pp4 +& pp5 +& pp6 +& pp7 +& pp8 +& pp9
//       // dotProductRegs(i) := multiplierReg(3,0) * multiplierReg2(3,0) + (((padding ## multiplierReg(5,4)) * multiplierReg2(3,0)) << 4.U) + ((multiplierReg(3,0) * (padding ## multiplierReg2(5,4))) << 4.U) + (((padding##multiplierReg(5,4)) * (padding##multiplierReg2(5,4))) << 8.U)                
//       signs(i) := signReg ^ io.sign_b(i + j*blockSize)
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
//     signReg := io.sign_a(i + j*blockSize)
//     multiplierReg := io.man_a(i + j*blockSize)
//     multiplierReg2 := io.man_b(i + j*blockSize)
//     for (j<- 0 until 4){
//       if (j == 0.toInt){
//         pp1 := multiplierReg(1,0) * multiplierReg2(1,0)
//       }
//       else if(j == 1.toInt){
//         val ppa = RegInit(0.U(12.W))
//         ppa := ((multiplierReg(1,0) * multiplierReg2(3,2)) << 2.U)
//         pp2 := ppa
//       }
//       else if (j == 2.toInt){
//         val ppb0 = RegInit(0.U(12.W))
//         val ppb1 = RegInit(0.U(12.W))
//         ppb0 := ((multiplierReg(3,2) * multiplierReg2(1,0)) << 2.U)
//         ppb1 := ppb0
//         pp3 := ppb1
//       }
//       else{
//         val ppc0 = RegInit(0.U(12.W))
//         val ppc1 = RegInit(0.U(12.W))
//         val ppc2 = RegInit(0.U(12.W))
//         ppc0 := ((multiplierReg(3,2) * multiplierReg2(3,2)) << 4.U)
//         ppc1 := ppc0
//         ppc2 := ppc1
//         pp4 := ppc2
//       }
//     }
//     dotProductRegs(i) := pp1 +& pp2 +& pp3 +& pp4
//     signs(i) := signReg ^ io.sign_b(i + j*blockSize)
//     two_complement(i) := Mux(signs(i)===1.U, (~(0.U ## dotProductRegs(i)) + 1.U), (0.U ## dotProductRegs(i)))
//     two_complement_buffer(i) := two_complement(i).asSInt
//   }
// }
//     acc(j) := two_complement_buffer.reduce(_ +& _)
// }

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

// object Improved_HbfpTensorMain extends App {
//   emitVerilog(new Improved_HbfpTensor(16, 6, 8, 64))
// }



































// // VERSION 1b: 4 BIT MULTIPLIER AND 4 MULTIPLIERS (MANT MAX)
// import chisel3._
// import chisel3.util._
// import chisel3.util.Reverse

// class Improved_HbfpTensor(blockSize: Int, m: Int, e: Int, tensorSize: Int)
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
//   if (m == 6.toInt){
//     for (i <- 0 until blockSize) {
//       val multiplierReg = RegInit(0.U(6.W))
//       val multiplierReg2 = RegInit(0.U(6.W))
//       val padding = RegInit(0.U(2.W))
//       val signReg = RegInit(0.U(1.W))
//       signReg := io.sign_a(i + j*blockSize)
//       multiplierReg := io.man_a(i + j*blockSize)
//       multiplierReg2 := io.man_b(i + j*blockSize)
//       val multiplication = multiplierReg(3,0) * multiplierReg2(3,0) +& (((padding ## multiplierReg(5,4)) * multiplierReg2(3,0)) << 4.U) +& ((multiplierReg(3,0) * (padding ## multiplierReg2(5,4))) << 4.U) +& (((padding##multiplierReg(5,4)) * (padding##multiplierReg2(5,4))) << 8.U)
//       dotProductRegs(i) := Mux(multiplication > (2<<m-1).U - 1.U, (2<<m-1).U - 1.U, multiplication)
//       signs(i) := signReg ^ io.sign_b(i + j*blockSize)
//       two_complement(i) := Mux(signs(i)===1.U, (~(0.U ## dotProductRegs(i)) + 1.U), (0.U ## dotProductRegs(i)))
//       two_complement_buffer(i) := two_complement(i).asSInt
//   } 
//   }


//   else{
//   for (i <- 0 until blockSize) {
//     val multiplierReg = RegInit(0.U(m.W))
//     val signReg = RegInit(0.U(1.W))
//     signReg := io.sign_a(i + j*blockSize)
//     multiplierReg := io.man_a(i + j*blockSize)
//     val multiplication = multiplierReg * io.man_b(i + j*blockSize)
//     dotProductRegs(i) :=  Mux(multiplication > (2<<m-1).U - 1.U, (2<<m-1).U - 1.U, multiplication)
//     signs(i) := signReg ^ io.sign_b(i + j*blockSize)
//     two_complement(i) := Mux(signs(i)===1.U, (~(0.U ## dotProductRegs(i)) + 1.U), (0.U ## dotProductRegs(i)))
//     two_complement_buffer(i) := two_complement(i).asSInt
//   }
// }
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

// object Improved_HbfpTensorMain extends App {
//   emitVerilog(new Improved_HbfpTensor(16, 6, 8, 64))
// }






// // VERSION 2b: 4 BIT MULTIPLIER AND 2 MULTIPLIERS (MANT MAX)
// import chisel3._
// import chisel3.util._
// import chisel3.util.Reverse

// class Improved_HbfpTensor(blockSize: Int, m: Int, e: Int, tensorSize: Int)
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
//   if (m == 6.toInt){
//     for (i <- 0 until blockSize) {
//       val multiplierReg = RegInit(0.U(6.W))
//       val multiplierReg2 = RegInit(0.U(6.W))
//       val padding = RegInit(0.U(2.W))
//       val signReg = RegInit(0.U(1.W))
//       val pp1 = RegInit(0.U(12.W))
//       val pp2 = RegInit(0.U(12.W))
//       signReg := io.sign_a(i + j*blockSize)
//       multiplierReg := io.man_a(i + j*blockSize)
//       multiplierReg2 := io.man_b(i + j*blockSize)

//       for (j<- 0 until 2){
//         if (j == 0.toInt){
//           pp1 := multiplierReg(3,0) * multiplierReg2(3,0) +& (((padding ## multiplierReg(5,4)) * multiplierReg2(3,0)) << 4.U)
//         }
//         else{
//           val pp = RegInit(0.U(12.W))
//           pp := ((multiplierReg(3,0) * (padding ## multiplierReg2(5,4))) << 4.U) +& (((padding##multiplierReg(5,4)) * (padding##multiplierReg2(5,4))) << 8.U)
//           pp2 := pp
//         }
//       }
//       val multiplication = pp1 +& pp2 
//       dotProductRegs(i) := Mux(multiplication > (2<<m-1).U - 1.U, (2<<m-1).U - 1.U, multiplication)
//       // dotProductRegs(i) := multiplierReg(3,0) * multiplierReg2(3,0) + (((padding ## multiplierReg(5,4)) * multiplierReg2(3,0)) << 4.U) + ((multiplierReg(3,0) * (padding ## multiplierReg2(5,4))) << 4.U) + (((padding##multiplierReg(5,4)) * (padding##multiplierReg2(5,4))) << 8.U)                
//       signs(i) := signReg ^ io.sign_b(i + j*blockSize)
//       two_complement(i) := Mux(signs(i)===1.U, (~(0.U ## dotProductRegs(i)) + 1.U), (0.U ## dotProductRegs(i)))
//       two_complement_buffer(i) := two_complement(i).asSInt
//     } 
//   }


//   else{
//   for (i <- 0 until blockSize) {
//     val multiplierReg = RegInit(0.U(m.W))
//     val signReg = RegInit(0.U(1.W))
//     signReg := io.sign_a(i + j*blockSize)
//     multiplierReg := io.man_a(i + j*blockSize)
//     val multiplication = multiplierReg * io.man_b(i + j*blockSize) 
//     dotProductRegs(i) := Mux(multiplication > (2<<m-1).U - 1.U, (2<<m-1).U - 1.U, multiplication)
//     signs(i) := signReg ^ io.sign_b(i + j*blockSize)
//     two_complement(i) := Mux(signs(i)===1.U, (~(0.U ## dotProductRegs(i)) + 1.U), (0.U ## dotProductRegs(i)))
//     two_complement_buffer(i) := two_complement(i).asSInt
//   }
// }
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

// object Improved_HbfpTensorMain extends App {
//   emitVerilog(new Improved_HbfpTensor(16, 6, 8, 64))
// }







// // VERSION 3b: 4 BIT MULTIPLIER AND 1 MULTIPLIER  (MANT MAX)
// import chisel3._
// import chisel3.util._
// import chisel3.util.Reverse

// class Improved_HbfpTensor(blockSize: Int, m: Int, e: Int, tensorSize: Int)
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
//   if (m == 6.toInt){
//     for (i <- 0 until blockSize) {
//       val multiplierReg = RegInit(0.U(6.W))
//       val multiplierReg2 = RegInit(0.U(6.W))
//       val padding = RegInit(0.U(2.W))
//       val signReg = RegInit(0.U(1.W))
//       val pp1 = RegInit(0.U(12.W))
//       val pp2 = RegInit(0.U(12.W))
//       val pp3 = RegInit(0.U(12.W))
//       val pp4 = RegInit(0.U(12.W))
//       signReg := io.sign_a(i + j*blockSize)
//       multiplierReg := io.man_a(i + j*blockSize)
//       multiplierReg2 := io.man_b(i + j*blockSize)

//       for (j<- 0 until 4){
//         if (j == 0.toInt){
//           pp1 := multiplierReg(3,0) * multiplierReg2(3,0)
//         }
//         else if(j == 1.toInt){
//           val ppa = RegInit(0.U(12.W))
//           ppa := (((padding ## multiplierReg(5,4)) * multiplierReg2(3,0)) << 4.U)
//           pp2 := ppa

//         }
//         else if(j == 2.toInt){
//           val ppb0 = RegInit(0.U(12.W))
//           val ppb1 = RegInit(0.U(12.W))
//           ppb0 := ((multiplierReg(3,0) * (padding ## multiplierReg2(5,4))) << 4.U)
//           ppb1 := ppb0
//           pp3 := ppb1
//         }
//         else{
//           val ppc0 = RegInit(0.U(12.W))
//           val ppc1 = RegInit(0.U(12.W))
//           val ppc2 = RegInit(0.U(12.W))
//           ppc0 :=  (((padding##multiplierReg(5,4)) * (padding##multiplierReg2(5,4))) << 8.U)
//           ppc1 := ppc0
//           ppc2 := ppc1
//           pp4 := ppc2
//         }
//       }
//       val multiplication = pp1 +& pp2 +& pp3 +& pp4
//       dotProductRegs(i) := Mux(multiplication > (2<<m-1).U - 1.U, (2<<m-1).U - 1.U, multiplication)
//       // dotProductRegs(i) := multiplierReg(3,0) * multiplierReg2(3,0) + (((padding ## multiplierReg(5,4)) * multiplierReg2(3,0)) << 4.U) + ((multiplierReg(3,0) * (padding ## multiplierReg2(5,4))) << 4.U) + (((padding##multiplierReg(5,4)) * (padding##multiplierReg2(5,4))) << 8.U)                
//       signs(i) := signReg ^ io.sign_b(i + j*blockSize)
//       two_complement(i) := Mux(signs(i)===1.U, (~(0.U ## dotProductRegs(i)) + 1.U), (0.U ## dotProductRegs(i)))
//       two_complement_buffer(i) := two_complement(i).asSInt
//     } 
//   }


//   else{
//   for (i <- 0 until blockSize) {
//     val multiplierReg = RegInit(0.U(m.W))
//     val signReg = RegInit(0.U(1.W))
//     signReg := io.sign_a(i + j*blockSize)
//     multiplierReg := io.man_a(i + j*blockSize)
//     val multiplication = multiplierReg * io.man_b(i + j*blockSize) 
//     dotProductRegs(i) := Mux(multiplication > (2<<m-1).U - 1.U, (2<<m-1).U - 1.U, multiplication)
//     signs(i) := signReg ^ io.sign_b(i + j*blockSize)
//     two_complement(i) := Mux(signs(i)===1.U, (~(0.U ## dotProductRegs(i)) + 1.U), (0.U ## dotProductRegs(i)))
//     two_complement_buffer(i) := two_complement(i).asSInt
//   }
// }
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

// object Improved_HbfpTensorMain extends App {
//   emitVerilog(new Improved_HbfpTensor(16, 6, 8, 64))
// }






// // VERSION 4b: 2 BIT MULTIPLIER AND 4 MULTIPLIERS (MANT MAX)
// import chisel3._
// import chisel3.util._
// import chisel3.util.Reverse

// class Improved_HbfpTensor(blockSize: Int, m: Int, e: Int, tensorSize: Int)
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
//   if (m == 6.toInt){
//     for (i <- 0 until blockSize) {
//       val multiplierReg = RegInit(0.U(6.W))
//       val multiplierReg2 = RegInit(0.U(6.W))
//       // val padding = RegInit(0.U(2.W))
//       val signReg = RegInit(0.U(1.W))
//       val pp1 = RegInit(0.U(12.W))
//       val pp2 = RegInit(0.U(12.W))
//       val pp3 = RegInit(0.U(12.W))
//       // val pp4 = RegInit(0.U(12.W))
//       signReg := io.sign_a(i + j*blockSize)
//       multiplierReg := io.man_a(i + j*blockSize)
//       multiplierReg2 := io.man_b(i + j*blockSize)

//       for (j<- 0 until 3){
//         if (j == 0.toInt){
//           pp1 := multiplierReg(1,0) * multiplierReg2(1,0) + ((multiplierReg(1,0) * multiplierReg2(3,2)) << 2.U) + ((multiplierReg(1,0) * multiplierReg2(5,4)) << 4.U) + ((multiplierReg(3,2) * multiplierReg2(1,0)) << 2.U)
//         }
//         else if(j == 1.toInt){
//           val ppa = RegInit(0.U(12.W))
//           ppa := ((multiplierReg(3,2) * multiplierReg2(3,2)) << 4.U) + ((multiplierReg(3,2) * multiplierReg2(5,4)) << 6.U) + ((multiplierReg(5,4) * multiplierReg2(1,0)) << 4.U) + ((multiplierReg(5,4) * multiplierReg2(3,2)) << 6.U)
//           pp2 := ppa

//         }
//         else{
//           val ppb0 = RegInit(0.U(12.W))
//           val ppb1 = RegInit(0.U(12.W))
//           ppb0 := ((multiplierReg(5,4) * multiplierReg2(5,4)) << 8.U)
//           ppb1 := ppb0
//           pp3 := ppb1
//         }
//       }
//       val multiplication = pp1 +& pp2 +& pp3
//       dotProductRegs(i) := Mux(multiplication > (2<<m-1).U - 1.U, (2<<m-1).U - 1.U, multiplication)
//       // dotProductRegs(i) := multiplierReg(3,0) * multiplierReg2(3,0) + (((padding ## multiplierReg(5,4)) * multiplierReg2(3,0)) << 4.U) + ((multiplierReg(3,0) * (padding ## multiplierReg2(5,4))) << 4.U) + (((padding##multiplierReg(5,4)) * (padding##multiplierReg2(5,4))) << 8.U)                
//       signs(i) := signReg ^ io.sign_b(i + j*blockSize)
//       two_complement(i) := Mux(signs(i)===1.U, (~(0.U ## dotProductRegs(i)) + 1.U), (0.U ## dotProductRegs(i)))
//       two_complement_buffer(i) := two_complement(i).asSInt
//     } 
//   }


//   else if(m == 4.toInt){
//   for (i <- 0 until blockSize) {
//     val multiplierReg = RegInit(0.U(m.W))
//     val multiplierReg2 = RegInit(0.U(m.W))
//     val signReg = RegInit(0.U(1.W))
//     signReg := io.sign_a(i + j*blockSize)
//     multiplierReg := io.man_a(i + j*blockSize)
//     multiplierReg2 := io.man_b(i + j*blockSize)
//     val multiplication = multiplierReg(1,0) * multiplierReg2(1,0) + ((multiplierReg(1,0) * multiplierReg2(3,2)) << 2.U) + ((multiplierReg(3,2) * multiplierReg2(1,0)) << 2.U) + ((multiplierReg(3,2) * multiplierReg2(3,2)) << 4.U)
//     dotProductRegs(i) := Mux(multiplication > (2<<m-1).U - 1.U, (2<<m-1).U - 1.U, multiplication)
//     signs(i) := signReg ^ io.sign_b(i + j*blockSize)
//     two_complement(i) := Mux(signs(i)===1.U, (~(0.U ## dotProductRegs(i)) + 1.U), (0.U ## dotProductRegs(i)))
//     two_complement_buffer(i) := two_complement(i).asSInt
//   }
// }
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

// object Improved_HbfpTensorMain extends App {
//   emitVerilog(new Improved_HbfpTensor(16, 6, 8, 64))
// }







// // VERSION 5b: 2 BIT MULTIPLIER AND 2 MULTIPLIERS (MANT MAX)
// import chisel3._
// import chisel3.util._
// import chisel3.util.Reverse

// class Improved_HbfpTensor(blockSize: Int, m: Int, e: Int, tensorSize: Int)
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
//       signReg := io.sign_a(i + j*blockSize)
//       multiplierReg := io.man_a(i + j*blockSize)
//       multiplierReg2 := io.man_b(i + j*blockSize)

//       for (j<- 0 until 5){
//         if (j == 0.toInt){
//           pp1 := multiplierReg(1,0) * multiplierReg2(1,0) + ((multiplierReg(1,0) * multiplierReg2(3,2)) << 2.U)
//         }
//         else if (j == 1.toInt){
//           val ppa = RegInit(0.U(12.W))
//           ppa := ((multiplierReg(1,0) * multiplierReg2(5,4)) << 4.U) + ((multiplierReg(3,2) * multiplierReg2(1,0)) << 2.U)
//           pp2 := ppa
//         }
//         else if(j == 2.toInt){
//           val ppb0 = RegInit(0.U(12.W))
//           val ppb1 = RegInit(0.U(12.W))
//           ppb0 := ((multiplierReg(3,2) * multiplierReg2(3,2)) << 4.U) + ((multiplierReg(3,2) * multiplierReg2(5,4)) << 6.U)
//           ppb1 := ppb0
//           pp3 := ppb1

//         }
//         else if(j == 3.toInt){
//           val ppc0 = RegInit(0.U(12.W))
//           val ppc1 = RegInit(0.U(12.W))  
//           val ppc2 = RegInit(0.U(12.W))
//           ppc0 :=  ((multiplierReg(5,4) * multiplierReg2(1,0)) << 4.U) + ((multiplierReg(5,4) * multiplierReg2(3,2)) << 6.U)
//           ppc1 := ppc0
//           ppc2 := ppc1
//           pp4 := ppc2
//         }
//         else{
//           val ppd0 = RegInit(0.U(12.W))
//           val ppd1 = RegInit(0.U(12.W))
//           val ppd2 = RegInit(0.U(12.W))
//           val ppd3 = RegInit(0.U(12.W))
//           ppd0 := ((multiplierReg(5,4) * multiplierReg2(5,4)) << 8.U)
//           ppd1 := ppd0
//           ppd2 := ppd1
//           ppd3 := ppd2
//           pp5 := ppd3
//         }
//       }
//       val multiplication = pp1 +& pp2 +& pp3 +& pp4 +& pp5
//       dotProductRegs(i) := Mux(multiplication > (2<<m-1).U - 1.U, (2<<m-1).U - 1.U, multiplication)
//       // dotProductRegs(i) := multiplierReg(3,0) * multiplierReg2(3,0) + (((padding ## multiplierReg(5,4)) * multiplierReg2(3,0)) << 4.U) + ((multiplierReg(3,0) * (padding ## multiplierReg2(5,4))) << 4.U) + (((padding##multiplierReg(5,4)) * (padding##multiplierReg2(5,4))) << 8.U)                
//       signs(i) := signReg ^ io.sign_b(i + j*blockSize)
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
//     signReg := io.sign_a(i + j*blockSize)
//     multiplierReg := io.man_a(i + j*blockSize)
//     multiplierReg2 := io.man_b(i + j*blockSize)
//     for (j<- 0 until 2){
//       if (j == 0.toInt){
//         pp1 := multiplierReg(1,0) * multiplierReg2(1,0) + ((multiplierReg(1,0) * multiplierReg2(3,2)) << 2.U)
//       }
//       else{
//         val pp = RegInit(0.U(12.W))
//         pp := ((multiplierReg(3,2) * multiplierReg2(1,0)) << 2.U) + ((multiplierReg(3,2) * multiplierReg2(3,2)) << 4.U)
//         pp2 := pp
//       }
//     }
//     val multiplication = pp1 +& pp2 
//     dotProductRegs(i) := Mux(multiplication > (2<<m-1).U - 1.U, (2<<m-1).U - 1.U, multiplication)
//     signs(i) := signReg ^ io.sign_b(i + j*blockSize)
//     two_complement(i) := Mux(signs(i)===1.U, (~(0.U ## dotProductRegs(i)) + 1.U), (0.U ## dotProductRegs(i)))
//     two_complement_buffer(i) := two_complement(i).asSInt
//   }
// }
//     val sum = two_complement_buffer.reduce(_ +& _)
//     acc(j) := Mux(sum(m+blockSize-1).asUInt===1.U, Mux((~sum(m+blockSize-2,0).asUInt + 1.U) > (2<<m-1).U - 1.U, (~((2<<m-1).U - 1.U)) + 1.U, sum(m+blockSize-1, 0).asUInt), 
//   Mux(sum(m+blockSize-2, 0).asUInt > (2<<m-1).U - 1.U, (2<<m-1).U - 1.U, sum(m+blockSize-1,0).asUInt))
// }

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

// object Improved_HbfpTensorMain extends App {
//   emitVerilog(new Improved_HbfpTensor(16, 6, 8, 64))
// }







// // VERSION 6b: 2 BIT MULTIPLIER AND 1 MULTIPLIER (MANT MAX)
// import chisel3._
// import chisel3.util._
// import chisel3.util.Reverse

// class Improved_HbfpTensor(blockSize: Int, m: Int, e: Int, tensorSize: Int)
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
//   if (m == 6.toInt){
//     for (i <- 0 until blockSize) {
//       val multiplierReg = RegInit(0.U(6.W))
//       val multiplierReg2 = RegInit(0.U(6.W))
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
//       signReg := io.sign_a(i + j*blockSize)
//       multiplierReg := io.man_a(i + j*blockSize)
//       multiplierReg2 := io.man_b(i + j*blockSize)

//       for (j<- 0 until 9){
//         if (j == 0.toInt){
//           pp1 := multiplierReg(1,0) * multiplierReg2(1,0) 
//         }
//         else if (j == 1.toInt){
//           val ppa = RegInit(0.U(12.W))
//           ppa := ((multiplierReg(1,0) * multiplierReg2(3,2)) << 2.U)                                 
//           pp2 := ppa
//         }
//         else if(j == 2.toInt){
//           val ppb0 = RegInit(0.U(12.W))
//           val ppb1 = RegInit(0.U(12.W))
//           ppb0 := ((multiplierReg(1,0) * multiplierReg2(5,4)) << 4.U)                    
//           ppb1 := ppb0
//           pp3 := ppb1

//         }
//         else if(j == 3.toInt){
//           val ppc0 = RegInit(0.U(12.W))
//           val ppc1 = RegInit(0.U(12.W))  
//           val ppc2 = RegInit(0.U(12.W))
//           ppc0 := ((multiplierReg(3,2) * multiplierReg2(1,0)) << 2.U)                   
//           ppc1 := ppc0
//           ppc2 := ppc1
//           pp4 := ppc2
//         }
//         else if(j == 4.toInt){
//           val ppd0 = RegInit(0.U(12.W))
//           val ppd1 = RegInit(0.U(12.W))
//           val ppd2 = RegInit(0.U(12.W))
//           val ppd3 = RegInit(0.U(12.W))
//           ppd0 := ((multiplierReg(3,2) * multiplierReg2(3,2)) << 4.U)                            
//           ppd1 := ppd0
//           ppd2 := ppd1
//           ppd3 := ppd2
//           pp5 := ppd3
//         }
//         else if(j == 5.toInt){
//           val ppe0 = RegInit(0.U(12.W))
//           val ppe1 = RegInit(0.U(12.W))
//           val ppe2 = RegInit(0.U(12.W))
//           val ppe3 = RegInit(0.U(12.W))
//           val ppe4 = RegInit(0.U(12.W))
//           ppe0 := ((multiplierReg(3,2) * multiplierReg2(5,4)) << 6.U)                           
//           ppe1 := ppe0
//           ppe2 := ppe1
//           ppe3 := ppe2
//           ppe4 := ppe3
//           pp6 := ppe4
//         }
//         else if(j == 6.toInt){
//           val ppf0 = RegInit(0.U(12.W))
//           val ppf1 = RegInit(0.U(12.W))
//           val ppf2 = RegInit(0.U(12.W))
//           val ppf3 = RegInit(0.U(12.W))
//           val ppf4 = RegInit(0.U(12.W))
//           val ppf5 = RegInit(0.U(12.W))
//           ppf0 := ((multiplierReg(5,4) * multiplierReg2(1,0)) << 4.U)                           
//           ppf1 := ppf0
//           ppf2 := ppf1
//           ppf3 := ppf2
//           ppf4 := ppf3
//           ppf5 := ppf4
//           pp7 := ppf5
//         }
//         else if(j == 7.toInt){
//           val ppg0 = RegInit(0.U(12.W))
//           val ppg1 = RegInit(0.U(12.W))
//           val ppg2 = RegInit(0.U(12.W))
//           val ppg3 = RegInit(0.U(12.W))
//           val ppg4 = RegInit(0.U(12.W))
//           val ppg5 = RegInit(0.U(12.W))
//           val ppg6 = RegInit(0.U(12.W))
//           ppg0 := ((multiplierReg(5,4) * multiplierReg2(3,2)) << 6.U)
//           ppg1 := ppg0
//           ppg2 := ppg1
//           ppg3 := ppg2
//           ppg4 := ppg3
//           ppg5 := ppg4
//           ppg6 := ppg5
//           pp8 := ppg6
//         }
//         else {
//           val pph0 = RegInit(0.U(12.W))
//           val pph1 = RegInit(0.U(12.W))
//           val pph2 = RegInit(0.U(12.W))
//           val pph3 = RegInit(0.U(12.W))
//           val pph4 = RegInit(0.U(12.W))
//           val pph5 = RegInit(0.U(12.W))
//           val pph6 = RegInit(0.U(12.W))
//           val pph7 = RegInit(0.U(12.W))
//           pph0 := ((multiplierReg(5,4) * multiplierReg2(5,4)) << 8.U)
//           pph1 := pph0
//           pph2 := pph1
//           pph3 := pph2
//           pph4 := pph3
//           pph5 := pph4
//           pph6 := pph5
//           pph7 := pph6
//           pp9 := pph7
//         }
//       }
//       val multiplication = pp1 +& pp2 +& pp3 +& pp4 +& pp5 +& pp6 +& pp7 +& pp8 +& pp9
//       dotProductRegs(i) := Mux(multiplication > (2<<m-1).U - 1.U, (2<<m-1).U - 1.U, multiplication)
//       // dotProductRegs(i) := multiplierReg(3,0) * multiplierReg2(3,0) + (((padding ## multiplierReg(5,4)) * multiplierReg2(3,0)) << 4.U) + ((multiplierReg(3,0) * (padding ## multiplierReg2(5,4))) << 4.U) + (((padding##multiplierReg(5,4)) * (padding##multiplierReg2(5,4))) << 8.U)                
//       signs(i) := signReg ^ io.sign_b(i + j*blockSize)
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
//     signReg := io.sign_a(i + j*blockSize)
//     multiplierReg := io.man_a(i + j*blockSize)
//     multiplierReg2 := io.man_b(i + j*blockSize)
//     for (j<- 0 until 4){
//       if (j == 0.toInt){
//         pp1 := multiplierReg(1,0) * multiplierReg2(1,0)
//       }
//       else if(j == 1.toInt){
//         val ppa = RegInit(0.U(12.W))
//         ppa := ((multiplierReg(1,0) * multiplierReg2(3,2)) << 2.U)
//         pp2 := ppa
//       }
//       else if (j == 2.toInt){
//         val ppb0 = RegInit(0.U(12.W))
//         val ppb1 = RegInit(0.U(12.W))
//         ppb0 := ((multiplierReg(3,2) * multiplierReg2(1,0)) << 2.U)
//         ppb1 := ppb0
//         pp3 := ppb1
//       }
//       else{
//         val ppc0 = RegInit(0.U(12.W))
//         val ppc1 = RegInit(0.U(12.W))
//         val ppc2 = RegInit(0.U(12.W))
//         ppc0 := ((multiplierReg(3,2) * multiplierReg2(3,2)) << 4.U)
//         ppc1 := ppc0
//         ppc2 := ppc1
//         pp4 := ppc2
//       }
//     }
//     val multiplication = pp1 +& pp2 +& pp3 +& pp4
//     dotProductRegs(i) := Mux(multiplication > (2<<m-1).U - 1.U, (2<<m-1).U - 1.U, multiplication)
//     signs(i) := signReg ^ io.sign_b(i + j*blockSize)
//     two_complement(i) := Mux(signs(i)===1.U, (~(0.U ## dotProductRegs(i)) + 1.U), (0.U ## dotProductRegs(i)))
//     two_complement_buffer(i) := two_complement(i).asSInt
//   }
// }
//     val sum = two_complement_buffer.reduce(_ +& _)
//     acc(j) := Mux(sum(m+blockSize-1).asUInt===1.U, Mux((~sum(m+blockSize-2,0).asUInt + 1.U) > (2<<m-1).U - 1.U, (~((2<<m-1).U - 1.U)) + 1.U, sum(m+blockSize-1, 0).asUInt), 
//   Mux(sum(m+blockSize-2, 0).asUInt > (2<<m-1).U - 1.U, (2<<m-1).U - 1.U, sum(m+blockSize-1,0).asUInt))
// }

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

// object Improved_HbfpTensorMain extends App {
//   emitVerilog(new Improved_HbfpTensor(16, 6, 8, 64))
// }