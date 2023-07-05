// import chisel3._
// import chisel3.util._
// import chisel3.util.log2Ceil
// import chisel3.util.DecoupledIO
// import chisel3.util.EnqIO
// import chisel3.util.QueueIO
// import chisel3.stage.ChiselStage
// import java.io.PrintWriter
// import scala.sys.process._


// class FP(m: Int, e: Int) extends Bundle {
//   val sign = UInt(1.W)
//   val man  = UInt(m.W)
//   val exp  = UInt(e.W)
// }


// class FPMult(m: Int, e: Int) extends Module{
//   val io = IO(new Bundle{
//     val in = Input(new Bundle{
//       val a = new FP(m, e)
//       val b = new FP(m, e)
//     })
//     val out = Output(new Bundle{
//       val result = new FP(m, e)
//     })
//   })

//   io.out.result.sign := io.in.a.sign ^ io.in.b.sign
//   io.out.result.exp := io.in.a.exp + io.in.b.exp
//   io.out.result.man := io.in.a.man * io.in.b.man
// }

// class FPAdder(m: Int, e: Int) extends Module{
//   val io = IO(new Bundle{
//     val in = Input(new Bundle{
//       val a = new FP(m, e)
//       val b = new FP(m, e)
//     })
//     val out = Output(new Bundle{
//       val result = new FP(m, e)
//     })
//   })

//   val exp_diff = Mux(io.in.a.exp > io.in.b.exp, io.in.a.exp - io.in.b.exp, io.in.b.exp - io.in.a.exp)

//   io.out.result.sign := Mux(io.in.a.exp > io.in.b.exp, io.in.a.sign, io.in.b.sign)
//   io.out.result.exp := Mux(io.in.a.exp > io.in.b.exp, io.in.a.exp, io.in.b.exp)
//   io.out.result.man := Mux(io.in.a.exp > io.in.b.exp, io.in.a.man + (io.in.b.man >> exp_diff), (io.in.a.man >> exp_diff) + io.in.b.man)

// }



// class PE(m: Int, e: Int) extends Module{
//   val io = IO(new Bundle{
//     val in = Input(new Bundle{
//       val hor = new FP(m, e)
//       val ver = new FP(m, e)
//     })
//     val out = Output(new Bundle {
//       val hor = new FP(m, e)
//       val ver = new FP(m, e)
//       val result = new FP(m, e)
//     })
//     })

//     val result_buffer = Reg(new FP(m, e))
//     val mult_buffer = Reg(new FP(m, e))

//     val fpmult = Module(new FPMult(m, e))
//     fpmult.io.in.a <> io.in.hor
//     fpmult.io.in.b <> io.in.ver

//     val fpadder = Module(new FPAdder(m, e))
//     fpadder.io.in.a <> fpmult.io.out.result
//     fpadder.io.in.b <> result_buffer
//     result_buffer := fpadder.io.out.result

//     io.out.hor := RegNext(io.in.hor)
//     io.out.ver := RegNext(io.in.ver)
//     io.out.result := result_buffer

//   }



// class SystolicArray(n: Int, m: Int, e: Int) extends Module {
//   val io = IO(new Bundle {
//     val in = Input(Vec(n, Vec(n, new Bundle {
//       val hor = new FP(m, e)
//       val ver = new FP(m, e)
//     })))
//     val out = Output(Vec(n, Vec(n, new Bundle {
//       val hor = new FP(m, e)
//       val ver = new FP(m, e)
//       val result = new FP(m, e)
//     })))
//   })

//   val pes = Seq.fill(n, n)(Module(new PE(m, e)))
  


//   for (i <- 0 until n) {
//     for (j <- 0 until n) {
//       pes(i)(0).io.in.hor := io.in(i)(j).hor
//       pes(0)(i).io.in.ver := io.in(j)(i).ver
//     }
//   }

//   // Connect PEs horizontally
//   for (i <- 0 until n) {
//     for (j <- 1 until n) {
//       pes(i)(j).io.in.hor := ShiftRegister(pes(i)(j - 1).io.out.hor, 1)
//     }
//   }

//   // Connect PEs vertically
//   for (i <- 1 until n) {
//     for (j <- 0 until n) {
//       pes(i)(j).io.in.ver := ShiftRegister(pes(i - 1)(j).io.out.ver, 1)
//     }
//   }

//   // Connect outputs
//   for (i <- 0 until n) {
//     for (j <- 0 until n) {
//       io.out(i)(j).hor := pes(i)(j).io.out.hor
//       io.out(i)(j).ver := pes(i)(j).io.out.ver
//       io.out(i)(j).result := pes(i)(j).io.out.result
//     }
//   }
// }






// object SystolicArrayMain extends App {
//   emitVerilog(new SystolicArray(4, 6, 8))
// }




