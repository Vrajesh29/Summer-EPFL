// // Check VERSION:5 before running any other(Version 5 is the correct one in all aspects), there is a bit of change in the exp_output part and the shifting part



// // // // VERSION:1 (Will require one clock cycle in testbench)
// // // import chisel3._

// // // class Hbfp(blockSize: Int, m: Int, e: Int) extends Module{
// // //   val io = IO(new Bundle{
// // //     val man_a = Input(Vec(blockSize, SInt(m.W)))
// // //     val man_b = Input(Vec(blockSize, SInt(m.W)))
// // //     val exp_a = Input(UInt(e.W))
// // //     val exp_b = Input(UInt(e.W))
// // //     val result = Output(UInt((m+e).W))
// // //     // val man_a = man.cloneType
// // //     // val man_b = man.cloneType
// // //     // val exp_a = exp.cloneType
// // //     // val exp_b = exp.cloneType
// // //   })
// // //     val man_a = io.man_a
// // //     val man_b = io.man_b
// // //     val exp_a = io.exp_a
// // //     val exp_b = io.exp_b
// // //     val exp_output = Wire(UInt(e.W))
// // //   exp_output := (exp_a + exp_b)
// // //   val dot_product_man = VecInit(io.man_a.zip(io.man_b).map { case (a, b) => a * b })
// // //   val accumulator = RegInit(0.S((2*m+blockSize-1).W))
// // //   accumulator := dot_product_man.reduceTree(_+_)
// // //   io.result := accumulator(2*m+blockSize-2) ## exp_output ## accumulator(m-2, 0)

// // // }

// // // object HbfpMain extends App {
// // //   emitVerilog(new Hbfp(16, 6, 8))
// // // }


// // // VERSION:2 (Sequential) (Will require two clock cycles in testbench)

// // // import chisel3._
// // // import chisel3.util._

// // // class Hbfp(blockSize: Int, m: Int, e: Int) extends Module {
// // //   val io = IO(new Bundle {
// // //     val man_a = Input(Vec(blockSize, SInt(m.W)))
// // //     val man_b = Input(Vec(blockSize, SInt(m.W)))
// // //     val exp_a = Input(UInt(e.W))
// // //     val exp_b = Input(UInt(e.W))
// // //     val result = Output(UInt((m + e).W))
// // //   })

// // //   val exp_a = io.exp_a
// // //   val exp_b = io.exp_b
// // //   val exp_output = Wire(UInt(e.W))
// // //   exp_output := exp_a + exp_b

// // //   val dot_product_man = Wire(Vec(blockSize, SInt((2 * m).W)))
// // //   val accumulator = RegInit(0.S((2 * m + blockSize - 1).W))

// // //   val dotProductRegs = Reg(Vec(blockSize, SInt((2 * m).W)))
// // //   for (i <- 0 until blockSize) {
// // //     dot_product_man(i) := dotProductRegs(i)
// // //   }

// // //   val multiplierRegs = Seq.fill(blockSize)(Module(new Multiplier(m)).io)
// // //   for (i <- 0 until blockSize) {
// // //     multiplierRegs(i).a := io.man_a(i)
// // //     multiplierRegs(i).b := io.man_b(i)
// // //     dotProductRegs(i) := multiplierRegs(i).result
// // //   }

// // //   accumulator := dot_product_man.reduceTree(_+_)

// // //   io.result := accumulator(2 * m + blockSize - 2) ## exp_output ## accumulator(m - 2, 0)
// // // }

// // // class Multiplier(m: Int) extends Module {
// // //   val io = IO(new Bundle {
// // //     val a = Input(SInt(m.W))
// // //     val b = Input(SInt(m.W))
// // //     val result = Output(SInt((2 * m).W))
// // //   })
// // //   io.result := io.a * io.b
// // // }

// // // object HbfpMain extends App {
// // //   emitVerilog(new Hbfp(16, 6, 8))
// // // }


// // // VERSION:3 (Will require two clock cycles in testbench)
// // // import chisel3._
// // // import chisel3.util._

// // // class Hbfp(blockSize: Int, m: Int, e: Int) extends Module {
// // //   val io = IO(new Bundle {
// // //     val man_a = Input(Vec(blockSize, SInt(m.W)))
// // //     val man_b = Input(Vec(blockSize, SInt(m.W)))
// // //     val exp_a = Input(UInt(e.W))
// // //     val exp_b = Input(UInt(e.W))
// // //     val result = Output(UInt((m + e).W))
// // //   })

