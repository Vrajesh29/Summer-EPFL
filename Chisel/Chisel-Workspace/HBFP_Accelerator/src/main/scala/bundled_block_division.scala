// import chisel3._
// import chisel3.util._
// import chisel3.util.Reverse


// case class hbfp(blockSize: Int, m:Int, e:Int, tensorSize: Int) extends Bundle{
//     val man = Input(Vec(tensorSize, UInt(m.W)))
//     val sign = Input(Vec(tensorSize, UInt(1.W)))
//     val exp = Input(Vec(tensorSize/blockSize, UInt(e.W)))
// }


// class adderTree2(blockSize: Int, m: Int, e: Int, tensorSize: Int)
//     extends Module {
//   val io = IO(new Bundle {
//     val in = Input(new Bundle{
//     val sign_man = Vec(tensorSize / blockSize, SInt((2 * m + blockSize).W))
//     val exps = Vec(tensorSize / blockSize, UInt((e+1).W))
//     val control_signal = Bool()
//     val control_signal2 = Bool()
//     })
//     val result_tree = Output(UInt((m + e + 1).W))
//   })
  

//   val exp_buffer = Seq.fill(tensorSize / blockSize)(RegInit(0.U((e+1).W)))
//   var man_buffer_two_complement = Seq.fill(tensorSize / blockSize)(
//     RegInit(0.S((2 * m + blockSize - 1 + (tensorSize / blockSize)).W))
//   )
  

  
//   when(io.in.control_signal === 0.B){
    
//     for (i <- 0 until tensorSize / blockSize) {
      
//       exp_buffer(i) := io.in.exps(i)
//       man_buffer_two_complement(i) := io.in.sign_man(i)
//     }
// }

//   val v = RegInit(0.U(10.W))
//   var enable = Reg(Bool())
//   when (io.in.control_signal2 === 1.B){
//     enable := 1.B
//   }
  
  
//   when (io.in.control_signal && enable  === 1.B) {
    
    
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


// //VERSION 1: 4 BIT MULTIPLIER AND 4 MULTIPLIERS
// class Improved_HbfpTensor(blockSize: Int, m: Int, e: Int, tensorSize: Int) extends Module{
//   val io = IO(new Bundle {
//     val in = Input(new Bundle{
//         val a = hbfp(blockSize, m, e, tensorSize)
//         val b = hbfp(blockSize, m, e, tensorSize)
//         val control = Bool()
//         val control2 = Bool()
//   })
//     val result = Output(UInt((m + e + 1).W))
//   })

//   val exp_output = Seq.fill(tensorSize / blockSize)(RegInit(0.U((e+1).W)))
//   val acc = Seq.fill(tensorSize / blockSize)(RegInit(0.S((2 * m + blockSize).W)))

//   for (j <- 0 until tensorSize / blockSize) {
//     exp_output(j) := io.in.a.exp(j) +& io.in.b.exp(j)
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
//       signReg := io.in.a.sign(i + j*blockSize)
//       multiplierReg := io.in.a.man(i + j*blockSize)
//       multiplierReg2 := io.in.b.man(i + j*blockSize)
//       val multiplication = multiplierReg(3,0) * multiplierReg2(3,0) +& (((padding ## multiplierReg(5,4)) * multiplierReg2(3,0)) << 4.U) +& ((multiplierReg(3,0) * (padding ## multiplierReg2(5,4))) << 4.U) +& (((padding##multiplierReg(5,4)) * (padding##multiplierReg2(5,4))) << 8.U)
//       dotProductRegs(i) := multiplication(11,0)
//       signs(i) := signReg ^ io.in.b.sign(i + j*blockSize)
//       two_complement(i) := Mux(signs(i)===1.U, (~(0.U ## dotProductRegs(i)) + 1.U), (0.U ## dotProductRegs(i)))
//       two_complement_buffer(i) := two_complement(i).asSInt
//   } 
//   }


//   else{
//   for (i <- 0 until blockSize) {
//     val multiplierReg = RegInit(0.U(m.W))
//     val signReg = RegInit(0.U(1.W))
//     signReg := io.in.a.sign(i + j*blockSize)
//     multiplierReg := io.in.a.man(i + j*blockSize)
//     dotProductRegs(i) := multiplierReg * io.in.b.man(i + j*blockSize)
//     signs(i) := signReg ^ io.in.b.sign(i + j*blockSize)
//     two_complement(i) := Mux(signs(i)===1.U, (~(0.U ## dotProductRegs(i)) + 1.U), (0.U ## dotProductRegs(i)))
//     two_complement_buffer(i) := two_complement(i).asSInt
//   }
// }
//     acc(j) := two_complement_buffer.reduce(_ +& _)
//   }

//   val adderTreeInst = Module(new adderTree2(blockSize, m, e, tensorSize))
//   adderTreeInst.io.in.sign_man <> VecInit(acc)
//   adderTreeInst.io.in.exps <> VecInit(exp_output)
//   adderTreeInst.io.in.control_signal <> io.in.control
//   adderTreeInst.io.in.control_signal2 <> io.in.control2
//   io.result := adderTreeInst.io.result_tree
// }







// // VERSION 2: 4 BIT MULTIPLIER AND 2 MULTIPLIERS
// class Improved_HbfpTensor(blockSize: Int, m: Int, e: Int, tensorSize: Int) extends Module{
//   val io = IO(new Bundle {
//     val in = Input(new Bundle{
//         val a = hbfp(blockSize, m, e, tensorSize)
//         val b = hbfp(blockSize, m, e, tensorSize)
//         val control = Bool()
//         val control2 = Bool()
//   })
//     val result = Output(UInt((m + e + 1).W))
//   })

//   val exp_output = Seq.fill(tensorSize / blockSize)(RegInit(0.U((e+1).W)))
//   val acc = Seq.fill(tensorSize / blockSize)(RegInit(0.S((2 * m + blockSize).W)))

//   for (j <- 0 until tensorSize / blockSize) {
//     exp_output(j) := io.in.a.exp(j) +& io.in.b.exp(j)
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
//       signReg := io.in.a.sign(i + j*blockSize)
//       multiplierReg := io.in.a.man(i + j*blockSize)
//       multiplierReg2 := io.in.b.man(i + j*blockSize)


//       pp1 := multiplierReg(3,0) * multiplierReg2(3,0) +& (((padding ## multiplierReg(5,4)) * multiplierReg2(3,0)) << 4.U)
//       dotProductRegs(i) := pp1 +& RegNext(((multiplierReg(3,0) * (padding ## multiplierReg2(5,4))) << 4.U) +& (((padding##multiplierReg(5,4)) * (padding##multiplierReg2(5,4))) << 8.U))
//       // dotProductRegs(i) := multiplierReg(3,0) * multiplierReg2(3,0) + (((padding ## multiplierReg(5,4)) * multiplierReg2(3,0)) << 4.U) + ((multiplierReg(3,0) * (padding ## multiplierReg2(5,4))) << 4.U) + (((padding##multiplierReg(5,4)) * (padding##multiplierReg2(5,4))) << 8.U)                
//       signs(i) := signReg ^ io.in.b.sign(i + j*blockSize)
//       two_complement(i) := Mux(signs(i)===1.U, (~(0.U ## dotProductRegs(i)) + 1.U), (0.U ## dotProductRegs(i)))
//       two_complement_buffer(i) := two_complement(i).asSInt
//     } 
//   }


//   else{
//   for (i <- 0 until blockSize) {
//     val multiplierReg = RegInit(0.U(m.W))
//     val signReg = RegInit(0.U(1.W))
//     signReg := io.in.a.sign(i + j*blockSize)
//     multiplierReg := io.in.a.man(i + j*blockSize)
//     dotProductRegs(i) := multiplierReg * io.in.b.man(i + j*blockSize)
//     signs(i) := signReg ^ io.in.b.sign(i + j*blockSize)
//     two_complement(i) := Mux(signs(i)===1.U, (~(0.U ## dotProductRegs(i)) + 1.U), (0.U ## dotProductRegs(i)))
//     two_complement_buffer(i) := two_complement(i).asSInt
//   }
// }
//     acc(j) := two_complement_buffer.reduce(_ +& _)
//   }

//   val adderTreeInst = Module(new adderTree2(blockSize, m, e, tensorSize))
//   adderTreeInst.io.in.sign_man <> VecInit(acc)
//   adderTreeInst.io.in.exps <> VecInit(exp_output)
//   adderTreeInst.io.in.control_signal <> io.in.control
//   adderTreeInst.io.in.control_signal2 <> io.in.control2
//   io.result := adderTreeInst.io.result_tree
// }








// // VERSION 3: 4 BIT MULTIPLIER AND 1 MULTIPLIER
// class Improved_HbfpTensor(blockSize: Int, m: Int, e: Int, tensorSize: Int) extends Module{
//   val io = IO(new Bundle {
//     val in = Input(new Bundle{
//         val a = hbfp(blockSize, m, e, tensorSize)
//         val b = hbfp(blockSize, m, e, tensorSize)
//         val control = Bool()
//         val control2 = Bool()
//   })
//     val result = Output(UInt((m + e + 1).W))
//   })

//   val exp_output = Seq.fill(tensorSize / blockSize)(RegInit(0.U((e+1).W)))
//   val acc = Seq.fill(tensorSize / blockSize)(RegInit(0.S((2 * m + blockSize).W)))

//   for (j <- 0 until tensorSize / blockSize) {
//     exp_output(j) := io.in.a.exp(j) +& io.in.b.exp(j)
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
//       signReg := io.in.a.sign(i + j*blockSize)
//       multiplierReg := io.in.a.man(i + j*blockSize)
//       multiplierReg2 := io.in.b.man(i + j*blockSize)

//       pp1 := multiplierReg(3,0) * multiplierReg2(3,0)
//       pp2 := RegNext(((padding ## multiplierReg(5,4)) * multiplierReg2(3,0)) << 4.U)
//       pp3 := RegNext(RegNext((multiplierReg(3,0) * (padding ## multiplierReg2(5,4))) << 4.U))
//       dotProductRegs(i) := pp1 +& pp2 +& pp3 +& RegNext(RegNext(RegNext((((padding##multiplierReg(5,4)) * (padding##multiplierReg2(5,4))) << 8.U))))
//       // dotProductRegs(i) := multiplierReg(3,0) * multiplierReg2(3,0) + (((padding ## multiplierReg(5,4)) * multiplierReg2(3,0)) << 4.U) + ((multiplierReg(3,0) * (padding ## multiplierReg2(5,4))) << 4.U) + (((padding##multiplierReg(5,4)) * (padding##multiplierReg2(5,4))) << 8.U)                
//       signs(i) := signReg ^ io.in.b.sign(i + j*blockSize)
//       two_complement(i) := Mux(signs(i)===1.U, (~(0.U ## dotProductRegs(i)) + 1.U), (0.U ## dotProductRegs(i)))
//       two_complement_buffer(i) := two_complement(i).asSInt
//     } 
//   }


