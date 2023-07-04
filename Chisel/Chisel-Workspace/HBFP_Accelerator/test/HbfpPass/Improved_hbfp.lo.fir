FIRRTL version 1.1.0
circuit Improved_hbfp :
  module Improved_hbfp :
    input clock : Clock
    input reset : UInt<1>
    input io_in_a_man_0 : UInt<6>
    input io_in_a_man_1 : UInt<6>
    input io_in_a_man_2 : UInt<6>
    input io_in_a_man_3 : UInt<6>
    input io_in_a_man_4 : UInt<6>
    input io_in_a_man_5 : UInt<6>
    input io_in_a_man_6 : UInt<6>
    input io_in_a_man_7 : UInt<6>
    input io_in_a_man_8 : UInt<6>
    input io_in_a_man_9 : UInt<6>
    input io_in_a_man_10 : UInt<6>
    input io_in_a_man_11 : UInt<6>
    input io_in_a_man_12 : UInt<6>
    input io_in_a_man_13 : UInt<6>
    input io_in_a_man_14 : UInt<6>
    input io_in_a_man_15 : UInt<6>
    input io_in_a_sign_0 : UInt<1>
    input io_in_a_sign_1 : UInt<1>
    input io_in_a_sign_2 : UInt<1>
    input io_in_a_sign_3 : UInt<1>
    input io_in_a_sign_4 : UInt<1>
    input io_in_a_sign_5 : UInt<1>
    input io_in_a_sign_6 : UInt<1>
    input io_in_a_sign_7 : UInt<1>
    input io_in_a_sign_8 : UInt<1>
    input io_in_a_sign_9 : UInt<1>
    input io_in_a_sign_10 : UInt<1>
    input io_in_a_sign_11 : UInt<1>
    input io_in_a_sign_12 : UInt<1>
    input io_in_a_sign_13 : UInt<1>
    input io_in_a_sign_14 : UInt<1>
    input io_in_a_sign_15 : UInt<1>
    input io_in_a_exp : UInt<8>
    input io_in_b_man_0 : UInt<6>
    input io_in_b_man_1 : UInt<6>
    input io_in_b_man_2 : UInt<6>
    input io_in_b_man_3 : UInt<6>
    input io_in_b_man_4 : UInt<6>
    input io_in_b_man_5 : UInt<6>
    input io_in_b_man_6 : UInt<6>
    input io_in_b_man_7 : UInt<6>
    input io_in_b_man_8 : UInt<6>
    input io_in_b_man_9 : UInt<6>
    input io_in_b_man_10 : UInt<6>
    input io_in_b_man_11 : UInt<6>
    input io_in_b_man_12 : UInt<6>
    input io_in_b_man_13 : UInt<6>
    input io_in_b_man_14 : UInt<6>
    input io_in_b_man_15 : UInt<6>
    input io_in_b_sign_0 : UInt<1>
    input io_in_b_sign_1 : UInt<1>
    input io_in_b_sign_2 : UInt<1>
    input io_in_b_sign_3 : UInt<1>
    input io_in_b_sign_4 : UInt<1>
    input io_in_b_sign_5 : UInt<1>
    input io_in_b_sign_6 : UInt<1>
    input io_in_b_sign_7 : UInt<1>
    input io_in_b_sign_8 : UInt<1>
    input io_in_b_sign_9 : UInt<1>
    input io_in_b_sign_10 : UInt<1>
    input io_in_b_sign_11 : UInt<1>
    input io_in_b_sign_12 : UInt<1>
    input io_in_b_sign_13 : UInt<1>
    input io_in_b_sign_14 : UInt<1>
    input io_in_b_sign_15 : UInt<1>
    input io_in_b_exp : UInt<8>
    output io_result : UInt<15>

    node _exp_output_T = add(io_in_a_exp, io_in_b_exp) @[elegant.scala 511:23]
    reg dotProductRegs_0 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_0) @[elegant.scala 513:51]
    reg dotProductRegs_1 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_1) @[elegant.scala 513:51]
    reg dotProductRegs_2 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_2) @[elegant.scala 513:51]
    reg dotProductRegs_3 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_3) @[elegant.scala 513:51]
    reg dotProductRegs_4 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_4) @[elegant.scala 513:51]
    reg dotProductRegs_5 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_5) @[elegant.scala 513:51]
    reg dotProductRegs_6 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_6) @[elegant.scala 513:51]
    reg dotProductRegs_7 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_7) @[elegant.scala 513:51]
    reg dotProductRegs_8 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_8) @[elegant.scala 513:51]
    reg dotProductRegs_9 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_9) @[elegant.scala 513:51]
    reg dotProductRegs_10 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_10) @[elegant.scala 513:51]
    reg dotProductRegs_11 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_11) @[elegant.scala 513:51]
    reg dotProductRegs_12 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_12) @[elegant.scala 513:51]
    reg dotProductRegs_13 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_13) @[elegant.scala 513:51]
    reg dotProductRegs_14 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_14) @[elegant.scala 513:51]
    reg dotProductRegs_15 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_15) @[elegant.scala 513:51]
    reg two_complement_buffer_0 : SInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_0) @[elegant.scala 514:58]
    reg two_complement_buffer_1 : SInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_1) @[elegant.scala 514:58]
    reg two_complement_buffer_2 : SInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_2) @[elegant.scala 514:58]
    reg two_complement_buffer_3 : SInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_3) @[elegant.scala 514:58]
    reg two_complement_buffer_4 : SInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_4) @[elegant.scala 514:58]
    reg two_complement_buffer_5 : SInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_5) @[elegant.scala 514:58]
    reg two_complement_buffer_6 : SInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_6) @[elegant.scala 514:58]
    reg two_complement_buffer_7 : SInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_7) @[elegant.scala 514:58]
    reg two_complement_buffer_8 : SInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_8) @[elegant.scala 514:58]
    reg two_complement_buffer_9 : SInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_9) @[elegant.scala 514:58]
    reg two_complement_buffer_10 : SInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_10) @[elegant.scala 514:58]
    reg two_complement_buffer_11 : SInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_11) @[elegant.scala 514:58]
    reg two_complement_buffer_12 : SInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_12) @[elegant.scala 514:58]
    reg two_complement_buffer_13 : SInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_13) @[elegant.scala 514:58]
    reg two_complement_buffer_14 : SInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_14) @[elegant.scala 514:58]
    reg two_complement_buffer_15 : SInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_15) @[elegant.scala 514:58]
    reg two_complement_0 : UInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_0) @[elegant.scala 515:51]
    reg two_complement_1 : UInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_1) @[elegant.scala 515:51]
    reg two_complement_2 : UInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_2) @[elegant.scala 515:51]
    reg two_complement_3 : UInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_3) @[elegant.scala 515:51]
    reg two_complement_4 : UInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_4) @[elegant.scala 515:51]
    reg two_complement_5 : UInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_5) @[elegant.scala 515:51]
    reg two_complement_6 : UInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_6) @[elegant.scala 515:51]
    reg two_complement_7 : UInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_7) @[elegant.scala 515:51]
    reg two_complement_8 : UInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_8) @[elegant.scala 515:51]
    reg two_complement_9 : UInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_9) @[elegant.scala 515:51]
    reg two_complement_10 : UInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_10) @[elegant.scala 515:51]
    reg two_complement_11 : UInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_11) @[elegant.scala 515:51]
    reg two_complement_12 : UInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_12) @[elegant.scala 515:51]
    reg two_complement_13 : UInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_13) @[elegant.scala 515:51]
    reg two_complement_14 : UInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_14) @[elegant.scala 515:51]
    reg two_complement_15 : UInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_15) @[elegant.scala 515:51]
    reg signs_0 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_0) @[elegant.scala 516:42]
    reg signs_1 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_1) @[elegant.scala 516:42]
    reg signs_2 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_2) @[elegant.scala 516:42]
    reg signs_3 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_3) @[elegant.scala 516:42]
    reg signs_4 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_4) @[elegant.scala 516:42]
    reg signs_5 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_5) @[elegant.scala 516:42]
    reg signs_6 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_6) @[elegant.scala 516:42]
    reg signs_7 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_7) @[elegant.scala 516:42]
    reg signs_8 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_8) @[elegant.scala 516:42]
    reg signs_9 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_9) @[elegant.scala 516:42]
    reg signs_10 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_10) @[elegant.scala 516:42]
    reg signs_11 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_11) @[elegant.scala 516:42]
    reg signs_12 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_12) @[elegant.scala 516:42]
    reg signs_13 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_13) @[elegant.scala 516:42]
    reg signs_14 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_14) @[elegant.scala 516:42]
    reg signs_15 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_15) @[elegant.scala 516:42]
    reg acc : SInt<28>, clock with :
      reset => (UInt<1>("h0"), acc) @[elegant.scala 517:20]
    reg acc_hbfp : UInt<28>, clock with :
      reset => (UInt<1>("h0"), acc_hbfp) @[elegant.scala 518:25]
    reg acc_buf : UInt<28>, clock with :
      reset => (UInt<1>("h0"), acc_buf) @[elegant.scala 519:24]
    reg multiplierReg : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg) @[elegant.scala 524:34]
    reg multiplierReg2 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg2) @[elegant.scala 525:35]
    reg signReg : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg) @[elegant.scala 527:28]
    reg pp1 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp1) @[elegant.scala 528:24]
    reg pp2 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp2) @[elegant.scala 529:24]
    reg pp3 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp3) @[elegant.scala 530:24]
    reg pp4 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp4) @[elegant.scala 531:24]
    reg pp5 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp5) @[elegant.scala 532:24]
    reg pp6 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp6) @[elegant.scala 533:24]
    reg pp7 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp7) @[elegant.scala 534:24]
    reg pp8 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp8) @[elegant.scala 535:24]
    reg pp9 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp9) @[elegant.scala 536:24]
    node _pp1_T = bits(multiplierReg, 1, 0) @[elegant.scala 541:31]
    node _pp1_T_1 = bits(multiplierReg2, 1, 0) @[elegant.scala 541:53]
    node _pp1_T_2 = mul(_pp1_T, _pp1_T_1) @[elegant.scala 541:37]
    node _pp2_T = bits(multiplierReg, 1, 0) @[elegant.scala 542:40]
    node _pp2_T_1 = bits(multiplierReg2, 3, 2) @[elegant.scala 542:62]
    node _pp2_T_2 = mul(_pp2_T, _pp2_T_1) @[elegant.scala 542:46]
    node _pp2_T_3 = dshl(_pp2_T_2, UInt<2>("h2")) @[elegant.scala 542:69]
    reg pp2_REG : UInt<7>, clock with :
      reset => (UInt<1>("h0"), pp2_REG) @[elegant.scala 542:25]
    node _pp3_T = bits(multiplierReg, 1, 0) @[elegant.scala 543:48]
    node _pp3_T_1 = bits(multiplierReg2, 5, 4) @[elegant.scala 543:70]
    node _pp3_T_2 = mul(_pp3_T, _pp3_T_1) @[elegant.scala 543:54]
    node _pp3_T_3 = dshl(_pp3_T_2, UInt<3>("h4")) @[elegant.scala 543:77]
    reg pp3_REG : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp3_REG) @[elegant.scala 543:33]
    reg pp3_REG_1 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp3_REG_1) @[elegant.scala 543:25]
    node _pp4_T = bits(multiplierReg, 3, 2) @[elegant.scala 544:56]
    node _pp4_T_1 = bits(multiplierReg2, 1, 0) @[elegant.scala 544:78]
    node _pp4_T_2 = mul(_pp4_T, _pp4_T_1) @[elegant.scala 544:62]
    node _pp4_T_3 = dshl(_pp4_T_2, UInt<2>("h2")) @[elegant.scala 544:85]
    reg pp4_REG : UInt<7>, clock with :
      reset => (UInt<1>("h0"), pp4_REG) @[elegant.scala 544:41]
    reg pp4_REG_1 : UInt<7>, clock with :
      reset => (UInt<1>("h0"), pp4_REG_1) @[elegant.scala 544:33]
    reg pp4_REG_2 : UInt<7>, clock with :
      reset => (UInt<1>("h0"), pp4_REG_2) @[elegant.scala 544:25]
    node _pp5_T = bits(multiplierReg, 3, 2) @[elegant.scala 545:64]
    node _pp5_T_1 = bits(multiplierReg2, 3, 2) @[elegant.scala 545:86]
    node _pp5_T_2 = mul(_pp5_T, _pp5_T_1) @[elegant.scala 545:70]
    node _pp5_T_3 = dshl(_pp5_T_2, UInt<3>("h4")) @[elegant.scala 545:93]
    reg pp5_REG : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp5_REG) @[elegant.scala 545:49]
    reg pp5_REG_1 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp5_REG_1) @[elegant.scala 545:41]
    reg pp5_REG_2 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp5_REG_2) @[elegant.scala 545:33]
    reg pp5_REG_3 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp5_REG_3) @[elegant.scala 545:25]
    node _pp6_T = bits(multiplierReg, 3, 2) @[elegant.scala 546:72]
    node _pp6_T_1 = bits(multiplierReg2, 5, 4) @[elegant.scala 546:94]
    node _pp6_T_2 = mul(_pp6_T, _pp6_T_1) @[elegant.scala 546:78]
    node _pp6_T_3 = dshl(_pp6_T_2, UInt<3>("h6")) @[elegant.scala 546:101]
    reg pp6_REG : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp6_REG) @[elegant.scala 546:57]
    reg pp6_REG_1 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp6_REG_1) @[elegant.scala 546:49]
    reg pp6_REG_2 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp6_REG_2) @[elegant.scala 546:41]
    reg pp6_REG_3 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp6_REG_3) @[elegant.scala 546:33]
    reg pp6_REG_4 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp6_REG_4) @[elegant.scala 546:25]
    node _pp7_T = bits(multiplierReg, 5, 4) @[elegant.scala 547:80]
    node _pp7_T_1 = bits(multiplierReg2, 1, 0) @[elegant.scala 547:102]
    node _pp7_T_2 = mul(_pp7_T, _pp7_T_1) @[elegant.scala 547:86]
    node _pp7_T_3 = dshl(_pp7_T_2, UInt<3>("h4")) @[elegant.scala 547:109]
    reg pp7_REG : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG) @[elegant.scala 547:65]
    reg pp7_REG_1 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_1) @[elegant.scala 547:57]
    reg pp7_REG_2 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_2) @[elegant.scala 547:49]
    reg pp7_REG_3 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_3) @[elegant.scala 547:41]
    reg pp7_REG_4 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_4) @[elegant.scala 547:33]
    reg pp7_REG_5 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_5) @[elegant.scala 547:25]
    node _pp8_T = bits(multiplierReg, 5, 4) @[elegant.scala 548:88]
    node _pp8_T_1 = bits(multiplierReg2, 3, 2) @[elegant.scala 548:110]
    node _pp8_T_2 = mul(_pp8_T, _pp8_T_1) @[elegant.scala 548:94]
    node _pp8_T_3 = dshl(_pp8_T_2, UInt<3>("h6")) @[elegant.scala 548:117]
    reg pp8_REG : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG) @[elegant.scala 548:73]
    reg pp8_REG_1 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_1) @[elegant.scala 548:65]
    reg pp8_REG_2 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_2) @[elegant.scala 548:57]
    reg pp8_REG_3 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_3) @[elegant.scala 548:49]
    reg pp8_REG_4 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_4) @[elegant.scala 548:41]
    reg pp8_REG_5 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_5) @[elegant.scala 548:33]
    reg pp8_REG_6 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_6) @[elegant.scala 548:25]
    node _dotProductRegs_0_T = add(pp1, pp2) @[elegant.scala 549:36]
    node _dotProductRegs_0_T_1 = add(_dotProductRegs_0_T, pp3) @[elegant.scala 549:43]
    node _dotProductRegs_0_T_2 = add(_dotProductRegs_0_T_1, pp4) @[elegant.scala 549:50]
    node _dotProductRegs_0_T_3 = add(_dotProductRegs_0_T_2, pp5) @[elegant.scala 549:57]
    node _dotProductRegs_0_T_4 = add(_dotProductRegs_0_T_3, pp6) @[elegant.scala 549:64]
    node _dotProductRegs_0_T_5 = add(_dotProductRegs_0_T_4, pp7) @[elegant.scala 549:71]
    node _dotProductRegs_0_T_6 = add(_dotProductRegs_0_T_5, pp8) @[elegant.scala 549:78]
    node _dotProductRegs_0_T_7 = bits(multiplierReg, 5, 4) @[elegant.scala 549:166]
    node _dotProductRegs_0_T_8 = bits(multiplierReg2, 5, 4) @[elegant.scala 549:188]
    node _dotProductRegs_0_T_9 = mul(_dotProductRegs_0_T_7, _dotProductRegs_0_T_8) @[elegant.scala 549:172]
    node _dotProductRegs_0_T_10 = dshl(_dotProductRegs_0_T_9, UInt<4>("h8")) @[elegant.scala 549:195]
    reg dotProductRegs_0_REG : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_0_REG) @[elegant.scala 549:151]
    reg dotProductRegs_0_REG_1 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_0_REG_1) @[elegant.scala 549:143]
    reg dotProductRegs_0_REG_2 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_0_REG_2) @[elegant.scala 549:135]
    reg dotProductRegs_0_REG_3 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_0_REG_3) @[elegant.scala 549:127]
    reg dotProductRegs_0_REG_4 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_0_REG_4) @[elegant.scala 549:119]
    reg dotProductRegs_0_REG_5 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_0_REG_5) @[elegant.scala 549:111]
    reg dotProductRegs_0_REG_6 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_0_REG_6) @[elegant.scala 549:103]
    reg dotProductRegs_0_REG_7 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_0_REG_7) @[elegant.scala 549:95]
    node _dotProductRegs_0_T_11 = add(_dotProductRegs_0_T_6, dotProductRegs_0_REG_7) @[elegant.scala 549:85]
    node _signs_0_T = xor(signReg, io_in_b_sign_0) @[elegant.scala 552:27]
    node _two_complement_0_T = eq(signs_0, UInt<1>("h1")) @[elegant.scala 553:40]
    node _two_complement_0_T_1 = cat(UInt<1>("h0"), dotProductRegs_0) @[elegant.scala 553:55]
    node _two_complement_0_T_2 = not(_two_complement_0_T_1) @[elegant.scala 553:49]
    node _two_complement_0_T_3 = add(_two_complement_0_T_2, UInt<1>("h1")) @[elegant.scala 553:77]
    node _two_complement_0_T_4 = tail(_two_complement_0_T_3, 1) @[elegant.scala 553:77]
    node _two_complement_0_T_5 = cat(UInt<1>("h0"), dotProductRegs_0) @[elegant.scala 553:90]
    node _two_complement_0_T_6 = mux(_two_complement_0_T, _two_complement_0_T_4, _two_complement_0_T_5) @[elegant.scala 553:31]
    node _two_complement_buffer_0_T = asSInt(two_complement_0) @[elegant.scala 554:53]
    reg multiplierReg_1 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_1) @[elegant.scala 524:34]
    reg multiplierReg2_1 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg2_1) @[elegant.scala 525:35]
    reg signReg_1 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_1) @[elegant.scala 527:28]
    reg pp1_1 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp1_1) @[elegant.scala 528:24]
    reg pp2_1 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp2_1) @[elegant.scala 529:24]
    reg pp3_1 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp3_1) @[elegant.scala 530:24]
    reg pp4_1 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp4_1) @[elegant.scala 531:24]
    reg pp5_1 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp5_1) @[elegant.scala 532:24]
    reg pp6_1 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp6_1) @[elegant.scala 533:24]
    reg pp7_1 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp7_1) @[elegant.scala 534:24]
    reg pp8_1 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp8_1) @[elegant.scala 535:24]
    reg pp9_1 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp9_1) @[elegant.scala 536:24]
    node _pp1_T_3 = bits(multiplierReg_1, 1, 0) @[elegant.scala 541:31]
    node _pp1_T_4 = bits(multiplierReg2_1, 1, 0) @[elegant.scala 541:53]
    node _pp1_T_5 = mul(_pp1_T_3, _pp1_T_4) @[elegant.scala 541:37]
    node _pp2_T_4 = bits(multiplierReg_1, 1, 0) @[elegant.scala 542:40]
    node _pp2_T_5 = bits(multiplierReg2_1, 3, 2) @[elegant.scala 542:62]
    node _pp2_T_6 = mul(_pp2_T_4, _pp2_T_5) @[elegant.scala 542:46]
    node _pp2_T_7 = dshl(_pp2_T_6, UInt<2>("h2")) @[elegant.scala 542:69]
    reg pp2_REG_1 : UInt<7>, clock with :
      reset => (UInt<1>("h0"), pp2_REG_1) @[elegant.scala 542:25]
    node _pp3_T_4 = bits(multiplierReg_1, 1, 0) @[elegant.scala 543:48]
    node _pp3_T_5 = bits(multiplierReg2_1, 5, 4) @[elegant.scala 543:70]
    node _pp3_T_6 = mul(_pp3_T_4, _pp3_T_5) @[elegant.scala 543:54]
    node _pp3_T_7 = dshl(_pp3_T_6, UInt<3>("h4")) @[elegant.scala 543:77]
    reg pp3_REG_2 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp3_REG_2) @[elegant.scala 543:33]
    reg pp3_REG_3 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp3_REG_3) @[elegant.scala 543:25]
    node _pp4_T_4 = bits(multiplierReg_1, 3, 2) @[elegant.scala 544:56]
    node _pp4_T_5 = bits(multiplierReg2_1, 1, 0) @[elegant.scala 544:78]
    node _pp4_T_6 = mul(_pp4_T_4, _pp4_T_5) @[elegant.scala 544:62]
    node _pp4_T_7 = dshl(_pp4_T_6, UInt<2>("h2")) @[elegant.scala 544:85]
    reg pp4_REG_3 : UInt<7>, clock with :
      reset => (UInt<1>("h0"), pp4_REG_3) @[elegant.scala 544:41]
    reg pp4_REG_4 : UInt<7>, clock with :
      reset => (UInt<1>("h0"), pp4_REG_4) @[elegant.scala 544:33]
    reg pp4_REG_5 : UInt<7>, clock with :
      reset => (UInt<1>("h0"), pp4_REG_5) @[elegant.scala 544:25]
    node _pp5_T_4 = bits(multiplierReg_1, 3, 2) @[elegant.scala 545:64]
    node _pp5_T_5 = bits(multiplierReg2_1, 3, 2) @[elegant.scala 545:86]
    node _pp5_T_6 = mul(_pp5_T_4, _pp5_T_5) @[elegant.scala 545:70]
    node _pp5_T_7 = dshl(_pp5_T_6, UInt<3>("h4")) @[elegant.scala 545:93]
    reg pp5_REG_4 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp5_REG_4) @[elegant.scala 545:49]
    reg pp5_REG_5 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp5_REG_5) @[elegant.scala 545:41]
    reg pp5_REG_6 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp5_REG_6) @[elegant.scala 545:33]
    reg pp5_REG_7 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp5_REG_7) @[elegant.scala 545:25]
    node _pp6_T_4 = bits(multiplierReg_1, 3, 2) @[elegant.scala 546:72]
    node _pp6_T_5 = bits(multiplierReg2_1, 5, 4) @[elegant.scala 546:94]
    node _pp6_T_6 = mul(_pp6_T_4, _pp6_T_5) @[elegant.scala 546:78]
    node _pp6_T_7 = dshl(_pp6_T_6, UInt<3>("h6")) @[elegant.scala 546:101]
    reg pp6_REG_5 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp6_REG_5) @[elegant.scala 546:57]
    reg pp6_REG_6 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp6_REG_6) @[elegant.scala 546:49]
    reg pp6_REG_7 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp6_REG_7) @[elegant.scala 546:41]
    reg pp6_REG_8 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp6_REG_8) @[elegant.scala 546:33]
    reg pp6_REG_9 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp6_REG_9) @[elegant.scala 546:25]
    node _pp7_T_4 = bits(multiplierReg_1, 5, 4) @[elegant.scala 547:80]
    node _pp7_T_5 = bits(multiplierReg2_1, 1, 0) @[elegant.scala 547:102]
    node _pp7_T_6 = mul(_pp7_T_4, _pp7_T_5) @[elegant.scala 547:86]
    node _pp7_T_7 = dshl(_pp7_T_6, UInt<3>("h4")) @[elegant.scala 547:109]
    reg pp7_REG_6 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_6) @[elegant.scala 547:65]
    reg pp7_REG_7 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_7) @[elegant.scala 547:57]
    reg pp7_REG_8 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_8) @[elegant.scala 547:49]
    reg pp7_REG_9 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_9) @[elegant.scala 547:41]
    reg pp7_REG_10 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_10) @[elegant.scala 547:33]
    reg pp7_REG_11 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_11) @[elegant.scala 547:25]
    node _pp8_T_4 = bits(multiplierReg_1, 5, 4) @[elegant.scala 548:88]
    node _pp8_T_5 = bits(multiplierReg2_1, 3, 2) @[elegant.scala 548:110]
    node _pp8_T_6 = mul(_pp8_T_4, _pp8_T_5) @[elegant.scala 548:94]
    node _pp8_T_7 = dshl(_pp8_T_6, UInt<3>("h6")) @[elegant.scala 548:117]
    reg pp8_REG_7 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_7) @[elegant.scala 548:73]
    reg pp8_REG_8 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_8) @[elegant.scala 548:65]
    reg pp8_REG_9 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_9) @[elegant.scala 548:57]
    reg pp8_REG_10 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_10) @[elegant.scala 548:49]
    reg pp8_REG_11 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_11) @[elegant.scala 548:41]
    reg pp8_REG_12 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_12) @[elegant.scala 548:33]
    reg pp8_REG_13 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_13) @[elegant.scala 548:25]
    node _dotProductRegs_1_T = add(pp1_1, pp2_1) @[elegant.scala 549:36]
    node _dotProductRegs_1_T_1 = add(_dotProductRegs_1_T, pp3_1) @[elegant.scala 549:43]
    node _dotProductRegs_1_T_2 = add(_dotProductRegs_1_T_1, pp4_1) @[elegant.scala 549:50]
    node _dotProductRegs_1_T_3 = add(_dotProductRegs_1_T_2, pp5_1) @[elegant.scala 549:57]
    node _dotProductRegs_1_T_4 = add(_dotProductRegs_1_T_3, pp6_1) @[elegant.scala 549:64]
    node _dotProductRegs_1_T_5 = add(_dotProductRegs_1_T_4, pp7_1) @[elegant.scala 549:71]
    node _dotProductRegs_1_T_6 = add(_dotProductRegs_1_T_5, pp8_1) @[elegant.scala 549:78]
    node _dotProductRegs_1_T_7 = bits(multiplierReg_1, 5, 4) @[elegant.scala 549:166]
    node _dotProductRegs_1_T_8 = bits(multiplierReg2_1, 5, 4) @[elegant.scala 549:188]
    node _dotProductRegs_1_T_9 = mul(_dotProductRegs_1_T_7, _dotProductRegs_1_T_8) @[elegant.scala 549:172]
    node _dotProductRegs_1_T_10 = dshl(_dotProductRegs_1_T_9, UInt<4>("h8")) @[elegant.scala 549:195]
    reg dotProductRegs_1_REG : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_1_REG) @[elegant.scala 549:151]
    reg dotProductRegs_1_REG_1 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_1_REG_1) @[elegant.scala 549:143]
    reg dotProductRegs_1_REG_2 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_1_REG_2) @[elegant.scala 549:135]
    reg dotProductRegs_1_REG_3 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_1_REG_3) @[elegant.scala 549:127]
    reg dotProductRegs_1_REG_4 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_1_REG_4) @[elegant.scala 549:119]
    reg dotProductRegs_1_REG_5 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_1_REG_5) @[elegant.scala 549:111]
    reg dotProductRegs_1_REG_6 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_1_REG_6) @[elegant.scala 549:103]
    reg dotProductRegs_1_REG_7 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_1_REG_7) @[elegant.scala 549:95]
    node _dotProductRegs_1_T_11 = add(_dotProductRegs_1_T_6, dotProductRegs_1_REG_7) @[elegant.scala 549:85]
    node _signs_1_T = xor(signReg_1, io_in_b_sign_1) @[elegant.scala 552:27]
    node _two_complement_1_T = eq(signs_1, UInt<1>("h1")) @[elegant.scala 553:40]
    node _two_complement_1_T_1 = cat(UInt<1>("h0"), dotProductRegs_1) @[elegant.scala 553:55]
    node _two_complement_1_T_2 = not(_two_complement_1_T_1) @[elegant.scala 553:49]
    node _two_complement_1_T_3 = add(_two_complement_1_T_2, UInt<1>("h1")) @[elegant.scala 553:77]
    node _two_complement_1_T_4 = tail(_two_complement_1_T_3, 1) @[elegant.scala 553:77]
    node _two_complement_1_T_5 = cat(UInt<1>("h0"), dotProductRegs_1) @[elegant.scala 553:90]
    node _two_complement_1_T_6 = mux(_two_complement_1_T, _two_complement_1_T_4, _two_complement_1_T_5) @[elegant.scala 553:31]
    node _two_complement_buffer_1_T = asSInt(two_complement_1) @[elegant.scala 554:53]
    reg multiplierReg_2 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_2) @[elegant.scala 524:34]
    reg multiplierReg2_2 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg2_2) @[elegant.scala 525:35]
    reg signReg_2 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_2) @[elegant.scala 527:28]
    reg pp1_2 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp1_2) @[elegant.scala 528:24]
    reg pp2_2 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp2_2) @[elegant.scala 529:24]
    reg pp3_2 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp3_2) @[elegant.scala 530:24]
    reg pp4_2 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp4_2) @[elegant.scala 531:24]
    reg pp5_2 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp5_2) @[elegant.scala 532:24]
    reg pp6_2 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp6_2) @[elegant.scala 533:24]
    reg pp7_2 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp7_2) @[elegant.scala 534:24]
    reg pp8_2 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp8_2) @[elegant.scala 535:24]
    reg pp9_2 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp9_2) @[elegant.scala 536:24]
    node _pp1_T_6 = bits(multiplierReg_2, 1, 0) @[elegant.scala 541:31]
    node _pp1_T_7 = bits(multiplierReg2_2, 1, 0) @[elegant.scala 541:53]
    node _pp1_T_8 = mul(_pp1_T_6, _pp1_T_7) @[elegant.scala 541:37]
    node _pp2_T_8 = bits(multiplierReg_2, 1, 0) @[elegant.scala 542:40]
    node _pp2_T_9 = bits(multiplierReg2_2, 3, 2) @[elegant.scala 542:62]
    node _pp2_T_10 = mul(_pp2_T_8, _pp2_T_9) @[elegant.scala 542:46]
    node _pp2_T_11 = dshl(_pp2_T_10, UInt<2>("h2")) @[elegant.scala 542:69]
    reg pp2_REG_2 : UInt<7>, clock with :
      reset => (UInt<1>("h0"), pp2_REG_2) @[elegant.scala 542:25]
    node _pp3_T_8 = bits(multiplierReg_2, 1, 0) @[elegant.scala 543:48]
    node _pp3_T_9 = bits(multiplierReg2_2, 5, 4) @[elegant.scala 543:70]
    node _pp3_T_10 = mul(_pp3_T_8, _pp3_T_9) @[elegant.scala 543:54]
    node _pp3_T_11 = dshl(_pp3_T_10, UInt<3>("h4")) @[elegant.scala 543:77]
    reg pp3_REG_4 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp3_REG_4) @[elegant.scala 543:33]
    reg pp3_REG_5 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp3_REG_5) @[elegant.scala 543:25]
    node _pp4_T_8 = bits(multiplierReg_2, 3, 2) @[elegant.scala 544:56]
    node _pp4_T_9 = bits(multiplierReg2_2, 1, 0) @[elegant.scala 544:78]
    node _pp4_T_10 = mul(_pp4_T_8, _pp4_T_9) @[elegant.scala 544:62]
    node _pp4_T_11 = dshl(_pp4_T_10, UInt<2>("h2")) @[elegant.scala 544:85]
    reg pp4_REG_6 : UInt<7>, clock with :
      reset => (UInt<1>("h0"), pp4_REG_6) @[elegant.scala 544:41]
    reg pp4_REG_7 : UInt<7>, clock with :
      reset => (UInt<1>("h0"), pp4_REG_7) @[elegant.scala 544:33]
    reg pp4_REG_8 : UInt<7>, clock with :
      reset => (UInt<1>("h0"), pp4_REG_8) @[elegant.scala 544:25]
    node _pp5_T_8 = bits(multiplierReg_2, 3, 2) @[elegant.scala 545:64]
    node _pp5_T_9 = bits(multiplierReg2_2, 3, 2) @[elegant.scala 545:86]
    node _pp5_T_10 = mul(_pp5_T_8, _pp5_T_9) @[elegant.scala 545:70]
    node _pp5_T_11 = dshl(_pp5_T_10, UInt<3>("h4")) @[elegant.scala 545:93]
    reg pp5_REG_8 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp5_REG_8) @[elegant.scala 545:49]
    reg pp5_REG_9 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp5_REG_9) @[elegant.scala 545:41]
    reg pp5_REG_10 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp5_REG_10) @[elegant.scala 545:33]
    reg pp5_REG_11 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp5_REG_11) @[elegant.scala 545:25]
    node _pp6_T_8 = bits(multiplierReg_2, 3, 2) @[elegant.scala 546:72]
    node _pp6_T_9 = bits(multiplierReg2_2, 5, 4) @[elegant.scala 546:94]
    node _pp6_T_10 = mul(_pp6_T_8, _pp6_T_9) @[elegant.scala 546:78]
    node _pp6_T_11 = dshl(_pp6_T_10, UInt<3>("h6")) @[elegant.scala 546:101]
    reg pp6_REG_10 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp6_REG_10) @[elegant.scala 546:57]
    reg pp6_REG_11 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp6_REG_11) @[elegant.scala 546:49]
    reg pp6_REG_12 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp6_REG_12) @[elegant.scala 546:41]
    reg pp6_REG_13 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp6_REG_13) @[elegant.scala 546:33]
    reg pp6_REG_14 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp6_REG_14) @[elegant.scala 546:25]
    node _pp7_T_8 = bits(multiplierReg_2, 5, 4) @[elegant.scala 547:80]
    node _pp7_T_9 = bits(multiplierReg2_2, 1, 0) @[elegant.scala 547:102]
    node _pp7_T_10 = mul(_pp7_T_8, _pp7_T_9) @[elegant.scala 547:86]
    node _pp7_T_11 = dshl(_pp7_T_10, UInt<3>("h4")) @[elegant.scala 547:109]
    reg pp7_REG_12 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_12) @[elegant.scala 547:65]
    reg pp7_REG_13 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_13) @[elegant.scala 547:57]
    reg pp7_REG_14 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_14) @[elegant.scala 547:49]
    reg pp7_REG_15 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_15) @[elegant.scala 547:41]
    reg pp7_REG_16 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_16) @[elegant.scala 547:33]
    reg pp7_REG_17 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_17) @[elegant.scala 547:25]
    node _pp8_T_8 = bits(multiplierReg_2, 5, 4) @[elegant.scala 548:88]
    node _pp8_T_9 = bits(multiplierReg2_2, 3, 2) @[elegant.scala 548:110]
    node _pp8_T_10 = mul(_pp8_T_8, _pp8_T_9) @[elegant.scala 548:94]
    node _pp8_T_11 = dshl(_pp8_T_10, UInt<3>("h6")) @[elegant.scala 548:117]
    reg pp8_REG_14 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_14) @[elegant.scala 548:73]
    reg pp8_REG_15 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_15) @[elegant.scala 548:65]
    reg pp8_REG_16 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_16) @[elegant.scala 548:57]
    reg pp8_REG_17 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_17) @[elegant.scala 548:49]
    reg pp8_REG_18 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_18) @[elegant.scala 548:41]
    reg pp8_REG_19 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_19) @[elegant.scala 548:33]
    reg pp8_REG_20 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_20) @[elegant.scala 548:25]
    node _dotProductRegs_2_T = add(pp1_2, pp2_2) @[elegant.scala 549:36]
    node _dotProductRegs_2_T_1 = add(_dotProductRegs_2_T, pp3_2) @[elegant.scala 549:43]
    node _dotProductRegs_2_T_2 = add(_dotProductRegs_2_T_1, pp4_2) @[elegant.scala 549:50]
    node _dotProductRegs_2_T_3 = add(_dotProductRegs_2_T_2, pp5_2) @[elegant.scala 549:57]
    node _dotProductRegs_2_T_4 = add(_dotProductRegs_2_T_3, pp6_2) @[elegant.scala 549:64]
    node _dotProductRegs_2_T_5 = add(_dotProductRegs_2_T_4, pp7_2) @[elegant.scala 549:71]
    node _dotProductRegs_2_T_6 = add(_dotProductRegs_2_T_5, pp8_2) @[elegant.scala 549:78]
    node _dotProductRegs_2_T_7 = bits(multiplierReg_2, 5, 4) @[elegant.scala 549:166]
    node _dotProductRegs_2_T_8 = bits(multiplierReg2_2, 5, 4) @[elegant.scala 549:188]
    node _dotProductRegs_2_T_9 = mul(_dotProductRegs_2_T_7, _dotProductRegs_2_T_8) @[elegant.scala 549:172]
    node _dotProductRegs_2_T_10 = dshl(_dotProductRegs_2_T_9, UInt<4>("h8")) @[elegant.scala 549:195]
    reg dotProductRegs_2_REG : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_2_REG) @[elegant.scala 549:151]
    reg dotProductRegs_2_REG_1 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_2_REG_1) @[elegant.scala 549:143]
    reg dotProductRegs_2_REG_2 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_2_REG_2) @[elegant.scala 549:135]
    reg dotProductRegs_2_REG_3 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_2_REG_3) @[elegant.scala 549:127]
    reg dotProductRegs_2_REG_4 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_2_REG_4) @[elegant.scala 549:119]
    reg dotProductRegs_2_REG_5 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_2_REG_5) @[elegant.scala 549:111]
    reg dotProductRegs_2_REG_6 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_2_REG_6) @[elegant.scala 549:103]
    reg dotProductRegs_2_REG_7 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_2_REG_7) @[elegant.scala 549:95]
    node _dotProductRegs_2_T_11 = add(_dotProductRegs_2_T_6, dotProductRegs_2_REG_7) @[elegant.scala 549:85]
    node _signs_2_T = xor(signReg_2, io_in_b_sign_2) @[elegant.scala 552:27]
    node _two_complement_2_T = eq(signs_2, UInt<1>("h1")) @[elegant.scala 553:40]
    node _two_complement_2_T_1 = cat(UInt<1>("h0"), dotProductRegs_2) @[elegant.scala 553:55]
    node _two_complement_2_T_2 = not(_two_complement_2_T_1) @[elegant.scala 553:49]
    node _two_complement_2_T_3 = add(_two_complement_2_T_2, UInt<1>("h1")) @[elegant.scala 553:77]
    node _two_complement_2_T_4 = tail(_two_complement_2_T_3, 1) @[elegant.scala 553:77]
    node _two_complement_2_T_5 = cat(UInt<1>("h0"), dotProductRegs_2) @[elegant.scala 553:90]
    node _two_complement_2_T_6 = mux(_two_complement_2_T, _two_complement_2_T_4, _two_complement_2_T_5) @[elegant.scala 553:31]
    node _two_complement_buffer_2_T = asSInt(two_complement_2) @[elegant.scala 554:53]
    reg multiplierReg_3 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_3) @[elegant.scala 524:34]
    reg multiplierReg2_3 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg2_3) @[elegant.scala 525:35]
    reg signReg_3 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_3) @[elegant.scala 527:28]
    reg pp1_3 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp1_3) @[elegant.scala 528:24]
    reg pp2_3 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp2_3) @[elegant.scala 529:24]
    reg pp3_3 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp3_3) @[elegant.scala 530:24]
    reg pp4_3 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp4_3) @[elegant.scala 531:24]
    reg pp5_3 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp5_3) @[elegant.scala 532:24]
    reg pp6_3 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp6_3) @[elegant.scala 533:24]
    reg pp7_3 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp7_3) @[elegant.scala 534:24]
    reg pp8_3 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp8_3) @[elegant.scala 535:24]
    reg pp9_3 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp9_3) @[elegant.scala 536:24]
    node _pp1_T_9 = bits(multiplierReg_3, 1, 0) @[elegant.scala 541:31]
    node _pp1_T_10 = bits(multiplierReg2_3, 1, 0) @[elegant.scala 541:53]
    node _pp1_T_11 = mul(_pp1_T_9, _pp1_T_10) @[elegant.scala 541:37]
    node _pp2_T_12 = bits(multiplierReg_3, 1, 0) @[elegant.scala 542:40]
    node _pp2_T_13 = bits(multiplierReg2_3, 3, 2) @[elegant.scala 542:62]
    node _pp2_T_14 = mul(_pp2_T_12, _pp2_T_13) @[elegant.scala 542:46]
    node _pp2_T_15 = dshl(_pp2_T_14, UInt<2>("h2")) @[elegant.scala 542:69]
    reg pp2_REG_3 : UInt<7>, clock with :
      reset => (UInt<1>("h0"), pp2_REG_3) @[elegant.scala 542:25]
    node _pp3_T_12 = bits(multiplierReg_3, 1, 0) @[elegant.scala 543:48]
    node _pp3_T_13 = bits(multiplierReg2_3, 5, 4) @[elegant.scala 543:70]
    node _pp3_T_14 = mul(_pp3_T_12, _pp3_T_13) @[elegant.scala 543:54]
    node _pp3_T_15 = dshl(_pp3_T_14, UInt<3>("h4")) @[elegant.scala 543:77]
    reg pp3_REG_6 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp3_REG_6) @[elegant.scala 543:33]
    reg pp3_REG_7 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp3_REG_7) @[elegant.scala 543:25]
    node _pp4_T_12 = bits(multiplierReg_3, 3, 2) @[elegant.scala 544:56]
    node _pp4_T_13 = bits(multiplierReg2_3, 1, 0) @[elegant.scala 544:78]
    node _pp4_T_14 = mul(_pp4_T_12, _pp4_T_13) @[elegant.scala 544:62]
    node _pp4_T_15 = dshl(_pp4_T_14, UInt<2>("h2")) @[elegant.scala 544:85]
    reg pp4_REG_9 : UInt<7>, clock with :
      reset => (UInt<1>("h0"), pp4_REG_9) @[elegant.scala 544:41]
    reg pp4_REG_10 : UInt<7>, clock with :
      reset => (UInt<1>("h0"), pp4_REG_10) @[elegant.scala 544:33]
    reg pp4_REG_11 : UInt<7>, clock with :
      reset => (UInt<1>("h0"), pp4_REG_11) @[elegant.scala 544:25]
    node _pp5_T_12 = bits(multiplierReg_3, 3, 2) @[elegant.scala 545:64]
    node _pp5_T_13 = bits(multiplierReg2_3, 3, 2) @[elegant.scala 545:86]
    node _pp5_T_14 = mul(_pp5_T_12, _pp5_T_13) @[elegant.scala 545:70]
    node _pp5_T_15 = dshl(_pp5_T_14, UInt<3>("h4")) @[elegant.scala 545:93]
    reg pp5_REG_12 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp5_REG_12) @[elegant.scala 545:49]
    reg pp5_REG_13 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp5_REG_13) @[elegant.scala 545:41]
    reg pp5_REG_14 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp5_REG_14) @[elegant.scala 545:33]
    reg pp5_REG_15 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp5_REG_15) @[elegant.scala 545:25]
    node _pp6_T_12 = bits(multiplierReg_3, 3, 2) @[elegant.scala 546:72]
    node _pp6_T_13 = bits(multiplierReg2_3, 5, 4) @[elegant.scala 546:94]
    node _pp6_T_14 = mul(_pp6_T_12, _pp6_T_13) @[elegant.scala 546:78]
    node _pp6_T_15 = dshl(_pp6_T_14, UInt<3>("h6")) @[elegant.scala 546:101]
    reg pp6_REG_15 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp6_REG_15) @[elegant.scala 546:57]
    reg pp6_REG_16 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp6_REG_16) @[elegant.scala 546:49]
    reg pp6_REG_17 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp6_REG_17) @[elegant.scala 546:41]
    reg pp6_REG_18 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp6_REG_18) @[elegant.scala 546:33]
    reg pp6_REG_19 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp6_REG_19) @[elegant.scala 546:25]
    node _pp7_T_12 = bits(multiplierReg_3, 5, 4) @[elegant.scala 547:80]
    node _pp7_T_13 = bits(multiplierReg2_3, 1, 0) @[elegant.scala 547:102]
    node _pp7_T_14 = mul(_pp7_T_12, _pp7_T_13) @[elegant.scala 547:86]
    node _pp7_T_15 = dshl(_pp7_T_14, UInt<3>("h4")) @[elegant.scala 547:109]
    reg pp7_REG_18 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_18) @[elegant.scala 547:65]
    reg pp7_REG_19 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_19) @[elegant.scala 547:57]
    reg pp7_REG_20 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_20) @[elegant.scala 547:49]
    reg pp7_REG_21 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_21) @[elegant.scala 547:41]
    reg pp7_REG_22 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_22) @[elegant.scala 547:33]
    reg pp7_REG_23 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_23) @[elegant.scala 547:25]
    node _pp8_T_12 = bits(multiplierReg_3, 5, 4) @[elegant.scala 548:88]
    node _pp8_T_13 = bits(multiplierReg2_3, 3, 2) @[elegant.scala 548:110]
    node _pp8_T_14 = mul(_pp8_T_12, _pp8_T_13) @[elegant.scala 548:94]
    node _pp8_T_15 = dshl(_pp8_T_14, UInt<3>("h6")) @[elegant.scala 548:117]
    reg pp8_REG_21 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_21) @[elegant.scala 548:73]
    reg pp8_REG_22 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_22) @[elegant.scala 548:65]
    reg pp8_REG_23 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_23) @[elegant.scala 548:57]
    reg pp8_REG_24 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_24) @[elegant.scala 548:49]
    reg pp8_REG_25 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_25) @[elegant.scala 548:41]
    reg pp8_REG_26 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_26) @[elegant.scala 548:33]
    reg pp8_REG_27 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_27) @[elegant.scala 548:25]
    node _dotProductRegs_3_T = add(pp1_3, pp2_3) @[elegant.scala 549:36]
    node _dotProductRegs_3_T_1 = add(_dotProductRegs_3_T, pp3_3) @[elegant.scala 549:43]
    node _dotProductRegs_3_T_2 = add(_dotProductRegs_3_T_1, pp4_3) @[elegant.scala 549:50]
    node _dotProductRegs_3_T_3 = add(_dotProductRegs_3_T_2, pp5_3) @[elegant.scala 549:57]
    node _dotProductRegs_3_T_4 = add(_dotProductRegs_3_T_3, pp6_3) @[elegant.scala 549:64]
    node _dotProductRegs_3_T_5 = add(_dotProductRegs_3_T_4, pp7_3) @[elegant.scala 549:71]
    node _dotProductRegs_3_T_6 = add(_dotProductRegs_3_T_5, pp8_3) @[elegant.scala 549:78]
    node _dotProductRegs_3_T_7 = bits(multiplierReg_3, 5, 4) @[elegant.scala 549:166]
    node _dotProductRegs_3_T_8 = bits(multiplierReg2_3, 5, 4) @[elegant.scala 549:188]
    node _dotProductRegs_3_T_9 = mul(_dotProductRegs_3_T_7, _dotProductRegs_3_T_8) @[elegant.scala 549:172]
    node _dotProductRegs_3_T_10 = dshl(_dotProductRegs_3_T_9, UInt<4>("h8")) @[elegant.scala 549:195]
    reg dotProductRegs_3_REG : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_3_REG) @[elegant.scala 549:151]
    reg dotProductRegs_3_REG_1 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_3_REG_1) @[elegant.scala 549:143]
    reg dotProductRegs_3_REG_2 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_3_REG_2) @[elegant.scala 549:135]
    reg dotProductRegs_3_REG_3 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_3_REG_3) @[elegant.scala 549:127]
    reg dotProductRegs_3_REG_4 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_3_REG_4) @[elegant.scala 549:119]
    reg dotProductRegs_3_REG_5 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_3_REG_5) @[elegant.scala 549:111]
    reg dotProductRegs_3_REG_6 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_3_REG_6) @[elegant.scala 549:103]
    reg dotProductRegs_3_REG_7 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_3_REG_7) @[elegant.scala 549:95]
    node _dotProductRegs_3_T_11 = add(_dotProductRegs_3_T_6, dotProductRegs_3_REG_7) @[elegant.scala 549:85]
    node _signs_3_T = xor(signReg_3, io_in_b_sign_3) @[elegant.scala 552:27]
    node _two_complement_3_T = eq(signs_3, UInt<1>("h1")) @[elegant.scala 553:40]
    node _two_complement_3_T_1 = cat(UInt<1>("h0"), dotProductRegs_3) @[elegant.scala 553:55]
    node _two_complement_3_T_2 = not(_two_complement_3_T_1) @[elegant.scala 553:49]
    node _two_complement_3_T_3 = add(_two_complement_3_T_2, UInt<1>("h1")) @[elegant.scala 553:77]
    node _two_complement_3_T_4 = tail(_two_complement_3_T_3, 1) @[elegant.scala 553:77]
    node _two_complement_3_T_5 = cat(UInt<1>("h0"), dotProductRegs_3) @[elegant.scala 553:90]
    node _two_complement_3_T_6 = mux(_two_complement_3_T, _two_complement_3_T_4, _two_complement_3_T_5) @[elegant.scala 553:31]
    node _two_complement_buffer_3_T = asSInt(two_complement_3) @[elegant.scala 554:53]
    reg multiplierReg_4 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_4) @[elegant.scala 524:34]
    reg multiplierReg2_4 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg2_4) @[elegant.scala 525:35]
    reg signReg_4 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_4) @[elegant.scala 527:28]
    reg pp1_4 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp1_4) @[elegant.scala 528:24]
    reg pp2_4 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp2_4) @[elegant.scala 529:24]
    reg pp3_4 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp3_4) @[elegant.scala 530:24]
    reg pp4_4 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp4_4) @[elegant.scala 531:24]
    reg pp5_4 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp5_4) @[elegant.scala 532:24]
    reg pp6_4 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp6_4) @[elegant.scala 533:24]
    reg pp7_4 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp7_4) @[elegant.scala 534:24]
    reg pp8_4 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp8_4) @[elegant.scala 535:24]
    reg pp9_4 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp9_4) @[elegant.scala 536:24]
    node _pp1_T_12 = bits(multiplierReg_4, 1, 0) @[elegant.scala 541:31]
    node _pp1_T_13 = bits(multiplierReg2_4, 1, 0) @[elegant.scala 541:53]
    node _pp1_T_14 = mul(_pp1_T_12, _pp1_T_13) @[elegant.scala 541:37]
    node _pp2_T_16 = bits(multiplierReg_4, 1, 0) @[elegant.scala 542:40]
    node _pp2_T_17 = bits(multiplierReg2_4, 3, 2) @[elegant.scala 542:62]
    node _pp2_T_18 = mul(_pp2_T_16, _pp2_T_17) @[elegant.scala 542:46]
    node _pp2_T_19 = dshl(_pp2_T_18, UInt<2>("h2")) @[elegant.scala 542:69]
    reg pp2_REG_4 : UInt<7>, clock with :
      reset => (UInt<1>("h0"), pp2_REG_4) @[elegant.scala 542:25]
    node _pp3_T_16 = bits(multiplierReg_4, 1, 0) @[elegant.scala 543:48]
    node _pp3_T_17 = bits(multiplierReg2_4, 5, 4) @[elegant.scala 543:70]
    node _pp3_T_18 = mul(_pp3_T_16, _pp3_T_17) @[elegant.scala 543:54]
    node _pp3_T_19 = dshl(_pp3_T_18, UInt<3>("h4")) @[elegant.scala 543:77]
    reg pp3_REG_8 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp3_REG_8) @[elegant.scala 543:33]
    reg pp3_REG_9 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp3_REG_9) @[elegant.scala 543:25]
    node _pp4_T_16 = bits(multiplierReg_4, 3, 2) @[elegant.scala 544:56]
    node _pp4_T_17 = bits(multiplierReg2_4, 1, 0) @[elegant.scala 544:78]
    node _pp4_T_18 = mul(_pp4_T_16, _pp4_T_17) @[elegant.scala 544:62]
    node _pp4_T_19 = dshl(_pp4_T_18, UInt<2>("h2")) @[elegant.scala 544:85]
    reg pp4_REG_12 : UInt<7>, clock with :
      reset => (UInt<1>("h0"), pp4_REG_12) @[elegant.scala 544:41]
    reg pp4_REG_13 : UInt<7>, clock with :
      reset => (UInt<1>("h0"), pp4_REG_13) @[elegant.scala 544:33]
    reg pp4_REG_14 : UInt<7>, clock with :
      reset => (UInt<1>("h0"), pp4_REG_14) @[elegant.scala 544:25]
    node _pp5_T_16 = bits(multiplierReg_4, 3, 2) @[elegant.scala 545:64]
    node _pp5_T_17 = bits(multiplierReg2_4, 3, 2) @[elegant.scala 545:86]
    node _pp5_T_18 = mul(_pp5_T_16, _pp5_T_17) @[elegant.scala 545:70]
    node _pp5_T_19 = dshl(_pp5_T_18, UInt<3>("h4")) @[elegant.scala 545:93]
    reg pp5_REG_16 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp5_REG_16) @[elegant.scala 545:49]
    reg pp5_REG_17 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp5_REG_17) @[elegant.scala 545:41]
    reg pp5_REG_18 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp5_REG_18) @[elegant.scala 545:33]
    reg pp5_REG_19 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp5_REG_19) @[elegant.scala 545:25]
    node _pp6_T_16 = bits(multiplierReg_4, 3, 2) @[elegant.scala 546:72]
    node _pp6_T_17 = bits(multiplierReg2_4, 5, 4) @[elegant.scala 546:94]
    node _pp6_T_18 = mul(_pp6_T_16, _pp6_T_17) @[elegant.scala 546:78]
    node _pp6_T_19 = dshl(_pp6_T_18, UInt<3>("h6")) @[elegant.scala 546:101]
    reg pp6_REG_20 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp6_REG_20) @[elegant.scala 546:57]
    reg pp6_REG_21 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp6_REG_21) @[elegant.scala 546:49]
    reg pp6_REG_22 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp6_REG_22) @[elegant.scala 546:41]
    reg pp6_REG_23 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp6_REG_23) @[elegant.scala 546:33]
    reg pp6_REG_24 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp6_REG_24) @[elegant.scala 546:25]
    node _pp7_T_16 = bits(multiplierReg_4, 5, 4) @[elegant.scala 547:80]
    node _pp7_T_17 = bits(multiplierReg2_4, 1, 0) @[elegant.scala 547:102]
    node _pp7_T_18 = mul(_pp7_T_16, _pp7_T_17) @[elegant.scala 547:86]
    node _pp7_T_19 = dshl(_pp7_T_18, UInt<3>("h4")) @[elegant.scala 547:109]
    reg pp7_REG_24 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_24) @[elegant.scala 547:65]
    reg pp7_REG_25 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_25) @[elegant.scala 547:57]
    reg pp7_REG_26 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_26) @[elegant.scala 547:49]
    reg pp7_REG_27 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_27) @[elegant.scala 547:41]
    reg pp7_REG_28 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_28) @[elegant.scala 547:33]
    reg pp7_REG_29 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_29) @[elegant.scala 547:25]
    node _pp8_T_16 = bits(multiplierReg_4, 5, 4) @[elegant.scala 548:88]
    node _pp8_T_17 = bits(multiplierReg2_4, 3, 2) @[elegant.scala 548:110]
    node _pp8_T_18 = mul(_pp8_T_16, _pp8_T_17) @[elegant.scala 548:94]
    node _pp8_T_19 = dshl(_pp8_T_18, UInt<3>("h6")) @[elegant.scala 548:117]
    reg pp8_REG_28 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_28) @[elegant.scala 548:73]
    reg pp8_REG_29 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_29) @[elegant.scala 548:65]
    reg pp8_REG_30 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_30) @[elegant.scala 548:57]
    reg pp8_REG_31 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_31) @[elegant.scala 548:49]
    reg pp8_REG_32 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_32) @[elegant.scala 548:41]
    reg pp8_REG_33 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_33) @[elegant.scala 548:33]
    reg pp8_REG_34 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_34) @[elegant.scala 548:25]
    node _dotProductRegs_4_T = add(pp1_4, pp2_4) @[elegant.scala 549:36]
    node _dotProductRegs_4_T_1 = add(_dotProductRegs_4_T, pp3_4) @[elegant.scala 549:43]
    node _dotProductRegs_4_T_2 = add(_dotProductRegs_4_T_1, pp4_4) @[elegant.scala 549:50]
    node _dotProductRegs_4_T_3 = add(_dotProductRegs_4_T_2, pp5_4) @[elegant.scala 549:57]
    node _dotProductRegs_4_T_4 = add(_dotProductRegs_4_T_3, pp6_4) @[elegant.scala 549:64]
    node _dotProductRegs_4_T_5 = add(_dotProductRegs_4_T_4, pp7_4) @[elegant.scala 549:71]
    node _dotProductRegs_4_T_6 = add(_dotProductRegs_4_T_5, pp8_4) @[elegant.scala 549:78]
    node _dotProductRegs_4_T_7 = bits(multiplierReg_4, 5, 4) @[elegant.scala 549:166]
    node _dotProductRegs_4_T_8 = bits(multiplierReg2_4, 5, 4) @[elegant.scala 549:188]
    node _dotProductRegs_4_T_9 = mul(_dotProductRegs_4_T_7, _dotProductRegs_4_T_8) @[elegant.scala 549:172]
    node _dotProductRegs_4_T_10 = dshl(_dotProductRegs_4_T_9, UInt<4>("h8")) @[elegant.scala 549:195]
    reg dotProductRegs_4_REG : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_4_REG) @[elegant.scala 549:151]
    reg dotProductRegs_4_REG_1 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_4_REG_1) @[elegant.scala 549:143]
    reg dotProductRegs_4_REG_2 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_4_REG_2) @[elegant.scala 549:135]
    reg dotProductRegs_4_REG_3 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_4_REG_3) @[elegant.scala 549:127]
    reg dotProductRegs_4_REG_4 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_4_REG_4) @[elegant.scala 549:119]
    reg dotProductRegs_4_REG_5 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_4_REG_5) @[elegant.scala 549:111]
    reg dotProductRegs_4_REG_6 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_4_REG_6) @[elegant.scala 549:103]
    reg dotProductRegs_4_REG_7 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_4_REG_7) @[elegant.scala 549:95]
    node _dotProductRegs_4_T_11 = add(_dotProductRegs_4_T_6, dotProductRegs_4_REG_7) @[elegant.scala 549:85]
    node _signs_4_T = xor(signReg_4, io_in_b_sign_4) @[elegant.scala 552:27]
    node _two_complement_4_T = eq(signs_4, UInt<1>("h1")) @[elegant.scala 553:40]
    node _two_complement_4_T_1 = cat(UInt<1>("h0"), dotProductRegs_4) @[elegant.scala 553:55]
    node _two_complement_4_T_2 = not(_two_complement_4_T_1) @[elegant.scala 553:49]
    node _two_complement_4_T_3 = add(_two_complement_4_T_2, UInt<1>("h1")) @[elegant.scala 553:77]
    node _two_complement_4_T_4 = tail(_two_complement_4_T_3, 1) @[elegant.scala 553:77]
    node _two_complement_4_T_5 = cat(UInt<1>("h0"), dotProductRegs_4) @[elegant.scala 553:90]
    node _two_complement_4_T_6 = mux(_two_complement_4_T, _two_complement_4_T_4, _two_complement_4_T_5) @[elegant.scala 553:31]
    node _two_complement_buffer_4_T = asSInt(two_complement_4) @[elegant.scala 554:53]
    reg multiplierReg_5 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_5) @[elegant.scala 524:34]
    reg multiplierReg2_5 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg2_5) @[elegant.scala 525:35]
    reg signReg_5 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_5) @[elegant.scala 527:28]
    reg pp1_5 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp1_5) @[elegant.scala 528:24]
    reg pp2_5 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp2_5) @[elegant.scala 529:24]
    reg pp3_5 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp3_5) @[elegant.scala 530:24]
    reg pp4_5 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp4_5) @[elegant.scala 531:24]
    reg pp5_5 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp5_5) @[elegant.scala 532:24]
    reg pp6_5 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp6_5) @[elegant.scala 533:24]
    reg pp7_5 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp7_5) @[elegant.scala 534:24]
    reg pp8_5 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp8_5) @[elegant.scala 535:24]
    reg pp9_5 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp9_5) @[elegant.scala 536:24]
    node _pp1_T_15 = bits(multiplierReg_5, 1, 0) @[elegant.scala 541:31]
    node _pp1_T_16 = bits(multiplierReg2_5, 1, 0) @[elegant.scala 541:53]
    node _pp1_T_17 = mul(_pp1_T_15, _pp1_T_16) @[elegant.scala 541:37]
    node _pp2_T_20 = bits(multiplierReg_5, 1, 0) @[elegant.scala 542:40]
    node _pp2_T_21 = bits(multiplierReg2_5, 3, 2) @[elegant.scala 542:62]
    node _pp2_T_22 = mul(_pp2_T_20, _pp2_T_21) @[elegant.scala 542:46]
    node _pp2_T_23 = dshl(_pp2_T_22, UInt<2>("h2")) @[elegant.scala 542:69]
    reg pp2_REG_5 : UInt<7>, clock with :
      reset => (UInt<1>("h0"), pp2_REG_5) @[elegant.scala 542:25]
    node _pp3_T_20 = bits(multiplierReg_5, 1, 0) @[elegant.scala 543:48]
    node _pp3_T_21 = bits(multiplierReg2_5, 5, 4) @[elegant.scala 543:70]
    node _pp3_T_22 = mul(_pp3_T_20, _pp3_T_21) @[elegant.scala 543:54]
    node _pp3_T_23 = dshl(_pp3_T_22, UInt<3>("h4")) @[elegant.scala 543:77]
    reg pp3_REG_10 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp3_REG_10) @[elegant.scala 543:33]
    reg pp3_REG_11 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp3_REG_11) @[elegant.scala 543:25]
    node _pp4_T_20 = bits(multiplierReg_5, 3, 2) @[elegant.scala 544:56]
    node _pp4_T_21 = bits(multiplierReg2_5, 1, 0) @[elegant.scala 544:78]
    node _pp4_T_22 = mul(_pp4_T_20, _pp4_T_21) @[elegant.scala 544:62]
    node _pp4_T_23 = dshl(_pp4_T_22, UInt<2>("h2")) @[elegant.scala 544:85]
    reg pp4_REG_15 : UInt<7>, clock with :
      reset => (UInt<1>("h0"), pp4_REG_15) @[elegant.scala 544:41]
    reg pp4_REG_16 : UInt<7>, clock with :
      reset => (UInt<1>("h0"), pp4_REG_16) @[elegant.scala 544:33]
    reg pp4_REG_17 : UInt<7>, clock with :
      reset => (UInt<1>("h0"), pp4_REG_17) @[elegant.scala 544:25]
    node _pp5_T_20 = bits(multiplierReg_5, 3, 2) @[elegant.scala 545:64]
    node _pp5_T_21 = bits(multiplierReg2_5, 3, 2) @[elegant.scala 545:86]
    node _pp5_T_22 = mul(_pp5_T_20, _pp5_T_21) @[elegant.scala 545:70]
    node _pp5_T_23 = dshl(_pp5_T_22, UInt<3>("h4")) @[elegant.scala 545:93]
    reg pp5_REG_20 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp5_REG_20) @[elegant.scala 545:49]
    reg pp5_REG_21 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp5_REG_21) @[elegant.scala 545:41]
    reg pp5_REG_22 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp5_REG_22) @[elegant.scala 545:33]
    reg pp5_REG_23 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp5_REG_23) @[elegant.scala 545:25]
    node _pp6_T_20 = bits(multiplierReg_5, 3, 2) @[elegant.scala 546:72]
    node _pp6_T_21 = bits(multiplierReg2_5, 5, 4) @[elegant.scala 546:94]
    node _pp6_T_22 = mul(_pp6_T_20, _pp6_T_21) @[elegant.scala 546:78]
    node _pp6_T_23 = dshl(_pp6_T_22, UInt<3>("h6")) @[elegant.scala 546:101]
    reg pp6_REG_25 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp6_REG_25) @[elegant.scala 546:57]
    reg pp6_REG_26 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp6_REG_26) @[elegant.scala 546:49]
    reg pp6_REG_27 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp6_REG_27) @[elegant.scala 546:41]
    reg pp6_REG_28 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp6_REG_28) @[elegant.scala 546:33]
    reg pp6_REG_29 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp6_REG_29) @[elegant.scala 546:25]
    node _pp7_T_20 = bits(multiplierReg_5, 5, 4) @[elegant.scala 547:80]
    node _pp7_T_21 = bits(multiplierReg2_5, 1, 0) @[elegant.scala 547:102]
    node _pp7_T_22 = mul(_pp7_T_20, _pp7_T_21) @[elegant.scala 547:86]
    node _pp7_T_23 = dshl(_pp7_T_22, UInt<3>("h4")) @[elegant.scala 547:109]
    reg pp7_REG_30 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_30) @[elegant.scala 547:65]
    reg pp7_REG_31 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_31) @[elegant.scala 547:57]
    reg pp7_REG_32 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_32) @[elegant.scala 547:49]
    reg pp7_REG_33 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_33) @[elegant.scala 547:41]
    reg pp7_REG_34 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_34) @[elegant.scala 547:33]
    reg pp7_REG_35 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_35) @[elegant.scala 547:25]
    node _pp8_T_20 = bits(multiplierReg_5, 5, 4) @[elegant.scala 548:88]
    node _pp8_T_21 = bits(multiplierReg2_5, 3, 2) @[elegant.scala 548:110]
    node _pp8_T_22 = mul(_pp8_T_20, _pp8_T_21) @[elegant.scala 548:94]
    node _pp8_T_23 = dshl(_pp8_T_22, UInt<3>("h6")) @[elegant.scala 548:117]
    reg pp8_REG_35 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_35) @[elegant.scala 548:73]
    reg pp8_REG_36 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_36) @[elegant.scala 548:65]
    reg pp8_REG_37 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_37) @[elegant.scala 548:57]
    reg pp8_REG_38 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_38) @[elegant.scala 548:49]
    reg pp8_REG_39 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_39) @[elegant.scala 548:41]
    reg pp8_REG_40 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_40) @[elegant.scala 548:33]
    reg pp8_REG_41 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_41) @[elegant.scala 548:25]
    node _dotProductRegs_5_T = add(pp1_5, pp2_5) @[elegant.scala 549:36]
    node _dotProductRegs_5_T_1 = add(_dotProductRegs_5_T, pp3_5) @[elegant.scala 549:43]
    node _dotProductRegs_5_T_2 = add(_dotProductRegs_5_T_1, pp4_5) @[elegant.scala 549:50]
    node _dotProductRegs_5_T_3 = add(_dotProductRegs_5_T_2, pp5_5) @[elegant.scala 549:57]
    node _dotProductRegs_5_T_4 = add(_dotProductRegs_5_T_3, pp6_5) @[elegant.scala 549:64]
    node _dotProductRegs_5_T_5 = add(_dotProductRegs_5_T_4, pp7_5) @[elegant.scala 549:71]
    node _dotProductRegs_5_T_6 = add(_dotProductRegs_5_T_5, pp8_5) @[elegant.scala 549:78]
    node _dotProductRegs_5_T_7 = bits(multiplierReg_5, 5, 4) @[elegant.scala 549:166]
    node _dotProductRegs_5_T_8 = bits(multiplierReg2_5, 5, 4) @[elegant.scala 549:188]
    node _dotProductRegs_5_T_9 = mul(_dotProductRegs_5_T_7, _dotProductRegs_5_T_8) @[elegant.scala 549:172]
    node _dotProductRegs_5_T_10 = dshl(_dotProductRegs_5_T_9, UInt<4>("h8")) @[elegant.scala 549:195]
    reg dotProductRegs_5_REG : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_5_REG) @[elegant.scala 549:151]
    reg dotProductRegs_5_REG_1 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_5_REG_1) @[elegant.scala 549:143]
    reg dotProductRegs_5_REG_2 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_5_REG_2) @[elegant.scala 549:135]
    reg dotProductRegs_5_REG_3 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_5_REG_3) @[elegant.scala 549:127]
    reg dotProductRegs_5_REG_4 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_5_REG_4) @[elegant.scala 549:119]
    reg dotProductRegs_5_REG_5 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_5_REG_5) @[elegant.scala 549:111]
    reg dotProductRegs_5_REG_6 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_5_REG_6) @[elegant.scala 549:103]
    reg dotProductRegs_5_REG_7 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_5_REG_7) @[elegant.scala 549:95]
    node _dotProductRegs_5_T_11 = add(_dotProductRegs_5_T_6, dotProductRegs_5_REG_7) @[elegant.scala 549:85]
    node _signs_5_T = xor(signReg_5, io_in_b_sign_5) @[elegant.scala 552:27]
    node _two_complement_5_T = eq(signs_5, UInt<1>("h1")) @[elegant.scala 553:40]
    node _two_complement_5_T_1 = cat(UInt<1>("h0"), dotProductRegs_5) @[elegant.scala 553:55]
    node _two_complement_5_T_2 = not(_two_complement_5_T_1) @[elegant.scala 553:49]
    node _two_complement_5_T_3 = add(_two_complement_5_T_2, UInt<1>("h1")) @[elegant.scala 553:77]
    node _two_complement_5_T_4 = tail(_two_complement_5_T_3, 1) @[elegant.scala 553:77]
    node _two_complement_5_T_5 = cat(UInt<1>("h0"), dotProductRegs_5) @[elegant.scala 553:90]
    node _two_complement_5_T_6 = mux(_two_complement_5_T, _two_complement_5_T_4, _two_complement_5_T_5) @[elegant.scala 553:31]
    node _two_complement_buffer_5_T = asSInt(two_complement_5) @[elegant.scala 554:53]
    reg multiplierReg_6 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_6) @[elegant.scala 524:34]
    reg multiplierReg2_6 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg2_6) @[elegant.scala 525:35]
    reg signReg_6 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_6) @[elegant.scala 527:28]
    reg pp1_6 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp1_6) @[elegant.scala 528:24]
    reg pp2_6 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp2_6) @[elegant.scala 529:24]
    reg pp3_6 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp3_6) @[elegant.scala 530:24]
    reg pp4_6 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp4_6) @[elegant.scala 531:24]
    reg pp5_6 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp5_6) @[elegant.scala 532:24]
    reg pp6_6 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp6_6) @[elegant.scala 533:24]
    reg pp7_6 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp7_6) @[elegant.scala 534:24]
    reg pp8_6 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp8_6) @[elegant.scala 535:24]
    reg pp9_6 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp9_6) @[elegant.scala 536:24]
    node _pp1_T_18 = bits(multiplierReg_6, 1, 0) @[elegant.scala 541:31]
    node _pp1_T_19 = bits(multiplierReg2_6, 1, 0) @[elegant.scala 541:53]
    node _pp1_T_20 = mul(_pp1_T_18, _pp1_T_19) @[elegant.scala 541:37]
    node _pp2_T_24 = bits(multiplierReg_6, 1, 0) @[elegant.scala 542:40]
    node _pp2_T_25 = bits(multiplierReg2_6, 3, 2) @[elegant.scala 542:62]
    node _pp2_T_26 = mul(_pp2_T_24, _pp2_T_25) @[elegant.scala 542:46]
    node _pp2_T_27 = dshl(_pp2_T_26, UInt<2>("h2")) @[elegant.scala 542:69]
    reg pp2_REG_6 : UInt<7>, clock with :
      reset => (UInt<1>("h0"), pp2_REG_6) @[elegant.scala 542:25]
    node _pp3_T_24 = bits(multiplierReg_6, 1, 0) @[elegant.scala 543:48]
    node _pp3_T_25 = bits(multiplierReg2_6, 5, 4) @[elegant.scala 543:70]
    node _pp3_T_26 = mul(_pp3_T_24, _pp3_T_25) @[elegant.scala 543:54]
    node _pp3_T_27 = dshl(_pp3_T_26, UInt<3>("h4")) @[elegant.scala 543:77]
    reg pp3_REG_12 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp3_REG_12) @[elegant.scala 543:33]
    reg pp3_REG_13 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp3_REG_13) @[elegant.scala 543:25]
    node _pp4_T_24 = bits(multiplierReg_6, 3, 2) @[elegant.scala 544:56]
    node _pp4_T_25 = bits(multiplierReg2_6, 1, 0) @[elegant.scala 544:78]
    node _pp4_T_26 = mul(_pp4_T_24, _pp4_T_25) @[elegant.scala 544:62]
    node _pp4_T_27 = dshl(_pp4_T_26, UInt<2>("h2")) @[elegant.scala 544:85]
    reg pp4_REG_18 : UInt<7>, clock with :
      reset => (UInt<1>("h0"), pp4_REG_18) @[elegant.scala 544:41]
    reg pp4_REG_19 : UInt<7>, clock with :
      reset => (UInt<1>("h0"), pp4_REG_19) @[elegant.scala 544:33]
    reg pp4_REG_20 : UInt<7>, clock with :
      reset => (UInt<1>("h0"), pp4_REG_20) @[elegant.scala 544:25]
    node _pp5_T_24 = bits(multiplierReg_6, 3, 2) @[elegant.scala 545:64]
    node _pp5_T_25 = bits(multiplierReg2_6, 3, 2) @[elegant.scala 545:86]
    node _pp5_T_26 = mul(_pp5_T_24, _pp5_T_25) @[elegant.scala 545:70]
    node _pp5_T_27 = dshl(_pp5_T_26, UInt<3>("h4")) @[elegant.scala 545:93]
    reg pp5_REG_24 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp5_REG_24) @[elegant.scala 545:49]
    reg pp5_REG_25 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp5_REG_25) @[elegant.scala 545:41]
    reg pp5_REG_26 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp5_REG_26) @[elegant.scala 545:33]
    reg pp5_REG_27 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp5_REG_27) @[elegant.scala 545:25]
    node _pp6_T_24 = bits(multiplierReg_6, 3, 2) @[elegant.scala 546:72]
    node _pp6_T_25 = bits(multiplierReg2_6, 5, 4) @[elegant.scala 546:94]
    node _pp6_T_26 = mul(_pp6_T_24, _pp6_T_25) @[elegant.scala 546:78]
    node _pp6_T_27 = dshl(_pp6_T_26, UInt<3>("h6")) @[elegant.scala 546:101]
    reg pp6_REG_30 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp6_REG_30) @[elegant.scala 546:57]
    reg pp6_REG_31 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp6_REG_31) @[elegant.scala 546:49]
    reg pp6_REG_32 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp6_REG_32) @[elegant.scala 546:41]
    reg pp6_REG_33 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp6_REG_33) @[elegant.scala 546:33]
    reg pp6_REG_34 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp6_REG_34) @[elegant.scala 546:25]
    node _pp7_T_24 = bits(multiplierReg_6, 5, 4) @[elegant.scala 547:80]
    node _pp7_T_25 = bits(multiplierReg2_6, 1, 0) @[elegant.scala 547:102]
    node _pp7_T_26 = mul(_pp7_T_24, _pp7_T_25) @[elegant.scala 547:86]
    node _pp7_T_27 = dshl(_pp7_T_26, UInt<3>("h4")) @[elegant.scala 547:109]
    reg pp7_REG_36 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_36) @[elegant.scala 547:65]
    reg pp7_REG_37 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_37) @[elegant.scala 547:57]
    reg pp7_REG_38 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_38) @[elegant.scala 547:49]
    reg pp7_REG_39 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_39) @[elegant.scala 547:41]
    reg pp7_REG_40 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_40) @[elegant.scala 547:33]
    reg pp7_REG_41 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_41) @[elegant.scala 547:25]
    node _pp8_T_24 = bits(multiplierReg_6, 5, 4) @[elegant.scala 548:88]
    node _pp8_T_25 = bits(multiplierReg2_6, 3, 2) @[elegant.scala 548:110]
    node _pp8_T_26 = mul(_pp8_T_24, _pp8_T_25) @[elegant.scala 548:94]
    node _pp8_T_27 = dshl(_pp8_T_26, UInt<3>("h6")) @[elegant.scala 548:117]
    reg pp8_REG_42 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_42) @[elegant.scala 548:73]
    reg pp8_REG_43 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_43) @[elegant.scala 548:65]
    reg pp8_REG_44 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_44) @[elegant.scala 548:57]
    reg pp8_REG_45 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_45) @[elegant.scala 548:49]
    reg pp8_REG_46 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_46) @[elegant.scala 548:41]
    reg pp8_REG_47 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_47) @[elegant.scala 548:33]
    reg pp8_REG_48 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_48) @[elegant.scala 548:25]
    node _dotProductRegs_6_T = add(pp1_6, pp2_6) @[elegant.scala 549:36]
    node _dotProductRegs_6_T_1 = add(_dotProductRegs_6_T, pp3_6) @[elegant.scala 549:43]
    node _dotProductRegs_6_T_2 = add(_dotProductRegs_6_T_1, pp4_6) @[elegant.scala 549:50]
    node _dotProductRegs_6_T_3 = add(_dotProductRegs_6_T_2, pp5_6) @[elegant.scala 549:57]
    node _dotProductRegs_6_T_4 = add(_dotProductRegs_6_T_3, pp6_6) @[elegant.scala 549:64]
    node _dotProductRegs_6_T_5 = add(_dotProductRegs_6_T_4, pp7_6) @[elegant.scala 549:71]
    node _dotProductRegs_6_T_6 = add(_dotProductRegs_6_T_5, pp8_6) @[elegant.scala 549:78]
    node _dotProductRegs_6_T_7 = bits(multiplierReg_6, 5, 4) @[elegant.scala 549:166]
    node _dotProductRegs_6_T_8 = bits(multiplierReg2_6, 5, 4) @[elegant.scala 549:188]
    node _dotProductRegs_6_T_9 = mul(_dotProductRegs_6_T_7, _dotProductRegs_6_T_8) @[elegant.scala 549:172]
    node _dotProductRegs_6_T_10 = dshl(_dotProductRegs_6_T_9, UInt<4>("h8")) @[elegant.scala 549:195]
    reg dotProductRegs_6_REG : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_6_REG) @[elegant.scala 549:151]
    reg dotProductRegs_6_REG_1 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_6_REG_1) @[elegant.scala 549:143]
    reg dotProductRegs_6_REG_2 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_6_REG_2) @[elegant.scala 549:135]
    reg dotProductRegs_6_REG_3 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_6_REG_3) @[elegant.scala 549:127]
    reg dotProductRegs_6_REG_4 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_6_REG_4) @[elegant.scala 549:119]
    reg dotProductRegs_6_REG_5 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_6_REG_5) @[elegant.scala 549:111]
    reg dotProductRegs_6_REG_6 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_6_REG_6) @[elegant.scala 549:103]
    reg dotProductRegs_6_REG_7 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_6_REG_7) @[elegant.scala 549:95]
    node _dotProductRegs_6_T_11 = add(_dotProductRegs_6_T_6, dotProductRegs_6_REG_7) @[elegant.scala 549:85]
    node _signs_6_T = xor(signReg_6, io_in_b_sign_6) @[elegant.scala 552:27]
    node _two_complement_6_T = eq(signs_6, UInt<1>("h1")) @[elegant.scala 553:40]
    node _two_complement_6_T_1 = cat(UInt<1>("h0"), dotProductRegs_6) @[elegant.scala 553:55]
    node _two_complement_6_T_2 = not(_two_complement_6_T_1) @[elegant.scala 553:49]
    node _two_complement_6_T_3 = add(_two_complement_6_T_2, UInt<1>("h1")) @[elegant.scala 553:77]
    node _two_complement_6_T_4 = tail(_two_complement_6_T_3, 1) @[elegant.scala 553:77]
    node _two_complement_6_T_5 = cat(UInt<1>("h0"), dotProductRegs_6) @[elegant.scala 553:90]
    node _two_complement_6_T_6 = mux(_two_complement_6_T, _two_complement_6_T_4, _two_complement_6_T_5) @[elegant.scala 553:31]
    node _two_complement_buffer_6_T = asSInt(two_complement_6) @[elegant.scala 554:53]
    reg multiplierReg_7 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_7) @[elegant.scala 524:34]
    reg multiplierReg2_7 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg2_7) @[elegant.scala 525:35]
    reg signReg_7 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_7) @[elegant.scala 527:28]
    reg pp1_7 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp1_7) @[elegant.scala 528:24]
    reg pp2_7 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp2_7) @[elegant.scala 529:24]
    reg pp3_7 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp3_7) @[elegant.scala 530:24]
    reg pp4_7 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp4_7) @[elegant.scala 531:24]
    reg pp5_7 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp5_7) @[elegant.scala 532:24]
    reg pp6_7 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp6_7) @[elegant.scala 533:24]
    reg pp7_7 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp7_7) @[elegant.scala 534:24]
    reg pp8_7 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp8_7) @[elegant.scala 535:24]
    reg pp9_7 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp9_7) @[elegant.scala 536:24]
    node _pp1_T_21 = bits(multiplierReg_7, 1, 0) @[elegant.scala 541:31]
    node _pp1_T_22 = bits(multiplierReg2_7, 1, 0) @[elegant.scala 541:53]
    node _pp1_T_23 = mul(_pp1_T_21, _pp1_T_22) @[elegant.scala 541:37]
    node _pp2_T_28 = bits(multiplierReg_7, 1, 0) @[elegant.scala 542:40]
    node _pp2_T_29 = bits(multiplierReg2_7, 3, 2) @[elegant.scala 542:62]
    node _pp2_T_30 = mul(_pp2_T_28, _pp2_T_29) @[elegant.scala 542:46]
    node _pp2_T_31 = dshl(_pp2_T_30, UInt<2>("h2")) @[elegant.scala 542:69]
    reg pp2_REG_7 : UInt<7>, clock with :
      reset => (UInt<1>("h0"), pp2_REG_7) @[elegant.scala 542:25]
    node _pp3_T_28 = bits(multiplierReg_7, 1, 0) @[elegant.scala 543:48]
    node _pp3_T_29 = bits(multiplierReg2_7, 5, 4) @[elegant.scala 543:70]
    node _pp3_T_30 = mul(_pp3_T_28, _pp3_T_29) @[elegant.scala 543:54]
    node _pp3_T_31 = dshl(_pp3_T_30, UInt<3>("h4")) @[elegant.scala 543:77]
    reg pp3_REG_14 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp3_REG_14) @[elegant.scala 543:33]
    reg pp3_REG_15 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp3_REG_15) @[elegant.scala 543:25]
    node _pp4_T_28 = bits(multiplierReg_7, 3, 2) @[elegant.scala 544:56]
    node _pp4_T_29 = bits(multiplierReg2_7, 1, 0) @[elegant.scala 544:78]
    node _pp4_T_30 = mul(_pp4_T_28, _pp4_T_29) @[elegant.scala 544:62]
    node _pp4_T_31 = dshl(_pp4_T_30, UInt<2>("h2")) @[elegant.scala 544:85]
    reg pp4_REG_21 : UInt<7>, clock with :
      reset => (UInt<1>("h0"), pp4_REG_21) @[elegant.scala 544:41]
    reg pp4_REG_22 : UInt<7>, clock with :
      reset => (UInt<1>("h0"), pp4_REG_22) @[elegant.scala 544:33]
    reg pp4_REG_23 : UInt<7>, clock with :
      reset => (UInt<1>("h0"), pp4_REG_23) @[elegant.scala 544:25]
    node _pp5_T_28 = bits(multiplierReg_7, 3, 2) @[elegant.scala 545:64]
    node _pp5_T_29 = bits(multiplierReg2_7, 3, 2) @[elegant.scala 545:86]
    node _pp5_T_30 = mul(_pp5_T_28, _pp5_T_29) @[elegant.scala 545:70]
    node _pp5_T_31 = dshl(_pp5_T_30, UInt<3>("h4")) @[elegant.scala 545:93]
    reg pp5_REG_28 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp5_REG_28) @[elegant.scala 545:49]
    reg pp5_REG_29 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp5_REG_29) @[elegant.scala 545:41]
    reg pp5_REG_30 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp5_REG_30) @[elegant.scala 545:33]
    reg pp5_REG_31 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp5_REG_31) @[elegant.scala 545:25]
    node _pp6_T_28 = bits(multiplierReg_7, 3, 2) @[elegant.scala 546:72]
    node _pp6_T_29 = bits(multiplierReg2_7, 5, 4) @[elegant.scala 546:94]
    node _pp6_T_30 = mul(_pp6_T_28, _pp6_T_29) @[elegant.scala 546:78]
    node _pp6_T_31 = dshl(_pp6_T_30, UInt<3>("h6")) @[elegant.scala 546:101]
    reg pp6_REG_35 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp6_REG_35) @[elegant.scala 546:57]
    reg pp6_REG_36 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp6_REG_36) @[elegant.scala 546:49]
    reg pp6_REG_37 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp6_REG_37) @[elegant.scala 546:41]
    reg pp6_REG_38 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp6_REG_38) @[elegant.scala 546:33]
    reg pp6_REG_39 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp6_REG_39) @[elegant.scala 546:25]
    node _pp7_T_28 = bits(multiplierReg_7, 5, 4) @[elegant.scala 547:80]
    node _pp7_T_29 = bits(multiplierReg2_7, 1, 0) @[elegant.scala 547:102]
    node _pp7_T_30 = mul(_pp7_T_28, _pp7_T_29) @[elegant.scala 547:86]
    node _pp7_T_31 = dshl(_pp7_T_30, UInt<3>("h4")) @[elegant.scala 547:109]
    reg pp7_REG_42 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_42) @[elegant.scala 547:65]
    reg pp7_REG_43 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_43) @[elegant.scala 547:57]
    reg pp7_REG_44 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_44) @[elegant.scala 547:49]
    reg pp7_REG_45 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_45) @[elegant.scala 547:41]
    reg pp7_REG_46 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_46) @[elegant.scala 547:33]
    reg pp7_REG_47 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_47) @[elegant.scala 547:25]
    node _pp8_T_28 = bits(multiplierReg_7, 5, 4) @[elegant.scala 548:88]
    node _pp8_T_29 = bits(multiplierReg2_7, 3, 2) @[elegant.scala 548:110]
    node _pp8_T_30 = mul(_pp8_T_28, _pp8_T_29) @[elegant.scala 548:94]
    node _pp8_T_31 = dshl(_pp8_T_30, UInt<3>("h6")) @[elegant.scala 548:117]
    reg pp8_REG_49 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_49) @[elegant.scala 548:73]
    reg pp8_REG_50 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_50) @[elegant.scala 548:65]
    reg pp8_REG_51 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_51) @[elegant.scala 548:57]
    reg pp8_REG_52 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_52) @[elegant.scala 548:49]
    reg pp8_REG_53 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_53) @[elegant.scala 548:41]
    reg pp8_REG_54 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_54) @[elegant.scala 548:33]
    reg pp8_REG_55 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_55) @[elegant.scala 548:25]
    node _dotProductRegs_7_T = add(pp1_7, pp2_7) @[elegant.scala 549:36]
    node _dotProductRegs_7_T_1 = add(_dotProductRegs_7_T, pp3_7) @[elegant.scala 549:43]
    node _dotProductRegs_7_T_2 = add(_dotProductRegs_7_T_1, pp4_7) @[elegant.scala 549:50]
    node _dotProductRegs_7_T_3 = add(_dotProductRegs_7_T_2, pp5_7) @[elegant.scala 549:57]
    node _dotProductRegs_7_T_4 = add(_dotProductRegs_7_T_3, pp6_7) @[elegant.scala 549:64]
    node _dotProductRegs_7_T_5 = add(_dotProductRegs_7_T_4, pp7_7) @[elegant.scala 549:71]
    node _dotProductRegs_7_T_6 = add(_dotProductRegs_7_T_5, pp8_7) @[elegant.scala 549:78]
    node _dotProductRegs_7_T_7 = bits(multiplierReg_7, 5, 4) @[elegant.scala 549:166]
    node _dotProductRegs_7_T_8 = bits(multiplierReg2_7, 5, 4) @[elegant.scala 549:188]
    node _dotProductRegs_7_T_9 = mul(_dotProductRegs_7_T_7, _dotProductRegs_7_T_8) @[elegant.scala 549:172]
    node _dotProductRegs_7_T_10 = dshl(_dotProductRegs_7_T_9, UInt<4>("h8")) @[elegant.scala 549:195]
    reg dotProductRegs_7_REG : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_7_REG) @[elegant.scala 549:151]
    reg dotProductRegs_7_REG_1 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_7_REG_1) @[elegant.scala 549:143]
    reg dotProductRegs_7_REG_2 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_7_REG_2) @[elegant.scala 549:135]
    reg dotProductRegs_7_REG_3 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_7_REG_3) @[elegant.scala 549:127]
    reg dotProductRegs_7_REG_4 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_7_REG_4) @[elegant.scala 549:119]
    reg dotProductRegs_7_REG_5 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_7_REG_5) @[elegant.scala 549:111]
    reg dotProductRegs_7_REG_6 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_7_REG_6) @[elegant.scala 549:103]
    reg dotProductRegs_7_REG_7 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_7_REG_7) @[elegant.scala 549:95]
    node _dotProductRegs_7_T_11 = add(_dotProductRegs_7_T_6, dotProductRegs_7_REG_7) @[elegant.scala 549:85]
    node _signs_7_T = xor(signReg_7, io_in_b_sign_7) @[elegant.scala 552:27]
    node _two_complement_7_T = eq(signs_7, UInt<1>("h1")) @[elegant.scala 553:40]
    node _two_complement_7_T_1 = cat(UInt<1>("h0"), dotProductRegs_7) @[elegant.scala 553:55]
    node _two_complement_7_T_2 = not(_two_complement_7_T_1) @[elegant.scala 553:49]
    node _two_complement_7_T_3 = add(_two_complement_7_T_2, UInt<1>("h1")) @[elegant.scala 553:77]
    node _two_complement_7_T_4 = tail(_two_complement_7_T_3, 1) @[elegant.scala 553:77]
    node _two_complement_7_T_5 = cat(UInt<1>("h0"), dotProductRegs_7) @[elegant.scala 553:90]
    node _two_complement_7_T_6 = mux(_two_complement_7_T, _two_complement_7_T_4, _two_complement_7_T_5) @[elegant.scala 553:31]
    node _two_complement_buffer_7_T = asSInt(two_complement_7) @[elegant.scala 554:53]
    reg multiplierReg_8 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_8) @[elegant.scala 524:34]
    reg multiplierReg2_8 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg2_8) @[elegant.scala 525:35]
    reg signReg_8 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_8) @[elegant.scala 527:28]
    reg pp1_8 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp1_8) @[elegant.scala 528:24]
    reg pp2_8 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp2_8) @[elegant.scala 529:24]
    reg pp3_8 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp3_8) @[elegant.scala 530:24]
    reg pp4_8 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp4_8) @[elegant.scala 531:24]
    reg pp5_8 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp5_8) @[elegant.scala 532:24]
    reg pp6_8 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp6_8) @[elegant.scala 533:24]
    reg pp7_8 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp7_8) @[elegant.scala 534:24]
    reg pp8_8 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp8_8) @[elegant.scala 535:24]
    reg pp9_8 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp9_8) @[elegant.scala 536:24]
    node _pp1_T_24 = bits(multiplierReg_8, 1, 0) @[elegant.scala 541:31]
    node _pp1_T_25 = bits(multiplierReg2_8, 1, 0) @[elegant.scala 541:53]
    node _pp1_T_26 = mul(_pp1_T_24, _pp1_T_25) @[elegant.scala 541:37]
    node _pp2_T_32 = bits(multiplierReg_8, 1, 0) @[elegant.scala 542:40]
    node _pp2_T_33 = bits(multiplierReg2_8, 3, 2) @[elegant.scala 542:62]
    node _pp2_T_34 = mul(_pp2_T_32, _pp2_T_33) @[elegant.scala 542:46]
    node _pp2_T_35 = dshl(_pp2_T_34, UInt<2>("h2")) @[elegant.scala 542:69]
    reg pp2_REG_8 : UInt<7>, clock with :
      reset => (UInt<1>("h0"), pp2_REG_8) @[elegant.scala 542:25]
    node _pp3_T_32 = bits(multiplierReg_8, 1, 0) @[elegant.scala 543:48]
    node _pp3_T_33 = bits(multiplierReg2_8, 5, 4) @[elegant.scala 543:70]
    node _pp3_T_34 = mul(_pp3_T_32, _pp3_T_33) @[elegant.scala 543:54]
    node _pp3_T_35 = dshl(_pp3_T_34, UInt<3>("h4")) @[elegant.scala 543:77]
    reg pp3_REG_16 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp3_REG_16) @[elegant.scala 543:33]
    reg pp3_REG_17 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp3_REG_17) @[elegant.scala 543:25]
    node _pp4_T_32 = bits(multiplierReg_8, 3, 2) @[elegant.scala 544:56]
    node _pp4_T_33 = bits(multiplierReg2_8, 1, 0) @[elegant.scala 544:78]
    node _pp4_T_34 = mul(_pp4_T_32, _pp4_T_33) @[elegant.scala 544:62]
    node _pp4_T_35 = dshl(_pp4_T_34, UInt<2>("h2")) @[elegant.scala 544:85]
    reg pp4_REG_24 : UInt<7>, clock with :
      reset => (UInt<1>("h0"), pp4_REG_24) @[elegant.scala 544:41]
    reg pp4_REG_25 : UInt<7>, clock with :
      reset => (UInt<1>("h0"), pp4_REG_25) @[elegant.scala 544:33]
    reg pp4_REG_26 : UInt<7>, clock with :
      reset => (UInt<1>("h0"), pp4_REG_26) @[elegant.scala 544:25]
    node _pp5_T_32 = bits(multiplierReg_8, 3, 2) @[elegant.scala 545:64]
    node _pp5_T_33 = bits(multiplierReg2_8, 3, 2) @[elegant.scala 545:86]
    node _pp5_T_34 = mul(_pp5_T_32, _pp5_T_33) @[elegant.scala 545:70]
    node _pp5_T_35 = dshl(_pp5_T_34, UInt<3>("h4")) @[elegant.scala 545:93]
    reg pp5_REG_32 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp5_REG_32) @[elegant.scala 545:49]
    reg pp5_REG_33 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp5_REG_33) @[elegant.scala 545:41]
    reg pp5_REG_34 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp5_REG_34) @[elegant.scala 545:33]
    reg pp5_REG_35 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp5_REG_35) @[elegant.scala 545:25]
    node _pp6_T_32 = bits(multiplierReg_8, 3, 2) @[elegant.scala 546:72]
    node _pp6_T_33 = bits(multiplierReg2_8, 5, 4) @[elegant.scala 546:94]
    node _pp6_T_34 = mul(_pp6_T_32, _pp6_T_33) @[elegant.scala 546:78]
    node _pp6_T_35 = dshl(_pp6_T_34, UInt<3>("h6")) @[elegant.scala 546:101]
    reg pp6_REG_40 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp6_REG_40) @[elegant.scala 546:57]
    reg pp6_REG_41 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp6_REG_41) @[elegant.scala 546:49]
    reg pp6_REG_42 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp6_REG_42) @[elegant.scala 546:41]
    reg pp6_REG_43 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp6_REG_43) @[elegant.scala 546:33]
    reg pp6_REG_44 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp6_REG_44) @[elegant.scala 546:25]
    node _pp7_T_32 = bits(multiplierReg_8, 5, 4) @[elegant.scala 547:80]
    node _pp7_T_33 = bits(multiplierReg2_8, 1, 0) @[elegant.scala 547:102]
    node _pp7_T_34 = mul(_pp7_T_32, _pp7_T_33) @[elegant.scala 547:86]
    node _pp7_T_35 = dshl(_pp7_T_34, UInt<3>("h4")) @[elegant.scala 547:109]
    reg pp7_REG_48 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_48) @[elegant.scala 547:65]
    reg pp7_REG_49 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_49) @[elegant.scala 547:57]
    reg pp7_REG_50 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_50) @[elegant.scala 547:49]
    reg pp7_REG_51 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_51) @[elegant.scala 547:41]
    reg pp7_REG_52 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_52) @[elegant.scala 547:33]
    reg pp7_REG_53 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_53) @[elegant.scala 547:25]
    node _pp8_T_32 = bits(multiplierReg_8, 5, 4) @[elegant.scala 548:88]
    node _pp8_T_33 = bits(multiplierReg2_8, 3, 2) @[elegant.scala 548:110]
    node _pp8_T_34 = mul(_pp8_T_32, _pp8_T_33) @[elegant.scala 548:94]
    node _pp8_T_35 = dshl(_pp8_T_34, UInt<3>("h6")) @[elegant.scala 548:117]
    reg pp8_REG_56 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_56) @[elegant.scala 548:73]
    reg pp8_REG_57 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_57) @[elegant.scala 548:65]
    reg pp8_REG_58 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_58) @[elegant.scala 548:57]
    reg pp8_REG_59 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_59) @[elegant.scala 548:49]
    reg pp8_REG_60 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_60) @[elegant.scala 548:41]
    reg pp8_REG_61 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_61) @[elegant.scala 548:33]
    reg pp8_REG_62 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_62) @[elegant.scala 548:25]
    node _dotProductRegs_8_T = add(pp1_8, pp2_8) @[elegant.scala 549:36]
    node _dotProductRegs_8_T_1 = add(_dotProductRegs_8_T, pp3_8) @[elegant.scala 549:43]
    node _dotProductRegs_8_T_2 = add(_dotProductRegs_8_T_1, pp4_8) @[elegant.scala 549:50]
    node _dotProductRegs_8_T_3 = add(_dotProductRegs_8_T_2, pp5_8) @[elegant.scala 549:57]
    node _dotProductRegs_8_T_4 = add(_dotProductRegs_8_T_3, pp6_8) @[elegant.scala 549:64]
    node _dotProductRegs_8_T_5 = add(_dotProductRegs_8_T_4, pp7_8) @[elegant.scala 549:71]
    node _dotProductRegs_8_T_6 = add(_dotProductRegs_8_T_5, pp8_8) @[elegant.scala 549:78]
    node _dotProductRegs_8_T_7 = bits(multiplierReg_8, 5, 4) @[elegant.scala 549:166]
    node _dotProductRegs_8_T_8 = bits(multiplierReg2_8, 5, 4) @[elegant.scala 549:188]
    node _dotProductRegs_8_T_9 = mul(_dotProductRegs_8_T_7, _dotProductRegs_8_T_8) @[elegant.scala 549:172]
    node _dotProductRegs_8_T_10 = dshl(_dotProductRegs_8_T_9, UInt<4>("h8")) @[elegant.scala 549:195]
    reg dotProductRegs_8_REG : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_8_REG) @[elegant.scala 549:151]
    reg dotProductRegs_8_REG_1 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_8_REG_1) @[elegant.scala 549:143]
    reg dotProductRegs_8_REG_2 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_8_REG_2) @[elegant.scala 549:135]
    reg dotProductRegs_8_REG_3 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_8_REG_3) @[elegant.scala 549:127]
    reg dotProductRegs_8_REG_4 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_8_REG_4) @[elegant.scala 549:119]
    reg dotProductRegs_8_REG_5 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_8_REG_5) @[elegant.scala 549:111]
    reg dotProductRegs_8_REG_6 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_8_REG_6) @[elegant.scala 549:103]
    reg dotProductRegs_8_REG_7 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_8_REG_7) @[elegant.scala 549:95]
    node _dotProductRegs_8_T_11 = add(_dotProductRegs_8_T_6, dotProductRegs_8_REG_7) @[elegant.scala 549:85]
    node _signs_8_T = xor(signReg_8, io_in_b_sign_8) @[elegant.scala 552:27]
    node _two_complement_8_T = eq(signs_8, UInt<1>("h1")) @[elegant.scala 553:40]
    node _two_complement_8_T_1 = cat(UInt<1>("h0"), dotProductRegs_8) @[elegant.scala 553:55]
    node _two_complement_8_T_2 = not(_two_complement_8_T_1) @[elegant.scala 553:49]
    node _two_complement_8_T_3 = add(_two_complement_8_T_2, UInt<1>("h1")) @[elegant.scala 553:77]
    node _two_complement_8_T_4 = tail(_two_complement_8_T_3, 1) @[elegant.scala 553:77]
    node _two_complement_8_T_5 = cat(UInt<1>("h0"), dotProductRegs_8) @[elegant.scala 553:90]
    node _two_complement_8_T_6 = mux(_two_complement_8_T, _two_complement_8_T_4, _two_complement_8_T_5) @[elegant.scala 553:31]
    node _two_complement_buffer_8_T = asSInt(two_complement_8) @[elegant.scala 554:53]
    reg multiplierReg_9 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_9) @[elegant.scala 524:34]
    reg multiplierReg2_9 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg2_9) @[elegant.scala 525:35]
    reg signReg_9 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_9) @[elegant.scala 527:28]
    reg pp1_9 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp1_9) @[elegant.scala 528:24]
    reg pp2_9 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp2_9) @[elegant.scala 529:24]
    reg pp3_9 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp3_9) @[elegant.scala 530:24]
    reg pp4_9 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp4_9) @[elegant.scala 531:24]
    reg pp5_9 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp5_9) @[elegant.scala 532:24]
    reg pp6_9 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp6_9) @[elegant.scala 533:24]
    reg pp7_9 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp7_9) @[elegant.scala 534:24]
    reg pp8_9 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp8_9) @[elegant.scala 535:24]
    reg pp9_9 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp9_9) @[elegant.scala 536:24]
    node _pp1_T_27 = bits(multiplierReg_9, 1, 0) @[elegant.scala 541:31]
    node _pp1_T_28 = bits(multiplierReg2_9, 1, 0) @[elegant.scala 541:53]
    node _pp1_T_29 = mul(_pp1_T_27, _pp1_T_28) @[elegant.scala 541:37]
    node _pp2_T_36 = bits(multiplierReg_9, 1, 0) @[elegant.scala 542:40]
    node _pp2_T_37 = bits(multiplierReg2_9, 3, 2) @[elegant.scala 542:62]
    node _pp2_T_38 = mul(_pp2_T_36, _pp2_T_37) @[elegant.scala 542:46]
    node _pp2_T_39 = dshl(_pp2_T_38, UInt<2>("h2")) @[elegant.scala 542:69]
    reg pp2_REG_9 : UInt<7>, clock with :
      reset => (UInt<1>("h0"), pp2_REG_9) @[elegant.scala 542:25]
    node _pp3_T_36 = bits(multiplierReg_9, 1, 0) @[elegant.scala 543:48]
    node _pp3_T_37 = bits(multiplierReg2_9, 5, 4) @[elegant.scala 543:70]
    node _pp3_T_38 = mul(_pp3_T_36, _pp3_T_37) @[elegant.scala 543:54]
    node _pp3_T_39 = dshl(_pp3_T_38, UInt<3>("h4")) @[elegant.scala 543:77]
    reg pp3_REG_18 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp3_REG_18) @[elegant.scala 543:33]
    reg pp3_REG_19 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp3_REG_19) @[elegant.scala 543:25]
    node _pp4_T_36 = bits(multiplierReg_9, 3, 2) @[elegant.scala 544:56]
    node _pp4_T_37 = bits(multiplierReg2_9, 1, 0) @[elegant.scala 544:78]
    node _pp4_T_38 = mul(_pp4_T_36, _pp4_T_37) @[elegant.scala 544:62]
    node _pp4_T_39 = dshl(_pp4_T_38, UInt<2>("h2")) @[elegant.scala 544:85]
    reg pp4_REG_27 : UInt<7>, clock with :
      reset => (UInt<1>("h0"), pp4_REG_27) @[elegant.scala 544:41]
    reg pp4_REG_28 : UInt<7>, clock with :
      reset => (UInt<1>("h0"), pp4_REG_28) @[elegant.scala 544:33]
    reg pp4_REG_29 : UInt<7>, clock with :
      reset => (UInt<1>("h0"), pp4_REG_29) @[elegant.scala 544:25]
    node _pp5_T_36 = bits(multiplierReg_9, 3, 2) @[elegant.scala 545:64]
    node _pp5_T_37 = bits(multiplierReg2_9, 3, 2) @[elegant.scala 545:86]
    node _pp5_T_38 = mul(_pp5_T_36, _pp5_T_37) @[elegant.scala 545:70]
    node _pp5_T_39 = dshl(_pp5_T_38, UInt<3>("h4")) @[elegant.scala 545:93]
    reg pp5_REG_36 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp5_REG_36) @[elegant.scala 545:49]
    reg pp5_REG_37 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp5_REG_37) @[elegant.scala 545:41]
    reg pp5_REG_38 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp5_REG_38) @[elegant.scala 545:33]
    reg pp5_REG_39 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp5_REG_39) @[elegant.scala 545:25]
    node _pp6_T_36 = bits(multiplierReg_9, 3, 2) @[elegant.scala 546:72]
    node _pp6_T_37 = bits(multiplierReg2_9, 5, 4) @[elegant.scala 546:94]
    node _pp6_T_38 = mul(_pp6_T_36, _pp6_T_37) @[elegant.scala 546:78]
    node _pp6_T_39 = dshl(_pp6_T_38, UInt<3>("h6")) @[elegant.scala 546:101]
    reg pp6_REG_45 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp6_REG_45) @[elegant.scala 546:57]
    reg pp6_REG_46 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp6_REG_46) @[elegant.scala 546:49]
    reg pp6_REG_47 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp6_REG_47) @[elegant.scala 546:41]
    reg pp6_REG_48 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp6_REG_48) @[elegant.scala 546:33]
    reg pp6_REG_49 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp6_REG_49) @[elegant.scala 546:25]
    node _pp7_T_36 = bits(multiplierReg_9, 5, 4) @[elegant.scala 547:80]
    node _pp7_T_37 = bits(multiplierReg2_9, 1, 0) @[elegant.scala 547:102]
    node _pp7_T_38 = mul(_pp7_T_36, _pp7_T_37) @[elegant.scala 547:86]
    node _pp7_T_39 = dshl(_pp7_T_38, UInt<3>("h4")) @[elegant.scala 547:109]
    reg pp7_REG_54 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_54) @[elegant.scala 547:65]
    reg pp7_REG_55 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_55) @[elegant.scala 547:57]
    reg pp7_REG_56 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_56) @[elegant.scala 547:49]
    reg pp7_REG_57 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_57) @[elegant.scala 547:41]
    reg pp7_REG_58 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_58) @[elegant.scala 547:33]
    reg pp7_REG_59 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_59) @[elegant.scala 547:25]
    node _pp8_T_36 = bits(multiplierReg_9, 5, 4) @[elegant.scala 548:88]
    node _pp8_T_37 = bits(multiplierReg2_9, 3, 2) @[elegant.scala 548:110]
    node _pp8_T_38 = mul(_pp8_T_36, _pp8_T_37) @[elegant.scala 548:94]
    node _pp8_T_39 = dshl(_pp8_T_38, UInt<3>("h6")) @[elegant.scala 548:117]
    reg pp8_REG_63 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_63) @[elegant.scala 548:73]
    reg pp8_REG_64 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_64) @[elegant.scala 548:65]
    reg pp8_REG_65 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_65) @[elegant.scala 548:57]
    reg pp8_REG_66 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_66) @[elegant.scala 548:49]
    reg pp8_REG_67 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_67) @[elegant.scala 548:41]
    reg pp8_REG_68 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_68) @[elegant.scala 548:33]
    reg pp8_REG_69 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_69) @[elegant.scala 548:25]
    node _dotProductRegs_9_T = add(pp1_9, pp2_9) @[elegant.scala 549:36]
    node _dotProductRegs_9_T_1 = add(_dotProductRegs_9_T, pp3_9) @[elegant.scala 549:43]
    node _dotProductRegs_9_T_2 = add(_dotProductRegs_9_T_1, pp4_9) @[elegant.scala 549:50]
    node _dotProductRegs_9_T_3 = add(_dotProductRegs_9_T_2, pp5_9) @[elegant.scala 549:57]
    node _dotProductRegs_9_T_4 = add(_dotProductRegs_9_T_3, pp6_9) @[elegant.scala 549:64]
    node _dotProductRegs_9_T_5 = add(_dotProductRegs_9_T_4, pp7_9) @[elegant.scala 549:71]
    node _dotProductRegs_9_T_6 = add(_dotProductRegs_9_T_5, pp8_9) @[elegant.scala 549:78]
    node _dotProductRegs_9_T_7 = bits(multiplierReg_9, 5, 4) @[elegant.scala 549:166]
    node _dotProductRegs_9_T_8 = bits(multiplierReg2_9, 5, 4) @[elegant.scala 549:188]
    node _dotProductRegs_9_T_9 = mul(_dotProductRegs_9_T_7, _dotProductRegs_9_T_8) @[elegant.scala 549:172]
    node _dotProductRegs_9_T_10 = dshl(_dotProductRegs_9_T_9, UInt<4>("h8")) @[elegant.scala 549:195]
    reg dotProductRegs_9_REG : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_9_REG) @[elegant.scala 549:151]
    reg dotProductRegs_9_REG_1 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_9_REG_1) @[elegant.scala 549:143]
    reg dotProductRegs_9_REG_2 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_9_REG_2) @[elegant.scala 549:135]
    reg dotProductRegs_9_REG_3 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_9_REG_3) @[elegant.scala 549:127]
    reg dotProductRegs_9_REG_4 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_9_REG_4) @[elegant.scala 549:119]
    reg dotProductRegs_9_REG_5 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_9_REG_5) @[elegant.scala 549:111]
    reg dotProductRegs_9_REG_6 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_9_REG_6) @[elegant.scala 549:103]
    reg dotProductRegs_9_REG_7 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_9_REG_7) @[elegant.scala 549:95]
    node _dotProductRegs_9_T_11 = add(_dotProductRegs_9_T_6, dotProductRegs_9_REG_7) @[elegant.scala 549:85]
    node _signs_9_T = xor(signReg_9, io_in_b_sign_9) @[elegant.scala 552:27]
    node _two_complement_9_T = eq(signs_9, UInt<1>("h1")) @[elegant.scala 553:40]
    node _two_complement_9_T_1 = cat(UInt<1>("h0"), dotProductRegs_9) @[elegant.scala 553:55]
    node _two_complement_9_T_2 = not(_two_complement_9_T_1) @[elegant.scala 553:49]
    node _two_complement_9_T_3 = add(_two_complement_9_T_2, UInt<1>("h1")) @[elegant.scala 553:77]
    node _two_complement_9_T_4 = tail(_two_complement_9_T_3, 1) @[elegant.scala 553:77]
    node _two_complement_9_T_5 = cat(UInt<1>("h0"), dotProductRegs_9) @[elegant.scala 553:90]
    node _two_complement_9_T_6 = mux(_two_complement_9_T, _two_complement_9_T_4, _two_complement_9_T_5) @[elegant.scala 553:31]
    node _two_complement_buffer_9_T = asSInt(two_complement_9) @[elegant.scala 554:53]
    reg multiplierReg_10 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_10) @[elegant.scala 524:34]
    reg multiplierReg2_10 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg2_10) @[elegant.scala 525:35]
    reg signReg_10 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_10) @[elegant.scala 527:28]
    reg pp1_10 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp1_10) @[elegant.scala 528:24]
    reg pp2_10 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp2_10) @[elegant.scala 529:24]
    reg pp3_10 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp3_10) @[elegant.scala 530:24]
    reg pp4_10 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp4_10) @[elegant.scala 531:24]
    reg pp5_10 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp5_10) @[elegant.scala 532:24]
    reg pp6_10 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp6_10) @[elegant.scala 533:24]
    reg pp7_10 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp7_10) @[elegant.scala 534:24]
    reg pp8_10 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp8_10) @[elegant.scala 535:24]
    reg pp9_10 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp9_10) @[elegant.scala 536:24]
    node _pp1_T_30 = bits(multiplierReg_10, 1, 0) @[elegant.scala 541:31]
    node _pp1_T_31 = bits(multiplierReg2_10, 1, 0) @[elegant.scala 541:53]
    node _pp1_T_32 = mul(_pp1_T_30, _pp1_T_31) @[elegant.scala 541:37]
    node _pp2_T_40 = bits(multiplierReg_10, 1, 0) @[elegant.scala 542:40]
    node _pp2_T_41 = bits(multiplierReg2_10, 3, 2) @[elegant.scala 542:62]
    node _pp2_T_42 = mul(_pp2_T_40, _pp2_T_41) @[elegant.scala 542:46]
    node _pp2_T_43 = dshl(_pp2_T_42, UInt<2>("h2")) @[elegant.scala 542:69]
    reg pp2_REG_10 : UInt<7>, clock with :
      reset => (UInt<1>("h0"), pp2_REG_10) @[elegant.scala 542:25]
    node _pp3_T_40 = bits(multiplierReg_10, 1, 0) @[elegant.scala 543:48]
    node _pp3_T_41 = bits(multiplierReg2_10, 5, 4) @[elegant.scala 543:70]
    node _pp3_T_42 = mul(_pp3_T_40, _pp3_T_41) @[elegant.scala 543:54]
    node _pp3_T_43 = dshl(_pp3_T_42, UInt<3>("h4")) @[elegant.scala 543:77]
    reg pp3_REG_20 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp3_REG_20) @[elegant.scala 543:33]
    reg pp3_REG_21 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp3_REG_21) @[elegant.scala 543:25]
    node _pp4_T_40 = bits(multiplierReg_10, 3, 2) @[elegant.scala 544:56]
    node _pp4_T_41 = bits(multiplierReg2_10, 1, 0) @[elegant.scala 544:78]
    node _pp4_T_42 = mul(_pp4_T_40, _pp4_T_41) @[elegant.scala 544:62]
    node _pp4_T_43 = dshl(_pp4_T_42, UInt<2>("h2")) @[elegant.scala 544:85]
    reg pp4_REG_30 : UInt<7>, clock with :
      reset => (UInt<1>("h0"), pp4_REG_30) @[elegant.scala 544:41]
    reg pp4_REG_31 : UInt<7>, clock with :
      reset => (UInt<1>("h0"), pp4_REG_31) @[elegant.scala 544:33]
    reg pp4_REG_32 : UInt<7>, clock with :
      reset => (UInt<1>("h0"), pp4_REG_32) @[elegant.scala 544:25]
    node _pp5_T_40 = bits(multiplierReg_10, 3, 2) @[elegant.scala 545:64]
    node _pp5_T_41 = bits(multiplierReg2_10, 3, 2) @[elegant.scala 545:86]
    node _pp5_T_42 = mul(_pp5_T_40, _pp5_T_41) @[elegant.scala 545:70]
    node _pp5_T_43 = dshl(_pp5_T_42, UInt<3>("h4")) @[elegant.scala 545:93]
    reg pp5_REG_40 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp5_REG_40) @[elegant.scala 545:49]
    reg pp5_REG_41 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp5_REG_41) @[elegant.scala 545:41]
    reg pp5_REG_42 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp5_REG_42) @[elegant.scala 545:33]
    reg pp5_REG_43 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp5_REG_43) @[elegant.scala 545:25]
    node _pp6_T_40 = bits(multiplierReg_10, 3, 2) @[elegant.scala 546:72]
    node _pp6_T_41 = bits(multiplierReg2_10, 5, 4) @[elegant.scala 546:94]
    node _pp6_T_42 = mul(_pp6_T_40, _pp6_T_41) @[elegant.scala 546:78]
    node _pp6_T_43 = dshl(_pp6_T_42, UInt<3>("h6")) @[elegant.scala 546:101]
    reg pp6_REG_50 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp6_REG_50) @[elegant.scala 546:57]
    reg pp6_REG_51 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp6_REG_51) @[elegant.scala 546:49]
    reg pp6_REG_52 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp6_REG_52) @[elegant.scala 546:41]
    reg pp6_REG_53 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp6_REG_53) @[elegant.scala 546:33]
    reg pp6_REG_54 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp6_REG_54) @[elegant.scala 546:25]
    node _pp7_T_40 = bits(multiplierReg_10, 5, 4) @[elegant.scala 547:80]
    node _pp7_T_41 = bits(multiplierReg2_10, 1, 0) @[elegant.scala 547:102]
    node _pp7_T_42 = mul(_pp7_T_40, _pp7_T_41) @[elegant.scala 547:86]
    node _pp7_T_43 = dshl(_pp7_T_42, UInt<3>("h4")) @[elegant.scala 547:109]
    reg pp7_REG_60 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_60) @[elegant.scala 547:65]
    reg pp7_REG_61 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_61) @[elegant.scala 547:57]
    reg pp7_REG_62 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_62) @[elegant.scala 547:49]
    reg pp7_REG_63 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_63) @[elegant.scala 547:41]
    reg pp7_REG_64 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_64) @[elegant.scala 547:33]
    reg pp7_REG_65 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_65) @[elegant.scala 547:25]
    node _pp8_T_40 = bits(multiplierReg_10, 5, 4) @[elegant.scala 548:88]
    node _pp8_T_41 = bits(multiplierReg2_10, 3, 2) @[elegant.scala 548:110]
    node _pp8_T_42 = mul(_pp8_T_40, _pp8_T_41) @[elegant.scala 548:94]
    node _pp8_T_43 = dshl(_pp8_T_42, UInt<3>("h6")) @[elegant.scala 548:117]
    reg pp8_REG_70 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_70) @[elegant.scala 548:73]
    reg pp8_REG_71 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_71) @[elegant.scala 548:65]
    reg pp8_REG_72 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_72) @[elegant.scala 548:57]
    reg pp8_REG_73 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_73) @[elegant.scala 548:49]
    reg pp8_REG_74 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_74) @[elegant.scala 548:41]
    reg pp8_REG_75 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_75) @[elegant.scala 548:33]
    reg pp8_REG_76 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_76) @[elegant.scala 548:25]
    node _dotProductRegs_10_T = add(pp1_10, pp2_10) @[elegant.scala 549:36]
    node _dotProductRegs_10_T_1 = add(_dotProductRegs_10_T, pp3_10) @[elegant.scala 549:43]
    node _dotProductRegs_10_T_2 = add(_dotProductRegs_10_T_1, pp4_10) @[elegant.scala 549:50]
    node _dotProductRegs_10_T_3 = add(_dotProductRegs_10_T_2, pp5_10) @[elegant.scala 549:57]
    node _dotProductRegs_10_T_4 = add(_dotProductRegs_10_T_3, pp6_10) @[elegant.scala 549:64]
    node _dotProductRegs_10_T_5 = add(_dotProductRegs_10_T_4, pp7_10) @[elegant.scala 549:71]
    node _dotProductRegs_10_T_6 = add(_dotProductRegs_10_T_5, pp8_10) @[elegant.scala 549:78]
    node _dotProductRegs_10_T_7 = bits(multiplierReg_10, 5, 4) @[elegant.scala 549:166]
    node _dotProductRegs_10_T_8 = bits(multiplierReg2_10, 5, 4) @[elegant.scala 549:188]
    node _dotProductRegs_10_T_9 = mul(_dotProductRegs_10_T_7, _dotProductRegs_10_T_8) @[elegant.scala 549:172]
    node _dotProductRegs_10_T_10 = dshl(_dotProductRegs_10_T_9, UInt<4>("h8")) @[elegant.scala 549:195]
    reg dotProductRegs_10_REG : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_10_REG) @[elegant.scala 549:151]
    reg dotProductRegs_10_REG_1 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_10_REG_1) @[elegant.scala 549:143]
    reg dotProductRegs_10_REG_2 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_10_REG_2) @[elegant.scala 549:135]
    reg dotProductRegs_10_REG_3 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_10_REG_3) @[elegant.scala 549:127]
    reg dotProductRegs_10_REG_4 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_10_REG_4) @[elegant.scala 549:119]
    reg dotProductRegs_10_REG_5 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_10_REG_5) @[elegant.scala 549:111]
    reg dotProductRegs_10_REG_6 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_10_REG_6) @[elegant.scala 549:103]
    reg dotProductRegs_10_REG_7 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_10_REG_7) @[elegant.scala 549:95]
    node _dotProductRegs_10_T_11 = add(_dotProductRegs_10_T_6, dotProductRegs_10_REG_7) @[elegant.scala 549:85]
    node _signs_10_T = xor(signReg_10, io_in_b_sign_10) @[elegant.scala 552:27]
    node _two_complement_10_T = eq(signs_10, UInt<1>("h1")) @[elegant.scala 553:40]
    node _two_complement_10_T_1 = cat(UInt<1>("h0"), dotProductRegs_10) @[elegant.scala 553:55]
    node _two_complement_10_T_2 = not(_two_complement_10_T_1) @[elegant.scala 553:49]
    node _two_complement_10_T_3 = add(_two_complement_10_T_2, UInt<1>("h1")) @[elegant.scala 553:77]
    node _two_complement_10_T_4 = tail(_two_complement_10_T_3, 1) @[elegant.scala 553:77]
    node _two_complement_10_T_5 = cat(UInt<1>("h0"), dotProductRegs_10) @[elegant.scala 553:90]
    node _two_complement_10_T_6 = mux(_two_complement_10_T, _two_complement_10_T_4, _two_complement_10_T_5) @[elegant.scala 553:31]
    node _two_complement_buffer_10_T = asSInt(two_complement_10) @[elegant.scala 554:53]
    reg multiplierReg_11 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_11) @[elegant.scala 524:34]
    reg multiplierReg2_11 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg2_11) @[elegant.scala 525:35]
    reg signReg_11 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_11) @[elegant.scala 527:28]
    reg pp1_11 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp1_11) @[elegant.scala 528:24]
    reg pp2_11 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp2_11) @[elegant.scala 529:24]
    reg pp3_11 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp3_11) @[elegant.scala 530:24]
    reg pp4_11 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp4_11) @[elegant.scala 531:24]
    reg pp5_11 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp5_11) @[elegant.scala 532:24]
    reg pp6_11 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp6_11) @[elegant.scala 533:24]
    reg pp7_11 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp7_11) @[elegant.scala 534:24]
    reg pp8_11 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp8_11) @[elegant.scala 535:24]
    reg pp9_11 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp9_11) @[elegant.scala 536:24]
    node _pp1_T_33 = bits(multiplierReg_11, 1, 0) @[elegant.scala 541:31]
    node _pp1_T_34 = bits(multiplierReg2_11, 1, 0) @[elegant.scala 541:53]
    node _pp1_T_35 = mul(_pp1_T_33, _pp1_T_34) @[elegant.scala 541:37]
    node _pp2_T_44 = bits(multiplierReg_11, 1, 0) @[elegant.scala 542:40]
    node _pp2_T_45 = bits(multiplierReg2_11, 3, 2) @[elegant.scala 542:62]
    node _pp2_T_46 = mul(_pp2_T_44, _pp2_T_45) @[elegant.scala 542:46]
    node _pp2_T_47 = dshl(_pp2_T_46, UInt<2>("h2")) @[elegant.scala 542:69]
    reg pp2_REG_11 : UInt<7>, clock with :
      reset => (UInt<1>("h0"), pp2_REG_11) @[elegant.scala 542:25]
    node _pp3_T_44 = bits(multiplierReg_11, 1, 0) @[elegant.scala 543:48]
    node _pp3_T_45 = bits(multiplierReg2_11, 5, 4) @[elegant.scala 543:70]
    node _pp3_T_46 = mul(_pp3_T_44, _pp3_T_45) @[elegant.scala 543:54]
    node _pp3_T_47 = dshl(_pp3_T_46, UInt<3>("h4")) @[elegant.scala 543:77]
    reg pp3_REG_22 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp3_REG_22) @[elegant.scala 543:33]
    reg pp3_REG_23 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp3_REG_23) @[elegant.scala 543:25]
    node _pp4_T_44 = bits(multiplierReg_11, 3, 2) @[elegant.scala 544:56]
    node _pp4_T_45 = bits(multiplierReg2_11, 1, 0) @[elegant.scala 544:78]
    node _pp4_T_46 = mul(_pp4_T_44, _pp4_T_45) @[elegant.scala 544:62]
    node _pp4_T_47 = dshl(_pp4_T_46, UInt<2>("h2")) @[elegant.scala 544:85]
    reg pp4_REG_33 : UInt<7>, clock with :
      reset => (UInt<1>("h0"), pp4_REG_33) @[elegant.scala 544:41]
    reg pp4_REG_34 : UInt<7>, clock with :
      reset => (UInt<1>("h0"), pp4_REG_34) @[elegant.scala 544:33]
    reg pp4_REG_35 : UInt<7>, clock with :
      reset => (UInt<1>("h0"), pp4_REG_35) @[elegant.scala 544:25]
    node _pp5_T_44 = bits(multiplierReg_11, 3, 2) @[elegant.scala 545:64]
    node _pp5_T_45 = bits(multiplierReg2_11, 3, 2) @[elegant.scala 545:86]
    node _pp5_T_46 = mul(_pp5_T_44, _pp5_T_45) @[elegant.scala 545:70]
    node _pp5_T_47 = dshl(_pp5_T_46, UInt<3>("h4")) @[elegant.scala 545:93]
    reg pp5_REG_44 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp5_REG_44) @[elegant.scala 545:49]
    reg pp5_REG_45 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp5_REG_45) @[elegant.scala 545:41]
    reg pp5_REG_46 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp5_REG_46) @[elegant.scala 545:33]
    reg pp5_REG_47 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp5_REG_47) @[elegant.scala 545:25]
    node _pp6_T_44 = bits(multiplierReg_11, 3, 2) @[elegant.scala 546:72]
    node _pp6_T_45 = bits(multiplierReg2_11, 5, 4) @[elegant.scala 546:94]
    node _pp6_T_46 = mul(_pp6_T_44, _pp6_T_45) @[elegant.scala 546:78]
    node _pp6_T_47 = dshl(_pp6_T_46, UInt<3>("h6")) @[elegant.scala 546:101]
    reg pp6_REG_55 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp6_REG_55) @[elegant.scala 546:57]
    reg pp6_REG_56 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp6_REG_56) @[elegant.scala 546:49]
    reg pp6_REG_57 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp6_REG_57) @[elegant.scala 546:41]
    reg pp6_REG_58 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp6_REG_58) @[elegant.scala 546:33]
    reg pp6_REG_59 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp6_REG_59) @[elegant.scala 546:25]
    node _pp7_T_44 = bits(multiplierReg_11, 5, 4) @[elegant.scala 547:80]
    node _pp7_T_45 = bits(multiplierReg2_11, 1, 0) @[elegant.scala 547:102]
    node _pp7_T_46 = mul(_pp7_T_44, _pp7_T_45) @[elegant.scala 547:86]
    node _pp7_T_47 = dshl(_pp7_T_46, UInt<3>("h4")) @[elegant.scala 547:109]
    reg pp7_REG_66 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_66) @[elegant.scala 547:65]
    reg pp7_REG_67 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_67) @[elegant.scala 547:57]
    reg pp7_REG_68 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_68) @[elegant.scala 547:49]
    reg pp7_REG_69 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_69) @[elegant.scala 547:41]
    reg pp7_REG_70 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_70) @[elegant.scala 547:33]
    reg pp7_REG_71 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_71) @[elegant.scala 547:25]
    node _pp8_T_44 = bits(multiplierReg_11, 5, 4) @[elegant.scala 548:88]
    node _pp8_T_45 = bits(multiplierReg2_11, 3, 2) @[elegant.scala 548:110]
    node _pp8_T_46 = mul(_pp8_T_44, _pp8_T_45) @[elegant.scala 548:94]
    node _pp8_T_47 = dshl(_pp8_T_46, UInt<3>("h6")) @[elegant.scala 548:117]
    reg pp8_REG_77 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_77) @[elegant.scala 548:73]
    reg pp8_REG_78 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_78) @[elegant.scala 548:65]
    reg pp8_REG_79 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_79) @[elegant.scala 548:57]
    reg pp8_REG_80 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_80) @[elegant.scala 548:49]
    reg pp8_REG_81 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_81) @[elegant.scala 548:41]
    reg pp8_REG_82 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_82) @[elegant.scala 548:33]
    reg pp8_REG_83 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_83) @[elegant.scala 548:25]
    node _dotProductRegs_11_T = add(pp1_11, pp2_11) @[elegant.scala 549:36]
    node _dotProductRegs_11_T_1 = add(_dotProductRegs_11_T, pp3_11) @[elegant.scala 549:43]
    node _dotProductRegs_11_T_2 = add(_dotProductRegs_11_T_1, pp4_11) @[elegant.scala 549:50]
    node _dotProductRegs_11_T_3 = add(_dotProductRegs_11_T_2, pp5_11) @[elegant.scala 549:57]
    node _dotProductRegs_11_T_4 = add(_dotProductRegs_11_T_3, pp6_11) @[elegant.scala 549:64]
    node _dotProductRegs_11_T_5 = add(_dotProductRegs_11_T_4, pp7_11) @[elegant.scala 549:71]
    node _dotProductRegs_11_T_6 = add(_dotProductRegs_11_T_5, pp8_11) @[elegant.scala 549:78]
    node _dotProductRegs_11_T_7 = bits(multiplierReg_11, 5, 4) @[elegant.scala 549:166]
    node _dotProductRegs_11_T_8 = bits(multiplierReg2_11, 5, 4) @[elegant.scala 549:188]
    node _dotProductRegs_11_T_9 = mul(_dotProductRegs_11_T_7, _dotProductRegs_11_T_8) @[elegant.scala 549:172]
    node _dotProductRegs_11_T_10 = dshl(_dotProductRegs_11_T_9, UInt<4>("h8")) @[elegant.scala 549:195]
    reg dotProductRegs_11_REG : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_11_REG) @[elegant.scala 549:151]
    reg dotProductRegs_11_REG_1 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_11_REG_1) @[elegant.scala 549:143]
    reg dotProductRegs_11_REG_2 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_11_REG_2) @[elegant.scala 549:135]
    reg dotProductRegs_11_REG_3 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_11_REG_3) @[elegant.scala 549:127]
    reg dotProductRegs_11_REG_4 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_11_REG_4) @[elegant.scala 549:119]
    reg dotProductRegs_11_REG_5 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_11_REG_5) @[elegant.scala 549:111]
    reg dotProductRegs_11_REG_6 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_11_REG_6) @[elegant.scala 549:103]
    reg dotProductRegs_11_REG_7 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_11_REG_7) @[elegant.scala 549:95]
    node _dotProductRegs_11_T_11 = add(_dotProductRegs_11_T_6, dotProductRegs_11_REG_7) @[elegant.scala 549:85]
    node _signs_11_T = xor(signReg_11, io_in_b_sign_11) @[elegant.scala 552:27]
    node _two_complement_11_T = eq(signs_11, UInt<1>("h1")) @[elegant.scala 553:40]
    node _two_complement_11_T_1 = cat(UInt<1>("h0"), dotProductRegs_11) @[elegant.scala 553:55]
    node _two_complement_11_T_2 = not(_two_complement_11_T_1) @[elegant.scala 553:49]
    node _two_complement_11_T_3 = add(_two_complement_11_T_2, UInt<1>("h1")) @[elegant.scala 553:77]
    node _two_complement_11_T_4 = tail(_two_complement_11_T_3, 1) @[elegant.scala 553:77]
    node _two_complement_11_T_5 = cat(UInt<1>("h0"), dotProductRegs_11) @[elegant.scala 553:90]
    node _two_complement_11_T_6 = mux(_two_complement_11_T, _two_complement_11_T_4, _two_complement_11_T_5) @[elegant.scala 553:31]
    node _two_complement_buffer_11_T = asSInt(two_complement_11) @[elegant.scala 554:53]
    reg multiplierReg_12 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_12) @[elegant.scala 524:34]
    reg multiplierReg2_12 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg2_12) @[elegant.scala 525:35]
    reg signReg_12 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_12) @[elegant.scala 527:28]
    reg pp1_12 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp1_12) @[elegant.scala 528:24]
    reg pp2_12 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp2_12) @[elegant.scala 529:24]
    reg pp3_12 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp3_12) @[elegant.scala 530:24]
    reg pp4_12 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp4_12) @[elegant.scala 531:24]
    reg pp5_12 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp5_12) @[elegant.scala 532:24]
    reg pp6_12 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp6_12) @[elegant.scala 533:24]
    reg pp7_12 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp7_12) @[elegant.scala 534:24]
    reg pp8_12 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp8_12) @[elegant.scala 535:24]
    reg pp9_12 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp9_12) @[elegant.scala 536:24]
    node _pp1_T_36 = bits(multiplierReg_12, 1, 0) @[elegant.scala 541:31]
    node _pp1_T_37 = bits(multiplierReg2_12, 1, 0) @[elegant.scala 541:53]
    node _pp1_T_38 = mul(_pp1_T_36, _pp1_T_37) @[elegant.scala 541:37]
    node _pp2_T_48 = bits(multiplierReg_12, 1, 0) @[elegant.scala 542:40]
    node _pp2_T_49 = bits(multiplierReg2_12, 3, 2) @[elegant.scala 542:62]
    node _pp2_T_50 = mul(_pp2_T_48, _pp2_T_49) @[elegant.scala 542:46]
    node _pp2_T_51 = dshl(_pp2_T_50, UInt<2>("h2")) @[elegant.scala 542:69]
    reg pp2_REG_12 : UInt<7>, clock with :
      reset => (UInt<1>("h0"), pp2_REG_12) @[elegant.scala 542:25]
    node _pp3_T_48 = bits(multiplierReg_12, 1, 0) @[elegant.scala 543:48]
    node _pp3_T_49 = bits(multiplierReg2_12, 5, 4) @[elegant.scala 543:70]
    node _pp3_T_50 = mul(_pp3_T_48, _pp3_T_49) @[elegant.scala 543:54]
    node _pp3_T_51 = dshl(_pp3_T_50, UInt<3>("h4")) @[elegant.scala 543:77]
    reg pp3_REG_24 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp3_REG_24) @[elegant.scala 543:33]
    reg pp3_REG_25 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp3_REG_25) @[elegant.scala 543:25]
    node _pp4_T_48 = bits(multiplierReg_12, 3, 2) @[elegant.scala 544:56]
    node _pp4_T_49 = bits(multiplierReg2_12, 1, 0) @[elegant.scala 544:78]
    node _pp4_T_50 = mul(_pp4_T_48, _pp4_T_49) @[elegant.scala 544:62]
    node _pp4_T_51 = dshl(_pp4_T_50, UInt<2>("h2")) @[elegant.scala 544:85]
    reg pp4_REG_36 : UInt<7>, clock with :
      reset => (UInt<1>("h0"), pp4_REG_36) @[elegant.scala 544:41]
    reg pp4_REG_37 : UInt<7>, clock with :
      reset => (UInt<1>("h0"), pp4_REG_37) @[elegant.scala 544:33]
    reg pp4_REG_38 : UInt<7>, clock with :
      reset => (UInt<1>("h0"), pp4_REG_38) @[elegant.scala 544:25]
    node _pp5_T_48 = bits(multiplierReg_12, 3, 2) @[elegant.scala 545:64]
    node _pp5_T_49 = bits(multiplierReg2_12, 3, 2) @[elegant.scala 545:86]
    node _pp5_T_50 = mul(_pp5_T_48, _pp5_T_49) @[elegant.scala 545:70]
    node _pp5_T_51 = dshl(_pp5_T_50, UInt<3>("h4")) @[elegant.scala 545:93]
    reg pp5_REG_48 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp5_REG_48) @[elegant.scala 545:49]
    reg pp5_REG_49 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp5_REG_49) @[elegant.scala 545:41]
    reg pp5_REG_50 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp5_REG_50) @[elegant.scala 545:33]
    reg pp5_REG_51 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp5_REG_51) @[elegant.scala 545:25]
    node _pp6_T_48 = bits(multiplierReg_12, 3, 2) @[elegant.scala 546:72]
    node _pp6_T_49 = bits(multiplierReg2_12, 5, 4) @[elegant.scala 546:94]
    node _pp6_T_50 = mul(_pp6_T_48, _pp6_T_49) @[elegant.scala 546:78]
    node _pp6_T_51 = dshl(_pp6_T_50, UInt<3>("h6")) @[elegant.scala 546:101]
    reg pp6_REG_60 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp6_REG_60) @[elegant.scala 546:57]
    reg pp6_REG_61 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp6_REG_61) @[elegant.scala 546:49]
    reg pp6_REG_62 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp6_REG_62) @[elegant.scala 546:41]
    reg pp6_REG_63 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp6_REG_63) @[elegant.scala 546:33]
    reg pp6_REG_64 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp6_REG_64) @[elegant.scala 546:25]
    node _pp7_T_48 = bits(multiplierReg_12, 5, 4) @[elegant.scala 547:80]
    node _pp7_T_49 = bits(multiplierReg2_12, 1, 0) @[elegant.scala 547:102]
    node _pp7_T_50 = mul(_pp7_T_48, _pp7_T_49) @[elegant.scala 547:86]
    node _pp7_T_51 = dshl(_pp7_T_50, UInt<3>("h4")) @[elegant.scala 547:109]
    reg pp7_REG_72 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_72) @[elegant.scala 547:65]
    reg pp7_REG_73 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_73) @[elegant.scala 547:57]
    reg pp7_REG_74 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_74) @[elegant.scala 547:49]
    reg pp7_REG_75 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_75) @[elegant.scala 547:41]
    reg pp7_REG_76 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_76) @[elegant.scala 547:33]
    reg pp7_REG_77 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_77) @[elegant.scala 547:25]
    node _pp8_T_48 = bits(multiplierReg_12, 5, 4) @[elegant.scala 548:88]
    node _pp8_T_49 = bits(multiplierReg2_12, 3, 2) @[elegant.scala 548:110]
    node _pp8_T_50 = mul(_pp8_T_48, _pp8_T_49) @[elegant.scala 548:94]
    node _pp8_T_51 = dshl(_pp8_T_50, UInt<3>("h6")) @[elegant.scala 548:117]
    reg pp8_REG_84 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_84) @[elegant.scala 548:73]
    reg pp8_REG_85 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_85) @[elegant.scala 548:65]
    reg pp8_REG_86 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_86) @[elegant.scala 548:57]
    reg pp8_REG_87 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_87) @[elegant.scala 548:49]
    reg pp8_REG_88 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_88) @[elegant.scala 548:41]
    reg pp8_REG_89 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_89) @[elegant.scala 548:33]
    reg pp8_REG_90 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_90) @[elegant.scala 548:25]
    node _dotProductRegs_12_T = add(pp1_12, pp2_12) @[elegant.scala 549:36]
    node _dotProductRegs_12_T_1 = add(_dotProductRegs_12_T, pp3_12) @[elegant.scala 549:43]
    node _dotProductRegs_12_T_2 = add(_dotProductRegs_12_T_1, pp4_12) @[elegant.scala 549:50]
    node _dotProductRegs_12_T_3 = add(_dotProductRegs_12_T_2, pp5_12) @[elegant.scala 549:57]
    node _dotProductRegs_12_T_4 = add(_dotProductRegs_12_T_3, pp6_12) @[elegant.scala 549:64]
    node _dotProductRegs_12_T_5 = add(_dotProductRegs_12_T_4, pp7_12) @[elegant.scala 549:71]
    node _dotProductRegs_12_T_6 = add(_dotProductRegs_12_T_5, pp8_12) @[elegant.scala 549:78]
    node _dotProductRegs_12_T_7 = bits(multiplierReg_12, 5, 4) @[elegant.scala 549:166]
    node _dotProductRegs_12_T_8 = bits(multiplierReg2_12, 5, 4) @[elegant.scala 549:188]
    node _dotProductRegs_12_T_9 = mul(_dotProductRegs_12_T_7, _dotProductRegs_12_T_8) @[elegant.scala 549:172]
    node _dotProductRegs_12_T_10 = dshl(_dotProductRegs_12_T_9, UInt<4>("h8")) @[elegant.scala 549:195]
    reg dotProductRegs_12_REG : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_12_REG) @[elegant.scala 549:151]
    reg dotProductRegs_12_REG_1 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_12_REG_1) @[elegant.scala 549:143]
    reg dotProductRegs_12_REG_2 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_12_REG_2) @[elegant.scala 549:135]
    reg dotProductRegs_12_REG_3 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_12_REG_3) @[elegant.scala 549:127]
    reg dotProductRegs_12_REG_4 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_12_REG_4) @[elegant.scala 549:119]
    reg dotProductRegs_12_REG_5 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_12_REG_5) @[elegant.scala 549:111]
    reg dotProductRegs_12_REG_6 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_12_REG_6) @[elegant.scala 549:103]
    reg dotProductRegs_12_REG_7 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_12_REG_7) @[elegant.scala 549:95]
    node _dotProductRegs_12_T_11 = add(_dotProductRegs_12_T_6, dotProductRegs_12_REG_7) @[elegant.scala 549:85]
    node _signs_12_T = xor(signReg_12, io_in_b_sign_12) @[elegant.scala 552:27]
    node _two_complement_12_T = eq(signs_12, UInt<1>("h1")) @[elegant.scala 553:40]
    node _two_complement_12_T_1 = cat(UInt<1>("h0"), dotProductRegs_12) @[elegant.scala 553:55]
    node _two_complement_12_T_2 = not(_two_complement_12_T_1) @[elegant.scala 553:49]
    node _two_complement_12_T_3 = add(_two_complement_12_T_2, UInt<1>("h1")) @[elegant.scala 553:77]
    node _two_complement_12_T_4 = tail(_two_complement_12_T_3, 1) @[elegant.scala 553:77]
    node _two_complement_12_T_5 = cat(UInt<1>("h0"), dotProductRegs_12) @[elegant.scala 553:90]
    node _two_complement_12_T_6 = mux(_two_complement_12_T, _two_complement_12_T_4, _two_complement_12_T_5) @[elegant.scala 553:31]
    node _two_complement_buffer_12_T = asSInt(two_complement_12) @[elegant.scala 554:53]
    reg multiplierReg_13 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_13) @[elegant.scala 524:34]
    reg multiplierReg2_13 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg2_13) @[elegant.scala 525:35]
    reg signReg_13 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_13) @[elegant.scala 527:28]
    reg pp1_13 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp1_13) @[elegant.scala 528:24]
    reg pp2_13 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp2_13) @[elegant.scala 529:24]
    reg pp3_13 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp3_13) @[elegant.scala 530:24]
    reg pp4_13 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp4_13) @[elegant.scala 531:24]
    reg pp5_13 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp5_13) @[elegant.scala 532:24]
    reg pp6_13 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp6_13) @[elegant.scala 533:24]
    reg pp7_13 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp7_13) @[elegant.scala 534:24]
    reg pp8_13 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp8_13) @[elegant.scala 535:24]
    reg pp9_13 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp9_13) @[elegant.scala 536:24]
    node _pp1_T_39 = bits(multiplierReg_13, 1, 0) @[elegant.scala 541:31]
    node _pp1_T_40 = bits(multiplierReg2_13, 1, 0) @[elegant.scala 541:53]
    node _pp1_T_41 = mul(_pp1_T_39, _pp1_T_40) @[elegant.scala 541:37]
    node _pp2_T_52 = bits(multiplierReg_13, 1, 0) @[elegant.scala 542:40]
    node _pp2_T_53 = bits(multiplierReg2_13, 3, 2) @[elegant.scala 542:62]
    node _pp2_T_54 = mul(_pp2_T_52, _pp2_T_53) @[elegant.scala 542:46]
    node _pp2_T_55 = dshl(_pp2_T_54, UInt<2>("h2")) @[elegant.scala 542:69]
    reg pp2_REG_13 : UInt<7>, clock with :
      reset => (UInt<1>("h0"), pp2_REG_13) @[elegant.scala 542:25]
    node _pp3_T_52 = bits(multiplierReg_13, 1, 0) @[elegant.scala 543:48]
    node _pp3_T_53 = bits(multiplierReg2_13, 5, 4) @[elegant.scala 543:70]
    node _pp3_T_54 = mul(_pp3_T_52, _pp3_T_53) @[elegant.scala 543:54]
    node _pp3_T_55 = dshl(_pp3_T_54, UInt<3>("h4")) @[elegant.scala 543:77]
    reg pp3_REG_26 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp3_REG_26) @[elegant.scala 543:33]
    reg pp3_REG_27 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp3_REG_27) @[elegant.scala 543:25]
    node _pp4_T_52 = bits(multiplierReg_13, 3, 2) @[elegant.scala 544:56]
    node _pp4_T_53 = bits(multiplierReg2_13, 1, 0) @[elegant.scala 544:78]
    node _pp4_T_54 = mul(_pp4_T_52, _pp4_T_53) @[elegant.scala 544:62]
    node _pp4_T_55 = dshl(_pp4_T_54, UInt<2>("h2")) @[elegant.scala 544:85]
    reg pp4_REG_39 : UInt<7>, clock with :
      reset => (UInt<1>("h0"), pp4_REG_39) @[elegant.scala 544:41]
    reg pp4_REG_40 : UInt<7>, clock with :
      reset => (UInt<1>("h0"), pp4_REG_40) @[elegant.scala 544:33]
    reg pp4_REG_41 : UInt<7>, clock with :
      reset => (UInt<1>("h0"), pp4_REG_41) @[elegant.scala 544:25]
    node _pp5_T_52 = bits(multiplierReg_13, 3, 2) @[elegant.scala 545:64]
    node _pp5_T_53 = bits(multiplierReg2_13, 3, 2) @[elegant.scala 545:86]
    node _pp5_T_54 = mul(_pp5_T_52, _pp5_T_53) @[elegant.scala 545:70]
    node _pp5_T_55 = dshl(_pp5_T_54, UInt<3>("h4")) @[elegant.scala 545:93]
    reg pp5_REG_52 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp5_REG_52) @[elegant.scala 545:49]
    reg pp5_REG_53 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp5_REG_53) @[elegant.scala 545:41]
    reg pp5_REG_54 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp5_REG_54) @[elegant.scala 545:33]
    reg pp5_REG_55 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp5_REG_55) @[elegant.scala 545:25]
    node _pp6_T_52 = bits(multiplierReg_13, 3, 2) @[elegant.scala 546:72]
    node _pp6_T_53 = bits(multiplierReg2_13, 5, 4) @[elegant.scala 546:94]
    node _pp6_T_54 = mul(_pp6_T_52, _pp6_T_53) @[elegant.scala 546:78]
    node _pp6_T_55 = dshl(_pp6_T_54, UInt<3>("h6")) @[elegant.scala 546:101]
    reg pp6_REG_65 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp6_REG_65) @[elegant.scala 546:57]
    reg pp6_REG_66 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp6_REG_66) @[elegant.scala 546:49]
    reg pp6_REG_67 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp6_REG_67) @[elegant.scala 546:41]
    reg pp6_REG_68 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp6_REG_68) @[elegant.scala 546:33]
    reg pp6_REG_69 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp6_REG_69) @[elegant.scala 546:25]
    node _pp7_T_52 = bits(multiplierReg_13, 5, 4) @[elegant.scala 547:80]
    node _pp7_T_53 = bits(multiplierReg2_13, 1, 0) @[elegant.scala 547:102]
    node _pp7_T_54 = mul(_pp7_T_52, _pp7_T_53) @[elegant.scala 547:86]
    node _pp7_T_55 = dshl(_pp7_T_54, UInt<3>("h4")) @[elegant.scala 547:109]
    reg pp7_REG_78 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_78) @[elegant.scala 547:65]
    reg pp7_REG_79 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_79) @[elegant.scala 547:57]
    reg pp7_REG_80 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_80) @[elegant.scala 547:49]
    reg pp7_REG_81 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_81) @[elegant.scala 547:41]
    reg pp7_REG_82 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_82) @[elegant.scala 547:33]
    reg pp7_REG_83 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_83) @[elegant.scala 547:25]
    node _pp8_T_52 = bits(multiplierReg_13, 5, 4) @[elegant.scala 548:88]
    node _pp8_T_53 = bits(multiplierReg2_13, 3, 2) @[elegant.scala 548:110]
    node _pp8_T_54 = mul(_pp8_T_52, _pp8_T_53) @[elegant.scala 548:94]
    node _pp8_T_55 = dshl(_pp8_T_54, UInt<3>("h6")) @[elegant.scala 548:117]
    reg pp8_REG_91 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_91) @[elegant.scala 548:73]
    reg pp8_REG_92 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_92) @[elegant.scala 548:65]
    reg pp8_REG_93 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_93) @[elegant.scala 548:57]
    reg pp8_REG_94 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_94) @[elegant.scala 548:49]
    reg pp8_REG_95 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_95) @[elegant.scala 548:41]
    reg pp8_REG_96 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_96) @[elegant.scala 548:33]
    reg pp8_REG_97 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_97) @[elegant.scala 548:25]
    node _dotProductRegs_13_T = add(pp1_13, pp2_13) @[elegant.scala 549:36]
    node _dotProductRegs_13_T_1 = add(_dotProductRegs_13_T, pp3_13) @[elegant.scala 549:43]
    node _dotProductRegs_13_T_2 = add(_dotProductRegs_13_T_1, pp4_13) @[elegant.scala 549:50]
    node _dotProductRegs_13_T_3 = add(_dotProductRegs_13_T_2, pp5_13) @[elegant.scala 549:57]
    node _dotProductRegs_13_T_4 = add(_dotProductRegs_13_T_3, pp6_13) @[elegant.scala 549:64]
    node _dotProductRegs_13_T_5 = add(_dotProductRegs_13_T_4, pp7_13) @[elegant.scala 549:71]
    node _dotProductRegs_13_T_6 = add(_dotProductRegs_13_T_5, pp8_13) @[elegant.scala 549:78]
    node _dotProductRegs_13_T_7 = bits(multiplierReg_13, 5, 4) @[elegant.scala 549:166]
    node _dotProductRegs_13_T_8 = bits(multiplierReg2_13, 5, 4) @[elegant.scala 549:188]
    node _dotProductRegs_13_T_9 = mul(_dotProductRegs_13_T_7, _dotProductRegs_13_T_8) @[elegant.scala 549:172]
    node _dotProductRegs_13_T_10 = dshl(_dotProductRegs_13_T_9, UInt<4>("h8")) @[elegant.scala 549:195]
    reg dotProductRegs_13_REG : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_13_REG) @[elegant.scala 549:151]
    reg dotProductRegs_13_REG_1 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_13_REG_1) @[elegant.scala 549:143]
    reg dotProductRegs_13_REG_2 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_13_REG_2) @[elegant.scala 549:135]
    reg dotProductRegs_13_REG_3 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_13_REG_3) @[elegant.scala 549:127]
    reg dotProductRegs_13_REG_4 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_13_REG_4) @[elegant.scala 549:119]
    reg dotProductRegs_13_REG_5 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_13_REG_5) @[elegant.scala 549:111]
    reg dotProductRegs_13_REG_6 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_13_REG_6) @[elegant.scala 549:103]
    reg dotProductRegs_13_REG_7 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_13_REG_7) @[elegant.scala 549:95]
    node _dotProductRegs_13_T_11 = add(_dotProductRegs_13_T_6, dotProductRegs_13_REG_7) @[elegant.scala 549:85]
    node _signs_13_T = xor(signReg_13, io_in_b_sign_13) @[elegant.scala 552:27]
    node _two_complement_13_T = eq(signs_13, UInt<1>("h1")) @[elegant.scala 553:40]
    node _two_complement_13_T_1 = cat(UInt<1>("h0"), dotProductRegs_13) @[elegant.scala 553:55]
    node _two_complement_13_T_2 = not(_two_complement_13_T_1) @[elegant.scala 553:49]
    node _two_complement_13_T_3 = add(_two_complement_13_T_2, UInt<1>("h1")) @[elegant.scala 553:77]
    node _two_complement_13_T_4 = tail(_two_complement_13_T_3, 1) @[elegant.scala 553:77]
    node _two_complement_13_T_5 = cat(UInt<1>("h0"), dotProductRegs_13) @[elegant.scala 553:90]
    node _two_complement_13_T_6 = mux(_two_complement_13_T, _two_complement_13_T_4, _two_complement_13_T_5) @[elegant.scala 553:31]
    node _two_complement_buffer_13_T = asSInt(two_complement_13) @[elegant.scala 554:53]
    reg multiplierReg_14 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_14) @[elegant.scala 524:34]
    reg multiplierReg2_14 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg2_14) @[elegant.scala 525:35]
    reg signReg_14 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_14) @[elegant.scala 527:28]
    reg pp1_14 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp1_14) @[elegant.scala 528:24]
    reg pp2_14 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp2_14) @[elegant.scala 529:24]
    reg pp3_14 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp3_14) @[elegant.scala 530:24]
    reg pp4_14 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp4_14) @[elegant.scala 531:24]
    reg pp5_14 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp5_14) @[elegant.scala 532:24]
    reg pp6_14 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp6_14) @[elegant.scala 533:24]
    reg pp7_14 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp7_14) @[elegant.scala 534:24]
    reg pp8_14 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp8_14) @[elegant.scala 535:24]
    reg pp9_14 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp9_14) @[elegant.scala 536:24]
    node _pp1_T_42 = bits(multiplierReg_14, 1, 0) @[elegant.scala 541:31]
    node _pp1_T_43 = bits(multiplierReg2_14, 1, 0) @[elegant.scala 541:53]
    node _pp1_T_44 = mul(_pp1_T_42, _pp1_T_43) @[elegant.scala 541:37]
    node _pp2_T_56 = bits(multiplierReg_14, 1, 0) @[elegant.scala 542:40]
    node _pp2_T_57 = bits(multiplierReg2_14, 3, 2) @[elegant.scala 542:62]
    node _pp2_T_58 = mul(_pp2_T_56, _pp2_T_57) @[elegant.scala 542:46]
    node _pp2_T_59 = dshl(_pp2_T_58, UInt<2>("h2")) @[elegant.scala 542:69]
    reg pp2_REG_14 : UInt<7>, clock with :
      reset => (UInt<1>("h0"), pp2_REG_14) @[elegant.scala 542:25]
    node _pp3_T_56 = bits(multiplierReg_14, 1, 0) @[elegant.scala 543:48]
    node _pp3_T_57 = bits(multiplierReg2_14, 5, 4) @[elegant.scala 543:70]
    node _pp3_T_58 = mul(_pp3_T_56, _pp3_T_57) @[elegant.scala 543:54]
    node _pp3_T_59 = dshl(_pp3_T_58, UInt<3>("h4")) @[elegant.scala 543:77]
    reg pp3_REG_28 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp3_REG_28) @[elegant.scala 543:33]
    reg pp3_REG_29 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp3_REG_29) @[elegant.scala 543:25]
    node _pp4_T_56 = bits(multiplierReg_14, 3, 2) @[elegant.scala 544:56]
    node _pp4_T_57 = bits(multiplierReg2_14, 1, 0) @[elegant.scala 544:78]
    node _pp4_T_58 = mul(_pp4_T_56, _pp4_T_57) @[elegant.scala 544:62]
    node _pp4_T_59 = dshl(_pp4_T_58, UInt<2>("h2")) @[elegant.scala 544:85]
    reg pp4_REG_42 : UInt<7>, clock with :
      reset => (UInt<1>("h0"), pp4_REG_42) @[elegant.scala 544:41]
    reg pp4_REG_43 : UInt<7>, clock with :
      reset => (UInt<1>("h0"), pp4_REG_43) @[elegant.scala 544:33]
    reg pp4_REG_44 : UInt<7>, clock with :
      reset => (UInt<1>("h0"), pp4_REG_44) @[elegant.scala 544:25]
    node _pp5_T_56 = bits(multiplierReg_14, 3, 2) @[elegant.scala 545:64]
    node _pp5_T_57 = bits(multiplierReg2_14, 3, 2) @[elegant.scala 545:86]
    node _pp5_T_58 = mul(_pp5_T_56, _pp5_T_57) @[elegant.scala 545:70]
    node _pp5_T_59 = dshl(_pp5_T_58, UInt<3>("h4")) @[elegant.scala 545:93]
    reg pp5_REG_56 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp5_REG_56) @[elegant.scala 545:49]
    reg pp5_REG_57 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp5_REG_57) @[elegant.scala 545:41]
    reg pp5_REG_58 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp5_REG_58) @[elegant.scala 545:33]
    reg pp5_REG_59 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp5_REG_59) @[elegant.scala 545:25]
    node _pp6_T_56 = bits(multiplierReg_14, 3, 2) @[elegant.scala 546:72]
    node _pp6_T_57 = bits(multiplierReg2_14, 5, 4) @[elegant.scala 546:94]
    node _pp6_T_58 = mul(_pp6_T_56, _pp6_T_57) @[elegant.scala 546:78]
    node _pp6_T_59 = dshl(_pp6_T_58, UInt<3>("h6")) @[elegant.scala 546:101]
    reg pp6_REG_70 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp6_REG_70) @[elegant.scala 546:57]
    reg pp6_REG_71 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp6_REG_71) @[elegant.scala 546:49]
    reg pp6_REG_72 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp6_REG_72) @[elegant.scala 546:41]
    reg pp6_REG_73 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp6_REG_73) @[elegant.scala 546:33]
    reg pp6_REG_74 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp6_REG_74) @[elegant.scala 546:25]
    node _pp7_T_56 = bits(multiplierReg_14, 5, 4) @[elegant.scala 547:80]
    node _pp7_T_57 = bits(multiplierReg2_14, 1, 0) @[elegant.scala 547:102]
    node _pp7_T_58 = mul(_pp7_T_56, _pp7_T_57) @[elegant.scala 547:86]
    node _pp7_T_59 = dshl(_pp7_T_58, UInt<3>("h4")) @[elegant.scala 547:109]
    reg pp7_REG_84 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_84) @[elegant.scala 547:65]
    reg pp7_REG_85 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_85) @[elegant.scala 547:57]
    reg pp7_REG_86 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_86) @[elegant.scala 547:49]
    reg pp7_REG_87 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_87) @[elegant.scala 547:41]
    reg pp7_REG_88 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_88) @[elegant.scala 547:33]
    reg pp7_REG_89 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_89) @[elegant.scala 547:25]
    node _pp8_T_56 = bits(multiplierReg_14, 5, 4) @[elegant.scala 548:88]
    node _pp8_T_57 = bits(multiplierReg2_14, 3, 2) @[elegant.scala 548:110]
    node _pp8_T_58 = mul(_pp8_T_56, _pp8_T_57) @[elegant.scala 548:94]
    node _pp8_T_59 = dshl(_pp8_T_58, UInt<3>("h6")) @[elegant.scala 548:117]
    reg pp8_REG_98 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_98) @[elegant.scala 548:73]
    reg pp8_REG_99 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_99) @[elegant.scala 548:65]
    reg pp8_REG_100 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_100) @[elegant.scala 548:57]
    reg pp8_REG_101 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_101) @[elegant.scala 548:49]
    reg pp8_REG_102 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_102) @[elegant.scala 548:41]
    reg pp8_REG_103 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_103) @[elegant.scala 548:33]
    reg pp8_REG_104 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_104) @[elegant.scala 548:25]
    node _dotProductRegs_14_T = add(pp1_14, pp2_14) @[elegant.scala 549:36]
    node _dotProductRegs_14_T_1 = add(_dotProductRegs_14_T, pp3_14) @[elegant.scala 549:43]
    node _dotProductRegs_14_T_2 = add(_dotProductRegs_14_T_1, pp4_14) @[elegant.scala 549:50]
    node _dotProductRegs_14_T_3 = add(_dotProductRegs_14_T_2, pp5_14) @[elegant.scala 549:57]
    node _dotProductRegs_14_T_4 = add(_dotProductRegs_14_T_3, pp6_14) @[elegant.scala 549:64]
    node _dotProductRegs_14_T_5 = add(_dotProductRegs_14_T_4, pp7_14) @[elegant.scala 549:71]
    node _dotProductRegs_14_T_6 = add(_dotProductRegs_14_T_5, pp8_14) @[elegant.scala 549:78]
    node _dotProductRegs_14_T_7 = bits(multiplierReg_14, 5, 4) @[elegant.scala 549:166]
    node _dotProductRegs_14_T_8 = bits(multiplierReg2_14, 5, 4) @[elegant.scala 549:188]
    node _dotProductRegs_14_T_9 = mul(_dotProductRegs_14_T_7, _dotProductRegs_14_T_8) @[elegant.scala 549:172]
    node _dotProductRegs_14_T_10 = dshl(_dotProductRegs_14_T_9, UInt<4>("h8")) @[elegant.scala 549:195]
    reg dotProductRegs_14_REG : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_14_REG) @[elegant.scala 549:151]
    reg dotProductRegs_14_REG_1 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_14_REG_1) @[elegant.scala 549:143]
    reg dotProductRegs_14_REG_2 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_14_REG_2) @[elegant.scala 549:135]
    reg dotProductRegs_14_REG_3 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_14_REG_3) @[elegant.scala 549:127]
    reg dotProductRegs_14_REG_4 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_14_REG_4) @[elegant.scala 549:119]
    reg dotProductRegs_14_REG_5 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_14_REG_5) @[elegant.scala 549:111]
    reg dotProductRegs_14_REG_6 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_14_REG_6) @[elegant.scala 549:103]
    reg dotProductRegs_14_REG_7 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_14_REG_7) @[elegant.scala 549:95]
    node _dotProductRegs_14_T_11 = add(_dotProductRegs_14_T_6, dotProductRegs_14_REG_7) @[elegant.scala 549:85]
    node _signs_14_T = xor(signReg_14, io_in_b_sign_14) @[elegant.scala 552:27]
    node _two_complement_14_T = eq(signs_14, UInt<1>("h1")) @[elegant.scala 553:40]
    node _two_complement_14_T_1 = cat(UInt<1>("h0"), dotProductRegs_14) @[elegant.scala 553:55]
    node _two_complement_14_T_2 = not(_two_complement_14_T_1) @[elegant.scala 553:49]
    node _two_complement_14_T_3 = add(_two_complement_14_T_2, UInt<1>("h1")) @[elegant.scala 553:77]
    node _two_complement_14_T_4 = tail(_two_complement_14_T_3, 1) @[elegant.scala 553:77]
    node _two_complement_14_T_5 = cat(UInt<1>("h0"), dotProductRegs_14) @[elegant.scala 553:90]
    node _two_complement_14_T_6 = mux(_two_complement_14_T, _two_complement_14_T_4, _two_complement_14_T_5) @[elegant.scala 553:31]
    node _two_complement_buffer_14_T = asSInt(two_complement_14) @[elegant.scala 554:53]
    reg multiplierReg_15 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_15) @[elegant.scala 524:34]
    reg multiplierReg2_15 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg2_15) @[elegant.scala 525:35]
    reg signReg_15 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_15) @[elegant.scala 527:28]
    reg pp1_15 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp1_15) @[elegant.scala 528:24]
    reg pp2_15 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp2_15) @[elegant.scala 529:24]
    reg pp3_15 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp3_15) @[elegant.scala 530:24]
    reg pp4_15 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp4_15) @[elegant.scala 531:24]
    reg pp5_15 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp5_15) @[elegant.scala 532:24]
    reg pp6_15 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp6_15) @[elegant.scala 533:24]
    reg pp7_15 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp7_15) @[elegant.scala 534:24]
    reg pp8_15 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp8_15) @[elegant.scala 535:24]
    reg pp9_15 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), pp9_15) @[elegant.scala 536:24]
    node _pp1_T_45 = bits(multiplierReg_15, 1, 0) @[elegant.scala 541:31]
    node _pp1_T_46 = bits(multiplierReg2_15, 1, 0) @[elegant.scala 541:53]
    node _pp1_T_47 = mul(_pp1_T_45, _pp1_T_46) @[elegant.scala 541:37]
    node _pp2_T_60 = bits(multiplierReg_15, 1, 0) @[elegant.scala 542:40]
    node _pp2_T_61 = bits(multiplierReg2_15, 3, 2) @[elegant.scala 542:62]
    node _pp2_T_62 = mul(_pp2_T_60, _pp2_T_61) @[elegant.scala 542:46]
    node _pp2_T_63 = dshl(_pp2_T_62, UInt<2>("h2")) @[elegant.scala 542:69]
    reg pp2_REG_15 : UInt<7>, clock with :
      reset => (UInt<1>("h0"), pp2_REG_15) @[elegant.scala 542:25]
    node _pp3_T_60 = bits(multiplierReg_15, 1, 0) @[elegant.scala 543:48]
    node _pp3_T_61 = bits(multiplierReg2_15, 5, 4) @[elegant.scala 543:70]
    node _pp3_T_62 = mul(_pp3_T_60, _pp3_T_61) @[elegant.scala 543:54]
    node _pp3_T_63 = dshl(_pp3_T_62, UInt<3>("h4")) @[elegant.scala 543:77]
    reg pp3_REG_30 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp3_REG_30) @[elegant.scala 543:33]
    reg pp3_REG_31 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp3_REG_31) @[elegant.scala 543:25]
    node _pp4_T_60 = bits(multiplierReg_15, 3, 2) @[elegant.scala 544:56]
    node _pp4_T_61 = bits(multiplierReg2_15, 1, 0) @[elegant.scala 544:78]
    node _pp4_T_62 = mul(_pp4_T_60, _pp4_T_61) @[elegant.scala 544:62]
    node _pp4_T_63 = dshl(_pp4_T_62, UInt<2>("h2")) @[elegant.scala 544:85]
    reg pp4_REG_45 : UInt<7>, clock with :
      reset => (UInt<1>("h0"), pp4_REG_45) @[elegant.scala 544:41]
    reg pp4_REG_46 : UInt<7>, clock with :
      reset => (UInt<1>("h0"), pp4_REG_46) @[elegant.scala 544:33]
    reg pp4_REG_47 : UInt<7>, clock with :
      reset => (UInt<1>("h0"), pp4_REG_47) @[elegant.scala 544:25]
    node _pp5_T_60 = bits(multiplierReg_15, 3, 2) @[elegant.scala 545:64]
    node _pp5_T_61 = bits(multiplierReg2_15, 3, 2) @[elegant.scala 545:86]
    node _pp5_T_62 = mul(_pp5_T_60, _pp5_T_61) @[elegant.scala 545:70]
    node _pp5_T_63 = dshl(_pp5_T_62, UInt<3>("h4")) @[elegant.scala 545:93]
    reg pp5_REG_60 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp5_REG_60) @[elegant.scala 545:49]
    reg pp5_REG_61 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp5_REG_61) @[elegant.scala 545:41]
    reg pp5_REG_62 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp5_REG_62) @[elegant.scala 545:33]
    reg pp5_REG_63 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp5_REG_63) @[elegant.scala 545:25]
    node _pp6_T_60 = bits(multiplierReg_15, 3, 2) @[elegant.scala 546:72]
    node _pp6_T_61 = bits(multiplierReg2_15, 5, 4) @[elegant.scala 546:94]
    node _pp6_T_62 = mul(_pp6_T_60, _pp6_T_61) @[elegant.scala 546:78]
    node _pp6_T_63 = dshl(_pp6_T_62, UInt<3>("h6")) @[elegant.scala 546:101]
    reg pp6_REG_75 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp6_REG_75) @[elegant.scala 546:57]
    reg pp6_REG_76 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp6_REG_76) @[elegant.scala 546:49]
    reg pp6_REG_77 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp6_REG_77) @[elegant.scala 546:41]
    reg pp6_REG_78 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp6_REG_78) @[elegant.scala 546:33]
    reg pp6_REG_79 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp6_REG_79) @[elegant.scala 546:25]
    node _pp7_T_60 = bits(multiplierReg_15, 5, 4) @[elegant.scala 547:80]
    node _pp7_T_61 = bits(multiplierReg2_15, 1, 0) @[elegant.scala 547:102]
    node _pp7_T_62 = mul(_pp7_T_60, _pp7_T_61) @[elegant.scala 547:86]
    node _pp7_T_63 = dshl(_pp7_T_62, UInt<3>("h4")) @[elegant.scala 547:109]
    reg pp7_REG_90 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_90) @[elegant.scala 547:65]
    reg pp7_REG_91 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_91) @[elegant.scala 547:57]
    reg pp7_REG_92 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_92) @[elegant.scala 547:49]
    reg pp7_REG_93 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_93) @[elegant.scala 547:41]
    reg pp7_REG_94 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_94) @[elegant.scala 547:33]
    reg pp7_REG_95 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp7_REG_95) @[elegant.scala 547:25]
    node _pp8_T_60 = bits(multiplierReg_15, 5, 4) @[elegant.scala 548:88]
    node _pp8_T_61 = bits(multiplierReg2_15, 3, 2) @[elegant.scala 548:110]
    node _pp8_T_62 = mul(_pp8_T_60, _pp8_T_61) @[elegant.scala 548:94]
    node _pp8_T_63 = dshl(_pp8_T_62, UInt<3>("h6")) @[elegant.scala 548:117]
    reg pp8_REG_105 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_105) @[elegant.scala 548:73]
    reg pp8_REG_106 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_106) @[elegant.scala 548:65]
    reg pp8_REG_107 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_107) @[elegant.scala 548:57]
    reg pp8_REG_108 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_108) @[elegant.scala 548:49]
    reg pp8_REG_109 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_109) @[elegant.scala 548:41]
    reg pp8_REG_110 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_110) @[elegant.scala 548:33]
    reg pp8_REG_111 : UInt<11>, clock with :
      reset => (UInt<1>("h0"), pp8_REG_111) @[elegant.scala 548:25]
    node _dotProductRegs_15_T = add(pp1_15, pp2_15) @[elegant.scala 549:36]
    node _dotProductRegs_15_T_1 = add(_dotProductRegs_15_T, pp3_15) @[elegant.scala 549:43]
    node _dotProductRegs_15_T_2 = add(_dotProductRegs_15_T_1, pp4_15) @[elegant.scala 549:50]
    node _dotProductRegs_15_T_3 = add(_dotProductRegs_15_T_2, pp5_15) @[elegant.scala 549:57]
    node _dotProductRegs_15_T_4 = add(_dotProductRegs_15_T_3, pp6_15) @[elegant.scala 549:64]
    node _dotProductRegs_15_T_5 = add(_dotProductRegs_15_T_4, pp7_15) @[elegant.scala 549:71]
    node _dotProductRegs_15_T_6 = add(_dotProductRegs_15_T_5, pp8_15) @[elegant.scala 549:78]
    node _dotProductRegs_15_T_7 = bits(multiplierReg_15, 5, 4) @[elegant.scala 549:166]
    node _dotProductRegs_15_T_8 = bits(multiplierReg2_15, 5, 4) @[elegant.scala 549:188]
    node _dotProductRegs_15_T_9 = mul(_dotProductRegs_15_T_7, _dotProductRegs_15_T_8) @[elegant.scala 549:172]
    node _dotProductRegs_15_T_10 = dshl(_dotProductRegs_15_T_9, UInt<4>("h8")) @[elegant.scala 549:195]
    reg dotProductRegs_15_REG : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_15_REG) @[elegant.scala 549:151]
    reg dotProductRegs_15_REG_1 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_15_REG_1) @[elegant.scala 549:143]
    reg dotProductRegs_15_REG_2 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_15_REG_2) @[elegant.scala 549:135]
    reg dotProductRegs_15_REG_3 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_15_REG_3) @[elegant.scala 549:127]
    reg dotProductRegs_15_REG_4 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_15_REG_4) @[elegant.scala 549:119]
    reg dotProductRegs_15_REG_5 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_15_REG_5) @[elegant.scala 549:111]
    reg dotProductRegs_15_REG_6 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_15_REG_6) @[elegant.scala 549:103]
    reg dotProductRegs_15_REG_7 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_15_REG_7) @[elegant.scala 549:95]
    node _dotProductRegs_15_T_11 = add(_dotProductRegs_15_T_6, dotProductRegs_15_REG_7) @[elegant.scala 549:85]
    node _signs_15_T = xor(signReg_15, io_in_b_sign_15) @[elegant.scala 552:27]
    node _two_complement_15_T = eq(signs_15, UInt<1>("h1")) @[elegant.scala 553:40]
    node _two_complement_15_T_1 = cat(UInt<1>("h0"), dotProductRegs_15) @[elegant.scala 553:55]
    node _two_complement_15_T_2 = not(_two_complement_15_T_1) @[elegant.scala 553:49]
    node _two_complement_15_T_3 = add(_two_complement_15_T_2, UInt<1>("h1")) @[elegant.scala 553:77]
    node _two_complement_15_T_4 = tail(_two_complement_15_T_3, 1) @[elegant.scala 553:77]
    node _two_complement_15_T_5 = cat(UInt<1>("h0"), dotProductRegs_15) @[elegant.scala 553:90]
    node _two_complement_15_T_6 = mux(_two_complement_15_T, _two_complement_15_T_4, _two_complement_15_T_5) @[elegant.scala 553:31]
    node _two_complement_buffer_15_T = asSInt(two_complement_15) @[elegant.scala 554:53]
    node _acc_T = add(two_complement_buffer_0, two_complement_buffer_1) @[elegant.scala 581:40]
    node _acc_T_1 = add(_acc_T, two_complement_buffer_2) @[elegant.scala 581:40]
    node _acc_T_2 = add(_acc_T_1, two_complement_buffer_3) @[elegant.scala 581:40]
    node _acc_T_3 = add(_acc_T_2, two_complement_buffer_4) @[elegant.scala 581:40]
    node _acc_T_4 = add(_acc_T_3, two_complement_buffer_5) @[elegant.scala 581:40]
    node _acc_T_5 = add(_acc_T_4, two_complement_buffer_6) @[elegant.scala 581:40]
    node _acc_T_6 = add(_acc_T_5, two_complement_buffer_7) @[elegant.scala 581:40]
    node _acc_T_7 = add(_acc_T_6, two_complement_buffer_8) @[elegant.scala 581:40]
    node _acc_T_8 = add(_acc_T_7, two_complement_buffer_9) @[elegant.scala 581:40]
    node _acc_T_9 = add(_acc_T_8, two_complement_buffer_10) @[elegant.scala 581:40]
    node _acc_T_10 = add(_acc_T_9, two_complement_buffer_11) @[elegant.scala 581:40]
    node _acc_T_11 = add(_acc_T_10, two_complement_buffer_12) @[elegant.scala 581:40]
    node _acc_T_12 = add(_acc_T_11, two_complement_buffer_13) @[elegant.scala 581:40]
    node _acc_T_13 = add(_acc_T_12, two_complement_buffer_14) @[elegant.scala 581:40]
    node _acc_T_14 = add(_acc_T_13, two_complement_buffer_15) @[elegant.scala 581:40]
    node _acc_buf_T = asUInt(acc) @[elegant.scala 582:18]
    node _acc_hbfp_T = bits(acc_buf, 27, 27) @[elegant.scala 584:26]
    node _acc_hbfp_T_1 = eq(_acc_hbfp_T, UInt<1>("h1")) @[elegant.scala 584:43]
    node _acc_hbfp_T_2 = bits(acc_buf, 26, 0) @[elegant.scala 584:67]
    node _acc_hbfp_T_3 = cat(UInt<1>("h0"), _acc_hbfp_T_2) @[elegant.scala 584:57]
    node _acc_hbfp_T_4 = not(_acc_hbfp_T_3) @[elegant.scala 584:51]
    node _acc_hbfp_T_5 = add(_acc_hbfp_T_4, UInt<1>("h1")) @[elegant.scala 584:89]
    node _acc_hbfp_T_6 = tail(_acc_hbfp_T_5, 1) @[elegant.scala 584:89]
    node _acc_hbfp_T_7 = mux(_acc_hbfp_T_1, _acc_hbfp_T_6, acc_buf) @[elegant.scala 584:18]
    reg right_shift : UInt<8>, clock with :
      reset => (UInt<1>("h0"), right_shift) @[elegant.scala 585:28]
    reg actual_shift : UInt<8>, clock with :
      reset => (UInt<1>("h0"), actual_shift) @[elegant.scala 586:29]
    node _buf_T = bits(acc_hbfp, 26, 6) @[elegant.scala 587:36]
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
    node _buf_T_41 = bits(_buf_T, 20, 16) @[Bitwise.scala 114:47]
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
    node _buf_T_52 = bits(_buf_T_41, 4, 4) @[Bitwise.scala 114:47]
    node _buf_T_53 = cat(_buf_T_51, _buf_T_52) @[Cat.scala 33:92]
    node _buf_T_54 = cat(_buf_T_40, _buf_T_53) @[Cat.scala 33:92]
    node buf = cat(UInt<1>("h0"), _buf_T_54) @[elegant.scala 587:17]
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
    node _right_shift_T_22 = mux(_right_shift_T_20, UInt<5>("h14"), UInt<5>("h15")) @[Mux.scala 47:70]
    node _right_shift_T_23 = mux(_right_shift_T_19, UInt<5>("h13"), _right_shift_T_22) @[Mux.scala 47:70]
    node _right_shift_T_24 = mux(_right_shift_T_18, UInt<5>("h12"), _right_shift_T_23) @[Mux.scala 47:70]
    node _right_shift_T_25 = mux(_right_shift_T_17, UInt<5>("h11"), _right_shift_T_24) @[Mux.scala 47:70]
    node _right_shift_T_26 = mux(_right_shift_T_16, UInt<5>("h10"), _right_shift_T_25) @[Mux.scala 47:70]
    node _right_shift_T_27 = mux(_right_shift_T_15, UInt<4>("hf"), _right_shift_T_26) @[Mux.scala 47:70]
    node _right_shift_T_28 = mux(_right_shift_T_14, UInt<4>("he"), _right_shift_T_27) @[Mux.scala 47:70]
    node _right_shift_T_29 = mux(_right_shift_T_13, UInt<4>("hd"), _right_shift_T_28) @[Mux.scala 47:70]
    node _right_shift_T_30 = mux(_right_shift_T_12, UInt<4>("hc"), _right_shift_T_29) @[Mux.scala 47:70]
    node _right_shift_T_31 = mux(_right_shift_T_11, UInt<4>("hb"), _right_shift_T_30) @[Mux.scala 47:70]
    node _right_shift_T_32 = mux(_right_shift_T_10, UInt<4>("ha"), _right_shift_T_31) @[Mux.scala 47:70]
    node _right_shift_T_33 = mux(_right_shift_T_9, UInt<4>("h9"), _right_shift_T_32) @[Mux.scala 47:70]
    node _right_shift_T_34 = mux(_right_shift_T_8, UInt<4>("h8"), _right_shift_T_33) @[Mux.scala 47:70]
    node _right_shift_T_35 = mux(_right_shift_T_7, UInt<3>("h7"), _right_shift_T_34) @[Mux.scala 47:70]
    node _right_shift_T_36 = mux(_right_shift_T_6, UInt<3>("h6"), _right_shift_T_35) @[Mux.scala 47:70]
    node _right_shift_T_37 = mux(_right_shift_T_5, UInt<3>("h5"), _right_shift_T_36) @[Mux.scala 47:70]
    node _right_shift_T_38 = mux(_right_shift_T_4, UInt<3>("h4"), _right_shift_T_37) @[Mux.scala 47:70]
    node _right_shift_T_39 = mux(_right_shift_T_3, UInt<2>("h3"), _right_shift_T_38) @[Mux.scala 47:70]
    node _right_shift_T_40 = mux(_right_shift_T_2, UInt<2>("h2"), _right_shift_T_39) @[Mux.scala 47:70]
    node _right_shift_T_41 = mux(_right_shift_T_1, UInt<1>("h1"), _right_shift_T_40) @[Mux.scala 47:70]
    node _right_shift_T_42 = mux(_right_shift_T, UInt<1>("h0"), _right_shift_T_41) @[Mux.scala 47:70]
    node _actual_shift_T = sub(UInt<5>("h1a"), right_shift) @[elegant.scala 591:44]
    node _actual_shift_T_1 = tail(_actual_shift_T, 1) @[elegant.scala 591:44]
    node _actual_shift_T_2 = sub(_actual_shift_T_1, UInt<3>("h5")) @[elegant.scala 591:58]
    node _actual_shift_T_3 = tail(_actual_shift_T_2, 1) @[elegant.scala 591:58]
    node man_out_shifted = dshr(acc_hbfp, actual_shift) @[elegant.scala 593:34]
    node exp_output = _exp_output_T @[elegant.scala 510:24 511:14]
    node _exp_actual_T = add(exp_output, actual_shift) @[elegant.scala 595:28]
    node _io_result_T = bits(acc, 27, 27) @[elegant.scala 597:19]
    node exp_actual = _exp_actual_T @[elegant.scala 594:24 595:14]
    node _io_result_T_1 = bits(exp_actual, 9, 2) @[elegant.scala 597:57]
    node _io_result_T_2 = cat(_io_result_T, _io_result_T_1) @[elegant.scala 597:44]
    node _io_result_T_3 = bits(man_out_shifted, 5, 0) @[elegant.scala 597:83]
    node _io_result_T_4 = cat(_io_result_T_2, _io_result_T_3) @[elegant.scala 597:65]
    io_result <= _io_result_T_4 @[elegant.scala 597:13]
    dotProductRegs_0 <= bits(mux(reset, UInt<12>("h0"), _dotProductRegs_0_T_11), 11, 0) @[elegant.scala 513:{51,51} 549:29]
    dotProductRegs_1 <= bits(mux(reset, UInt<12>("h0"), _dotProductRegs_1_T_11), 11, 0) @[elegant.scala 513:{51,51} 549:29]
    dotProductRegs_2 <= bits(mux(reset, UInt<12>("h0"), _dotProductRegs_2_T_11), 11, 0) @[elegant.scala 513:{51,51} 549:29]
    dotProductRegs_3 <= bits(mux(reset, UInt<12>("h0"), _dotProductRegs_3_T_11), 11, 0) @[elegant.scala 513:{51,51} 549:29]
    dotProductRegs_4 <= bits(mux(reset, UInt<12>("h0"), _dotProductRegs_4_T_11), 11, 0) @[elegant.scala 513:{51,51} 549:29]
    dotProductRegs_5 <= bits(mux(reset, UInt<12>("h0"), _dotProductRegs_5_T_11), 11, 0) @[elegant.scala 513:{51,51} 549:29]
    dotProductRegs_6 <= bits(mux(reset, UInt<12>("h0"), _dotProductRegs_6_T_11), 11, 0) @[elegant.scala 513:{51,51} 549:29]
    dotProductRegs_7 <= bits(mux(reset, UInt<12>("h0"), _dotProductRegs_7_T_11), 11, 0) @[elegant.scala 513:{51,51} 549:29]
    dotProductRegs_8 <= bits(mux(reset, UInt<12>("h0"), _dotProductRegs_8_T_11), 11, 0) @[elegant.scala 513:{51,51} 549:29]
    dotProductRegs_9 <= bits(mux(reset, UInt<12>("h0"), _dotProductRegs_9_T_11), 11, 0) @[elegant.scala 513:{51,51} 549:29]
    dotProductRegs_10 <= bits(mux(reset, UInt<12>("h0"), _dotProductRegs_10_T_11), 11, 0) @[elegant.scala 513:{51,51} 549:29]
    dotProductRegs_11 <= bits(mux(reset, UInt<12>("h0"), _dotProductRegs_11_T_11), 11, 0) @[elegant.scala 513:{51,51} 549:29]
    dotProductRegs_12 <= bits(mux(reset, UInt<12>("h0"), _dotProductRegs_12_T_11), 11, 0) @[elegant.scala 513:{51,51} 549:29]
    dotProductRegs_13 <= bits(mux(reset, UInt<12>("h0"), _dotProductRegs_13_T_11), 11, 0) @[elegant.scala 513:{51,51} 549:29]
    dotProductRegs_14 <= bits(mux(reset, UInt<12>("h0"), _dotProductRegs_14_T_11), 11, 0) @[elegant.scala 513:{51,51} 549:29]
    dotProductRegs_15 <= bits(mux(reset, UInt<12>("h0"), _dotProductRegs_15_T_11), 11, 0) @[elegant.scala 513:{51,51} 549:29]
    two_complement_buffer_0 <= mux(reset, asSInt(UInt<13>("h0")), _two_complement_buffer_0_T) @[elegant.scala 514:{58,58} 554:32]
    two_complement_buffer_1 <= mux(reset, asSInt(UInt<13>("h0")), _two_complement_buffer_1_T) @[elegant.scala 514:{58,58} 554:32]
    two_complement_buffer_2 <= mux(reset, asSInt(UInt<13>("h0")), _two_complement_buffer_2_T) @[elegant.scala 514:{58,58} 554:32]
    two_complement_buffer_3 <= mux(reset, asSInt(UInt<13>("h0")), _two_complement_buffer_3_T) @[elegant.scala 514:{58,58} 554:32]
    two_complement_buffer_4 <= mux(reset, asSInt(UInt<13>("h0")), _two_complement_buffer_4_T) @[elegant.scala 514:{58,58} 554:32]
    two_complement_buffer_5 <= mux(reset, asSInt(UInt<13>("h0")), _two_complement_buffer_5_T) @[elegant.scala 514:{58,58} 554:32]
    two_complement_buffer_6 <= mux(reset, asSInt(UInt<13>("h0")), _two_complement_buffer_6_T) @[elegant.scala 514:{58,58} 554:32]
    two_complement_buffer_7 <= mux(reset, asSInt(UInt<13>("h0")), _two_complement_buffer_7_T) @[elegant.scala 514:{58,58} 554:32]
    two_complement_buffer_8 <= mux(reset, asSInt(UInt<13>("h0")), _two_complement_buffer_8_T) @[elegant.scala 514:{58,58} 554:32]
    two_complement_buffer_9 <= mux(reset, asSInt(UInt<13>("h0")), _two_complement_buffer_9_T) @[elegant.scala 514:{58,58} 554:32]
    two_complement_buffer_10 <= mux(reset, asSInt(UInt<13>("h0")), _two_complement_buffer_10_T) @[elegant.scala 514:{58,58} 554:32]
    two_complement_buffer_11 <= mux(reset, asSInt(UInt<13>("h0")), _two_complement_buffer_11_T) @[elegant.scala 514:{58,58} 554:32]
    two_complement_buffer_12 <= mux(reset, asSInt(UInt<13>("h0")), _two_complement_buffer_12_T) @[elegant.scala 514:{58,58} 554:32]
    two_complement_buffer_13 <= mux(reset, asSInt(UInt<13>("h0")), _two_complement_buffer_13_T) @[elegant.scala 514:{58,58} 554:32]
    two_complement_buffer_14 <= mux(reset, asSInt(UInt<13>("h0")), _two_complement_buffer_14_T) @[elegant.scala 514:{58,58} 554:32]
    two_complement_buffer_15 <= mux(reset, asSInt(UInt<13>("h0")), _two_complement_buffer_15_T) @[elegant.scala 514:{58,58} 554:32]
    two_complement_0 <= mux(reset, UInt<13>("h0"), _two_complement_0_T_6) @[elegant.scala 515:{51,51} 553:25]
    two_complement_1 <= mux(reset, UInt<13>("h0"), _two_complement_1_T_6) @[elegant.scala 515:{51,51} 553:25]
    two_complement_2 <= mux(reset, UInt<13>("h0"), _two_complement_2_T_6) @[elegant.scala 515:{51,51} 553:25]
    two_complement_3 <= mux(reset, UInt<13>("h0"), _two_complement_3_T_6) @[elegant.scala 515:{51,51} 553:25]
    two_complement_4 <= mux(reset, UInt<13>("h0"), _two_complement_4_T_6) @[elegant.scala 515:{51,51} 553:25]
    two_complement_5 <= mux(reset, UInt<13>("h0"), _two_complement_5_T_6) @[elegant.scala 515:{51,51} 553:25]
    two_complement_6 <= mux(reset, UInt<13>("h0"), _two_complement_6_T_6) @[elegant.scala 515:{51,51} 553:25]
    two_complement_7 <= mux(reset, UInt<13>("h0"), _two_complement_7_T_6) @[elegant.scala 515:{51,51} 553:25]
    two_complement_8 <= mux(reset, UInt<13>("h0"), _two_complement_8_T_6) @[elegant.scala 515:{51,51} 553:25]
    two_complement_9 <= mux(reset, UInt<13>("h0"), _two_complement_9_T_6) @[elegant.scala 515:{51,51} 553:25]
    two_complement_10 <= mux(reset, UInt<13>("h0"), _two_complement_10_T_6) @[elegant.scala 515:{51,51} 553:25]
    two_complement_11 <= mux(reset, UInt<13>("h0"), _two_complement_11_T_6) @[elegant.scala 515:{51,51} 553:25]
    two_complement_12 <= mux(reset, UInt<13>("h0"), _two_complement_12_T_6) @[elegant.scala 515:{51,51} 553:25]
    two_complement_13 <= mux(reset, UInt<13>("h0"), _two_complement_13_T_6) @[elegant.scala 515:{51,51} 553:25]
    two_complement_14 <= mux(reset, UInt<13>("h0"), _two_complement_14_T_6) @[elegant.scala 515:{51,51} 553:25]
    two_complement_15 <= mux(reset, UInt<13>("h0"), _two_complement_15_T_6) @[elegant.scala 515:{51,51} 553:25]
    signs_0 <= mux(reset, UInt<1>("h0"), _signs_0_T) @[elegant.scala 516:{42,42} 552:16]
    signs_1 <= mux(reset, UInt<1>("h0"), _signs_1_T) @[elegant.scala 516:{42,42} 552:16]
    signs_2 <= mux(reset, UInt<1>("h0"), _signs_2_T) @[elegant.scala 516:{42,42} 552:16]
    signs_3 <= mux(reset, UInt<1>("h0"), _signs_3_T) @[elegant.scala 516:{42,42} 552:16]
    signs_4 <= mux(reset, UInt<1>("h0"), _signs_4_T) @[elegant.scala 516:{42,42} 552:16]
    signs_5 <= mux(reset, UInt<1>("h0"), _signs_5_T) @[elegant.scala 516:{42,42} 552:16]
    signs_6 <= mux(reset, UInt<1>("h0"), _signs_6_T) @[elegant.scala 516:{42,42} 552:16]
    signs_7 <= mux(reset, UInt<1>("h0"), _signs_7_T) @[elegant.scala 516:{42,42} 552:16]
    signs_8 <= mux(reset, UInt<1>("h0"), _signs_8_T) @[elegant.scala 516:{42,42} 552:16]
    signs_9 <= mux(reset, UInt<1>("h0"), _signs_9_T) @[elegant.scala 516:{42,42} 552:16]
    signs_10 <= mux(reset, UInt<1>("h0"), _signs_10_T) @[elegant.scala 516:{42,42} 552:16]
    signs_11 <= mux(reset, UInt<1>("h0"), _signs_11_T) @[elegant.scala 516:{42,42} 552:16]
    signs_12 <= mux(reset, UInt<1>("h0"), _signs_12_T) @[elegant.scala 516:{42,42} 552:16]
    signs_13 <= mux(reset, UInt<1>("h0"), _signs_13_T) @[elegant.scala 516:{42,42} 552:16]
    signs_14 <= mux(reset, UInt<1>("h0"), _signs_14_T) @[elegant.scala 516:{42,42} 552:16]
    signs_15 <= mux(reset, UInt<1>("h0"), _signs_15_T) @[elegant.scala 516:{42,42} 552:16]
    acc <= mux(reset, asSInt(UInt<28>("h0")), _acc_T_14) @[elegant.scala 517:{20,20} 581:7]
    acc_hbfp <= mux(reset, UInt<28>("h0"), _acc_hbfp_T_7) @[elegant.scala 518:{25,25} 584:12]
    acc_buf <= mux(reset, UInt<28>("h0"), _acc_buf_T) @[elegant.scala 519:{24,24} 582:11]
    multiplierReg <= mux(reset, UInt<6>("h0"), io_in_a_man_0) @[elegant.scala 524:{34,34} 538:21]
    multiplierReg2 <= mux(reset, UInt<6>("h0"), io_in_b_man_0) @[elegant.scala 525:{35,35} 539:22]
    signReg <= mux(reset, UInt<1>("h0"), io_in_a_sign_0) @[elegant.scala 527:{28,28} 537:15]
    pp1 <= mux(reset, UInt<12>("h0"), _pp1_T_2) @[elegant.scala 528:{24,24} 541:15]
    pp2 <= mux(reset, UInt<12>("h0"), pp2_REG) @[elegant.scala 529:{24,24} 542:15]
    pp3 <= mux(reset, UInt<12>("h0"), pp3_REG_1) @[elegant.scala 530:{24,24} 543:15]
    pp4 <= mux(reset, UInt<12>("h0"), pp4_REG_2) @[elegant.scala 531:{24,24} 544:15]
    pp5 <= mux(reset, UInt<12>("h0"), pp5_REG_3) @[elegant.scala 532:{24,24} 545:15]
    pp6 <= mux(reset, UInt<12>("h0"), pp6_REG_4) @[elegant.scala 533:{24,24} 546:15]
    pp7 <= mux(reset, UInt<12>("h0"), pp7_REG_5) @[elegant.scala 534:{24,24} 547:15]
    pp8 <= mux(reset, UInt<12>("h0"), pp8_REG_6) @[elegant.scala 535:{24,24} 548:15]
    pp9 <= mux(reset, UInt<12>("h0"), pp9) @[elegant.scala 536:{24,24,24}]
    pp2_REG <= _pp2_T_3 @[elegant.scala 542:25]
    pp3_REG <= _pp3_T_3 @[elegant.scala 543:33]
    pp3_REG_1 <= pp3_REG @[elegant.scala 543:25]
    pp4_REG <= _pp4_T_3 @[elegant.scala 544:41]
    pp4_REG_1 <= pp4_REG @[elegant.scala 544:33]
    pp4_REG_2 <= pp4_REG_1 @[elegant.scala 544:25]
    pp5_REG <= _pp5_T_3 @[elegant.scala 545:49]
    pp5_REG_1 <= pp5_REG @[elegant.scala 545:41]
    pp5_REG_2 <= pp5_REG_1 @[elegant.scala 545:33]
    pp5_REG_3 <= pp5_REG_2 @[elegant.scala 545:25]
    pp6_REG <= _pp6_T_3 @[elegant.scala 546:57]
    pp6_REG_1 <= pp6_REG @[elegant.scala 546:49]
    pp6_REG_2 <= pp6_REG_1 @[elegant.scala 546:41]
    pp6_REG_3 <= pp6_REG_2 @[elegant.scala 546:33]
    pp6_REG_4 <= pp6_REG_3 @[elegant.scala 546:25]
    pp7_REG <= _pp7_T_3 @[elegant.scala 547:65]
    pp7_REG_1 <= pp7_REG @[elegant.scala 547:57]
    pp7_REG_2 <= pp7_REG_1 @[elegant.scala 547:49]
    pp7_REG_3 <= pp7_REG_2 @[elegant.scala 547:41]
    pp7_REG_4 <= pp7_REG_3 @[elegant.scala 547:33]
    pp7_REG_5 <= pp7_REG_4 @[elegant.scala 547:25]
    pp8_REG <= _pp8_T_3 @[elegant.scala 548:73]
    pp8_REG_1 <= pp8_REG @[elegant.scala 548:65]
    pp8_REG_2 <= pp8_REG_1 @[elegant.scala 548:57]
    pp8_REG_3 <= pp8_REG_2 @[elegant.scala 548:49]
    pp8_REG_4 <= pp8_REG_3 @[elegant.scala 548:41]
    pp8_REG_5 <= pp8_REG_4 @[elegant.scala 548:33]
    pp8_REG_6 <= pp8_REG_5 @[elegant.scala 548:25]
    dotProductRegs_0_REG <= _dotProductRegs_0_T_10 @[elegant.scala 549:151]
    dotProductRegs_0_REG_1 <= dotProductRegs_0_REG @[elegant.scala 549:143]
    dotProductRegs_0_REG_2 <= dotProductRegs_0_REG_1 @[elegant.scala 549:135]
    dotProductRegs_0_REG_3 <= dotProductRegs_0_REG_2 @[elegant.scala 549:127]
    dotProductRegs_0_REG_4 <= dotProductRegs_0_REG_3 @[elegant.scala 549:119]
    dotProductRegs_0_REG_5 <= dotProductRegs_0_REG_4 @[elegant.scala 549:111]
    dotProductRegs_0_REG_6 <= dotProductRegs_0_REG_5 @[elegant.scala 549:103]
    dotProductRegs_0_REG_7 <= dotProductRegs_0_REG_6 @[elegant.scala 549:95]
    multiplierReg_1 <= mux(reset, UInt<6>("h0"), io_in_a_man_1) @[elegant.scala 524:{34,34} 538:21]
    multiplierReg2_1 <= mux(reset, UInt<6>("h0"), io_in_b_man_1) @[elegant.scala 525:{35,35} 539:22]
    signReg_1 <= mux(reset, UInt<1>("h0"), io_in_a_sign_1) @[elegant.scala 527:{28,28} 537:15]
    pp1_1 <= mux(reset, UInt<12>("h0"), _pp1_T_5) @[elegant.scala 528:{24,24} 541:15]
    pp2_1 <= mux(reset, UInt<12>("h0"), pp2_REG_1) @[elegant.scala 529:{24,24} 542:15]
    pp3_1 <= mux(reset, UInt<12>("h0"), pp3_REG_3) @[elegant.scala 530:{24,24} 543:15]
    pp4_1 <= mux(reset, UInt<12>("h0"), pp4_REG_5) @[elegant.scala 531:{24,24} 544:15]
    pp5_1 <= mux(reset, UInt<12>("h0"), pp5_REG_7) @[elegant.scala 532:{24,24} 545:15]
    pp6_1 <= mux(reset, UInt<12>("h0"), pp6_REG_9) @[elegant.scala 533:{24,24} 546:15]
    pp7_1 <= mux(reset, UInt<12>("h0"), pp7_REG_11) @[elegant.scala 534:{24,24} 547:15]
    pp8_1 <= mux(reset, UInt<12>("h0"), pp8_REG_13) @[elegant.scala 535:{24,24} 548:15]
    pp9_1 <= mux(reset, UInt<12>("h0"), pp9_1) @[elegant.scala 536:{24,24,24}]
    pp2_REG_1 <= _pp2_T_7 @[elegant.scala 542:25]
    pp3_REG_2 <= _pp3_T_7 @[elegant.scala 543:33]
    pp3_REG_3 <= pp3_REG_2 @[elegant.scala 543:25]
    pp4_REG_3 <= _pp4_T_7 @[elegant.scala 544:41]
    pp4_REG_4 <= pp4_REG_3 @[elegant.scala 544:33]
    pp4_REG_5 <= pp4_REG_4 @[elegant.scala 544:25]
    pp5_REG_4 <= _pp5_T_7 @[elegant.scala 545:49]
    pp5_REG_5 <= pp5_REG_4 @[elegant.scala 545:41]
    pp5_REG_6 <= pp5_REG_5 @[elegant.scala 545:33]
    pp5_REG_7 <= pp5_REG_6 @[elegant.scala 545:25]
    pp6_REG_5 <= _pp6_T_7 @[elegant.scala 546:57]
    pp6_REG_6 <= pp6_REG_5 @[elegant.scala 546:49]
    pp6_REG_7 <= pp6_REG_6 @[elegant.scala 546:41]
    pp6_REG_8 <= pp6_REG_7 @[elegant.scala 546:33]
    pp6_REG_9 <= pp6_REG_8 @[elegant.scala 546:25]
    pp7_REG_6 <= _pp7_T_7 @[elegant.scala 547:65]
    pp7_REG_7 <= pp7_REG_6 @[elegant.scala 547:57]
    pp7_REG_8 <= pp7_REG_7 @[elegant.scala 547:49]
    pp7_REG_9 <= pp7_REG_8 @[elegant.scala 547:41]
    pp7_REG_10 <= pp7_REG_9 @[elegant.scala 547:33]
    pp7_REG_11 <= pp7_REG_10 @[elegant.scala 547:25]
    pp8_REG_7 <= _pp8_T_7 @[elegant.scala 548:73]
    pp8_REG_8 <= pp8_REG_7 @[elegant.scala 548:65]
    pp8_REG_9 <= pp8_REG_8 @[elegant.scala 548:57]
    pp8_REG_10 <= pp8_REG_9 @[elegant.scala 548:49]
    pp8_REG_11 <= pp8_REG_10 @[elegant.scala 548:41]
    pp8_REG_12 <= pp8_REG_11 @[elegant.scala 548:33]
    pp8_REG_13 <= pp8_REG_12 @[elegant.scala 548:25]
    dotProductRegs_1_REG <= _dotProductRegs_1_T_10 @[elegant.scala 549:151]
    dotProductRegs_1_REG_1 <= dotProductRegs_1_REG @[elegant.scala 549:143]
    dotProductRegs_1_REG_2 <= dotProductRegs_1_REG_1 @[elegant.scala 549:135]
    dotProductRegs_1_REG_3 <= dotProductRegs_1_REG_2 @[elegant.scala 549:127]
    dotProductRegs_1_REG_4 <= dotProductRegs_1_REG_3 @[elegant.scala 549:119]
    dotProductRegs_1_REG_5 <= dotProductRegs_1_REG_4 @[elegant.scala 549:111]
    dotProductRegs_1_REG_6 <= dotProductRegs_1_REG_5 @[elegant.scala 549:103]
    dotProductRegs_1_REG_7 <= dotProductRegs_1_REG_6 @[elegant.scala 549:95]
    multiplierReg_2 <= mux(reset, UInt<6>("h0"), io_in_a_man_2) @[elegant.scala 524:{34,34} 538:21]
    multiplierReg2_2 <= mux(reset, UInt<6>("h0"), io_in_b_man_2) @[elegant.scala 525:{35,35} 539:22]
    signReg_2 <= mux(reset, UInt<1>("h0"), io_in_a_sign_2) @[elegant.scala 527:{28,28} 537:15]
    pp1_2 <= mux(reset, UInt<12>("h0"), _pp1_T_8) @[elegant.scala 528:{24,24} 541:15]
    pp2_2 <= mux(reset, UInt<12>("h0"), pp2_REG_2) @[elegant.scala 529:{24,24} 542:15]
    pp3_2 <= mux(reset, UInt<12>("h0"), pp3_REG_5) @[elegant.scala 530:{24,24} 543:15]
    pp4_2 <= mux(reset, UInt<12>("h0"), pp4_REG_8) @[elegant.scala 531:{24,24} 544:15]
    pp5_2 <= mux(reset, UInt<12>("h0"), pp5_REG_11) @[elegant.scala 532:{24,24} 545:15]
    pp6_2 <= mux(reset, UInt<12>("h0"), pp6_REG_14) @[elegant.scala 533:{24,24} 546:15]
    pp7_2 <= mux(reset, UInt<12>("h0"), pp7_REG_17) @[elegant.scala 534:{24,24} 547:15]
    pp8_2 <= mux(reset, UInt<12>("h0"), pp8_REG_20) @[elegant.scala 535:{24,24} 548:15]
    pp9_2 <= mux(reset, UInt<12>("h0"), pp9_2) @[elegant.scala 536:{24,24,24}]
    pp2_REG_2 <= _pp2_T_11 @[elegant.scala 542:25]
    pp3_REG_4 <= _pp3_T_11 @[elegant.scala 543:33]
    pp3_REG_5 <= pp3_REG_4 @[elegant.scala 543:25]
    pp4_REG_6 <= _pp4_T_11 @[elegant.scala 544:41]
    pp4_REG_7 <= pp4_REG_6 @[elegant.scala 544:33]
    pp4_REG_8 <= pp4_REG_7 @[elegant.scala 544:25]
    pp5_REG_8 <= _pp5_T_11 @[elegant.scala 545:49]
    pp5_REG_9 <= pp5_REG_8 @[elegant.scala 545:41]
    pp5_REG_10 <= pp5_REG_9 @[elegant.scala 545:33]
    pp5_REG_11 <= pp5_REG_10 @[elegant.scala 545:25]
    pp6_REG_10 <= _pp6_T_11 @[elegant.scala 546:57]
    pp6_REG_11 <= pp6_REG_10 @[elegant.scala 546:49]
    pp6_REG_12 <= pp6_REG_11 @[elegant.scala 546:41]
    pp6_REG_13 <= pp6_REG_12 @[elegant.scala 546:33]
    pp6_REG_14 <= pp6_REG_13 @[elegant.scala 546:25]
    pp7_REG_12 <= _pp7_T_11 @[elegant.scala 547:65]
    pp7_REG_13 <= pp7_REG_12 @[elegant.scala 547:57]
    pp7_REG_14 <= pp7_REG_13 @[elegant.scala 547:49]
    pp7_REG_15 <= pp7_REG_14 @[elegant.scala 547:41]
    pp7_REG_16 <= pp7_REG_15 @[elegant.scala 547:33]
    pp7_REG_17 <= pp7_REG_16 @[elegant.scala 547:25]
    pp8_REG_14 <= _pp8_T_11 @[elegant.scala 548:73]
    pp8_REG_15 <= pp8_REG_14 @[elegant.scala 548:65]
    pp8_REG_16 <= pp8_REG_15 @[elegant.scala 548:57]
    pp8_REG_17 <= pp8_REG_16 @[elegant.scala 548:49]
    pp8_REG_18 <= pp8_REG_17 @[elegant.scala 548:41]
    pp8_REG_19 <= pp8_REG_18 @[elegant.scala 548:33]
    pp8_REG_20 <= pp8_REG_19 @[elegant.scala 548:25]
    dotProductRegs_2_REG <= _dotProductRegs_2_T_10 @[elegant.scala 549:151]
    dotProductRegs_2_REG_1 <= dotProductRegs_2_REG @[elegant.scala 549:143]
    dotProductRegs_2_REG_2 <= dotProductRegs_2_REG_1 @[elegant.scala 549:135]
    dotProductRegs_2_REG_3 <= dotProductRegs_2_REG_2 @[elegant.scala 549:127]
    dotProductRegs_2_REG_4 <= dotProductRegs_2_REG_3 @[elegant.scala 549:119]
    dotProductRegs_2_REG_5 <= dotProductRegs_2_REG_4 @[elegant.scala 549:111]
    dotProductRegs_2_REG_6 <= dotProductRegs_2_REG_5 @[elegant.scala 549:103]
    dotProductRegs_2_REG_7 <= dotProductRegs_2_REG_6 @[elegant.scala 549:95]
    multiplierReg_3 <= mux(reset, UInt<6>("h0"), io_in_a_man_3) @[elegant.scala 524:{34,34} 538:21]
    multiplierReg2_3 <= mux(reset, UInt<6>("h0"), io_in_b_man_3) @[elegant.scala 525:{35,35} 539:22]
    signReg_3 <= mux(reset, UInt<1>("h0"), io_in_a_sign_3) @[elegant.scala 527:{28,28} 537:15]
    pp1_3 <= mux(reset, UInt<12>("h0"), _pp1_T_11) @[elegant.scala 528:{24,24} 541:15]
    pp2_3 <= mux(reset, UInt<12>("h0"), pp2_REG_3) @[elegant.scala 529:{24,24} 542:15]
    pp3_3 <= mux(reset, UInt<12>("h0"), pp3_REG_7) @[elegant.scala 530:{24,24} 543:15]
    pp4_3 <= mux(reset, UInt<12>("h0"), pp4_REG_11) @[elegant.scala 531:{24,24} 544:15]
    pp5_3 <= mux(reset, UInt<12>("h0"), pp5_REG_15) @[elegant.scala 532:{24,24} 545:15]
    pp6_3 <= mux(reset, UInt<12>("h0"), pp6_REG_19) @[elegant.scala 533:{24,24} 546:15]
    pp7_3 <= mux(reset, UInt<12>("h0"), pp7_REG_23) @[elegant.scala 534:{24,24} 547:15]
    pp8_3 <= mux(reset, UInt<12>("h0"), pp8_REG_27) @[elegant.scala 535:{24,24} 548:15]
    pp9_3 <= mux(reset, UInt<12>("h0"), pp9_3) @[elegant.scala 536:{24,24,24}]
    pp2_REG_3 <= _pp2_T_15 @[elegant.scala 542:25]
    pp3_REG_6 <= _pp3_T_15 @[elegant.scala 543:33]
    pp3_REG_7 <= pp3_REG_6 @[elegant.scala 543:25]
    pp4_REG_9 <= _pp4_T_15 @[elegant.scala 544:41]
    pp4_REG_10 <= pp4_REG_9 @[elegant.scala 544:33]
    pp4_REG_11 <= pp4_REG_10 @[elegant.scala 544:25]
    pp5_REG_12 <= _pp5_T_15 @[elegant.scala 545:49]
    pp5_REG_13 <= pp5_REG_12 @[elegant.scala 545:41]
    pp5_REG_14 <= pp5_REG_13 @[elegant.scala 545:33]
    pp5_REG_15 <= pp5_REG_14 @[elegant.scala 545:25]
    pp6_REG_15 <= _pp6_T_15 @[elegant.scala 546:57]
    pp6_REG_16 <= pp6_REG_15 @[elegant.scala 546:49]
    pp6_REG_17 <= pp6_REG_16 @[elegant.scala 546:41]
    pp6_REG_18 <= pp6_REG_17 @[elegant.scala 546:33]
    pp6_REG_19 <= pp6_REG_18 @[elegant.scala 546:25]
    pp7_REG_18 <= _pp7_T_15 @[elegant.scala 547:65]
    pp7_REG_19 <= pp7_REG_18 @[elegant.scala 547:57]
    pp7_REG_20 <= pp7_REG_19 @[elegant.scala 547:49]
    pp7_REG_21 <= pp7_REG_20 @[elegant.scala 547:41]
    pp7_REG_22 <= pp7_REG_21 @[elegant.scala 547:33]
    pp7_REG_23 <= pp7_REG_22 @[elegant.scala 547:25]
    pp8_REG_21 <= _pp8_T_15 @[elegant.scala 548:73]
    pp8_REG_22 <= pp8_REG_21 @[elegant.scala 548:65]
    pp8_REG_23 <= pp8_REG_22 @[elegant.scala 548:57]
    pp8_REG_24 <= pp8_REG_23 @[elegant.scala 548:49]
    pp8_REG_25 <= pp8_REG_24 @[elegant.scala 548:41]
    pp8_REG_26 <= pp8_REG_25 @[elegant.scala 548:33]
    pp8_REG_27 <= pp8_REG_26 @[elegant.scala 548:25]
    dotProductRegs_3_REG <= _dotProductRegs_3_T_10 @[elegant.scala 549:151]
    dotProductRegs_3_REG_1 <= dotProductRegs_3_REG @[elegant.scala 549:143]
    dotProductRegs_3_REG_2 <= dotProductRegs_3_REG_1 @[elegant.scala 549:135]
    dotProductRegs_3_REG_3 <= dotProductRegs_3_REG_2 @[elegant.scala 549:127]
    dotProductRegs_3_REG_4 <= dotProductRegs_3_REG_3 @[elegant.scala 549:119]
    dotProductRegs_3_REG_5 <= dotProductRegs_3_REG_4 @[elegant.scala 549:111]
    dotProductRegs_3_REG_6 <= dotProductRegs_3_REG_5 @[elegant.scala 549:103]
    dotProductRegs_3_REG_7 <= dotProductRegs_3_REG_6 @[elegant.scala 549:95]
    multiplierReg_4 <= mux(reset, UInt<6>("h0"), io_in_a_man_4) @[elegant.scala 524:{34,34} 538:21]
    multiplierReg2_4 <= mux(reset, UInt<6>("h0"), io_in_b_man_4) @[elegant.scala 525:{35,35} 539:22]
    signReg_4 <= mux(reset, UInt<1>("h0"), io_in_a_sign_4) @[elegant.scala 527:{28,28} 537:15]
    pp1_4 <= mux(reset, UInt<12>("h0"), _pp1_T_14) @[elegant.scala 528:{24,24} 541:15]
    pp2_4 <= mux(reset, UInt<12>("h0"), pp2_REG_4) @[elegant.scala 529:{24,24} 542:15]
    pp3_4 <= mux(reset, UInt<12>("h0"), pp3_REG_9) @[elegant.scala 530:{24,24} 543:15]
    pp4_4 <= mux(reset, UInt<12>("h0"), pp4_REG_14) @[elegant.scala 531:{24,24} 544:15]
    pp5_4 <= mux(reset, UInt<12>("h0"), pp5_REG_19) @[elegant.scala 532:{24,24} 545:15]
    pp6_4 <= mux(reset, UInt<12>("h0"), pp6_REG_24) @[elegant.scala 533:{24,24} 546:15]
    pp7_4 <= mux(reset, UInt<12>("h0"), pp7_REG_29) @[elegant.scala 534:{24,24} 547:15]
    pp8_4 <= mux(reset, UInt<12>("h0"), pp8_REG_34) @[elegant.scala 535:{24,24} 548:15]
    pp9_4 <= mux(reset, UInt<12>("h0"), pp9_4) @[elegant.scala 536:{24,24,24}]
    pp2_REG_4 <= _pp2_T_19 @[elegant.scala 542:25]
    pp3_REG_8 <= _pp3_T_19 @[elegant.scala 543:33]
    pp3_REG_9 <= pp3_REG_8 @[elegant.scala 543:25]
    pp4_REG_12 <= _pp4_T_19 @[elegant.scala 544:41]
    pp4_REG_13 <= pp4_REG_12 @[elegant.scala 544:33]
    pp4_REG_14 <= pp4_REG_13 @[elegant.scala 544:25]
    pp5_REG_16 <= _pp5_T_19 @[elegant.scala 545:49]
    pp5_REG_17 <= pp5_REG_16 @[elegant.scala 545:41]
    pp5_REG_18 <= pp5_REG_17 @[elegant.scala 545:33]
    pp5_REG_19 <= pp5_REG_18 @[elegant.scala 545:25]
    pp6_REG_20 <= _pp6_T_19 @[elegant.scala 546:57]
    pp6_REG_21 <= pp6_REG_20 @[elegant.scala 546:49]
    pp6_REG_22 <= pp6_REG_21 @[elegant.scala 546:41]
    pp6_REG_23 <= pp6_REG_22 @[elegant.scala 546:33]
    pp6_REG_24 <= pp6_REG_23 @[elegant.scala 546:25]
    pp7_REG_24 <= _pp7_T_19 @[elegant.scala 547:65]
    pp7_REG_25 <= pp7_REG_24 @[elegant.scala 547:57]
    pp7_REG_26 <= pp7_REG_25 @[elegant.scala 547:49]
    pp7_REG_27 <= pp7_REG_26 @[elegant.scala 547:41]
    pp7_REG_28 <= pp7_REG_27 @[elegant.scala 547:33]
    pp7_REG_29 <= pp7_REG_28 @[elegant.scala 547:25]
    pp8_REG_28 <= _pp8_T_19 @[elegant.scala 548:73]
    pp8_REG_29 <= pp8_REG_28 @[elegant.scala 548:65]
    pp8_REG_30 <= pp8_REG_29 @[elegant.scala 548:57]
    pp8_REG_31 <= pp8_REG_30 @[elegant.scala 548:49]
    pp8_REG_32 <= pp8_REG_31 @[elegant.scala 548:41]
    pp8_REG_33 <= pp8_REG_32 @[elegant.scala 548:33]
    pp8_REG_34 <= pp8_REG_33 @[elegant.scala 548:25]
    dotProductRegs_4_REG <= _dotProductRegs_4_T_10 @[elegant.scala 549:151]
    dotProductRegs_4_REG_1 <= dotProductRegs_4_REG @[elegant.scala 549:143]
    dotProductRegs_4_REG_2 <= dotProductRegs_4_REG_1 @[elegant.scala 549:135]
    dotProductRegs_4_REG_3 <= dotProductRegs_4_REG_2 @[elegant.scala 549:127]
    dotProductRegs_4_REG_4 <= dotProductRegs_4_REG_3 @[elegant.scala 549:119]
    dotProductRegs_4_REG_5 <= dotProductRegs_4_REG_4 @[elegant.scala 549:111]
    dotProductRegs_4_REG_6 <= dotProductRegs_4_REG_5 @[elegant.scala 549:103]
    dotProductRegs_4_REG_7 <= dotProductRegs_4_REG_6 @[elegant.scala 549:95]
    multiplierReg_5 <= mux(reset, UInt<6>("h0"), io_in_a_man_5) @[elegant.scala 524:{34,34} 538:21]
    multiplierReg2_5 <= mux(reset, UInt<6>("h0"), io_in_b_man_5) @[elegant.scala 525:{35,35} 539:22]
    signReg_5 <= mux(reset, UInt<1>("h0"), io_in_a_sign_5) @[elegant.scala 527:{28,28} 537:15]
    pp1_5 <= mux(reset, UInt<12>("h0"), _pp1_T_17) @[elegant.scala 528:{24,24} 541:15]
    pp2_5 <= mux(reset, UInt<12>("h0"), pp2_REG_5) @[elegant.scala 529:{24,24} 542:15]
    pp3_5 <= mux(reset, UInt<12>("h0"), pp3_REG_11) @[elegant.scala 530:{24,24} 543:15]
    pp4_5 <= mux(reset, UInt<12>("h0"), pp4_REG_17) @[elegant.scala 531:{24,24} 544:15]
    pp5_5 <= mux(reset, UInt<12>("h0"), pp5_REG_23) @[elegant.scala 532:{24,24} 545:15]
    pp6_5 <= mux(reset, UInt<12>("h0"), pp6_REG_29) @[elegant.scala 533:{24,24} 546:15]
    pp7_5 <= mux(reset, UInt<12>("h0"), pp7_REG_35) @[elegant.scala 534:{24,24} 547:15]
    pp8_5 <= mux(reset, UInt<12>("h0"), pp8_REG_41) @[elegant.scala 535:{24,24} 548:15]
    pp9_5 <= mux(reset, UInt<12>("h0"), pp9_5) @[elegant.scala 536:{24,24,24}]
    pp2_REG_5 <= _pp2_T_23 @[elegant.scala 542:25]
    pp3_REG_10 <= _pp3_T_23 @[elegant.scala 543:33]
    pp3_REG_11 <= pp3_REG_10 @[elegant.scala 543:25]
    pp4_REG_15 <= _pp4_T_23 @[elegant.scala 544:41]
    pp4_REG_16 <= pp4_REG_15 @[elegant.scala 544:33]
    pp4_REG_17 <= pp4_REG_16 @[elegant.scala 544:25]
    pp5_REG_20 <= _pp5_T_23 @[elegant.scala 545:49]
    pp5_REG_21 <= pp5_REG_20 @[elegant.scala 545:41]
    pp5_REG_22 <= pp5_REG_21 @[elegant.scala 545:33]
    pp5_REG_23 <= pp5_REG_22 @[elegant.scala 545:25]
    pp6_REG_25 <= _pp6_T_23 @[elegant.scala 546:57]
    pp6_REG_26 <= pp6_REG_25 @[elegant.scala 546:49]
    pp6_REG_27 <= pp6_REG_26 @[elegant.scala 546:41]
    pp6_REG_28 <= pp6_REG_27 @[elegant.scala 546:33]
    pp6_REG_29 <= pp6_REG_28 @[elegant.scala 546:25]
    pp7_REG_30 <= _pp7_T_23 @[elegant.scala 547:65]
    pp7_REG_31 <= pp7_REG_30 @[elegant.scala 547:57]
    pp7_REG_32 <= pp7_REG_31 @[elegant.scala 547:49]
    pp7_REG_33 <= pp7_REG_32 @[elegant.scala 547:41]
    pp7_REG_34 <= pp7_REG_33 @[elegant.scala 547:33]
    pp7_REG_35 <= pp7_REG_34 @[elegant.scala 547:25]
    pp8_REG_35 <= _pp8_T_23 @[elegant.scala 548:73]
    pp8_REG_36 <= pp8_REG_35 @[elegant.scala 548:65]
    pp8_REG_37 <= pp8_REG_36 @[elegant.scala 548:57]
    pp8_REG_38 <= pp8_REG_37 @[elegant.scala 548:49]
    pp8_REG_39 <= pp8_REG_38 @[elegant.scala 548:41]
    pp8_REG_40 <= pp8_REG_39 @[elegant.scala 548:33]
    pp8_REG_41 <= pp8_REG_40 @[elegant.scala 548:25]
    dotProductRegs_5_REG <= _dotProductRegs_5_T_10 @[elegant.scala 549:151]
    dotProductRegs_5_REG_1 <= dotProductRegs_5_REG @[elegant.scala 549:143]
    dotProductRegs_5_REG_2 <= dotProductRegs_5_REG_1 @[elegant.scala 549:135]
    dotProductRegs_5_REG_3 <= dotProductRegs_5_REG_2 @[elegant.scala 549:127]
    dotProductRegs_5_REG_4 <= dotProductRegs_5_REG_3 @[elegant.scala 549:119]
    dotProductRegs_5_REG_5 <= dotProductRegs_5_REG_4 @[elegant.scala 549:111]
    dotProductRegs_5_REG_6 <= dotProductRegs_5_REG_5 @[elegant.scala 549:103]
    dotProductRegs_5_REG_7 <= dotProductRegs_5_REG_6 @[elegant.scala 549:95]
    multiplierReg_6 <= mux(reset, UInt<6>("h0"), io_in_a_man_6) @[elegant.scala 524:{34,34} 538:21]
    multiplierReg2_6 <= mux(reset, UInt<6>("h0"), io_in_b_man_6) @[elegant.scala 525:{35,35} 539:22]
    signReg_6 <= mux(reset, UInt<1>("h0"), io_in_a_sign_6) @[elegant.scala 527:{28,28} 537:15]
    pp1_6 <= mux(reset, UInt<12>("h0"), _pp1_T_20) @[elegant.scala 528:{24,24} 541:15]
    pp2_6 <= mux(reset, UInt<12>("h0"), pp2_REG_6) @[elegant.scala 529:{24,24} 542:15]
    pp3_6 <= mux(reset, UInt<12>("h0"), pp3_REG_13) @[elegant.scala 530:{24,24} 543:15]
    pp4_6 <= mux(reset, UInt<12>("h0"), pp4_REG_20) @[elegant.scala 531:{24,24} 544:15]
    pp5_6 <= mux(reset, UInt<12>("h0"), pp5_REG_27) @[elegant.scala 532:{24,24} 545:15]
    pp6_6 <= mux(reset, UInt<12>("h0"), pp6_REG_34) @[elegant.scala 533:{24,24} 546:15]
    pp7_6 <= mux(reset, UInt<12>("h0"), pp7_REG_41) @[elegant.scala 534:{24,24} 547:15]
    pp8_6 <= mux(reset, UInt<12>("h0"), pp8_REG_48) @[elegant.scala 535:{24,24} 548:15]
    pp9_6 <= mux(reset, UInt<12>("h0"), pp9_6) @[elegant.scala 536:{24,24,24}]
    pp2_REG_6 <= _pp2_T_27 @[elegant.scala 542:25]
    pp3_REG_12 <= _pp3_T_27 @[elegant.scala 543:33]
    pp3_REG_13 <= pp3_REG_12 @[elegant.scala 543:25]
    pp4_REG_18 <= _pp4_T_27 @[elegant.scala 544:41]
    pp4_REG_19 <= pp4_REG_18 @[elegant.scala 544:33]
    pp4_REG_20 <= pp4_REG_19 @[elegant.scala 544:25]
    pp5_REG_24 <= _pp5_T_27 @[elegant.scala 545:49]
    pp5_REG_25 <= pp5_REG_24 @[elegant.scala 545:41]
    pp5_REG_26 <= pp5_REG_25 @[elegant.scala 545:33]
    pp5_REG_27 <= pp5_REG_26 @[elegant.scala 545:25]
    pp6_REG_30 <= _pp6_T_27 @[elegant.scala 546:57]
    pp6_REG_31 <= pp6_REG_30 @[elegant.scala 546:49]
    pp6_REG_32 <= pp6_REG_31 @[elegant.scala 546:41]
    pp6_REG_33 <= pp6_REG_32 @[elegant.scala 546:33]
    pp6_REG_34 <= pp6_REG_33 @[elegant.scala 546:25]
    pp7_REG_36 <= _pp7_T_27 @[elegant.scala 547:65]
    pp7_REG_37 <= pp7_REG_36 @[elegant.scala 547:57]
    pp7_REG_38 <= pp7_REG_37 @[elegant.scala 547:49]
    pp7_REG_39 <= pp7_REG_38 @[elegant.scala 547:41]
    pp7_REG_40 <= pp7_REG_39 @[elegant.scala 547:33]
    pp7_REG_41 <= pp7_REG_40 @[elegant.scala 547:25]
    pp8_REG_42 <= _pp8_T_27 @[elegant.scala 548:73]
    pp8_REG_43 <= pp8_REG_42 @[elegant.scala 548:65]
    pp8_REG_44 <= pp8_REG_43 @[elegant.scala 548:57]
    pp8_REG_45 <= pp8_REG_44 @[elegant.scala 548:49]
    pp8_REG_46 <= pp8_REG_45 @[elegant.scala 548:41]
    pp8_REG_47 <= pp8_REG_46 @[elegant.scala 548:33]
    pp8_REG_48 <= pp8_REG_47 @[elegant.scala 548:25]
    dotProductRegs_6_REG <= _dotProductRegs_6_T_10 @[elegant.scala 549:151]
    dotProductRegs_6_REG_1 <= dotProductRegs_6_REG @[elegant.scala 549:143]
    dotProductRegs_6_REG_2 <= dotProductRegs_6_REG_1 @[elegant.scala 549:135]
    dotProductRegs_6_REG_3 <= dotProductRegs_6_REG_2 @[elegant.scala 549:127]
    dotProductRegs_6_REG_4 <= dotProductRegs_6_REG_3 @[elegant.scala 549:119]
    dotProductRegs_6_REG_5 <= dotProductRegs_6_REG_4 @[elegant.scala 549:111]
    dotProductRegs_6_REG_6 <= dotProductRegs_6_REG_5 @[elegant.scala 549:103]
    dotProductRegs_6_REG_7 <= dotProductRegs_6_REG_6 @[elegant.scala 549:95]
    multiplierReg_7 <= mux(reset, UInt<6>("h0"), io_in_a_man_7) @[elegant.scala 524:{34,34} 538:21]
    multiplierReg2_7 <= mux(reset, UInt<6>("h0"), io_in_b_man_7) @[elegant.scala 525:{35,35} 539:22]
    signReg_7 <= mux(reset, UInt<1>("h0"), io_in_a_sign_7) @[elegant.scala 527:{28,28} 537:15]
    pp1_7 <= mux(reset, UInt<12>("h0"), _pp1_T_23) @[elegant.scala 528:{24,24} 541:15]
    pp2_7 <= mux(reset, UInt<12>("h0"), pp2_REG_7) @[elegant.scala 529:{24,24} 542:15]
    pp3_7 <= mux(reset, UInt<12>("h0"), pp3_REG_15) @[elegant.scala 530:{24,24} 543:15]
    pp4_7 <= mux(reset, UInt<12>("h0"), pp4_REG_23) @[elegant.scala 531:{24,24} 544:15]
    pp5_7 <= mux(reset, UInt<12>("h0"), pp5_REG_31) @[elegant.scala 532:{24,24} 545:15]
    pp6_7 <= mux(reset, UInt<12>("h0"), pp6_REG_39) @[elegant.scala 533:{24,24} 546:15]
    pp7_7 <= mux(reset, UInt<12>("h0"), pp7_REG_47) @[elegant.scala 534:{24,24} 547:15]
    pp8_7 <= mux(reset, UInt<12>("h0"), pp8_REG_55) @[elegant.scala 535:{24,24} 548:15]
    pp9_7 <= mux(reset, UInt<12>("h0"), pp9_7) @[elegant.scala 536:{24,24,24}]
    pp2_REG_7 <= _pp2_T_31 @[elegant.scala 542:25]
    pp3_REG_14 <= _pp3_T_31 @[elegant.scala 543:33]
    pp3_REG_15 <= pp3_REG_14 @[elegant.scala 543:25]
    pp4_REG_21 <= _pp4_T_31 @[elegant.scala 544:41]
    pp4_REG_22 <= pp4_REG_21 @[elegant.scala 544:33]
    pp4_REG_23 <= pp4_REG_22 @[elegant.scala 544:25]
    pp5_REG_28 <= _pp5_T_31 @[elegant.scala 545:49]
    pp5_REG_29 <= pp5_REG_28 @[elegant.scala 545:41]
    pp5_REG_30 <= pp5_REG_29 @[elegant.scala 545:33]
    pp5_REG_31 <= pp5_REG_30 @[elegant.scala 545:25]
    pp6_REG_35 <= _pp6_T_31 @[elegant.scala 546:57]
    pp6_REG_36 <= pp6_REG_35 @[elegant.scala 546:49]
    pp6_REG_37 <= pp6_REG_36 @[elegant.scala 546:41]
    pp6_REG_38 <= pp6_REG_37 @[elegant.scala 546:33]
    pp6_REG_39 <= pp6_REG_38 @[elegant.scala 546:25]
    pp7_REG_42 <= _pp7_T_31 @[elegant.scala 547:65]
    pp7_REG_43 <= pp7_REG_42 @[elegant.scala 547:57]
    pp7_REG_44 <= pp7_REG_43 @[elegant.scala 547:49]
    pp7_REG_45 <= pp7_REG_44 @[elegant.scala 547:41]
    pp7_REG_46 <= pp7_REG_45 @[elegant.scala 547:33]
    pp7_REG_47 <= pp7_REG_46 @[elegant.scala 547:25]
    pp8_REG_49 <= _pp8_T_31 @[elegant.scala 548:73]
    pp8_REG_50 <= pp8_REG_49 @[elegant.scala 548:65]
    pp8_REG_51 <= pp8_REG_50 @[elegant.scala 548:57]
    pp8_REG_52 <= pp8_REG_51 @[elegant.scala 548:49]
    pp8_REG_53 <= pp8_REG_52 @[elegant.scala 548:41]
    pp8_REG_54 <= pp8_REG_53 @[elegant.scala 548:33]
    pp8_REG_55 <= pp8_REG_54 @[elegant.scala 548:25]
    dotProductRegs_7_REG <= _dotProductRegs_7_T_10 @[elegant.scala 549:151]
    dotProductRegs_7_REG_1 <= dotProductRegs_7_REG @[elegant.scala 549:143]
    dotProductRegs_7_REG_2 <= dotProductRegs_7_REG_1 @[elegant.scala 549:135]
    dotProductRegs_7_REG_3 <= dotProductRegs_7_REG_2 @[elegant.scala 549:127]
    dotProductRegs_7_REG_4 <= dotProductRegs_7_REG_3 @[elegant.scala 549:119]
    dotProductRegs_7_REG_5 <= dotProductRegs_7_REG_4 @[elegant.scala 549:111]
    dotProductRegs_7_REG_6 <= dotProductRegs_7_REG_5 @[elegant.scala 549:103]
    dotProductRegs_7_REG_7 <= dotProductRegs_7_REG_6 @[elegant.scala 549:95]
    multiplierReg_8 <= mux(reset, UInt<6>("h0"), io_in_a_man_8) @[elegant.scala 524:{34,34} 538:21]
    multiplierReg2_8 <= mux(reset, UInt<6>("h0"), io_in_b_man_8) @[elegant.scala 525:{35,35} 539:22]
    signReg_8 <= mux(reset, UInt<1>("h0"), io_in_a_sign_8) @[elegant.scala 527:{28,28} 537:15]
    pp1_8 <= mux(reset, UInt<12>("h0"), _pp1_T_26) @[elegant.scala 528:{24,24} 541:15]
    pp2_8 <= mux(reset, UInt<12>("h0"), pp2_REG_8) @[elegant.scala 529:{24,24} 542:15]
    pp3_8 <= mux(reset, UInt<12>("h0"), pp3_REG_17) @[elegant.scala 530:{24,24} 543:15]
    pp4_8 <= mux(reset, UInt<12>("h0"), pp4_REG_26) @[elegant.scala 531:{24,24} 544:15]
    pp5_8 <= mux(reset, UInt<12>("h0"), pp5_REG_35) @[elegant.scala 532:{24,24} 545:15]
    pp6_8 <= mux(reset, UInt<12>("h0"), pp6_REG_44) @[elegant.scala 533:{24,24} 546:15]
    pp7_8 <= mux(reset, UInt<12>("h0"), pp7_REG_53) @[elegant.scala 534:{24,24} 547:15]
    pp8_8 <= mux(reset, UInt<12>("h0"), pp8_REG_62) @[elegant.scala 535:{24,24} 548:15]
    pp9_8 <= mux(reset, UInt<12>("h0"), pp9_8) @[elegant.scala 536:{24,24,24}]
    pp2_REG_8 <= _pp2_T_35 @[elegant.scala 542:25]
    pp3_REG_16 <= _pp3_T_35 @[elegant.scala 543:33]
    pp3_REG_17 <= pp3_REG_16 @[elegant.scala 543:25]
    pp4_REG_24 <= _pp4_T_35 @[elegant.scala 544:41]
    pp4_REG_25 <= pp4_REG_24 @[elegant.scala 544:33]
    pp4_REG_26 <= pp4_REG_25 @[elegant.scala 544:25]
    pp5_REG_32 <= _pp5_T_35 @[elegant.scala 545:49]
    pp5_REG_33 <= pp5_REG_32 @[elegant.scala 545:41]
    pp5_REG_34 <= pp5_REG_33 @[elegant.scala 545:33]
    pp5_REG_35 <= pp5_REG_34 @[elegant.scala 545:25]
    pp6_REG_40 <= _pp6_T_35 @[elegant.scala 546:57]
    pp6_REG_41 <= pp6_REG_40 @[elegant.scala 546:49]
    pp6_REG_42 <= pp6_REG_41 @[elegant.scala 546:41]
    pp6_REG_43 <= pp6_REG_42 @[elegant.scala 546:33]
    pp6_REG_44 <= pp6_REG_43 @[elegant.scala 546:25]
    pp7_REG_48 <= _pp7_T_35 @[elegant.scala 547:65]
    pp7_REG_49 <= pp7_REG_48 @[elegant.scala 547:57]
    pp7_REG_50 <= pp7_REG_49 @[elegant.scala 547:49]
    pp7_REG_51 <= pp7_REG_50 @[elegant.scala 547:41]
    pp7_REG_52 <= pp7_REG_51 @[elegant.scala 547:33]
    pp7_REG_53 <= pp7_REG_52 @[elegant.scala 547:25]
    pp8_REG_56 <= _pp8_T_35 @[elegant.scala 548:73]
    pp8_REG_57 <= pp8_REG_56 @[elegant.scala 548:65]
    pp8_REG_58 <= pp8_REG_57 @[elegant.scala 548:57]
    pp8_REG_59 <= pp8_REG_58 @[elegant.scala 548:49]
    pp8_REG_60 <= pp8_REG_59 @[elegant.scala 548:41]
    pp8_REG_61 <= pp8_REG_60 @[elegant.scala 548:33]
    pp8_REG_62 <= pp8_REG_61 @[elegant.scala 548:25]
    dotProductRegs_8_REG <= _dotProductRegs_8_T_10 @[elegant.scala 549:151]
    dotProductRegs_8_REG_1 <= dotProductRegs_8_REG @[elegant.scala 549:143]
    dotProductRegs_8_REG_2 <= dotProductRegs_8_REG_1 @[elegant.scala 549:135]
    dotProductRegs_8_REG_3 <= dotProductRegs_8_REG_2 @[elegant.scala 549:127]
    dotProductRegs_8_REG_4 <= dotProductRegs_8_REG_3 @[elegant.scala 549:119]
    dotProductRegs_8_REG_5 <= dotProductRegs_8_REG_4 @[elegant.scala 549:111]
    dotProductRegs_8_REG_6 <= dotProductRegs_8_REG_5 @[elegant.scala 549:103]
    dotProductRegs_8_REG_7 <= dotProductRegs_8_REG_6 @[elegant.scala 549:95]
    multiplierReg_9 <= mux(reset, UInt<6>("h0"), io_in_a_man_9) @[elegant.scala 524:{34,34} 538:21]
    multiplierReg2_9 <= mux(reset, UInt<6>("h0"), io_in_b_man_9) @[elegant.scala 525:{35,35} 539:22]
    signReg_9 <= mux(reset, UInt<1>("h0"), io_in_a_sign_9) @[elegant.scala 527:{28,28} 537:15]
    pp1_9 <= mux(reset, UInt<12>("h0"), _pp1_T_29) @[elegant.scala 528:{24,24} 541:15]
    pp2_9 <= mux(reset, UInt<12>("h0"), pp2_REG_9) @[elegant.scala 529:{24,24} 542:15]
    pp3_9 <= mux(reset, UInt<12>("h0"), pp3_REG_19) @[elegant.scala 530:{24,24} 543:15]
    pp4_9 <= mux(reset, UInt<12>("h0"), pp4_REG_29) @[elegant.scala 531:{24,24} 544:15]
    pp5_9 <= mux(reset, UInt<12>("h0"), pp5_REG_39) @[elegant.scala 532:{24,24} 545:15]
    pp6_9 <= mux(reset, UInt<12>("h0"), pp6_REG_49) @[elegant.scala 533:{24,24} 546:15]
    pp7_9 <= mux(reset, UInt<12>("h0"), pp7_REG_59) @[elegant.scala 534:{24,24} 547:15]
    pp8_9 <= mux(reset, UInt<12>("h0"), pp8_REG_69) @[elegant.scala 535:{24,24} 548:15]
    pp9_9 <= mux(reset, UInt<12>("h0"), pp9_9) @[elegant.scala 536:{24,24,24}]
    pp2_REG_9 <= _pp2_T_39 @[elegant.scala 542:25]
    pp3_REG_18 <= _pp3_T_39 @[elegant.scala 543:33]
    pp3_REG_19 <= pp3_REG_18 @[elegant.scala 543:25]
    pp4_REG_27 <= _pp4_T_39 @[elegant.scala 544:41]
    pp4_REG_28 <= pp4_REG_27 @[elegant.scala 544:33]
    pp4_REG_29 <= pp4_REG_28 @[elegant.scala 544:25]
    pp5_REG_36 <= _pp5_T_39 @[elegant.scala 545:49]
    pp5_REG_37 <= pp5_REG_36 @[elegant.scala 545:41]
    pp5_REG_38 <= pp5_REG_37 @[elegant.scala 545:33]
    pp5_REG_39 <= pp5_REG_38 @[elegant.scala 545:25]
    pp6_REG_45 <= _pp6_T_39 @[elegant.scala 546:57]
    pp6_REG_46 <= pp6_REG_45 @[elegant.scala 546:49]
    pp6_REG_47 <= pp6_REG_46 @[elegant.scala 546:41]
    pp6_REG_48 <= pp6_REG_47 @[elegant.scala 546:33]
    pp6_REG_49 <= pp6_REG_48 @[elegant.scala 546:25]
    pp7_REG_54 <= _pp7_T_39 @[elegant.scala 547:65]
    pp7_REG_55 <= pp7_REG_54 @[elegant.scala 547:57]
    pp7_REG_56 <= pp7_REG_55 @[elegant.scala 547:49]
    pp7_REG_57 <= pp7_REG_56 @[elegant.scala 547:41]
    pp7_REG_58 <= pp7_REG_57 @[elegant.scala 547:33]
    pp7_REG_59 <= pp7_REG_58 @[elegant.scala 547:25]
    pp8_REG_63 <= _pp8_T_39 @[elegant.scala 548:73]
    pp8_REG_64 <= pp8_REG_63 @[elegant.scala 548:65]
    pp8_REG_65 <= pp8_REG_64 @[elegant.scala 548:57]
    pp8_REG_66 <= pp8_REG_65 @[elegant.scala 548:49]
    pp8_REG_67 <= pp8_REG_66 @[elegant.scala 548:41]
    pp8_REG_68 <= pp8_REG_67 @[elegant.scala 548:33]
    pp8_REG_69 <= pp8_REG_68 @[elegant.scala 548:25]
    dotProductRegs_9_REG <= _dotProductRegs_9_T_10 @[elegant.scala 549:151]
    dotProductRegs_9_REG_1 <= dotProductRegs_9_REG @[elegant.scala 549:143]
    dotProductRegs_9_REG_2 <= dotProductRegs_9_REG_1 @[elegant.scala 549:135]
    dotProductRegs_9_REG_3 <= dotProductRegs_9_REG_2 @[elegant.scala 549:127]
    dotProductRegs_9_REG_4 <= dotProductRegs_9_REG_3 @[elegant.scala 549:119]
    dotProductRegs_9_REG_5 <= dotProductRegs_9_REG_4 @[elegant.scala 549:111]
    dotProductRegs_9_REG_6 <= dotProductRegs_9_REG_5 @[elegant.scala 549:103]
    dotProductRegs_9_REG_7 <= dotProductRegs_9_REG_6 @[elegant.scala 549:95]
    multiplierReg_10 <= mux(reset, UInt<6>("h0"), io_in_a_man_10) @[elegant.scala 524:{34,34} 538:21]
    multiplierReg2_10 <= mux(reset, UInt<6>("h0"), io_in_b_man_10) @[elegant.scala 525:{35,35} 539:22]
    signReg_10 <= mux(reset, UInt<1>("h0"), io_in_a_sign_10) @[elegant.scala 527:{28,28} 537:15]
    pp1_10 <= mux(reset, UInt<12>("h0"), _pp1_T_32) @[elegant.scala 528:{24,24} 541:15]
    pp2_10 <= mux(reset, UInt<12>("h0"), pp2_REG_10) @[elegant.scala 529:{24,24} 542:15]
    pp3_10 <= mux(reset, UInt<12>("h0"), pp3_REG_21) @[elegant.scala 530:{24,24} 543:15]
    pp4_10 <= mux(reset, UInt<12>("h0"), pp4_REG_32) @[elegant.scala 531:{24,24} 544:15]
    pp5_10 <= mux(reset, UInt<12>("h0"), pp5_REG_43) @[elegant.scala 532:{24,24} 545:15]
    pp6_10 <= mux(reset, UInt<12>("h0"), pp6_REG_54) @[elegant.scala 533:{24,24} 546:15]
    pp7_10 <= mux(reset, UInt<12>("h0"), pp7_REG_65) @[elegant.scala 534:{24,24} 547:15]
    pp8_10 <= mux(reset, UInt<12>("h0"), pp8_REG_76) @[elegant.scala 535:{24,24} 548:15]
    pp9_10 <= mux(reset, UInt<12>("h0"), pp9_10) @[elegant.scala 536:{24,24,24}]
    pp2_REG_10 <= _pp2_T_43 @[elegant.scala 542:25]
    pp3_REG_20 <= _pp3_T_43 @[elegant.scala 543:33]
    pp3_REG_21 <= pp3_REG_20 @[elegant.scala 543:25]
    pp4_REG_30 <= _pp4_T_43 @[elegant.scala 544:41]
    pp4_REG_31 <= pp4_REG_30 @[elegant.scala 544:33]
    pp4_REG_32 <= pp4_REG_31 @[elegant.scala 544:25]
    pp5_REG_40 <= _pp5_T_43 @[elegant.scala 545:49]
    pp5_REG_41 <= pp5_REG_40 @[elegant.scala 545:41]
    pp5_REG_42 <= pp5_REG_41 @[elegant.scala 545:33]
    pp5_REG_43 <= pp5_REG_42 @[elegant.scala 545:25]
    pp6_REG_50 <= _pp6_T_43 @[elegant.scala 546:57]
    pp6_REG_51 <= pp6_REG_50 @[elegant.scala 546:49]
    pp6_REG_52 <= pp6_REG_51 @[elegant.scala 546:41]
    pp6_REG_53 <= pp6_REG_52 @[elegant.scala 546:33]
    pp6_REG_54 <= pp6_REG_53 @[elegant.scala 546:25]
    pp7_REG_60 <= _pp7_T_43 @[elegant.scala 547:65]
    pp7_REG_61 <= pp7_REG_60 @[elegant.scala 547:57]
    pp7_REG_62 <= pp7_REG_61 @[elegant.scala 547:49]
    pp7_REG_63 <= pp7_REG_62 @[elegant.scala 547:41]
    pp7_REG_64 <= pp7_REG_63 @[elegant.scala 547:33]
    pp7_REG_65 <= pp7_REG_64 @[elegant.scala 547:25]
    pp8_REG_70 <= _pp8_T_43 @[elegant.scala 548:73]
    pp8_REG_71 <= pp8_REG_70 @[elegant.scala 548:65]
    pp8_REG_72 <= pp8_REG_71 @[elegant.scala 548:57]
    pp8_REG_73 <= pp8_REG_72 @[elegant.scala 548:49]
    pp8_REG_74 <= pp8_REG_73 @[elegant.scala 548:41]
    pp8_REG_75 <= pp8_REG_74 @[elegant.scala 548:33]
    pp8_REG_76 <= pp8_REG_75 @[elegant.scala 548:25]
    dotProductRegs_10_REG <= _dotProductRegs_10_T_10 @[elegant.scala 549:151]
    dotProductRegs_10_REG_1 <= dotProductRegs_10_REG @[elegant.scala 549:143]
    dotProductRegs_10_REG_2 <= dotProductRegs_10_REG_1 @[elegant.scala 549:135]
    dotProductRegs_10_REG_3 <= dotProductRegs_10_REG_2 @[elegant.scala 549:127]
    dotProductRegs_10_REG_4 <= dotProductRegs_10_REG_3 @[elegant.scala 549:119]
    dotProductRegs_10_REG_5 <= dotProductRegs_10_REG_4 @[elegant.scala 549:111]
    dotProductRegs_10_REG_6 <= dotProductRegs_10_REG_5 @[elegant.scala 549:103]
    dotProductRegs_10_REG_7 <= dotProductRegs_10_REG_6 @[elegant.scala 549:95]
    multiplierReg_11 <= mux(reset, UInt<6>("h0"), io_in_a_man_11) @[elegant.scala 524:{34,34} 538:21]
    multiplierReg2_11 <= mux(reset, UInt<6>("h0"), io_in_b_man_11) @[elegant.scala 525:{35,35} 539:22]
    signReg_11 <= mux(reset, UInt<1>("h0"), io_in_a_sign_11) @[elegant.scala 527:{28,28} 537:15]
    pp1_11 <= mux(reset, UInt<12>("h0"), _pp1_T_35) @[elegant.scala 528:{24,24} 541:15]
    pp2_11 <= mux(reset, UInt<12>("h0"), pp2_REG_11) @[elegant.scala 529:{24,24} 542:15]
    pp3_11 <= mux(reset, UInt<12>("h0"), pp3_REG_23) @[elegant.scala 530:{24,24} 543:15]
    pp4_11 <= mux(reset, UInt<12>("h0"), pp4_REG_35) @[elegant.scala 531:{24,24} 544:15]
    pp5_11 <= mux(reset, UInt<12>("h0"), pp5_REG_47) @[elegant.scala 532:{24,24} 545:15]
    pp6_11 <= mux(reset, UInt<12>("h0"), pp6_REG_59) @[elegant.scala 533:{24,24} 546:15]
    pp7_11 <= mux(reset, UInt<12>("h0"), pp7_REG_71) @[elegant.scala 534:{24,24} 547:15]
    pp8_11 <= mux(reset, UInt<12>("h0"), pp8_REG_83) @[elegant.scala 535:{24,24} 548:15]
    pp9_11 <= mux(reset, UInt<12>("h0"), pp9_11) @[elegant.scala 536:{24,24,24}]
    pp2_REG_11 <= _pp2_T_47 @[elegant.scala 542:25]
    pp3_REG_22 <= _pp3_T_47 @[elegant.scala 543:33]
    pp3_REG_23 <= pp3_REG_22 @[elegant.scala 543:25]
    pp4_REG_33 <= _pp4_T_47 @[elegant.scala 544:41]
    pp4_REG_34 <= pp4_REG_33 @[elegant.scala 544:33]
    pp4_REG_35 <= pp4_REG_34 @[elegant.scala 544:25]
    pp5_REG_44 <= _pp5_T_47 @[elegant.scala 545:49]
    pp5_REG_45 <= pp5_REG_44 @[elegant.scala 545:41]
    pp5_REG_46 <= pp5_REG_45 @[elegant.scala 545:33]
    pp5_REG_47 <= pp5_REG_46 @[elegant.scala 545:25]
    pp6_REG_55 <= _pp6_T_47 @[elegant.scala 546:57]
    pp6_REG_56 <= pp6_REG_55 @[elegant.scala 546:49]
    pp6_REG_57 <= pp6_REG_56 @[elegant.scala 546:41]
    pp6_REG_58 <= pp6_REG_57 @[elegant.scala 546:33]
    pp6_REG_59 <= pp6_REG_58 @[elegant.scala 546:25]
    pp7_REG_66 <= _pp7_T_47 @[elegant.scala 547:65]
    pp7_REG_67 <= pp7_REG_66 @[elegant.scala 547:57]
    pp7_REG_68 <= pp7_REG_67 @[elegant.scala 547:49]
    pp7_REG_69 <= pp7_REG_68 @[elegant.scala 547:41]
    pp7_REG_70 <= pp7_REG_69 @[elegant.scala 547:33]
    pp7_REG_71 <= pp7_REG_70 @[elegant.scala 547:25]
    pp8_REG_77 <= _pp8_T_47 @[elegant.scala 548:73]
    pp8_REG_78 <= pp8_REG_77 @[elegant.scala 548:65]
    pp8_REG_79 <= pp8_REG_78 @[elegant.scala 548:57]
    pp8_REG_80 <= pp8_REG_79 @[elegant.scala 548:49]
    pp8_REG_81 <= pp8_REG_80 @[elegant.scala 548:41]
    pp8_REG_82 <= pp8_REG_81 @[elegant.scala 548:33]
    pp8_REG_83 <= pp8_REG_82 @[elegant.scala 548:25]
    dotProductRegs_11_REG <= _dotProductRegs_11_T_10 @[elegant.scala 549:151]
    dotProductRegs_11_REG_1 <= dotProductRegs_11_REG @[elegant.scala 549:143]
    dotProductRegs_11_REG_2 <= dotProductRegs_11_REG_1 @[elegant.scala 549:135]
    dotProductRegs_11_REG_3 <= dotProductRegs_11_REG_2 @[elegant.scala 549:127]
    dotProductRegs_11_REG_4 <= dotProductRegs_11_REG_3 @[elegant.scala 549:119]
    dotProductRegs_11_REG_5 <= dotProductRegs_11_REG_4 @[elegant.scala 549:111]
    dotProductRegs_11_REG_6 <= dotProductRegs_11_REG_5 @[elegant.scala 549:103]
    dotProductRegs_11_REG_7 <= dotProductRegs_11_REG_6 @[elegant.scala 549:95]
    multiplierReg_12 <= mux(reset, UInt<6>("h0"), io_in_a_man_12) @[elegant.scala 524:{34,34} 538:21]
    multiplierReg2_12 <= mux(reset, UInt<6>("h0"), io_in_b_man_12) @[elegant.scala 525:{35,35} 539:22]
    signReg_12 <= mux(reset, UInt<1>("h0"), io_in_a_sign_12) @[elegant.scala 527:{28,28} 537:15]
    pp1_12 <= mux(reset, UInt<12>("h0"), _pp1_T_38) @[elegant.scala 528:{24,24} 541:15]
    pp2_12 <= mux(reset, UInt<12>("h0"), pp2_REG_12) @[elegant.scala 529:{24,24} 542:15]
    pp3_12 <= mux(reset, UInt<12>("h0"), pp3_REG_25) @[elegant.scala 530:{24,24} 543:15]
    pp4_12 <= mux(reset, UInt<12>("h0"), pp4_REG_38) @[elegant.scala 531:{24,24} 544:15]
    pp5_12 <= mux(reset, UInt<12>("h0"), pp5_REG_51) @[elegant.scala 532:{24,24} 545:15]
    pp6_12 <= mux(reset, UInt<12>("h0"), pp6_REG_64) @[elegant.scala 533:{24,24} 546:15]
    pp7_12 <= mux(reset, UInt<12>("h0"), pp7_REG_77) @[elegant.scala 534:{24,24} 547:15]
    pp8_12 <= mux(reset, UInt<12>("h0"), pp8_REG_90) @[elegant.scala 535:{24,24} 548:15]
    pp9_12 <= mux(reset, UInt<12>("h0"), pp9_12) @[elegant.scala 536:{24,24,24}]
    pp2_REG_12 <= _pp2_T_51 @[elegant.scala 542:25]
    pp3_REG_24 <= _pp3_T_51 @[elegant.scala 543:33]
    pp3_REG_25 <= pp3_REG_24 @[elegant.scala 543:25]
    pp4_REG_36 <= _pp4_T_51 @[elegant.scala 544:41]
    pp4_REG_37 <= pp4_REG_36 @[elegant.scala 544:33]
    pp4_REG_38 <= pp4_REG_37 @[elegant.scala 544:25]
    pp5_REG_48 <= _pp5_T_51 @[elegant.scala 545:49]
    pp5_REG_49 <= pp5_REG_48 @[elegant.scala 545:41]
    pp5_REG_50 <= pp5_REG_49 @[elegant.scala 545:33]
    pp5_REG_51 <= pp5_REG_50 @[elegant.scala 545:25]
    pp6_REG_60 <= _pp6_T_51 @[elegant.scala 546:57]
    pp6_REG_61 <= pp6_REG_60 @[elegant.scala 546:49]
    pp6_REG_62 <= pp6_REG_61 @[elegant.scala 546:41]
    pp6_REG_63 <= pp6_REG_62 @[elegant.scala 546:33]
    pp6_REG_64 <= pp6_REG_63 @[elegant.scala 546:25]
    pp7_REG_72 <= _pp7_T_51 @[elegant.scala 547:65]
    pp7_REG_73 <= pp7_REG_72 @[elegant.scala 547:57]
    pp7_REG_74 <= pp7_REG_73 @[elegant.scala 547:49]
    pp7_REG_75 <= pp7_REG_74 @[elegant.scala 547:41]
    pp7_REG_76 <= pp7_REG_75 @[elegant.scala 547:33]
    pp7_REG_77 <= pp7_REG_76 @[elegant.scala 547:25]
    pp8_REG_84 <= _pp8_T_51 @[elegant.scala 548:73]
    pp8_REG_85 <= pp8_REG_84 @[elegant.scala 548:65]
    pp8_REG_86 <= pp8_REG_85 @[elegant.scala 548:57]
    pp8_REG_87 <= pp8_REG_86 @[elegant.scala 548:49]
    pp8_REG_88 <= pp8_REG_87 @[elegant.scala 548:41]
    pp8_REG_89 <= pp8_REG_88 @[elegant.scala 548:33]
    pp8_REG_90 <= pp8_REG_89 @[elegant.scala 548:25]
    dotProductRegs_12_REG <= _dotProductRegs_12_T_10 @[elegant.scala 549:151]
    dotProductRegs_12_REG_1 <= dotProductRegs_12_REG @[elegant.scala 549:143]
    dotProductRegs_12_REG_2 <= dotProductRegs_12_REG_1 @[elegant.scala 549:135]
    dotProductRegs_12_REG_3 <= dotProductRegs_12_REG_2 @[elegant.scala 549:127]
    dotProductRegs_12_REG_4 <= dotProductRegs_12_REG_3 @[elegant.scala 549:119]
    dotProductRegs_12_REG_5 <= dotProductRegs_12_REG_4 @[elegant.scala 549:111]
    dotProductRegs_12_REG_6 <= dotProductRegs_12_REG_5 @[elegant.scala 549:103]
    dotProductRegs_12_REG_7 <= dotProductRegs_12_REG_6 @[elegant.scala 549:95]
    multiplierReg_13 <= mux(reset, UInt<6>("h0"), io_in_a_man_13) @[elegant.scala 524:{34,34} 538:21]
    multiplierReg2_13 <= mux(reset, UInt<6>("h0"), io_in_b_man_13) @[elegant.scala 525:{35,35} 539:22]
    signReg_13 <= mux(reset, UInt<1>("h0"), io_in_a_sign_13) @[elegant.scala 527:{28,28} 537:15]
    pp1_13 <= mux(reset, UInt<12>("h0"), _pp1_T_41) @[elegant.scala 528:{24,24} 541:15]
    pp2_13 <= mux(reset, UInt<12>("h0"), pp2_REG_13) @[elegant.scala 529:{24,24} 542:15]
    pp3_13 <= mux(reset, UInt<12>("h0"), pp3_REG_27) @[elegant.scala 530:{24,24} 543:15]
    pp4_13 <= mux(reset, UInt<12>("h0"), pp4_REG_41) @[elegant.scala 531:{24,24} 544:15]
    pp5_13 <= mux(reset, UInt<12>("h0"), pp5_REG_55) @[elegant.scala 532:{24,24} 545:15]
    pp6_13 <= mux(reset, UInt<12>("h0"), pp6_REG_69) @[elegant.scala 533:{24,24} 546:15]
    pp7_13 <= mux(reset, UInt<12>("h0"), pp7_REG_83) @[elegant.scala 534:{24,24} 547:15]
    pp8_13 <= mux(reset, UInt<12>("h0"), pp8_REG_97) @[elegant.scala 535:{24,24} 548:15]
    pp9_13 <= mux(reset, UInt<12>("h0"), pp9_13) @[elegant.scala 536:{24,24,24}]
    pp2_REG_13 <= _pp2_T_55 @[elegant.scala 542:25]
    pp3_REG_26 <= _pp3_T_55 @[elegant.scala 543:33]
    pp3_REG_27 <= pp3_REG_26 @[elegant.scala 543:25]
    pp4_REG_39 <= _pp4_T_55 @[elegant.scala 544:41]
    pp4_REG_40 <= pp4_REG_39 @[elegant.scala 544:33]
    pp4_REG_41 <= pp4_REG_40 @[elegant.scala 544:25]
    pp5_REG_52 <= _pp5_T_55 @[elegant.scala 545:49]
    pp5_REG_53 <= pp5_REG_52 @[elegant.scala 545:41]
    pp5_REG_54 <= pp5_REG_53 @[elegant.scala 545:33]
    pp5_REG_55 <= pp5_REG_54 @[elegant.scala 545:25]
    pp6_REG_65 <= _pp6_T_55 @[elegant.scala 546:57]
    pp6_REG_66 <= pp6_REG_65 @[elegant.scala 546:49]
    pp6_REG_67 <= pp6_REG_66 @[elegant.scala 546:41]
    pp6_REG_68 <= pp6_REG_67 @[elegant.scala 546:33]
    pp6_REG_69 <= pp6_REG_68 @[elegant.scala 546:25]
    pp7_REG_78 <= _pp7_T_55 @[elegant.scala 547:65]
    pp7_REG_79 <= pp7_REG_78 @[elegant.scala 547:57]
    pp7_REG_80 <= pp7_REG_79 @[elegant.scala 547:49]
    pp7_REG_81 <= pp7_REG_80 @[elegant.scala 547:41]
    pp7_REG_82 <= pp7_REG_81 @[elegant.scala 547:33]
    pp7_REG_83 <= pp7_REG_82 @[elegant.scala 547:25]
    pp8_REG_91 <= _pp8_T_55 @[elegant.scala 548:73]
    pp8_REG_92 <= pp8_REG_91 @[elegant.scala 548:65]
    pp8_REG_93 <= pp8_REG_92 @[elegant.scala 548:57]
    pp8_REG_94 <= pp8_REG_93 @[elegant.scala 548:49]
    pp8_REG_95 <= pp8_REG_94 @[elegant.scala 548:41]
    pp8_REG_96 <= pp8_REG_95 @[elegant.scala 548:33]
    pp8_REG_97 <= pp8_REG_96 @[elegant.scala 548:25]
    dotProductRegs_13_REG <= _dotProductRegs_13_T_10 @[elegant.scala 549:151]
    dotProductRegs_13_REG_1 <= dotProductRegs_13_REG @[elegant.scala 549:143]
    dotProductRegs_13_REG_2 <= dotProductRegs_13_REG_1 @[elegant.scala 549:135]
    dotProductRegs_13_REG_3 <= dotProductRegs_13_REG_2 @[elegant.scala 549:127]
    dotProductRegs_13_REG_4 <= dotProductRegs_13_REG_3 @[elegant.scala 549:119]
    dotProductRegs_13_REG_5 <= dotProductRegs_13_REG_4 @[elegant.scala 549:111]
    dotProductRegs_13_REG_6 <= dotProductRegs_13_REG_5 @[elegant.scala 549:103]
    dotProductRegs_13_REG_7 <= dotProductRegs_13_REG_6 @[elegant.scala 549:95]
    multiplierReg_14 <= mux(reset, UInt<6>("h0"), io_in_a_man_14) @[elegant.scala 524:{34,34} 538:21]
    multiplierReg2_14 <= mux(reset, UInt<6>("h0"), io_in_b_man_14) @[elegant.scala 525:{35,35} 539:22]
    signReg_14 <= mux(reset, UInt<1>("h0"), io_in_a_sign_14) @[elegant.scala 527:{28,28} 537:15]
    pp1_14 <= mux(reset, UInt<12>("h0"), _pp1_T_44) @[elegant.scala 528:{24,24} 541:15]
    pp2_14 <= mux(reset, UInt<12>("h0"), pp2_REG_14) @[elegant.scala 529:{24,24} 542:15]
    pp3_14 <= mux(reset, UInt<12>("h0"), pp3_REG_29) @[elegant.scala 530:{24,24} 543:15]
    pp4_14 <= mux(reset, UInt<12>("h0"), pp4_REG_44) @[elegant.scala 531:{24,24} 544:15]
    pp5_14 <= mux(reset, UInt<12>("h0"), pp5_REG_59) @[elegant.scala 532:{24,24} 545:15]
    pp6_14 <= mux(reset, UInt<12>("h0"), pp6_REG_74) @[elegant.scala 533:{24,24} 546:15]
    pp7_14 <= mux(reset, UInt<12>("h0"), pp7_REG_89) @[elegant.scala 534:{24,24} 547:15]
    pp8_14 <= mux(reset, UInt<12>("h0"), pp8_REG_104) @[elegant.scala 535:{24,24} 548:15]
    pp9_14 <= mux(reset, UInt<12>("h0"), pp9_14) @[elegant.scala 536:{24,24,24}]
    pp2_REG_14 <= _pp2_T_59 @[elegant.scala 542:25]
    pp3_REG_28 <= _pp3_T_59 @[elegant.scala 543:33]
    pp3_REG_29 <= pp3_REG_28 @[elegant.scala 543:25]
    pp4_REG_42 <= _pp4_T_59 @[elegant.scala 544:41]
    pp4_REG_43 <= pp4_REG_42 @[elegant.scala 544:33]
    pp4_REG_44 <= pp4_REG_43 @[elegant.scala 544:25]
    pp5_REG_56 <= _pp5_T_59 @[elegant.scala 545:49]
    pp5_REG_57 <= pp5_REG_56 @[elegant.scala 545:41]
    pp5_REG_58 <= pp5_REG_57 @[elegant.scala 545:33]
    pp5_REG_59 <= pp5_REG_58 @[elegant.scala 545:25]
    pp6_REG_70 <= _pp6_T_59 @[elegant.scala 546:57]
    pp6_REG_71 <= pp6_REG_70 @[elegant.scala 546:49]
    pp6_REG_72 <= pp6_REG_71 @[elegant.scala 546:41]
    pp6_REG_73 <= pp6_REG_72 @[elegant.scala 546:33]
    pp6_REG_74 <= pp6_REG_73 @[elegant.scala 546:25]
    pp7_REG_84 <= _pp7_T_59 @[elegant.scala 547:65]
    pp7_REG_85 <= pp7_REG_84 @[elegant.scala 547:57]
    pp7_REG_86 <= pp7_REG_85 @[elegant.scala 547:49]
    pp7_REG_87 <= pp7_REG_86 @[elegant.scala 547:41]
    pp7_REG_88 <= pp7_REG_87 @[elegant.scala 547:33]
    pp7_REG_89 <= pp7_REG_88 @[elegant.scala 547:25]
    pp8_REG_98 <= _pp8_T_59 @[elegant.scala 548:73]
    pp8_REG_99 <= pp8_REG_98 @[elegant.scala 548:65]
    pp8_REG_100 <= pp8_REG_99 @[elegant.scala 548:57]
    pp8_REG_101 <= pp8_REG_100 @[elegant.scala 548:49]
    pp8_REG_102 <= pp8_REG_101 @[elegant.scala 548:41]
    pp8_REG_103 <= pp8_REG_102 @[elegant.scala 548:33]
    pp8_REG_104 <= pp8_REG_103 @[elegant.scala 548:25]
    dotProductRegs_14_REG <= _dotProductRegs_14_T_10 @[elegant.scala 549:151]
    dotProductRegs_14_REG_1 <= dotProductRegs_14_REG @[elegant.scala 549:143]
    dotProductRegs_14_REG_2 <= dotProductRegs_14_REG_1 @[elegant.scala 549:135]
    dotProductRegs_14_REG_3 <= dotProductRegs_14_REG_2 @[elegant.scala 549:127]
    dotProductRegs_14_REG_4 <= dotProductRegs_14_REG_3 @[elegant.scala 549:119]
    dotProductRegs_14_REG_5 <= dotProductRegs_14_REG_4 @[elegant.scala 549:111]
    dotProductRegs_14_REG_6 <= dotProductRegs_14_REG_5 @[elegant.scala 549:103]
    dotProductRegs_14_REG_7 <= dotProductRegs_14_REG_6 @[elegant.scala 549:95]
    multiplierReg_15 <= mux(reset, UInt<6>("h0"), io_in_a_man_15) @[elegant.scala 524:{34,34} 538:21]
    multiplierReg2_15 <= mux(reset, UInt<6>("h0"), io_in_b_man_15) @[elegant.scala 525:{35,35} 539:22]
    signReg_15 <= mux(reset, UInt<1>("h0"), io_in_a_sign_15) @[elegant.scala 527:{28,28} 537:15]
    pp1_15 <= mux(reset, UInt<12>("h0"), _pp1_T_47) @[elegant.scala 528:{24,24} 541:15]
    pp2_15 <= mux(reset, UInt<12>("h0"), pp2_REG_15) @[elegant.scala 529:{24,24} 542:15]
    pp3_15 <= mux(reset, UInt<12>("h0"), pp3_REG_31) @[elegant.scala 530:{24,24} 543:15]
    pp4_15 <= mux(reset, UInt<12>("h0"), pp4_REG_47) @[elegant.scala 531:{24,24} 544:15]
    pp5_15 <= mux(reset, UInt<12>("h0"), pp5_REG_63) @[elegant.scala 532:{24,24} 545:15]
    pp6_15 <= mux(reset, UInt<12>("h0"), pp6_REG_79) @[elegant.scala 533:{24,24} 546:15]
    pp7_15 <= mux(reset, UInt<12>("h0"), pp7_REG_95) @[elegant.scala 534:{24,24} 547:15]
    pp8_15 <= mux(reset, UInt<12>("h0"), pp8_REG_111) @[elegant.scala 535:{24,24} 548:15]
    pp9_15 <= mux(reset, UInt<12>("h0"), pp9_15) @[elegant.scala 536:{24,24,24}]
    pp2_REG_15 <= _pp2_T_63 @[elegant.scala 542:25]
    pp3_REG_30 <= _pp3_T_63 @[elegant.scala 543:33]
    pp3_REG_31 <= pp3_REG_30 @[elegant.scala 543:25]
    pp4_REG_45 <= _pp4_T_63 @[elegant.scala 544:41]
    pp4_REG_46 <= pp4_REG_45 @[elegant.scala 544:33]
    pp4_REG_47 <= pp4_REG_46 @[elegant.scala 544:25]
    pp5_REG_60 <= _pp5_T_63 @[elegant.scala 545:49]
    pp5_REG_61 <= pp5_REG_60 @[elegant.scala 545:41]
    pp5_REG_62 <= pp5_REG_61 @[elegant.scala 545:33]
    pp5_REG_63 <= pp5_REG_62 @[elegant.scala 545:25]
    pp6_REG_75 <= _pp6_T_63 @[elegant.scala 546:57]
    pp6_REG_76 <= pp6_REG_75 @[elegant.scala 546:49]
    pp6_REG_77 <= pp6_REG_76 @[elegant.scala 546:41]
    pp6_REG_78 <= pp6_REG_77 @[elegant.scala 546:33]
    pp6_REG_79 <= pp6_REG_78 @[elegant.scala 546:25]
    pp7_REG_90 <= _pp7_T_63 @[elegant.scala 547:65]
    pp7_REG_91 <= pp7_REG_90 @[elegant.scala 547:57]
    pp7_REG_92 <= pp7_REG_91 @[elegant.scala 547:49]
    pp7_REG_93 <= pp7_REG_92 @[elegant.scala 547:41]
    pp7_REG_94 <= pp7_REG_93 @[elegant.scala 547:33]
    pp7_REG_95 <= pp7_REG_94 @[elegant.scala 547:25]
    pp8_REG_105 <= _pp8_T_63 @[elegant.scala 548:73]
    pp8_REG_106 <= pp8_REG_105 @[elegant.scala 548:65]
    pp8_REG_107 <= pp8_REG_106 @[elegant.scala 548:57]
    pp8_REG_108 <= pp8_REG_107 @[elegant.scala 548:49]
    pp8_REG_109 <= pp8_REG_108 @[elegant.scala 548:41]
    pp8_REG_110 <= pp8_REG_109 @[elegant.scala 548:33]
    pp8_REG_111 <= pp8_REG_110 @[elegant.scala 548:25]
    dotProductRegs_15_REG <= _dotProductRegs_15_T_10 @[elegant.scala 549:151]
    dotProductRegs_15_REG_1 <= dotProductRegs_15_REG @[elegant.scala 549:143]
    dotProductRegs_15_REG_2 <= dotProductRegs_15_REG_1 @[elegant.scala 549:135]
    dotProductRegs_15_REG_3 <= dotProductRegs_15_REG_2 @[elegant.scala 549:127]
    dotProductRegs_15_REG_4 <= dotProductRegs_15_REG_3 @[elegant.scala 549:119]
    dotProductRegs_15_REG_5 <= dotProductRegs_15_REG_4 @[elegant.scala 549:111]
    dotProductRegs_15_REG_6 <= dotProductRegs_15_REG_5 @[elegant.scala 549:103]
    dotProductRegs_15_REG_7 <= dotProductRegs_15_REG_6 @[elegant.scala 549:95]
    right_shift <= mux(reset, UInt<8>("h0"), _right_shift_T_42) @[elegant.scala 585:{28,28} 589:15]
    actual_shift <= mux(reset, UInt<8>("h0"), _actual_shift_T_3) @[elegant.scala 586:{29,29} 591:16]
