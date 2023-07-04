import chisel3._

class HBFP(blockSize: Int, numberOfBlocks: Int, m: Int, e: Int, a: Int, b:Int, totalWidth: Int) extends Module{
  val io = IO(new Bundle{
    val man = Input(Vec(blockSize*numberOfBlocks, Bits(m.W)))
    val exp = Input(Vec(numberOfBlocks, Bits(e.W)))
    val signs = Input(Vec(blockSize*numberOfBlocks, Bits(1.W)))
    val result = Output(Bits(totalWidth.W))
  })
  val man = io.man
  val exp = io.exp
  val signs = io.signs

  val exp_output = Reg(Bits(e.W))
  exp_output := exp(a) + exp(b)
  val result_buf = Reg(Vec(blockSize, Bits((totalWidth+m).W)))
  val finalr = Reg(Bits(totalWidth.W))
  val si = Wire(Bits(1.W))
  val sign_final = Wire(Bits(1.W))
  val mant_total = Wire(Vec(blockSize, Bits((2*m + blockSize).W)))
  val mant_total2 = Wire(Bits((2*m + blockSize).W))
  // val mant_total3 = man(a*blockSize)*man(b*blockSize)
  // mant_total(0) := mant_total3
  mant_total2 := man(a*blockSize)*man(b*blockSize)
  mant_total(0) := man(a*blockSize)*man(b*blockSize)
  si := signs(a*blockSize) ^ signs(b*blockSize)
  for(i <- 1 until blockSize){

    val sa = signs(i+a*blockSize)^signs(i+b*blockSize)
    val ma1 = man(i+a*blockSize)*man(i+b*blockSize)
    val buf = sa ## exp_output ## ma1
    result_buf(i) := buf
    
    // mant_total(i) := Mux(sa === si, ma1, Mux(ma1 > mant_total.reduce(_+_), ))
    mant_total2 := Mux(sa === si, mant_total(i-1) + ma1, Mux(ma1 > mant_total(i-1), ma1 - mant_total(i-1), mant_total(i-1) - ma1))
    mant_total(i) := mant_total2
    // mant_total3 := mant_total2
    // mant_total(i) := mant_total2
    // val flag = Reg(Bool())
    // flag := mant_sum(i) > mant_total(0)
    // val mant_total2 = Mux(check, mant_total + mant_sum(i), Mux(flag, mant_sum(i) - mant_total, mant_total - mant_sum(i)))
    

    // sign_final := Mux(check, si, Mux(flag, sign_sum(i), si))
    sign_final := Mux(ma1 > mant_total(i-1), sa, si)
    // finalr := si ## exp_output ## mant_total(m-1,0)
    

  }
  // val mant_total2 = mant_total.reduce(_+_)
  io.result := sign_final ## exp_output ## (mant_total(blockSize-1))(m-1,0)
  // val mant_sum2 = mant_sum
  // val si = sign_sum(0)
  // println(si)
  

  // for(i <- 1 until blockSize){
  //   // if(si == sign_sum(i)){
  //   //   // println("here")
  //   //   mant_total := mant_total + mant_sum(i)
  //   //   sign_final := si
  //   // }
  //   // val check = Reg(Bool())
  //   val check = si === sign_sum(i)
  //   val flag = Reg(Bool())
  //   flag := mant_sum(i) > mant_total
  //   // val mant_total2 = Mux(check, mant_total + mant_sum(i), Mux(flag, mant_sum(i) - mant_total, mant_total - mant_sum(i)))
  //   val mant_total2 = Mux(check, 1.U((2*m).W) + mant_sum2(0), 0.U((2*m).W))

  //   sign_final := Mux(check, si, Mux(flag, sign_sum(i), si))
  //   si := Mux(flag, sign_sum(i), si)
  //   finalr := sign_final ## exp_output ## mant_total2(m-1,0)
    // else{
    //   val flag = Wire(Bool())
    //   flag := mant_sum(i) > mant_total
    //   if(flag == 1){
    //     mant_total :=  mant_sum(i) - mant_total
    //     sign_final := sign_sum(i)
    //     si := sign_sum(i)
    //   }
    //   else{
    //     mant_total := mant_total - mant_sum(i)
    //     sign_final := si
    //   }
    // }
  // }
  // val mant_total = mant_sum.reduce(_+_)
  // val flag1 = ((mant_total(2*m+blockSize-1)^mant_total(2*m + blockSize - 2)) & mant_total(2*m +blockSize - 2)) === 1.U
  // val flag2 = ((mant_total(2*m+blockSize-1)^mant_total(2*m+blockSize-2)) & ~mant_total(2*m+blockSize-2)) === 1.U
  
  // io.result := Mux(flag1, 0.U ## exp_output ## "b11111".U, mant_total(2*m + blockSize - 2) ## exp_output ## mant_total(m-1, 0))
  // io.result := Mux(flag2, 1.U ## exp_output ## "b00001".U, mant_total(2*m + blockSize - 2) ## exp_output ## mant_total(m-1, 0))
  
  // val man_blocks = Reg(Vec(blockSize, UInt(m.W)))
  // val sign = Reg(Vec(blockSize*numberOfBlocks, UInt(1.W)))
  // val man = Reg(Vec(blockSize*numberOfBlocks, UInt(m.W)))
  // val exp = Reg(Vec(blockSize*numberOfBlocks, UInt(e.W)))
  // for (i<- 0 until blockSize*numberOfBlocks-1){
  //   sign(i) := data(i)(m+e)
  //   man(i) := data(i)(m-1, 0)
  //   exp(i) := data(i)(m+e-1, m)
  // }

}


object HBFPMain extends App {
  emitVerilog(new HBFP(2, 2, 5, 8, 0, 1, 14))
}