//   else{
//   for (i <- 0 until blockSize) {
//     val multiplierReg = RegInit(0.U(m.W))
//     val signReg = RegInit(0.U(1.W))
//     signReg := io.in.a.sign(i + j*blockSize)
//     multiplierReg := io.in.a.man(i + j*blockSize)
//     dotProductRegs(i) := multiplierReg * io.in.b.man(i + j*blockSize)
//     signs(i) := signReg ^ io.in.b.sign(i + j*blockSize)
//     two_complement(i) := Mux(signs(i)===1.U, (~(0.U ## dotProductRegs(i)) + 1.U), (0.U ## dotProductRegs(i)))
//     two_complement_buffer(i) := two_complement(i).asSInt
//   }
// }
//     acc(j) := two_complement_buffer.reduce(_ +& _)
//   }

//   val adderTreeInst = Module(new adderTree2(blockSize, m, e, tensorSize))
//   adderTreeInst.io.in.sign_man <> VecInit(acc)
//   adderTreeInst.io.in.exps <> VecInit(exp_output)
//   adderTreeInst.io.in.control_signal <> io.in.control
//   adderTreeInst.io.in.control_signal2 <> io.in.control2
//   io.result := adderTreeInst.io.result_tree
// }








// // VERSION 4: 2 BIT MULTIPLIER AND 4 MULTIPLIERS
// class Improved_HbfpTensor(blockSize: Int, m: Int, e: Int, tensorSize: Int) extends Module{
//   val io = IO(new Bundle {
//     val in = Input(new Bundle{
//         val a = hbfp(blockSize, m, e, tensorSize)
//         val b = hbfp(blockSize, m, e, tensorSize)
//         val control = Bool()
//         val control2 = Bool()
//   })
//     val result = Output(UInt((m + e + 1).W))
//   })

//   val exp_output = Seq.fill(tensorSize / blockSize)(RegInit(0.U((e+1).W)))
//   val acc = Seq.fill(tensorSize / blockSize)(RegInit(0.S((2 * m + blockSize).W)))

//   for (j <- 0 until tensorSize / blockSize) {
//     exp_output(j) := io.in.a.exp(j) +& io.in.b.exp(j)
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
//       signReg := io.in.a.sign(i + j*blockSize)
//       multiplierReg := io.in.a.man(i + j*blockSize)
//       multiplierReg2 := io.in.b.man(i + j*blockSize)


//       pp1 := multiplierReg(1,0) * multiplierReg2(1,0) + ((multiplierReg(1,0) * multiplierReg2(3,2)) << 2.U) + ((multiplierReg(1,0) * multiplierReg2(5,4)) << 4.U) + ((multiplierReg(3,2) * multiplierReg2(1,0)) << 2.U)

//       pp2 := RegNext(((multiplierReg(3,2) * multiplierReg2(3,2)) << 4.U) + ((multiplierReg(3,2) * multiplierReg2(5,4)) << 6.U) + ((multiplierReg(5,4) * multiplierReg2(1,0)) << 4.U) + ((multiplierReg(5,4) * multiplierReg2(3,2)) << 6.U))

//       dotProductRegs(i) := pp1 +& pp2 +& RegNext(RegNext(((multiplierReg(5,4) * multiplierReg2(5,4)) << 8.U)))
//       // dotProductRegs(i) := multiplierReg(3,0) * multiplierReg2(3,0) + (((padding ## multiplierReg(5,4)) * multiplierReg2(3,0)) << 4.U) + ((multiplierReg(3,0) * (padding ## multiplierReg2(5,4))) << 4.U) + (((padding##multiplierReg(5,4)) * (padding##multiplierReg2(5,4))) << 8.U)                
//       signs(i) := signReg ^ io.in.b.sign(i + j*blockSize)
//       two_complement(i) := Mux(signs(i)===1.U, (~(0.U ## dotProductRegs(i)) + 1.U), (0.U ## dotProductRegs(i)))
//       two_complement_buffer(i) := two_complement(i).asSInt
//     } 
//   }


//   else if(m == 4.toInt){
//   for (i <- 0 until blockSize) {
//     val multiplierReg = RegInit(0.U(m.W))
//     val multiplierReg2 = RegInit(0.U(m.W))
//     val signReg = RegInit(0.U(1.W))
//     signReg := io.in.a.sign(i + j*blockSize)
//     multiplierReg := io.in.a.man(i + j*blockSize)
//     multiplierReg2 := io.in.b.man(i + j*blockSize)
//     dotProductRegs(i) := multiplierReg(1,0) * multiplierReg2(1,0) + ((multiplierReg(1,0) * multiplierReg2(3,2)) << 2.U) + ((multiplierReg(3,2) * multiplierReg2(1,0)) << 2.U) + ((multiplierReg(3,2) * multiplierReg2(3,2)) << 4.U)
//     signs(i) := signReg ^ io.in.b.sign(i + j*blockSize)
//     two_complement(i) := Mux(signs(i)===1.U, (~(0.U ## dotProductRegs(i)) + 1.U), (0.U ## dotProductRegs(i)))
//     two_complement_buffer(i) := two_complement(i).asSInt
//   }
// }
//     acc(j) := two_complement_buffer.reduce(_ +& _)
//   }

//   val adderTreeInst = Module(new adderTree2(blockSize, m, e, tensorSize))
//   adderTreeInst.io.in.sign_man <> VecInit(acc)
//   adderTreeInst.io.in.exps <> VecInit(exp_output)
//   adderTreeInst.io.in.control_signal <> io.in.control
//   adderTreeInst.io.in.control_signal2 <> io.in.control2
//   io.result := adderTreeInst.io.result_tree
// }







// // VERSION 5: 2 BIT MULTIPLIER AND 2 MULTIPLIERS
// class Improved_HbfpTensor(blockSize: Int, m: Int, e: Int, tensorSize: Int) extends Module{
//   val io = IO(new Bundle {
//     val in = Input(new Bundle{
//         val a = hbfp(blockSize, m, e, tensorSize)
//         val b = hbfp(blockSize, m, e, tensorSize)
//         val control = Bool()
//         val control2 = Bool()
//   })
//     val result = Output(UInt((m + e + 1).W))
//   })

//   val exp_output = Seq.fill(tensorSize / blockSize)(RegInit(0.U((e+1).W)))
//   val acc = Seq.fill(tensorSize / blockSize)(RegInit(0.S((2 * m + blockSize).W)))

//   for (j <- 0 until tensorSize / blockSize) {
//     exp_output(j) := io.in.a.exp(j) +& io.in.b.exp(j)
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
//       signReg := io.in.a.sign(i + j*blockSize)
//       multiplierReg := io.in.a.man(i + j*blockSize)
//       multiplierReg2 := io.in.b.man(i + j*blockSize)

//       pp1 := multiplierReg(1,0) * multiplierReg2(1,0) + ((multiplierReg(1,0) * multiplierReg2(3,2)) << 2.U)

//       pp2 := RegNext(((multiplierReg(1,0) * multiplierReg2(5,4)) << 4.U) + ((multiplierReg(3,2) * multiplierReg2(1,0)) << 2.U))

//       pp3 := RegNext(RegNext(((multiplierReg(3,2) * multiplierReg2(3,2)) << 4.U) + ((multiplierReg(3,2) * multiplierReg2(5,4)) << 6.U)))

//       pp4 :=  RegNext(RegNext(RegNext(((multiplierReg(5,4) * multiplierReg2(1,0)) << 4.U) + ((multiplierReg(5,4) * multiplierReg2(3,2)) << 6.U))))

//       dotProductRegs(i) := pp1 +& pp2 +& pp3 +& pp4 +& RegNext(RegNext(RegNext(RegNext(((multiplierReg(5,4) * multiplierReg2(5,4)) << 8.U)))))
//       // dotProductRegs(i) := multiplierReg(3,0) * multiplierReg2(3,0) + (((padding ## multiplierReg(5,4)) * multiplierReg2(3,0)) << 4.U) + ((multiplierReg(3,0) * (padding ## multiplierReg2(5,4))) << 4.U) + (((padding##multiplierReg(5,4)) * (padding##multiplierReg2(5,4))) << 8.U)                
//       signs(i) := signReg ^ io.in.b.sign(i + j*blockSize)
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
//     signReg := io.in.a.sign(i + j*blockSize)
//     multiplierReg := io.in.a.man(i + j*blockSize)
//     multiplierReg2 := io.in.b.man(i + j*blockSize)
//     pp1 := multiplierReg(1,0) * multiplierReg2(1,0) + ((multiplierReg(1,0) * multiplierReg2(3,2)) << 2.U)

//     dotProductRegs(i) := pp1 +& RegNext(((multiplierReg(3,2) * multiplierReg2(1,0)) << 2.U) + ((multiplierReg(3,2) * multiplierReg2(3,2)) << 4.U))
//     signs(i) := signReg ^ io.in.b.sign(i + j*blockSize)
//     two_complement(i) := Mux(signs(i)===1.U, (~(0.U ## dotProductRegs(i)) + 1.U), (0.U ## dotProductRegs(i)))
//     two_complement_buffer(i) := two_complement(i).asSInt
//   }
// }
//     acc(j) := two_complement_buffer.reduce(_ +& _)
// }

//   val adderTreeInst = Module(new adderTree2(blockSize, m, e, tensorSize))
//   adderTreeInst.io.in.sign_man <> VecInit(acc)
//   adderTreeInst.io.in.exps <> VecInit(exp_output)
//   adderTreeInst.io.in.control_signal <> io.in.control
//   adderTreeInst.io.in.control_signal2 <> io.in.control2
//   io.result := adderTreeInst.io.result_tree
// }






// // VERSION 6: 2 BIT MULTIPLIER AND 1 MULTIPLIER
// class Improved_HbfpTensor(blockSize: Int, m: Int, e: Int, tensorSize: Int) extends Module{
//   val io = IO(new Bundle {
//     val in = Input(new Bundle{
//         val a = hbfp(blockSize, m, e, tensorSize)
//         val b = hbfp(blockSize, m, e, tensorSize)
//         val control = Bool()
//         val control2 = Bool()
//   })
//     val result = Output(UInt((m + e + 1).W))
//   })

//   val exp_output = Seq.fill(tensorSize / blockSize)(RegInit(0.U((e+1).W)))
//   val acc = Seq.fill(tensorSize / blockSize)(RegInit(0.S((2 * m + blockSize).W)))

//   for (j <- 0 until tensorSize / blockSize) {
//     exp_output(j) := io.in.a.exp(j) +& io.in.b.exp(j)
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
//       signReg := io.in.a.sign(i + j*blockSize)
//       multiplierReg := io.in.a.man(i + j*blockSize)
//       multiplierReg2 := io.in.b.man(i + j*blockSize)


//       pp1 := multiplierReg(1,0) * multiplierReg2(1,0) 

//       pp2 := RegNext((multiplierReg(1,0) * multiplierReg2(3,2)) << 2.U)

//       pp3 := RegNext(RegNext((multiplierReg(1,0) * multiplierReg2(5,4)) << 4.U))

//       pp4 := RegNext(RegNext(RegNext((multiplierReg(3,2) * multiplierReg2(1,0)) << 2.U)))              

//       pp5 := RegNext(RegNext(RegNext(RegNext((multiplierReg(3,2) * multiplierReg2(3,2)) << 4.U))))                            

