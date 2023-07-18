import chisel3._
import chisel3.util._
import chisel3.util.log2Ceil
import chisel3.util.DecoupledIO
import chisel3.util.EnqIO
import chisel3.util.QueueIO
import chisel3.stage.ChiselStage
import scala.sys.process._ 

class HBFP_MIXMAN(blockSize: Int, m: Int, e:Int) extends Bundle{
    val sign = Vec(blockSize, UInt(1.W))
    val man = Vec(blockSize, UInt(m.W))
    val exp = UInt(e.W)
}

// HBFP_result bundle will be similar to the FP bundle since it will contain single sign, single man, and single exp
class HBFP_result_MIXMAN(m: Int, e: Int) extends Bundle{
    val sign = UInt(1.W)
    val man = UInt(m.W)
    val exp = UInt(e.W)
}