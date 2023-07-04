FIRRTL version 1.1.0
circuit HbfpTensor :
  module adderTree2 :
    input clock : Clock
    input reset : UInt<1>
    input io_sign_man_0 : SInt<18>
    input io_sign_man_1 : SInt<18>
    input io_exps_0 : UInt<8>
    input io_exps_1 : UInt<8>
    output io_result_tree : UInt<14>

    reg exp_buffer_0 : UInt<8>, clock with :
      reset => (UInt<1>("h0"), exp_buffer_0) @[block_division.scala 62:60]
    reg exp_buffer_1 : UInt<8>, clock with :
      reset => (UInt<1>("h0"), exp_buffer_1) @[block_division.scala 62:60]
    reg man_buffer_two_complement_0 : SInt<19>, clock with :
      reset => (UInt<1>("h0"), man_buffer_two_complement_0) @[block_division.scala 64:12]
    reg man_buffer_two_complement_1 : SInt<19>, clock with :
      reset => (UInt<1>("h0"), man_buffer_two_complement_1) @[block_division.scala 64:12]
    reg counter : UInt<10>, clock with :
      reset => (UInt<1>("h0"), counter) @[block_division.scala 66:24]
    node _counter_T = add(counter, UInt<1>("h1")) @[block_division.scala 71:24]
    node _counter_T_1 = tail(_counter_T, 1) @[block_division.scala 71:24]
    node _counter_T_2 = add(counter, UInt<1>("h1")) @[block_division.scala 71:24]
    node _counter_T_3 = tail(_counter_T_2, 1) @[block_division.scala 71:24]
    node _T = eq(counter, UInt<2>("h2")) @[block_division.scala 75:17]
    node _exp_buffer_0_T = gt(exp_buffer_0, exp_buffer_1) @[block_division.scala 80:31]
    node _exp_buffer_0_T_1 = mux(_exp_buffer_0_T, exp_buffer_0, exp_buffer_1) @[block_division.scala 79:31]
    node _exp_difference_T = gt(exp_buffer_0, exp_buffer_1) @[block_division.scala 85:31]
    node _exp_difference_T_1 = sub(exp_buffer_0, exp_buffer_1) @[block_division.scala 86:31]
    node _exp_difference_T_2 = tail(_exp_difference_T_1, 1) @[block_division.scala 86:31]
    node _exp_difference_T_3 = sub(exp_buffer_1, exp_buffer_0) @[block_division.scala 87:35]
    node _exp_difference_T_4 = tail(_exp_difference_T_3, 1) @[block_division.scala 87:35]
    node exp_difference = mux(_exp_difference_T, _exp_difference_T_2, _exp_difference_T_4) @[block_division.scala 84:35]
    node _man_buffer_two_complement_0_T = gt(exp_buffer_0, exp_buffer_1) @[block_division.scala 90:31]
    node _man_buffer_two_complement_0_T_1 = dshr(man_buffer_two_complement_1, exp_difference) @[block_division.scala 93:15]
    node _man_buffer_two_complement_0_T_2 = add(man_buffer_two_complement_0, _man_buffer_two_complement_0_T_1) @[block_division.scala 91:46]
    node _man_buffer_two_complement_0_T_3 = tail(_man_buffer_two_complement_0_T_2, 1) @[block_division.scala 91:46]
    node _man_buffer_two_complement_0_T_4 = asSInt(_man_buffer_two_complement_0_T_3) @[block_division.scala 91:46]
    node _man_buffer_two_complement_0_T_5 = dshr(man_buffer_two_complement_0, exp_difference) @[block_division.scala 96:15]
    node _man_buffer_two_complement_0_T_6 = add(man_buffer_two_complement_1, _man_buffer_two_complement_0_T_5) @[block_division.scala 94:50]
    node _man_buffer_two_complement_0_T_7 = tail(_man_buffer_two_complement_0_T_6, 1) @[block_division.scala 94:50]
    node _man_buffer_two_complement_0_T_8 = asSInt(_man_buffer_two_complement_0_T_7) @[block_division.scala 94:50]
    node _man_buffer_two_complement_0_T_9 = mux(_man_buffer_two_complement_0_T, _man_buffer_two_complement_0_T_4, _man_buffer_two_complement_0_T_8) @[block_division.scala 89:46]
    node _GEN_0 = mux(_T, _exp_buffer_0_T_1, io_exps_0) @[block_division.scala 69:19 75:49 79:25]
    node _GEN_1 = mux(_T, _man_buffer_two_complement_0_T_9, io_sign_man_0) @[block_division.scala 70:34 75:49 89:40]
    reg sign_man_hbfp : UInt<19>, clock with :
      reset => (UInt<1>("h0"), sign_man_hbfp) @[block_division.scala 106:30]
    node _sign_man_hbfp_T = bits(man_buffer_two_complement_0, 18, 18) @[block_division.scala 110:33]
    node _sign_man_hbfp_T_1 = eq(_sign_man_hbfp_T, UInt<1>("h1")) @[block_division.scala 112:14]
    node _sign_man_hbfp_T_2 = bits(man_buffer_two_complement_0, 17, 0) @[block_division.scala 113:43]
    node _sign_man_hbfp_T_3 = cat(UInt<1>("h0"), _sign_man_hbfp_T_2) @[block_division.scala 113:11]
    node _sign_man_hbfp_T_4 = not(_sign_man_hbfp_T_3) @[block_division.scala 113:5]
    node _sign_man_hbfp_T_5 = add(_sign_man_hbfp_T_4, UInt<1>("h1")) @[block_division.scala 116:16]
    node _sign_man_hbfp_T_6 = tail(_sign_man_hbfp_T_5, 1) @[block_division.scala 116:16]
    node _sign_man_hbfp_T_7 = asUInt(man_buffer_two_complement_0) @[block_division.scala 117:36]
    node _sign_man_hbfp_T_8 = mux(_sign_man_hbfp_T_1, _sign_man_hbfp_T_6, _sign_man_hbfp_T_7) @[block_division.scala 109:23]
    reg right_shift : UInt<8>, clock with :
      reset => (UInt<1>("h0"), right_shift) @[block_division.scala 120:28]
    reg actual_shift : UInt<8>, clock with :
      reset => (UInt<1>("h0"), actual_shift) @[block_division.scala 121:29]
    node _buf_T = bits(sign_man_hbfp, 17, 5) @[block_division.scala 123:18]
    node _buf_T_1 = bits(_buf_T, 7, 0) @[Bitwise.scala 114:18]
    node _buf_T_2 = shl(UInt<4>("hf"), 4) @[Bitwise.scala 107:52]
    node _buf_T_3 = xor(UInt<8>("hff"), _buf_T_2) @[Bitwise.scala 107:21]
    node _buf_T_4 = shr(_buf_T_1, 4) @[Bitwise.scala 108:21]
    node _buf_T_5 = and(_buf_T_4, _buf_T_3) @[Bitwise.scala 108:31]
    node _buf_T_6 = bits(_buf_T_1, 3, 0) @[Bitwise.scala 108:46]
    node _buf_T_7 = shl(_buf_T_6, 4) @[Bitwise.scala 108:70]
    node _buf_T_8 = not(_buf_T_3) @[Bitwise.scala 108:82]
    node _buf_T_9 = and(_buf_T_7, _buf_T_8) @[Bitwise.scala 108:80]
    node _buf_T_10 = or(_buf_T_5, _buf_T_9) @[Bitwise.scala 108:39]
    node _buf_T_11 = bits(_buf_T_3, 5, 0) @[Bitwise.scala 107:28]
    node _buf_T_12 = shl(_buf_T_11, 2) @[Bitwise.scala 107:52]
    node _buf_T_13 = xor(_buf_T_3, _buf_T_12) @[Bitwise.scala 107:21]
    node _buf_T_14 = shr(_buf_T_10, 2) @[Bitwise.scala 108:21]
    node _buf_T_15 = and(_buf_T_14, _buf_T_13) @[Bitwise.scala 108:31]
    node _buf_T_16 = bits(_buf_T_10, 5, 0) @[Bitwise.scala 108:46]
    node _buf_T_17 = shl(_buf_T_16, 2) @[Bitwise.scala 108:70]
    node _buf_T_18 = not(_buf_T_13) @[Bitwise.scala 108:82]
    node _buf_T_19 = and(_buf_T_17, _buf_T_18) @[Bitwise.scala 108:80]
    node _buf_T_20 = or(_buf_T_15, _buf_T_19) @[Bitwise.scala 108:39]
    node _buf_T_21 = bits(_buf_T_13, 6, 0) @[Bitwise.scala 107:28]
    node _buf_T_22 = shl(_buf_T_21, 1) @[Bitwise.scala 107:52]
    node _buf_T_23 = xor(_buf_T_13, _buf_T_22) @[Bitwise.scala 107:21]
    node _buf_T_24 = shr(_buf_T_20, 1) @[Bitwise.scala 108:21]
    node _buf_T_25 = and(_buf_T_24, _buf_T_23) @[Bitwise.scala 108:31]
    node _buf_T_26 = bits(_buf_T_20, 6, 0) @[Bitwise.scala 108:46]
    node _buf_T_27 = shl(_buf_T_26, 1) @[Bitwise.scala 108:70]
    node _buf_T_28 = not(_buf_T_23) @[Bitwise.scala 108:82]
    node _buf_T_29 = and(_buf_T_27, _buf_T_28) @[Bitwise.scala 108:80]
    node _buf_T_30 = or(_buf_T_25, _buf_T_29) @[Bitwise.scala 108:39]
    node _buf_T_31 = bits(_buf_T, 12, 8) @[Bitwise.scala 114:47]
    node _buf_T_32 = bits(_buf_T_31, 3, 0) @[Bitwise.scala 114:18]
    node _buf_T_33 = bits(_buf_T_32, 1, 0) @[Bitwise.scala 114:18]
    node _buf_T_34 = bits(_buf_T_33, 0, 0) @[Bitwise.scala 114:18]
    node _buf_T_35 = bits(_buf_T_33, 1, 1) @[Bitwise.scala 114:47]
    node _buf_T_36 = cat(_buf_T_34, _buf_T_35) @[Cat.scala 33:92]
    node _buf_T_37 = bits(_buf_T_32, 3, 2) @[Bitwise.scala 114:47]
    node _buf_T_38 = bits(_buf_T_37, 0, 0) @[Bitwise.scala 114:18]
    node _buf_T_39 = bits(_buf_T_37, 1, 1) @[Bitwise.scala 114:47]
    node _buf_T_40 = cat(_buf_T_38, _buf_T_39) @[Cat.scala 33:92]
    node _buf_T_41 = cat(_buf_T_36, _buf_T_40) @[Cat.scala 33:92]
    node _buf_T_42 = bits(_buf_T_31, 4, 4) @[Bitwise.scala 114:47]
    node _buf_T_43 = cat(_buf_T_41, _buf_T_42) @[Cat.scala 33:92]
    node buf = cat(_buf_T_30, _buf_T_43) @[Cat.scala 33:92]
    node _right_shift_T = bits(buf, 0, 0) @[OneHot.scala 47:45]
    node _right_shift_T_1 = bits(buf, 1, 1) @[OneHot.scala 47:45]
    node _right_shift_T_2 = bits(buf, 2, 2) @[OneHot.scala 47:45]
    node _right_shift_T_3 = bits(buf, 3, 3) @[OneHot.scala 47:45]
    node _right_shift_T_4 = bits(buf, 4, 4) @[OneHot.scala 47:45]
    node _right_shift_T_5 = bits(buf, 5, 5) @[OneHot.scala 47:45]
    node _right_shift_T_6 = bits(buf, 6, 6) @[OneHot.scala 47:45]
    node _right_shift_T_7 = bits(buf, 7, 7) @[OneHot.scala 47:45]
    node _right_shift_T_8 = bits(buf, 8, 8) @[OneHot.scala 47:45]
    node _right_shift_T_9 = bits(buf, 9, 9) @[OneHot.scala 47:45]
    node _right_shift_T_10 = bits(buf, 10, 10) @[OneHot.scala 47:45]
    node _right_shift_T_11 = bits(buf, 11, 11) @[OneHot.scala 47:45]
    node _right_shift_T_12 = bits(buf, 12, 12) @[OneHot.scala 47:45]
    node _right_shift_T_13 = mux(_right_shift_T_11, UInt<4>("hb"), UInt<4>("hc")) @[Mux.scala 47:70]
    node _right_shift_T_14 = mux(_right_shift_T_10, UInt<4>("ha"), _right_shift_T_13) @[Mux.scala 47:70]
    node _right_shift_T_15 = mux(_right_shift_T_9, UInt<4>("h9"), _right_shift_T_14) @[Mux.scala 47:70]
    node _right_shift_T_16 = mux(_right_shift_T_8, UInt<4>("h8"), _right_shift_T_15) @[Mux.scala 47:70]
    node _right_shift_T_17 = mux(_right_shift_T_7, UInt<3>("h7"), _right_shift_T_16) @[Mux.scala 47:70]
    node _right_shift_T_18 = mux(_right_shift_T_6, UInt<3>("h6"), _right_shift_T_17) @[Mux.scala 47:70]
    node _right_shift_T_19 = mux(_right_shift_T_5, UInt<3>("h5"), _right_shift_T_18) @[Mux.scala 47:70]
    node _right_shift_T_20 = mux(_right_shift_T_4, UInt<3>("h4"), _right_shift_T_19) @[Mux.scala 47:70]
    node _right_shift_T_21 = mux(_right_shift_T_3, UInt<2>("h3"), _right_shift_T_20) @[Mux.scala 47:70]
    node _right_shift_T_22 = mux(_right_shift_T_2, UInt<2>("h2"), _right_shift_T_21) @[Mux.scala 47:70]
    node _right_shift_T_23 = mux(_right_shift_T_1, UInt<1>("h1"), _right_shift_T_22) @[Mux.scala 47:70]
    node _right_shift_T_24 = mux(_right_shift_T, UInt<1>("h0"), _right_shift_T_23) @[Mux.scala 47:70]
    node _actual_shift_T = sub(UInt<4>("hc"), right_shift) @[block_division.scala 128:73]
    node _actual_shift_T_1 = tail(_actual_shift_T, 1) @[block_division.scala 128:73]
    node man_out_shifted = dshr(sign_man_hbfp, actual_shift) @[block_division.scala 130:39]
    node _io_result_tree_T = bits(sign_man_hbfp, 18, 18) @[block_division.scala 132:34]
    node _io_result_tree_T_1 = add(exp_buffer_0, actual_shift) @[block_division.scala 134:23]
    node _io_result_tree_T_2 = tail(_io_result_tree_T_1, 1) @[block_division.scala 134:23]
    node _io_result_tree_T_3 = cat(_io_result_tree_T, _io_result_tree_T_2) @[block_division.scala 134:5]
    node _io_result_tree_T_4 = bits(man_out_shifted, 4, 0) @[block_division.scala 134:57]
    node _io_result_tree_T_5 = cat(_io_result_tree_T_3, _io_result_tree_T_4) @[block_division.scala 134:39]
    io_result_tree <= _io_result_tree_T_5 @[block_division.scala 132:18]
    exp_buffer_0 <= mux(reset, UInt<8>("h0"), _GEN_0) @[block_division.scala 62:{60,60}]
    exp_buffer_1 <= mux(reset, UInt<8>("h0"), io_exps_1) @[block_division.scala 62:{60,60} 69:19]
    man_buffer_two_complement_0 <= mux(reset, asSInt(UInt<19>("h0")), _GEN_1) @[block_division.scala 64:{12,12}]
    man_buffer_two_complement_1 <= mux(reset, asSInt(UInt<19>("h0")), io_sign_man_1) @[block_division.scala 64:{12,12} 70:34]
    counter <= mux(reset, UInt<10>("h0"), _counter_T_3) @[block_division.scala 66:{24,24} 71:13]
    sign_man_hbfp <= mux(reset, UInt<19>("h0"), _sign_man_hbfp_T_8) @[block_division.scala 106:{30,30} 109:17]
    right_shift <= mux(reset, UInt<8>("h0"), _right_shift_T_24) @[block_division.scala 120:{28,28} 126:15]
    actual_shift <= mux(reset, UInt<8>("h0"), _actual_shift_T_1) @[block_division.scala 121:{29,29} 128:16]

  module HbfpTensor :
    input clock : Clock
    input reset : UInt<1>
    input io_man_a_0 : UInt<5>
    input io_man_a_1 : UInt<5>
    input io_man_a_2 : UInt<5>
    input io_man_a_3 : UInt<5>
    input io_man_a_4 : UInt<5>
    input io_man_a_5 : UInt<5>
    input io_man_a_6 : UInt<5>
    input io_man_a_7 : UInt<5>
    input io_man_a_8 : UInt<5>
    input io_man_a_9 : UInt<5>
    input io_man_a_10 : UInt<5>
    input io_man_a_11 : UInt<5>
    input io_man_a_12 : UInt<5>
    input io_man_a_13 : UInt<5>
    input io_man_a_14 : UInt<5>
    input io_man_a_15 : UInt<5>
    input io_man_b_0 : UInt<5>
    input io_man_b_1 : UInt<5>
    input io_man_b_2 : UInt<5>
    input io_man_b_3 : UInt<5>
    input io_man_b_4 : UInt<5>
    input io_man_b_5 : UInt<5>
    input io_man_b_6 : UInt<5>
    input io_man_b_7 : UInt<5>
    input io_man_b_8 : UInt<5>
    input io_man_b_9 : UInt<5>
    input io_man_b_10 : UInt<5>
    input io_man_b_11 : UInt<5>
    input io_man_b_12 : UInt<5>
    input io_man_b_13 : UInt<5>
    input io_man_b_14 : UInt<5>
    input io_man_b_15 : UInt<5>
    input io_sign_a_0 : UInt<1>
    input io_sign_a_1 : UInt<1>
    input io_sign_a_2 : UInt<1>
    input io_sign_a_3 : UInt<1>
    input io_sign_a_4 : UInt<1>
    input io_sign_a_5 : UInt<1>
    input io_sign_a_6 : UInt<1>
    input io_sign_a_7 : UInt<1>
    input io_sign_a_8 : UInt<1>
    input io_sign_a_9 : UInt<1>
    input io_sign_a_10 : UInt<1>
    input io_sign_a_11 : UInt<1>
    input io_sign_a_12 : UInt<1>
    input io_sign_a_13 : UInt<1>
    input io_sign_a_14 : UInt<1>
    input io_sign_a_15 : UInt<1>
    input io_sign_b_0 : UInt<1>
    input io_sign_b_1 : UInt<1>
    input io_sign_b_2 : UInt<1>
    input io_sign_b_3 : UInt<1>
    input io_sign_b_4 : UInt<1>
    input io_sign_b_5 : UInt<1>
    input io_sign_b_6 : UInt<1>
    input io_sign_b_7 : UInt<1>
    input io_sign_b_8 : UInt<1>
    input io_sign_b_9 : UInt<1>
    input io_sign_b_10 : UInt<1>
    input io_sign_b_11 : UInt<1>
    input io_sign_b_12 : UInt<1>
    input io_sign_b_13 : UInt<1>
    input io_sign_b_14 : UInt<1>
    input io_sign_b_15 : UInt<1>
    input io_exp_a_0 : UInt<8>
    input io_exp_a_1 : UInt<8>
    input io_exp_b_0 : UInt<8>
    input io_exp_b_1 : UInt<8>
    output io_result : UInt<14>

    inst adderTreeInst of adderTree2 @[block_division.scala 47:29]
    reg exp_output_0 : UInt<8>, clock with :
      reset => (UInt<1>("h0"), exp_output_0) @[block_division.scala 17:60]
    reg exp_output_1 : UInt<8>, clock with :
      reset => (UInt<1>("h0"), exp_output_1) @[block_division.scala 17:60]
    reg dotProductRegs_0 : UInt<10>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_0) @[block_division.scala 18:51]
    reg dotProductRegs_1 : UInt<10>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_1) @[block_division.scala 18:51]
    reg dotProductRegs_2 : UInt<10>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_2) @[block_division.scala 18:51]
    reg dotProductRegs_3 : UInt<10>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_3) @[block_division.scala 18:51]
    reg dotProductRegs_4 : UInt<10>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_4) @[block_division.scala 18:51]
    reg dotProductRegs_5 : UInt<10>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_5) @[block_division.scala 18:51]
    reg dotProductRegs_6 : UInt<10>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_6) @[block_division.scala 18:51]
    reg dotProductRegs_7 : UInt<10>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_7) @[block_division.scala 18:51]
    reg signs_0 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_0) @[block_division.scala 19:42]
    reg signs_1 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_1) @[block_division.scala 19:42]
    reg signs_2 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_2) @[block_division.scala 19:42]
    reg signs_3 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_3) @[block_division.scala 19:42]
    reg signs_4 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_4) @[block_division.scala 19:42]
    reg signs_5 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_5) @[block_division.scala 19:42]
    reg signs_6 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_6) @[block_division.scala 19:42]
    reg signs_7 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_7) @[block_division.scala 19:42]
    reg two_complement_0 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), two_complement_0) @[block_division.scala 20:51]
    reg two_complement_1 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), two_complement_1) @[block_division.scala 20:51]
    reg two_complement_2 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), two_complement_2) @[block_division.scala 20:51]
    reg two_complement_3 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), two_complement_3) @[block_division.scala 20:51]
    reg two_complement_4 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), two_complement_4) @[block_division.scala 20:51]
    reg two_complement_5 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), two_complement_5) @[block_division.scala 20:51]
    reg two_complement_6 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), two_complement_6) @[block_division.scala 20:51]
    reg two_complement_7 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), two_complement_7) @[block_division.scala 20:51]
    reg two_complement_buffer_0 : SInt<11>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_0) @[block_division.scala 21:58]
    reg two_complement_buffer_1 : SInt<11>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_1) @[block_division.scala 21:58]
    reg two_complement_buffer_2 : SInt<11>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_2) @[block_division.scala 21:58]
    reg two_complement_buffer_3 : SInt<11>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_3) @[block_division.scala 21:58]
    reg two_complement_buffer_4 : SInt<11>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_4) @[block_division.scala 21:58]
    reg two_complement_buffer_5 : SInt<11>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_5) @[block_division.scala 21:58]
    reg two_complement_buffer_6 : SInt<11>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_6) @[block_division.scala 21:58]
    reg two_complement_buffer_7 : SInt<11>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_7) @[block_division.scala 21:58]
    reg acc_0 : SInt<18>, clock with :
      reset => (UInt<1>("h0"), acc_0) @[block_division.scala 22:53]
    reg acc_1 : SInt<18>, clock with :
      reset => (UInt<1>("h0"), acc_1) @[block_division.scala 22:53]
    node _exp_output_0_T = add(io_exp_a_0, io_exp_b_0) @[block_division.scala 25:34]
    node _exp_output_0_T_1 = tail(_exp_output_0_T, 1) @[block_division.scala 25:34]
    reg multiplierReg : UInt<5>, clock with :
      reset => (UInt<1>("h0"), multiplierReg) @[block_division.scala 31:34]
    reg signReg : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg) @[block_division.scala 32:28]
    node _dotProductRegs_0_T = mul(multiplierReg, io_man_b_0) @[block_division.scala 35:42]
    node _signs_0_T = xor(signReg, io_sign_b_0) @[block_division.scala 36:27]
    node _two_complement_0_T = eq(signs_0, UInt<1>("h1")) @[block_division.scala 38:18]
    node _two_complement_0_T_1 = cat(UInt<1>("h0"), dotProductRegs_0) @[block_division.scala 39:16]
    node _two_complement_0_T_2 = not(_two_complement_0_T_1) @[block_division.scala 39:10]
    node _two_complement_0_T_3 = add(_two_complement_0_T_2, UInt<1>("h1")) @[block_division.scala 39:38]
    node _two_complement_0_T_4 = tail(_two_complement_0_T_3, 1) @[block_division.scala 39:38]
    node _two_complement_0_T_5 = cat(UInt<1>("h0"), dotProductRegs_0) @[block_division.scala 40:14]
    node _two_complement_0_T_6 = mux(_two_complement_0_T, _two_complement_0_T_4, _two_complement_0_T_5) @[block_division.scala 37:31]
    node _two_complement_buffer_0_T = asSInt(two_complement_0) @[block_division.scala 42:53]
    reg multiplierReg_1 : UInt<5>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_1) @[block_division.scala 31:34]
    reg signReg_1 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_1) @[block_division.scala 32:28]
    node _dotProductRegs_1_T = mul(multiplierReg_1, io_man_b_1) @[block_division.scala 35:42]
    node _signs_1_T = xor(signReg_1, io_sign_b_1) @[block_division.scala 36:27]
    node _two_complement_1_T = eq(signs_1, UInt<1>("h1")) @[block_division.scala 38:18]
    node _two_complement_1_T_1 = cat(UInt<1>("h0"), dotProductRegs_1) @[block_division.scala 39:16]
    node _two_complement_1_T_2 = not(_two_complement_1_T_1) @[block_division.scala 39:10]
    node _two_complement_1_T_3 = add(_two_complement_1_T_2, UInt<1>("h1")) @[block_division.scala 39:38]
    node _two_complement_1_T_4 = tail(_two_complement_1_T_3, 1) @[block_division.scala 39:38]
    node _two_complement_1_T_5 = cat(UInt<1>("h0"), dotProductRegs_1) @[block_division.scala 40:14]
    node _two_complement_1_T_6 = mux(_two_complement_1_T, _two_complement_1_T_4, _two_complement_1_T_5) @[block_division.scala 37:31]
    node _two_complement_buffer_1_T = asSInt(two_complement_1) @[block_division.scala 42:53]
    reg multiplierReg_2 : UInt<5>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_2) @[block_division.scala 31:34]
    reg signReg_2 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_2) @[block_division.scala 32:28]
    node _dotProductRegs_2_T = mul(multiplierReg_2, io_man_b_2) @[block_division.scala 35:42]
    node _signs_2_T = xor(signReg_2, io_sign_b_2) @[block_division.scala 36:27]
    node _two_complement_2_T = eq(signs_2, UInt<1>("h1")) @[block_division.scala 38:18]
    node _two_complement_2_T_1 = cat(UInt<1>("h0"), dotProductRegs_2) @[block_division.scala 39:16]
    node _two_complement_2_T_2 = not(_two_complement_2_T_1) @[block_division.scala 39:10]
    node _two_complement_2_T_3 = add(_two_complement_2_T_2, UInt<1>("h1")) @[block_division.scala 39:38]
    node _two_complement_2_T_4 = tail(_two_complement_2_T_3, 1) @[block_division.scala 39:38]
    node _two_complement_2_T_5 = cat(UInt<1>("h0"), dotProductRegs_2) @[block_division.scala 40:14]
    node _two_complement_2_T_6 = mux(_two_complement_2_T, _two_complement_2_T_4, _two_complement_2_T_5) @[block_division.scala 37:31]
    node _two_complement_buffer_2_T = asSInt(two_complement_2) @[block_division.scala 42:53]
    reg multiplierReg_3 : UInt<5>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_3) @[block_division.scala 31:34]
    reg signReg_3 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_3) @[block_division.scala 32:28]
    node _dotProductRegs_3_T = mul(multiplierReg_3, io_man_b_3) @[block_division.scala 35:42]
    node _signs_3_T = xor(signReg_3, io_sign_b_3) @[block_division.scala 36:27]
    node _two_complement_3_T = eq(signs_3, UInt<1>("h1")) @[block_division.scala 38:18]
    node _two_complement_3_T_1 = cat(UInt<1>("h0"), dotProductRegs_3) @[block_division.scala 39:16]
    node _two_complement_3_T_2 = not(_two_complement_3_T_1) @[block_division.scala 39:10]
    node _two_complement_3_T_3 = add(_two_complement_3_T_2, UInt<1>("h1")) @[block_division.scala 39:38]
    node _two_complement_3_T_4 = tail(_two_complement_3_T_3, 1) @[block_division.scala 39:38]
    node _two_complement_3_T_5 = cat(UInt<1>("h0"), dotProductRegs_3) @[block_division.scala 40:14]
    node _two_complement_3_T_6 = mux(_two_complement_3_T, _two_complement_3_T_4, _two_complement_3_T_5) @[block_division.scala 37:31]
    node _two_complement_buffer_3_T = asSInt(two_complement_3) @[block_division.scala 42:53]
    reg multiplierReg_4 : UInt<5>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_4) @[block_division.scala 31:34]
    reg signReg_4 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_4) @[block_division.scala 32:28]
    node _dotProductRegs_4_T = mul(multiplierReg_4, io_man_b_4) @[block_division.scala 35:42]
    node _signs_4_T = xor(signReg_4, io_sign_b_4) @[block_division.scala 36:27]
    node _two_complement_4_T = eq(signs_4, UInt<1>("h1")) @[block_division.scala 38:18]
    node _two_complement_4_T_1 = cat(UInt<1>("h0"), dotProductRegs_4) @[block_division.scala 39:16]
    node _two_complement_4_T_2 = not(_two_complement_4_T_1) @[block_division.scala 39:10]
    node _two_complement_4_T_3 = add(_two_complement_4_T_2, UInt<1>("h1")) @[block_division.scala 39:38]
    node _two_complement_4_T_4 = tail(_two_complement_4_T_3, 1) @[block_division.scala 39:38]
    node _two_complement_4_T_5 = cat(UInt<1>("h0"), dotProductRegs_4) @[block_division.scala 40:14]
    node _two_complement_4_T_6 = mux(_two_complement_4_T, _two_complement_4_T_4, _two_complement_4_T_5) @[block_division.scala 37:31]
    node _two_complement_buffer_4_T = asSInt(two_complement_4) @[block_division.scala 42:53]
    reg multiplierReg_5 : UInt<5>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_5) @[block_division.scala 31:34]
    reg signReg_5 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_5) @[block_division.scala 32:28]
    node _dotProductRegs_5_T = mul(multiplierReg_5, io_man_b_5) @[block_division.scala 35:42]
    node _signs_5_T = xor(signReg_5, io_sign_b_5) @[block_division.scala 36:27]
    node _two_complement_5_T = eq(signs_5, UInt<1>("h1")) @[block_division.scala 38:18]
    node _two_complement_5_T_1 = cat(UInt<1>("h0"), dotProductRegs_5) @[block_division.scala 39:16]
    node _two_complement_5_T_2 = not(_two_complement_5_T_1) @[block_division.scala 39:10]
    node _two_complement_5_T_3 = add(_two_complement_5_T_2, UInt<1>("h1")) @[block_division.scala 39:38]
    node _two_complement_5_T_4 = tail(_two_complement_5_T_3, 1) @[block_division.scala 39:38]
    node _two_complement_5_T_5 = cat(UInt<1>("h0"), dotProductRegs_5) @[block_division.scala 40:14]
    node _two_complement_5_T_6 = mux(_two_complement_5_T, _two_complement_5_T_4, _two_complement_5_T_5) @[block_division.scala 37:31]
    node _two_complement_buffer_5_T = asSInt(two_complement_5) @[block_division.scala 42:53]
    reg multiplierReg_6 : UInt<5>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_6) @[block_division.scala 31:34]
    reg signReg_6 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_6) @[block_division.scala 32:28]
    node _dotProductRegs_6_T = mul(multiplierReg_6, io_man_b_6) @[block_division.scala 35:42]
    node _signs_6_T = xor(signReg_6, io_sign_b_6) @[block_division.scala 36:27]
    node _two_complement_6_T = eq(signs_6, UInt<1>("h1")) @[block_division.scala 38:18]
    node _two_complement_6_T_1 = cat(UInt<1>("h0"), dotProductRegs_6) @[block_division.scala 39:16]
    node _two_complement_6_T_2 = not(_two_complement_6_T_1) @[block_division.scala 39:10]
    node _two_complement_6_T_3 = add(_two_complement_6_T_2, UInt<1>("h1")) @[block_division.scala 39:38]
    node _two_complement_6_T_4 = tail(_two_complement_6_T_3, 1) @[block_division.scala 39:38]
    node _two_complement_6_T_5 = cat(UInt<1>("h0"), dotProductRegs_6) @[block_division.scala 40:14]
    node _two_complement_6_T_6 = mux(_two_complement_6_T, _two_complement_6_T_4, _two_complement_6_T_5) @[block_division.scala 37:31]
    node _two_complement_buffer_6_T = asSInt(two_complement_6) @[block_division.scala 42:53]
    reg multiplierReg_7 : UInt<5>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_7) @[block_division.scala 31:34]
    reg signReg_7 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_7) @[block_division.scala 32:28]
    node _dotProductRegs_7_T = mul(multiplierReg_7, io_man_b_7) @[block_division.scala 35:42]
    node _signs_7_T = xor(signReg_7, io_sign_b_7) @[block_division.scala 36:27]
    node _two_complement_7_T = eq(signs_7, UInt<1>("h1")) @[block_division.scala 38:18]
    node _two_complement_7_T_1 = cat(UInt<1>("h0"), dotProductRegs_7) @[block_division.scala 39:16]
    node _two_complement_7_T_2 = not(_two_complement_7_T_1) @[block_division.scala 39:10]
    node _two_complement_7_T_3 = add(_two_complement_7_T_2, UInt<1>("h1")) @[block_division.scala 39:38]
    node _two_complement_7_T_4 = tail(_two_complement_7_T_3, 1) @[block_division.scala 39:38]
    node _two_complement_7_T_5 = cat(UInt<1>("h0"), dotProductRegs_7) @[block_division.scala 40:14]
    node _two_complement_7_T_6 = mux(_two_complement_7_T, _two_complement_7_T_4, _two_complement_7_T_5) @[block_division.scala 37:31]
    node _two_complement_buffer_7_T = asSInt(two_complement_7) @[block_division.scala 42:53]
    node _acc_0_T = add(two_complement_buffer_0, two_complement_buffer_1) @[block_division.scala 44:46]
    node _acc_0_T_1 = tail(_acc_0_T, 1) @[block_division.scala 44:46]
    node _acc_0_T_2 = asSInt(_acc_0_T_1) @[block_division.scala 44:46]
    node _acc_0_T_3 = add(_acc_0_T_2, two_complement_buffer_2) @[block_division.scala 44:46]
    node _acc_0_T_4 = tail(_acc_0_T_3, 1) @[block_division.scala 44:46]
    node _acc_0_T_5 = asSInt(_acc_0_T_4) @[block_division.scala 44:46]
    node _acc_0_T_6 = add(_acc_0_T_5, two_complement_buffer_3) @[block_division.scala 44:46]
    node _acc_0_T_7 = tail(_acc_0_T_6, 1) @[block_division.scala 44:46]
    node _acc_0_T_8 = asSInt(_acc_0_T_7) @[block_division.scala 44:46]
    node _acc_0_T_9 = add(_acc_0_T_8, two_complement_buffer_4) @[block_division.scala 44:46]
    node _acc_0_T_10 = tail(_acc_0_T_9, 1) @[block_division.scala 44:46]
    node _acc_0_T_11 = asSInt(_acc_0_T_10) @[block_division.scala 44:46]
    node _acc_0_T_12 = add(_acc_0_T_11, two_complement_buffer_5) @[block_division.scala 44:46]
    node _acc_0_T_13 = tail(_acc_0_T_12, 1) @[block_division.scala 44:46]
    node _acc_0_T_14 = asSInt(_acc_0_T_13) @[block_division.scala 44:46]
    node _acc_0_T_15 = add(_acc_0_T_14, two_complement_buffer_6) @[block_division.scala 44:46]
    node _acc_0_T_16 = tail(_acc_0_T_15, 1) @[block_division.scala 44:46]
    node _acc_0_T_17 = asSInt(_acc_0_T_16) @[block_division.scala 44:46]
    node _acc_0_T_18 = add(_acc_0_T_17, two_complement_buffer_7) @[block_division.scala 44:46]
    node _acc_0_T_19 = tail(_acc_0_T_18, 1) @[block_division.scala 44:46]
    node _acc_0_T_20 = asSInt(_acc_0_T_19) @[block_division.scala 44:46]
    node _exp_output_1_T = add(io_exp_a_1, io_exp_b_1) @[block_division.scala 25:34]
    node _exp_output_1_T_1 = tail(_exp_output_1_T, 1) @[block_division.scala 25:34]
    reg multiplierReg_8 : UInt<5>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_8) @[block_division.scala 31:34]
    reg signReg_8 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_8) @[block_division.scala 32:28]
    node _dotProductRegs_0_T_1 = mul(multiplierReg_8, io_man_b_8) @[block_division.scala 35:42]
    node _signs_0_T_1 = xor(signReg_8, io_sign_b_8) @[block_division.scala 36:27]
    node _two_complement_0_T_7 = eq(signs_0, UInt<1>("h1")) @[block_division.scala 38:18]
    node _two_complement_0_T_8 = cat(UInt<1>("h0"), dotProductRegs_0) @[block_division.scala 39:16]
    node _two_complement_0_T_9 = not(_two_complement_0_T_8) @[block_division.scala 39:10]
    node _two_complement_0_T_10 = add(_two_complement_0_T_9, UInt<1>("h1")) @[block_division.scala 39:38]
    node _two_complement_0_T_11 = tail(_two_complement_0_T_10, 1) @[block_division.scala 39:38]
    node _two_complement_0_T_12 = cat(UInt<1>("h0"), dotProductRegs_0) @[block_division.scala 40:14]
    node _two_complement_0_T_13 = mux(_two_complement_0_T_7, _two_complement_0_T_11, _two_complement_0_T_12) @[block_division.scala 37:31]
    node _two_complement_buffer_0_T_1 = asSInt(two_complement_0) @[block_division.scala 42:53]
    reg multiplierReg_9 : UInt<5>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_9) @[block_division.scala 31:34]
    reg signReg_9 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_9) @[block_division.scala 32:28]
    node _dotProductRegs_1_T_1 = mul(multiplierReg_9, io_man_b_9) @[block_division.scala 35:42]
    node _signs_1_T_1 = xor(signReg_9, io_sign_b_9) @[block_division.scala 36:27]
    node _two_complement_1_T_7 = eq(signs_1, UInt<1>("h1")) @[block_division.scala 38:18]
    node _two_complement_1_T_8 = cat(UInt<1>("h0"), dotProductRegs_1) @[block_division.scala 39:16]
    node _two_complement_1_T_9 = not(_two_complement_1_T_8) @[block_division.scala 39:10]
    node _two_complement_1_T_10 = add(_two_complement_1_T_9, UInt<1>("h1")) @[block_division.scala 39:38]
    node _two_complement_1_T_11 = tail(_two_complement_1_T_10, 1) @[block_division.scala 39:38]
    node _two_complement_1_T_12 = cat(UInt<1>("h0"), dotProductRegs_1) @[block_division.scala 40:14]
    node _two_complement_1_T_13 = mux(_two_complement_1_T_7, _two_complement_1_T_11, _two_complement_1_T_12) @[block_division.scala 37:31]
    node _two_complement_buffer_1_T_1 = asSInt(two_complement_1) @[block_division.scala 42:53]
    reg multiplierReg_10 : UInt<5>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_10) @[block_division.scala 31:34]
    reg signReg_10 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_10) @[block_division.scala 32:28]
    node _dotProductRegs_2_T_1 = mul(multiplierReg_10, io_man_b_10) @[block_division.scala 35:42]
    node _signs_2_T_1 = xor(signReg_10, io_sign_b_10) @[block_division.scala 36:27]
    node _two_complement_2_T_7 = eq(signs_2, UInt<1>("h1")) @[block_division.scala 38:18]
    node _two_complement_2_T_8 = cat(UInt<1>("h0"), dotProductRegs_2) @[block_division.scala 39:16]
    node _two_complement_2_T_9 = not(_two_complement_2_T_8) @[block_division.scala 39:10]
    node _two_complement_2_T_10 = add(_two_complement_2_T_9, UInt<1>("h1")) @[block_division.scala 39:38]
    node _two_complement_2_T_11 = tail(_two_complement_2_T_10, 1) @[block_division.scala 39:38]
    node _two_complement_2_T_12 = cat(UInt<1>("h0"), dotProductRegs_2) @[block_division.scala 40:14]
    node _two_complement_2_T_13 = mux(_two_complement_2_T_7, _two_complement_2_T_11, _two_complement_2_T_12) @[block_division.scala 37:31]
    node _two_complement_buffer_2_T_1 = asSInt(two_complement_2) @[block_division.scala 42:53]
    reg multiplierReg_11 : UInt<5>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_11) @[block_division.scala 31:34]
    reg signReg_11 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_11) @[block_division.scala 32:28]
    node _dotProductRegs_3_T_1 = mul(multiplierReg_11, io_man_b_11) @[block_division.scala 35:42]
    node _signs_3_T_1 = xor(signReg_11, io_sign_b_11) @[block_division.scala 36:27]
    node _two_complement_3_T_7 = eq(signs_3, UInt<1>("h1")) @[block_division.scala 38:18]
    node _two_complement_3_T_8 = cat(UInt<1>("h0"), dotProductRegs_3) @[block_division.scala 39:16]
    node _two_complement_3_T_9 = not(_two_complement_3_T_8) @[block_division.scala 39:10]
    node _two_complement_3_T_10 = add(_two_complement_3_T_9, UInt<1>("h1")) @[block_division.scala 39:38]
    node _two_complement_3_T_11 = tail(_two_complement_3_T_10, 1) @[block_division.scala 39:38]
    node _two_complement_3_T_12 = cat(UInt<1>("h0"), dotProductRegs_3) @[block_division.scala 40:14]
    node _two_complement_3_T_13 = mux(_two_complement_3_T_7, _two_complement_3_T_11, _two_complement_3_T_12) @[block_division.scala 37:31]
    node _two_complement_buffer_3_T_1 = asSInt(two_complement_3) @[block_division.scala 42:53]
    reg multiplierReg_12 : UInt<5>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_12) @[block_division.scala 31:34]
    reg signReg_12 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_12) @[block_division.scala 32:28]
    node _dotProductRegs_4_T_1 = mul(multiplierReg_12, io_man_b_12) @[block_division.scala 35:42]
    node _signs_4_T_1 = xor(signReg_12, io_sign_b_12) @[block_division.scala 36:27]
    node _two_complement_4_T_7 = eq(signs_4, UInt<1>("h1")) @[block_division.scala 38:18]
    node _two_complement_4_T_8 = cat(UInt<1>("h0"), dotProductRegs_4) @[block_division.scala 39:16]
    node _two_complement_4_T_9 = not(_two_complement_4_T_8) @[block_division.scala 39:10]
    node _two_complement_4_T_10 = add(_two_complement_4_T_9, UInt<1>("h1")) @[block_division.scala 39:38]
    node _two_complement_4_T_11 = tail(_two_complement_4_T_10, 1) @[block_division.scala 39:38]
    node _two_complement_4_T_12 = cat(UInt<1>("h0"), dotProductRegs_4) @[block_division.scala 40:14]
    node _two_complement_4_T_13 = mux(_two_complement_4_T_7, _two_complement_4_T_11, _two_complement_4_T_12) @[block_division.scala 37:31]
    node _two_complement_buffer_4_T_1 = asSInt(two_complement_4) @[block_division.scala 42:53]
    reg multiplierReg_13 : UInt<5>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_13) @[block_division.scala 31:34]
    reg signReg_13 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_13) @[block_division.scala 32:28]
    node _dotProductRegs_5_T_1 = mul(multiplierReg_13, io_man_b_13) @[block_division.scala 35:42]
    node _signs_5_T_1 = xor(signReg_13, io_sign_b_13) @[block_division.scala 36:27]
    node _two_complement_5_T_7 = eq(signs_5, UInt<1>("h1")) @[block_division.scala 38:18]
    node _two_complement_5_T_8 = cat(UInt<1>("h0"), dotProductRegs_5) @[block_division.scala 39:16]
    node _two_complement_5_T_9 = not(_two_complement_5_T_8) @[block_division.scala 39:10]
    node _two_complement_5_T_10 = add(_two_complement_5_T_9, UInt<1>("h1")) @[block_division.scala 39:38]
    node _two_complement_5_T_11 = tail(_two_complement_5_T_10, 1) @[block_division.scala 39:38]
    node _two_complement_5_T_12 = cat(UInt<1>("h0"), dotProductRegs_5) @[block_division.scala 40:14]
    node _two_complement_5_T_13 = mux(_two_complement_5_T_7, _two_complement_5_T_11, _two_complement_5_T_12) @[block_division.scala 37:31]
    node _two_complement_buffer_5_T_1 = asSInt(two_complement_5) @[block_division.scala 42:53]
    reg multiplierReg_14 : UInt<5>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_14) @[block_division.scala 31:34]
    reg signReg_14 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_14) @[block_division.scala 32:28]
    node _dotProductRegs_6_T_1 = mul(multiplierReg_14, io_man_b_14) @[block_division.scala 35:42]
    node _signs_6_T_1 = xor(signReg_14, io_sign_b_14) @[block_division.scala 36:27]
    node _two_complement_6_T_7 = eq(signs_6, UInt<1>("h1")) @[block_division.scala 38:18]
    node _two_complement_6_T_8 = cat(UInt<1>("h0"), dotProductRegs_6) @[block_division.scala 39:16]
    node _two_complement_6_T_9 = not(_two_complement_6_T_8) @[block_division.scala 39:10]
    node _two_complement_6_T_10 = add(_two_complement_6_T_9, UInt<1>("h1")) @[block_division.scala 39:38]
    node _two_complement_6_T_11 = tail(_two_complement_6_T_10, 1) @[block_division.scala 39:38]
    node _two_complement_6_T_12 = cat(UInt<1>("h0"), dotProductRegs_6) @[block_division.scala 40:14]
    node _two_complement_6_T_13 = mux(_two_complement_6_T_7, _two_complement_6_T_11, _two_complement_6_T_12) @[block_division.scala 37:31]
    node _two_complement_buffer_6_T_1 = asSInt(two_complement_6) @[block_division.scala 42:53]
    reg multiplierReg_15 : UInt<5>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_15) @[block_division.scala 31:34]
    reg signReg_15 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_15) @[block_division.scala 32:28]
    node _dotProductRegs_7_T_1 = mul(multiplierReg_15, io_man_b_15) @[block_division.scala 35:42]
    node _signs_7_T_1 = xor(signReg_15, io_sign_b_15) @[block_division.scala 36:27]
    node _two_complement_7_T_7 = eq(signs_7, UInt<1>("h1")) @[block_division.scala 38:18]
    node _two_complement_7_T_8 = cat(UInt<1>("h0"), dotProductRegs_7) @[block_division.scala 39:16]
    node _two_complement_7_T_9 = not(_two_complement_7_T_8) @[block_division.scala 39:10]
    node _two_complement_7_T_10 = add(_two_complement_7_T_9, UInt<1>("h1")) @[block_division.scala 39:38]
    node _two_complement_7_T_11 = tail(_two_complement_7_T_10, 1) @[block_division.scala 39:38]
    node _two_complement_7_T_12 = cat(UInt<1>("h0"), dotProductRegs_7) @[block_division.scala 40:14]
    node _two_complement_7_T_13 = mux(_two_complement_7_T_7, _two_complement_7_T_11, _two_complement_7_T_12) @[block_division.scala 37:31]
    node _two_complement_buffer_7_T_1 = asSInt(two_complement_7) @[block_division.scala 42:53]
    node _acc_1_T = add(two_complement_buffer_0, two_complement_buffer_1) @[block_division.scala 44:46]
    node _acc_1_T_1 = tail(_acc_1_T, 1) @[block_division.scala 44:46]
    node _acc_1_T_2 = asSInt(_acc_1_T_1) @[block_division.scala 44:46]
    node _acc_1_T_3 = add(_acc_1_T_2, two_complement_buffer_2) @[block_division.scala 44:46]
    node _acc_1_T_4 = tail(_acc_1_T_3, 1) @[block_division.scala 44:46]
    node _acc_1_T_5 = asSInt(_acc_1_T_4) @[block_division.scala 44:46]
    node _acc_1_T_6 = add(_acc_1_T_5, two_complement_buffer_3) @[block_division.scala 44:46]
    node _acc_1_T_7 = tail(_acc_1_T_6, 1) @[block_division.scala 44:46]
    node _acc_1_T_8 = asSInt(_acc_1_T_7) @[block_division.scala 44:46]
    node _acc_1_T_9 = add(_acc_1_T_8, two_complement_buffer_4) @[block_division.scala 44:46]
    node _acc_1_T_10 = tail(_acc_1_T_9, 1) @[block_division.scala 44:46]
    node _acc_1_T_11 = asSInt(_acc_1_T_10) @[block_division.scala 44:46]
    node _acc_1_T_12 = add(_acc_1_T_11, two_complement_buffer_5) @[block_division.scala 44:46]
    node _acc_1_T_13 = tail(_acc_1_T_12, 1) @[block_division.scala 44:46]
    node _acc_1_T_14 = asSInt(_acc_1_T_13) @[block_division.scala 44:46]
    node _acc_1_T_15 = add(_acc_1_T_14, two_complement_buffer_6) @[block_division.scala 44:46]
    node _acc_1_T_16 = tail(_acc_1_T_15, 1) @[block_division.scala 44:46]
    node _acc_1_T_17 = asSInt(_acc_1_T_16) @[block_division.scala 44:46]
    node _acc_1_T_18 = add(_acc_1_T_17, two_complement_buffer_7) @[block_division.scala 44:46]
    node _acc_1_T_19 = tail(_acc_1_T_18, 1) @[block_division.scala 44:46]
    node _acc_1_T_20 = asSInt(_acc_1_T_19) @[block_division.scala 44:46]
    node _WIRE__0 = acc_0 @[block_division.scala 48:{39,39}]
    node _WIRE__1 = acc_1 @[block_division.scala 48:{39,39}]
    node _WIRE_1_0 = exp_output_0 @[block_division.scala 49:{35,35}]
    node _WIRE_1_1 = exp_output_1 @[block_division.scala 49:{35,35}]
    io_result <= adderTreeInst.io_result_tree @[block_division.scala 50:13]
    exp_output_0 <= mux(reset, UInt<8>("h0"), _exp_output_0_T_1) @[block_division.scala 17:{60,60} 25:19]
    exp_output_1 <= mux(reset, UInt<8>("h0"), _exp_output_1_T_1) @[block_division.scala 17:{60,60} 25:19]
    dotProductRegs_0 <= mux(reset, UInt<10>("h0"), _dotProductRegs_0_T_1) @[block_division.scala 18:{51,51} 35:25]
    dotProductRegs_1 <= mux(reset, UInt<10>("h0"), _dotProductRegs_1_T_1) @[block_division.scala 18:{51,51} 35:25]
    dotProductRegs_2 <= mux(reset, UInt<10>("h0"), _dotProductRegs_2_T_1) @[block_division.scala 18:{51,51} 35:25]
    dotProductRegs_3 <= mux(reset, UInt<10>("h0"), _dotProductRegs_3_T_1) @[block_division.scala 18:{51,51} 35:25]
    dotProductRegs_4 <= mux(reset, UInt<10>("h0"), _dotProductRegs_4_T_1) @[block_division.scala 18:{51,51} 35:25]
    dotProductRegs_5 <= mux(reset, UInt<10>("h0"), _dotProductRegs_5_T_1) @[block_division.scala 18:{51,51} 35:25]
    dotProductRegs_6 <= mux(reset, UInt<10>("h0"), _dotProductRegs_6_T_1) @[block_division.scala 18:{51,51} 35:25]
    dotProductRegs_7 <= mux(reset, UInt<10>("h0"), _dotProductRegs_7_T_1) @[block_division.scala 18:{51,51} 35:25]
    signs_0 <= mux(reset, UInt<1>("h0"), _signs_0_T_1) @[block_division.scala 19:{42,42} 36:16]
    signs_1 <= mux(reset, UInt<1>("h0"), _signs_1_T_1) @[block_division.scala 19:{42,42} 36:16]
    signs_2 <= mux(reset, UInt<1>("h0"), _signs_2_T_1) @[block_division.scala 19:{42,42} 36:16]
    signs_3 <= mux(reset, UInt<1>("h0"), _signs_3_T_1) @[block_division.scala 19:{42,42} 36:16]
    signs_4 <= mux(reset, UInt<1>("h0"), _signs_4_T_1) @[block_division.scala 19:{42,42} 36:16]
    signs_5 <= mux(reset, UInt<1>("h0"), _signs_5_T_1) @[block_division.scala 19:{42,42} 36:16]
    signs_6 <= mux(reset, UInt<1>("h0"), _signs_6_T_1) @[block_division.scala 19:{42,42} 36:16]
    signs_7 <= mux(reset, UInt<1>("h0"), _signs_7_T_1) @[block_division.scala 19:{42,42} 36:16]
    two_complement_0 <= mux(reset, UInt<11>("h0"), _two_complement_0_T_13) @[block_division.scala 20:{51,51} 37:25]
    two_complement_1 <= mux(reset, UInt<11>("h0"), _two_complement_1_T_13) @[block_division.scala 20:{51,51} 37:25]
    two_complement_2 <= mux(reset, UInt<11>("h0"), _two_complement_2_T_13) @[block_division.scala 20:{51,51} 37:25]
    two_complement_3 <= mux(reset, UInt<11>("h0"), _two_complement_3_T_13) @[block_division.scala 20:{51,51} 37:25]
    two_complement_4 <= mux(reset, UInt<11>("h0"), _two_complement_4_T_13) @[block_division.scala 20:{51,51} 37:25]
    two_complement_5 <= mux(reset, UInt<11>("h0"), _two_complement_5_T_13) @[block_division.scala 20:{51,51} 37:25]
    two_complement_6 <= mux(reset, UInt<11>("h0"), _two_complement_6_T_13) @[block_division.scala 20:{51,51} 37:25]
    two_complement_7 <= mux(reset, UInt<11>("h0"), _two_complement_7_T_13) @[block_division.scala 20:{51,51} 37:25]
    two_complement_buffer_0 <= mux(reset, asSInt(UInt<11>("h0")), _two_complement_buffer_0_T_1) @[block_division.scala 21:{58,58} 42:32]
    two_complement_buffer_1 <= mux(reset, asSInt(UInt<11>("h0")), _two_complement_buffer_1_T_1) @[block_division.scala 21:{58,58} 42:32]
    two_complement_buffer_2 <= mux(reset, asSInt(UInt<11>("h0")), _two_complement_buffer_2_T_1) @[block_division.scala 21:{58,58} 42:32]
    two_complement_buffer_3 <= mux(reset, asSInt(UInt<11>("h0")), _two_complement_buffer_3_T_1) @[block_division.scala 21:{58,58} 42:32]
    two_complement_buffer_4 <= mux(reset, asSInt(UInt<11>("h0")), _two_complement_buffer_4_T_1) @[block_division.scala 21:{58,58} 42:32]
    two_complement_buffer_5 <= mux(reset, asSInt(UInt<11>("h0")), _two_complement_buffer_5_T_1) @[block_division.scala 21:{58,58} 42:32]
    two_complement_buffer_6 <= mux(reset, asSInt(UInt<11>("h0")), _two_complement_buffer_6_T_1) @[block_division.scala 21:{58,58} 42:32]
    two_complement_buffer_7 <= mux(reset, asSInt(UInt<11>("h0")), _two_complement_buffer_7_T_1) @[block_division.scala 21:{58,58} 42:32]
    acc_0 <= mux(reset, asSInt(UInt<18>("h0")), _acc_0_T_20) @[block_division.scala 22:{53,53} 44:12]
    acc_1 <= mux(reset, asSInt(UInt<18>("h0")), _acc_1_T_20) @[block_division.scala 22:{53,53} 44:12]
    multiplierReg <= mux(reset, UInt<5>("h0"), io_man_a_0) @[block_division.scala 31:{34,34} 34:21]
    signReg <= mux(reset, UInt<1>("h0"), io_sign_a_0) @[block_division.scala 32:{28,28} 33:15]
    multiplierReg_1 <= mux(reset, UInt<5>("h0"), io_man_a_1) @[block_division.scala 31:{34,34} 34:21]
    signReg_1 <= mux(reset, UInt<1>("h0"), io_sign_a_1) @[block_division.scala 32:{28,28} 33:15]
    multiplierReg_2 <= mux(reset, UInt<5>("h0"), io_man_a_2) @[block_division.scala 31:{34,34} 34:21]
    signReg_2 <= mux(reset, UInt<1>("h0"), io_sign_a_2) @[block_division.scala 32:{28,28} 33:15]
    multiplierReg_3 <= mux(reset, UInt<5>("h0"), io_man_a_3) @[block_division.scala 31:{34,34} 34:21]
    signReg_3 <= mux(reset, UInt<1>("h0"), io_sign_a_3) @[block_division.scala 32:{28,28} 33:15]
    multiplierReg_4 <= mux(reset, UInt<5>("h0"), io_man_a_4) @[block_division.scala 31:{34,34} 34:21]
    signReg_4 <= mux(reset, UInt<1>("h0"), io_sign_a_4) @[block_division.scala 32:{28,28} 33:15]
    multiplierReg_5 <= mux(reset, UInt<5>("h0"), io_man_a_5) @[block_division.scala 31:{34,34} 34:21]
    signReg_5 <= mux(reset, UInt<1>("h0"), io_sign_a_5) @[block_division.scala 32:{28,28} 33:15]
    multiplierReg_6 <= mux(reset, UInt<5>("h0"), io_man_a_6) @[block_division.scala 31:{34,34} 34:21]
    signReg_6 <= mux(reset, UInt<1>("h0"), io_sign_a_6) @[block_division.scala 32:{28,28} 33:15]
    multiplierReg_7 <= mux(reset, UInt<5>("h0"), io_man_a_7) @[block_division.scala 31:{34,34} 34:21]
    signReg_7 <= mux(reset, UInt<1>("h0"), io_sign_a_7) @[block_division.scala 32:{28,28} 33:15]
    multiplierReg_8 <= mux(reset, UInt<5>("h0"), io_man_a_8) @[block_division.scala 31:{34,34} 34:21]
    signReg_8 <= mux(reset, UInt<1>("h0"), io_sign_a_8) @[block_division.scala 32:{28,28} 33:15]
    multiplierReg_9 <= mux(reset, UInt<5>("h0"), io_man_a_9) @[block_division.scala 31:{34,34} 34:21]
    signReg_9 <= mux(reset, UInt<1>("h0"), io_sign_a_9) @[block_division.scala 32:{28,28} 33:15]
    multiplierReg_10 <= mux(reset, UInt<5>("h0"), io_man_a_10) @[block_division.scala 31:{34,34} 34:21]
    signReg_10 <= mux(reset, UInt<1>("h0"), io_sign_a_10) @[block_division.scala 32:{28,28} 33:15]
    multiplierReg_11 <= mux(reset, UInt<5>("h0"), io_man_a_11) @[block_division.scala 31:{34,34} 34:21]
    signReg_11 <= mux(reset, UInt<1>("h0"), io_sign_a_11) @[block_division.scala 32:{28,28} 33:15]
    multiplierReg_12 <= mux(reset, UInt<5>("h0"), io_man_a_12) @[block_division.scala 31:{34,34} 34:21]
    signReg_12 <= mux(reset, UInt<1>("h0"), io_sign_a_12) @[block_division.scala 32:{28,28} 33:15]
    multiplierReg_13 <= mux(reset, UInt<5>("h0"), io_man_a_13) @[block_division.scala 31:{34,34} 34:21]
    signReg_13 <= mux(reset, UInt<1>("h0"), io_sign_a_13) @[block_division.scala 32:{28,28} 33:15]
    multiplierReg_14 <= mux(reset, UInt<5>("h0"), io_man_a_14) @[block_division.scala 31:{34,34} 34:21]
    signReg_14 <= mux(reset, UInt<1>("h0"), io_sign_a_14) @[block_division.scala 32:{28,28} 33:15]
    multiplierReg_15 <= mux(reset, UInt<5>("h0"), io_man_a_15) @[block_division.scala 31:{34,34} 34:21]
    signReg_15 <= mux(reset, UInt<1>("h0"), io_sign_a_15) @[block_division.scala 32:{28,28} 33:15]
    adderTreeInst.clock <= clock
    adderTreeInst.reset <= reset
    adderTreeInst.io_sign_man_0 <= _WIRE__0 @[block_division.scala 48:29]
    adderTreeInst.io_sign_man_1 <= _WIRE__1 @[block_division.scala 48:29]
    adderTreeInst.io_exps_0 <= _WIRE_1_0 @[block_division.scala 49:25]
    adderTreeInst.io_exps_1 <= _WIRE_1_1 @[block_division.scala 49:25]