//       pp6 := RegNext(RegNext(RegNext(RegNext(RegNext((multiplierReg(3,2) * multiplierReg2(5,4)) << 6.U)))))                           

//       pp7 := RegNext(RegNext(RegNext(RegNext(RegNext(RegNext((multiplierReg(5,4) * multiplierReg2(1,0)) << 4.U))))))                           

//       pp8 := RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext((multiplierReg(5,4) * multiplierReg2(3,2)) << 6.U)))))))

//       dotProductRegs(i) := pp1 +& pp2 +& pp3 +& pp4 +& pp5 +& pp6 +& pp7 +& pp8 +& RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(((multiplierReg(5,4) * multiplierReg2(5,4)) << 8.U)))))))))
//       // dotProductRegs(i) := multiplierReg(3,0) * multiplierReg2(3,0) + (((padding ## multiplierReg(5,4)) * multiplierReg2(3,0)) << 4.U) + ((multiplierReg(3,0) * (padding ## multiplierReg2(5,4))) << 4.U) + (((padding##multiplierReg(5,4)) * (padding##multiplierReg2(5,4))) << 8.U)                
//       signs(i) := signReg ^ io.in.b.sign(i + j*blockSize)
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
//     signReg := io.in.a.sign(i + j*blockSize)
//     multiplierReg := io.in.a.man(i + j*blockSize)
//     multiplierReg2 := io.in.b.man(i + j*blockSize)

//     pp1 := multiplierReg(1,0) * multiplierReg2(1,0)

//     pp2 := RegNext((multiplierReg(1,0) * multiplierReg2(3,2)) << 2.U)

//     pp3 := RegNext(RegNext((multiplierReg(3,2) * multiplierReg2(1,0)) << 2.U))

//     dotProductRegs(i) := pp1 +& pp2 +& pp3 +& RegNext(RegNext(RegNext(((multiplierReg(3,2) * multiplierReg2(3,2)) << 4.U))))
//     signs(i) := signReg ^ io.in.b.sign(i + j*blockSize)
//     two_complement(i) := Mux(signs(i)===1.U, (~(0.U ## dotProductRegs(i)) + 1.U), (0.U ## dotProductRegs(i)))
//     two_complement_buffer(i) := two_complement(i).asSInt
//   }
// }
//     acc(j) := two_complement_buffer.reduce(_ +& _)
// }

//   val adderTreeInst = Module(new adderTree2(blockSize, m, e, tensorSize))
//   adderTreeInst.io.in.sign_man <> VecInit(acc)
//   adderTreeInst.io.in.exps <> VecInit(exp_output)
//   adderTreeInst.io.in.control_signal <> io.in.control
//   adderTreeInst.io.in.control_signal2 <> io.in.control2
//   io.result := adderTreeInst.io.result_tree
// }






// // VERSION 7: 1 BIT MULTIPLIER AND 4 MULTIPLIERS
// class Improved_HbfpTensor(blockSize: Int, m: Int, e: Int, tensorSize: Int) extends Module{
//   val io = IO(new Bundle {
//     val in = Input(new Bundle{
//         val a = hbfp(blockSize, m, e, tensorSize)
//         val b = hbfp(blockSize, m, e, tensorSize)
//         val control = Bool()
//         val control2 = Bool()
//   })
//     val result = Output(UInt((m + e + 1).W))
//   })

//   val exp_output = Seq.fill(tensorSize / blockSize)(RegInit(0.U((e+1).W)))
//   val acc = Seq.fill(tensorSize / blockSize)(RegInit(0.S((2 * m + blockSize).W)))

//   for (j <- 0 until tensorSize / blockSize) {
//     exp_output(j) := io.in.a.exp(j) +& io.in.b.exp(j)
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
//       signReg := io.in.a.sign(i + j*blockSize)
//       multiplierReg := io.in.a.man(i + j*blockSize)
//       multiplierReg2 := io.in.b.man(i + j*blockSize)


//       pp1 := multiplierReg(0) * multiplierReg2(0) +& ((multiplierReg(0) * multiplierReg2(1)) << 1.U) +& ((multiplierReg(0) * multiplierReg2(2)) << 2.U) +& ((multiplierReg(0) * multiplierReg2(3)) << 3.U) 
//       pp2 := RegNext(((multiplierReg(0) * multiplierReg2(4)) << 4.U) +& ((multiplierReg(0) * multiplierReg2(5)) << 5.U)  +& ((multiplierReg(1) * multiplierReg2(0)) << 1.U) +& ((multiplierReg(1) * multiplierReg2(1)) << 2.U))


//       pp3 := RegNext(RegNext(((multiplierReg(1) * multiplierReg2(2)) << 3.U) +& ((multiplierReg(1) * multiplierReg2(3)) << 4.U) +& ((multiplierReg(1) * multiplierReg2(4)) << 5.U) +& ((multiplierReg(1) * multiplierReg2(5)) << 6.U)))

//       pp4 := RegNext(RegNext(RegNext(((multiplierReg(2) * multiplierReg2(0)) << 2.U) +& ((multiplierReg(2) * multiplierReg2(1)) << 3.U) +& ((multiplierReg(2) * multiplierReg2(2)) << 4.U) +& ((multiplierReg(2) * multiplierReg2(3)) << 5.U))))

//       pp5 := RegNext(RegNext(RegNext(RegNext(((multiplierReg(2) * multiplierReg2(4)) << 6.U) +& ((multiplierReg(2) * multiplierReg2(5)) << 7.U) +& ((multiplierReg(3) * multiplierReg2(0)) << 3.U) +& ((multiplierReg(3) * multiplierReg2(1)) << 4.U)))))                     

//       pp6 := RegNext(RegNext(RegNext(RegNext(RegNext(((multiplierReg(3) * multiplierReg2(2)) << 5.U) +& ((multiplierReg(3) * multiplierReg2(3)) << 6.U) +& ((multiplierReg(3) * multiplierReg2(4)) << 7.U) +& ((multiplierReg(3) * multiplierReg2(5)) << 8.U))))))                         

//       pp7 := RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(((multiplierReg(4) * multiplierReg2(0)) << 4.U) +& ((multiplierReg(4) * multiplierReg2(1)) << 5.U) +& ((multiplierReg(4) * multiplierReg2(2)) << 6.U) +& ((multiplierReg(4) * multiplierReg2(3)) << 7.U)))))))                           

//       pp8 := RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(((multiplierReg(4) * multiplierReg2(4)) << 8.U) +& ((multiplierReg(4) * multiplierReg2(5)) << 9.U) +& ((multiplierReg(5) * multiplierReg2(0)) << 5.U) +& ((multiplierReg(5) * multiplierReg2(1)) << 6.U))))))))

//       dotProductRegs(i) := pp1 +& pp2 +& pp3 +& pp4 +& pp5 +& pp6 +& pp7 +& pp8 +& RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(((multiplierReg(5) * multiplierReg2(2)) << 7.U) +& ((multiplierReg(5) * multiplierReg2(3)) << 8.U) +& ((multiplierReg(5) * multiplierReg2(4)) << 9.U) +& ((multiplierReg(5) * multiplierReg2(5)) << 10.U)))))))))
//       // dotProductRegs(i) := multiplierReg(3,0) * multiplierReg2(3,0) + (((padding ## multiplierReg(5,4)) * multiplierReg2(3,0)) << 4.U) + ((multiplierReg(3,0) * (padding ## multiplierReg2(5,4))) << 4.U) + (((padding##multiplierReg(5,4)) * (padding##multiplierReg2(5,4))) << 8.U)                
//       signs(i) := signReg ^ io.in.b.sign(i + j*blockSize)
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
//     signReg := io.in.a.sign(i + j*blockSize)
//     multiplierReg := io.in.a.man(i + j*blockSize)
//     multiplierReg2 := io.in.b.man(i + j*blockSize)

//     pp1 := multiplierReg(0) * multiplierReg2(0) +& ((multiplierReg(0) * multiplierReg2(1)) << 1.U) +& ((multiplierReg(0) * multiplierReg2(2)) << 2.U) +& ((multiplierReg(0) * multiplierReg2(3)) << 3.U) 

//     pp2 := RegNext(((multiplierReg(1) * multiplierReg2(0)) << 1.U) +& ((multiplierReg(1) * multiplierReg2(1)) << 2.U) +& ((multiplierReg(1) * multiplierReg2(2)) << 3.U) +& ((multiplierReg(1) * multiplierReg2(3)) << 4.U))

//     pp3 := RegNext(RegNext(((multiplierReg(2) * multiplierReg2(0)) << 2.U) +& ((multiplierReg(2) * multiplierReg2(1)) << 3.U) +& ((multiplierReg(2) * multiplierReg2(2)) << 4.U) +& ((multiplierReg(2) * multiplierReg2(3)) << 5.U)))

//     dotProductRegs(i) := pp1 +& pp2 +& pp3 +& RegNext(RegNext(RegNext(((multiplierReg(3) * multiplierReg2(0)) << 3.U) +& ((multiplierReg(3) * multiplierReg2(1)) << 4.U) +& ((multiplierReg(3) * multiplierReg2(2)) << 5.U) +& ((multiplierReg(3) * multiplierReg2(3)) << 6.U))))
//     signs(i) := signReg ^ io.in.b.sign(i + j*blockSize)
//     two_complement(i) := Mux(signs(i)===1.U, (~(0.U ## dotProductRegs(i)) + 1.U), (0.U ## dotProductRegs(i)))
//     two_complement_buffer(i) := two_complement(i).asSInt
//   }
// }
//     acc(j) := two_complement_buffer.reduce(_ +& _)
// }

//   val adderTreeInst = Module(new adderTree2(blockSize, m, e, tensorSize))
//   adderTreeInst.io.in.sign_man <> VecInit(acc)
//   adderTreeInst.io.in.exps <> VecInit(exp_output)
//   adderTreeInst.io.in.control_signal <> io.in.control
//   adderTreeInst.io.in.control_signal2 <> io.in.control2
//   io.result := adderTreeInst.io.result_tree
// }






// // VERSION 8: 1 BIT MULTIPLIER AND 2 MULTIPLIERS
// class Improved_HbfpTensor(blockSize: Int, m: Int, e: Int, tensorSize: Int) extends Module{
//   val io = IO(new Bundle {
//     val in = Input(new Bundle{
//         val a = hbfp(blockSize, m, e, tensorSize)
//         val b = hbfp(blockSize, m, e, tensorSize)
//         val control = Bool()
//         val control2 = Bool()
//   })
//     val result = Output(UInt((m + e + 1).W))
//   })

//   val exp_output = Seq.fill(tensorSize / blockSize)(RegInit(0.U((e+1).W)))
//   val acc = Seq.fill(tensorSize / blockSize)(RegInit(0.S((2 * m + blockSize).W)))

//   for (j <- 0 until tensorSize / blockSize) {
//     exp_output(j) := io.in.a.exp(j) +& io.in.b.exp(j)
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
//       val pp1b = RegInit(0.U(12.W))

//       val pp2 = RegInit(0.U(12.W))
//       val pp2b = RegInit(0.U(12.W))

//       val pp3 = RegInit(0.U(12.W))
//       val pp3b = RegInit(0.U(12.W))

