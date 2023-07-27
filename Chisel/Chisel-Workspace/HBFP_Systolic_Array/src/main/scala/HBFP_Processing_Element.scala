// A HBFP PE module that takes two blocks hor and ver as input and outputs the MAC of two blocks and pass the blocks to the hor and ver 
// PEs respectively. Note that it is accumulation stationary.

import chisel3._
import chisel3.util._
import chisel3.util.log2Ceil
import chisel3.util.DecoupledIO
import chisel3.util.EnqIO
import chisel3.util.QueueIO
import chisel3.stage.ChiselStage
import scala.sys.process._ 


class HBFP_PE(blockSize: Int, m: Int, e: Int) extends Module{
  val io = IO(new Bundle{
    val in = Input(new Bundle{
      val hor = new HBFP(blockSize, m, e)  // input block from the horizontal to the PE
      val ver = new HBFP(blockSize, m, e)  // input block from the vertical to the PE
    })
    val out = Output(new Bundle {
      val hor = new HBFP(blockSize, m, e) // output block which goes to the next PE in the horizontal direction
      val ver = new HBFP(blockSize, m, e) // output block which goes to the next PE in the vertical direction
      val result = new HBFP_result(m, e) // output block which goes to the adder
    })
    })

    val result_buffer = Reg(new HBFP_result(m, e))  // buffer to store the result of the MAC to avoid the combinational loop

    val mac = Module(new HBFP_MAC(blockSize, m, e))
    mac.io.in.a <> io.in.hor
    mac.io.in.b <> io.in.ver

    val adder = Module(new HBFP_Adder(m, e))
    adder.io.in.a <> mac.io.out.result
    adder.io.in.b <> result_buffer
    result_buffer := adder.io.out.result

    io.out.hor := io.in.hor
    io.out.ver := io.in.ver
    io.out.result := result_buffer

  }