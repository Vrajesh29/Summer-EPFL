// import chisel3._
// import chisel3.util._
// import chisel3.util.Reverse


// case class hbfp(blockSize: Int, m:Int, e:Int) extends Bundle{
//     val man = Input(Vec(blockSize, UInt(m.W)))
//     val sign = Input(Vec(blockSize, UInt(1.W)))
//     val exp = Input(UInt(e.W))
// }


// class hbfp_mac(blockSize: Int, m: Int, e: Int) extends Module{
//     val io = IO(new Bundle {
//         val in = Input(new Bundle {
//             val a = new hbfp(blockSize, m, e)
//             val b = new hbfp(blockSize, m, e)
//         })
//         val out = Output(new Bundle {
//             val result = new hbfp(blockSize, m, e)
//         })
//     })

//     val exp_output = Wire(UInt((e+1).W))

//     exp_output := io.in.a.exp +& io.in.b.exp

//     val dotProductRegs = Seq.fill(blockSize)(RegInit(0.U((2 * m).W)))
//     val two_complement_buffer = Seq.fill(blockSize)(RegInit(0.S((2 * m + 1).W)))
//     val signs = Seq.fill(blockSize)(RegInit(0.U(1.W)))
//     val acc_hbfp = RegInit(0.U((2*m+blockSize).W))
//     val acc_buf = RegInit(0.U((2*m+blockSize).W))

//     for (i <- 0 until blockSize){
//         signs(i) := io.in.a.sign(i) ^ io.in.b.sign(i)
//         dotProductRegs(i) := io.in.a.man(i) * io.in.b.man(i)
//         two_complement_buffer(i) := Mux(signs(i) === 1.U, (~(0.U ## dotProductRegs(i)) + 1.U), (0.U ## dotProductRegs(i))).asSInt
//     }

//     acc_buf := two_complement_buffer.reduce(_ +& _).asUInt

//     acc_hbfp := Mux(acc_buf(2*m+blockSize-1).asUInt===1.U, ~(0.U ## acc_buf(2*m+blockSize-2, 0)) + 1.U, acc_buf)
//     val right_shift = RegInit(0.U(8.W))
//     val actual_shift = RegInit(0.U(8.W))
//     val buf = 0.U ## Reverse{acc_hbfp(2*m+blockSize-2, m)}

//     right_shift := PriorityEncoder(buf)  

//     actual_shift := ((2*m+blockSize-2).asUInt - right_shift) - (m-1).U
  
//     val man_out_shifted = acc_hbfp >> (actual_shift)
//     val exp_actual = Wire(UInt((e+2).W))
//     exp_actual := exp_output +& actual_shift

//     io.out.result.exp := exp_actual(e+1,2)
//     io.out.result.sign := acc_hbfp(2*m+blockSize-1)
//     io.out.result.man := man_out_shifted(m - 1, 0)

// }

// class hbfp_mac_wrapper(blockSize: Int, m: Int, e: Int) extends Module{
//     val io = IO(new Bundle {
//         val in = Input(new Bundle {
//             val a = new hbfp(blockSize, m, e)
//             val b = new hbfp(blockSize, m, e)
//         })
//         val out = Output(new Bundle {
//             val result = new hbfp(blockSize, m, e)
//         })
//     })

//     val mac = Module(new hbfp_mac(blockSize, m, e))

//     mac.io.in.a := io.in.a
//     mac.io.in.b := io.in.b

//     io.out.result := mac.io.out.result
// }