//       val pp4 = RegInit(0.U(12.W))
//       val pp4b = RegInit(0.U(12.W))

//       val pp5 = RegInit(0.U(12.W))
//       val pp5b = RegInit(0.U(12.W))

//       val pp6 = RegInit(0.U(12.W))
//       val pp6b = RegInit(0.U(12.W))

//       val pp7 = RegInit(0.U(12.W))
//       val pp7b = RegInit(0.U(12.W))

//       val pp8 = RegInit(0.U(12.W))
//       val pp8b = RegInit(0.U(12.W))

//       val pp9 = RegInit(0.U(12.W))

//       signReg := io.in.a.sign(i + j*blockSize)
//       multiplierReg := io.in.a.man(i + j*blockSize)
//       multiplierReg2 := io.in.b.man(i + j*blockSize)


//       pp1 := multiplierReg(0) * multiplierReg2(0) +& ((multiplierReg(0) * multiplierReg2(1)) << 1.U)
//       pp1b := RegNext(((multiplierReg(0) * multiplierReg2(2)) << 2.U) +& ((multiplierReg(0) * multiplierReg2(3)) << 3.U))

//       pp2 := RegNext(RegNext(((multiplierReg(0) * multiplierReg2(4)) << 4.U) +& ((multiplierReg(0) * multiplierReg2(5)) << 5.U)))
//       pp2b := RegNext(RegNext(RegNext(((multiplierReg(1) * multiplierReg2(0)) << 1.U) +& ((multiplierReg(1) * multiplierReg2(1)) << 2.U))))

//       pp3 := RegNext(RegNext(RegNext(RegNext(((multiplierReg(1) * multiplierReg2(2)) << 3.U) +& ((multiplierReg(1) * multiplierReg2(3)) << 4.U)))))
//       pp3b := RegNext(RegNext(RegNext(RegNext(RegNext(((multiplierReg(1) * multiplierReg2(4)) << 5.U) +& ((multiplierReg(1) * multiplierReg2(5)) << 6.U))))))

//       pp4 := RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(((multiplierReg(2) * multiplierReg2(0)) << 2.U) +& ((multiplierReg(2) * multiplierReg2(1)) << 3.U)))))))
//       pp4b := RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(((multiplierReg(2) * multiplierReg2(2)) << 4.U) +& ((multiplierReg(2) * multiplierReg2(3)) << 5.U))))))))

//       pp5 := RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(((multiplierReg(2) * multiplierReg2(4)) << 6.U) +& ((multiplierReg(2) * multiplierReg2(5)) << 7.U)))))))))  
//       pp5b := RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(((multiplierReg(3) * multiplierReg2(0)) << 3.U) +& ((multiplierReg(3) * multiplierReg2(1)) << 4.U))))))))))                 

//       pp6 := RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(((multiplierReg(3) * multiplierReg2(2)) << 5.U) +& ((multiplierReg(3) * multiplierReg2(3)) << 6.U)))))))))))
//       pp6b := RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(((multiplierReg(3) * multiplierReg2(4)) << 7.U) +& ((multiplierReg(3) * multiplierReg2(5)) << 8.U))))))))))))           

//       pp7 := RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(((multiplierReg(4) * multiplierReg2(0)) << 4.U) +& ((multiplierReg(4) * multiplierReg2(1)) << 5.U)))))))))))))
//       pp7b := RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(((multiplierReg(4) * multiplierReg2(2)) << 6.U) +& ((multiplierReg(4) * multiplierReg2(3)) << 7.U))))))))))))))                         

//       pp8 := RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(((multiplierReg(4) * multiplierReg2(4)) << 8.U) +& ((multiplierReg(4) * multiplierReg2(5)) << 9.U)))))))))))))))
//       pp8b := RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(((multiplierReg(5) * multiplierReg2(0)) << 5.U) +& ((multiplierReg(5) * multiplierReg2(1)) << 6.U))))))))))))))))

//       pp9 := RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(((multiplierReg(5) * multiplierReg2(2)) << 7.U) +& ((multiplierReg(5) * multiplierReg2(3)) << 8.U)))))))))))))))))

//       dotProductRegs(i) := pp1 +& pp1b +& pp2 +& pp2b +& pp3 +& pp3b +& pp4 +& pp4b +& pp5 +& pp5b +& pp6 +& pp6b +& pp7 +& pp7b +& pp8 +& pp8b +& pp9 +& RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(((multiplierReg(5) * multiplierReg2(4)) << 9.U) +& ((multiplierReg(5) * multiplierReg2(5)) << 10.U))))))))))))))))))
//       // dotProductRegs(i) := multiplierReg(3,0) * multiplierReg2(3,0) + (((padding ## multiplierReg(5,4)) * multiplierReg2(3,0)) << 4.U) + ((multiplierReg(3,0) * (padding ## multiplierReg2(5,4))) << 4.U) + (((padding##multiplierReg(5,4)) * (padding##multiplierReg2(5,4))) << 8.U)                
//       signs(i) := signReg ^ io.in.b.sign(i + j*blockSize)
//       two_complement(i) := Mux(signs(i)===1.U, (~(0.U ## dotProductRegs(i)) + 1.U), (0.U ## dotProductRegs(i)))
//       two_complement_buffer(i) := two_complement(i).asSInt
//     } 
//   }


//   else if(m == 4.toInt){
//   for (i <- 0 until blockSize) {
//     val multiplierReg = RegInit(0.U(m.W))
//     val multiplierReg2 = RegInit(0.U(m.W))
//     val pp1 = RegInit(0.U(12.W))
//     val pp1b = RegInit(0.U(12.W))

//     val pp2 = RegInit(0.U(12.W))
//     val pp2b = RegInit(0.U(12.W))

//     val pp3 = RegInit(0.U(12.W))
//     val pp3b = RegInit(0.U(12.W))

//     val pp4 = RegInit(0.U(12.W))

//     val signReg = RegInit(0.U(1.W))
//     signReg := io.in.a.sign(i + j*blockSize)
//     multiplierReg := io.in.a.man(i + j*blockSize)
//     multiplierReg2 := io.in.b.man(i + j*blockSize)

//     pp1 := multiplierReg(0) * multiplierReg2(0) +& ((multiplierReg(0) * multiplierReg2(1)) << 1.U)
//     pp1b := RegNext(((multiplierReg(0) * multiplierReg2(2)) << 2.U) +& ((multiplierReg(0) * multiplierReg2(3)) << 3.U))

//     pp2 := RegNext(RegNext(((multiplierReg(1) * multiplierReg2(0)) << 1.U) +& ((multiplierReg(1) * multiplierReg2(1)) << 2.U)))
//     pp2b := RegNext(RegNext(RegNext(((multiplierReg(1) * multiplierReg2(2)) << 3.U) +& ((multiplierReg(1) * multiplierReg2(3)) << 4.U))))

//     pp3 := RegNext(RegNext(RegNext(RegNext(((multiplierReg(2) * multiplierReg2(0)) << 2.U) +& ((multiplierReg(2) * multiplierReg2(1)) << 3.U)))))
//     pp3b := RegNext(RegNext(RegNext(RegNext(RegNext(((multiplierReg(2) * multiplierReg2(2)) << 4.U) +& ((multiplierReg(2) * multiplierReg2(3)) << 5.U))))))

//     pp4 := RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(((multiplierReg(3) * multiplierReg2(0)) << 3.U) +& ((multiplierReg(3) * multiplierReg2(1)) << 4.U)))))))

//     dotProductRegs(i) := pp1 +& pp1b +& pp2 +& pp2b +& pp3 +& pp3b +& pp4 +& RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(((multiplierReg(3) * multiplierReg2(2)) << 5.U) +& ((multiplierReg(3) * multiplierReg2(3)) << 6.U))))))))
//     signs(i) := signReg ^ io.in.b.sign(i + j*blockSize)
//     two_complement(i) := Mux(signs(i)===1.U, (~(0.U ## dotProductRegs(i)) + 1.U), (0.U ## dotProductRegs(i)))
//     two_complement_buffer(i) := two_complement(i).asSInt
//   }
// }
//     acc(j) := two_complement_buffer.reduce(_ +& _)
// }

//   val adderTreeInst = Module(new adderTree2(blockSize, m, e, tensorSize))
//   adderTreeInst.io.in.sign_man <> VecInit(acc)
//   adderTreeInst.io.in.exps <> VecInit(exp_output)
//   adderTreeInst.io.in.control_signal <> io.in.control
//   adderTreeInst.io.in.control_signal2 <> io.in.control2
//   io.result := adderTreeInst.io.result_tree
// }













// class adderTree3(blockSize: Int, m: Int, e: Int, tensorSize: Int)
//     extends Module {
//   val io = IO(new Bundle {
//     val in = Input(new Bundle{
//     val sign_man =
//     Vec(tensorSize / blockSize, UInt((m + 1).W))
//     val exps = Vec(tensorSize / blockSize, UInt((e+1).W))
//     val control_signal = Bool()
//     val control_signal2 = Bool()
//     })
//     val result_tree = Output(UInt((m + e + 1).W))
//   })
  

//   val exp_buffer = Seq.fill(tensorSize / blockSize)(RegInit(0.U((e+1).W)))
//   var man_buffer_two_complement = Seq.fill(tensorSize / blockSize)(
//     RegInit(0.S((m + 1).W)))
  

  
//   when(io.in.control_signal === 0.B){
    
//     for (i <- 0 until tensorSize / blockSize) {
//       exp_buffer(i) := io.in.exps(i)
//       man_buffer_two_complement(i) := io.in.sign_man(i).asSInt
//     }
// }


// //   enable := 1.B
//   val v = RegInit(0.U(10.W))
//   var enable = Reg(Bool())
//   when (io.in.control_signal2 === 1.B){
//     enable := 1.B
//   }
  
  
//   when (io.in.control_signal && enable  === 1.B) {
    
    
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



// VERSION 1b: 4 BIT MULTIPLIER AND 4 MULTIPLIERS (MANT MAX)
// class Improved_HbfpTensor(blockSize: Int, m: Int, e: Int, tensorSize: Int) extends Module{
//   val io = IO(new Bundle {
//     val in = Input(new Bundle{
//         val a = hbfp(blockSize, m, e, tensorSize)
//         val b = hbfp(blockSize, m, e, tensorSize)
//         val control = Bool()
//         val control2 = Bool()
//   })
//     val result = Output(UInt((m + e + 1).W))
//   })

//   val exp_output = Seq.fill(tensorSize / blockSize)(RegInit(0.U((e+1).W)))
//   val acc = Seq.fill(tensorSize / blockSize)(RegInit(0.U((m + 1).W)))

