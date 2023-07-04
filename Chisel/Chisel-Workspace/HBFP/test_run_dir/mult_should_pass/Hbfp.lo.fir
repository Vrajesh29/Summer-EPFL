FIRRTL version 1.1.0
circuit Hbfp :
  module Hbfp :
    input clock : Clock
    input reset : UInt<1>
    input io_man_a_0 : SInt<6>
    input io_man_a_1 : SInt<6>
    input io_man_a_2 : SInt<6>
    input io_man_a_3 : SInt<6>
    input io_man_a_4 : SInt<6>
    input io_man_a_5 : SInt<6>
    input io_man_a_6 : SInt<6>
    input io_man_a_7 : SInt<6>
    input io_man_a_8 : SInt<6>
    input io_man_a_9 : SInt<6>
    input io_man_a_10 : SInt<6>
    input io_man_a_11 : SInt<6>
    input io_man_a_12 : SInt<6>
    input io_man_a_13 : SInt<6>
    input io_man_a_14 : SInt<6>
    input io_man_a_15 : SInt<6>
    input io_man_b_0 : SInt<6>
    input io_man_b_1 : SInt<6>
    input io_man_b_2 : SInt<6>
    input io_man_b_3 : SInt<6>
    input io_man_b_4 : SInt<6>
    input io_man_b_5 : SInt<6>
    input io_man_b_6 : SInt<6>
    input io_man_b_7 : SInt<6>
    input io_man_b_8 : SInt<6>
    input io_man_b_9 : SInt<6>
    input io_man_b_10 : SInt<6>
    input io_man_b_11 : SInt<6>
    input io_man_b_12 : SInt<6>
    input io_man_b_13 : SInt<6>
    input io_man_b_14 : SInt<6>
    input io_man_b_15 : SInt<6>
    input io_exp_a : UInt<8>
    input io_exp_b : UInt<8>
    output io_result : UInt<14>

    node _exp_output_T = add(io_exp_a, io_exp_b) @[hbfp.scala 150:23]
    node _exp_output_T_1 = tail(_exp_output_T, 1) @[hbfp.scala 150:23]
    reg dotProductRegs_0 : SInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_0) @[hbfp.scala 152:51]
    reg dotProductRegs_1 : SInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_1) @[hbfp.scala 152:51]
    reg dotProductRegs_2 : SInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_2) @[hbfp.scala 152:51]
    reg dotProductRegs_3 : SInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_3) @[hbfp.scala 152:51]
    reg dotProductRegs_4 : SInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_4) @[hbfp.scala 152:51]
    reg dotProductRegs_5 : SInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_5) @[hbfp.scala 152:51]
    reg dotProductRegs_6 : SInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_6) @[hbfp.scala 152:51]
    reg dotProductRegs_7 : SInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_7) @[hbfp.scala 152:51]
    reg dotProductRegs_8 : SInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_8) @[hbfp.scala 152:51]
    reg dotProductRegs_9 : SInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_9) @[hbfp.scala 152:51]
    reg dotProductRegs_10 : SInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_10) @[hbfp.scala 152:51]
    reg dotProductRegs_11 : SInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_11) @[hbfp.scala 152:51]
    reg dotProductRegs_12 : SInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_12) @[hbfp.scala 152:51]
    reg dotProductRegs_13 : SInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_13) @[hbfp.scala 152:51]
    reg dotProductRegs_14 : SInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_14) @[hbfp.scala 152:51]
    reg dotProductRegs_15 : SInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_15) @[hbfp.scala 152:51]
    reg accumulator : SInt<27>, clock with :
      reset => (UInt<1>("h0"), accumulator) @[hbfp.scala 153:28]
    reg multiplierReg : SInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg) @[hbfp.scala 156:32]
    node _dotProductRegs_0_T = mul(multiplierReg, io_man_b_0) @[hbfp.scala 158:40]
    reg multiplierReg_1 : SInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_1) @[hbfp.scala 156:32]
    node _dotProductRegs_1_T = mul(multiplierReg_1, io_man_b_1) @[hbfp.scala 158:40]
    reg multiplierReg_2 : SInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_2) @[hbfp.scala 156:32]
    node _dotProductRegs_2_T = mul(multiplierReg_2, io_man_b_2) @[hbfp.scala 158:40]
    reg multiplierReg_3 : SInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_3) @[hbfp.scala 156:32]
    node _dotProductRegs_3_T = mul(multiplierReg_3, io_man_b_3) @[hbfp.scala 158:40]
    reg multiplierReg_4 : SInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_4) @[hbfp.scala 156:32]
    node _dotProductRegs_4_T = mul(multiplierReg_4, io_man_b_4) @[hbfp.scala 158:40]
    reg multiplierReg_5 : SInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_5) @[hbfp.scala 156:32]
    node _dotProductRegs_5_T = mul(multiplierReg_5, io_man_b_5) @[hbfp.scala 158:40]
    reg multiplierReg_6 : SInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_6) @[hbfp.scala 156:32]
    node _dotProductRegs_6_T = mul(multiplierReg_6, io_man_b_6) @[hbfp.scala 158:40]
    reg multiplierReg_7 : SInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_7) @[hbfp.scala 156:32]
    node _dotProductRegs_7_T = mul(multiplierReg_7, io_man_b_7) @[hbfp.scala 158:40]
    reg multiplierReg_8 : SInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_8) @[hbfp.scala 156:32]
    node _dotProductRegs_8_T = mul(multiplierReg_8, io_man_b_8) @[hbfp.scala 158:40]
    reg multiplierReg_9 : SInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_9) @[hbfp.scala 156:32]
    node _dotProductRegs_9_T = mul(multiplierReg_9, io_man_b_9) @[hbfp.scala 158:40]
    reg multiplierReg_10 : SInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_10) @[hbfp.scala 156:32]
    node _dotProductRegs_10_T = mul(multiplierReg_10, io_man_b_10) @[hbfp.scala 158:40]
    reg multiplierReg_11 : SInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_11) @[hbfp.scala 156:32]
    node _dotProductRegs_11_T = mul(multiplierReg_11, io_man_b_11) @[hbfp.scala 158:40]
    reg multiplierReg_12 : SInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_12) @[hbfp.scala 156:32]
    node _dotProductRegs_12_T = mul(multiplierReg_12, io_man_b_12) @[hbfp.scala 158:40]
    reg multiplierReg_13 : SInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_13) @[hbfp.scala 156:32]
    node _dotProductRegs_13_T = mul(multiplierReg_13, io_man_b_13) @[hbfp.scala 158:40]
    reg multiplierReg_14 : SInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_14) @[hbfp.scala 156:32]
    node _dotProductRegs_14_T = mul(multiplierReg_14, io_man_b_14) @[hbfp.scala 158:40]
    reg multiplierReg_15 : SInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_15) @[hbfp.scala 156:32]
    node _dotProductRegs_15_T = mul(multiplierReg_15, io_man_b_15) @[hbfp.scala 158:40]
    node _accumulator_T = add(dotProductRegs_0, dotProductRegs_1) @[hbfp.scala 161:42]
    node _accumulator_T_1 = add(_accumulator_T, dotProductRegs_2) @[hbfp.scala 161:42]
    node _accumulator_T_2 = add(_accumulator_T_1, dotProductRegs_3) @[hbfp.scala 161:42]
    node _accumulator_T_3 = add(_accumulator_T_2, dotProductRegs_4) @[hbfp.scala 161:42]
    node _accumulator_T_4 = add(_accumulator_T_3, dotProductRegs_5) @[hbfp.scala 161:42]
    node _accumulator_T_5 = add(_accumulator_T_4, dotProductRegs_6) @[hbfp.scala 161:42]
    node _accumulator_T_6 = add(_accumulator_T_5, dotProductRegs_7) @[hbfp.scala 161:42]
    node _accumulator_T_7 = add(_accumulator_T_6, dotProductRegs_8) @[hbfp.scala 161:42]
    node _accumulator_T_8 = add(_accumulator_T_7, dotProductRegs_9) @[hbfp.scala 161:42]
    node _accumulator_T_9 = add(_accumulator_T_8, dotProductRegs_10) @[hbfp.scala 161:42]
    node _accumulator_T_10 = add(_accumulator_T_9, dotProductRegs_11) @[hbfp.scala 161:42]
    node _accumulator_T_11 = add(_accumulator_T_10, dotProductRegs_12) @[hbfp.scala 161:42]
    node _accumulator_T_12 = add(_accumulator_T_11, dotProductRegs_13) @[hbfp.scala 161:42]
    node _accumulator_T_13 = add(_accumulator_T_12, dotProductRegs_14) @[hbfp.scala 161:42]
    node _accumulator_T_14 = add(_accumulator_T_13, dotProductRegs_15) @[hbfp.scala 161:42]
    node _io_result_T = bits(accumulator, 26, 26) @[hbfp.scala 163:27]
    node exp_output = _exp_output_T_1 @[hbfp.scala 149:24 150:14]
    node _io_result_T_1 = cat(_io_result_T, exp_output) @[hbfp.scala 163:51]
    node _io_result_T_2 = bits(accumulator, 4, 0) @[hbfp.scala 163:79]
    node _io_result_T_3 = cat(_io_result_T_1, _io_result_T_2) @[hbfp.scala 163:65]
    io_result <= _io_result_T_3 @[hbfp.scala 163:13]
    dotProductRegs_0 <= mux(reset, asSInt(UInt<12>("h0")), _dotProductRegs_0_T) @[hbfp.scala 152:{51,51} 158:23]
    dotProductRegs_1 <= mux(reset, asSInt(UInt<12>("h0")), _dotProductRegs_1_T) @[hbfp.scala 152:{51,51} 158:23]
    dotProductRegs_2 <= mux(reset, asSInt(UInt<12>("h0")), _dotProductRegs_2_T) @[hbfp.scala 152:{51,51} 158:23]
    dotProductRegs_3 <= mux(reset, asSInt(UInt<12>("h0")), _dotProductRegs_3_T) @[hbfp.scala 152:{51,51} 158:23]
    dotProductRegs_4 <= mux(reset, asSInt(UInt<12>("h0")), _dotProductRegs_4_T) @[hbfp.scala 152:{51,51} 158:23]
    dotProductRegs_5 <= mux(reset, asSInt(UInt<12>("h0")), _dotProductRegs_5_T) @[hbfp.scala 152:{51,51} 158:23]
    dotProductRegs_6 <= mux(reset, asSInt(UInt<12>("h0")), _dotProductRegs_6_T) @[hbfp.scala 152:{51,51} 158:23]
    dotProductRegs_7 <= mux(reset, asSInt(UInt<12>("h0")), _dotProductRegs_7_T) @[hbfp.scala 152:{51,51} 158:23]
    dotProductRegs_8 <= mux(reset, asSInt(UInt<12>("h0")), _dotProductRegs_8_T) @[hbfp.scala 152:{51,51} 158:23]
    dotProductRegs_9 <= mux(reset, asSInt(UInt<12>("h0")), _dotProductRegs_9_T) @[hbfp.scala 152:{51,51} 158:23]
    dotProductRegs_10 <= mux(reset, asSInt(UInt<12>("h0")), _dotProductRegs_10_T) @[hbfp.scala 152:{51,51} 158:23]
    dotProductRegs_11 <= mux(reset, asSInt(UInt<12>("h0")), _dotProductRegs_11_T) @[hbfp.scala 152:{51,51} 158:23]
    dotProductRegs_12 <= mux(reset, asSInt(UInt<12>("h0")), _dotProductRegs_12_T) @[hbfp.scala 152:{51,51} 158:23]
    dotProductRegs_13 <= mux(reset, asSInt(UInt<12>("h0")), _dotProductRegs_13_T) @[hbfp.scala 152:{51,51} 158:23]
    dotProductRegs_14 <= mux(reset, asSInt(UInt<12>("h0")), _dotProductRegs_14_T) @[hbfp.scala 152:{51,51} 158:23]
    dotProductRegs_15 <= mux(reset, asSInt(UInt<12>("h0")), _dotProductRegs_15_T) @[hbfp.scala 152:{51,51} 158:23]
    accumulator <= mux(reset, asSInt(UInt<27>("h0")), _accumulator_T_14) @[hbfp.scala 153:{28,28} 161:15]
    multiplierReg <= mux(reset, asSInt(UInt<6>("h0")), io_man_a_0) @[hbfp.scala 156:{32,32} 157:19]
    multiplierReg_1 <= mux(reset, asSInt(UInt<6>("h0")), io_man_a_1) @[hbfp.scala 156:{32,32} 157:19]
    multiplierReg_2 <= mux(reset, asSInt(UInt<6>("h0")), io_man_a_2) @[hbfp.scala 156:{32,32} 157:19]
    multiplierReg_3 <= mux(reset, asSInt(UInt<6>("h0")), io_man_a_3) @[hbfp.scala 156:{32,32} 157:19]
    multiplierReg_4 <= mux(reset, asSInt(UInt<6>("h0")), io_man_a_4) @[hbfp.scala 156:{32,32} 157:19]
    multiplierReg_5 <= mux(reset, asSInt(UInt<6>("h0")), io_man_a_5) @[hbfp.scala 156:{32,32} 157:19]
    multiplierReg_6 <= mux(reset, asSInt(UInt<6>("h0")), io_man_a_6) @[hbfp.scala 156:{32,32} 157:19]
    multiplierReg_7 <= mux(reset, asSInt(UInt<6>("h0")), io_man_a_7) @[hbfp.scala 156:{32,32} 157:19]
    multiplierReg_8 <= mux(reset, asSInt(UInt<6>("h0")), io_man_a_8) @[hbfp.scala 156:{32,32} 157:19]
    multiplierReg_9 <= mux(reset, asSInt(UInt<6>("h0")), io_man_a_9) @[hbfp.scala 156:{32,32} 157:19]
    multiplierReg_10 <= mux(reset, asSInt(UInt<6>("h0")), io_man_a_10) @[hbfp.scala 156:{32,32} 157:19]
    multiplierReg_11 <= mux(reset, asSInt(UInt<6>("h0")), io_man_a_11) @[hbfp.scala 156:{32,32} 157:19]
    multiplierReg_12 <= mux(reset, asSInt(UInt<6>("h0")), io_man_a_12) @[hbfp.scala 156:{32,32} 157:19]
    multiplierReg_13 <= mux(reset, asSInt(UInt<6>("h0")), io_man_a_13) @[hbfp.scala 156:{32,32} 157:19]
    multiplierReg_14 <= mux(reset, asSInt(UInt<6>("h0")), io_man_a_14) @[hbfp.scala 156:{32,32} 157:19]
    multiplierReg_15 <= mux(reset, asSInt(UInt<6>("h0")), io_man_a_15) @[hbfp.scala 156:{32,32} 157:19]
