circuit Hbfp :
  module Hbfp :
    input clock : Clock
    input reset : UInt<1>
    output io : { flip man_a : SInt<6>[16], flip man_b : SInt<6>[16], flip exp_a : UInt<8>, flip exp_b : UInt<8>, result : UInt<14>}

    wire exp_output : UInt<8> @[hbfp.scala 149:24]
    node _exp_output_T = add(io.exp_a, io.exp_b) @[hbfp.scala 150:23]
    node _exp_output_T_1 = tail(_exp_output_T, 1) @[hbfp.scala 150:23]
    exp_output <= _exp_output_T_1 @[hbfp.scala 150:14]
    reg dotProductRegs_0 : SInt<12>, clock with :
      reset => (reset, asSInt(UInt<12>("h0"))) @[hbfp.scala 152:51]
    reg dotProductRegs_1 : SInt<12>, clock with :
      reset => (reset, asSInt(UInt<12>("h0"))) @[hbfp.scala 152:51]
    reg dotProductRegs_2 : SInt<12>, clock with :
      reset => (reset, asSInt(UInt<12>("h0"))) @[hbfp.scala 152:51]
    reg dotProductRegs_3 : SInt<12>, clock with :
      reset => (reset, asSInt(UInt<12>("h0"))) @[hbfp.scala 152:51]
    reg dotProductRegs_4 : SInt<12>, clock with :
      reset => (reset, asSInt(UInt<12>("h0"))) @[hbfp.scala 152:51]
    reg dotProductRegs_5 : SInt<12>, clock with :
      reset => (reset, asSInt(UInt<12>("h0"))) @[hbfp.scala 152:51]
    reg dotProductRegs_6 : SInt<12>, clock with :
      reset => (reset, asSInt(UInt<12>("h0"))) @[hbfp.scala 152:51]
    reg dotProductRegs_7 : SInt<12>, clock with :
      reset => (reset, asSInt(UInt<12>("h0"))) @[hbfp.scala 152:51]
    reg dotProductRegs_8 : SInt<12>, clock with :
      reset => (reset, asSInt(UInt<12>("h0"))) @[hbfp.scala 152:51]
    reg dotProductRegs_9 : SInt<12>, clock with :
      reset => (reset, asSInt(UInt<12>("h0"))) @[hbfp.scala 152:51]
    reg dotProductRegs_10 : SInt<12>, clock with :
      reset => (reset, asSInt(UInt<12>("h0"))) @[hbfp.scala 152:51]
    reg dotProductRegs_11 : SInt<12>, clock with :
      reset => (reset, asSInt(UInt<12>("h0"))) @[hbfp.scala 152:51]
    reg dotProductRegs_12 : SInt<12>, clock with :
      reset => (reset, asSInt(UInt<12>("h0"))) @[hbfp.scala 152:51]
    reg dotProductRegs_13 : SInt<12>, clock with :
      reset => (reset, asSInt(UInt<12>("h0"))) @[hbfp.scala 152:51]
    reg dotProductRegs_14 : SInt<12>, clock with :
      reset => (reset, asSInt(UInt<12>("h0"))) @[hbfp.scala 152:51]
    reg dotProductRegs_15 : SInt<12>, clock with :
      reset => (reset, asSInt(UInt<12>("h0"))) @[hbfp.scala 152:51]
    reg accumulator : SInt<27>, clock with :
      reset => (reset, asSInt(UInt<27>("h0"))) @[hbfp.scala 153:28]
    reg multiplierReg : SInt<6>, clock with :
      reset => (reset, asSInt(UInt<6>("h0"))) @[hbfp.scala 156:32]
    multiplierReg <= io.man_a[0] @[hbfp.scala 157:19]
    node _dotProductRegs_0_T = mul(multiplierReg, io.man_b[0]) @[hbfp.scala 158:40]
    dotProductRegs_0 <= _dotProductRegs_0_T @[hbfp.scala 158:23]
    reg multiplierReg_1 : SInt<6>, clock with :
      reset => (reset, asSInt(UInt<6>("h0"))) @[hbfp.scala 156:32]
    multiplierReg_1 <= io.man_a[1] @[hbfp.scala 157:19]
    node _dotProductRegs_1_T = mul(multiplierReg_1, io.man_b[1]) @[hbfp.scala 158:40]
    dotProductRegs_1 <= _dotProductRegs_1_T @[hbfp.scala 158:23]
    reg multiplierReg_2 : SInt<6>, clock with :
      reset => (reset, asSInt(UInt<6>("h0"))) @[hbfp.scala 156:32]
    multiplierReg_2 <= io.man_a[2] @[hbfp.scala 157:19]
    node _dotProductRegs_2_T = mul(multiplierReg_2, io.man_b[2]) @[hbfp.scala 158:40]
    dotProductRegs_2 <= _dotProductRegs_2_T @[hbfp.scala 158:23]
    reg multiplierReg_3 : SInt<6>, clock with :
      reset => (reset, asSInt(UInt<6>("h0"))) @[hbfp.scala 156:32]
    multiplierReg_3 <= io.man_a[3] @[hbfp.scala 157:19]
    node _dotProductRegs_3_T = mul(multiplierReg_3, io.man_b[3]) @[hbfp.scala 158:40]
    dotProductRegs_3 <= _dotProductRegs_3_T @[hbfp.scala 158:23]
    reg multiplierReg_4 : SInt<6>, clock with :
      reset => (reset, asSInt(UInt<6>("h0"))) @[hbfp.scala 156:32]
    multiplierReg_4 <= io.man_a[4] @[hbfp.scala 157:19]
    node _dotProductRegs_4_T = mul(multiplierReg_4, io.man_b[4]) @[hbfp.scala 158:40]
    dotProductRegs_4 <= _dotProductRegs_4_T @[hbfp.scala 158:23]
    reg multiplierReg_5 : SInt<6>, clock with :
      reset => (reset, asSInt(UInt<6>("h0"))) @[hbfp.scala 156:32]
    multiplierReg_5 <= io.man_a[5] @[hbfp.scala 157:19]
    node _dotProductRegs_5_T = mul(multiplierReg_5, io.man_b[5]) @[hbfp.scala 158:40]
    dotProductRegs_5 <= _dotProductRegs_5_T @[hbfp.scala 158:23]
    reg multiplierReg_6 : SInt<6>, clock with :
      reset => (reset, asSInt(UInt<6>("h0"))) @[hbfp.scala 156:32]
    multiplierReg_6 <= io.man_a[6] @[hbfp.scala 157:19]
    node _dotProductRegs_6_T = mul(multiplierReg_6, io.man_b[6]) @[hbfp.scala 158:40]
    dotProductRegs_6 <= _dotProductRegs_6_T @[hbfp.scala 158:23]
    reg multiplierReg_7 : SInt<6>, clock with :
      reset => (reset, asSInt(UInt<6>("h0"))) @[hbfp.scala 156:32]
    multiplierReg_7 <= io.man_a[7] @[hbfp.scala 157:19]
    node _dotProductRegs_7_T = mul(multiplierReg_7, io.man_b[7]) @[hbfp.scala 158:40]
    dotProductRegs_7 <= _dotProductRegs_7_T @[hbfp.scala 158:23]
    reg multiplierReg_8 : SInt<6>, clock with :
      reset => (reset, asSInt(UInt<6>("h0"))) @[hbfp.scala 156:32]
    multiplierReg_8 <= io.man_a[8] @[hbfp.scala 157:19]
    node _dotProductRegs_8_T = mul(multiplierReg_8, io.man_b[8]) @[hbfp.scala 158:40]
    dotProductRegs_8 <= _dotProductRegs_8_T @[hbfp.scala 158:23]
    reg multiplierReg_9 : SInt<6>, clock with :
      reset => (reset, asSInt(UInt<6>("h0"))) @[hbfp.scala 156:32]
    multiplierReg_9 <= io.man_a[9] @[hbfp.scala 157:19]
    node _dotProductRegs_9_T = mul(multiplierReg_9, io.man_b[9]) @[hbfp.scala 158:40]
    dotProductRegs_9 <= _dotProductRegs_9_T @[hbfp.scala 158:23]
    reg multiplierReg_10 : SInt<6>, clock with :
      reset => (reset, asSInt(UInt<6>("h0"))) @[hbfp.scala 156:32]
    multiplierReg_10 <= io.man_a[10] @[hbfp.scala 157:19]
    node _dotProductRegs_10_T = mul(multiplierReg_10, io.man_b[10]) @[hbfp.scala 158:40]
    dotProductRegs_10 <= _dotProductRegs_10_T @[hbfp.scala 158:23]
    reg multiplierReg_11 : SInt<6>, clock with :
      reset => (reset, asSInt(UInt<6>("h0"))) @[hbfp.scala 156:32]
    multiplierReg_11 <= io.man_a[11] @[hbfp.scala 157:19]
    node _dotProductRegs_11_T = mul(multiplierReg_11, io.man_b[11]) @[hbfp.scala 158:40]
    dotProductRegs_11 <= _dotProductRegs_11_T @[hbfp.scala 158:23]
    reg multiplierReg_12 : SInt<6>, clock with :
      reset => (reset, asSInt(UInt<6>("h0"))) @[hbfp.scala 156:32]
    multiplierReg_12 <= io.man_a[12] @[hbfp.scala 157:19]
    node _dotProductRegs_12_T = mul(multiplierReg_12, io.man_b[12]) @[hbfp.scala 158:40]
    dotProductRegs_12 <= _dotProductRegs_12_T @[hbfp.scala 158:23]
    reg multiplierReg_13 : SInt<6>, clock with :
      reset => (reset, asSInt(UInt<6>("h0"))) @[hbfp.scala 156:32]
    multiplierReg_13 <= io.man_a[13] @[hbfp.scala 157:19]
    node _dotProductRegs_13_T = mul(multiplierReg_13, io.man_b[13]) @[hbfp.scala 158:40]
    dotProductRegs_13 <= _dotProductRegs_13_T @[hbfp.scala 158:23]
    reg multiplierReg_14 : SInt<6>, clock with :
      reset => (reset, asSInt(UInt<6>("h0"))) @[hbfp.scala 156:32]
    multiplierReg_14 <= io.man_a[14] @[hbfp.scala 157:19]
    node _dotProductRegs_14_T = mul(multiplierReg_14, io.man_b[14]) @[hbfp.scala 158:40]
    dotProductRegs_14 <= _dotProductRegs_14_T @[hbfp.scala 158:23]
    reg multiplierReg_15 : SInt<6>, clock with :
      reset => (reset, asSInt(UInt<6>("h0"))) @[hbfp.scala 156:32]
    multiplierReg_15 <= io.man_a[15] @[hbfp.scala 157:19]
    node _dotProductRegs_15_T = mul(multiplierReg_15, io.man_b[15]) @[hbfp.scala 158:40]
    dotProductRegs_15 <= _dotProductRegs_15_T @[hbfp.scala 158:23]
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
    accumulator <= _accumulator_T_14 @[hbfp.scala 161:15]
    node _io_result_T = bits(accumulator, 26, 26) @[hbfp.scala 163:27]
    node _io_result_T_1 = cat(_io_result_T, exp_output) @[hbfp.scala 163:51]
    node _io_result_T_2 = bits(accumulator, 4, 0) @[hbfp.scala 163:79]
    node _io_result_T_3 = cat(_io_result_T_1, _io_result_T_2) @[hbfp.scala 163:65]
    io.result <= _io_result_T_3 @[hbfp.scala 163:13]