//   for (j <- 0 until tensorSize / blockSize) {
//     exp_output(j) := io.in.a.exp(j) +& io.in.b.exp(j)
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
//       signReg := io.in.a.sign(i + j*blockSize)
//       multiplierReg := io.in.a.man(i + j*blockSize)
//       multiplierReg2 := io.in.b.man(i + j*blockSize)
//       val multiplication = multiplierReg(3,0) * multiplierReg2(3,0) +& (((padding ## multiplierReg(5,4)) * multiplierReg2(3,0)) << 4.U) +& ((multiplierReg(3,0) * (padding ## multiplierReg2(5,4))) << 4.U) +& (((padding##multiplierReg(5,4)) * (padding##multiplierReg2(5,4))) << 8.U)
//       dotProductRegs(i) := Mux(multiplication > (2<<m-1).U - 1.U, (2<<m-1).U - 1.U, multiplication)
//       signs(i) := signReg ^ io.in.b.sign(i + j*blockSize)
//       two_complement(i) := Mux(signs(i)===1.U, (~(0.U ## dotProductRegs(i)) + 1.U), (0.U ## dotProductRegs(i)))
//       two_complement_buffer(i) := two_complement(i).asSInt
//   } 
//   }


//   else{
//   for (i <- 0 until blockSize) {
//     val multiplierReg = RegInit(0.U(m.W))
//     val signReg = RegInit(0.U(1.W))
//     signReg := io.in.a.sign(i + j*blockSize)
//     multiplierReg := io.in.a.man(i + j*blockSize)
//     val multiplication = multiplierReg * io.in.b.man(i + j*blockSize)
//     dotProductRegs(i) :=  Mux(multiplication > (2<<m-1).U - 1.U, (2<<m-1).U - 1.U, multiplication)
//     signs(i) := signReg ^ io.in.b.sign(i + j*blockSize)
//     two_complement(i) := Mux(signs(i)===1.U, (~(0.U ## dotProductRegs(i)) + 1.U), (0.U ## dotProductRegs(i)))
//     two_complement_buffer(i) := two_complement(i).asSInt
//   }
// }
//     val sum = two_complement_buffer.reduce(_ +& _)
//     acc(j) := Mux(sum(m+blockSize-1).asUInt===1.U, Mux((~sum(m+blockSize-2,0).asUInt + 1.U) > (2<<m-1).U - 1.U, (~((2<<m-1).U - 1.U)) + 1.U, sum(m+blockSize-1, 0).asUInt), 
//   Mux(sum(m+blockSize-2, 0).asUInt > (2<<m-1).U - 1.U, (2<<m-1).U - 1.U, sum(m+blockSize-1,0).asUInt))
//   }

//   val adderTreeInst = Module(new adderTree3(blockSize, m, e, tensorSize))
//   adderTreeInst.io.in.sign_man <> VecInit(acc)
//   adderTreeInst.io.in.exps <> VecInit(exp_output)
//   adderTreeInst.io.in.control_signal <> io.in.control
//   adderTreeInst.io.in.control_signal2 <> io.in.control2
//   io.result := adderTreeInst.io.result_tree
// }






// // VERSION 2b: 4 BIT MULTIPLIER AND 2 MULTIPLIERS (MANT MAX)
// class Improved_HbfpTensor(blockSize: Int, m: Int, e: Int, tensorSize: Int) extends Module{
//   val io = IO(new Bundle {
//     val in = Input(new Bundle{
//         val a = hbfp(blockSize, m, e, tensorSize)
//         val b = hbfp(blockSize, m, e, tensorSize)
//         val control = Bool()
//         val control2 = Bool()
//   })
//     val result = Output(UInt((m + e + 1).W))
//   })

//   val exp_output = Seq.fill(tensorSize / blockSize)(RegInit(0.U((e+1).W)))
//   val acc = Seq.fill(tensorSize / blockSize)(RegInit(0.U((m + 1).W)))

//   for (j <- 0 until tensorSize / blockSize) {
//     exp_output(j) := io.in.a.exp(j) +& io.in.b.exp(j)
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
//       signReg := io.in.a.sign(i + j*blockSize)
//       multiplierReg := io.in.a.man(i + j*blockSize)
//       multiplierReg2 := io.in.b.man(i + j*blockSize)

//       pp1 := multiplierReg(3,0) * multiplierReg2(3,0) +& (((padding ## multiplierReg(5,4)) * multiplierReg2(3,0)) << 4.U)

//       val multiplication = pp1 +& RegNext(((multiplierReg(3,0) * (padding ## multiplierReg2(5,4))) << 4.U) +& (((padding##multiplierReg(5,4)) * (padding##multiplierReg2(5,4))) << 8.U))
//       dotProductRegs(i) := Mux(multiplication > (2<<m-1).U - 1.U, (2<<m-1).U - 1.U, multiplication)
//       // dotProductRegs(i) := multiplierReg(3,0) * multiplierReg2(3,0) + (((padding ## multiplierReg(5,4)) * multiplierReg2(3,0)) << 4.U) + ((multiplierReg(3,0) * (padding ## multiplierReg2(5,4))) << 4.U) + (((padding##multiplierReg(5,4)) * (padding##multiplierReg2(5,4))) << 8.U)                
//       signs(i) := signReg ^ io.in.b.sign(i + j*blockSize)
//       two_complement(i) := Mux(signs(i)===1.U, (~(0.U ## dotProductRegs(i)) + 1.U), (0.U ## dotProductRegs(i)))
//       two_complement_buffer(i) := two_complement(i).asSInt
//     } 
//   }


//   else{
//   for (i <- 0 until blockSize) {
//     val multiplierReg = RegInit(0.U(m.W))
//     val signReg = RegInit(0.U(1.W))
//     signReg := io.in.a.sign(i + j*blockSize)
//     multiplierReg := io.in.a.man(i + j*blockSize)
//     val multiplication = multiplierReg * io.in.b.man(i + j*blockSize) 
//     dotProductRegs(i) := Mux(multiplication > (2<<m-1).U - 1.U, (2<<m-1).U - 1.U, multiplication)
//     signs(i) := signReg ^ io.in.b.sign(i + j*blockSize)
//     two_complement(i) := Mux(signs(i)===1.U, (~(0.U ## dotProductRegs(i)) + 1.U), (0.U ## dotProductRegs(i)))
//     two_complement_buffer(i) := two_complement(i).asSInt
//   }
// }
//     val sum = two_complement_buffer.reduce(_ +& _)
//     acc(j) := Mux(sum(m+blockSize-1).asUInt===1.U, Mux((~sum(m+blockSize-2,0).asUInt + 1.U) > (2<<m-1).U - 1.U, (~((2<<m-1).U - 1.U)) + 1.U, sum(m+blockSize-1, 0).asUInt), 
//   Mux(sum(m+blockSize-2, 0).asUInt > (2<<m-1).U - 1.U, (2<<m-1).U - 1.U, sum(m+blockSize-1,0).asUInt))
//   }

//   val adderTreeInst = Module(new adderTree3(blockSize, m, e, tensorSize))
//   adderTreeInst.io.in.sign_man <> VecInit(acc)
//   adderTreeInst.io.in.exps <> VecInit(exp_output)
//   adderTreeInst.io.in.control_signal <> io.in.control
//   adderTreeInst.io.in.control_signal2 <> io.in.control2
//   io.result := adderTreeInst.io.result_tree
// }









// // VERSION 3b: 4 BIT MULTIPLIER AND 1 MULTIPLIER  (MANT MAX)
// class Improved_HbfpTensor(blockSize: Int, m: Int, e: Int, tensorSize: Int) extends Module{
//   val io = IO(new Bundle {
//     val in = Input(new Bundle{
//         val a = hbfp(blockSize, m, e, tensorSize)
//         val b = hbfp(blockSize, m, e, tensorSize)
//         val control = Bool()
//         val control2 = Bool()
//   })
//     val result = Output(UInt((m + e + 1).W))
//   })

//   val exp_output = Seq.fill(tensorSize / blockSize)(RegInit(0.U((e+1).W)))
//   val acc = Seq.fill(tensorSize / blockSize)(RegInit(0.U((m + 1).W)))

//   for (j <- 0 until tensorSize / blockSize) {
//     exp_output(j) := io.in.a.exp(j) +& io.in.b.exp(j)
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
//       signReg := io.in.a.sign(i + j*blockSize)
//       multiplierReg := io.in.a.man(i + j*blockSize)
//       multiplierReg2 := io.in.b.man(i + j*blockSize)


//       pp1 := multiplierReg(3,0) * multiplierReg2(3,0)

//       pp2 := RegNext(((padding ## multiplierReg(5,4)) * multiplierReg2(3,0)) << 4.U)


//       pp3 := RegNext(RegNext((multiplierReg(3,0) * (padding ## multiplierReg2(5,4))) << 4.U))

//       val multiplication = pp1 +& pp2 +& pp3 +& RegNext(RegNext(RegNext((((padding##multiplierReg(5,4)) * (padding##multiplierReg2(5,4))) << 8.U))))
//       dotProductRegs(i) := Mux(multiplication > (2<<m-1).U - 1.U, (2<<m-1).U - 1.U, multiplication)
//       // dotProductRegs(i) := multiplierReg(3,0) * multiplierReg2(3,0) + (((padding ## multiplierReg(5,4)) * multiplierReg2(3,0)) << 4.U) + ((multiplierReg(3,0) * (padding ## multiplierReg2(5,4))) << 4.U) + (((padding##multiplierReg(5,4)) * (padding##multiplierReg2(5,4))) << 8.U)                
//       signs(i) := signReg ^ io.in.b.sign(i + j*blockSize)
//       two_complement(i) := Mux(signs(i)===1.U, (~(0.U ## dotProductRegs(i)) + 1.U), (0.U ## dotProductRegs(i)))
//       two_complement_buffer(i) := two_complement(i).asSInt
//     } 
//   }


//   else{
//   for (i <- 0 until blockSize) {
//     val multiplierReg = RegInit(0.U(m.W))
//     val signReg = RegInit(0.U(1.W))
//     signReg := io.in.a.sign(i + j*blockSize)
//     multiplierReg := io.in.a.man(i + j*blockSize)
//     val multiplication = multiplierReg * io.in.b.man(i + j*blockSize) 
//     dotProductRegs(i) := Mux(multiplication > (2<<m-1).U - 1.U, (2<<m-1).U - 1.U, multiplication)
//     signs(i) := signReg ^ io.in.b.sign(i + j*blockSize)
//     two_complement(i) := Mux(signs(i)===1.U, (~(0.U ## dotProductRegs(i)) + 1.U), (0.U ## dotProductRegs(i)))
//     two_complement_buffer(i) := two_complement(i).asSInt
//   }
// }
//     val sum = two_complement_buffer.reduce(_ +& _)
//     acc(j) := Mux(sum(m+blockSize-1).asUInt===1.U, Mux((~sum(m+blockSize-2,0).asUInt + 1.U) > (2<<m-1).U - 1.U, (~((2<<m-1).U - 1.U)) + 1.U, sum(m+blockSize-1, 0).asUInt), 
//   Mux(sum(m+blockSize-2, 0).asUInt > (2<<m-1).U - 1.U, (2<<m-1).U - 1.U, sum(m+blockSize-1,0).asUInt))
//   }

//   val adderTreeInst = Module(new adderTree3(blockSize, m, e, tensorSize))
//   adderTreeInst.io.in.sign_man <> VecInit(acc)
//   adderTreeInst.io.in.exps <> VecInit(exp_output)
//   adderTreeInst.io.in.control_signal <> io.in.control
//   adderTreeInst.io.in.control_signal2 <> io.in.control2
//   io.result := adderTreeInst.io.result_tree
// }