// // //   val exp_a = io.exp_a
// // //   val exp_b = io.exp_b
// // //   val exp_output = Wire(UInt(e.W))
// // //   exp_output := exp_a + exp_b

// // //   val dotProductRegs = Reg(Vec(blockSize, SInt((2 * m).W)))
// // //   val accumulator = RegInit(0.S((2 * m + blockSize - 1).W))

// // //   val multiplierRegs = Seq.fill(blockSize)(Module(new Multiplier(m)).io)
// // //   for (i <- 0 until blockSize) {
// // //     multiplierRegs(i).a := io.man_a(i)
// // //     multiplierRegs(i).b := io.man_b(i)
// // //     dotProductRegs(i) := multiplierRegs(i).result
// // //   }

// // //   accumulator := dotProductRegs.reduce(_+_)

// // //   io.result := accumulator(2 * m + blockSize - 2) ## exp_output ## accumulator(m - 2, 0)
// // // }

// // // class Multiplier(m: Int) extends Module {
// // //   val io = IO(new Bundle {
// // //     val a = Input(SInt(m.W))
// // //     val b = Input(SInt(m.W))
// // //     val result = Output(SInt((2 * m).W))
// // //   })

// // //   io.result := RegNext(io.a * io.b)
// // // }

// // // object HbfpMain extends App {
// // //   emitVerilog(new Hbfp(16, 6, 8))
// // // }

// // // VERSION:4 (Registers at each multiplication) (Will require 3 clock cycles)
// // // import chisel3._
// // // import chisel3.util._

// // // class Hbfp(blockSize: Int, m: Int, e: Int) extends Module {
// // //   val io = IO(new Bundle {
// // //     val man_a = Input(Vec(blockSize, SInt(m.W)))
// // //     val man_b = Input(Vec(blockSize, SInt(m.W)))
// // //     val exp_a = Input(UInt(e.W))
// // //     val exp_b = Input(UInt(e.W))
// // //     val result = Output(UInt((m + e).W))
// // //   })

// // //   val exp_a = io.exp_a
// // //   val exp_b = io.exp_b
// // //   val exp_output = Wire(UInt(e.W))
// // //   exp_output := exp_a + exp_b

// // //   val dotProductRegs = Seq.fill(blockSize)(RegInit(0.S((2 * m).W)))
// // //   val accumulator = RegInit(0.S((2 * m + blockSize - 1).W))

// // //   for (i <- 0 until blockSize) {
// // //     val multiplierReg = RegInit(0.S(m.W))
// // //     multiplierReg := io.man_a(i)
// // //     dotProductRegs(i) := multiplierReg * io.man_b(i)
// // //   }

// // //   accumulator := dotProductRegs.reduce(_ +& _)

// // //   io.result := accumulator(2 * m + blockSize - 2) ## exp_output ## accumulator(m - 2, 0)
// // // }


// // // VERSION:5 (seperate sign and signed magnitude representation) (Will require 7 clock cycles)
// import chisel3._
// import chisel3.util._
// import chisel3.util.Reverse

// class Hbfp(blockSize: Int, m: Int, e: Int) extends Module {
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
  
//   acc := two_complement_buffer.reduce(_+&_)
//   acc_buf := acc.asUInt


//   acc_hbfp := Mux(acc(2*m+blockSize-1).asUInt===1.U, ~(0.U ## acc_buf(2*m+blockSize-2, 0)) + 1.U, acc_buf)
//   val right_shift = RegInit(0.U(8.W))
//   val actual_shift = RegInit(0.U(8.W))
//   val buf = 0.U ## Reverse{acc_hbfp(2*m+blockSize-2, m)}

//   right_shift := PriorityEncoder(buf)  

//   actual_shift := ((2*m+blockSize-2).asUInt - right_shift) - (m-1).U
  
//   val man_out_shifted = acc_hbfp >> (actual_shift)
//   val exp_actual = Wire(UInt((e+2).W))
//   exp_actual := exp_output +& actual_shift

//   io.result := acc(2*m+blockSize-1).asUInt ## exp_actual(e+1, 2) ## man_out_shifted(m - 1, 0)
//   // io.result := acc_hbfp(2*m+blockSize-1) ## exp_output ## acc_hbfp(m - 1, 0)
// }

// object HbfpMain extends App {
//   emitVerilog(new Hbfp(16, 5, 8))
// }




// // // VERSION:6 MANTISSA MAX (seperate sign and signed magnitude representation) (Will require 7 clock cycles)
// import chisel3._
// import chisel3.util._
// import chisel3.util.Reverse

// class Hbfp(blockSize: Int, m: Int, e: Int) extends Module {
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

