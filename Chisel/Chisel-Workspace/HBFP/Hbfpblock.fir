circuit Hbfpblock :
  module Hbfpblock :
    input clock : Clock
    input reset : UInt<1>
    output io : { flip man_a : SInt<6>[16], flip man_b : SInt<6>[16], flip exp_a : UInt<8>[4], flip exp_b : UInt<8>[4], result : UInt<14>}

    wire exp_output : UInt<8>[4] @[block_division.scala 15:24]
    wire dotProducts_0 : SInt<12> @[block_division.scala 18:64]
    wire dotProducts_1 : SInt<12> @[block_division.scala 18:64]
    wire dotProducts_2 : SInt<12> @[block_division.scala 18:64]
    wire dotProducts_3 : SInt<12> @[block_division.scala 18:64]
    wire shifteddotProducts_0 : SInt<12> @[block_division.scala 19:71]
    wire shifteddotProducts_1 : SInt<12> @[block_division.scala 19:71]
    wire shifteddotProducts_2 : SInt<12> @[block_division.scala 19:71]
    wire shifteddotProducts_3 : SInt<12> @[block_division.scala 19:71]
    reg accumulator : SInt<27>, clock with :
      reset => (reset, asSInt(UInt<27>("h0"))) @[block_division.scala 20:28]
    wire exp_min : UInt<8> @[block_division.scala 21:21]
    reg dotProductRegs : SInt<12>[4], clock with :
      reset => (UInt<1>("h0"), dotProductRegs) @[block_division.scala 23:29]
    node _exp_output_0_T = add(io.exp_a[0], io.exp_b[0]) @[block_division.scala 24:31]
    node _exp_output_0_T_1 = tail(_exp_output_0_T, 1) @[block_division.scala 24:31]
    exp_output[0] <= _exp_output_0_T_1 @[block_division.scala 24:19]
    node _dotProductRegs_0_T = mul(io.man_a[0], io.man_b[0]) @[block_division.scala 26:63]
    dotProductRegs[0] <= _dotProductRegs_0_T @[block_division.scala 26:25]
    node _dotProductRegs_1_T = mul(io.man_a[1], io.man_b[1]) @[block_division.scala 26:63]
    dotProductRegs[1] <= _dotProductRegs_1_T @[block_division.scala 26:25]
    node _dotProductRegs_2_T = mul(io.man_a[2], io.man_b[2]) @[block_division.scala 26:63]
    dotProductRegs[2] <= _dotProductRegs_2_T @[block_division.scala 26:25]
    node _dotProductRegs_3_T = mul(io.man_a[3], io.man_b[3]) @[block_division.scala 26:63]
    dotProductRegs[3] <= _dotProductRegs_3_T @[block_division.scala 26:25]
    node _dotProducts_0_T = add(dotProductRegs[0], dotProductRegs[1]) @[block_division.scala 29:47]
    node _dotProducts_0_T_1 = tail(_dotProducts_0_T, 1) @[block_division.scala 29:47]
    node _dotProducts_0_T_2 = asSInt(_dotProducts_0_T_1) @[block_division.scala 29:47]
    node _dotProducts_0_T_3 = add(_dotProducts_0_T_2, dotProductRegs[2]) @[block_division.scala 29:47]
    node _dotProducts_0_T_4 = tail(_dotProducts_0_T_3, 1) @[block_division.scala 29:47]
    node _dotProducts_0_T_5 = asSInt(_dotProducts_0_T_4) @[block_division.scala 29:47]
    node _dotProducts_0_T_6 = add(_dotProducts_0_T_5, dotProductRegs[3]) @[block_division.scala 29:47]
    node _dotProducts_0_T_7 = tail(_dotProducts_0_T_6, 1) @[block_division.scala 29:47]
    node _dotProducts_0_T_8 = asSInt(_dotProducts_0_T_7) @[block_division.scala 29:47]
    dotProducts_0 <= _dotProducts_0_T_8 @[block_division.scala 29:20]
    reg dotProductRegs_1 : SInt<12>[4], clock with :
      reset => (UInt<1>("h0"), dotProductRegs_1) @[block_division.scala 23:29]
    node _exp_output_1_T = add(io.exp_a[1], io.exp_b[1]) @[block_division.scala 24:31]
    node _exp_output_1_T_1 = tail(_exp_output_1_T, 1) @[block_division.scala 24:31]
    exp_output[1] <= _exp_output_1_T_1 @[block_division.scala 24:19]
    node _dotProductRegs_0_T_1 = mul(io.man_a[4], io.man_b[4]) @[block_division.scala 26:63]
    dotProductRegs_1[0] <= _dotProductRegs_0_T_1 @[block_division.scala 26:25]
    node _dotProductRegs_1_T_1 = mul(io.man_a[5], io.man_b[5]) @[block_division.scala 26:63]
    dotProductRegs_1[1] <= _dotProductRegs_1_T_1 @[block_division.scala 26:25]
    node _dotProductRegs_2_T_1 = mul(io.man_a[6], io.man_b[6]) @[block_division.scala 26:63]
    dotProductRegs_1[2] <= _dotProductRegs_2_T_1 @[block_division.scala 26:25]
    node _dotProductRegs_3_T_1 = mul(io.man_a[7], io.man_b[7]) @[block_division.scala 26:63]
    dotProductRegs_1[3] <= _dotProductRegs_3_T_1 @[block_division.scala 26:25]
    node _dotProducts_1_T = add(dotProductRegs_1[0], dotProductRegs_1[1]) @[block_division.scala 29:47]
    node _dotProducts_1_T_1 = tail(_dotProducts_1_T, 1) @[block_division.scala 29:47]
    node _dotProducts_1_T_2 = asSInt(_dotProducts_1_T_1) @[block_division.scala 29:47]
    node _dotProducts_1_T_3 = add(_dotProducts_1_T_2, dotProductRegs_1[2]) @[block_division.scala 29:47]
    node _dotProducts_1_T_4 = tail(_dotProducts_1_T_3, 1) @[block_division.scala 29:47]
    node _dotProducts_1_T_5 = asSInt(_dotProducts_1_T_4) @[block_division.scala 29:47]
    node _dotProducts_1_T_6 = add(_dotProducts_1_T_5, dotProductRegs_1[3]) @[block_division.scala 29:47]
    node _dotProducts_1_T_7 = tail(_dotProducts_1_T_6, 1) @[block_division.scala 29:47]
    node _dotProducts_1_T_8 = asSInt(_dotProducts_1_T_7) @[block_division.scala 29:47]
    dotProducts_1 <= _dotProducts_1_T_8 @[block_division.scala 29:20]
    reg dotProductRegs_2 : SInt<12>[4], clock with :
      reset => (UInt<1>("h0"), dotProductRegs_2) @[block_division.scala 23:29]
    node _exp_output_2_T = add(io.exp_a[2], io.exp_b[2]) @[block_division.scala 24:31]
    node _exp_output_2_T_1 = tail(_exp_output_2_T, 1) @[block_division.scala 24:31]
    exp_output[2] <= _exp_output_2_T_1 @[block_division.scala 24:19]
    node _dotProductRegs_0_T_2 = mul(io.man_a[8], io.man_b[8]) @[block_division.scala 26:63]
    dotProductRegs_2[0] <= _dotProductRegs_0_T_2 @[block_division.scala 26:25]
    node _dotProductRegs_1_T_2 = mul(io.man_a[9], io.man_b[9]) @[block_division.scala 26:63]
    dotProductRegs_2[1] <= _dotProductRegs_1_T_2 @[block_division.scala 26:25]
    node _dotProductRegs_2_T_2 = mul(io.man_a[10], io.man_b[10]) @[block_division.scala 26:63]
    dotProductRegs_2[2] <= _dotProductRegs_2_T_2 @[block_division.scala 26:25]
    node _dotProductRegs_3_T_2 = mul(io.man_a[11], io.man_b[11]) @[block_division.scala 26:63]
    dotProductRegs_2[3] <= _dotProductRegs_3_T_2 @[block_division.scala 26:25]
    node _dotProducts_2_T = add(dotProductRegs_2[0], dotProductRegs_2[1]) @[block_division.scala 29:47]
    node _dotProducts_2_T_1 = tail(_dotProducts_2_T, 1) @[block_division.scala 29:47]
    node _dotProducts_2_T_2 = asSInt(_dotProducts_2_T_1) @[block_division.scala 29:47]
    node _dotProducts_2_T_3 = add(_dotProducts_2_T_2, dotProductRegs_2[2]) @[block_division.scala 29:47]
    node _dotProducts_2_T_4 = tail(_dotProducts_2_T_3, 1) @[block_division.scala 29:47]
    node _dotProducts_2_T_5 = asSInt(_dotProducts_2_T_4) @[block_division.scala 29:47]
    node _dotProducts_2_T_6 = add(_dotProducts_2_T_5, dotProductRegs_2[3]) @[block_division.scala 29:47]
    node _dotProducts_2_T_7 = tail(_dotProducts_2_T_6, 1) @[block_division.scala 29:47]
    node _dotProducts_2_T_8 = asSInt(_dotProducts_2_T_7) @[block_division.scala 29:47]
    dotProducts_2 <= _dotProducts_2_T_8 @[block_division.scala 29:20]
    reg dotProductRegs_3 : SInt<12>[4], clock with :
      reset => (UInt<1>("h0"), dotProductRegs_3) @[block_division.scala 23:29]
    node _exp_output_3_T = add(io.exp_a[3], io.exp_b[3]) @[block_division.scala 24:31]
    node _exp_output_3_T_1 = tail(_exp_output_3_T, 1) @[block_division.scala 24:31]
    exp_output[3] <= _exp_output_3_T_1 @[block_division.scala 24:19]
    node _dotProductRegs_0_T_3 = mul(io.man_a[12], io.man_b[12]) @[block_division.scala 26:63]
    dotProductRegs_3[0] <= _dotProductRegs_0_T_3 @[block_division.scala 26:25]
    node _dotProductRegs_1_T_3 = mul(io.man_a[13], io.man_b[13]) @[block_division.scala 26:63]
    dotProductRegs_3[1] <= _dotProductRegs_1_T_3 @[block_division.scala 26:25]
    node _dotProductRegs_2_T_3 = mul(io.man_a[14], io.man_b[14]) @[block_division.scala 26:63]
    dotProductRegs_3[2] <= _dotProductRegs_2_T_3 @[block_division.scala 26:25]
    node _dotProductRegs_3_T_3 = mul(io.man_a[15], io.man_b[15]) @[block_division.scala 26:63]
    dotProductRegs_3[3] <= _dotProductRegs_3_T_3 @[block_division.scala 26:25]
    node _dotProducts_3_T = add(dotProductRegs_3[0], dotProductRegs_3[1]) @[block_division.scala 29:47]
    node _dotProducts_3_T_1 = tail(_dotProducts_3_T, 1) @[block_division.scala 29:47]
    node _dotProducts_3_T_2 = asSInt(_dotProducts_3_T_1) @[block_division.scala 29:47]
    node _dotProducts_3_T_3 = add(_dotProducts_3_T_2, dotProductRegs_3[2]) @[block_division.scala 29:47]
    node _dotProducts_3_T_4 = tail(_dotProducts_3_T_3, 1) @[block_division.scala 29:47]
    node _dotProducts_3_T_5 = asSInt(_dotProducts_3_T_4) @[block_division.scala 29:47]
    node _dotProducts_3_T_6 = add(_dotProducts_3_T_5, dotProductRegs_3[3]) @[block_division.scala 29:47]
    node _dotProducts_3_T_7 = tail(_dotProducts_3_T_6, 1) @[block_division.scala 29:47]
    node _dotProducts_3_T_8 = asSInt(_dotProducts_3_T_7) @[block_division.scala 29:47]
    dotProducts_3 <= _dotProducts_3_T_8 @[block_division.scala 29:20]
    node _exp_min_T = lt(exp_output[0], exp_output[1]) @[block_division.scala 31:48]
    node _exp_min_T_1 = mux(_exp_min_T, exp_output[0], exp_output[1]) @[block_division.scala 31:45]
    node _exp_min_T_2 = lt(_exp_min_T_1, exp_output[2]) @[block_division.scala 31:48]
    node _exp_min_T_3 = mux(_exp_min_T_2, _exp_min_T_1, exp_output[2]) @[block_division.scala 31:45]
    node _exp_min_T_4 = lt(_exp_min_T_3, exp_output[3]) @[block_division.scala 31:48]
    node _exp_min_T_5 = mux(_exp_min_T_4, _exp_min_T_3, exp_output[3]) @[block_division.scala 31:45]
    exp_min <= _exp_min_T_5 @[block_division.scala 31:11]
    node _exp_diff_T = sub(exp_output[0], exp_min) @[block_division.scala 34:34]
    node exp_diff = tail(_exp_diff_T, 1) @[block_division.scala 34:34]
    node _shifteddotProducts_0_T = dshr(dotProducts_0, exp_diff) @[block_division.scala 35:45]
    shifteddotProducts_0 <= _shifteddotProducts_0_T @[block_division.scala 35:27]
    node _exp_diff_T_1 = sub(exp_output[1], exp_min) @[block_division.scala 34:34]
    node exp_diff_1 = tail(_exp_diff_T_1, 1) @[block_division.scala 34:34]
    node _shifteddotProducts_1_T = dshr(dotProducts_1, exp_diff_1) @[block_division.scala 35:45]
    shifteddotProducts_1 <= _shifteddotProducts_1_T @[block_division.scala 35:27]
    node _exp_diff_T_2 = sub(exp_output[2], exp_min) @[block_division.scala 34:34]
    node exp_diff_2 = tail(_exp_diff_T_2, 1) @[block_division.scala 34:34]
    node _shifteddotProducts_2_T = dshr(dotProducts_2, exp_diff_2) @[block_division.scala 35:45]
    shifteddotProducts_2 <= _shifteddotProducts_2_T @[block_division.scala 35:27]
    node _exp_diff_T_3 = sub(exp_output[3], exp_min) @[block_division.scala 34:34]
    node exp_diff_3 = tail(_exp_diff_T_3, 1) @[block_division.scala 34:34]
    node _shifteddotProducts_3_T = dshr(dotProducts_3, exp_diff_3) @[block_division.scala 35:45]
    shifteddotProducts_3 <= _shifteddotProducts_3_T @[block_division.scala 35:27]
    node _accumulator_T = add(shifteddotProducts_0, shifteddotProducts_1) @[block_division.scala 37:45]
    node _accumulator_T_1 = tail(_accumulator_T, 1) @[block_division.scala 37:45]
    node _accumulator_T_2 = asSInt(_accumulator_T_1) @[block_division.scala 37:45]
    node _accumulator_T_3 = add(_accumulator_T_2, shifteddotProducts_2) @[block_division.scala 37:45]
    node _accumulator_T_4 = tail(_accumulator_T_3, 1) @[block_division.scala 37:45]
    node _accumulator_T_5 = asSInt(_accumulator_T_4) @[block_division.scala 37:45]
    node _accumulator_T_6 = add(_accumulator_T_5, shifteddotProducts_3) @[block_division.scala 37:45]
    node _accumulator_T_7 = tail(_accumulator_T_6, 1) @[block_division.scala 37:45]
    node _accumulator_T_8 = asSInt(_accumulator_T_7) @[block_division.scala 37:45]
    accumulator <= _accumulator_T_8 @[block_division.scala 37:15]
    node _io_result_T = bits(accumulator, 26, 26) @[block_division.scala 38:27]
    node _io_result_T_1 = cat(_io_result_T, exp_min) @[block_division.scala 38:51]
    node _io_result_T_2 = bits(accumulator, 4, 0) @[block_division.scala 38:76]
    node _io_result_T_3 = cat(_io_result_T_1, _io_result_T_2) @[block_division.scala 38:62]
    io.result <= _io_result_T_3 @[block_division.scala 38:13]