// // VERSION 4b: 2 BIT MULTIPLIER AND 4 MULTIPLIERS (MANT MAX)
// class Improved_HbfpTensor(blockSize: Int, m: Int, e: Int, tensorSize: Int) extends Module{
//   val io = IO(new Bundle {
//     val in = Input(new Bundle{
//         val a = hbfp(blockSize, m, e, tensorSize)
//         val b = hbfp(blockSize, m, e, tensorSize)
//         val control = Bool()
//         val control2 = Bool()
//   })
//     val result = Output(UInt((m + e + 1).W))
//   })

//   val exp_output = Seq.fill(tensorSize / blockSize)(RegInit(0.U((e+1).W)))
//   val acc = Seq.fill(tensorSize / blockSize)(RegInit(0.U((m + 1).W)))

//   for (j <- 0 until tensorSize / blockSize) {
//     exp_output(j) := io.in.a.exp(j) +& io.in.b.exp(j)
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
//       signReg := io.in.a.sign(i + j*blockSize)
//       multiplierReg := io.in.a.man(i + j*blockSize)
//       multiplierReg2 := io.in.b.man(i + j*blockSize)

//       pp1 := multiplierReg(1,0) * multiplierReg2(1,0) + ((multiplierReg(1,0) * multiplierReg2(3,2)) << 2.U) + ((multiplierReg(1,0) * multiplierReg2(5,4)) << 4.U) + ((multiplierReg(3,2) * multiplierReg2(1,0)) << 2.U)
//       pp2 := RegNext(((multiplierReg(3,2) * multiplierReg2(3,2)) << 4.U) + ((multiplierReg(3,2) * multiplierReg2(5,4)) << 6.U) + ((multiplierReg(5,4) * multiplierReg2(1,0)) << 4.U) + ((multiplierReg(5,4) * multiplierReg2(3,2)) << 6.U))

//       val multiplication = pp1 +& pp2 +& RegNext(RegNext(((multiplierReg(5,4) * multiplierReg2(5,4)) << 8.U)))
//       dotProductRegs(i) := Mux(multiplication > (2<<m-1).U - 1.U, (2<<m-1).U - 1.U, multiplication)
//       // dotProductRegs(i) := multiplierReg(3,0) * multiplierReg2(3,0) + (((padding ## multiplierReg(5,4)) * multiplierReg2(3,0)) << 4.U) + ((multiplierReg(3,0) * (padding ## multiplierReg2(5,4))) << 4.U) + (((padding##multiplierReg(5,4)) * (padding##multiplierReg2(5,4))) << 8.U)                
//       signs(i) := signReg ^ io.in.b.sign(i + j*blockSize)
//       two_complement(i) := Mux(signs(i)===1.U, (~(0.U ## dotProductRegs(i)) + 1.U), (0.U ## dotProductRegs(i)))
//       two_complement_buffer(i) := two_complement(i).asSInt
//     } 
//   }


//   else if(m == 4.toInt){
//   for (i <- 0 until blockSize) {
//     val multiplierReg = RegInit(0.U(m.W))
//     val multiplierReg2 = RegInit(0.U(m.W))
//     val signReg = RegInit(0.U(1.W))
//     signReg := io.in.a.sign(i + j*blockSize)
//     multiplierReg := io.in.a.man(i + j*blockSize)
//     multiplierReg2 := io.in.b.man(i + j*blockSize)
//     val multiplication = multiplierReg(1,0) * multiplierReg2(1,0) + ((multiplierReg(1,0) * multiplierReg2(3,2)) << 2.U) + ((multiplierReg(3,2) * multiplierReg2(1,0)) << 2.U) + ((multiplierReg(3,2) * multiplierReg2(3,2)) << 4.U)
//     dotProductRegs(i) := Mux(multiplication > (2<<m-1).U - 1.U, (2<<m-1).U - 1.U, multiplication)
//     signs(i) := signReg ^ io.in.b.sign(i + j*blockSize)
//     two_complement(i) := Mux(signs(i)===1.U, (~(0.U ## dotProductRegs(i)) + 1.U), (0.U ## dotProductRegs(i)))
//     two_complement_buffer(i) := two_complement(i).asSInt
//   }
// }
//     val sum = two_complement_buffer.reduce(_ +& _)
//     acc(j) := Mux(sum(m+blockSize-1).asUInt===1.U, Mux((~sum(m+blockSize-2,0).asUInt + 1.U) > (2<<m-1).U - 1.U, (~((2<<m-1).U - 1.U)) + 1.U, sum(m+blockSize-1, 0).asUInt), 
//   Mux(sum(m+blockSize-2, 0).asUInt > (2<<m-1).U - 1.U, (2<<m-1).U - 1.U, sum(m+blockSize-1,0).asUInt))
//   }

//   val adderTreeInst = Module(new adderTree3(blockSize, m, e, tensorSize))
//   adderTreeInst.io.in.sign_man <> VecInit(acc)
//   adderTreeInst.io.in.exps <> VecInit(exp_output)
//   adderTreeInst.io.in.control_signal <> io.in.control
//   adderTreeInst.io.in.control_signal2 <> io.in.control2
//   io.result := adderTreeInst.io.result_tree
// }









// // VERSION 5b: 2 BIT MULTIPLIER AND 2 MULTIPLIERS (MANT MAX)
// class Improved_HbfpTensor(blockSize: Int, m: Int, e: Int, tensorSize: Int) extends Module{
//   val io = IO(new Bundle {
//     val in = Input(new Bundle{
//         val a = hbfp(blockSize, m, e, tensorSize)
//         val b = hbfp(blockSize, m, e, tensorSize)
//         val control = Bool()
//         val control2 = Bool()
//   })
//     val result = Output(UInt((m + e + 1).W))
//   })

//   val exp_output = Seq.fill(tensorSize / blockSize)(RegInit(0.U((e+1).W)))
//   val acc = Seq.fill(tensorSize / blockSize)(RegInit(0.U((m + 1).W)))

//   for (j <- 0 until tensorSize / blockSize) {
//     exp_output(j) := io.in.a.exp(j) +& io.in.b.exp(j)
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
//       signReg := io.in.a.sign(i + j*blockSize)
//       multiplierReg := io.in.a.man(i + j*blockSize)
//       multiplierReg2 := io.in.b.man(i + j*blockSize)


//       pp1 := multiplierReg(1,0) * multiplierReg2(1,0) + ((multiplierReg(1,0) * multiplierReg2(3,2)) << 2.U)

//       pp2 := RegNext(((multiplierReg(1,0) * multiplierReg2(5,4)) << 4.U) + ((multiplierReg(3,2) * multiplierReg2(1,0)) << 2.U))

//       pp3 := RegNext(RegNext(((multiplierReg(3,2) * multiplierReg2(3,2)) << 4.U) + ((multiplierReg(3,2) * multiplierReg2(5,4)) << 6.U)))

//       pp4 :=  RegNext(RegNext(RegNext(((multiplierReg(5,4) * multiplierReg2(1,0)) << 4.U) + ((multiplierReg(5,4) * multiplierReg2(3,2)) << 6.U))))
//       val multiplication = pp1 +& pp2 +& pp3 +& pp4 +& RegNext(RegNext(RegNext(RegNext(((multiplierReg(5,4) * multiplierReg2(5,4)) << 8.U)))))
//       dotProductRegs(i) := Mux(multiplication > (2<<m-1).U - 1.U, (2<<m-1).U - 1.U, multiplication)
//       // dotProductRegs(i) := multiplierReg(3,0) * multiplierReg2(3,0) + (((padding ## multiplierReg(5,4)) * multiplierReg2(3,0)) << 4.U) + ((multiplierReg(3,0) * (padding ## multiplierReg2(5,4))) << 4.U) + (((padding##multiplierReg(5,4)) * (padding##multiplierReg2(5,4))) << 8.U)                
//       signs(i) := signReg ^ io.in.b.sign(i + j*blockSize)
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
//     signReg := io.in.a.sign(i + j*blockSize)
//     multiplierReg := io.in.a.man(i + j*blockSize)
//     multiplierReg2 := io.in.b.man(i + j*blockSize)

//     pp1 := multiplierReg(1,0) * multiplierReg2(1,0) + ((multiplierReg(1,0) * multiplierReg2(3,2)) << 2.U)

//     val multiplication = pp1 +& RegNext(((multiplierReg(3,2) * multiplierReg2(1,0)) << 2.U) + ((multiplierReg(3,2) * multiplierReg2(3,2)) << 4.U)) 
//     dotProductRegs(i) := Mux(multiplication > (2<<m-1).U - 1.U, (2<<m-1).U - 1.U, multiplication)
//     signs(i) := signReg ^ io.in.b.sign(i + j*blockSize)
//     two_complement(i) := Mux(signs(i)===1.U, (~(0.U ## dotProductRegs(i)) + 1.U), (0.U ## dotProductRegs(i)))
//     two_complement_buffer(i) := two_complement(i).asSInt
//   }
// }
//     val sum = two_complement_buffer.reduce(_ +& _)
//     acc(j) := Mux(sum(m+blockSize-1).asUInt===1.U, Mux((~sum(m+blockSize-2,0).asUInt + 1.U) > (2<<m-1).U - 1.U, (~((2<<m-1).U - 1.U)) + 1.U, sum(m+blockSize-1, 0).asUInt), 
//   Mux(sum(m+blockSize-2, 0).asUInt > (2<<m-1).U - 1.U, (2<<m-1).U - 1.U, sum(m+blockSize-1,0).asUInt))
// }

//   val adderTreeInst = Module(new adderTree3(blockSize, m, e, tensorSize))
//   adderTreeInst.io.in.sign_man <> VecInit(acc)
//   adderTreeInst.io.in.exps <> VecInit(exp_output)
//   adderTreeInst.io.in.control_signal <> io.in.control
//   adderTreeInst.io.in.control_signal2 <> io.in.control2
//   io.result := adderTreeInst.io.result_tree
// }








// // VERSION 6b: 2 BIT MULTIPLIER AND 1 MULTIPLIER (MANT MAX)
// class Improved_HbfpTensor(blockSize: Int, m: Int, e: Int, tensorSize: Int) extends Module{
//   val io = IO(new Bundle {
//     val in = Input(new Bundle{
//         val a = hbfp(blockSize, m, e, tensorSize)
//         val b = hbfp(blockSize, m, e, tensorSize)
//         val control = Bool()
//         val control2 = Bool()
//   })
//     val result = Output(UInt((m + e + 1).W))
//   })

//   val exp_output = Seq.fill(tensorSize / blockSize)(RegInit(0.U((e+1).W)))
//   val acc = Seq.fill(tensorSize / blockSize)(RegInit(0.U((m + 1).W)))

//   for (j <- 0 until tensorSize / blockSize) {
//     exp_output(j) := io.in.a.exp(j) +& io.in.b.exp(j)
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
//       signReg := io.in.a.sign(i + j*blockSize)
//       multiplierReg := io.in.a.man(i + j*blockSize)
//       multiplierReg2 := io.in.b.man(i + j*blockSize)

//       pp1 := multiplierReg(1,0) * multiplierReg2(1,0) 