//   val dotProductRegs = Seq.fill(blockSize)(RegInit(0.U((m).W)))
//   val two_complement_buffer = Seq.fill(blockSize)(RegInit(0.S((m + 1).W)))
//   val two_complement = Seq.fill(blockSize)(RegInit(0.U((m + 1).W)))
//   val signs = Seq.fill(blockSize)(RegInit(0.U(1.W)))

//   val acc_hbfp = RegInit(0.U((m+1).W))



//   for (i <- 0 until blockSize) {
//     val multiplierReg = RegInit(0.U(m.W))
//     val signReg = RegInit(0.U(1.W))
//     signReg := io.sign_a(i)
//     multiplierReg := io.man_a(i)
//     val multiplication = (multiplierReg * io.man_b(i))
//     dotProductRegs(i) := Mux(multiplication > (2<<m-1).U - 1.U, (2<<m-1).U - 1.U, multiplication)
//     signs(i) := signReg ^ io.sign_b(i)
//     two_complement(i) := Mux(signs(i)===1.U, (~(0.U ## dotProductRegs(i)) + 1.U), (0.U ## dotProductRegs(i)))
//     two_complement_buffer(i) := two_complement(i).asSInt
//   }
  
//   val sum = two_complement_buffer.reduce(_+&_)



//   acc_hbfp := Mux(sum(m+blockSize-1).asUInt===1.U, Mux((~sum(m+blockSize-2,0).asUInt + 1.U) > (2<<m-1).U - 1.U, (2<<m).U - 1.U, ~(0.U ## sum(m+blockSize-2, 0).asUInt) + 1.U), 
//   Mux(sum(m+blockSize-2, 0).asUInt > (2<<m-1).U - 1.U, (2<<m-1).U - 1.U, 0.U ## sum(m+blockSize-2,0).asUInt))


//   io.result := acc_hbfp(m).asUInt ## exp_output(e, 1) ## acc_hbfp(m-1,0)

// }

// object HbfpMain extends App {
//   emitVerilog(new Hbfp(16, 5, 8))
// }





// // // VERSION 7: USELESS
// import chisel3._
// import chisel3.util._
// import chisel3.util.Reverse

// class Hbfp(blockSize: Int, m: Int, e: Int) extends Module {
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

// //   val dotProductRegs = Seq.fill(blockSize)(RegInit(0.U((2 * m).W)))
//   val two_complement_buffer = Seq.fill(blockSize)(RegInit(0.S((2 * m + 1).W)))
// //   val two_complement = Seq.fill(blockSize)(RegInit(0.U((2 * m + 1).W)))
//   val signs = Seq.fill(blockSize)(RegInit(0.U(1.W)))
//   val acc = RegInit(0.S((2*m+blockSize).W))
//   val acc_hbfp = RegInit(0.U((2*m+blockSize).W))
//   val acc_buf = RegInit(0.U((2*m+blockSize).W))


//   for (i <- 0 until blockSize) {
//     val multiplication = io.man_a(i) * io.man_b(i)
//     val sign = RegInit(0.U(1.W))
//     sign := io.man_a(i) ^ io.man_b(i)
//     val in_two_compliment = Mux(sign===1.U, (~(0.U ## multiplication) + 1.U), (0.U ## multiplication))
//     two_complement_buffer(i) := in_two_compliment.asSInt
//   }
  
//   acc := two_complement_buffer.reduce(_+&_)
//   acc_buf := acc.asUInt


//   acc_hbfp := Mux(acc(2*m+blockSize-1).asUInt===1.U, ~(0.U ## acc_buf(2*m+blockSize-2, 0)) + 1.U, acc_buf)
//   val right_shift = RegInit(0.U(8.W))
//   val actual_shift = RegInit(0.U(8.W))
//   val buf = 0.U ## Reverse{acc_hbfp(2*m+blockSize-2, m)}

//   right_shift := PriorityEncoder(buf)  

//   actual_shift := ((2*m+blockSize-2).asUInt - right_shift) - (m-1).U
  
//   val man_out_shifted = acc_hbfp >> (actual_shift)
//   val exp_actual = Wire(UInt((e+2).W))
//   exp_actual := exp_output +& actual_shift

//   io.result := acc(2*m+blockSize-1).asUInt ## exp_actual(e+1, 2) ## man_out_shifted(m - 1, 0)
//   // io.result := acc_hbfp(2*m+blockSize-1) ## exp_output ## acc_hbfp(m - 1, 0)
// }

// object HbfpMain extends App {
//   emitVerilog(new Hbfp(16, 5, 8))
// }
