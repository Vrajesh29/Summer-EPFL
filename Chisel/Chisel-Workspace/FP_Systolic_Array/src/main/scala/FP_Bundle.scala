// A bundle for FP data-type. The same bundle will be used for Inputs and Outputs.

import chisel3._
import chisel3.util._
import chisel3.util.log2Ceil
import chisel3.util.DecoupledIO
import chisel3.util.EnqIO
import chisel3.util.QueueIO
import chisel3.stage.ChiselStage
import scala.sys.process._


class FP(m: Int, e: Int) extends Bundle {
  val sign = UInt(1.W)
  val man  = UInt(m.W)
  val exp  = UInt(e.W)
}