//       pp2 := RegNext((multiplierReg(1,0) * multiplierReg2(3,2)) << 2.U)                                 

//       pp3 := RegNext(RegNext(((multiplierReg(1,0) * multiplierReg2(5,4)) << 4.U)))                    

//       pp4 := RegNext(RegNext(RegNext((multiplierReg(3,2) * multiplierReg2(1,0)) << 2.U)))                   

//       pp5 := RegNext(RegNext(RegNext(RegNext((multiplierReg(3,2) * multiplierReg2(3,2)) << 4.U))))                            

//       pp6 := RegNext(RegNext(RegNext(RegNext(RegNext((multiplierReg(3,2) * multiplierReg2(5,4)) << 6.U)))))                           

//       pp7 := RegNext(RegNext(RegNext(RegNext(RegNext(RegNext((multiplierReg(5,4) * multiplierReg2(1,0)) << 4.U))))))                           

//       pp8 := RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext((multiplierReg(5,4) * multiplierReg2(3,2)) << 6.U)))))))

//       val multiplication = pp1 +& pp2 +& pp3 +& pp4 +& pp5 +& pp6 +& pp7 +& pp8 +& RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(((multiplierReg(5,4) * multiplierReg2(5,4)) << 8.U)))))))))
//       dotProductRegs(i) := Mux(multiplication > (2<<m-1).U - 1.U, (2<<m-1).U - 1.U, multiplication)
//       // dotProductRegs(i) := multiplierReg(3,0) * multiplierReg2(3,0) + (((padding ## multiplierReg(5,4)) * multiplierReg2(3,0)) << 4.U) + ((multiplierReg(3,0) * (padding ## multiplierReg2(5,4))) << 4.U) + (((padding##multiplierReg(5,4)) * (padding##multiplierReg2(5,4))) << 8.U)                
//       signs(i) := signReg ^ io.in.b.sign(i + j*blockSize)
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
//     signReg := io.in.a.sign(i + j*blockSize)
//     multiplierReg := io.in.a.man(i + j*blockSize)
//     multiplierReg2 := io.in.b.man(i + j*blockSize)

//     pp1 := multiplierReg(1,0) * multiplierReg2(1,0)

//     pp2 := RegNext((multiplierReg(1,0) * multiplierReg2(3,2)) << 2.U)

//     pp3 := RegNext(RegNext((multiplierReg(3,2) * multiplierReg2(1,0)) << 2.U))

//     val multiplication = pp1 +& pp2 +& pp3 +& RegNext(RegNext(RegNext(((multiplierReg(3,2) * multiplierReg2(3,2)) << 4.U))))
//     dotProductRegs(i) := Mux(multiplication > (2<<m-1).U - 1.U, (2<<m-1).U - 1.U, multiplication)
//     signs(i) := signReg ^ io.in.b.sign(i + j*blockSize)
//     two_complement(i) := Mux(signs(i)===1.U, (~(0.U ## dotProductRegs(i)) + 1.U), (0.U ## dotProductRegs(i)))
//     two_complement_buffer(i) := two_complement(i).asSInt
//   }
// }
//     val sum = two_complement_buffer.reduce(_ +& _)
//     acc(j) := Mux(sum(m+blockSize-1).asUInt===1.U, Mux((~sum(m+blockSize-2,0).asUInt + 1.U) > (2<<m-1).U - 1.U, (~((2<<m-1).U - 1.U)) + 1.U, sum(m+blockSize-1, 0).asUInt), 
//   Mux(sum(m+blockSize-2, 0).asUInt > (2<<m-1).U - 1.U, (2<<m-1).U - 1.U, sum(m+blockSize-1,0).asUInt))
// }

//   val adderTreeInst = Module(new adderTree3(blockSize, m, e, tensorSize))
//   adderTreeInst.io.in.sign_man <> VecInit(acc)
//   adderTreeInst.io.in.exps <> VecInit(exp_output)
//   adderTreeInst.io.in.control_signal <> io.in.control
//   adderTreeInst.io.in.control_signal2 <> io.in.control2
//   io.result := adderTreeInst.io.result_tree
// }







// // VERSION 7b: 1 BIT MULTIPLIER AND 4 MULTIPLIERS (MANT MAX)
// class Improved_HbfpTensor(blockSize: Int, m: Int, e: Int, tensorSize: Int) extends Module{
//   val io = IO(new Bundle {
//     val in = Input(new Bundle{
//         val a = hbfp(blockSize, m, e, tensorSize)
//         val b = hbfp(blockSize, m, e, tensorSize)
//         val control = Bool()
//         val control2 = Bool()
//   })
//     val result = Output(UInt((m + e + 1).W))
//   })

//   val exp_output = Seq.fill(tensorSize / blockSize)(RegInit(0.U((e+1).W)))
//   val acc = Seq.fill(tensorSize / blockSize)(RegInit(0.U((m + 1).W)))

//   for (j <- 0 until tensorSize / blockSize) {
//     exp_output(j) := io.in.a.exp(j) +& io.in.b.exp(j)
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
//       signReg := io.in.a.sign(i + j*blockSize)
//       multiplierReg := io.in.a.man(i + j*blockSize)
//       multiplierReg2 := io.in.b.man(i + j*blockSize)
//       pp1 := multiplierReg(0) * multiplierReg2(0) +& ((multiplierReg(0) * multiplierReg2(1)) << 1.U) +& ((multiplierReg(0) * multiplierReg2(2)) << 2.U) +& ((multiplierReg(0) * multiplierReg2(3)) << 3.U) 
//       pp2 := RegNext(((multiplierReg(0) * multiplierReg2(4)) << 4.U) +& ((multiplierReg(0) * multiplierReg2(5)) << 5.U)  +& ((multiplierReg(1) * multiplierReg2(0)) << 1.U) +& ((multiplierReg(1) * multiplierReg2(1)) << 2.U))


//       pp3 := RegNext(RegNext(((multiplierReg(1) * multiplierReg2(2)) << 3.U) +& ((multiplierReg(1) * multiplierReg2(3)) << 4.U) +& ((multiplierReg(1) * multiplierReg2(4)) << 5.U) +& ((multiplierReg(1) * multiplierReg2(5)) << 6.U)))

//       pp4 := RegNext(RegNext(RegNext(((multiplierReg(2) * multiplierReg2(0)) << 2.U) +& ((multiplierReg(2) * multiplierReg2(1)) << 3.U) +& ((multiplierReg(2) * multiplierReg2(2)) << 4.U) +& ((multiplierReg(2) * multiplierReg2(3)) << 5.U))))

//       pp5 := RegNext(RegNext(RegNext(RegNext(((multiplierReg(2) * multiplierReg2(4)) << 6.U) +& ((multiplierReg(2) * multiplierReg2(5)) << 7.U) +& ((multiplierReg(3) * multiplierReg2(0)) << 3.U) +& ((multiplierReg(3) * multiplierReg2(1)) << 4.U)))))                     

//       pp6 := RegNext(RegNext(RegNext(RegNext(RegNext(((multiplierReg(3) * multiplierReg2(2)) << 5.U) +& ((multiplierReg(3) * multiplierReg2(3)) << 6.U) +& ((multiplierReg(3) * multiplierReg2(4)) << 7.U) +& ((multiplierReg(3) * multiplierReg2(5)) << 8.U))))))                         

//       pp7 := RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(((multiplierReg(4) * multiplierReg2(0)) << 4.U) +& ((multiplierReg(4) * multiplierReg2(1)) << 5.U) +& ((multiplierReg(4) * multiplierReg2(2)) << 6.U) +& ((multiplierReg(4) * multiplierReg2(3)) << 7.U)))))))                           

//       pp8 := RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(((multiplierReg(4) * multiplierReg2(4)) << 8.U) +& ((multiplierReg(4) * multiplierReg2(5)) << 9.U) +& ((multiplierReg(5) * multiplierReg2(0)) << 5.U) +& ((multiplierReg(5) * multiplierReg2(1)) << 6.U))))))))

//       val multiplication = pp1 +& pp2 +& pp3 +& pp4 +& pp5 +& pp6 +& pp7 +& pp8 +& RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(((multiplierReg(5) * multiplierReg2(2)) << 7.U) +& ((multiplierReg(5) * multiplierReg2(3)) << 8.U) +& ((multiplierReg(5) * multiplierReg2(4)) << 9.U) +& ((multiplierReg(5) * multiplierReg2(5)) << 10.U)))))))))
//       dotProductRegs(i) := Mux(multiplication > (2<<m-1).U - 1.U, (2<<m-1).U - 1.U, multiplication)
//       // dotProductRegs(i) := multiplierReg(3,0) * multiplierReg2(3,0) + (((padding ## multiplierReg(5,4)) * multiplierReg2(3,0)) << 4.U) + ((multiplierReg(3,0) * (padding ## multiplierReg2(5,4))) << 4.U) + (((padding##multiplierReg(5,4)) * (padding##multiplierReg2(5,4))) << 8.U)                
//       signs(i) := signReg ^ io.in.b.sign(i + j*blockSize)
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
//     signReg := io.in.a.sign(i + j*blockSize)
//     multiplierReg := io.in.a.man(i + j*blockSize)
//     multiplierReg2 := io.in.b.man(i + j*blockSize)
//     pp1 := multiplierReg(0) * multiplierReg2(0) +& ((multiplierReg(0) * multiplierReg2(1)) << 1.U) +& ((multiplierReg(0) * multiplierReg2(2)) << 2.U) +& ((multiplierReg(0) * multiplierReg2(3)) << 3.U) 

//     pp2 := RegNext(((multiplierReg(1) * multiplierReg2(0)) << 1.U) +& ((multiplierReg(1) * multiplierReg2(1)) << 2.U) +& ((multiplierReg(1) * multiplierReg2(2)) << 3.U) +& ((multiplierReg(1) * multiplierReg2(3)) << 4.U))

//     pp3 := RegNext(RegNext(((multiplierReg(2) * multiplierReg2(0)) << 2.U) +& ((multiplierReg(2) * multiplierReg2(1)) << 3.U) +& ((multiplierReg(2) * multiplierReg2(2)) << 4.U) +& ((multiplierReg(2) * multiplierReg2(3)) << 5.U)))

//     val multiplication = pp1 +& pp2 +& pp3 +& RegNext(RegNext(RegNext(((multiplierReg(3) * multiplierReg2(0)) << 3.U) +& ((multiplierReg(3) * multiplierReg2(1)) << 4.U) +& ((multiplierReg(3) * multiplierReg2(2)) << 5.U) +& ((multiplierReg(3) * multiplierReg2(3)) << 6.U))))

//     dotProductRegs(i) := Mux(multiplication > (2<<m-1).U - 1.U, (2<<m-1).U - 1.U, multiplication)
//     signs(i) := signReg ^ io.in.b.sign(i + j*blockSize)
//     two_complement(i) := Mux(signs(i)===1.U, (~(0.U ## dotProductRegs(i)) + 1.U), (0.U ## dotProductRegs(i)))
//     two_complement_buffer(i) := two_complement(i).asSInt
//   }
// }
//     val sum = two_complement_buffer.reduce(_ +& _)
//     acc(j) := Mux(sum(m+blockSize-1).asUInt===1.U, Mux((~sum(m+blockSize-2,0).asUInt + 1.U) > (2<<m-1).U - 1.U, (~((2<<m-1).U - 1.U)) + 1.U, sum(m+blockSize-1, 0).asUInt), 
//   Mux(sum(m+blockSize-2, 0).asUInt > (2<<m-1).U - 1.U, (2<<m-1).U - 1.U, sum(m+blockSize-1,0).asUInt))
// }

