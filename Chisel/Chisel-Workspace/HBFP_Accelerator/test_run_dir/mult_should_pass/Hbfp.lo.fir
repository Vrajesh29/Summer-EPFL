FIRRTL version 1.1.0
circuit Hbfp :
  module Hbfp :
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
    input io_exp_a : UInt<8>
    input io_exp_b : UInt<8>
    output io_result : UInt<14>

    node _exp_output_T = add(io_exp_a, io_exp_b) @[hbfp.scala 186:23]
    node _exp_output_T_1 = tail(_exp_output_T, 1) @[hbfp.scala 186:23]
    reg dotProductRegs_0 : UInt<10>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_0) @[hbfp.scala 188:51]
    reg dotProductRegs_1 : UInt<10>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_1) @[hbfp.scala 188:51]
    reg dotProductRegs_2 : UInt<10>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_2) @[hbfp.scala 188:51]
    reg dotProductRegs_3 : UInt<10>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_3) @[hbfp.scala 188:51]
    reg dotProductRegs_4 : UInt<10>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_4) @[hbfp.scala 188:51]
    reg dotProductRegs_5 : UInt<10>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_5) @[hbfp.scala 188:51]
    reg dotProductRegs_6 : UInt<10>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_6) @[hbfp.scala 188:51]
    reg dotProductRegs_7 : UInt<10>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_7) @[hbfp.scala 188:51]
    reg dotProductRegs_8 : UInt<10>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_8) @[hbfp.scala 188:51]
    reg dotProductRegs_9 : UInt<10>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_9) @[hbfp.scala 188:51]
    reg dotProductRegs_10 : UInt<10>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_10) @[hbfp.scala 188:51]
    reg dotProductRegs_11 : UInt<10>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_11) @[hbfp.scala 188:51]
    reg dotProductRegs_12 : UInt<10>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_12) @[hbfp.scala 188:51]
    reg dotProductRegs_13 : UInt<10>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_13) @[hbfp.scala 188:51]
    reg dotProductRegs_14 : UInt<10>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_14) @[hbfp.scala 188:51]
    reg dotProductRegs_15 : UInt<10>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_15) @[hbfp.scala 188:51]
    reg two_complement_buffer_0 : SInt<11>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_0) @[hbfp.scala 189:58]
    reg two_complement_buffer_1 : SInt<11>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_1) @[hbfp.scala 189:58]
    reg two_complement_buffer_2 : SInt<11>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_2) @[hbfp.scala 189:58]
    reg two_complement_buffer_3 : SInt<11>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_3) @[hbfp.scala 189:58]
    reg two_complement_buffer_4 : SInt<11>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_4) @[hbfp.scala 189:58]
    reg two_complement_buffer_5 : SInt<11>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_5) @[hbfp.scala 189:58]
    reg two_complement_buffer_6 : SInt<11>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_6) @[hbfp.scala 189:58]
    reg two_complement_buffer_7 : SInt<11>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_7) @[hbfp.scala 189:58]
    reg two_complement_buffer_8 : SInt<11>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_8) @[hbfp.scala 189:58]
    reg two_complement_buffer_9 : SInt<11>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_9) @[hbfp.scala 189:58]
    reg two_complement_buffer_10 : SInt<11>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_10) @[hbfp.scala 189:58]
    reg two_complement_buffer_11 : SInt<11>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_11) @[hbfp.scala 189:58]
    reg two_complement_buffer_12 : SInt<11>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_12) @[hbfp.scala 189:58]
    reg two_complement_buffer_13 : SInt<11>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_13) @[hbfp.scala 189:58]
    reg two_complement_buffer_14 : SInt<11>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_14) @[hbfp.scala 189:58]
    reg two_complement_buffer_15 : SInt<11>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_15) @[hbfp.scala 189:58]
    reg two_complement_0 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), two_complement_0) @[hbfp.scala 190:51]
    reg two_complement_1 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), two_complement_1) @[hbfp.scala 190:51]
    reg two_complement_2 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), two_complement_2) @[hbfp.scala 190:51]
    reg two_complement_3 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), two_complement_3) @[hbfp.scala 190:51]
    reg two_complement_4 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), two_complement_4) @[hbfp.scala 190:51]
    reg two_complement_5 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), two_complement_5) @[hbfp.scala 190:51]
    reg two_complement_6 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), two_complement_6) @[hbfp.scala 190:51]
    reg two_complement_7 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), two_complement_7) @[hbfp.scala 190:51]
    reg two_complement_8 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), two_complement_8) @[hbfp.scala 190:51]
    reg two_complement_9 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), two_complement_9) @[hbfp.scala 190:51]
    reg two_complement_10 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), two_complement_10) @[hbfp.scala 190:51]
    reg two_complement_11 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), two_complement_11) @[hbfp.scala 190:51]
    reg two_complement_12 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), two_complement_12) @[hbfp.scala 190:51]
    reg two_complement_13 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), two_complement_13) @[hbfp.scala 190:51]
    reg two_complement_14 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), two_complement_14) @[hbfp.scala 190:51]
    reg two_complement_15 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), two_complement_15) @[hbfp.scala 190:51]
    reg signs_0 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_0) @[hbfp.scala 191:42]
    reg signs_1 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_1) @[hbfp.scala 191:42]
    reg signs_2 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_2) @[hbfp.scala 191:42]
    reg signs_3 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_3) @[hbfp.scala 191:42]
    reg signs_4 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_4) @[hbfp.scala 191:42]
    reg signs_5 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_5) @[hbfp.scala 191:42]
    reg signs_6 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_6) @[hbfp.scala 191:42]
    reg signs_7 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_7) @[hbfp.scala 191:42]
    reg signs_8 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_8) @[hbfp.scala 191:42]
    reg signs_9 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_9) @[hbfp.scala 191:42]
    reg signs_10 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_10) @[hbfp.scala 191:42]
    reg signs_11 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_11) @[hbfp.scala 191:42]
    reg signs_12 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_12) @[hbfp.scala 191:42]
    reg signs_13 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_13) @[hbfp.scala 191:42]
    reg signs_14 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_14) @[hbfp.scala 191:42]
    reg signs_15 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_15) @[hbfp.scala 191:42]
    reg acc : SInt<26>, clock with :
      reset => (UInt<1>("h0"), acc) @[hbfp.scala 192:20]
    reg acc_hbfp : UInt<26>, clock with :
      reset => (UInt<1>("h0"), acc_hbfp) @[hbfp.scala 193:25]
    reg acc_buf : UInt<26>, clock with :
      reset => (UInt<1>("h0"), acc_buf) @[hbfp.scala 194:24]
    reg multiplierReg : UInt<5>, clock with :
      reset => (UInt<1>("h0"), multiplierReg) @[hbfp.scala 198:32]
    reg signReg : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg) @[hbfp.scala 199:26]
    node _dotProductRegs_0_T = mul(multiplierReg, io_man_b_0) @[hbfp.scala 202:40]
    node _signs_0_T = xor(signReg, io_sign_b_0) @[hbfp.scala 203:25]
    node _two_complement_0_T = eq(signs_0, UInt<1>("h1")) @[hbfp.scala 204:38]
    node _two_complement_0_T_1 = cat(UInt<1>("h0"), dotProductRegs_0) @[hbfp.scala 204:53]
    node _two_complement_0_T_2 = not(_two_complement_0_T_1) @[hbfp.scala 204:47]
    node _two_complement_0_T_3 = add(_two_complement_0_T_2, UInt<1>("h1")) @[hbfp.scala 204:75]
    node _two_complement_0_T_4 = tail(_two_complement_0_T_3, 1) @[hbfp.scala 204:75]
    node _two_complement_0_T_5 = cat(UInt<1>("h0"), dotProductRegs_0) @[hbfp.scala 204:88]
    node _two_complement_0_T_6 = mux(_two_complement_0_T, _two_complement_0_T_4, _two_complement_0_T_5) @[hbfp.scala 204:29]
    node _two_complement_buffer_0_T = asSInt(two_complement_0) @[hbfp.scala 205:51]
    reg multiplierReg_1 : UInt<5>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_1) @[hbfp.scala 198:32]
    reg signReg_1 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_1) @[hbfp.scala 199:26]
    node _dotProductRegs_1_T = mul(multiplierReg_1, io_man_b_1) @[hbfp.scala 202:40]
    node _signs_1_T = xor(signReg_1, io_sign_b_1) @[hbfp.scala 203:25]
    node _two_complement_1_T = eq(signs_1, UInt<1>("h1")) @[hbfp.scala 204:38]
    node _two_complement_1_T_1 = cat(UInt<1>("h0"), dotProductRegs_1) @[hbfp.scala 204:53]
    node _two_complement_1_T_2 = not(_two_complement_1_T_1) @[hbfp.scala 204:47]
    node _two_complement_1_T_3 = add(_two_complement_1_T_2, UInt<1>("h1")) @[hbfp.scala 204:75]
    node _two_complement_1_T_4 = tail(_two_complement_1_T_3, 1) @[hbfp.scala 204:75]
    node _two_complement_1_T_5 = cat(UInt<1>("h0"), dotProductRegs_1) @[hbfp.scala 204:88]
    node _two_complement_1_T_6 = mux(_two_complement_1_T, _two_complement_1_T_4, _two_complement_1_T_5) @[hbfp.scala 204:29]
    node _two_complement_buffer_1_T = asSInt(two_complement_1) @[hbfp.scala 205:51]
    reg multiplierReg_2 : UInt<5>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_2) @[hbfp.scala 198:32]
    reg signReg_2 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_2) @[hbfp.scala 199:26]
    node _dotProductRegs_2_T = mul(multiplierReg_2, io_man_b_2) @[hbfp.scala 202:40]
    node _signs_2_T = xor(signReg_2, io_sign_b_2) @[hbfp.scala 203:25]
    node _two_complement_2_T = eq(signs_2, UInt<1>("h1")) @[hbfp.scala 204:38]
    node _two_complement_2_T_1 = cat(UInt<1>("h0"), dotProductRegs_2) @[hbfp.scala 204:53]
    node _two_complement_2_T_2 = not(_two_complement_2_T_1) @[hbfp.scala 204:47]
    node _two_complement_2_T_3 = add(_two_complement_2_T_2, UInt<1>("h1")) @[hbfp.scala 204:75]
    node _two_complement_2_T_4 = tail(_two_complement_2_T_3, 1) @[hbfp.scala 204:75]
    node _two_complement_2_T_5 = cat(UInt<1>("h0"), dotProductRegs_2) @[hbfp.scala 204:88]
    node _two_complement_2_T_6 = mux(_two_complement_2_T, _two_complement_2_T_4, _two_complement_2_T_5) @[hbfp.scala 204:29]
    node _two_complement_buffer_2_T = asSInt(two_complement_2) @[hbfp.scala 205:51]
    reg multiplierReg_3 : UInt<5>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_3) @[hbfp.scala 198:32]
    reg signReg_3 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_3) @[hbfp.scala 199:26]
    node _dotProductRegs_3_T = mul(multiplierReg_3, io_man_b_3) @[hbfp.scala 202:40]
    node _signs_3_T = xor(signReg_3, io_sign_b_3) @[hbfp.scala 203:25]
    node _two_complement_3_T = eq(signs_3, UInt<1>("h1")) @[hbfp.scala 204:38]
    node _two_complement_3_T_1 = cat(UInt<1>("h0"), dotProductRegs_3) @[hbfp.scala 204:53]
    node _two_complement_3_T_2 = not(_two_complement_3_T_1) @[hbfp.scala 204:47]
    node _two_complement_3_T_3 = add(_two_complement_3_T_2, UInt<1>("h1")) @[hbfp.scala 204:75]
    node _two_complement_3_T_4 = tail(_two_complement_3_T_3, 1) @[hbfp.scala 204:75]
    node _two_complement_3_T_5 = cat(UInt<1>("h0"), dotProductRegs_3) @[hbfp.scala 204:88]
    node _two_complement_3_T_6 = mux(_two_complement_3_T, _two_complement_3_T_4, _two_complement_3_T_5) @[hbfp.scala 204:29]
    node _two_complement_buffer_3_T = asSInt(two_complement_3) @[hbfp.scala 205:51]
    reg multiplierReg_4 : UInt<5>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_4) @[hbfp.scala 198:32]
    reg signReg_4 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_4) @[hbfp.scala 199:26]
    node _dotProductRegs_4_T = mul(multiplierReg_4, io_man_b_4) @[hbfp.scala 202:40]
    node _signs_4_T = xor(signReg_4, io_sign_b_4) @[hbfp.scala 203:25]
    node _two_complement_4_T = eq(signs_4, UInt<1>("h1")) @[hbfp.scala 204:38]
    node _two_complement_4_T_1 = cat(UInt<1>("h0"), dotProductRegs_4) @[hbfp.scala 204:53]
    node _two_complement_4_T_2 = not(_two_complement_4_T_1) @[hbfp.scala 204:47]
    node _two_complement_4_T_3 = add(_two_complement_4_T_2, UInt<1>("h1")) @[hbfp.scala 204:75]
    node _two_complement_4_T_4 = tail(_two_complement_4_T_3, 1) @[hbfp.scala 204:75]
    node _two_complement_4_T_5 = cat(UInt<1>("h0"), dotProductRegs_4) @[hbfp.scala 204:88]
    node _two_complement_4_T_6 = mux(_two_complement_4_T, _two_complement_4_T_4, _two_complement_4_T_5) @[hbfp.scala 204:29]
    node _two_complement_buffer_4_T = asSInt(two_complement_4) @[hbfp.scala 205:51]
    reg multiplierReg_5 : UInt<5>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_5) @[hbfp.scala 198:32]
    reg signReg_5 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_5) @[hbfp.scala 199:26]
    node _dotProductRegs_5_T = mul(multiplierReg_5, io_man_b_5) @[hbfp.scala 202:40]
    node _signs_5_T = xor(signReg_5, io_sign_b_5) @[hbfp.scala 203:25]
    node _two_complement_5_T = eq(signs_5, UInt<1>("h1")) @[hbfp.scala 204:38]
    node _two_complement_5_T_1 = cat(UInt<1>("h0"), dotProductRegs_5) @[hbfp.scala 204:53]
    node _two_complement_5_T_2 = not(_two_complement_5_T_1) @[hbfp.scala 204:47]
    node _two_complement_5_T_3 = add(_two_complement_5_T_2, UInt<1>("h1")) @[hbfp.scala 204:75]
    node _two_complement_5_T_4 = tail(_two_complement_5_T_3, 1) @[hbfp.scala 204:75]
    node _two_complement_5_T_5 = cat(UInt<1>("h0"), dotProductRegs_5) @[hbfp.scala 204:88]
    node _two_complement_5_T_6 = mux(_two_complement_5_T, _two_complement_5_T_4, _two_complement_5_T_5) @[hbfp.scala 204:29]
    node _two_complement_buffer_5_T = asSInt(two_complement_5) @[hbfp.scala 205:51]
    reg multiplierReg_6 : UInt<5>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_6) @[hbfp.scala 198:32]
    reg signReg_6 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_6) @[hbfp.scala 199:26]
    node _dotProductRegs_6_T = mul(multiplierReg_6, io_man_b_6) @[hbfp.scala 202:40]
    node _signs_6_T = xor(signReg_6, io_sign_b_6) @[hbfp.scala 203:25]
    node _two_complement_6_T = eq(signs_6, UInt<1>("h1")) @[hbfp.scala 204:38]
    node _two_complement_6_T_1 = cat(UInt<1>("h0"), dotProductRegs_6) @[hbfp.scala 204:53]
    node _two_complement_6_T_2 = not(_two_complement_6_T_1) @[hbfp.scala 204:47]
    node _two_complement_6_T_3 = add(_two_complement_6_T_2, UInt<1>("h1")) @[hbfp.scala 204:75]
    node _two_complement_6_T_4 = tail(_two_complement_6_T_3, 1) @[hbfp.scala 204:75]
    node _two_complement_6_T_5 = cat(UInt<1>("h0"), dotProductRegs_6) @[hbfp.scala 204:88]
    node _two_complement_6_T_6 = mux(_two_complement_6_T, _two_complement_6_T_4, _two_complement_6_T_5) @[hbfp.scala 204:29]
    node _two_complement_buffer_6_T = asSInt(two_complement_6) @[hbfp.scala 205:51]
    reg multiplierReg_7 : UInt<5>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_7) @[hbfp.scala 198:32]
    reg signReg_7 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_7) @[hbfp.scala 199:26]
    node _dotProductRegs_7_T = mul(multiplierReg_7, io_man_b_7) @[hbfp.scala 202:40]
    node _signs_7_T = xor(signReg_7, io_sign_b_7) @[hbfp.scala 203:25]
    node _two_complement_7_T = eq(signs_7, UInt<1>("h1")) @[hbfp.scala 204:38]
    node _two_complement_7_T_1 = cat(UInt<1>("h0"), dotProductRegs_7) @[hbfp.scala 204:53]
    node _two_complement_7_T_2 = not(_two_complement_7_T_1) @[hbfp.scala 204:47]
    node _two_complement_7_T_3 = add(_two_complement_7_T_2, UInt<1>("h1")) @[hbfp.scala 204:75]
    node _two_complement_7_T_4 = tail(_two_complement_7_T_3, 1) @[hbfp.scala 204:75]
    node _two_complement_7_T_5 = cat(UInt<1>("h0"), dotProductRegs_7) @[hbfp.scala 204:88]
    node _two_complement_7_T_6 = mux(_two_complement_7_T, _two_complement_7_T_4, _two_complement_7_T_5) @[hbfp.scala 204:29]
    node _two_complement_buffer_7_T = asSInt(two_complement_7) @[hbfp.scala 205:51]
    reg multiplierReg_8 : UInt<5>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_8) @[hbfp.scala 198:32]
    reg signReg_8 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_8) @[hbfp.scala 199:26]
    node _dotProductRegs_8_T = mul(multiplierReg_8, io_man_b_8) @[hbfp.scala 202:40]
    node _signs_8_T = xor(signReg_8, io_sign_b_8) @[hbfp.scala 203:25]
    node _two_complement_8_T = eq(signs_8, UInt<1>("h1")) @[hbfp.scala 204:38]
    node _two_complement_8_T_1 = cat(UInt<1>("h0"), dotProductRegs_8) @[hbfp.scala 204:53]
    node _two_complement_8_T_2 = not(_two_complement_8_T_1) @[hbfp.scala 204:47]
    node _two_complement_8_T_3 = add(_two_complement_8_T_2, UInt<1>("h1")) @[hbfp.scala 204:75]
    node _two_complement_8_T_4 = tail(_two_complement_8_T_3, 1) @[hbfp.scala 204:75]
    node _two_complement_8_T_5 = cat(UInt<1>("h0"), dotProductRegs_8) @[hbfp.scala 204:88]
    node _two_complement_8_T_6 = mux(_two_complement_8_T, _two_complement_8_T_4, _two_complement_8_T_5) @[hbfp.scala 204:29]
    node _two_complement_buffer_8_T = asSInt(two_complement_8) @[hbfp.scala 205:51]
    reg multiplierReg_9 : UInt<5>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_9) @[hbfp.scala 198:32]
    reg signReg_9 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_9) @[hbfp.scala 199:26]
    node _dotProductRegs_9_T = mul(multiplierReg_9, io_man_b_9) @[hbfp.scala 202:40]
    node _signs_9_T = xor(signReg_9, io_sign_b_9) @[hbfp.scala 203:25]
    node _two_complement_9_T = eq(signs_9, UInt<1>("h1")) @[hbfp.scala 204:38]
    node _two_complement_9_T_1 = cat(UInt<1>("h0"), dotProductRegs_9) @[hbfp.scala 204:53]
    node _two_complement_9_T_2 = not(_two_complement_9_T_1) @[hbfp.scala 204:47]
    node _two_complement_9_T_3 = add(_two_complement_9_T_2, UInt<1>("h1")) @[hbfp.scala 204:75]
    node _two_complement_9_T_4 = tail(_two_complement_9_T_3, 1) @[hbfp.scala 204:75]
    node _two_complement_9_T_5 = cat(UInt<1>("h0"), dotProductRegs_9) @[hbfp.scala 204:88]
    node _two_complement_9_T_6 = mux(_two_complement_9_T, _two_complement_9_T_4, _two_complement_9_T_5) @[hbfp.scala 204:29]
    node _two_complement_buffer_9_T = asSInt(two_complement_9) @[hbfp.scala 205:51]
    reg multiplierReg_10 : UInt<5>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_10) @[hbfp.scala 198:32]
    reg signReg_10 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_10) @[hbfp.scala 199:26]
    node _dotProductRegs_10_T = mul(multiplierReg_10, io_man_b_10) @[hbfp.scala 202:40]
    node _signs_10_T = xor(signReg_10, io_sign_b_10) @[hbfp.scala 203:25]
    node _two_complement_10_T = eq(signs_10, UInt<1>("h1")) @[hbfp.scala 204:38]
    node _two_complement_10_T_1 = cat(UInt<1>("h0"), dotProductRegs_10) @[hbfp.scala 204:53]
    node _two_complement_10_T_2 = not(_two_complement_10_T_1) @[hbfp.scala 204:47]
    node _two_complement_10_T_3 = add(_two_complement_10_T_2, UInt<1>("h1")) @[hbfp.scala 204:75]
    node _two_complement_10_T_4 = tail(_two_complement_10_T_3, 1) @[hbfp.scala 204:75]
    node _two_complement_10_T_5 = cat(UInt<1>("h0"), dotProductRegs_10) @[hbfp.scala 204:88]
    node _two_complement_10_T_6 = mux(_two_complement_10_T, _two_complement_10_T_4, _two_complement_10_T_5) @[hbfp.scala 204:29]
    node _two_complement_buffer_10_T = asSInt(two_complement_10) @[hbfp.scala 205:51]
    reg multiplierReg_11 : UInt<5>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_11) @[hbfp.scala 198:32]
    reg signReg_11 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_11) @[hbfp.scala 199:26]
    node _dotProductRegs_11_T = mul(multiplierReg_11, io_man_b_11) @[hbfp.scala 202:40]
    node _signs_11_T = xor(signReg_11, io_sign_b_11) @[hbfp.scala 203:25]
    node _two_complement_11_T = eq(signs_11, UInt<1>("h1")) @[hbfp.scala 204:38]
    node _two_complement_11_T_1 = cat(UInt<1>("h0"), dotProductRegs_11) @[hbfp.scala 204:53]
    node _two_complement_11_T_2 = not(_two_complement_11_T_1) @[hbfp.scala 204:47]
    node _two_complement_11_T_3 = add(_two_complement_11_T_2, UInt<1>("h1")) @[hbfp.scala 204:75]
    node _two_complement_11_T_4 = tail(_two_complement_11_T_3, 1) @[hbfp.scala 204:75]
    node _two_complement_11_T_5 = cat(UInt<1>("h0"), dotProductRegs_11) @[hbfp.scala 204:88]
    node _two_complement_11_T_6 = mux(_two_complement_11_T, _two_complement_11_T_4, _two_complement_11_T_5) @[hbfp.scala 204:29]
    node _two_complement_buffer_11_T = asSInt(two_complement_11) @[hbfp.scala 205:51]
    reg multiplierReg_12 : UInt<5>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_12) @[hbfp.scala 198:32]
    reg signReg_12 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_12) @[hbfp.scala 199:26]
    node _dotProductRegs_12_T = mul(multiplierReg_12, io_man_b_12) @[hbfp.scala 202:40]
    node _signs_12_T = xor(signReg_12, io_sign_b_12) @[hbfp.scala 203:25]
    node _two_complement_12_T = eq(signs_12, UInt<1>("h1")) @[hbfp.scala 204:38]
    node _two_complement_12_T_1 = cat(UInt<1>("h0"), dotProductRegs_12) @[hbfp.scala 204:53]
    node _two_complement_12_T_2 = not(_two_complement_12_T_1) @[hbfp.scala 204:47]
    node _two_complement_12_T_3 = add(_two_complement_12_T_2, UInt<1>("h1")) @[hbfp.scala 204:75]
    node _two_complement_12_T_4 = tail(_two_complement_12_T_3, 1) @[hbfp.scala 204:75]
    node _two_complement_12_T_5 = cat(UInt<1>("h0"), dotProductRegs_12) @[hbfp.scala 204:88]
    node _two_complement_12_T_6 = mux(_two_complement_12_T, _two_complement_12_T_4, _two_complement_12_T_5) @[hbfp.scala 204:29]
    node _two_complement_buffer_12_T = asSInt(two_complement_12) @[hbfp.scala 205:51]
    reg multiplierReg_13 : UInt<5>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_13) @[hbfp.scala 198:32]
    reg signReg_13 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_13) @[hbfp.scala 199:26]
    node _dotProductRegs_13_T = mul(multiplierReg_13, io_man_b_13) @[hbfp.scala 202:40]
    node _signs_13_T = xor(signReg_13, io_sign_b_13) @[hbfp.scala 203:25]
    node _two_complement_13_T = eq(signs_13, UInt<1>("h1")) @[hbfp.scala 204:38]
    node _two_complement_13_T_1 = cat(UInt<1>("h0"), dotProductRegs_13) @[hbfp.scala 204:53]
    node _two_complement_13_T_2 = not(_two_complement_13_T_1) @[hbfp.scala 204:47]
    node _two_complement_13_T_3 = add(_two_complement_13_T_2, UInt<1>("h1")) @[hbfp.scala 204:75]
    node _two_complement_13_T_4 = tail(_two_complement_13_T_3, 1) @[hbfp.scala 204:75]
    node _two_complement_13_T_5 = cat(UInt<1>("h0"), dotProductRegs_13) @[hbfp.scala 204:88]
    node _two_complement_13_T_6 = mux(_two_complement_13_T, _two_complement_13_T_4, _two_complement_13_T_5) @[hbfp.scala 204:29]
    node _two_complement_buffer_13_T = asSInt(two_complement_13) @[hbfp.scala 205:51]
    reg multiplierReg_14 : UInt<5>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_14) @[hbfp.scala 198:32]
    reg signReg_14 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_14) @[hbfp.scala 199:26]
    node _dotProductRegs_14_T = mul(multiplierReg_14, io_man_b_14) @[hbfp.scala 202:40]
    node _signs_14_T = xor(signReg_14, io_sign_b_14) @[hbfp.scala 203:25]
    node _two_complement_14_T = eq(signs_14, UInt<1>("h1")) @[hbfp.scala 204:38]
    node _two_complement_14_T_1 = cat(UInt<1>("h0"), dotProductRegs_14) @[hbfp.scala 204:53]
    node _two_complement_14_T_2 = not(_two_complement_14_T_1) @[hbfp.scala 204:47]
    node _two_complement_14_T_3 = add(_two_complement_14_T_2, UInt<1>("h1")) @[hbfp.scala 204:75]
    node _two_complement_14_T_4 = tail(_two_complement_14_T_3, 1) @[hbfp.scala 204:75]
    node _two_complement_14_T_5 = cat(UInt<1>("h0"), dotProductRegs_14) @[hbfp.scala 204:88]
    node _two_complement_14_T_6 = mux(_two_complement_14_T, _two_complement_14_T_4, _two_complement_14_T_5) @[hbfp.scala 204:29]
    node _two_complement_buffer_14_T = asSInt(two_complement_14) @[hbfp.scala 205:51]
    reg multiplierReg_15 : UInt<5>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_15) @[hbfp.scala 198:32]
    reg signReg_15 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_15) @[hbfp.scala 199:26]
    node _dotProductRegs_15_T = mul(multiplierReg_15, io_man_b_15) @[hbfp.scala 202:40]
    node _signs_15_T = xor(signReg_15, io_sign_b_15) @[hbfp.scala 203:25]
    node _two_complement_15_T = eq(signs_15, UInt<1>("h1")) @[hbfp.scala 204:38]
    node _two_complement_15_T_1 = cat(UInt<1>("h0"), dotProductRegs_15) @[hbfp.scala 204:53]
    node _two_complement_15_T_2 = not(_two_complement_15_T_1) @[hbfp.scala 204:47]
    node _two_complement_15_T_3 = add(_two_complement_15_T_2, UInt<1>("h1")) @[hbfp.scala 204:75]
    node _two_complement_15_T_4 = tail(_two_complement_15_T_3, 1) @[hbfp.scala 204:75]
    node _two_complement_15_T_5 = cat(UInt<1>("h0"), dotProductRegs_15) @[hbfp.scala 204:88]
    node _two_complement_15_T_6 = mux(_two_complement_15_T, _two_complement_15_T_4, _two_complement_15_T_5) @[hbfp.scala 204:29]
    node _two_complement_buffer_15_T = asSInt(two_complement_15) @[hbfp.scala 205:51]
    node _acc_T = add(two_complement_buffer_0, two_complement_buffer_1) @[hbfp.scala 208:40]
    node _acc_T_1 = tail(_acc_T, 1) @[hbfp.scala 208:40]
    node _acc_T_2 = asSInt(_acc_T_1) @[hbfp.scala 208:40]
    node _acc_T_3 = add(_acc_T_2, two_complement_buffer_2) @[hbfp.scala 208:40]
    node _acc_T_4 = tail(_acc_T_3, 1) @[hbfp.scala 208:40]
    node _acc_T_5 = asSInt(_acc_T_4) @[hbfp.scala 208:40]
    node _acc_T_6 = add(_acc_T_5, two_complement_buffer_3) @[hbfp.scala 208:40]
    node _acc_T_7 = tail(_acc_T_6, 1) @[hbfp.scala 208:40]
    node _acc_T_8 = asSInt(_acc_T_7) @[hbfp.scala 208:40]
    node _acc_T_9 = add(_acc_T_8, two_complement_buffer_4) @[hbfp.scala 208:40]
    node _acc_T_10 = tail(_acc_T_9, 1) @[hbfp.scala 208:40]
    node _acc_T_11 = asSInt(_acc_T_10) @[hbfp.scala 208:40]
    node _acc_T_12 = add(_acc_T_11, two_complement_buffer_5) @[hbfp.scala 208:40]
    node _acc_T_13 = tail(_acc_T_12, 1) @[hbfp.scala 208:40]
    node _acc_T_14 = asSInt(_acc_T_13) @[hbfp.scala 208:40]
    node _acc_T_15 = add(_acc_T_14, two_complement_buffer_6) @[hbfp.scala 208:40]
    node _acc_T_16 = tail(_acc_T_15, 1) @[hbfp.scala 208:40]
    node _acc_T_17 = asSInt(_acc_T_16) @[hbfp.scala 208:40]
    node _acc_T_18 = add(_acc_T_17, two_complement_buffer_7) @[hbfp.scala 208:40]
    node _acc_T_19 = tail(_acc_T_18, 1) @[hbfp.scala 208:40]
    node _acc_T_20 = asSInt(_acc_T_19) @[hbfp.scala 208:40]
    node _acc_T_21 = add(_acc_T_20, two_complement_buffer_8) @[hbfp.scala 208:40]
    node _acc_T_22 = tail(_acc_T_21, 1) @[hbfp.scala 208:40]
    node _acc_T_23 = asSInt(_acc_T_22) @[hbfp.scala 208:40]
    node _acc_T_24 = add(_acc_T_23, two_complement_buffer_9) @[hbfp.scala 208:40]
    node _acc_T_25 = tail(_acc_T_24, 1) @[hbfp.scala 208:40]
    node _acc_T_26 = asSInt(_acc_T_25) @[hbfp.scala 208:40]
    node _acc_T_27 = add(_acc_T_26, two_complement_buffer_10) @[hbfp.scala 208:40]
    node _acc_T_28 = tail(_acc_T_27, 1) @[hbfp.scala 208:40]
    node _acc_T_29 = asSInt(_acc_T_28) @[hbfp.scala 208:40]
    node _acc_T_30 = add(_acc_T_29, two_complement_buffer_11) @[hbfp.scala 208:40]
    node _acc_T_31 = tail(_acc_T_30, 1) @[hbfp.scala 208:40]
    node _acc_T_32 = asSInt(_acc_T_31) @[hbfp.scala 208:40]
    node _acc_T_33 = add(_acc_T_32, two_complement_buffer_12) @[hbfp.scala 208:40]
    node _acc_T_34 = tail(_acc_T_33, 1) @[hbfp.scala 208:40]
    node _acc_T_35 = asSInt(_acc_T_34) @[hbfp.scala 208:40]
    node _acc_T_36 = add(_acc_T_35, two_complement_buffer_13) @[hbfp.scala 208:40]
    node _acc_T_37 = tail(_acc_T_36, 1) @[hbfp.scala 208:40]
    node _acc_T_38 = asSInt(_acc_T_37) @[hbfp.scala 208:40]
    node _acc_T_39 = add(_acc_T_38, two_complement_buffer_14) @[hbfp.scala 208:40]
    node _acc_T_40 = tail(_acc_T_39, 1) @[hbfp.scala 208:40]
    node _acc_T_41 = asSInt(_acc_T_40) @[hbfp.scala 208:40]
    node _acc_T_42 = add(_acc_T_41, two_complement_buffer_15) @[hbfp.scala 208:40]
    node _acc_T_43 = tail(_acc_T_42, 1) @[hbfp.scala 208:40]
    node _acc_T_44 = asSInt(_acc_T_43) @[hbfp.scala 208:40]
    node _acc_buf_T = asUInt(acc) @[hbfp.scala 209:18]
    node _acc_hbfp_T = bits(acc_buf, 25, 25) @[hbfp.scala 212:26]
    node _acc_hbfp_T_1 = eq(_acc_hbfp_T, UInt<1>("h1")) @[hbfp.scala 212:43]
    node _acc_hbfp_T_2 = bits(acc_buf, 24, 0) @[hbfp.scala 212:67]
    node _acc_hbfp_T_3 = cat(UInt<1>("h0"), _acc_hbfp_T_2) @[hbfp.scala 212:57]
    node _acc_hbfp_T_4 = not(_acc_hbfp_T_3) @[hbfp.scala 212:51]
    node _acc_hbfp_T_5 = add(_acc_hbfp_T_4, UInt<1>("h1")) @[hbfp.scala 212:89]
    node _acc_hbfp_T_6 = tail(_acc_hbfp_T_5, 1) @[hbfp.scala 212:89]
    node _acc_hbfp_T_7 = mux(_acc_hbfp_T_1, _acc_hbfp_T_6, acc_buf) @[hbfp.scala 212:18]
    reg right_shift : UInt<8>, clock with :
      reset => (UInt<1>("h0"), right_shift) @[hbfp.scala 213:28]
    reg actual_shift : UInt<8>, clock with :
      reset => (UInt<1>("h0"), actual_shift) @[hbfp.scala 214:29]
    node _buf_T = bits(acc_hbfp, 24, 5) @[hbfp.scala 215:29]
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
    node _buf_T_41 = bits(_buf_T, 19, 16) @[Bitwise.scala 114:47]
    node _buf_T_42 = bits(_buf_T_41, 1, 0) @[Bitwise.scala 114:18]
    node _buf_T_43 = bits(_buf_T_42, 0, 0) @[Bitwise.scala 114:18]
    node _buf_T_44 = bits(_buf_T_42, 1, 1) @[Bitwise.scala 114:47]
    node _buf_T_45 = cat(_buf_T_43, _buf_T_44) @[Cat.scala 33:92]
    node _buf_T_46 = bits(_buf_T_41, 3, 2) @[Bitwise.scala 114:47]
    node _buf_T_47 = bits(_buf_T_46, 0, 0) @[Bitwise.scala 114:18]
    node _buf_T_48 = bits(_buf_T_46, 1, 1) @[Bitwise.scala 114:47]
    node _buf_T_49 = cat(_buf_T_47, _buf_T_48) @[Cat.scala 33:92]
    node _buf_T_50 = cat(_buf_T_45, _buf_T_49) @[Cat.scala 33:92]
    node buf = cat(_buf_T_40, _buf_T_50) @[Cat.scala 33:92]
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
    node _right_shift_T_20 = mux(_right_shift_T_18, UInt<5>("h12"), UInt<5>("h13")) @[Mux.scala 47:70]
    node _right_shift_T_21 = mux(_right_shift_T_17, UInt<5>("h11"), _right_shift_T_20) @[Mux.scala 47:70]
    node _right_shift_T_22 = mux(_right_shift_T_16, UInt<5>("h10"), _right_shift_T_21) @[Mux.scala 47:70]
    node _right_shift_T_23 = mux(_right_shift_T_15, UInt<4>("hf"), _right_shift_T_22) @[Mux.scala 47:70]
    node _right_shift_T_24 = mux(_right_shift_T_14, UInt<4>("he"), _right_shift_T_23) @[Mux.scala 47:70]
    node _right_shift_T_25 = mux(_right_shift_T_13, UInt<4>("hd"), _right_shift_T_24) @[Mux.scala 47:70]
    node _right_shift_T_26 = mux(_right_shift_T_12, UInt<4>("hc"), _right_shift_T_25) @[Mux.scala 47:70]
    node _right_shift_T_27 = mux(_right_shift_T_11, UInt<4>("hb"), _right_shift_T_26) @[Mux.scala 47:70]
    node _right_shift_T_28 = mux(_right_shift_T_10, UInt<4>("ha"), _right_shift_T_27) @[Mux.scala 47:70]
    node _right_shift_T_29 = mux(_right_shift_T_9, UInt<4>("h9"), _right_shift_T_28) @[Mux.scala 47:70]
    node _right_shift_T_30 = mux(_right_shift_T_8, UInt<4>("h8"), _right_shift_T_29) @[Mux.scala 47:70]
    node _right_shift_T_31 = mux(_right_shift_T_7, UInt<3>("h7"), _right_shift_T_30) @[Mux.scala 47:70]
    node _right_shift_T_32 = mux(_right_shift_T_6, UInt<3>("h6"), _right_shift_T_31) @[Mux.scala 47:70]
    node _right_shift_T_33 = mux(_right_shift_T_5, UInt<3>("h5"), _right_shift_T_32) @[Mux.scala 47:70]
    node _right_shift_T_34 = mux(_right_shift_T_4, UInt<3>("h4"), _right_shift_T_33) @[Mux.scala 47:70]
    node _right_shift_T_35 = mux(_right_shift_T_3, UInt<2>("h3"), _right_shift_T_34) @[Mux.scala 47:70]
    node _right_shift_T_36 = mux(_right_shift_T_2, UInt<2>("h2"), _right_shift_T_35) @[Mux.scala 47:70]
    node _right_shift_T_37 = mux(_right_shift_T_1, UInt<1>("h1"), _right_shift_T_36) @[Mux.scala 47:70]
    node _right_shift_T_38 = mux(_right_shift_T, UInt<1>("h0"), _right_shift_T_37) @[Mux.scala 47:70]
    node _actual_shift_T = sub(UInt<5>("h13"), right_shift) @[hbfp.scala 219:42]
    node _actual_shift_T_1 = tail(_actual_shift_T, 1) @[hbfp.scala 219:42]
    node man_out_shifted = dshr(acc_hbfp, actual_shift) @[hbfp.scala 222:34]
    node _io_result_T = bits(acc_hbfp, 25, 25) @[hbfp.scala 224:24]
    node exp_output = _exp_output_T_1 @[hbfp.scala 185:24 186:14]
    node _io_result_T_1 = add(exp_output, actual_shift) @[hbfp.scala 224:56]
    node _io_result_T_2 = tail(_io_result_T_1, 1) @[hbfp.scala 224:56]
    node _io_result_T_3 = cat(_io_result_T, _io_result_T_2) @[hbfp.scala 224:42]
    node _io_result_T_4 = bits(man_out_shifted, 4, 0) @[hbfp.scala 224:89]
    node _io_result_T_5 = cat(_io_result_T_3, _io_result_T_4) @[hbfp.scala 224:71]
    io_result <= _io_result_T_5 @[hbfp.scala 224:13]
    dotProductRegs_0 <= mux(reset, UInt<10>("h0"), _dotProductRegs_0_T) @[hbfp.scala 188:{51,51} 202:23]
    dotProductRegs_1 <= mux(reset, UInt<10>("h0"), _dotProductRegs_1_T) @[hbfp.scala 188:{51,51} 202:23]
    dotProductRegs_2 <= mux(reset, UInt<10>("h0"), _dotProductRegs_2_T) @[hbfp.scala 188:{51,51} 202:23]
    dotProductRegs_3 <= mux(reset, UInt<10>("h0"), _dotProductRegs_3_T) @[hbfp.scala 188:{51,51} 202:23]
    dotProductRegs_4 <= mux(reset, UInt<10>("h0"), _dotProductRegs_4_T) @[hbfp.scala 188:{51,51} 202:23]
    dotProductRegs_5 <= mux(reset, UInt<10>("h0"), _dotProductRegs_5_T) @[hbfp.scala 188:{51,51} 202:23]
    dotProductRegs_6 <= mux(reset, UInt<10>("h0"), _dotProductRegs_6_T) @[hbfp.scala 188:{51,51} 202:23]
    dotProductRegs_7 <= mux(reset, UInt<10>("h0"), _dotProductRegs_7_T) @[hbfp.scala 188:{51,51} 202:23]
    dotProductRegs_8 <= mux(reset, UInt<10>("h0"), _dotProductRegs_8_T) @[hbfp.scala 188:{51,51} 202:23]
    dotProductRegs_9 <= mux(reset, UInt<10>("h0"), _dotProductRegs_9_T) @[hbfp.scala 188:{51,51} 202:23]
    dotProductRegs_10 <= mux(reset, UInt<10>("h0"), _dotProductRegs_10_T) @[hbfp.scala 188:{51,51} 202:23]
    dotProductRegs_11 <= mux(reset, UInt<10>("h0"), _dotProductRegs_11_T) @[hbfp.scala 188:{51,51} 202:23]
    dotProductRegs_12 <= mux(reset, UInt<10>("h0"), _dotProductRegs_12_T) @[hbfp.scala 188:{51,51} 202:23]
    dotProductRegs_13 <= mux(reset, UInt<10>("h0"), _dotProductRegs_13_T) @[hbfp.scala 188:{51,51} 202:23]
    dotProductRegs_14 <= mux(reset, UInt<10>("h0"), _dotProductRegs_14_T) @[hbfp.scala 188:{51,51} 202:23]
    dotProductRegs_15 <= mux(reset, UInt<10>("h0"), _dotProductRegs_15_T) @[hbfp.scala 188:{51,51} 202:23]
    two_complement_buffer_0 <= mux(reset, asSInt(UInt<11>("h0")), _two_complement_buffer_0_T) @[hbfp.scala 189:{58,58} 205:30]
    two_complement_buffer_1 <= mux(reset, asSInt(UInt<11>("h0")), _two_complement_buffer_1_T) @[hbfp.scala 189:{58,58} 205:30]
    two_complement_buffer_2 <= mux(reset, asSInt(UInt<11>("h0")), _two_complement_buffer_2_T) @[hbfp.scala 189:{58,58} 205:30]
    two_complement_buffer_3 <= mux(reset, asSInt(UInt<11>("h0")), _two_complement_buffer_3_T) @[hbfp.scala 189:{58,58} 205:30]
    two_complement_buffer_4 <= mux(reset, asSInt(UInt<11>("h0")), _two_complement_buffer_4_T) @[hbfp.scala 189:{58,58} 205:30]
    two_complement_buffer_5 <= mux(reset, asSInt(UInt<11>("h0")), _two_complement_buffer_5_T) @[hbfp.scala 189:{58,58} 205:30]
    two_complement_buffer_6 <= mux(reset, asSInt(UInt<11>("h0")), _two_complement_buffer_6_T) @[hbfp.scala 189:{58,58} 205:30]
    two_complement_buffer_7 <= mux(reset, asSInt(UInt<11>("h0")), _two_complement_buffer_7_T) @[hbfp.scala 189:{58,58} 205:30]
    two_complement_buffer_8 <= mux(reset, asSInt(UInt<11>("h0")), _two_complement_buffer_8_T) @[hbfp.scala 189:{58,58} 205:30]
    two_complement_buffer_9 <= mux(reset, asSInt(UInt<11>("h0")), _two_complement_buffer_9_T) @[hbfp.scala 189:{58,58} 205:30]
    two_complement_buffer_10 <= mux(reset, asSInt(UInt<11>("h0")), _two_complement_buffer_10_T) @[hbfp.scala 189:{58,58} 205:30]
    two_complement_buffer_11 <= mux(reset, asSInt(UInt<11>("h0")), _two_complement_buffer_11_T) @[hbfp.scala 189:{58,58} 205:30]
    two_complement_buffer_12 <= mux(reset, asSInt(UInt<11>("h0")), _two_complement_buffer_12_T) @[hbfp.scala 189:{58,58} 205:30]
    two_complement_buffer_13 <= mux(reset, asSInt(UInt<11>("h0")), _two_complement_buffer_13_T) @[hbfp.scala 189:{58,58} 205:30]
    two_complement_buffer_14 <= mux(reset, asSInt(UInt<11>("h0")), _two_complement_buffer_14_T) @[hbfp.scala 189:{58,58} 205:30]
    two_complement_buffer_15 <= mux(reset, asSInt(UInt<11>("h0")), _two_complement_buffer_15_T) @[hbfp.scala 189:{58,58} 205:30]
    two_complement_0 <= mux(reset, UInt<11>("h0"), _two_complement_0_T_6) @[hbfp.scala 190:{51,51} 204:23]
    two_complement_1 <= mux(reset, UInt<11>("h0"), _two_complement_1_T_6) @[hbfp.scala 190:{51,51} 204:23]
    two_complement_2 <= mux(reset, UInt<11>("h0"), _two_complement_2_T_6) @[hbfp.scala 190:{51,51} 204:23]
    two_complement_3 <= mux(reset, UInt<11>("h0"), _two_complement_3_T_6) @[hbfp.scala 190:{51,51} 204:23]
    two_complement_4 <= mux(reset, UInt<11>("h0"), _two_complement_4_T_6) @[hbfp.scala 190:{51,51} 204:23]
    two_complement_5 <= mux(reset, UInt<11>("h0"), _two_complement_5_T_6) @[hbfp.scala 190:{51,51} 204:23]
    two_complement_6 <= mux(reset, UInt<11>("h0"), _two_complement_6_T_6) @[hbfp.scala 190:{51,51} 204:23]
    two_complement_7 <= mux(reset, UInt<11>("h0"), _two_complement_7_T_6) @[hbfp.scala 190:{51,51} 204:23]
    two_complement_8 <= mux(reset, UInt<11>("h0"), _two_complement_8_T_6) @[hbfp.scala 190:{51,51} 204:23]
    two_complement_9 <= mux(reset, UInt<11>("h0"), _two_complement_9_T_6) @[hbfp.scala 190:{51,51} 204:23]
    two_complement_10 <= mux(reset, UInt<11>("h0"), _two_complement_10_T_6) @[hbfp.scala 190:{51,51} 204:23]
    two_complement_11 <= mux(reset, UInt<11>("h0"), _two_complement_11_T_6) @[hbfp.scala 190:{51,51} 204:23]
    two_complement_12 <= mux(reset, UInt<11>("h0"), _two_complement_12_T_6) @[hbfp.scala 190:{51,51} 204:23]
    two_complement_13 <= mux(reset, UInt<11>("h0"), _two_complement_13_T_6) @[hbfp.scala 190:{51,51} 204:23]
    two_complement_14 <= mux(reset, UInt<11>("h0"), _two_complement_14_T_6) @[hbfp.scala 190:{51,51} 204:23]
    two_complement_15 <= mux(reset, UInt<11>("h0"), _two_complement_15_T_6) @[hbfp.scala 190:{51,51} 204:23]
    signs_0 <= mux(reset, UInt<1>("h0"), _signs_0_T) @[hbfp.scala 191:{42,42} 203:14]
    signs_1 <= mux(reset, UInt<1>("h0"), _signs_1_T) @[hbfp.scala 191:{42,42} 203:14]
    signs_2 <= mux(reset, UInt<1>("h0"), _signs_2_T) @[hbfp.scala 191:{42,42} 203:14]
    signs_3 <= mux(reset, UInt<1>("h0"), _signs_3_T) @[hbfp.scala 191:{42,42} 203:14]
    signs_4 <= mux(reset, UInt<1>("h0"), _signs_4_T) @[hbfp.scala 191:{42,42} 203:14]
    signs_5 <= mux(reset, UInt<1>("h0"), _signs_5_T) @[hbfp.scala 191:{42,42} 203:14]
    signs_6 <= mux(reset, UInt<1>("h0"), _signs_6_T) @[hbfp.scala 191:{42,42} 203:14]
    signs_7 <= mux(reset, UInt<1>("h0"), _signs_7_T) @[hbfp.scala 191:{42,42} 203:14]
    signs_8 <= mux(reset, UInt<1>("h0"), _signs_8_T) @[hbfp.scala 191:{42,42} 203:14]
    signs_9 <= mux(reset, UInt<1>("h0"), _signs_9_T) @[hbfp.scala 191:{42,42} 203:14]
    signs_10 <= mux(reset, UInt<1>("h0"), _signs_10_T) @[hbfp.scala 191:{42,42} 203:14]
    signs_11 <= mux(reset, UInt<1>("h0"), _signs_11_T) @[hbfp.scala 191:{42,42} 203:14]
    signs_12 <= mux(reset, UInt<1>("h0"), _signs_12_T) @[hbfp.scala 191:{42,42} 203:14]
    signs_13 <= mux(reset, UInt<1>("h0"), _signs_13_T) @[hbfp.scala 191:{42,42} 203:14]
    signs_14 <= mux(reset, UInt<1>("h0"), _signs_14_T) @[hbfp.scala 191:{42,42} 203:14]
    signs_15 <= mux(reset, UInt<1>("h0"), _signs_15_T) @[hbfp.scala 191:{42,42} 203:14]
    acc <= mux(reset, asSInt(UInt<26>("h0")), _acc_T_44) @[hbfp.scala 192:{20,20} 208:7]
    acc_hbfp <= mux(reset, UInt<26>("h0"), _acc_hbfp_T_7) @[hbfp.scala 193:{25,25} 212:12]
    acc_buf <= mux(reset, UInt<26>("h0"), _acc_buf_T) @[hbfp.scala 194:{24,24} 209:11]
    multiplierReg <= mux(reset, UInt<5>("h0"), io_man_a_0) @[hbfp.scala 198:{32,32} 201:19]
    signReg <= mux(reset, UInt<1>("h0"), io_sign_a_0) @[hbfp.scala 199:{26,26} 200:13]
    multiplierReg_1 <= mux(reset, UInt<5>("h0"), io_man_a_1) @[hbfp.scala 198:{32,32} 201:19]
    signReg_1 <= mux(reset, UInt<1>("h0"), io_sign_a_1) @[hbfp.scala 199:{26,26} 200:13]
    multiplierReg_2 <= mux(reset, UInt<5>("h0"), io_man_a_2) @[hbfp.scala 198:{32,32} 201:19]
    signReg_2 <= mux(reset, UInt<1>("h0"), io_sign_a_2) @[hbfp.scala 199:{26,26} 200:13]
    multiplierReg_3 <= mux(reset, UInt<5>("h0"), io_man_a_3) @[hbfp.scala 198:{32,32} 201:19]
    signReg_3 <= mux(reset, UInt<1>("h0"), io_sign_a_3) @[hbfp.scala 199:{26,26} 200:13]
    multiplierReg_4 <= mux(reset, UInt<5>("h0"), io_man_a_4) @[hbfp.scala 198:{32,32} 201:19]
    signReg_4 <= mux(reset, UInt<1>("h0"), io_sign_a_4) @[hbfp.scala 199:{26,26} 200:13]
    multiplierReg_5 <= mux(reset, UInt<5>("h0"), io_man_a_5) @[hbfp.scala 198:{32,32} 201:19]
    signReg_5 <= mux(reset, UInt<1>("h0"), io_sign_a_5) @[hbfp.scala 199:{26,26} 200:13]
    multiplierReg_6 <= mux(reset, UInt<5>("h0"), io_man_a_6) @[hbfp.scala 198:{32,32} 201:19]
    signReg_6 <= mux(reset, UInt<1>("h0"), io_sign_a_6) @[hbfp.scala 199:{26,26} 200:13]
    multiplierReg_7 <= mux(reset, UInt<5>("h0"), io_man_a_7) @[hbfp.scala 198:{32,32} 201:19]
    signReg_7 <= mux(reset, UInt<1>("h0"), io_sign_a_7) @[hbfp.scala 199:{26,26} 200:13]
    multiplierReg_8 <= mux(reset, UInt<5>("h0"), io_man_a_8) @[hbfp.scala 198:{32,32} 201:19]
    signReg_8 <= mux(reset, UInt<1>("h0"), io_sign_a_8) @[hbfp.scala 199:{26,26} 200:13]
    multiplierReg_9 <= mux(reset, UInt<5>("h0"), io_man_a_9) @[hbfp.scala 198:{32,32} 201:19]
    signReg_9 <= mux(reset, UInt<1>("h0"), io_sign_a_9) @[hbfp.scala 199:{26,26} 200:13]
    multiplierReg_10 <= mux(reset, UInt<5>("h0"), io_man_a_10) @[hbfp.scala 198:{32,32} 201:19]
    signReg_10 <= mux(reset, UInt<1>("h0"), io_sign_a_10) @[hbfp.scala 199:{26,26} 200:13]
    multiplierReg_11 <= mux(reset, UInt<5>("h0"), io_man_a_11) @[hbfp.scala 198:{32,32} 201:19]
    signReg_11 <= mux(reset, UInt<1>("h0"), io_sign_a_11) @[hbfp.scala 199:{26,26} 200:13]
    multiplierReg_12 <= mux(reset, UInt<5>("h0"), io_man_a_12) @[hbfp.scala 198:{32,32} 201:19]
    signReg_12 <= mux(reset, UInt<1>("h0"), io_sign_a_12) @[hbfp.scala 199:{26,26} 200:13]
    multiplierReg_13 <= mux(reset, UInt<5>("h0"), io_man_a_13) @[hbfp.scala 198:{32,32} 201:19]
    signReg_13 <= mux(reset, UInt<1>("h0"), io_sign_a_13) @[hbfp.scala 199:{26,26} 200:13]
    multiplierReg_14 <= mux(reset, UInt<5>("h0"), io_man_a_14) @[hbfp.scala 198:{32,32} 201:19]
    signReg_14 <= mux(reset, UInt<1>("h0"), io_sign_a_14) @[hbfp.scala 199:{26,26} 200:13]
    multiplierReg_15 <= mux(reset, UInt<5>("h0"), io_man_a_15) @[hbfp.scala 198:{32,32} 201:19]
    signReg_15 <= mux(reset, UInt<1>("h0"), io_sign_a_15) @[hbfp.scala 199:{26,26} 200:13]
    right_shift <= mux(reset, UInt<8>("h0"), _right_shift_T_38) @[hbfp.scala 213:{28,28} 217:15]
    actual_shift <= mux(reset, UInt<8>("h0"), _actual_shift_T_1) @[hbfp.scala 214:{29,29} 219:16]
