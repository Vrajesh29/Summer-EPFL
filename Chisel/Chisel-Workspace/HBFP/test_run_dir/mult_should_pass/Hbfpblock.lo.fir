FIRRTL version 1.1.0
circuit Hbfpblock :
  module Hbfpblock :
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
    input io_exp_a_0 : UInt<8>
    input io_exp_a_1 : UInt<8>
    input io_exp_a_2 : UInt<8>
    input io_exp_a_3 : UInt<8>
    input io_exp_b_0 : UInt<8>
    input io_exp_b_1 : UInt<8>
    input io_exp_b_2 : UInt<8>
    input io_exp_b_3 : UInt<8>
    output io_result : UInt<14>

    reg accumulator : SInt<27>, clock with :
      reset => (UInt<1>("h0"), accumulator) @[block_division.scala 20:28]
    reg dotProductRegs__0 : SInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs__0) @[block_division.scala 25:29]
    reg dotProductRegs__1 : SInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs__1) @[block_division.scala 25:29]
    reg dotProductRegs__2 : SInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs__2) @[block_division.scala 25:29]
    reg dotProductRegs__3 : SInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs__3) @[block_division.scala 25:29]
    node _exp_output_0_T = add(io_exp_a_0, io_exp_b_0) @[block_division.scala 26:31]
    node _exp_output_0_T_1 = tail(_exp_output_0_T, 1) @[block_division.scala 26:31]
    node _dotProductRegs_0_T = mul(io_man_a_0, io_man_b_0) @[block_division.scala 28:63]
    node _dotProductRegs_1_T = mul(io_man_a_1, io_man_b_1) @[block_division.scala 28:63]
    node _dotProductRegs_2_T = mul(io_man_a_2, io_man_b_2) @[block_division.scala 28:63]
    node _dotProductRegs_3_T = mul(io_man_a_3, io_man_b_3) @[block_division.scala 28:63]
    node _dotProducts_0_T = add(dotProductRegs__0, dotProductRegs__1) @[block_division.scala 31:47]
    node _dotProducts_0_T_1 = tail(_dotProducts_0_T, 1) @[block_division.scala 31:47]
    node _dotProducts_0_T_2 = asSInt(_dotProducts_0_T_1) @[block_division.scala 31:47]
    node _dotProducts_0_T_3 = add(_dotProducts_0_T_2, dotProductRegs__2) @[block_division.scala 31:47]
    node _dotProducts_0_T_4 = tail(_dotProducts_0_T_3, 1) @[block_division.scala 31:47]
    node _dotProducts_0_T_5 = asSInt(_dotProducts_0_T_4) @[block_division.scala 31:47]
    node _dotProducts_0_T_6 = add(_dotProducts_0_T_5, dotProductRegs__3) @[block_division.scala 31:47]
    node _dotProducts_0_T_7 = tail(_dotProducts_0_T_6, 1) @[block_division.scala 31:47]
    node _dotProducts_0_T_8 = asSInt(_dotProducts_0_T_7) @[block_division.scala 31:47]
    reg dotProductRegs_1_0 : SInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_1_0) @[block_division.scala 25:29]
    reg dotProductRegs_1_1 : SInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_1_1) @[block_division.scala 25:29]
    reg dotProductRegs_1_2 : SInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_1_2) @[block_division.scala 25:29]
    reg dotProductRegs_1_3 : SInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_1_3) @[block_division.scala 25:29]
    node _exp_output_1_T = add(io_exp_a_1, io_exp_b_1) @[block_division.scala 26:31]
    node _exp_output_1_T_1 = tail(_exp_output_1_T, 1) @[block_division.scala 26:31]
    node _dotProductRegs_0_T_1 = mul(io_man_a_4, io_man_b_4) @[block_division.scala 28:63]
    node _dotProductRegs_1_T_1 = mul(io_man_a_5, io_man_b_5) @[block_division.scala 28:63]
    node _dotProductRegs_2_T_1 = mul(io_man_a_6, io_man_b_6) @[block_division.scala 28:63]
    node _dotProductRegs_3_T_1 = mul(io_man_a_7, io_man_b_7) @[block_division.scala 28:63]
    node _dotProducts_1_T = add(dotProductRegs_1_0, dotProductRegs_1_1) @[block_division.scala 31:47]
    node _dotProducts_1_T_1 = tail(_dotProducts_1_T, 1) @[block_division.scala 31:47]
    node _dotProducts_1_T_2 = asSInt(_dotProducts_1_T_1) @[block_division.scala 31:47]
    node _dotProducts_1_T_3 = add(_dotProducts_1_T_2, dotProductRegs_1_2) @[block_division.scala 31:47]
    node _dotProducts_1_T_4 = tail(_dotProducts_1_T_3, 1) @[block_division.scala 31:47]
    node _dotProducts_1_T_5 = asSInt(_dotProducts_1_T_4) @[block_division.scala 31:47]
    node _dotProducts_1_T_6 = add(_dotProducts_1_T_5, dotProductRegs_1_3) @[block_division.scala 31:47]
    node _dotProducts_1_T_7 = tail(_dotProducts_1_T_6, 1) @[block_division.scala 31:47]
    node _dotProducts_1_T_8 = asSInt(_dotProducts_1_T_7) @[block_division.scala 31:47]
    reg dotProductRegs_2_0 : SInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_2_0) @[block_division.scala 25:29]
    reg dotProductRegs_2_1 : SInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_2_1) @[block_division.scala 25:29]
    reg dotProductRegs_2_2 : SInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_2_2) @[block_division.scala 25:29]
    reg dotProductRegs_2_3 : SInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_2_3) @[block_division.scala 25:29]
    node _exp_output_2_T = add(io_exp_a_2, io_exp_b_2) @[block_division.scala 26:31]
    node _exp_output_2_T_1 = tail(_exp_output_2_T, 1) @[block_division.scala 26:31]
    node _dotProductRegs_0_T_2 = mul(io_man_a_8, io_man_b_8) @[block_division.scala 28:63]
    node _dotProductRegs_1_T_2 = mul(io_man_a_9, io_man_b_9) @[block_division.scala 28:63]
    node _dotProductRegs_2_T_2 = mul(io_man_a_10, io_man_b_10) @[block_division.scala 28:63]
    node _dotProductRegs_3_T_2 = mul(io_man_a_11, io_man_b_11) @[block_division.scala 28:63]
    node _dotProducts_2_T = add(dotProductRegs_2_0, dotProductRegs_2_1) @[block_division.scala 31:47]
    node _dotProducts_2_T_1 = tail(_dotProducts_2_T, 1) @[block_division.scala 31:47]
    node _dotProducts_2_T_2 = asSInt(_dotProducts_2_T_1) @[block_division.scala 31:47]
    node _dotProducts_2_T_3 = add(_dotProducts_2_T_2, dotProductRegs_2_2) @[block_division.scala 31:47]
    node _dotProducts_2_T_4 = tail(_dotProducts_2_T_3, 1) @[block_division.scala 31:47]
    node _dotProducts_2_T_5 = asSInt(_dotProducts_2_T_4) @[block_division.scala 31:47]
    node _dotProducts_2_T_6 = add(_dotProducts_2_T_5, dotProductRegs_2_3) @[block_division.scala 31:47]
    node _dotProducts_2_T_7 = tail(_dotProducts_2_T_6, 1) @[block_division.scala 31:47]
    node _dotProducts_2_T_8 = asSInt(_dotProducts_2_T_7) @[block_division.scala 31:47]
    reg dotProductRegs_3_0 : SInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_3_0) @[block_division.scala 25:29]
    reg dotProductRegs_3_1 : SInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_3_1) @[block_division.scala 25:29]
    reg dotProductRegs_3_2 : SInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_3_2) @[block_division.scala 25:29]
    reg dotProductRegs_3_3 : SInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_3_3) @[block_division.scala 25:29]
    node _exp_output_3_T = add(io_exp_a_3, io_exp_b_3) @[block_division.scala 26:31]
    node _exp_output_3_T_1 = tail(_exp_output_3_T, 1) @[block_division.scala 26:31]
    node _dotProductRegs_0_T_3 = mul(io_man_a_12, io_man_b_12) @[block_division.scala 28:63]
    node _dotProductRegs_1_T_3 = mul(io_man_a_13, io_man_b_13) @[block_division.scala 28:63]
    node _dotProductRegs_2_T_3 = mul(io_man_a_14, io_man_b_14) @[block_division.scala 28:63]
    node _dotProductRegs_3_T_3 = mul(io_man_a_15, io_man_b_15) @[block_division.scala 28:63]
    node _dotProducts_3_T = add(dotProductRegs_3_0, dotProductRegs_3_1) @[block_division.scala 31:47]
    node _dotProducts_3_T_1 = tail(_dotProducts_3_T, 1) @[block_division.scala 31:47]
    node _dotProducts_3_T_2 = asSInt(_dotProducts_3_T_1) @[block_division.scala 31:47]
    node _dotProducts_3_T_3 = add(_dotProducts_3_T_2, dotProductRegs_3_2) @[block_division.scala 31:47]
    node _dotProducts_3_T_4 = tail(_dotProducts_3_T_3, 1) @[block_division.scala 31:47]
    node _dotProducts_3_T_5 = asSInt(_dotProducts_3_T_4) @[block_division.scala 31:47]
    node _dotProducts_3_T_6 = add(_dotProducts_3_T_5, dotProductRegs_3_3) @[block_division.scala 31:47]
    node _dotProducts_3_T_7 = tail(_dotProducts_3_T_6, 1) @[block_division.scala 31:47]
    node _dotProducts_3_T_8 = asSInt(_dotProducts_3_T_7) @[block_division.scala 31:47]
    node exp_output_0 = _exp_output_0_T_1 @[block_division.scala 15:24 26:19]
    node exp_output_1 = _exp_output_1_T_1 @[block_division.scala 15:24 26:19]
    node _exp_min_T = lt(exp_output_0, exp_output_1) @[block_division.scala 42:48]
    node _exp_min_T_1 = mux(_exp_min_T, exp_output_0, exp_output_1) @[block_division.scala 42:45]
    node exp_output_2 = _exp_output_2_T_1 @[block_division.scala 15:24 26:19]
    node _exp_min_T_2 = lt(_exp_min_T_1, exp_output_2) @[block_division.scala 42:48]
    node _exp_min_T_3 = mux(_exp_min_T_2, _exp_min_T_1, exp_output_2) @[block_division.scala 42:45]
    node exp_output_3 = _exp_output_3_T_1 @[block_division.scala 15:24 26:19]
    node _exp_min_T_4 = lt(_exp_min_T_3, exp_output_3) @[block_division.scala 42:48]
    node _exp_min_T_5 = mux(_exp_min_T_4, _exp_min_T_3, exp_output_3) @[block_division.scala 42:45]
    node exp_min = _exp_min_T_5 @[block_division.scala 22:21 42:11]
    node _exp_diff_T = sub(exp_output_0, exp_min) @[block_division.scala 45:34]
    node exp_diff = tail(_exp_diff_T, 1) @[block_division.scala 45:34]
    node dotProducts_0 = _dotProducts_0_T_8 @[block_division.scala 18:64 31:20]
    node _shifteddotProducts_0_T = dshr(dotProducts_0, exp_diff) @[block_division.scala 46:45]
    node _exp_diff_T_1 = sub(exp_output_1, exp_min) @[block_division.scala 45:34]
    node exp_diff_1 = tail(_exp_diff_T_1, 1) @[block_division.scala 45:34]
    node dotProducts_1 = _dotProducts_1_T_8 @[block_division.scala 18:64 31:20]
    node _shifteddotProducts_1_T = dshr(dotProducts_1, exp_diff_1) @[block_division.scala 46:45]
    node _exp_diff_T_2 = sub(exp_output_2, exp_min) @[block_division.scala 45:34]
    node exp_diff_2 = tail(_exp_diff_T_2, 1) @[block_division.scala 45:34]
    node dotProducts_2 = _dotProducts_2_T_8 @[block_division.scala 18:64 31:20]
    node _shifteddotProducts_2_T = dshr(dotProducts_2, exp_diff_2) @[block_division.scala 46:45]
    node _exp_diff_T_3 = sub(exp_output_3, exp_min) @[block_division.scala 45:34]
    node exp_diff_3 = tail(_exp_diff_T_3, 1) @[block_division.scala 45:34]
    node dotProducts_3 = _dotProducts_3_T_8 @[block_division.scala 18:64 31:20]
    node _shifteddotProducts_3_T = dshr(dotProducts_3, exp_diff_3) @[block_division.scala 46:45]
    node shifteddotProducts_0 = _shifteddotProducts_0_T @[block_division.scala 19:71 46:27]
    node shifteddotProducts_1 = _shifteddotProducts_1_T @[block_division.scala 19:71 46:27]
    node _accumulator_T = add(shifteddotProducts_0, shifteddotProducts_1) @[block_division.scala 51:45]
    node _accumulator_T_1 = tail(_accumulator_T, 1) @[block_division.scala 51:45]
    node _accumulator_T_2 = asSInt(_accumulator_T_1) @[block_division.scala 51:45]
    node shifteddotProducts_2 = _shifteddotProducts_2_T @[block_division.scala 19:71 46:27]
    node _accumulator_T_3 = add(_accumulator_T_2, shifteddotProducts_2) @[block_division.scala 51:45]
    node _accumulator_T_4 = tail(_accumulator_T_3, 1) @[block_division.scala 51:45]
    node _accumulator_T_5 = asSInt(_accumulator_T_4) @[block_division.scala 51:45]
    node shifteddotProducts_3 = _shifteddotProducts_3_T @[block_division.scala 19:71 46:27]
    node _accumulator_T_6 = add(_accumulator_T_5, shifteddotProducts_3) @[block_division.scala 51:45]
    node _accumulator_T_7 = tail(_accumulator_T_6, 1) @[block_division.scala 51:45]
    node _accumulator_T_8 = asSInt(_accumulator_T_7) @[block_division.scala 51:45]
    node _io_result_T = bits(accumulator, 26, 26) @[block_division.scala 54:27]
    node _io_result_T_1 = cat(_io_result_T, exp_min) @[block_division.scala 54:51]
    node _io_result_T_2 = bits(accumulator, 4, 0) @[block_division.scala 54:76]
    node _io_result_T_3 = cat(_io_result_T_1, _io_result_T_2) @[block_division.scala 54:62]
    io_result <= _io_result_T_3 @[block_division.scala 54:13]
    accumulator <= mux(reset, asSInt(UInt<27>("h0")), _accumulator_T_8) @[block_division.scala 20:{28,28} 51:15]
    dotProductRegs__0 <= _dotProductRegs_0_T @[block_division.scala 28:25]
    dotProductRegs__1 <= _dotProductRegs_1_T @[block_division.scala 28:25]
    dotProductRegs__2 <= _dotProductRegs_2_T @[block_division.scala 28:25]
    dotProductRegs__3 <= _dotProductRegs_3_T @[block_division.scala 28:25]
    dotProductRegs_1_0 <= _dotProductRegs_0_T_1 @[block_division.scala 28:25]
    dotProductRegs_1_1 <= _dotProductRegs_1_T_1 @[block_division.scala 28:25]
    dotProductRegs_1_2 <= _dotProductRegs_2_T_1 @[block_division.scala 28:25]
    dotProductRegs_1_3 <= _dotProductRegs_3_T_1 @[block_division.scala 28:25]
    dotProductRegs_2_0 <= _dotProductRegs_0_T_2 @[block_division.scala 28:25]
    dotProductRegs_2_1 <= _dotProductRegs_1_T_2 @[block_division.scala 28:25]
    dotProductRegs_2_2 <= _dotProductRegs_2_T_2 @[block_division.scala 28:25]
    dotProductRegs_2_3 <= _dotProductRegs_3_T_2 @[block_division.scala 28:25]
    dotProductRegs_3_0 <= _dotProductRegs_0_T_3 @[block_division.scala 28:25]
    dotProductRegs_3_1 <= _dotProductRegs_1_T_3 @[block_division.scala 28:25]
    dotProductRegs_3_2 <= _dotProductRegs_2_T_3 @[block_division.scala 28:25]
    dotProductRegs_3_3 <= _dotProductRegs_3_T_3 @[block_division.scala 28:25]