//   val adderTreeInst = Module(new adderTree3(blockSize, m, e, tensorSize))
//   adderTreeInst.io.in.sign_man <> VecInit(acc)
//   adderTreeInst.io.in.exps <> VecInit(exp_output)
//   adderTreeInst.io.in.control_signal <> io.in.control
//   adderTreeInst.io.in.control_signal2 <> io.in.control2
//   io.result := adderTreeInst.io.result_tree
// }






// // VERSION 8b: 1 BIT MULTIPLIER AND 2 MULTIPLIERS (MANT MAX)
// class Improved_HbfpTensor(blockSize: Int, m: Int, e: Int, tensorSize: Int) extends Module{
//   val io = IO(new Bundle {
//     val in = Input(new Bundle{
//         val a = hbfp(blockSize, m, e, tensorSize)
//         val b = hbfp(blockSize, m, e, tensorSize)
//         val control = Bool()
//         val control2 = Bool()
//   })
//     val result = Output(UInt((m + e + 1).W))
//   })

//   val exp_output = Seq.fill(tensorSize / blockSize)(RegInit(0.U((e+1).W)))
//   val acc = Seq.fill(tensorSize / blockSize)(RegInit(0.U((m + 1).W)))

//   for (j <- 0 until tensorSize / blockSize) {
//     exp_output(j) := io.in.a.exp(j) +& io.in.b.exp(j)
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
//       val pp1b = RegInit(0.U(12.W))

//       val pp2 = RegInit(0.U(12.W))
//       val pp2b = RegInit(0.U(12.W))

//       val pp3 = RegInit(0.U(12.W))
//       val pp3b = RegInit(0.U(12.W))

//       val pp4 = RegInit(0.U(12.W))
//       val pp4b = RegInit(0.U(12.W))

//       val pp5 = RegInit(0.U(12.W))
//       val pp5b = RegInit(0.U(12.W))

//       val pp6 = RegInit(0.U(12.W))
//       val pp6b = RegInit(0.U(12.W))

//       val pp7 = RegInit(0.U(12.W))
//       val pp7b = RegInit(0.U(12.W))

//       val pp8 = RegInit(0.U(12.W))
//       val pp8b = RegInit(0.U(12.W))

//       val pp9 = RegInit(0.U(12.W))
//       signReg := io.in.a.sign(i + j*blockSize)
//       multiplierReg := io.in.a.man(i + j*blockSize)
//       multiplierReg2 := io.in.b.man(i + j*blockSize)
//       pp1 := multiplierReg(0) * multiplierReg2(0) +& ((multiplierReg(0) * multiplierReg2(1)) << 1.U)
//       pp1b := RegNext(((multiplierReg(0) * multiplierReg2(2)) << 2.U) +& ((multiplierReg(0) * multiplierReg2(3)) << 3.U))

//       pp2 := RegNext(RegNext(((multiplierReg(0) * multiplierReg2(4)) << 4.U) +& ((multiplierReg(0) * multiplierReg2(5)) << 5.U)))
//       pp2b := RegNext(RegNext(RegNext(((multiplierReg(1) * multiplierReg2(0)) << 1.U) +& ((multiplierReg(1) * multiplierReg2(1)) << 2.U))))

//       pp3 := RegNext(RegNext(RegNext(RegNext(((multiplierReg(1) * multiplierReg2(2)) << 3.U) +& ((multiplierReg(1) * multiplierReg2(3)) << 4.U)))))
//       pp3b := RegNext(RegNext(RegNext(RegNext(RegNext(((multiplierReg(1) * multiplierReg2(4)) << 5.U) +& ((multiplierReg(1) * multiplierReg2(5)) << 6.U))))))

//       pp4 := RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(((multiplierReg(2) * multiplierReg2(0)) << 2.U) +& ((multiplierReg(2) * multiplierReg2(1)) << 3.U)))))))
//       pp4b := RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(((multiplierReg(2) * multiplierReg2(2)) << 4.U) +& ((multiplierReg(2) * multiplierReg2(3)) << 5.U))))))))

//       pp5 := RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(((multiplierReg(2) * multiplierReg2(4)) << 6.U) +& ((multiplierReg(2) * multiplierReg2(5)) << 7.U)))))))))  
//       pp5b := RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(((multiplierReg(3) * multiplierReg2(0)) << 3.U) +& ((multiplierReg(3) * multiplierReg2(1)) << 4.U))))))))))                 

//       pp6 := RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(((multiplierReg(3) * multiplierReg2(2)) << 5.U) +& ((multiplierReg(3) * multiplierReg2(3)) << 6.U)))))))))))
//       pp6b := RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(((multiplierReg(3) * multiplierReg2(4)) << 7.U) +& ((multiplierReg(3) * multiplierReg2(5)) << 8.U))))))))))))           

//       pp7 := RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(((multiplierReg(4) * multiplierReg2(0)) << 4.U) +& ((multiplierReg(4) * multiplierReg2(1)) << 5.U)))))))))))))
//       pp7b := RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(((multiplierReg(4) * multiplierReg2(2)) << 6.U) +& ((multiplierReg(4) * multiplierReg2(3)) << 7.U))))))))))))))                         

//       pp8 := RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(((multiplierReg(4) * multiplierReg2(4)) << 8.U) +& ((multiplierReg(4) * multiplierReg2(5)) << 9.U)))))))))))))))
//       pp8b := RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(((multiplierReg(5) * multiplierReg2(0)) << 5.U) +& ((multiplierReg(5) * multiplierReg2(1)) << 6.U))))))))))))))))

//       pp9 := RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(((multiplierReg(5) * multiplierReg2(2)) << 7.U) +& ((multiplierReg(5) * multiplierReg2(3)) << 8.U)))))))))))))))))

//       val multiplication  = pp1 +& pp1b +& pp2 +& pp2b +& pp3 +& pp3b +& pp4 +& pp4b +& pp5 +& pp5b +& pp6 +& pp6b +& pp7 +& pp7b +& pp8 +& pp8b +& pp9
//       dotProductRegs(i) := Mux(multiplication > (2<<m-1).U - 1.U, (2<<m-1).U - 1.U, multiplication)
//       // dotProductRegs(i) := multiplierReg(3,0) * multiplierReg2(3,0) + (((padding ## multiplierReg(5,4)) * multiplierReg2(3,0)) << 4.U) + ((multiplierReg(3,0) * (padding ## multiplierReg2(5,4))) << 4.U) + (((padding##multiplierReg(5,4)) * (padding##multiplierReg2(5,4))) << 8.U)                
//       signs(i) := signReg ^ io.in.b.sign(i + j*blockSize)
//       two_complement(i) := Mux(signs(i)===1.U, (~(0.U ## dotProductRegs(i)) + 1.U), (0.U ## dotProductRegs(i)))
//       two_complement_buffer(i) := two_complement(i).asSInt
//    }
//   }


//   else if(m == 4.toInt){
//   for (i <- 0 until blockSize) {
//     val multiplierReg = RegInit(0.U(m.W))
//     val multiplierReg2 = RegInit(0.U(m.W))
//     val pp1 = RegInit(0.U(12.W))
//     val pp1b = RegInit(0.U(12.W))

//     val pp2 = RegInit(0.U(12.W))
//     val pp2b = RegInit(0.U(12.W))

//     val pp3 = RegInit(0.U(12.W))
//     val pp3b = RegInit(0.U(12.W))

//     val pp4 = RegInit(0.U(12.W))
//     val signReg = RegInit(0.U(1.W))
//     signReg := io.in.a.sign(i + j*blockSize)
//     multiplierReg := io.in.a.man(i + j*blockSize)
//     multiplierReg2 := io.in.b.man(i + j*blockSize)
//     pp1 := multiplierReg(0) * multiplierReg2(0) +& ((multiplierReg(0) * multiplierReg2(1)) << 1.U)
//     pp1b := RegNext(((multiplierReg(0) * multiplierReg2(2)) << 2.U) +& ((multiplierReg(0) * multiplierReg2(3)) << 3.U))

//     pp2 := RegNext(RegNext(((multiplierReg(1) * multiplierReg2(0)) << 1.U) +& ((multiplierReg(1) * multiplierReg2(1)) << 2.U)))
//     pp2b := RegNext(RegNext(RegNext(((multiplierReg(1) * multiplierReg2(2)) << 3.U) +& ((multiplierReg(1) * multiplierReg2(3)) << 4.U))))

//     pp3 := RegNext(RegNext(RegNext(RegNext(((multiplierReg(2) * multiplierReg2(0)) << 2.U) +& ((multiplierReg(2) * multiplierReg2(1)) << 3.U)))))
//     pp3b := RegNext(RegNext(RegNext(RegNext(RegNext(((multiplierReg(2) * multiplierReg2(2)) << 4.U) +& ((multiplierReg(2) * multiplierReg2(3)) << 5.U))))))

//     pp4 := RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(((multiplierReg(3) * multiplierReg2(0)) << 3.U) +& ((multiplierReg(3) * multiplierReg2(1)) << 4.U)))))))

//     val multiplication = pp1 +& pp1b +& pp2 +& pp2b +& pp3 +& pp3b +& pp4 +& RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(RegNext(((multiplierReg(3) * multiplierReg2(2)) << 5.U) +& ((multiplierReg(3) * multiplierReg2(3)) << 6.U))))))))

//     dotProductRegs(i) := Mux(multiplication > (2<<m-1).U - 1.U, (2<<m-1).U - 1.U, multiplication)
//     signs(i) := signReg ^ io.in.b.sign(i + j*blockSize)
//     two_complement(i) := Mux(signs(i)===1.U, (~(0.U ## dotProductRegs(i)) + 1.U), (0.U ## dotProductRegs(i)))
//     two_complement_buffer(i) := two_complement(i).asSInt
//   }
// }
//     val sum = two_complement_buffer.reduce(_ +& _)
//     acc(j) := Mux(sum(m+blockSize-1).asUInt===1.U, Mux((~sum(m+blockSize-2,0).asUInt + 1.U) > (2<<m-1).U - 1.U, (~((2<<m-1).U - 1.U)) + 1.U, sum(m+blockSize-1, 0).asUInt), 
//   Mux(sum(m+blockSize-2, 0).asUInt > (2<<m-1).U - 1.U, (2<<m-1).U - 1.U, sum(m+blockSize-1,0).asUInt))
// }

//   val adderTreeInst = Module(new adderTree3(blockSize, m, e, tensorSize))
//   adderTreeInst.io.in.sign_man <> VecInit(acc)
//   adderTreeInst.io.in.exps <> VecInit(exp_output)
//   adderTreeInst.io.in.control_signal <> io.in.control
//   adderTreeInst.io.in.control_signal2 <> io.in.control2
//   io.result := adderTreeInst.io.result_tree
// }