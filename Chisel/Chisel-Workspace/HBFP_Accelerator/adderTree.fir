circuit adderTree :
  module adderTree :
    input clock : Clock
    input reset : UInt<1>
    output io : { flip signs : UInt<1>[4], flip mans : UInt<25>[4], flip exps : UInt<8>[4], result : UInt<14>}

    reg exp_buffer_0 : UInt<8>, clock with :
      reset => (reset, UInt<8>("h0")) @[adderTree.scala 13:60]
    reg exp_buffer_1 : UInt<8>, clock with :
      reset => (reset, UInt<8>("h0")) @[adderTree.scala 13:60]
    reg exp_buffer_2 : UInt<8>, clock with :
      reset => (reset, UInt<8>("h0")) @[adderTree.scala 13:60]
    reg exp_buffer_3 : UInt<8>, clock with :
      reset => (reset, UInt<8>("h0")) @[adderTree.scala 13:60]
    reg sign_buffer_0 : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[adderTree.scala 14:61]
    reg sign_buffer_1 : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[adderTree.scala 14:61]
    reg sign_buffer_2 : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[adderTree.scala 14:61]
    reg sign_buffer_3 : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[adderTree.scala 14:61]
    reg man_buffer_0 : UInt<28>, clock with :
      reset => (reset, UInt<28>("h0")) @[adderTree.scala 15:60]
    reg man_buffer_1 : UInt<28>, clock with :
      reset => (reset, UInt<28>("h0")) @[adderTree.scala 15:60]
    reg man_buffer_2 : UInt<28>, clock with :
      reset => (reset, UInt<28>("h0")) @[adderTree.scala 15:60]
    reg man_buffer_3 : UInt<28>, clock with :
      reset => (reset, UInt<28>("h0")) @[adderTree.scala 15:60]
    reg man_buffer_two_complement_0 : SInt<29>, clock with :
      reset => (reset, asSInt(UInt<29>("h0"))) @[adderTree.scala 16:75]
    reg man_buffer_two_complement_1 : SInt<29>, clock with :
      reset => (reset, asSInt(UInt<29>("h0"))) @[adderTree.scala 16:75]
    reg man_buffer_two_complement_2 : SInt<29>, clock with :
      reset => (reset, asSInt(UInt<29>("h0"))) @[adderTree.scala 16:75]
    reg man_buffer_two_complement_3 : SInt<29>, clock with :
      reset => (reset, asSInt(UInt<29>("h0"))) @[adderTree.scala 16:75]
    reg counter : UInt<10>, clock with :
      reset => (reset, UInt<10>("h0")) @[adderTree.scala 17:26]
    exp_buffer_0 <= io.exps[0] @[adderTree.scala 20:23]
    man_buffer_0 <= io.mans[0] @[adderTree.scala 21:23]
    sign_buffer_0 <= io.signs[0] @[adderTree.scala 22:24]
    node _man_buffer_two_complement_0_T = asSInt(io.signs[0]) @[adderTree.scala 23:57]
    node _man_buffer_two_complement_0_T_1 = eq(_man_buffer_two_complement_0_T, asSInt(UInt<2>("h1"))) @[adderTree.scala 23:63]
    node _man_buffer_two_complement_0_T_2 = cat(UInt<1>("h0"), man_buffer_0) @[adderTree.scala 23:78]
    node _man_buffer_two_complement_0_T_3 = not(_man_buffer_two_complement_0_T_2) @[adderTree.scala 23:72]
    node _man_buffer_two_complement_0_T_4 = add(_man_buffer_two_complement_0_T_3, UInt<1>("h1")) @[adderTree.scala 23:96]
    node _man_buffer_two_complement_0_T_5 = tail(_man_buffer_two_complement_0_T_4, 1) @[adderTree.scala 23:96]
    node _man_buffer_two_complement_0_T_6 = asSInt(_man_buffer_two_complement_0_T_5) @[adderTree.scala 23:103]
    node _man_buffer_two_complement_0_T_7 = cat(UInt<1>("h0"), man_buffer_0) @[adderTree.scala 23:116]
    node _man_buffer_two_complement_0_T_8 = asSInt(_man_buffer_two_complement_0_T_7) @[adderTree.scala 23:134]
    node _man_buffer_two_complement_0_T_9 = mux(_man_buffer_two_complement_0_T_1, _man_buffer_two_complement_0_T_6, _man_buffer_two_complement_0_T_8) @[adderTree.scala 23:44]
    man_buffer_two_complement_0 <= _man_buffer_two_complement_0_T_9 @[adderTree.scala 23:38]
    node _counter_T = add(counter, UInt<1>("h1")) @[adderTree.scala 24:28]
    node _counter_T_1 = tail(_counter_T, 1) @[adderTree.scala 24:28]
    counter <= _counter_T_1 @[adderTree.scala 24:17]
    exp_buffer_1 <= io.exps[1] @[adderTree.scala 20:23]
    man_buffer_1 <= io.mans[1] @[adderTree.scala 21:23]
    sign_buffer_1 <= io.signs[1] @[adderTree.scala 22:24]
    node _man_buffer_two_complement_1_T = asSInt(io.signs[1]) @[adderTree.scala 23:57]
    node _man_buffer_two_complement_1_T_1 = eq(_man_buffer_two_complement_1_T, asSInt(UInt<2>("h1"))) @[adderTree.scala 23:63]
    node _man_buffer_two_complement_1_T_2 = cat(UInt<1>("h0"), man_buffer_1) @[adderTree.scala 23:78]
    node _man_buffer_two_complement_1_T_3 = not(_man_buffer_two_complement_1_T_2) @[adderTree.scala 23:72]
    node _man_buffer_two_complement_1_T_4 = add(_man_buffer_two_complement_1_T_3, UInt<1>("h1")) @[adderTree.scala 23:96]
    node _man_buffer_two_complement_1_T_5 = tail(_man_buffer_two_complement_1_T_4, 1) @[adderTree.scala 23:96]
    node _man_buffer_two_complement_1_T_6 = asSInt(_man_buffer_two_complement_1_T_5) @[adderTree.scala 23:103]
    node _man_buffer_two_complement_1_T_7 = cat(UInt<1>("h0"), man_buffer_1) @[adderTree.scala 23:116]
    node _man_buffer_two_complement_1_T_8 = asSInt(_man_buffer_two_complement_1_T_7) @[adderTree.scala 23:134]
    node _man_buffer_two_complement_1_T_9 = mux(_man_buffer_two_complement_1_T_1, _man_buffer_two_complement_1_T_6, _man_buffer_two_complement_1_T_8) @[adderTree.scala 23:44]
    man_buffer_two_complement_1 <= _man_buffer_two_complement_1_T_9 @[adderTree.scala 23:38]
    node _counter_T_2 = add(counter, UInt<1>("h1")) @[adderTree.scala 24:28]
    node _counter_T_3 = tail(_counter_T_2, 1) @[adderTree.scala 24:28]
    counter <= _counter_T_3 @[adderTree.scala 24:17]
    exp_buffer_2 <= io.exps[2] @[adderTree.scala 20:23]
    man_buffer_2 <= io.mans[2] @[adderTree.scala 21:23]
    sign_buffer_2 <= io.signs[2] @[adderTree.scala 22:24]
    node _man_buffer_two_complement_2_T = asSInt(io.signs[2]) @[adderTree.scala 23:57]
    node _man_buffer_two_complement_2_T_1 = eq(_man_buffer_two_complement_2_T, asSInt(UInt<2>("h1"))) @[adderTree.scala 23:63]
    node _man_buffer_two_complement_2_T_2 = cat(UInt<1>("h0"), man_buffer_2) @[adderTree.scala 23:78]
    node _man_buffer_two_complement_2_T_3 = not(_man_buffer_two_complement_2_T_2) @[adderTree.scala 23:72]
    node _man_buffer_two_complement_2_T_4 = add(_man_buffer_two_complement_2_T_3, UInt<1>("h1")) @[adderTree.scala 23:96]
    node _man_buffer_two_complement_2_T_5 = tail(_man_buffer_two_complement_2_T_4, 1) @[adderTree.scala 23:96]
    node _man_buffer_two_complement_2_T_6 = asSInt(_man_buffer_two_complement_2_T_5) @[adderTree.scala 23:103]
    node _man_buffer_two_complement_2_T_7 = cat(UInt<1>("h0"), man_buffer_2) @[adderTree.scala 23:116]
    node _man_buffer_two_complement_2_T_8 = asSInt(_man_buffer_two_complement_2_T_7) @[adderTree.scala 23:134]
    node _man_buffer_two_complement_2_T_9 = mux(_man_buffer_two_complement_2_T_1, _man_buffer_two_complement_2_T_6, _man_buffer_two_complement_2_T_8) @[adderTree.scala 23:44]
    man_buffer_two_complement_2 <= _man_buffer_two_complement_2_T_9 @[adderTree.scala 23:38]
    node _counter_T_4 = add(counter, UInt<1>("h1")) @[adderTree.scala 24:28]
    node _counter_T_5 = tail(_counter_T_4, 1) @[adderTree.scala 24:28]
    counter <= _counter_T_5 @[adderTree.scala 24:17]
    exp_buffer_3 <= io.exps[3] @[adderTree.scala 20:23]
    man_buffer_3 <= io.mans[3] @[adderTree.scala 21:23]
    sign_buffer_3 <= io.signs[3] @[adderTree.scala 22:24]
    node _man_buffer_two_complement_3_T = asSInt(io.signs[3]) @[adderTree.scala 23:57]
    node _man_buffer_two_complement_3_T_1 = eq(_man_buffer_two_complement_3_T, asSInt(UInt<2>("h1"))) @[adderTree.scala 23:63]
    node _man_buffer_two_complement_3_T_2 = cat(UInt<1>("h0"), man_buffer_3) @[adderTree.scala 23:78]
    node _man_buffer_two_complement_3_T_3 = not(_man_buffer_two_complement_3_T_2) @[adderTree.scala 23:72]
    node _man_buffer_two_complement_3_T_4 = add(_man_buffer_two_complement_3_T_3, UInt<1>("h1")) @[adderTree.scala 23:96]
    node _man_buffer_two_complement_3_T_5 = tail(_man_buffer_two_complement_3_T_4, 1) @[adderTree.scala 23:96]
    node _man_buffer_two_complement_3_T_6 = asSInt(_man_buffer_two_complement_3_T_5) @[adderTree.scala 23:103]
    node _man_buffer_two_complement_3_T_7 = cat(UInt<1>("h0"), man_buffer_3) @[adderTree.scala 23:116]
    node _man_buffer_two_complement_3_T_8 = asSInt(_man_buffer_two_complement_3_T_7) @[adderTree.scala 23:134]
    node _man_buffer_two_complement_3_T_9 = mux(_man_buffer_two_complement_3_T_1, _man_buffer_two_complement_3_T_6, _man_buffer_two_complement_3_T_8) @[adderTree.scala 23:44]
    man_buffer_two_complement_3 <= _man_buffer_two_complement_3_T_9 @[adderTree.scala 23:38]
    node _counter_T_6 = add(counter, UInt<1>("h1")) @[adderTree.scala 24:28]
    node _counter_T_7 = tail(_counter_T_6, 1) @[adderTree.scala 24:28]
    counter <= _counter_T_7 @[adderTree.scala 24:17]
    node _T = eq(counter, UInt<3>("h4")) @[adderTree.scala 27:18]
    when _T : @[adderTree.scala 27:47]
      node _exp_buffer_0_T = gt(exp_buffer_0, exp_buffer_1) @[adderTree.scala 31:57]
      node _exp_buffer_0_T_1 = mux(_exp_buffer_0_T, exp_buffer_0, exp_buffer_1) @[adderTree.scala 31:41]
      exp_buffer_0 <= _exp_buffer_0_T_1 @[adderTree.scala 31:35]
      node _exp_difference_T = gt(exp_buffer_0, exp_buffer_1) @[adderTree.scala 32:61]
      node _exp_difference_T_1 = sub(exp_buffer_0, exp_buffer_1) @[adderTree.scala 32:97]
      node _exp_difference_T_2 = tail(_exp_difference_T_1, 1) @[adderTree.scala 32:97]
      node _exp_difference_T_3 = sub(exp_buffer_1, exp_buffer_0) @[adderTree.scala 32:136]
      node _exp_difference_T_4 = tail(_exp_difference_T_3, 1) @[adderTree.scala 32:136]
      node exp_difference = mux(_exp_difference_T, _exp_difference_T_2, _exp_difference_T_4) @[adderTree.scala 32:45]
      node _man_buffer_two_complement_0_T_10 = gt(exp_buffer_0, exp_buffer_1) @[adderTree.scala 33:72]
      node _man_buffer_two_complement_0_T_11 = dshr(man_buffer_two_complement_1, exp_difference) @[adderTree.scala 33:158]
      node _man_buffer_two_complement_0_T_12 = add(man_buffer_two_complement_0, _man_buffer_two_complement_0_T_11) @[adderTree.scala 33:123]
      node _man_buffer_two_complement_0_T_13 = tail(_man_buffer_two_complement_0_T_12, 1) @[adderTree.scala 33:123]
      node _man_buffer_two_complement_0_T_14 = asSInt(_man_buffer_two_complement_0_T_13) @[adderTree.scala 33:123]
      node _man_buffer_two_complement_0_T_15 = dshr(man_buffer_two_complement_0, exp_difference) @[adderTree.scala 33:243]
      node _man_buffer_two_complement_0_T_16 = add(man_buffer_two_complement_1, _man_buffer_two_complement_0_T_15) @[adderTree.scala 33:210]
      node _man_buffer_two_complement_0_T_17 = tail(_man_buffer_two_complement_0_T_16, 1) @[adderTree.scala 33:210]
      node _man_buffer_two_complement_0_T_18 = asSInt(_man_buffer_two_complement_0_T_17) @[adderTree.scala 33:210]
      node _man_buffer_two_complement_0_T_19 = mux(_man_buffer_two_complement_0_T_10, _man_buffer_two_complement_0_T_14, _man_buffer_two_complement_0_T_18) @[adderTree.scala 33:56]
      man_buffer_two_complement_0 <= _man_buffer_two_complement_0_T_19 @[adderTree.scala 33:50]
      node _exp_buffer_1_T = gt(exp_buffer_2, exp_buffer_3) @[adderTree.scala 31:57]
      node _exp_buffer_1_T_1 = mux(_exp_buffer_1_T, exp_buffer_2, exp_buffer_3) @[adderTree.scala 31:41]
      exp_buffer_1 <= _exp_buffer_1_T_1 @[adderTree.scala 31:35]
      node _exp_difference_T_5 = gt(exp_buffer_2, exp_buffer_3) @[adderTree.scala 32:61]
      node _exp_difference_T_6 = sub(exp_buffer_2, exp_buffer_3) @[adderTree.scala 32:97]
      node _exp_difference_T_7 = tail(_exp_difference_T_6, 1) @[adderTree.scala 32:97]
      node _exp_difference_T_8 = sub(exp_buffer_3, exp_buffer_2) @[adderTree.scala 32:136]
      node _exp_difference_T_9 = tail(_exp_difference_T_8, 1) @[adderTree.scala 32:136]
      node exp_difference_1 = mux(_exp_difference_T_5, _exp_difference_T_7, _exp_difference_T_9) @[adderTree.scala 32:45]
      node _man_buffer_two_complement_1_T_10 = gt(exp_buffer_2, exp_buffer_3) @[adderTree.scala 33:72]
      node _man_buffer_two_complement_1_T_11 = dshr(man_buffer_two_complement_3, exp_difference_1) @[adderTree.scala 33:158]
      node _man_buffer_two_complement_1_T_12 = add(man_buffer_two_complement_2, _man_buffer_two_complement_1_T_11) @[adderTree.scala 33:123]
      node _man_buffer_two_complement_1_T_13 = tail(_man_buffer_two_complement_1_T_12, 1) @[adderTree.scala 33:123]
      node _man_buffer_two_complement_1_T_14 = asSInt(_man_buffer_two_complement_1_T_13) @[adderTree.scala 33:123]
      node _man_buffer_two_complement_1_T_15 = dshr(man_buffer_two_complement_2, exp_difference_1) @[adderTree.scala 33:243]
      node _man_buffer_two_complement_1_T_16 = add(man_buffer_two_complement_3, _man_buffer_two_complement_1_T_15) @[adderTree.scala 33:210]
      node _man_buffer_two_complement_1_T_17 = tail(_man_buffer_two_complement_1_T_16, 1) @[adderTree.scala 33:210]
      node _man_buffer_two_complement_1_T_18 = asSInt(_man_buffer_two_complement_1_T_17) @[adderTree.scala 33:210]
      node _man_buffer_two_complement_1_T_19 = mux(_man_buffer_two_complement_1_T_10, _man_buffer_two_complement_1_T_14, _man_buffer_two_complement_1_T_18) @[adderTree.scala 33:56]
      man_buffer_two_complement_1 <= _man_buffer_two_complement_1_T_19 @[adderTree.scala 33:50]
      node _exp_buffer_0_T_2 = gt(exp_buffer_0, exp_buffer_1) @[adderTree.scala 31:57]
      node _exp_buffer_0_T_3 = mux(_exp_buffer_0_T_2, exp_buffer_0, exp_buffer_1) @[adderTree.scala 31:41]
      exp_buffer_0 <= _exp_buffer_0_T_3 @[adderTree.scala 31:35]
      node _exp_difference_T_10 = gt(exp_buffer_0, exp_buffer_1) @[adderTree.scala 32:61]
      node _exp_difference_T_11 = sub(exp_buffer_0, exp_buffer_1) @[adderTree.scala 32:97]
      node _exp_difference_T_12 = tail(_exp_difference_T_11, 1) @[adderTree.scala 32:97]
      node _exp_difference_T_13 = sub(exp_buffer_1, exp_buffer_0) @[adderTree.scala 32:136]
      node _exp_difference_T_14 = tail(_exp_difference_T_13, 1) @[adderTree.scala 32:136]
      node exp_difference_2 = mux(_exp_difference_T_10, _exp_difference_T_12, _exp_difference_T_14) @[adderTree.scala 32:45]
      node _man_buffer_two_complement_0_T_20 = gt(exp_buffer_0, exp_buffer_1) @[adderTree.scala 33:72]
      node _man_buffer_two_complement_0_T_21 = dshr(man_buffer_two_complement_1, exp_difference_2) @[adderTree.scala 33:158]
      node _man_buffer_two_complement_0_T_22 = add(man_buffer_two_complement_0, _man_buffer_two_complement_0_T_21) @[adderTree.scala 33:123]
      node _man_buffer_two_complement_0_T_23 = tail(_man_buffer_two_complement_0_T_22, 1) @[adderTree.scala 33:123]
      node _man_buffer_two_complement_0_T_24 = asSInt(_man_buffer_two_complement_0_T_23) @[adderTree.scala 33:123]
      node _man_buffer_two_complement_0_T_25 = dshr(man_buffer_two_complement_0, exp_difference_2) @[adderTree.scala 33:243]
      node _man_buffer_two_complement_0_T_26 = add(man_buffer_two_complement_1, _man_buffer_two_complement_0_T_25) @[adderTree.scala 33:210]
      node _man_buffer_two_complement_0_T_27 = tail(_man_buffer_two_complement_0_T_26, 1) @[adderTree.scala 33:210]
      node _man_buffer_two_complement_0_T_28 = asSInt(_man_buffer_two_complement_0_T_27) @[adderTree.scala 33:210]
      node _man_buffer_two_complement_0_T_29 = mux(_man_buffer_two_complement_0_T_20, _man_buffer_two_complement_0_T_24, _man_buffer_two_complement_0_T_28) @[adderTree.scala 33:56]
      man_buffer_two_complement_0 <= _man_buffer_two_complement_0_T_29 @[adderTree.scala 33:50]
    reg concatenated_output : UInt<29>, clock with :
      reset => (reset, UInt<29>("h0")) @[adderTree.scala 43:38]
    node _concatenated_output_T = bits(man_buffer_two_complement_0, 28, 28) @[adderTree.scala 44:60]
    node _concatenated_output_T_1 = eq(_concatenated_output_T, UInt<1>("h1")) @[adderTree.scala 44:107]
    node _concatenated_output_T_2 = bits(man_buffer_two_complement_0, 27, 0) @[adderTree.scala 44:153]
    node _concatenated_output_T_3 = cat(UInt<1>("h0"), _concatenated_output_T_2) @[adderTree.scala 44:121]
    node _concatenated_output_T_4 = not(_concatenated_output_T_3) @[adderTree.scala 44:115]
    node _concatenated_output_T_5 = add(_concatenated_output_T_4, UInt<1>("h1")) @[adderTree.scala 44:206]
    node _concatenated_output_T_6 = tail(_concatenated_output_T_5, 1) @[adderTree.scala 44:206]
    node _concatenated_output_T_7 = asUInt(man_buffer_two_complement_0) @[adderTree.scala 44:244]
    node _concatenated_output_T_8 = mux(_concatenated_output_T_1, _concatenated_output_T_6, _concatenated_output_T_7) @[adderTree.scala 44:31]
    concatenated_output <= _concatenated_output_T_8 @[adderTree.scala 44:25]
    reg right_shift : UInt<8>, clock with :
      reset => (reset, UInt<8>("h0")) @[adderTree.scala 46:30]
    reg actual_shift : UInt<8>, clock with :
      reset => (reset, UInt<8>("h0")) @[adderTree.scala 47:31]
    node _buf_T = bits(concatenated_output, 27, 5) @[adderTree.scala 48:42]
    node _buf_T_1 = bits(_buf_T, 15, 0) @[Bitwise.scala 114:18]
    node _buf_T_2 = shl(UInt<8>("hff"), 8) @[Bitwise.scala 107:52]
    node _buf_T_3 = xor(UInt<16>("hffff"), _buf_T_2) @[Bitwise.scala 107:21]
    node _buf_T_4 = shr(_buf_T_1, 8) @[Bitwise.scala 108:21]
    node _buf_T_5 = and(_buf_T_4, _buf_T_3) @[Bitwise.scala 108:31]
    node _buf_T_6 = bits(_buf_T_1, 7, 0) @[Bitwise.scala 108:46]
    node _buf_T_7 = shl(_buf_T_6, 8) @[Bitwise.scala 108:70]
    node _buf_T_8 = not(_buf_T_3) @[Bitwise.scala 108:82]
    node _buf_T_9 = and(_buf_T_7, _buf_T_8) @[Bitwise.scala 108:80]
    node _buf_T_10 = or(_buf_T_5, _buf_T_9) @[Bitwise.scala 108:39]
    node _buf_T_11 = bits(_buf_T_3, 11, 0) @[Bitwise.scala 107:28]
    node _buf_T_12 = shl(_buf_T_11, 4) @[Bitwise.scala 107:52]
    node _buf_T_13 = xor(_buf_T_3, _buf_T_12) @[Bitwise.scala 107:21]
    node _buf_T_14 = shr(_buf_T_10, 4) @[Bitwise.scala 108:21]
    node _buf_T_15 = and(_buf_T_14, _buf_T_13) @[Bitwise.scala 108:31]
    node _buf_T_16 = bits(_buf_T_10, 11, 0) @[Bitwise.scala 108:46]
    node _buf_T_17 = shl(_buf_T_16, 4) @[Bitwise.scala 108:70]
    node _buf_T_18 = not(_buf_T_13) @[Bitwise.scala 108:82]
    node _buf_T_19 = and(_buf_T_17, _buf_T_18) @[Bitwise.scala 108:80]
    node _buf_T_20 = or(_buf_T_15, _buf_T_19) @[Bitwise.scala 108:39]
    node _buf_T_21 = bits(_buf_T_13, 13, 0) @[Bitwise.scala 107:28]
    node _buf_T_22 = shl(_buf_T_21, 2) @[Bitwise.scala 107:52]
    node _buf_T_23 = xor(_buf_T_13, _buf_T_22) @[Bitwise.scala 107:21]
    node _buf_T_24 = shr(_buf_T_20, 2) @[Bitwise.scala 108:21]
    node _buf_T_25 = and(_buf_T_24, _buf_T_23) @[Bitwise.scala 108:31]
    node _buf_T_26 = bits(_buf_T_20, 13, 0) @[Bitwise.scala 108:46]
    node _buf_T_27 = shl(_buf_T_26, 2) @[Bitwise.scala 108:70]
    node _buf_T_28 = not(_buf_T_23) @[Bitwise.scala 108:82]
    node _buf_T_29 = and(_buf_T_27, _buf_T_28) @[Bitwise.scala 108:80]
    node _buf_T_30 = or(_buf_T_25, _buf_T_29) @[Bitwise.scala 108:39]
    node _buf_T_31 = bits(_buf_T_23, 14, 0) @[Bitwise.scala 107:28]
    node _buf_T_32 = shl(_buf_T_31, 1) @[Bitwise.scala 107:52]
    node _buf_T_33 = xor(_buf_T_23, _buf_T_32) @[Bitwise.scala 107:21]
    node _buf_T_34 = shr(_buf_T_30, 1) @[Bitwise.scala 108:21]
    node _buf_T_35 = and(_buf_T_34, _buf_T_33) @[Bitwise.scala 108:31]
    node _buf_T_36 = bits(_buf_T_30, 14, 0) @[Bitwise.scala 108:46]
    node _buf_T_37 = shl(_buf_T_36, 1) @[Bitwise.scala 108:70]
    node _buf_T_38 = not(_buf_T_33) @[Bitwise.scala 108:82]
    node _buf_T_39 = and(_buf_T_37, _buf_T_38) @[Bitwise.scala 108:80]
    node _buf_T_40 = or(_buf_T_35, _buf_T_39) @[Bitwise.scala 108:39]
    node _buf_T_41 = bits(_buf_T, 22, 16) @[Bitwise.scala 114:47]
    node _buf_T_42 = bits(_buf_T_41, 3, 0) @[Bitwise.scala 114:18]
    node _buf_T_43 = bits(_buf_T_42, 1, 0) @[Bitwise.scala 114:18]
    node _buf_T_44 = bits(_buf_T_43, 0, 0) @[Bitwise.scala 114:18]
    node _buf_T_45 = bits(_buf_T_43, 1, 1) @[Bitwise.scala 114:47]
    node _buf_T_46 = cat(_buf_T_44, _buf_T_45) @[Cat.scala 33:92]
    node _buf_T_47 = bits(_buf_T_42, 3, 2) @[Bitwise.scala 114:47]
    node _buf_T_48 = bits(_buf_T_47, 0, 0) @[Bitwise.scala 114:18]
    node _buf_T_49 = bits(_buf_T_47, 1, 1) @[Bitwise.scala 114:47]
    node _buf_T_50 = cat(_buf_T_48, _buf_T_49) @[Cat.scala 33:92]
    node _buf_T_51 = cat(_buf_T_46, _buf_T_50) @[Cat.scala 33:92]
    node _buf_T_52 = bits(_buf_T_41, 6, 4) @[Bitwise.scala 114:47]
    node _buf_T_53 = bits(_buf_T_52, 1, 0) @[Bitwise.scala 114:18]
    node _buf_T_54 = bits(_buf_T_53, 0, 0) @[Bitwise.scala 114:18]
    node _buf_T_55 = bits(_buf_T_53, 1, 1) @[Bitwise.scala 114:47]
    node _buf_T_56 = cat(_buf_T_54, _buf_T_55) @[Cat.scala 33:92]
    node _buf_T_57 = bits(_buf_T_52, 2, 2) @[Bitwise.scala 114:47]
    node _buf_T_58 = cat(_buf_T_56, _buf_T_57) @[Cat.scala 33:92]
    node _buf_T_59 = cat(_buf_T_51, _buf_T_58) @[Cat.scala 33:92]
    node buf = cat(_buf_T_40, _buf_T_59) @[Cat.scala 33:92]
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
    node _right_shift_T_13 = bits(buf, 13, 13) @[OneHot.scala 47:45]
    node _right_shift_T_14 = bits(buf, 14, 14) @[OneHot.scala 47:45]
    node _right_shift_T_15 = bits(buf, 15, 15) @[OneHot.scala 47:45]
    node _right_shift_T_16 = bits(buf, 16, 16) @[OneHot.scala 47:45]
    node _right_shift_T_17 = bits(buf, 17, 17) @[OneHot.scala 47:45]
    node _right_shift_T_18 = bits(buf, 18, 18) @[OneHot.scala 47:45]
    node _right_shift_T_19 = bits(buf, 19, 19) @[OneHot.scala 47:45]
    node _right_shift_T_20 = bits(buf, 20, 20) @[OneHot.scala 47:45]
    node _right_shift_T_21 = bits(buf, 21, 21) @[OneHot.scala 47:45]
    node _right_shift_T_22 = bits(buf, 22, 22) @[OneHot.scala 47:45]
    node _right_shift_T_23 = mux(_right_shift_T_21, UInt<5>("h15"), UInt<5>("h16")) @[Mux.scala 47:70]
    node _right_shift_T_24 = mux(_right_shift_T_20, UInt<5>("h14"), _right_shift_T_23) @[Mux.scala 47:70]
    node _right_shift_T_25 = mux(_right_shift_T_19, UInt<5>("h13"), _right_shift_T_24) @[Mux.scala 47:70]
    node _right_shift_T_26 = mux(_right_shift_T_18, UInt<5>("h12"), _right_shift_T_25) @[Mux.scala 47:70]
    node _right_shift_T_27 = mux(_right_shift_T_17, UInt<5>("h11"), _right_shift_T_26) @[Mux.scala 47:70]
    node _right_shift_T_28 = mux(_right_shift_T_16, UInt<5>("h10"), _right_shift_T_27) @[Mux.scala 47:70]
    node _right_shift_T_29 = mux(_right_shift_T_15, UInt<4>("hf"), _right_shift_T_28) @[Mux.scala 47:70]
    node _right_shift_T_30 = mux(_right_shift_T_14, UInt<4>("he"), _right_shift_T_29) @[Mux.scala 47:70]
    node _right_shift_T_31 = mux(_right_shift_T_13, UInt<4>("hd"), _right_shift_T_30) @[Mux.scala 47:70]
    node _right_shift_T_32 = mux(_right_shift_T_12, UInt<4>("hc"), _right_shift_T_31) @[Mux.scala 47:70]
    node _right_shift_T_33 = mux(_right_shift_T_11, UInt<4>("hb"), _right_shift_T_32) @[Mux.scala 47:70]
    node _right_shift_T_34 = mux(_right_shift_T_10, UInt<4>("ha"), _right_shift_T_33) @[Mux.scala 47:70]
    node _right_shift_T_35 = mux(_right_shift_T_9, UInt<4>("h9"), _right_shift_T_34) @[Mux.scala 47:70]
    node _right_shift_T_36 = mux(_right_shift_T_8, UInt<4>("h8"), _right_shift_T_35) @[Mux.scala 47:70]
    node _right_shift_T_37 = mux(_right_shift_T_7, UInt<3>("h7"), _right_shift_T_36) @[Mux.scala 47:70]
    node _right_shift_T_38 = mux(_right_shift_T_6, UInt<3>("h6"), _right_shift_T_37) @[Mux.scala 47:70]
    node _right_shift_T_39 = mux(_right_shift_T_5, UInt<3>("h5"), _right_shift_T_38) @[Mux.scala 47:70]
    node _right_shift_T_40 = mux(_right_shift_T_4, UInt<3>("h4"), _right_shift_T_39) @[Mux.scala 47:70]
    node _right_shift_T_41 = mux(_right_shift_T_3, UInt<2>("h3"), _right_shift_T_40) @[Mux.scala 47:70]
    node _right_shift_T_42 = mux(_right_shift_T_2, UInt<2>("h2"), _right_shift_T_41) @[Mux.scala 47:70]
    node _right_shift_T_43 = mux(_right_shift_T_1, UInt<1>("h1"), _right_shift_T_42) @[Mux.scala 47:70]
    node _right_shift_T_44 = mux(_right_shift_T, UInt<1>("h0"), _right_shift_T_43) @[Mux.scala 47:70]
    right_shift <= _right_shift_T_44 @[adderTree.scala 50:17]
    node _actual_shift_T = sub(UInt<5>("h16"), right_shift) @[adderTree.scala 52:67]
    node _actual_shift_T_1 = tail(_actual_shift_T, 1) @[adderTree.scala 52:67]
    actual_shift <= _actual_shift_T_1 @[adderTree.scala 52:18]
    node man_out_shifted = dshr(concatenated_output, actual_shift) @[adderTree.scala 55:47]
    node _io_result_T = bits(concatenated_output, 28, 28) @[adderTree.scala 57:37]
    node _io_result_T_1 = add(exp_buffer_0, actual_shift) @[adderTree.scala 57:95]
    node _io_result_T_2 = tail(_io_result_T_1, 1) @[adderTree.scala 57:95]
    node _io_result_T_3 = cat(_io_result_T, _io_result_T_2) @[adderTree.scala 57:78]
    node _io_result_T_4 = bits(man_out_shifted, 4, 0) @[adderTree.scala 57:128]
    node _io_result_T_5 = cat(_io_result_T_3, _io_result_T_4) @[adderTree.scala 57:110]
    io.result <= _io_result_T_5 @[adderTree.scala 57:15]

