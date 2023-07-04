FIRRTL version 1.1.0
circuit Hbfp :
  module Hbfp :
    input clock : Clock
    input reset : UInt<1>
    input io_man_a_0 : UInt<5>
    input io_man_a_1 : UInt<5>
    input io_man_a_2 : UInt<5>
    input io_man_a_3 : UInt<5>
    input io_man_b_0 : UInt<5>
    input io_man_b_1 : UInt<5>
    input io_man_b_2 : UInt<5>
    input io_man_b_3 : UInt<5>
    input io_sign_a_0 : UInt<1>
    input io_sign_a_1 : UInt<1>
    input io_sign_a_2 : UInt<1>
    input io_sign_a_3 : UInt<1>
    input io_sign_b_0 : UInt<1>
    input io_sign_b_1 : UInt<1>
    input io_sign_b_2 : UInt<1>
    input io_sign_b_3 : UInt<1>
    input io_exp_a : UInt<8>
    input io_exp_b : UInt<8>
    output io_result : UInt<14>

    node _exp_output_T = add(io_exp_a, io_exp_b) @[hbfp.scala 190:23]
    reg dotProductRegs_0 : UInt<10>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_0) @[hbfp.scala 192:51]
    reg dotProductRegs_1 : UInt<10>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_1) @[hbfp.scala 192:51]
    reg dotProductRegs_2 : UInt<10>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_2) @[hbfp.scala 192:51]
    reg dotProductRegs_3 : UInt<10>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_3) @[hbfp.scala 192:51]
    reg two_complement_buffer_0 : SInt<11>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_0) @[hbfp.scala 193:58]
    reg two_complement_buffer_1 : SInt<11>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_1) @[hbfp.scala 193:58]
    reg two_complement_buffer_2 : SInt<11>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_2) @[hbfp.scala 193:58]
    reg two_complement_buffer_3 : SInt<11>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_3) @[hbfp.scala 193:58]
    reg two_complement_0 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), two_complement_0) @[hbfp.scala 194:51]
    reg two_complement_1 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), two_complement_1) @[hbfp.scala 194:51]
    reg two_complement_2 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), two_complement_2) @[hbfp.scala 194:51]
    reg two_complement_3 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), two_complement_3) @[hbfp.scala 194:51]
    reg signs_0 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_0) @[hbfp.scala 195:42]
    reg signs_1 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_1) @[hbfp.scala 195:42]
    reg signs_2 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_2) @[hbfp.scala 195:42]
    reg signs_3 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_3) @[hbfp.scala 195:42]
    reg acc : SInt<14>, clock with :
      reset => (UInt<1>("h0"), acc) @[hbfp.scala 196:20]
    reg acc_hbfp : UInt<14>, clock with :
      reset => (UInt<1>("h0"), acc_hbfp) @[hbfp.scala 197:25]
    reg acc_buf : UInt<14>, clock with :
      reset => (UInt<1>("h0"), acc_buf) @[hbfp.scala 198:24]
    reg multiplierReg : UInt<5>, clock with :
      reset => (UInt<1>("h0"), multiplierReg) @[hbfp.scala 202:32]
    reg signReg : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg) @[hbfp.scala 203:26]
    node _dotProductRegs_0_T = mul(multiplierReg, io_man_b_0) @[hbfp.scala 206:40]
    node _signs_0_T = xor(signReg, io_sign_b_0) @[hbfp.scala 207:25]
    node _two_complement_0_T = eq(signs_0, UInt<1>("h1")) @[hbfp.scala 208:38]
    node _two_complement_0_T_1 = cat(UInt<1>("h0"), dotProductRegs_0) @[hbfp.scala 208:53]
    node _two_complement_0_T_2 = not(_two_complement_0_T_1) @[hbfp.scala 208:47]
    node _two_complement_0_T_3 = add(_two_complement_0_T_2, UInt<1>("h1")) @[hbfp.scala 208:75]
    node _two_complement_0_T_4 = tail(_two_complement_0_T_3, 1) @[hbfp.scala 208:75]
    node _two_complement_0_T_5 = cat(UInt<1>("h0"), dotProductRegs_0) @[hbfp.scala 208:88]
    node _two_complement_0_T_6 = mux(_two_complement_0_T, _two_complement_0_T_4, _two_complement_0_T_5) @[hbfp.scala 208:29]
    node _two_complement_buffer_0_T = asSInt(two_complement_0) @[hbfp.scala 209:51]
    reg multiplierReg_1 : UInt<5>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_1) @[hbfp.scala 202:32]
    reg signReg_1 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_1) @[hbfp.scala 203:26]
    node _dotProductRegs_1_T = mul(multiplierReg_1, io_man_b_1) @[hbfp.scala 206:40]
    node _signs_1_T = xor(signReg_1, io_sign_b_1) @[hbfp.scala 207:25]
    node _two_complement_1_T = eq(signs_1, UInt<1>("h1")) @[hbfp.scala 208:38]
    node _two_complement_1_T_1 = cat(UInt<1>("h0"), dotProductRegs_1) @[hbfp.scala 208:53]
    node _two_complement_1_T_2 = not(_two_complement_1_T_1) @[hbfp.scala 208:47]
    node _two_complement_1_T_3 = add(_two_complement_1_T_2, UInt<1>("h1")) @[hbfp.scala 208:75]
    node _two_complement_1_T_4 = tail(_two_complement_1_T_3, 1) @[hbfp.scala 208:75]
    node _two_complement_1_T_5 = cat(UInt<1>("h0"), dotProductRegs_1) @[hbfp.scala 208:88]
    node _two_complement_1_T_6 = mux(_two_complement_1_T, _two_complement_1_T_4, _two_complement_1_T_5) @[hbfp.scala 208:29]
    node _two_complement_buffer_1_T = asSInt(two_complement_1) @[hbfp.scala 209:51]
    reg multiplierReg_2 : UInt<5>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_2) @[hbfp.scala 202:32]
    reg signReg_2 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_2) @[hbfp.scala 203:26]
    node _dotProductRegs_2_T = mul(multiplierReg_2, io_man_b_2) @[hbfp.scala 206:40]
    node _signs_2_T = xor(signReg_2, io_sign_b_2) @[hbfp.scala 207:25]
    node _two_complement_2_T = eq(signs_2, UInt<1>("h1")) @[hbfp.scala 208:38]
    node _two_complement_2_T_1 = cat(UInt<1>("h0"), dotProductRegs_2) @[hbfp.scala 208:53]
    node _two_complement_2_T_2 = not(_two_complement_2_T_1) @[hbfp.scala 208:47]
    node _two_complement_2_T_3 = add(_two_complement_2_T_2, UInt<1>("h1")) @[hbfp.scala 208:75]
    node _two_complement_2_T_4 = tail(_two_complement_2_T_3, 1) @[hbfp.scala 208:75]
    node _two_complement_2_T_5 = cat(UInt<1>("h0"), dotProductRegs_2) @[hbfp.scala 208:88]
    node _two_complement_2_T_6 = mux(_two_complement_2_T, _two_complement_2_T_4, _two_complement_2_T_5) @[hbfp.scala 208:29]
    node _two_complement_buffer_2_T = asSInt(two_complement_2) @[hbfp.scala 209:51]
    reg multiplierReg_3 : UInt<5>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_3) @[hbfp.scala 202:32]
    reg signReg_3 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_3) @[hbfp.scala 203:26]
    node _dotProductRegs_3_T = mul(multiplierReg_3, io_man_b_3) @[hbfp.scala 206:40]
    node _signs_3_T = xor(signReg_3, io_sign_b_3) @[hbfp.scala 207:25]
    node _two_complement_3_T = eq(signs_3, UInt<1>("h1")) @[hbfp.scala 208:38]
    node _two_complement_3_T_1 = cat(UInt<1>("h0"), dotProductRegs_3) @[hbfp.scala 208:53]
    node _two_complement_3_T_2 = not(_two_complement_3_T_1) @[hbfp.scala 208:47]
    node _two_complement_3_T_3 = add(_two_complement_3_T_2, UInt<1>("h1")) @[hbfp.scala 208:75]
    node _two_complement_3_T_4 = tail(_two_complement_3_T_3, 1) @[hbfp.scala 208:75]
    node _two_complement_3_T_5 = cat(UInt<1>("h0"), dotProductRegs_3) @[hbfp.scala 208:88]
    node _two_complement_3_T_6 = mux(_two_complement_3_T, _two_complement_3_T_4, _two_complement_3_T_5) @[hbfp.scala 208:29]
    node _two_complement_buffer_3_T = asSInt(two_complement_3) @[hbfp.scala 209:51]
    node _acc_T = add(two_complement_buffer_0, two_complement_buffer_1) @[hbfp.scala 212:40]
    node _acc_T_1 = add(_acc_T, two_complement_buffer_2) @[hbfp.scala 212:40]
    node _acc_T_2 = add(_acc_T_1, two_complement_buffer_3) @[hbfp.scala 212:40]
    node _acc_buf_T = asUInt(acc) @[hbfp.scala 213:18]
    node _acc_hbfp_T = bits(acc, 13, 13) @[hbfp.scala 216:22]
    node _acc_hbfp_T_1 = eq(_acc_hbfp_T, UInt<1>("h1")) @[hbfp.scala 216:46]
    node _acc_hbfp_T_2 = bits(acc_buf, 12, 0) @[hbfp.scala 216:70]
    node _acc_hbfp_T_3 = cat(UInt<1>("h0"), _acc_hbfp_T_2) @[hbfp.scala 216:60]
    node _acc_hbfp_T_4 = not(_acc_hbfp_T_3) @[hbfp.scala 216:54]
    node _acc_hbfp_T_5 = add(_acc_hbfp_T_4, UInt<1>("h1")) @[hbfp.scala 216:92]
    node _acc_hbfp_T_6 = tail(_acc_hbfp_T_5, 1) @[hbfp.scala 216:92]
    node _acc_hbfp_T_7 = mux(_acc_hbfp_T_1, _acc_hbfp_T_6, acc_buf) @[hbfp.scala 216:18]
    reg right_shift : UInt<8>, clock with :
      reset => (UInt<1>("h0"), right_shift) @[hbfp.scala 217:28]
    reg actual_shift : UInt<8>, clock with :
      reset => (UInt<1>("h0"), actual_shift) @[hbfp.scala 218:29]
    node _buf_T = bits(acc_hbfp, 12, 5) @[hbfp.scala 219:36]
    node _buf_T_1 = shl(UInt<4>("hf"), 4) @[Bitwise.scala 107:52]
    node _buf_T_2 = xor(UInt<8>("hff"), _buf_T_1) @[Bitwise.scala 107:21]
    node _buf_T_3 = shr(_buf_T, 4) @[Bitwise.scala 108:21]
    node _buf_T_4 = and(_buf_T_3, _buf_T_2) @[Bitwise.scala 108:31]
    node _buf_T_5 = bits(_buf_T, 3, 0) @[Bitwise.scala 108:46]
    node _buf_T_6 = shl(_buf_T_5, 4) @[Bitwise.scala 108:70]
    node _buf_T_7 = not(_buf_T_2) @[Bitwise.scala 108:82]
    node _buf_T_8 = and(_buf_T_6, _buf_T_7) @[Bitwise.scala 108:80]
    node _buf_T_9 = or(_buf_T_4, _buf_T_8) @[Bitwise.scala 108:39]
    node _buf_T_10 = bits(_buf_T_2, 5, 0) @[Bitwise.scala 107:28]
    node _buf_T_11 = shl(_buf_T_10, 2) @[Bitwise.scala 107:52]
    node _buf_T_12 = xor(_buf_T_2, _buf_T_11) @[Bitwise.scala 107:21]
    node _buf_T_13 = shr(_buf_T_9, 2) @[Bitwise.scala 108:21]
    node _buf_T_14 = and(_buf_T_13, _buf_T_12) @[Bitwise.scala 108:31]
    node _buf_T_15 = bits(_buf_T_9, 5, 0) @[Bitwise.scala 108:46]
    node _buf_T_16 = shl(_buf_T_15, 2) @[Bitwise.scala 108:70]
    node _buf_T_17 = not(_buf_T_12) @[Bitwise.scala 108:82]
    node _buf_T_18 = and(_buf_T_16, _buf_T_17) @[Bitwise.scala 108:80]
    node _buf_T_19 = or(_buf_T_14, _buf_T_18) @[Bitwise.scala 108:39]
    node _buf_T_20 = bits(_buf_T_12, 6, 0) @[Bitwise.scala 107:28]
    node _buf_T_21 = shl(_buf_T_20, 1) @[Bitwise.scala 107:52]
    node _buf_T_22 = xor(_buf_T_12, _buf_T_21) @[Bitwise.scala 107:21]
    node _buf_T_23 = shr(_buf_T_19, 1) @[Bitwise.scala 108:21]
    node _buf_T_24 = and(_buf_T_23, _buf_T_22) @[Bitwise.scala 108:31]
    node _buf_T_25 = bits(_buf_T_19, 6, 0) @[Bitwise.scala 108:46]
    node _buf_T_26 = shl(_buf_T_25, 1) @[Bitwise.scala 108:70]
    node _buf_T_27 = not(_buf_T_22) @[Bitwise.scala 108:82]
    node _buf_T_28 = and(_buf_T_26, _buf_T_27) @[Bitwise.scala 108:80]
    node _buf_T_29 = or(_buf_T_24, _buf_T_28) @[Bitwise.scala 108:39]
    node buf = cat(UInt<1>("h0"), _buf_T_29) @[hbfp.scala 219:17]
    node _right_shift_T = bits(buf, 0, 0) @[OneHot.scala 47:45]
    node _right_shift_T_1 = bits(buf, 1, 1) @[OneHot.scala 47:45]
    node _right_shift_T_2 = bits(buf, 2, 2) @[OneHot.scala 47:45]
    node _right_shift_T_3 = bits(buf, 3, 3) @[OneHot.scala 47:45]
    node _right_shift_T_4 = bits(buf, 4, 4) @[OneHot.scala 47:45]
    node _right_shift_T_5 = bits(buf, 5, 5) @[OneHot.scala 47:45]
    node _right_shift_T_6 = bits(buf, 6, 6) @[OneHot.scala 47:45]
    node _right_shift_T_7 = bits(buf, 7, 7) @[OneHot.scala 47:45]
    node _right_shift_T_8 = bits(buf, 8, 8) @[OneHot.scala 47:45]
    node _right_shift_T_9 = mux(_right_shift_T_7, UInt<3>("h7"), UInt<4>("h8")) @[Mux.scala 47:70]
    node _right_shift_T_10 = mux(_right_shift_T_6, UInt<3>("h6"), _right_shift_T_9) @[Mux.scala 47:70]
    node _right_shift_T_11 = mux(_right_shift_T_5, UInt<3>("h5"), _right_shift_T_10) @[Mux.scala 47:70]
    node _right_shift_T_12 = mux(_right_shift_T_4, UInt<3>("h4"), _right_shift_T_11) @[Mux.scala 47:70]
    node _right_shift_T_13 = mux(_right_shift_T_3, UInt<2>("h3"), _right_shift_T_12) @[Mux.scala 47:70]
    node _right_shift_T_14 = mux(_right_shift_T_2, UInt<2>("h2"), _right_shift_T_13) @[Mux.scala 47:70]
    node _right_shift_T_15 = mux(_right_shift_T_1, UInt<1>("h1"), _right_shift_T_14) @[Mux.scala 47:70]
    node _right_shift_T_16 = mux(_right_shift_T, UInt<1>("h0"), _right_shift_T_15) @[Mux.scala 47:70]
    node _actual_shift_T = sub(UInt<4>("hc"), right_shift) @[hbfp.scala 223:45]
    node _actual_shift_T_1 = tail(_actual_shift_T, 1) @[hbfp.scala 223:45]
    node _actual_shift_T_2 = sub(_actual_shift_T_1, UInt<3>("h4")) @[hbfp.scala 223:60]
    node _actual_shift_T_3 = tail(_actual_shift_T_2, 1) @[hbfp.scala 223:60]
    node man_out_shifted = dshr(acc_hbfp, actual_shift) @[hbfp.scala 225:34]
    node exp_output = _exp_output_T @[hbfp.scala 189:24 190:14]
    node _exp_actual_T = add(exp_output, actual_shift) @[hbfp.scala 227:28]
    node _io_result_T = bits(acc, 13, 13) @[hbfp.scala 229:19]
    node exp_actual = _exp_actual_T @[hbfp.scala 226:24 227:14]
    node _io_result_T_1 = bits(exp_actual, 9, 2) @[hbfp.scala 229:57]
    node _io_result_T_2 = cat(_io_result_T, _io_result_T_1) @[hbfp.scala 229:44]
    node _io_result_T_3 = bits(man_out_shifted, 4, 0) @[hbfp.scala 229:84]
    node _io_result_T_4 = cat(_io_result_T_2, _io_result_T_3) @[hbfp.scala 229:66]
    io_result <= _io_result_T_4 @[hbfp.scala 229:13]
    dotProductRegs_0 <= mux(reset, UInt<10>("h0"), _dotProductRegs_0_T) @[hbfp.scala 192:{51,51} 206:23]
    dotProductRegs_1 <= mux(reset, UInt<10>("h0"), _dotProductRegs_1_T) @[hbfp.scala 192:{51,51} 206:23]
    dotProductRegs_2 <= mux(reset, UInt<10>("h0"), _dotProductRegs_2_T) @[hbfp.scala 192:{51,51} 206:23]
    dotProductRegs_3 <= mux(reset, UInt<10>("h0"), _dotProductRegs_3_T) @[hbfp.scala 192:{51,51} 206:23]
    two_complement_buffer_0 <= mux(reset, asSInt(UInt<11>("h0")), _two_complement_buffer_0_T) @[hbfp.scala 193:{58,58} 209:30]
    two_complement_buffer_1 <= mux(reset, asSInt(UInt<11>("h0")), _two_complement_buffer_1_T) @[hbfp.scala 193:{58,58} 209:30]
    two_complement_buffer_2 <= mux(reset, asSInt(UInt<11>("h0")), _two_complement_buffer_2_T) @[hbfp.scala 193:{58,58} 209:30]
    two_complement_buffer_3 <= mux(reset, asSInt(UInt<11>("h0")), _two_complement_buffer_3_T) @[hbfp.scala 193:{58,58} 209:30]
    two_complement_0 <= mux(reset, UInt<11>("h0"), _two_complement_0_T_6) @[hbfp.scala 194:{51,51} 208:23]
    two_complement_1 <= mux(reset, UInt<11>("h0"), _two_complement_1_T_6) @[hbfp.scala 194:{51,51} 208:23]
    two_complement_2 <= mux(reset, UInt<11>("h0"), _two_complement_2_T_6) @[hbfp.scala 194:{51,51} 208:23]
    two_complement_3 <= mux(reset, UInt<11>("h0"), _two_complement_3_T_6) @[hbfp.scala 194:{51,51} 208:23]
    signs_0 <= mux(reset, UInt<1>("h0"), _signs_0_T) @[hbfp.scala 195:{42,42} 207:14]
    signs_1 <= mux(reset, UInt<1>("h0"), _signs_1_T) @[hbfp.scala 195:{42,42} 207:14]
    signs_2 <= mux(reset, UInt<1>("h0"), _signs_2_T) @[hbfp.scala 195:{42,42} 207:14]
    signs_3 <= mux(reset, UInt<1>("h0"), _signs_3_T) @[hbfp.scala 195:{42,42} 207:14]
    acc <= mux(reset, asSInt(UInt<14>("h0")), _acc_T_2) @[hbfp.scala 196:{20,20} 212:7]
    acc_hbfp <= mux(reset, UInt<14>("h0"), _acc_hbfp_T_7) @[hbfp.scala 197:{25,25} 216:12]
    acc_buf <= mux(reset, UInt<14>("h0"), _acc_buf_T) @[hbfp.scala 198:{24,24} 213:11]
    multiplierReg <= mux(reset, UInt<5>("h0"), io_man_a_0) @[hbfp.scala 202:{32,32} 205:19]
    signReg <= mux(reset, UInt<1>("h0"), io_sign_a_0) @[hbfp.scala 203:{26,26} 204:13]
    multiplierReg_1 <= mux(reset, UInt<5>("h0"), io_man_a_1) @[hbfp.scala 202:{32,32} 205:19]
    signReg_1 <= mux(reset, UInt<1>("h0"), io_sign_a_1) @[hbfp.scala 203:{26,26} 204:13]
    multiplierReg_2 <= mux(reset, UInt<5>("h0"), io_man_a_2) @[hbfp.scala 202:{32,32} 205:19]
    signReg_2 <= mux(reset, UInt<1>("h0"), io_sign_a_2) @[hbfp.scala 203:{26,26} 204:13]
    multiplierReg_3 <= mux(reset, UInt<5>("h0"), io_man_a_3) @[hbfp.scala 202:{32,32} 205:19]
    signReg_3 <= mux(reset, UInt<1>("h0"), io_sign_a_3) @[hbfp.scala 203:{26,26} 204:13]
    right_shift <= mux(reset, UInt<8>("h0"), _right_shift_T_16) @[hbfp.scala 217:{28,28} 221:15]
    actual_shift <= mux(reset, UInt<8>("h0"), _actual_shift_T_3) @[hbfp.scala 218:{29,29} 223:16]
