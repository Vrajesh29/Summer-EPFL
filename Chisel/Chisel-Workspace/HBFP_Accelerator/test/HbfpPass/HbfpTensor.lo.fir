FIRRTL version 1.1.0
circuit HbfpTensor :
  module adderTree2 :
    input clock : Clock
    input reset : UInt<1>
    input io_sign_man_0 : SInt<28>
    input io_sign_man_1 : SInt<28>
    input io_sign_man_2 : SInt<28>
    input io_sign_man_3 : SInt<28>
    input io_exps_0 : UInt<9>
    input io_exps_1 : UInt<9>
    input io_exps_2 : UInt<9>
    input io_exps_3 : UInt<9>
    input io_control_signal : UInt<1>
    input io_control_signal2 : UInt<1>
    output io_result_tree : UInt<15>

    reg exp_buffer_0 : UInt<9>, clock with :
      reset => (UInt<1>("h0"), exp_buffer_0) @[block_division.scala 70:60]
    reg exp_buffer_1 : UInt<9>, clock with :
      reset => (UInt<1>("h0"), exp_buffer_1) @[block_division.scala 70:60]
    reg exp_buffer_2 : UInt<9>, clock with :
      reset => (UInt<1>("h0"), exp_buffer_2) @[block_division.scala 70:60]
    reg exp_buffer_3 : UInt<9>, clock with :
      reset => (UInt<1>("h0"), exp_buffer_3) @[block_division.scala 70:60]
    reg man_buffer_two_complement_0 : SInt<31>, clock with :
      reset => (UInt<1>("h0"), man_buffer_two_complement_0) @[block_division.scala 72:12]
    reg man_buffer_two_complement_1 : SInt<31>, clock with :
      reset => (UInt<1>("h0"), man_buffer_two_complement_1) @[block_division.scala 72:12]
    reg man_buffer_two_complement_2 : SInt<31>, clock with :
      reset => (UInt<1>("h0"), man_buffer_two_complement_2) @[block_division.scala 72:12]
    reg man_buffer_two_complement_3 : SInt<31>, clock with :
      reset => (UInt<1>("h0"), man_buffer_two_complement_3) @[block_division.scala 72:12]
    node _T = eq(io_control_signal, UInt<1>("h0")) @[block_division.scala 77:26]
    node _GEN_0 = mux(_T, io_exps_0, exp_buffer_0) @[block_division.scala 77:34 81:21 70:60]
    node _GEN_1 = mux(_T, io_sign_man_0, man_buffer_two_complement_0) @[block_division.scala 72:12 77:34 82:36]
    node _GEN_2 = mux(_T, io_exps_1, exp_buffer_1) @[block_division.scala 77:34 81:21 70:60]
    node _GEN_3 = mux(_T, io_sign_man_1, man_buffer_two_complement_1) @[block_division.scala 72:12 77:34 82:36]
    node _GEN_4 = mux(_T, io_exps_2, exp_buffer_2) @[block_division.scala 77:34 81:21 70:60]
    node _GEN_5 = mux(_T, io_sign_man_2, man_buffer_two_complement_2) @[block_division.scala 72:12 77:34 82:36]
    node _GEN_6 = mux(_T, io_exps_3, exp_buffer_3) @[block_division.scala 77:34 81:21 70:60]
    node _GEN_7 = mux(_T, io_sign_man_3, man_buffer_two_complement_3) @[block_division.scala 72:12 77:34 82:36]
    reg v : UInt<10>, clock with :
      reset => (UInt<1>("h0"), v) @[block_division.scala 88:18]
    reg enable : UInt<1>, clock with :
      reset => (UInt<1>("h0"), enable) @[block_division.scala 89:19]
    node _T_1 = eq(io_control_signal2, UInt<1>("h1")) @[block_division.scala 90:28]
    node _GEN_8 = mux(_T_1, UInt<1>("h1"), enable) @[block_division.scala 90:36 91:12 89:19]
    node _T_2 = eq(enable, UInt<1>("h1")) @[block_division.scala 95:38]
    node _T_3 = and(io_control_signal, _T_2) @[block_division.scala 95:27]
    node _v_T = add(v, UInt<1>("h1")) @[block_division.scala 99:16]
    node _v_T_1 = tail(_v_T, 1) @[block_division.scala 99:16]
    node _exp_buffer_0_T = gt(exp_buffer_0, exp_buffer_1) @[block_division.scala 103:31]
    node _exp_buffer_0_T_1 = mux(_exp_buffer_0_T, exp_buffer_0, exp_buffer_1) @[block_division.scala 102:33]
    node _exp_difference_T = gt(exp_buffer_0, exp_buffer_1) @[block_division.scala 108:31]
    node _exp_difference_T_1 = sub(exp_buffer_0, exp_buffer_1) @[block_division.scala 109:31]
    node _exp_difference_T_2 = tail(_exp_difference_T_1, 1) @[block_division.scala 109:31]
    node _exp_difference_T_3 = sub(exp_buffer_1, exp_buffer_0) @[block_division.scala 110:35]
    node _exp_difference_T_4 = tail(_exp_difference_T_3, 1) @[block_division.scala 110:35]
    node exp_difference = mux(_exp_difference_T, _exp_difference_T_2, _exp_difference_T_4) @[block_division.scala 107:35]
    node _man_buffer_two_complement_0_T = gt(exp_buffer_0, exp_buffer_1) @[block_division.scala 113:31]
    node _man_buffer_two_complement_0_T_1 = bits(man_buffer_two_complement_1, 30, 30) @[block_division.scala 114:89]
    node _man_buffer_two_complement_0_T_2 = eq(_man_buffer_two_complement_0_T_1, UInt<1>("h1")) @[block_division.scala 114:147]
    node _man_buffer_two_complement_0_T_3 = not(man_buffer_two_complement_1) @[block_division.scala 115:21]
    node _man_buffer_two_complement_0_T_4 = asSInt(_man_buffer_two_complement_0_T_3) @[block_division.scala 115:21]
    node _man_buffer_two_complement_0_T_5 = add(_man_buffer_two_complement_0_T_4, asSInt(UInt<2>("h1"))) @[block_division.scala 115:61]
    node _man_buffer_two_complement_0_T_6 = tail(_man_buffer_two_complement_0_T_5, 1) @[block_division.scala 115:61]
    node _man_buffer_two_complement_0_T_7 = asSInt(_man_buffer_two_complement_0_T_6) @[block_division.scala 115:61]
    node _man_buffer_two_complement_0_T_8 = dshr(_man_buffer_two_complement_0_T_7, exp_difference) @[block_division.scala 115:68]
    node _man_buffer_two_complement_0_T_9 = sub(asSInt(UInt<1>("h0")), _man_buffer_two_complement_0_T_8) @[block_division.scala 115:17]
    node _man_buffer_two_complement_0_T_10 = tail(_man_buffer_two_complement_0_T_9, 1) @[block_division.scala 115:17]
    node _man_buffer_two_complement_0_T_11 = asSInt(_man_buffer_two_complement_0_T_10) @[block_division.scala 115:17]
    node _man_buffer_two_complement_0_T_12 = dshr(man_buffer_two_complement_1, exp_difference) @[block_division.scala 116:51]
    node _man_buffer_two_complement_0_T_13 = mux(_man_buffer_two_complement_0_T_2, _man_buffer_two_complement_0_T_11, _man_buffer_two_complement_0_T_12) @[block_division.scala 114:51]
    node _man_buffer_two_complement_0_T_14 = add(man_buffer_two_complement_0, _man_buffer_two_complement_0_T_13) @[block_division.scala 114:46]
    node _man_buffer_two_complement_0_T_15 = tail(_man_buffer_two_complement_0_T_14, 1) @[block_division.scala 114:46]
    node _man_buffer_two_complement_0_T_16 = asSInt(_man_buffer_two_complement_0_T_15) @[block_division.scala 114:46]
    node _man_buffer_two_complement_0_T_17 = bits(man_buffer_two_complement_0, 30, 30) @[block_division.scala 118:89]
    node _man_buffer_two_complement_0_T_18 = eq(_man_buffer_two_complement_0_T_17, UInt<1>("h1")) @[block_division.scala 118:147]
    node _man_buffer_two_complement_0_T_19 = not(man_buffer_two_complement_0) @[block_division.scala 119:21]
    node _man_buffer_two_complement_0_T_20 = asSInt(_man_buffer_two_complement_0_T_19) @[block_division.scala 119:21]
    node _man_buffer_two_complement_0_T_21 = add(_man_buffer_two_complement_0_T_20, asSInt(UInt<2>("h1"))) @[block_division.scala 119:57]
    node _man_buffer_two_complement_0_T_22 = tail(_man_buffer_two_complement_0_T_21, 1) @[block_division.scala 119:57]
    node _man_buffer_two_complement_0_T_23 = asSInt(_man_buffer_two_complement_0_T_22) @[block_division.scala 119:57]
    node _man_buffer_two_complement_0_T_24 = dshr(_man_buffer_two_complement_0_T_23, exp_difference) @[block_division.scala 119:64]
    node _man_buffer_two_complement_0_T_25 = sub(asSInt(UInt<1>("h0")), _man_buffer_two_complement_0_T_24) @[block_division.scala 119:17]
    node _man_buffer_two_complement_0_T_26 = tail(_man_buffer_two_complement_0_T_25, 1) @[block_division.scala 119:17]
    node _man_buffer_two_complement_0_T_27 = asSInt(_man_buffer_two_complement_0_T_26) @[block_division.scala 119:17]
    node _man_buffer_two_complement_0_T_28 = dshr(man_buffer_two_complement_0, exp_difference) @[block_division.scala 120:47]
    node _man_buffer_two_complement_0_T_29 = mux(_man_buffer_two_complement_0_T_18, _man_buffer_two_complement_0_T_27, _man_buffer_two_complement_0_T_28) @[block_division.scala 118:55]
    node _man_buffer_two_complement_0_T_30 = add(man_buffer_two_complement_1, _man_buffer_two_complement_0_T_29) @[block_division.scala 118:50]
    node _man_buffer_two_complement_0_T_31 = tail(_man_buffer_two_complement_0_T_30, 1) @[block_division.scala 118:50]
    node _man_buffer_two_complement_0_T_32 = asSInt(_man_buffer_two_complement_0_T_31) @[block_division.scala 118:50]
    node _man_buffer_two_complement_0_T_33 = mux(_man_buffer_two_complement_0_T, _man_buffer_two_complement_0_T_16, _man_buffer_two_complement_0_T_32) @[block_division.scala 112:46]
    node _exp_buffer_1_T = gt(exp_buffer_2, exp_buffer_3) @[block_division.scala 103:31]
    node _exp_buffer_1_T_1 = mux(_exp_buffer_1_T, exp_buffer_2, exp_buffer_3) @[block_division.scala 102:33]
    node _exp_difference_T_5 = gt(exp_buffer_2, exp_buffer_3) @[block_division.scala 108:31]
    node _exp_difference_T_6 = sub(exp_buffer_2, exp_buffer_3) @[block_division.scala 109:31]
    node _exp_difference_T_7 = tail(_exp_difference_T_6, 1) @[block_division.scala 109:31]
    node _exp_difference_T_8 = sub(exp_buffer_3, exp_buffer_2) @[block_division.scala 110:35]
    node _exp_difference_T_9 = tail(_exp_difference_T_8, 1) @[block_division.scala 110:35]
    node exp_difference_1 = mux(_exp_difference_T_5, _exp_difference_T_7, _exp_difference_T_9) @[block_division.scala 107:35]
    node _man_buffer_two_complement_1_T = gt(exp_buffer_2, exp_buffer_3) @[block_division.scala 113:31]
    node _man_buffer_two_complement_1_T_1 = bits(man_buffer_two_complement_3, 30, 30) @[block_division.scala 114:89]
    node _man_buffer_two_complement_1_T_2 = eq(_man_buffer_two_complement_1_T_1, UInt<1>("h1")) @[block_division.scala 114:147]
    node _man_buffer_two_complement_1_T_3 = not(man_buffer_two_complement_3) @[block_division.scala 115:21]
    node _man_buffer_two_complement_1_T_4 = asSInt(_man_buffer_two_complement_1_T_3) @[block_division.scala 115:21]
    node _man_buffer_two_complement_1_T_5 = add(_man_buffer_two_complement_1_T_4, asSInt(UInt<2>("h1"))) @[block_division.scala 115:61]
    node _man_buffer_two_complement_1_T_6 = tail(_man_buffer_two_complement_1_T_5, 1) @[block_division.scala 115:61]
    node _man_buffer_two_complement_1_T_7 = asSInt(_man_buffer_two_complement_1_T_6) @[block_division.scala 115:61]
    node _man_buffer_two_complement_1_T_8 = dshr(_man_buffer_two_complement_1_T_7, exp_difference_1) @[block_division.scala 115:68]
    node _man_buffer_two_complement_1_T_9 = sub(asSInt(UInt<1>("h0")), _man_buffer_two_complement_1_T_8) @[block_division.scala 115:17]
    node _man_buffer_two_complement_1_T_10 = tail(_man_buffer_two_complement_1_T_9, 1) @[block_division.scala 115:17]
    node _man_buffer_two_complement_1_T_11 = asSInt(_man_buffer_two_complement_1_T_10) @[block_division.scala 115:17]
    node _man_buffer_two_complement_1_T_12 = dshr(man_buffer_two_complement_3, exp_difference_1) @[block_division.scala 116:51]
    node _man_buffer_two_complement_1_T_13 = mux(_man_buffer_two_complement_1_T_2, _man_buffer_two_complement_1_T_11, _man_buffer_two_complement_1_T_12) @[block_division.scala 114:51]
    node _man_buffer_two_complement_1_T_14 = add(man_buffer_two_complement_2, _man_buffer_two_complement_1_T_13) @[block_division.scala 114:46]
    node _man_buffer_two_complement_1_T_15 = tail(_man_buffer_two_complement_1_T_14, 1) @[block_division.scala 114:46]
    node _man_buffer_two_complement_1_T_16 = asSInt(_man_buffer_two_complement_1_T_15) @[block_division.scala 114:46]
    node _man_buffer_two_complement_1_T_17 = bits(man_buffer_two_complement_2, 30, 30) @[block_division.scala 118:89]
    node _man_buffer_two_complement_1_T_18 = eq(_man_buffer_two_complement_1_T_17, UInt<1>("h1")) @[block_division.scala 118:147]
    node _man_buffer_two_complement_1_T_19 = not(man_buffer_two_complement_2) @[block_division.scala 119:21]
    node _man_buffer_two_complement_1_T_20 = asSInt(_man_buffer_two_complement_1_T_19) @[block_division.scala 119:21]
    node _man_buffer_two_complement_1_T_21 = add(_man_buffer_two_complement_1_T_20, asSInt(UInt<2>("h1"))) @[block_division.scala 119:57]
    node _man_buffer_two_complement_1_T_22 = tail(_man_buffer_two_complement_1_T_21, 1) @[block_division.scala 119:57]
    node _man_buffer_two_complement_1_T_23 = asSInt(_man_buffer_two_complement_1_T_22) @[block_division.scala 119:57]
    node _man_buffer_two_complement_1_T_24 = dshr(_man_buffer_two_complement_1_T_23, exp_difference_1) @[block_division.scala 119:64]
    node _man_buffer_two_complement_1_T_25 = sub(asSInt(UInt<1>("h0")), _man_buffer_two_complement_1_T_24) @[block_division.scala 119:17]
    node _man_buffer_two_complement_1_T_26 = tail(_man_buffer_two_complement_1_T_25, 1) @[block_division.scala 119:17]
    node _man_buffer_two_complement_1_T_27 = asSInt(_man_buffer_two_complement_1_T_26) @[block_division.scala 119:17]
    node _man_buffer_two_complement_1_T_28 = dshr(man_buffer_two_complement_2, exp_difference_1) @[block_division.scala 120:47]
    node _man_buffer_two_complement_1_T_29 = mux(_man_buffer_two_complement_1_T_18, _man_buffer_two_complement_1_T_27, _man_buffer_two_complement_1_T_28) @[block_division.scala 118:55]
    node _man_buffer_two_complement_1_T_30 = add(man_buffer_two_complement_3, _man_buffer_two_complement_1_T_29) @[block_division.scala 118:50]
    node _man_buffer_two_complement_1_T_31 = tail(_man_buffer_two_complement_1_T_30, 1) @[block_division.scala 118:50]
    node _man_buffer_two_complement_1_T_32 = asSInt(_man_buffer_two_complement_1_T_31) @[block_division.scala 118:50]
    node _man_buffer_two_complement_1_T_33 = mux(_man_buffer_two_complement_1_T, _man_buffer_two_complement_1_T_16, _man_buffer_two_complement_1_T_32) @[block_division.scala 112:46]
    node _T_4 = eq(v, UInt<1>("h1")) @[block_division.scala 127:15]
    node _GEN_9 = mux(_T_4, UInt<1>("h0"), _GEN_8) @[block_division.scala 127:64 128:16]
    node _v_T_2 = add(v, UInt<1>("h1")) @[block_division.scala 99:16]
    node _v_T_3 = tail(_v_T_2, 1) @[block_division.scala 99:16]
    node _exp_buffer_0_T_2 = gt(exp_buffer_0, exp_buffer_1) @[block_division.scala 103:31]
    node _exp_buffer_0_T_3 = mux(_exp_buffer_0_T_2, exp_buffer_0, exp_buffer_1) @[block_division.scala 102:33]
    node _exp_difference_T_10 = gt(exp_buffer_0, exp_buffer_1) @[block_division.scala 108:31]
    node _exp_difference_T_11 = sub(exp_buffer_0, exp_buffer_1) @[block_division.scala 109:31]
    node _exp_difference_T_12 = tail(_exp_difference_T_11, 1) @[block_division.scala 109:31]
    node _exp_difference_T_13 = sub(exp_buffer_1, exp_buffer_0) @[block_division.scala 110:35]
    node _exp_difference_T_14 = tail(_exp_difference_T_13, 1) @[block_division.scala 110:35]
    node exp_difference_2 = mux(_exp_difference_T_10, _exp_difference_T_12, _exp_difference_T_14) @[block_division.scala 107:35]
    node _man_buffer_two_complement_0_T_34 = gt(exp_buffer_0, exp_buffer_1) @[block_division.scala 113:31]
    node _man_buffer_two_complement_0_T_35 = bits(man_buffer_two_complement_1, 30, 30) @[block_division.scala 114:89]
    node _man_buffer_two_complement_0_T_36 = eq(_man_buffer_two_complement_0_T_35, UInt<1>("h1")) @[block_division.scala 114:147]
    node _man_buffer_two_complement_0_T_37 = not(man_buffer_two_complement_1) @[block_division.scala 115:21]
    node _man_buffer_two_complement_0_T_38 = asSInt(_man_buffer_two_complement_0_T_37) @[block_division.scala 115:21]
    node _man_buffer_two_complement_0_T_39 = add(_man_buffer_two_complement_0_T_38, asSInt(UInt<2>("h1"))) @[block_division.scala 115:61]
    node _man_buffer_two_complement_0_T_40 = tail(_man_buffer_two_complement_0_T_39, 1) @[block_division.scala 115:61]
    node _man_buffer_two_complement_0_T_41 = asSInt(_man_buffer_two_complement_0_T_40) @[block_division.scala 115:61]
    node _man_buffer_two_complement_0_T_42 = dshr(_man_buffer_two_complement_0_T_41, exp_difference_2) @[block_division.scala 115:68]
    node _man_buffer_two_complement_0_T_43 = sub(asSInt(UInt<1>("h0")), _man_buffer_two_complement_0_T_42) @[block_division.scala 115:17]
    node _man_buffer_two_complement_0_T_44 = tail(_man_buffer_two_complement_0_T_43, 1) @[block_division.scala 115:17]
    node _man_buffer_two_complement_0_T_45 = asSInt(_man_buffer_two_complement_0_T_44) @[block_division.scala 115:17]
    node _man_buffer_two_complement_0_T_46 = dshr(man_buffer_two_complement_1, exp_difference_2) @[block_division.scala 116:51]
    node _man_buffer_two_complement_0_T_47 = mux(_man_buffer_two_complement_0_T_36, _man_buffer_two_complement_0_T_45, _man_buffer_two_complement_0_T_46) @[block_division.scala 114:51]
    node _man_buffer_two_complement_0_T_48 = add(man_buffer_two_complement_0, _man_buffer_two_complement_0_T_47) @[block_division.scala 114:46]
    node _man_buffer_two_complement_0_T_49 = tail(_man_buffer_two_complement_0_T_48, 1) @[block_division.scala 114:46]
    node _man_buffer_two_complement_0_T_50 = asSInt(_man_buffer_two_complement_0_T_49) @[block_division.scala 114:46]
    node _man_buffer_two_complement_0_T_51 = bits(man_buffer_two_complement_0, 30, 30) @[block_division.scala 118:89]
    node _man_buffer_two_complement_0_T_52 = eq(_man_buffer_two_complement_0_T_51, UInt<1>("h1")) @[block_division.scala 118:147]
    node _man_buffer_two_complement_0_T_53 = not(man_buffer_two_complement_0) @[block_division.scala 119:21]
    node _man_buffer_two_complement_0_T_54 = asSInt(_man_buffer_two_complement_0_T_53) @[block_division.scala 119:21]
    node _man_buffer_two_complement_0_T_55 = add(_man_buffer_two_complement_0_T_54, asSInt(UInt<2>("h1"))) @[block_division.scala 119:57]
    node _man_buffer_two_complement_0_T_56 = tail(_man_buffer_two_complement_0_T_55, 1) @[block_division.scala 119:57]
    node _man_buffer_two_complement_0_T_57 = asSInt(_man_buffer_two_complement_0_T_56) @[block_division.scala 119:57]
    node _man_buffer_two_complement_0_T_58 = dshr(_man_buffer_two_complement_0_T_57, exp_difference_2) @[block_division.scala 119:64]
    node _man_buffer_two_complement_0_T_59 = sub(asSInt(UInt<1>("h0")), _man_buffer_two_complement_0_T_58) @[block_division.scala 119:17]
    node _man_buffer_two_complement_0_T_60 = tail(_man_buffer_two_complement_0_T_59, 1) @[block_division.scala 119:17]
    node _man_buffer_two_complement_0_T_61 = asSInt(_man_buffer_two_complement_0_T_60) @[block_division.scala 119:17]
    node _man_buffer_two_complement_0_T_62 = dshr(man_buffer_two_complement_0, exp_difference_2) @[block_division.scala 120:47]
    node _man_buffer_two_complement_0_T_63 = mux(_man_buffer_two_complement_0_T_52, _man_buffer_two_complement_0_T_61, _man_buffer_two_complement_0_T_62) @[block_division.scala 118:55]
    node _man_buffer_two_complement_0_T_64 = add(man_buffer_two_complement_1, _man_buffer_two_complement_0_T_63) @[block_division.scala 118:50]
    node _man_buffer_two_complement_0_T_65 = tail(_man_buffer_two_complement_0_T_64, 1) @[block_division.scala 118:50]
    node _man_buffer_two_complement_0_T_66 = asSInt(_man_buffer_two_complement_0_T_65) @[block_division.scala 118:50]
    node _man_buffer_two_complement_0_T_67 = mux(_man_buffer_two_complement_0_T_34, _man_buffer_two_complement_0_T_50, _man_buffer_two_complement_0_T_66) @[block_division.scala 112:46]
    node _T_5 = eq(v, UInt<1>("h1")) @[block_division.scala 127:15]
    node _GEN_10 = mux(_T_5, UInt<1>("h0"), _GEN_9) @[block_division.scala 127:64 128:16]
    node _GEN_11 = mux(_T_3, _v_T_3, v) @[block_division.scala 95:47 99:11 88:18]
    node _GEN_12 = mux(_T_3, _exp_buffer_0_T_3, _GEN_0) @[block_division.scala 102:27 95:47]
    node _GEN_13 = mux(_T_3, _man_buffer_two_complement_0_T_67, _GEN_1) @[block_division.scala 112:40 95:47]
    node _GEN_14 = mux(_T_3, _exp_buffer_1_T_1, _GEN_2) @[block_division.scala 102:27 95:47]
    node _GEN_15 = mux(_T_3, _man_buffer_two_complement_1_T_33, _GEN_3) @[block_division.scala 112:40 95:47]
    node _GEN_16 = mux(_T_3, _GEN_10, _GEN_8) @[block_division.scala 95:47]
    reg sign_man_hbfp : UInt<31>, clock with :
      reset => (UInt<1>("h0"), sign_man_hbfp) @[block_division.scala 134:30]
    node _sign_man_hbfp_T = bits(man_buffer_two_complement_0, 30, 30) @[block_division.scala 138:33]
    node _sign_man_hbfp_T_1 = eq(_sign_man_hbfp_T, UInt<1>("h1")) @[block_division.scala 140:14]
    node _sign_man_hbfp_T_2 = bits(man_buffer_two_complement_0, 29, 0) @[block_division.scala 141:43]
    node _sign_man_hbfp_T_3 = cat(UInt<1>("h0"), _sign_man_hbfp_T_2) @[block_division.scala 141:11]
    node _sign_man_hbfp_T_4 = not(_sign_man_hbfp_T_3) @[block_division.scala 141:5]
    node _sign_man_hbfp_T_5 = add(_sign_man_hbfp_T_4, UInt<1>("h1")) @[block_division.scala 144:16]
    node _sign_man_hbfp_T_6 = tail(_sign_man_hbfp_T_5, 1) @[block_division.scala 144:16]
    node _sign_man_hbfp_T_7 = asUInt(man_buffer_two_complement_0) @[block_division.scala 145:36]
    node _sign_man_hbfp_T_8 = mux(_sign_man_hbfp_T_1, _sign_man_hbfp_T_6, _sign_man_hbfp_T_7) @[block_division.scala 137:23]
    reg right_shift : UInt<8>, clock with :
      reset => (UInt<1>("h0"), right_shift) @[block_division.scala 148:28]
    reg actual_shift : UInt<8>, clock with :
      reset => (UInt<1>("h0"), actual_shift) @[block_division.scala 149:29]
    node _buf_T = bits(sign_man_hbfp, 29, 6) @[block_division.scala 151:18]
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
    node _buf_T_41 = bits(_buf_T, 23, 16) @[Bitwise.scala 114:47]
    node _buf_T_42 = shl(UInt<4>("hf"), 4) @[Bitwise.scala 107:52]
    node _buf_T_43 = xor(UInt<8>("hff"), _buf_T_42) @[Bitwise.scala 107:21]
    node _buf_T_44 = shr(_buf_T_41, 4) @[Bitwise.scala 108:21]
    node _buf_T_45 = and(_buf_T_44, _buf_T_43) @[Bitwise.scala 108:31]
    node _buf_T_46 = bits(_buf_T_41, 3, 0) @[Bitwise.scala 108:46]
    node _buf_T_47 = shl(_buf_T_46, 4) @[Bitwise.scala 108:70]
    node _buf_T_48 = not(_buf_T_43) @[Bitwise.scala 108:82]
    node _buf_T_49 = and(_buf_T_47, _buf_T_48) @[Bitwise.scala 108:80]
    node _buf_T_50 = or(_buf_T_45, _buf_T_49) @[Bitwise.scala 108:39]
    node _buf_T_51 = bits(_buf_T_43, 5, 0) @[Bitwise.scala 107:28]
    node _buf_T_52 = shl(_buf_T_51, 2) @[Bitwise.scala 107:52]
    node _buf_T_53 = xor(_buf_T_43, _buf_T_52) @[Bitwise.scala 107:21]
    node _buf_T_54 = shr(_buf_T_50, 2) @[Bitwise.scala 108:21]
    node _buf_T_55 = and(_buf_T_54, _buf_T_53) @[Bitwise.scala 108:31]
    node _buf_T_56 = bits(_buf_T_50, 5, 0) @[Bitwise.scala 108:46]
    node _buf_T_57 = shl(_buf_T_56, 2) @[Bitwise.scala 108:70]
    node _buf_T_58 = not(_buf_T_53) @[Bitwise.scala 108:82]
    node _buf_T_59 = and(_buf_T_57, _buf_T_58) @[Bitwise.scala 108:80]
    node _buf_T_60 = or(_buf_T_55, _buf_T_59) @[Bitwise.scala 108:39]
    node _buf_T_61 = bits(_buf_T_53, 6, 0) @[Bitwise.scala 107:28]
    node _buf_T_62 = shl(_buf_T_61, 1) @[Bitwise.scala 107:52]
    node _buf_T_63 = xor(_buf_T_53, _buf_T_62) @[Bitwise.scala 107:21]
    node _buf_T_64 = shr(_buf_T_60, 1) @[Bitwise.scala 108:21]
    node _buf_T_65 = and(_buf_T_64, _buf_T_63) @[Bitwise.scala 108:31]
    node _buf_T_66 = bits(_buf_T_60, 6, 0) @[Bitwise.scala 108:46]
    node _buf_T_67 = shl(_buf_T_66, 1) @[Bitwise.scala 108:70]
    node _buf_T_68 = not(_buf_T_63) @[Bitwise.scala 108:82]
    node _buf_T_69 = and(_buf_T_67, _buf_T_68) @[Bitwise.scala 108:80]
    node _buf_T_70 = or(_buf_T_65, _buf_T_69) @[Bitwise.scala 108:39]
    node _buf_T_71 = cat(_buf_T_40, _buf_T_70) @[Cat.scala 33:92]
    node buf = cat(UInt<1>("h0"), _buf_T_71) @[block_division.scala 150:17]
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
    node _right_shift_T_23 = bits(buf, 23, 23) @[OneHot.scala 47:45]
    node _right_shift_T_24 = bits(buf, 24, 24) @[OneHot.scala 47:45]
    node _right_shift_T_25 = mux(_right_shift_T_23, UInt<5>("h17"), UInt<5>("h18")) @[Mux.scala 47:70]
    node _right_shift_T_26 = mux(_right_shift_T_22, UInt<5>("h16"), _right_shift_T_25) @[Mux.scala 47:70]
    node _right_shift_T_27 = mux(_right_shift_T_21, UInt<5>("h15"), _right_shift_T_26) @[Mux.scala 47:70]
    node _right_shift_T_28 = mux(_right_shift_T_20, UInt<5>("h14"), _right_shift_T_27) @[Mux.scala 47:70]
    node _right_shift_T_29 = mux(_right_shift_T_19, UInt<5>("h13"), _right_shift_T_28) @[Mux.scala 47:70]
    node _right_shift_T_30 = mux(_right_shift_T_18, UInt<5>("h12"), _right_shift_T_29) @[Mux.scala 47:70]
    node _right_shift_T_31 = mux(_right_shift_T_17, UInt<5>("h11"), _right_shift_T_30) @[Mux.scala 47:70]
    node _right_shift_T_32 = mux(_right_shift_T_16, UInt<5>("h10"), _right_shift_T_31) @[Mux.scala 47:70]
    node _right_shift_T_33 = mux(_right_shift_T_15, UInt<4>("hf"), _right_shift_T_32) @[Mux.scala 47:70]
    node _right_shift_T_34 = mux(_right_shift_T_14, UInt<4>("he"), _right_shift_T_33) @[Mux.scala 47:70]
    node _right_shift_T_35 = mux(_right_shift_T_13, UInt<4>("hd"), _right_shift_T_34) @[Mux.scala 47:70]
    node _right_shift_T_36 = mux(_right_shift_T_12, UInt<4>("hc"), _right_shift_T_35) @[Mux.scala 47:70]
    node _right_shift_T_37 = mux(_right_shift_T_11, UInt<4>("hb"), _right_shift_T_36) @[Mux.scala 47:70]
    node _right_shift_T_38 = mux(_right_shift_T_10, UInt<4>("ha"), _right_shift_T_37) @[Mux.scala 47:70]
    node _right_shift_T_39 = mux(_right_shift_T_9, UInt<4>("h9"), _right_shift_T_38) @[Mux.scala 47:70]
    node _right_shift_T_40 = mux(_right_shift_T_8, UInt<4>("h8"), _right_shift_T_39) @[Mux.scala 47:70]
    node _right_shift_T_41 = mux(_right_shift_T_7, UInt<3>("h7"), _right_shift_T_40) @[Mux.scala 47:70]
    node _right_shift_T_42 = mux(_right_shift_T_6, UInt<3>("h6"), _right_shift_T_41) @[Mux.scala 47:70]
    node _right_shift_T_43 = mux(_right_shift_T_5, UInt<3>("h5"), _right_shift_T_42) @[Mux.scala 47:70]
    node _right_shift_T_44 = mux(_right_shift_T_4, UInt<3>("h4"), _right_shift_T_43) @[Mux.scala 47:70]
    node _right_shift_T_45 = mux(_right_shift_T_3, UInt<2>("h3"), _right_shift_T_44) @[Mux.scala 47:70]
    node _right_shift_T_46 = mux(_right_shift_T_2, UInt<2>("h2"), _right_shift_T_45) @[Mux.scala 47:70]
    node _right_shift_T_47 = mux(_right_shift_T_1, UInt<1>("h1"), _right_shift_T_46) @[Mux.scala 47:70]
    node _right_shift_T_48 = mux(_right_shift_T, UInt<1>("h0"), _right_shift_T_47) @[Mux.scala 47:70]
    node _actual_shift_T = sub(UInt<5>("h1d"), right_shift) @[block_division.scala 156:75]
    node _actual_shift_T_1 = tail(_actual_shift_T, 1) @[block_division.scala 156:75]
    node _actual_shift_T_2 = sub(_actual_shift_T_1, UInt<3>("h5")) @[block_division.scala 156:89]
    node _actual_shift_T_3 = tail(_actual_shift_T_2, 1) @[block_division.scala 156:89]
    node man_out_shifted = dshr(sign_man_hbfp, actual_shift) @[block_division.scala 158:39]
    node _exp_actual_T = add(exp_buffer_0, actual_shift) @[block_division.scala 160:31]
    node _io_result_tree_T = bits(man_buffer_two_complement_0, 30, 30) @[block_division.scala 162:49]
    node exp_actual = _exp_actual_T @[block_division.scala 159:24 160:14]
    node _io_result_tree_T_1 = bits(exp_actual, 9, 2) @[block_division.scala 164:18]
    node _io_result_tree_T_2 = cat(_io_result_tree_T, _io_result_tree_T_1) @[block_division.scala 164:5]
    node _io_result_tree_T_3 = bits(man_out_shifted, 5, 0) @[block_division.scala 164:45]
    node _io_result_tree_T_4 = cat(_io_result_tree_T_2, _io_result_tree_T_3) @[block_division.scala 164:27]
    io_result_tree <= _io_result_tree_T_4 @[block_division.scala 162:18]
    exp_buffer_0 <= mux(reset, UInt<9>("h0"), _GEN_12) @[block_division.scala 70:{60,60}]
    exp_buffer_1 <= mux(reset, UInt<9>("h0"), _GEN_14) @[block_division.scala 70:{60,60}]
    exp_buffer_2 <= mux(reset, UInt<9>("h0"), _GEN_4) @[block_division.scala 70:{60,60}]
    exp_buffer_3 <= mux(reset, UInt<9>("h0"), _GEN_6) @[block_division.scala 70:{60,60}]
    man_buffer_two_complement_0 <= mux(reset, asSInt(UInt<31>("h0")), _GEN_13) @[block_division.scala 72:{12,12}]
    man_buffer_two_complement_1 <= mux(reset, asSInt(UInt<31>("h0")), _GEN_15) @[block_division.scala 72:{12,12}]
    man_buffer_two_complement_2 <= mux(reset, asSInt(UInt<31>("h0")), _GEN_5) @[block_division.scala 72:{12,12}]
    man_buffer_two_complement_3 <= mux(reset, asSInt(UInt<31>("h0")), _GEN_7) @[block_division.scala 72:{12,12}]
    v <= mux(reset, UInt<10>("h0"), _GEN_11) @[block_division.scala 88:{18,18}]
    enable <= _GEN_16
    sign_man_hbfp <= mux(reset, UInt<31>("h0"), _sign_man_hbfp_T_8) @[block_division.scala 134:{30,30} 137:17]
    right_shift <= mux(reset, UInt<8>("h0"), _right_shift_T_48) @[block_division.scala 148:{28,28} 154:15]
    actual_shift <= mux(reset, UInt<8>("h0"), _actual_shift_T_3) @[block_division.scala 149:{29,29} 156:16]

  module HbfpTensor :
    input clock : Clock
    input reset : UInt<1>
    input io_man_a_0 : UInt<6>
    input io_man_a_1 : UInt<6>
    input io_man_a_2 : UInt<6>
    input io_man_a_3 : UInt<6>
    input io_man_a_4 : UInt<6>
    input io_man_a_5 : UInt<6>
    input io_man_a_6 : UInt<6>
    input io_man_a_7 : UInt<6>
    input io_man_a_8 : UInt<6>
    input io_man_a_9 : UInt<6>
    input io_man_a_10 : UInt<6>
    input io_man_a_11 : UInt<6>
    input io_man_a_12 : UInt<6>
    input io_man_a_13 : UInt<6>
    input io_man_a_14 : UInt<6>
    input io_man_a_15 : UInt<6>
    input io_man_a_16 : UInt<6>
    input io_man_a_17 : UInt<6>
    input io_man_a_18 : UInt<6>
    input io_man_a_19 : UInt<6>
    input io_man_a_20 : UInt<6>
    input io_man_a_21 : UInt<6>
    input io_man_a_22 : UInt<6>
    input io_man_a_23 : UInt<6>
    input io_man_a_24 : UInt<6>
    input io_man_a_25 : UInt<6>
    input io_man_a_26 : UInt<6>
    input io_man_a_27 : UInt<6>
    input io_man_a_28 : UInt<6>
    input io_man_a_29 : UInt<6>
    input io_man_a_30 : UInt<6>
    input io_man_a_31 : UInt<6>
    input io_man_a_32 : UInt<6>
    input io_man_a_33 : UInt<6>
    input io_man_a_34 : UInt<6>
    input io_man_a_35 : UInt<6>
    input io_man_a_36 : UInt<6>
    input io_man_a_37 : UInt<6>
    input io_man_a_38 : UInt<6>
    input io_man_a_39 : UInt<6>
    input io_man_a_40 : UInt<6>
    input io_man_a_41 : UInt<6>
    input io_man_a_42 : UInt<6>
    input io_man_a_43 : UInt<6>
    input io_man_a_44 : UInt<6>
    input io_man_a_45 : UInt<6>
    input io_man_a_46 : UInt<6>
    input io_man_a_47 : UInt<6>
    input io_man_a_48 : UInt<6>
    input io_man_a_49 : UInt<6>
    input io_man_a_50 : UInt<6>
    input io_man_a_51 : UInt<6>
    input io_man_a_52 : UInt<6>
    input io_man_a_53 : UInt<6>
    input io_man_a_54 : UInt<6>
    input io_man_a_55 : UInt<6>
    input io_man_a_56 : UInt<6>
    input io_man_a_57 : UInt<6>
    input io_man_a_58 : UInt<6>
    input io_man_a_59 : UInt<6>
    input io_man_a_60 : UInt<6>
    input io_man_a_61 : UInt<6>
    input io_man_a_62 : UInt<6>
    input io_man_a_63 : UInt<6>
    input io_man_b_0 : UInt<6>
    input io_man_b_1 : UInt<6>
    input io_man_b_2 : UInt<6>
    input io_man_b_3 : UInt<6>
    input io_man_b_4 : UInt<6>
    input io_man_b_5 : UInt<6>
    input io_man_b_6 : UInt<6>
    input io_man_b_7 : UInt<6>
    input io_man_b_8 : UInt<6>
    input io_man_b_9 : UInt<6>
    input io_man_b_10 : UInt<6>
    input io_man_b_11 : UInt<6>
    input io_man_b_12 : UInt<6>
    input io_man_b_13 : UInt<6>
    input io_man_b_14 : UInt<6>
    input io_man_b_15 : UInt<6>
    input io_man_b_16 : UInt<6>
    input io_man_b_17 : UInt<6>
    input io_man_b_18 : UInt<6>
    input io_man_b_19 : UInt<6>
    input io_man_b_20 : UInt<6>
    input io_man_b_21 : UInt<6>
    input io_man_b_22 : UInt<6>
    input io_man_b_23 : UInt<6>
    input io_man_b_24 : UInt<6>
    input io_man_b_25 : UInt<6>
    input io_man_b_26 : UInt<6>
    input io_man_b_27 : UInt<6>
    input io_man_b_28 : UInt<6>
    input io_man_b_29 : UInt<6>
    input io_man_b_30 : UInt<6>
    input io_man_b_31 : UInt<6>
    input io_man_b_32 : UInt<6>
    input io_man_b_33 : UInt<6>
    input io_man_b_34 : UInt<6>
    input io_man_b_35 : UInt<6>
    input io_man_b_36 : UInt<6>
    input io_man_b_37 : UInt<6>
    input io_man_b_38 : UInt<6>
    input io_man_b_39 : UInt<6>
    input io_man_b_40 : UInt<6>
    input io_man_b_41 : UInt<6>
    input io_man_b_42 : UInt<6>
    input io_man_b_43 : UInt<6>
    input io_man_b_44 : UInt<6>
    input io_man_b_45 : UInt<6>
    input io_man_b_46 : UInt<6>
    input io_man_b_47 : UInt<6>
    input io_man_b_48 : UInt<6>
    input io_man_b_49 : UInt<6>
    input io_man_b_50 : UInt<6>
    input io_man_b_51 : UInt<6>
    input io_man_b_52 : UInt<6>
    input io_man_b_53 : UInt<6>
    input io_man_b_54 : UInt<6>
    input io_man_b_55 : UInt<6>
    input io_man_b_56 : UInt<6>
    input io_man_b_57 : UInt<6>
    input io_man_b_58 : UInt<6>
    input io_man_b_59 : UInt<6>
    input io_man_b_60 : UInt<6>
    input io_man_b_61 : UInt<6>
    input io_man_b_62 : UInt<6>
    input io_man_b_63 : UInt<6>
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
    input io_sign_a_16 : UInt<1>
    input io_sign_a_17 : UInt<1>
    input io_sign_a_18 : UInt<1>
    input io_sign_a_19 : UInt<1>
    input io_sign_a_20 : UInt<1>
    input io_sign_a_21 : UInt<1>
    input io_sign_a_22 : UInt<1>
    input io_sign_a_23 : UInt<1>
    input io_sign_a_24 : UInt<1>
    input io_sign_a_25 : UInt<1>
    input io_sign_a_26 : UInt<1>
    input io_sign_a_27 : UInt<1>
    input io_sign_a_28 : UInt<1>
    input io_sign_a_29 : UInt<1>
    input io_sign_a_30 : UInt<1>
    input io_sign_a_31 : UInt<1>
    input io_sign_a_32 : UInt<1>
    input io_sign_a_33 : UInt<1>
    input io_sign_a_34 : UInt<1>
    input io_sign_a_35 : UInt<1>
    input io_sign_a_36 : UInt<1>
    input io_sign_a_37 : UInt<1>
    input io_sign_a_38 : UInt<1>
    input io_sign_a_39 : UInt<1>
    input io_sign_a_40 : UInt<1>
    input io_sign_a_41 : UInt<1>
    input io_sign_a_42 : UInt<1>
    input io_sign_a_43 : UInt<1>
    input io_sign_a_44 : UInt<1>
    input io_sign_a_45 : UInt<1>
    input io_sign_a_46 : UInt<1>
    input io_sign_a_47 : UInt<1>
    input io_sign_a_48 : UInt<1>
    input io_sign_a_49 : UInt<1>
    input io_sign_a_50 : UInt<1>
    input io_sign_a_51 : UInt<1>
    input io_sign_a_52 : UInt<1>
    input io_sign_a_53 : UInt<1>
    input io_sign_a_54 : UInt<1>
    input io_sign_a_55 : UInt<1>
    input io_sign_a_56 : UInt<1>
    input io_sign_a_57 : UInt<1>
    input io_sign_a_58 : UInt<1>
    input io_sign_a_59 : UInt<1>
    input io_sign_a_60 : UInt<1>
    input io_sign_a_61 : UInt<1>
    input io_sign_a_62 : UInt<1>
    input io_sign_a_63 : UInt<1>
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
    input io_sign_b_16 : UInt<1>
    input io_sign_b_17 : UInt<1>
    input io_sign_b_18 : UInt<1>
    input io_sign_b_19 : UInt<1>
    input io_sign_b_20 : UInt<1>
    input io_sign_b_21 : UInt<1>
    input io_sign_b_22 : UInt<1>
    input io_sign_b_23 : UInt<1>
    input io_sign_b_24 : UInt<1>
    input io_sign_b_25 : UInt<1>
    input io_sign_b_26 : UInt<1>
    input io_sign_b_27 : UInt<1>
    input io_sign_b_28 : UInt<1>
    input io_sign_b_29 : UInt<1>
    input io_sign_b_30 : UInt<1>
    input io_sign_b_31 : UInt<1>
    input io_sign_b_32 : UInt<1>
    input io_sign_b_33 : UInt<1>
    input io_sign_b_34 : UInt<1>
    input io_sign_b_35 : UInt<1>
    input io_sign_b_36 : UInt<1>
    input io_sign_b_37 : UInt<1>
    input io_sign_b_38 : UInt<1>
    input io_sign_b_39 : UInt<1>
    input io_sign_b_40 : UInt<1>
    input io_sign_b_41 : UInt<1>
    input io_sign_b_42 : UInt<1>
    input io_sign_b_43 : UInt<1>
    input io_sign_b_44 : UInt<1>
    input io_sign_b_45 : UInt<1>
    input io_sign_b_46 : UInt<1>
    input io_sign_b_47 : UInt<1>
    input io_sign_b_48 : UInt<1>
    input io_sign_b_49 : UInt<1>
    input io_sign_b_50 : UInt<1>
    input io_sign_b_51 : UInt<1>
    input io_sign_b_52 : UInt<1>
    input io_sign_b_53 : UInt<1>
    input io_sign_b_54 : UInt<1>
    input io_sign_b_55 : UInt<1>
    input io_sign_b_56 : UInt<1>
    input io_sign_b_57 : UInt<1>
    input io_sign_b_58 : UInt<1>
    input io_sign_b_59 : UInt<1>
    input io_sign_b_60 : UInt<1>
    input io_sign_b_61 : UInt<1>
    input io_sign_b_62 : UInt<1>
    input io_sign_b_63 : UInt<1>
    input io_exp_a_0 : UInt<8>
    input io_exp_a_1 : UInt<8>
    input io_exp_a_2 : UInt<8>
    input io_exp_a_3 : UInt<8>
    input io_exp_b_0 : UInt<8>
    input io_exp_b_1 : UInt<8>
    input io_exp_b_2 : UInt<8>
    input io_exp_b_3 : UInt<8>
    input io_control : UInt<1>
    input io_control2 : UInt<1>
    output io_result : UInt<15>

    inst adderTreeInst of adderTree2 @[block_division.scala 50:29]
    reg exp_output_0 : UInt<9>, clock with :
      reset => (UInt<1>("h0"), exp_output_0) @[block_division.scala 19:60]
    reg exp_output_1 : UInt<9>, clock with :
      reset => (UInt<1>("h0"), exp_output_1) @[block_division.scala 19:60]
    reg exp_output_2 : UInt<9>, clock with :
      reset => (UInt<1>("h0"), exp_output_2) @[block_division.scala 19:60]
    reg exp_output_3 : UInt<9>, clock with :
      reset => (UInt<1>("h0"), exp_output_3) @[block_division.scala 19:60]
    reg acc_0 : SInt<28>, clock with :
      reset => (UInt<1>("h0"), acc_0) @[block_division.scala 24:53]
    reg acc_1 : SInt<28>, clock with :
      reset => (UInt<1>("h0"), acc_1) @[block_division.scala 24:53]
    reg acc_2 : SInt<28>, clock with :
      reset => (UInt<1>("h0"), acc_2) @[block_division.scala 24:53]
    reg acc_3 : SInt<28>, clock with :
      reset => (UInt<1>("h0"), acc_3) @[block_division.scala 24:53]
    node _exp_output_0_T = add(io_exp_a_0, io_exp_b_0) @[block_division.scala 27:34]
    reg dotProductRegs__0 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs__0) @[block_division.scala 28:29]
    reg dotProductRegs__1 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs__1) @[block_division.scala 28:29]
    reg dotProductRegs__2 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs__2) @[block_division.scala 28:29]
    reg dotProductRegs__3 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs__3) @[block_division.scala 28:29]
    reg dotProductRegs__4 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs__4) @[block_division.scala 28:29]
    reg dotProductRegs__5 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs__5) @[block_division.scala 28:29]
    reg dotProductRegs__6 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs__6) @[block_division.scala 28:29]
    reg dotProductRegs__7 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs__7) @[block_division.scala 28:29]
    reg dotProductRegs__8 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs__8) @[block_division.scala 28:29]
    reg dotProductRegs__9 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs__9) @[block_division.scala 28:29]
    reg dotProductRegs__10 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs__10) @[block_division.scala 28:29]
    reg dotProductRegs__11 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs__11) @[block_division.scala 28:29]
    reg dotProductRegs__12 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs__12) @[block_division.scala 28:29]
    reg dotProductRegs__13 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs__13) @[block_division.scala 28:29]
    reg dotProductRegs__14 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs__14) @[block_division.scala 28:29]
    reg dotProductRegs__15 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs__15) @[block_division.scala 28:29]
    reg signs__0 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs__0) @[block_division.scala 29:20]
    reg signs__1 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs__1) @[block_division.scala 29:20]
    reg signs__2 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs__2) @[block_division.scala 29:20]
    reg signs__3 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs__3) @[block_division.scala 29:20]
    reg signs__4 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs__4) @[block_division.scala 29:20]
    reg signs__5 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs__5) @[block_division.scala 29:20]
    reg signs__6 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs__6) @[block_division.scala 29:20]
    reg signs__7 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs__7) @[block_division.scala 29:20]
    reg signs__8 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs__8) @[block_division.scala 29:20]
    reg signs__9 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs__9) @[block_division.scala 29:20]
    reg signs__10 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs__10) @[block_division.scala 29:20]
    reg signs__11 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs__11) @[block_division.scala 29:20]
    reg signs__12 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs__12) @[block_division.scala 29:20]
    reg signs__13 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs__13) @[block_division.scala 29:20]
    reg signs__14 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs__14) @[block_division.scala 29:20]
    reg signs__15 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs__15) @[block_division.scala 29:20]
    reg two_complement__0 : UInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement__0) @[block_division.scala 30:29]
    reg two_complement__1 : UInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement__1) @[block_division.scala 30:29]
    reg two_complement__2 : UInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement__2) @[block_division.scala 30:29]
    reg two_complement__3 : UInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement__3) @[block_division.scala 30:29]
    reg two_complement__4 : UInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement__4) @[block_division.scala 30:29]
    reg two_complement__5 : UInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement__5) @[block_division.scala 30:29]
    reg two_complement__6 : UInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement__6) @[block_division.scala 30:29]
    reg two_complement__7 : UInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement__7) @[block_division.scala 30:29]
    reg two_complement__8 : UInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement__8) @[block_division.scala 30:29]
    reg two_complement__9 : UInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement__9) @[block_division.scala 30:29]
    reg two_complement__10 : UInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement__10) @[block_division.scala 30:29]
    reg two_complement__11 : UInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement__11) @[block_division.scala 30:29]
    reg two_complement__12 : UInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement__12) @[block_division.scala 30:29]
    reg two_complement__13 : UInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement__13) @[block_division.scala 30:29]
    reg two_complement__14 : UInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement__14) @[block_division.scala 30:29]
    reg two_complement__15 : UInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement__15) @[block_division.scala 30:29]
    reg two_complement_buffer__0 : SInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer__0) @[block_division.scala 31:36]
    reg two_complement_buffer__1 : SInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer__1) @[block_division.scala 31:36]
    reg two_complement_buffer__2 : SInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer__2) @[block_division.scala 31:36]
    reg two_complement_buffer__3 : SInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer__3) @[block_division.scala 31:36]
    reg two_complement_buffer__4 : SInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer__4) @[block_division.scala 31:36]
    reg two_complement_buffer__5 : SInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer__5) @[block_division.scala 31:36]
    reg two_complement_buffer__6 : SInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer__6) @[block_division.scala 31:36]
    reg two_complement_buffer__7 : SInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer__7) @[block_division.scala 31:36]
    reg two_complement_buffer__8 : SInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer__8) @[block_division.scala 31:36]
    reg two_complement_buffer__9 : SInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer__9) @[block_division.scala 31:36]
    reg two_complement_buffer__10 : SInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer__10) @[block_division.scala 31:36]
    reg two_complement_buffer__11 : SInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer__11) @[block_division.scala 31:36]
    reg two_complement_buffer__12 : SInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer__12) @[block_division.scala 31:36]
    reg two_complement_buffer__13 : SInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer__13) @[block_division.scala 31:36]
    reg two_complement_buffer__14 : SInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer__14) @[block_division.scala 31:36]
    reg two_complement_buffer__15 : SInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer__15) @[block_division.scala 31:36]
    reg multiplierReg : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg) @[block_division.scala 33:34]
    reg signReg : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg) @[block_division.scala 34:28]
    node _dotProductRegs_0_T = mul(multiplierReg, io_man_b_0) @[block_division.scala 37:42]
    node _signs_0_T = xor(signReg, io_sign_b_0) @[block_division.scala 38:27]
    node _two_complement_0_T = eq(signs__0, UInt<1>("h1")) @[block_division.scala 40:18]
    node _two_complement_0_T_1 = cat(UInt<1>("h0"), dotProductRegs__0) @[block_division.scala 41:16]
    node _two_complement_0_T_2 = not(_two_complement_0_T_1) @[block_division.scala 41:10]
    node _two_complement_0_T_3 = add(_two_complement_0_T_2, UInt<1>("h1")) @[block_division.scala 41:38]
    node _two_complement_0_T_4 = tail(_two_complement_0_T_3, 1) @[block_division.scala 41:38]
    node _two_complement_0_T_5 = cat(UInt<1>("h0"), dotProductRegs__0) @[block_division.scala 42:14]
    node _two_complement_0_T_6 = mux(_two_complement_0_T, _two_complement_0_T_4, _two_complement_0_T_5) @[block_division.scala 39:31]
    node _two_complement_buffer_0_T = asSInt(two_complement__0) @[block_division.scala 44:53]
    reg multiplierReg_1 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_1) @[block_division.scala 33:34]
    reg signReg_1 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_1) @[block_division.scala 34:28]
    node _dotProductRegs_1_T = mul(multiplierReg_1, io_man_b_1) @[block_division.scala 37:42]
    node _signs_1_T = xor(signReg_1, io_sign_b_1) @[block_division.scala 38:27]
    node _two_complement_1_T = eq(signs__1, UInt<1>("h1")) @[block_division.scala 40:18]
    node _two_complement_1_T_1 = cat(UInt<1>("h0"), dotProductRegs__1) @[block_division.scala 41:16]
    node _two_complement_1_T_2 = not(_two_complement_1_T_1) @[block_division.scala 41:10]
    node _two_complement_1_T_3 = add(_two_complement_1_T_2, UInt<1>("h1")) @[block_division.scala 41:38]
    node _two_complement_1_T_4 = tail(_two_complement_1_T_3, 1) @[block_division.scala 41:38]
    node _two_complement_1_T_5 = cat(UInt<1>("h0"), dotProductRegs__1) @[block_division.scala 42:14]
    node _two_complement_1_T_6 = mux(_two_complement_1_T, _two_complement_1_T_4, _two_complement_1_T_5) @[block_division.scala 39:31]
    node _two_complement_buffer_1_T = asSInt(two_complement__1) @[block_division.scala 44:53]
    reg multiplierReg_2 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_2) @[block_division.scala 33:34]
    reg signReg_2 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_2) @[block_division.scala 34:28]
    node _dotProductRegs_2_T = mul(multiplierReg_2, io_man_b_2) @[block_division.scala 37:42]
    node _signs_2_T = xor(signReg_2, io_sign_b_2) @[block_division.scala 38:27]
    node _two_complement_2_T = eq(signs__2, UInt<1>("h1")) @[block_division.scala 40:18]
    node _two_complement_2_T_1 = cat(UInt<1>("h0"), dotProductRegs__2) @[block_division.scala 41:16]
    node _two_complement_2_T_2 = not(_two_complement_2_T_1) @[block_division.scala 41:10]
    node _two_complement_2_T_3 = add(_two_complement_2_T_2, UInt<1>("h1")) @[block_division.scala 41:38]
    node _two_complement_2_T_4 = tail(_two_complement_2_T_3, 1) @[block_division.scala 41:38]
    node _two_complement_2_T_5 = cat(UInt<1>("h0"), dotProductRegs__2) @[block_division.scala 42:14]
    node _two_complement_2_T_6 = mux(_two_complement_2_T, _two_complement_2_T_4, _two_complement_2_T_5) @[block_division.scala 39:31]
    node _two_complement_buffer_2_T = asSInt(two_complement__2) @[block_division.scala 44:53]
    reg multiplierReg_3 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_3) @[block_division.scala 33:34]
    reg signReg_3 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_3) @[block_division.scala 34:28]
    node _dotProductRegs_3_T = mul(multiplierReg_3, io_man_b_3) @[block_division.scala 37:42]
    node _signs_3_T = xor(signReg_3, io_sign_b_3) @[block_division.scala 38:27]
    node _two_complement_3_T = eq(signs__3, UInt<1>("h1")) @[block_division.scala 40:18]
    node _two_complement_3_T_1 = cat(UInt<1>("h0"), dotProductRegs__3) @[block_division.scala 41:16]
    node _two_complement_3_T_2 = not(_two_complement_3_T_1) @[block_division.scala 41:10]
    node _two_complement_3_T_3 = add(_two_complement_3_T_2, UInt<1>("h1")) @[block_division.scala 41:38]
    node _two_complement_3_T_4 = tail(_two_complement_3_T_3, 1) @[block_division.scala 41:38]
    node _two_complement_3_T_5 = cat(UInt<1>("h0"), dotProductRegs__3) @[block_division.scala 42:14]
    node _two_complement_3_T_6 = mux(_two_complement_3_T, _two_complement_3_T_4, _two_complement_3_T_5) @[block_division.scala 39:31]
    node _two_complement_buffer_3_T = asSInt(two_complement__3) @[block_division.scala 44:53]
    reg multiplierReg_4 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_4) @[block_division.scala 33:34]
    reg signReg_4 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_4) @[block_division.scala 34:28]
    node _dotProductRegs_4_T = mul(multiplierReg_4, io_man_b_4) @[block_division.scala 37:42]
    node _signs_4_T = xor(signReg_4, io_sign_b_4) @[block_division.scala 38:27]
    node _two_complement_4_T = eq(signs__4, UInt<1>("h1")) @[block_division.scala 40:18]
    node _two_complement_4_T_1 = cat(UInt<1>("h0"), dotProductRegs__4) @[block_division.scala 41:16]
    node _two_complement_4_T_2 = not(_two_complement_4_T_1) @[block_division.scala 41:10]
    node _two_complement_4_T_3 = add(_two_complement_4_T_2, UInt<1>("h1")) @[block_division.scala 41:38]
    node _two_complement_4_T_4 = tail(_two_complement_4_T_3, 1) @[block_division.scala 41:38]
    node _two_complement_4_T_5 = cat(UInt<1>("h0"), dotProductRegs__4) @[block_division.scala 42:14]
    node _two_complement_4_T_6 = mux(_two_complement_4_T, _two_complement_4_T_4, _two_complement_4_T_5) @[block_division.scala 39:31]
    node _two_complement_buffer_4_T = asSInt(two_complement__4) @[block_division.scala 44:53]
    reg multiplierReg_5 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_5) @[block_division.scala 33:34]
    reg signReg_5 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_5) @[block_division.scala 34:28]
    node _dotProductRegs_5_T = mul(multiplierReg_5, io_man_b_5) @[block_division.scala 37:42]
    node _signs_5_T = xor(signReg_5, io_sign_b_5) @[block_division.scala 38:27]
    node _two_complement_5_T = eq(signs__5, UInt<1>("h1")) @[block_division.scala 40:18]
    node _two_complement_5_T_1 = cat(UInt<1>("h0"), dotProductRegs__5) @[block_division.scala 41:16]
    node _two_complement_5_T_2 = not(_two_complement_5_T_1) @[block_division.scala 41:10]
    node _two_complement_5_T_3 = add(_two_complement_5_T_2, UInt<1>("h1")) @[block_division.scala 41:38]
    node _two_complement_5_T_4 = tail(_two_complement_5_T_3, 1) @[block_division.scala 41:38]
    node _two_complement_5_T_5 = cat(UInt<1>("h0"), dotProductRegs__5) @[block_division.scala 42:14]
    node _two_complement_5_T_6 = mux(_two_complement_5_T, _two_complement_5_T_4, _two_complement_5_T_5) @[block_division.scala 39:31]
    node _two_complement_buffer_5_T = asSInt(two_complement__5) @[block_division.scala 44:53]
    reg multiplierReg_6 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_6) @[block_division.scala 33:34]
    reg signReg_6 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_6) @[block_division.scala 34:28]
    node _dotProductRegs_6_T = mul(multiplierReg_6, io_man_b_6) @[block_division.scala 37:42]
    node _signs_6_T = xor(signReg_6, io_sign_b_6) @[block_division.scala 38:27]
    node _two_complement_6_T = eq(signs__6, UInt<1>("h1")) @[block_division.scala 40:18]
    node _two_complement_6_T_1 = cat(UInt<1>("h0"), dotProductRegs__6) @[block_division.scala 41:16]
    node _two_complement_6_T_2 = not(_two_complement_6_T_1) @[block_division.scala 41:10]
    node _two_complement_6_T_3 = add(_two_complement_6_T_2, UInt<1>("h1")) @[block_division.scala 41:38]
    node _two_complement_6_T_4 = tail(_two_complement_6_T_3, 1) @[block_division.scala 41:38]
    node _two_complement_6_T_5 = cat(UInt<1>("h0"), dotProductRegs__6) @[block_division.scala 42:14]
    node _two_complement_6_T_6 = mux(_two_complement_6_T, _two_complement_6_T_4, _two_complement_6_T_5) @[block_division.scala 39:31]
    node _two_complement_buffer_6_T = asSInt(two_complement__6) @[block_division.scala 44:53]
    reg multiplierReg_7 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_7) @[block_division.scala 33:34]
    reg signReg_7 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_7) @[block_division.scala 34:28]
    node _dotProductRegs_7_T = mul(multiplierReg_7, io_man_b_7) @[block_division.scala 37:42]
    node _signs_7_T = xor(signReg_7, io_sign_b_7) @[block_division.scala 38:27]
    node _two_complement_7_T = eq(signs__7, UInt<1>("h1")) @[block_division.scala 40:18]
    node _two_complement_7_T_1 = cat(UInt<1>("h0"), dotProductRegs__7) @[block_division.scala 41:16]
    node _two_complement_7_T_2 = not(_two_complement_7_T_1) @[block_division.scala 41:10]
    node _two_complement_7_T_3 = add(_two_complement_7_T_2, UInt<1>("h1")) @[block_division.scala 41:38]
    node _two_complement_7_T_4 = tail(_two_complement_7_T_3, 1) @[block_division.scala 41:38]
    node _two_complement_7_T_5 = cat(UInt<1>("h0"), dotProductRegs__7) @[block_division.scala 42:14]
    node _two_complement_7_T_6 = mux(_two_complement_7_T, _two_complement_7_T_4, _two_complement_7_T_5) @[block_division.scala 39:31]
    node _two_complement_buffer_7_T = asSInt(two_complement__7) @[block_division.scala 44:53]
    reg multiplierReg_8 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_8) @[block_division.scala 33:34]
    reg signReg_8 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_8) @[block_division.scala 34:28]
    node _dotProductRegs_8_T = mul(multiplierReg_8, io_man_b_8) @[block_division.scala 37:42]
    node _signs_8_T = xor(signReg_8, io_sign_b_8) @[block_division.scala 38:27]
    node _two_complement_8_T = eq(signs__8, UInt<1>("h1")) @[block_division.scala 40:18]
    node _two_complement_8_T_1 = cat(UInt<1>("h0"), dotProductRegs__8) @[block_division.scala 41:16]
    node _two_complement_8_T_2 = not(_two_complement_8_T_1) @[block_division.scala 41:10]
    node _two_complement_8_T_3 = add(_two_complement_8_T_2, UInt<1>("h1")) @[block_division.scala 41:38]
    node _two_complement_8_T_4 = tail(_two_complement_8_T_3, 1) @[block_division.scala 41:38]
    node _two_complement_8_T_5 = cat(UInt<1>("h0"), dotProductRegs__8) @[block_division.scala 42:14]
    node _two_complement_8_T_6 = mux(_two_complement_8_T, _two_complement_8_T_4, _two_complement_8_T_5) @[block_division.scala 39:31]
    node _two_complement_buffer_8_T = asSInt(two_complement__8) @[block_division.scala 44:53]
    reg multiplierReg_9 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_9) @[block_division.scala 33:34]
    reg signReg_9 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_9) @[block_division.scala 34:28]
    node _dotProductRegs_9_T = mul(multiplierReg_9, io_man_b_9) @[block_division.scala 37:42]
    node _signs_9_T = xor(signReg_9, io_sign_b_9) @[block_division.scala 38:27]
    node _two_complement_9_T = eq(signs__9, UInt<1>("h1")) @[block_division.scala 40:18]
    node _two_complement_9_T_1 = cat(UInt<1>("h0"), dotProductRegs__9) @[block_division.scala 41:16]
    node _two_complement_9_T_2 = not(_two_complement_9_T_1) @[block_division.scala 41:10]
    node _two_complement_9_T_3 = add(_two_complement_9_T_2, UInt<1>("h1")) @[block_division.scala 41:38]
    node _two_complement_9_T_4 = tail(_two_complement_9_T_3, 1) @[block_division.scala 41:38]
    node _two_complement_9_T_5 = cat(UInt<1>("h0"), dotProductRegs__9) @[block_division.scala 42:14]
    node _two_complement_9_T_6 = mux(_two_complement_9_T, _two_complement_9_T_4, _two_complement_9_T_5) @[block_division.scala 39:31]
    node _two_complement_buffer_9_T = asSInt(two_complement__9) @[block_division.scala 44:53]
    reg multiplierReg_10 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_10) @[block_division.scala 33:34]
    reg signReg_10 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_10) @[block_division.scala 34:28]
    node _dotProductRegs_10_T = mul(multiplierReg_10, io_man_b_10) @[block_division.scala 37:42]
    node _signs_10_T = xor(signReg_10, io_sign_b_10) @[block_division.scala 38:27]
    node _two_complement_10_T = eq(signs__10, UInt<1>("h1")) @[block_division.scala 40:18]
    node _two_complement_10_T_1 = cat(UInt<1>("h0"), dotProductRegs__10) @[block_division.scala 41:16]
    node _two_complement_10_T_2 = not(_two_complement_10_T_1) @[block_division.scala 41:10]
    node _two_complement_10_T_3 = add(_two_complement_10_T_2, UInt<1>("h1")) @[block_division.scala 41:38]
    node _two_complement_10_T_4 = tail(_two_complement_10_T_3, 1) @[block_division.scala 41:38]
    node _two_complement_10_T_5 = cat(UInt<1>("h0"), dotProductRegs__10) @[block_division.scala 42:14]
    node _two_complement_10_T_6 = mux(_two_complement_10_T, _two_complement_10_T_4, _two_complement_10_T_5) @[block_division.scala 39:31]
    node _two_complement_buffer_10_T = asSInt(two_complement__10) @[block_division.scala 44:53]
    reg multiplierReg_11 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_11) @[block_division.scala 33:34]
    reg signReg_11 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_11) @[block_division.scala 34:28]
    node _dotProductRegs_11_T = mul(multiplierReg_11, io_man_b_11) @[block_division.scala 37:42]
    node _signs_11_T = xor(signReg_11, io_sign_b_11) @[block_division.scala 38:27]
    node _two_complement_11_T = eq(signs__11, UInt<1>("h1")) @[block_division.scala 40:18]
    node _two_complement_11_T_1 = cat(UInt<1>("h0"), dotProductRegs__11) @[block_division.scala 41:16]
    node _two_complement_11_T_2 = not(_two_complement_11_T_1) @[block_division.scala 41:10]
    node _two_complement_11_T_3 = add(_two_complement_11_T_2, UInt<1>("h1")) @[block_division.scala 41:38]
    node _two_complement_11_T_4 = tail(_two_complement_11_T_3, 1) @[block_division.scala 41:38]
    node _two_complement_11_T_5 = cat(UInt<1>("h0"), dotProductRegs__11) @[block_division.scala 42:14]
    node _two_complement_11_T_6 = mux(_two_complement_11_T, _two_complement_11_T_4, _two_complement_11_T_5) @[block_division.scala 39:31]
    node _two_complement_buffer_11_T = asSInt(two_complement__11) @[block_division.scala 44:53]
    reg multiplierReg_12 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_12) @[block_division.scala 33:34]
    reg signReg_12 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_12) @[block_division.scala 34:28]
    node _dotProductRegs_12_T = mul(multiplierReg_12, io_man_b_12) @[block_division.scala 37:42]
    node _signs_12_T = xor(signReg_12, io_sign_b_12) @[block_division.scala 38:27]
    node _two_complement_12_T = eq(signs__12, UInt<1>("h1")) @[block_division.scala 40:18]
    node _two_complement_12_T_1 = cat(UInt<1>("h0"), dotProductRegs__12) @[block_division.scala 41:16]
    node _two_complement_12_T_2 = not(_two_complement_12_T_1) @[block_division.scala 41:10]
    node _two_complement_12_T_3 = add(_two_complement_12_T_2, UInt<1>("h1")) @[block_division.scala 41:38]
    node _two_complement_12_T_4 = tail(_two_complement_12_T_3, 1) @[block_division.scala 41:38]
    node _two_complement_12_T_5 = cat(UInt<1>("h0"), dotProductRegs__12) @[block_division.scala 42:14]
    node _two_complement_12_T_6 = mux(_two_complement_12_T, _two_complement_12_T_4, _two_complement_12_T_5) @[block_division.scala 39:31]
    node _two_complement_buffer_12_T = asSInt(two_complement__12) @[block_division.scala 44:53]
    reg multiplierReg_13 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_13) @[block_division.scala 33:34]
    reg signReg_13 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_13) @[block_division.scala 34:28]
    node _dotProductRegs_13_T = mul(multiplierReg_13, io_man_b_13) @[block_division.scala 37:42]
    node _signs_13_T = xor(signReg_13, io_sign_b_13) @[block_division.scala 38:27]
    node _two_complement_13_T = eq(signs__13, UInt<1>("h1")) @[block_division.scala 40:18]
    node _two_complement_13_T_1 = cat(UInt<1>("h0"), dotProductRegs__13) @[block_division.scala 41:16]
    node _two_complement_13_T_2 = not(_two_complement_13_T_1) @[block_division.scala 41:10]
    node _two_complement_13_T_3 = add(_two_complement_13_T_2, UInt<1>("h1")) @[block_division.scala 41:38]
    node _two_complement_13_T_4 = tail(_two_complement_13_T_3, 1) @[block_division.scala 41:38]
    node _two_complement_13_T_5 = cat(UInt<1>("h0"), dotProductRegs__13) @[block_division.scala 42:14]
    node _two_complement_13_T_6 = mux(_two_complement_13_T, _two_complement_13_T_4, _two_complement_13_T_5) @[block_division.scala 39:31]
    node _two_complement_buffer_13_T = asSInt(two_complement__13) @[block_division.scala 44:53]
    reg multiplierReg_14 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_14) @[block_division.scala 33:34]
    reg signReg_14 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_14) @[block_division.scala 34:28]
    node _dotProductRegs_14_T = mul(multiplierReg_14, io_man_b_14) @[block_division.scala 37:42]
    node _signs_14_T = xor(signReg_14, io_sign_b_14) @[block_division.scala 38:27]
    node _two_complement_14_T = eq(signs__14, UInt<1>("h1")) @[block_division.scala 40:18]
    node _two_complement_14_T_1 = cat(UInt<1>("h0"), dotProductRegs__14) @[block_division.scala 41:16]
    node _two_complement_14_T_2 = not(_two_complement_14_T_1) @[block_division.scala 41:10]
    node _two_complement_14_T_3 = add(_two_complement_14_T_2, UInt<1>("h1")) @[block_division.scala 41:38]
    node _two_complement_14_T_4 = tail(_two_complement_14_T_3, 1) @[block_division.scala 41:38]
    node _two_complement_14_T_5 = cat(UInt<1>("h0"), dotProductRegs__14) @[block_division.scala 42:14]
    node _two_complement_14_T_6 = mux(_two_complement_14_T, _two_complement_14_T_4, _two_complement_14_T_5) @[block_division.scala 39:31]
    node _two_complement_buffer_14_T = asSInt(two_complement__14) @[block_division.scala 44:53]
    reg multiplierReg_15 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_15) @[block_division.scala 33:34]
    reg signReg_15 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_15) @[block_division.scala 34:28]
    node _dotProductRegs_15_T = mul(multiplierReg_15, io_man_b_15) @[block_division.scala 37:42]
    node _signs_15_T = xor(signReg_15, io_sign_b_15) @[block_division.scala 38:27]
    node _two_complement_15_T = eq(signs__15, UInt<1>("h1")) @[block_division.scala 40:18]
    node _two_complement_15_T_1 = cat(UInt<1>("h0"), dotProductRegs__15) @[block_division.scala 41:16]
    node _two_complement_15_T_2 = not(_two_complement_15_T_1) @[block_division.scala 41:10]
    node _two_complement_15_T_3 = add(_two_complement_15_T_2, UInt<1>("h1")) @[block_division.scala 41:38]
    node _two_complement_15_T_4 = tail(_two_complement_15_T_3, 1) @[block_division.scala 41:38]
    node _two_complement_15_T_5 = cat(UInt<1>("h0"), dotProductRegs__15) @[block_division.scala 42:14]
    node _two_complement_15_T_6 = mux(_two_complement_15_T, _two_complement_15_T_4, _two_complement_15_T_5) @[block_division.scala 39:31]
    node _two_complement_buffer_15_T = asSInt(two_complement__15) @[block_division.scala 44:53]
    node _acc_0_T = add(two_complement_buffer__0, two_complement_buffer__1) @[block_division.scala 46:46]
    node _acc_0_T_1 = add(_acc_0_T, two_complement_buffer__2) @[block_division.scala 46:46]
    node _acc_0_T_2 = add(_acc_0_T_1, two_complement_buffer__3) @[block_division.scala 46:46]
    node _acc_0_T_3 = add(_acc_0_T_2, two_complement_buffer__4) @[block_division.scala 46:46]
    node _acc_0_T_4 = add(_acc_0_T_3, two_complement_buffer__5) @[block_division.scala 46:46]
    node _acc_0_T_5 = add(_acc_0_T_4, two_complement_buffer__6) @[block_division.scala 46:46]
    node _acc_0_T_6 = add(_acc_0_T_5, two_complement_buffer__7) @[block_division.scala 46:46]
    node _acc_0_T_7 = add(_acc_0_T_6, two_complement_buffer__8) @[block_division.scala 46:46]
    node _acc_0_T_8 = add(_acc_0_T_7, two_complement_buffer__9) @[block_division.scala 46:46]
    node _acc_0_T_9 = add(_acc_0_T_8, two_complement_buffer__10) @[block_division.scala 46:46]
    node _acc_0_T_10 = add(_acc_0_T_9, two_complement_buffer__11) @[block_division.scala 46:46]
    node _acc_0_T_11 = add(_acc_0_T_10, two_complement_buffer__12) @[block_division.scala 46:46]
    node _acc_0_T_12 = add(_acc_0_T_11, two_complement_buffer__13) @[block_division.scala 46:46]
    node _acc_0_T_13 = add(_acc_0_T_12, two_complement_buffer__14) @[block_division.scala 46:46]
    node _acc_0_T_14 = add(_acc_0_T_13, two_complement_buffer__15) @[block_division.scala 46:46]
    node _exp_output_1_T = add(io_exp_a_1, io_exp_b_1) @[block_division.scala 27:34]
    reg dotProductRegs_1_0 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_1_0) @[block_division.scala 28:29]
    reg dotProductRegs_1_1 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_1_1) @[block_division.scala 28:29]
    reg dotProductRegs_1_2 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_1_2) @[block_division.scala 28:29]
    reg dotProductRegs_1_3 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_1_3) @[block_division.scala 28:29]
    reg dotProductRegs_1_4 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_1_4) @[block_division.scala 28:29]
    reg dotProductRegs_1_5 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_1_5) @[block_division.scala 28:29]
    reg dotProductRegs_1_6 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_1_6) @[block_division.scala 28:29]
    reg dotProductRegs_1_7 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_1_7) @[block_division.scala 28:29]
    reg dotProductRegs_1_8 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_1_8) @[block_division.scala 28:29]
    reg dotProductRegs_1_9 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_1_9) @[block_division.scala 28:29]
    reg dotProductRegs_1_10 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_1_10) @[block_division.scala 28:29]
    reg dotProductRegs_1_11 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_1_11) @[block_division.scala 28:29]
    reg dotProductRegs_1_12 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_1_12) @[block_division.scala 28:29]
    reg dotProductRegs_1_13 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_1_13) @[block_division.scala 28:29]
    reg dotProductRegs_1_14 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_1_14) @[block_division.scala 28:29]
    reg dotProductRegs_1_15 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_1_15) @[block_division.scala 28:29]
    reg signs_1_0 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_1_0) @[block_division.scala 29:20]
    reg signs_1_1 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_1_1) @[block_division.scala 29:20]
    reg signs_1_2 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_1_2) @[block_division.scala 29:20]
    reg signs_1_3 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_1_3) @[block_division.scala 29:20]
    reg signs_1_4 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_1_4) @[block_division.scala 29:20]
    reg signs_1_5 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_1_5) @[block_division.scala 29:20]
    reg signs_1_6 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_1_6) @[block_division.scala 29:20]
    reg signs_1_7 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_1_7) @[block_division.scala 29:20]
    reg signs_1_8 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_1_8) @[block_division.scala 29:20]
    reg signs_1_9 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_1_9) @[block_division.scala 29:20]
    reg signs_1_10 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_1_10) @[block_division.scala 29:20]
    reg signs_1_11 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_1_11) @[block_division.scala 29:20]
    reg signs_1_12 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_1_12) @[block_division.scala 29:20]
    reg signs_1_13 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_1_13) @[block_division.scala 29:20]
    reg signs_1_14 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_1_14) @[block_division.scala 29:20]
    reg signs_1_15 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_1_15) @[block_division.scala 29:20]
    reg two_complement_1_0 : UInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_1_0) @[block_division.scala 30:29]
    reg two_complement_1_1 : UInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_1_1) @[block_division.scala 30:29]
    reg two_complement_1_2 : UInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_1_2) @[block_division.scala 30:29]
    reg two_complement_1_3 : UInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_1_3) @[block_division.scala 30:29]
    reg two_complement_1_4 : UInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_1_4) @[block_division.scala 30:29]
    reg two_complement_1_5 : UInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_1_5) @[block_division.scala 30:29]
    reg two_complement_1_6 : UInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_1_6) @[block_division.scala 30:29]
    reg two_complement_1_7 : UInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_1_7) @[block_division.scala 30:29]
    reg two_complement_1_8 : UInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_1_8) @[block_division.scala 30:29]
    reg two_complement_1_9 : UInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_1_9) @[block_division.scala 30:29]
    reg two_complement_1_10 : UInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_1_10) @[block_division.scala 30:29]
    reg two_complement_1_11 : UInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_1_11) @[block_division.scala 30:29]
    reg two_complement_1_12 : UInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_1_12) @[block_division.scala 30:29]
    reg two_complement_1_13 : UInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_1_13) @[block_division.scala 30:29]
    reg two_complement_1_14 : UInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_1_14) @[block_division.scala 30:29]
    reg two_complement_1_15 : UInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_1_15) @[block_division.scala 30:29]
    reg two_complement_buffer_1_0 : SInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_1_0) @[block_division.scala 31:36]
    reg two_complement_buffer_1_1 : SInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_1_1) @[block_division.scala 31:36]
    reg two_complement_buffer_1_2 : SInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_1_2) @[block_division.scala 31:36]
    reg two_complement_buffer_1_3 : SInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_1_3) @[block_division.scala 31:36]
    reg two_complement_buffer_1_4 : SInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_1_4) @[block_division.scala 31:36]
    reg two_complement_buffer_1_5 : SInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_1_5) @[block_division.scala 31:36]
    reg two_complement_buffer_1_6 : SInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_1_6) @[block_division.scala 31:36]
    reg two_complement_buffer_1_7 : SInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_1_7) @[block_division.scala 31:36]
    reg two_complement_buffer_1_8 : SInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_1_8) @[block_division.scala 31:36]
    reg two_complement_buffer_1_9 : SInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_1_9) @[block_division.scala 31:36]
    reg two_complement_buffer_1_10 : SInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_1_10) @[block_division.scala 31:36]
    reg two_complement_buffer_1_11 : SInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_1_11) @[block_division.scala 31:36]
    reg two_complement_buffer_1_12 : SInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_1_12) @[block_division.scala 31:36]
    reg two_complement_buffer_1_13 : SInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_1_13) @[block_division.scala 31:36]
    reg two_complement_buffer_1_14 : SInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_1_14) @[block_division.scala 31:36]
    reg two_complement_buffer_1_15 : SInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_1_15) @[block_division.scala 31:36]
    reg multiplierReg_16 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_16) @[block_division.scala 33:34]
    reg signReg_16 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_16) @[block_division.scala 34:28]
    node _dotProductRegs_0_T_1 = mul(multiplierReg_16, io_man_b_16) @[block_division.scala 37:42]
    node _signs_0_T_1 = xor(signReg_16, io_sign_b_16) @[block_division.scala 38:27]
    node _two_complement_0_T_7 = eq(signs_1_0, UInt<1>("h1")) @[block_division.scala 40:18]
    node _two_complement_0_T_8 = cat(UInt<1>("h0"), dotProductRegs_1_0) @[block_division.scala 41:16]
    node _two_complement_0_T_9 = not(_two_complement_0_T_8) @[block_division.scala 41:10]
    node _two_complement_0_T_10 = add(_two_complement_0_T_9, UInt<1>("h1")) @[block_division.scala 41:38]
    node _two_complement_0_T_11 = tail(_two_complement_0_T_10, 1) @[block_division.scala 41:38]
    node _two_complement_0_T_12 = cat(UInt<1>("h0"), dotProductRegs_1_0) @[block_division.scala 42:14]
    node _two_complement_0_T_13 = mux(_two_complement_0_T_7, _two_complement_0_T_11, _two_complement_0_T_12) @[block_division.scala 39:31]
    node _two_complement_buffer_0_T_1 = asSInt(two_complement_1_0) @[block_division.scala 44:53]
    reg multiplierReg_17 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_17) @[block_division.scala 33:34]
    reg signReg_17 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_17) @[block_division.scala 34:28]
    node _dotProductRegs_1_T_1 = mul(multiplierReg_17, io_man_b_17) @[block_division.scala 37:42]
    node _signs_1_T_1 = xor(signReg_17, io_sign_b_17) @[block_division.scala 38:27]
    node _two_complement_1_T_7 = eq(signs_1_1, UInt<1>("h1")) @[block_division.scala 40:18]
    node _two_complement_1_T_8 = cat(UInt<1>("h0"), dotProductRegs_1_1) @[block_division.scala 41:16]
    node _two_complement_1_T_9 = not(_two_complement_1_T_8) @[block_division.scala 41:10]
    node _two_complement_1_T_10 = add(_two_complement_1_T_9, UInt<1>("h1")) @[block_division.scala 41:38]
    node _two_complement_1_T_11 = tail(_two_complement_1_T_10, 1) @[block_division.scala 41:38]
    node _two_complement_1_T_12 = cat(UInt<1>("h0"), dotProductRegs_1_1) @[block_division.scala 42:14]
    node _two_complement_1_T_13 = mux(_two_complement_1_T_7, _two_complement_1_T_11, _two_complement_1_T_12) @[block_division.scala 39:31]
    node _two_complement_buffer_1_T_1 = asSInt(two_complement_1_1) @[block_division.scala 44:53]
    reg multiplierReg_18 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_18) @[block_division.scala 33:34]
    reg signReg_18 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_18) @[block_division.scala 34:28]
    node _dotProductRegs_2_T_1 = mul(multiplierReg_18, io_man_b_18) @[block_division.scala 37:42]
    node _signs_2_T_1 = xor(signReg_18, io_sign_b_18) @[block_division.scala 38:27]
    node _two_complement_2_T_7 = eq(signs_1_2, UInt<1>("h1")) @[block_division.scala 40:18]
    node _two_complement_2_T_8 = cat(UInt<1>("h0"), dotProductRegs_1_2) @[block_division.scala 41:16]
    node _two_complement_2_T_9 = not(_two_complement_2_T_8) @[block_division.scala 41:10]
    node _two_complement_2_T_10 = add(_two_complement_2_T_9, UInt<1>("h1")) @[block_division.scala 41:38]
    node _two_complement_2_T_11 = tail(_two_complement_2_T_10, 1) @[block_division.scala 41:38]
    node _two_complement_2_T_12 = cat(UInt<1>("h0"), dotProductRegs_1_2) @[block_division.scala 42:14]
    node _two_complement_2_T_13 = mux(_two_complement_2_T_7, _two_complement_2_T_11, _two_complement_2_T_12) @[block_division.scala 39:31]
    node _two_complement_buffer_2_T_1 = asSInt(two_complement_1_2) @[block_division.scala 44:53]
    reg multiplierReg_19 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_19) @[block_division.scala 33:34]
    reg signReg_19 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_19) @[block_division.scala 34:28]
    node _dotProductRegs_3_T_1 = mul(multiplierReg_19, io_man_b_19) @[block_division.scala 37:42]
    node _signs_3_T_1 = xor(signReg_19, io_sign_b_19) @[block_division.scala 38:27]
    node _two_complement_3_T_7 = eq(signs_1_3, UInt<1>("h1")) @[block_division.scala 40:18]
    node _two_complement_3_T_8 = cat(UInt<1>("h0"), dotProductRegs_1_3) @[block_division.scala 41:16]
    node _two_complement_3_T_9 = not(_two_complement_3_T_8) @[block_division.scala 41:10]
    node _two_complement_3_T_10 = add(_two_complement_3_T_9, UInt<1>("h1")) @[block_division.scala 41:38]
    node _two_complement_3_T_11 = tail(_two_complement_3_T_10, 1) @[block_division.scala 41:38]
    node _two_complement_3_T_12 = cat(UInt<1>("h0"), dotProductRegs_1_3) @[block_division.scala 42:14]
    node _two_complement_3_T_13 = mux(_two_complement_3_T_7, _two_complement_3_T_11, _two_complement_3_T_12) @[block_division.scala 39:31]
    node _two_complement_buffer_3_T_1 = asSInt(two_complement_1_3) @[block_division.scala 44:53]
    reg multiplierReg_20 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_20) @[block_division.scala 33:34]
    reg signReg_20 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_20) @[block_division.scala 34:28]
    node _dotProductRegs_4_T_1 = mul(multiplierReg_20, io_man_b_20) @[block_division.scala 37:42]
    node _signs_4_T_1 = xor(signReg_20, io_sign_b_20) @[block_division.scala 38:27]
    node _two_complement_4_T_7 = eq(signs_1_4, UInt<1>("h1")) @[block_division.scala 40:18]
    node _two_complement_4_T_8 = cat(UInt<1>("h0"), dotProductRegs_1_4) @[block_division.scala 41:16]
    node _two_complement_4_T_9 = not(_two_complement_4_T_8) @[block_division.scala 41:10]
    node _two_complement_4_T_10 = add(_two_complement_4_T_9, UInt<1>("h1")) @[block_division.scala 41:38]
    node _two_complement_4_T_11 = tail(_two_complement_4_T_10, 1) @[block_division.scala 41:38]
    node _two_complement_4_T_12 = cat(UInt<1>("h0"), dotProductRegs_1_4) @[block_division.scala 42:14]
    node _two_complement_4_T_13 = mux(_two_complement_4_T_7, _two_complement_4_T_11, _two_complement_4_T_12) @[block_division.scala 39:31]
    node _two_complement_buffer_4_T_1 = asSInt(two_complement_1_4) @[block_division.scala 44:53]
    reg multiplierReg_21 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_21) @[block_division.scala 33:34]
    reg signReg_21 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_21) @[block_division.scala 34:28]
    node _dotProductRegs_5_T_1 = mul(multiplierReg_21, io_man_b_21) @[block_division.scala 37:42]
    node _signs_5_T_1 = xor(signReg_21, io_sign_b_21) @[block_division.scala 38:27]
    node _two_complement_5_T_7 = eq(signs_1_5, UInt<1>("h1")) @[block_division.scala 40:18]
    node _two_complement_5_T_8 = cat(UInt<1>("h0"), dotProductRegs_1_5) @[block_division.scala 41:16]
    node _two_complement_5_T_9 = not(_two_complement_5_T_8) @[block_division.scala 41:10]
    node _two_complement_5_T_10 = add(_two_complement_5_T_9, UInt<1>("h1")) @[block_division.scala 41:38]
    node _two_complement_5_T_11 = tail(_two_complement_5_T_10, 1) @[block_division.scala 41:38]
    node _two_complement_5_T_12 = cat(UInt<1>("h0"), dotProductRegs_1_5) @[block_division.scala 42:14]
    node _two_complement_5_T_13 = mux(_two_complement_5_T_7, _two_complement_5_T_11, _two_complement_5_T_12) @[block_division.scala 39:31]
    node _two_complement_buffer_5_T_1 = asSInt(two_complement_1_5) @[block_division.scala 44:53]
    reg multiplierReg_22 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_22) @[block_division.scala 33:34]
    reg signReg_22 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_22) @[block_division.scala 34:28]
    node _dotProductRegs_6_T_1 = mul(multiplierReg_22, io_man_b_22) @[block_division.scala 37:42]
    node _signs_6_T_1 = xor(signReg_22, io_sign_b_22) @[block_division.scala 38:27]
    node _two_complement_6_T_7 = eq(signs_1_6, UInt<1>("h1")) @[block_division.scala 40:18]
    node _two_complement_6_T_8 = cat(UInt<1>("h0"), dotProductRegs_1_6) @[block_division.scala 41:16]
    node _two_complement_6_T_9 = not(_two_complement_6_T_8) @[block_division.scala 41:10]
    node _two_complement_6_T_10 = add(_two_complement_6_T_9, UInt<1>("h1")) @[block_division.scala 41:38]
    node _two_complement_6_T_11 = tail(_two_complement_6_T_10, 1) @[block_division.scala 41:38]
    node _two_complement_6_T_12 = cat(UInt<1>("h0"), dotProductRegs_1_6) @[block_division.scala 42:14]
    node _two_complement_6_T_13 = mux(_two_complement_6_T_7, _two_complement_6_T_11, _two_complement_6_T_12) @[block_division.scala 39:31]
    node _two_complement_buffer_6_T_1 = asSInt(two_complement_1_6) @[block_division.scala 44:53]
    reg multiplierReg_23 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_23) @[block_division.scala 33:34]
    reg signReg_23 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_23) @[block_division.scala 34:28]
    node _dotProductRegs_7_T_1 = mul(multiplierReg_23, io_man_b_23) @[block_division.scala 37:42]
    node _signs_7_T_1 = xor(signReg_23, io_sign_b_23) @[block_division.scala 38:27]
    node _two_complement_7_T_7 = eq(signs_1_7, UInt<1>("h1")) @[block_division.scala 40:18]
    node _two_complement_7_T_8 = cat(UInt<1>("h0"), dotProductRegs_1_7) @[block_division.scala 41:16]
    node _two_complement_7_T_9 = not(_two_complement_7_T_8) @[block_division.scala 41:10]
    node _two_complement_7_T_10 = add(_two_complement_7_T_9, UInt<1>("h1")) @[block_division.scala 41:38]
    node _two_complement_7_T_11 = tail(_two_complement_7_T_10, 1) @[block_division.scala 41:38]
    node _two_complement_7_T_12 = cat(UInt<1>("h0"), dotProductRegs_1_7) @[block_division.scala 42:14]
    node _two_complement_7_T_13 = mux(_two_complement_7_T_7, _two_complement_7_T_11, _two_complement_7_T_12) @[block_division.scala 39:31]
    node _two_complement_buffer_7_T_1 = asSInt(two_complement_1_7) @[block_division.scala 44:53]
    reg multiplierReg_24 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_24) @[block_division.scala 33:34]
    reg signReg_24 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_24) @[block_division.scala 34:28]
    node _dotProductRegs_8_T_1 = mul(multiplierReg_24, io_man_b_24) @[block_division.scala 37:42]
    node _signs_8_T_1 = xor(signReg_24, io_sign_b_24) @[block_division.scala 38:27]
    node _two_complement_8_T_7 = eq(signs_1_8, UInt<1>("h1")) @[block_division.scala 40:18]
    node _two_complement_8_T_8 = cat(UInt<1>("h0"), dotProductRegs_1_8) @[block_division.scala 41:16]
    node _two_complement_8_T_9 = not(_two_complement_8_T_8) @[block_division.scala 41:10]
    node _two_complement_8_T_10 = add(_two_complement_8_T_9, UInt<1>("h1")) @[block_division.scala 41:38]
    node _two_complement_8_T_11 = tail(_two_complement_8_T_10, 1) @[block_division.scala 41:38]
    node _two_complement_8_T_12 = cat(UInt<1>("h0"), dotProductRegs_1_8) @[block_division.scala 42:14]
    node _two_complement_8_T_13 = mux(_two_complement_8_T_7, _two_complement_8_T_11, _two_complement_8_T_12) @[block_division.scala 39:31]
    node _two_complement_buffer_8_T_1 = asSInt(two_complement_1_8) @[block_division.scala 44:53]
    reg multiplierReg_25 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_25) @[block_division.scala 33:34]
    reg signReg_25 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_25) @[block_division.scala 34:28]
    node _dotProductRegs_9_T_1 = mul(multiplierReg_25, io_man_b_25) @[block_division.scala 37:42]
    node _signs_9_T_1 = xor(signReg_25, io_sign_b_25) @[block_division.scala 38:27]
    node _two_complement_9_T_7 = eq(signs_1_9, UInt<1>("h1")) @[block_division.scala 40:18]
    node _two_complement_9_T_8 = cat(UInt<1>("h0"), dotProductRegs_1_9) @[block_division.scala 41:16]
    node _two_complement_9_T_9 = not(_two_complement_9_T_8) @[block_division.scala 41:10]
    node _two_complement_9_T_10 = add(_two_complement_9_T_9, UInt<1>("h1")) @[block_division.scala 41:38]
    node _two_complement_9_T_11 = tail(_two_complement_9_T_10, 1) @[block_division.scala 41:38]
    node _two_complement_9_T_12 = cat(UInt<1>("h0"), dotProductRegs_1_9) @[block_division.scala 42:14]
    node _two_complement_9_T_13 = mux(_two_complement_9_T_7, _two_complement_9_T_11, _two_complement_9_T_12) @[block_division.scala 39:31]
    node _two_complement_buffer_9_T_1 = asSInt(two_complement_1_9) @[block_division.scala 44:53]
    reg multiplierReg_26 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_26) @[block_division.scala 33:34]
    reg signReg_26 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_26) @[block_division.scala 34:28]
    node _dotProductRegs_10_T_1 = mul(multiplierReg_26, io_man_b_26) @[block_division.scala 37:42]
    node _signs_10_T_1 = xor(signReg_26, io_sign_b_26) @[block_division.scala 38:27]
    node _two_complement_10_T_7 = eq(signs_1_10, UInt<1>("h1")) @[block_division.scala 40:18]
    node _two_complement_10_T_8 = cat(UInt<1>("h0"), dotProductRegs_1_10) @[block_division.scala 41:16]
    node _two_complement_10_T_9 = not(_two_complement_10_T_8) @[block_division.scala 41:10]
    node _two_complement_10_T_10 = add(_two_complement_10_T_9, UInt<1>("h1")) @[block_division.scala 41:38]
    node _two_complement_10_T_11 = tail(_two_complement_10_T_10, 1) @[block_division.scala 41:38]
    node _two_complement_10_T_12 = cat(UInt<1>("h0"), dotProductRegs_1_10) @[block_division.scala 42:14]
    node _two_complement_10_T_13 = mux(_two_complement_10_T_7, _two_complement_10_T_11, _two_complement_10_T_12) @[block_division.scala 39:31]
    node _two_complement_buffer_10_T_1 = asSInt(two_complement_1_10) @[block_division.scala 44:53]
    reg multiplierReg_27 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_27) @[block_division.scala 33:34]
    reg signReg_27 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_27) @[block_division.scala 34:28]
    node _dotProductRegs_11_T_1 = mul(multiplierReg_27, io_man_b_27) @[block_division.scala 37:42]
    node _signs_11_T_1 = xor(signReg_27, io_sign_b_27) @[block_division.scala 38:27]
    node _two_complement_11_T_7 = eq(signs_1_11, UInt<1>("h1")) @[block_division.scala 40:18]
    node _two_complement_11_T_8 = cat(UInt<1>("h0"), dotProductRegs_1_11) @[block_division.scala 41:16]
    node _two_complement_11_T_9 = not(_two_complement_11_T_8) @[block_division.scala 41:10]
    node _two_complement_11_T_10 = add(_two_complement_11_T_9, UInt<1>("h1")) @[block_division.scala 41:38]
    node _two_complement_11_T_11 = tail(_two_complement_11_T_10, 1) @[block_division.scala 41:38]
    node _two_complement_11_T_12 = cat(UInt<1>("h0"), dotProductRegs_1_11) @[block_division.scala 42:14]
    node _two_complement_11_T_13 = mux(_two_complement_11_T_7, _two_complement_11_T_11, _two_complement_11_T_12) @[block_division.scala 39:31]
    node _two_complement_buffer_11_T_1 = asSInt(two_complement_1_11) @[block_division.scala 44:53]
    reg multiplierReg_28 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_28) @[block_division.scala 33:34]
    reg signReg_28 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_28) @[block_division.scala 34:28]
    node _dotProductRegs_12_T_1 = mul(multiplierReg_28, io_man_b_28) @[block_division.scala 37:42]
    node _signs_12_T_1 = xor(signReg_28, io_sign_b_28) @[block_division.scala 38:27]
    node _two_complement_12_T_7 = eq(signs_1_12, UInt<1>("h1")) @[block_division.scala 40:18]
    node _two_complement_12_T_8 = cat(UInt<1>("h0"), dotProductRegs_1_12) @[block_division.scala 41:16]
    node _two_complement_12_T_9 = not(_two_complement_12_T_8) @[block_division.scala 41:10]
    node _two_complement_12_T_10 = add(_two_complement_12_T_9, UInt<1>("h1")) @[block_division.scala 41:38]
    node _two_complement_12_T_11 = tail(_two_complement_12_T_10, 1) @[block_division.scala 41:38]
    node _two_complement_12_T_12 = cat(UInt<1>("h0"), dotProductRegs_1_12) @[block_division.scala 42:14]
    node _two_complement_12_T_13 = mux(_two_complement_12_T_7, _two_complement_12_T_11, _two_complement_12_T_12) @[block_division.scala 39:31]
    node _two_complement_buffer_12_T_1 = asSInt(two_complement_1_12) @[block_division.scala 44:53]
    reg multiplierReg_29 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_29) @[block_division.scala 33:34]
    reg signReg_29 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_29) @[block_division.scala 34:28]
    node _dotProductRegs_13_T_1 = mul(multiplierReg_29, io_man_b_29) @[block_division.scala 37:42]
    node _signs_13_T_1 = xor(signReg_29, io_sign_b_29) @[block_division.scala 38:27]
    node _two_complement_13_T_7 = eq(signs_1_13, UInt<1>("h1")) @[block_division.scala 40:18]
    node _two_complement_13_T_8 = cat(UInt<1>("h0"), dotProductRegs_1_13) @[block_division.scala 41:16]
    node _two_complement_13_T_9 = not(_two_complement_13_T_8) @[block_division.scala 41:10]
    node _two_complement_13_T_10 = add(_two_complement_13_T_9, UInt<1>("h1")) @[block_division.scala 41:38]
    node _two_complement_13_T_11 = tail(_two_complement_13_T_10, 1) @[block_division.scala 41:38]
    node _two_complement_13_T_12 = cat(UInt<1>("h0"), dotProductRegs_1_13) @[block_division.scala 42:14]
    node _two_complement_13_T_13 = mux(_two_complement_13_T_7, _two_complement_13_T_11, _two_complement_13_T_12) @[block_division.scala 39:31]
    node _two_complement_buffer_13_T_1 = asSInt(two_complement_1_13) @[block_division.scala 44:53]
    reg multiplierReg_30 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_30) @[block_division.scala 33:34]
    reg signReg_30 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_30) @[block_division.scala 34:28]
    node _dotProductRegs_14_T_1 = mul(multiplierReg_30, io_man_b_30) @[block_division.scala 37:42]
    node _signs_14_T_1 = xor(signReg_30, io_sign_b_30) @[block_division.scala 38:27]
    node _two_complement_14_T_7 = eq(signs_1_14, UInt<1>("h1")) @[block_division.scala 40:18]
    node _two_complement_14_T_8 = cat(UInt<1>("h0"), dotProductRegs_1_14) @[block_division.scala 41:16]
    node _two_complement_14_T_9 = not(_two_complement_14_T_8) @[block_division.scala 41:10]
    node _two_complement_14_T_10 = add(_two_complement_14_T_9, UInt<1>("h1")) @[block_division.scala 41:38]
    node _two_complement_14_T_11 = tail(_two_complement_14_T_10, 1) @[block_division.scala 41:38]
    node _two_complement_14_T_12 = cat(UInt<1>("h0"), dotProductRegs_1_14) @[block_division.scala 42:14]
    node _two_complement_14_T_13 = mux(_two_complement_14_T_7, _two_complement_14_T_11, _two_complement_14_T_12) @[block_division.scala 39:31]
    node _two_complement_buffer_14_T_1 = asSInt(two_complement_1_14) @[block_division.scala 44:53]
    reg multiplierReg_31 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_31) @[block_division.scala 33:34]
    reg signReg_31 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_31) @[block_division.scala 34:28]
    node _dotProductRegs_15_T_1 = mul(multiplierReg_31, io_man_b_31) @[block_division.scala 37:42]
    node _signs_15_T_1 = xor(signReg_31, io_sign_b_31) @[block_division.scala 38:27]
    node _two_complement_15_T_7 = eq(signs_1_15, UInt<1>("h1")) @[block_division.scala 40:18]
    node _two_complement_15_T_8 = cat(UInt<1>("h0"), dotProductRegs_1_15) @[block_division.scala 41:16]
    node _two_complement_15_T_9 = not(_two_complement_15_T_8) @[block_division.scala 41:10]
    node _two_complement_15_T_10 = add(_two_complement_15_T_9, UInt<1>("h1")) @[block_division.scala 41:38]
    node _two_complement_15_T_11 = tail(_two_complement_15_T_10, 1) @[block_division.scala 41:38]
    node _two_complement_15_T_12 = cat(UInt<1>("h0"), dotProductRegs_1_15) @[block_division.scala 42:14]
    node _two_complement_15_T_13 = mux(_two_complement_15_T_7, _two_complement_15_T_11, _two_complement_15_T_12) @[block_division.scala 39:31]
    node _two_complement_buffer_15_T_1 = asSInt(two_complement_1_15) @[block_division.scala 44:53]
    node _acc_1_T = add(two_complement_buffer_1_0, two_complement_buffer_1_1) @[block_division.scala 46:46]
    node _acc_1_T_1 = add(_acc_1_T, two_complement_buffer_1_2) @[block_division.scala 46:46]
    node _acc_1_T_2 = add(_acc_1_T_1, two_complement_buffer_1_3) @[block_division.scala 46:46]
    node _acc_1_T_3 = add(_acc_1_T_2, two_complement_buffer_1_4) @[block_division.scala 46:46]
    node _acc_1_T_4 = add(_acc_1_T_3, two_complement_buffer_1_5) @[block_division.scala 46:46]
    node _acc_1_T_5 = add(_acc_1_T_4, two_complement_buffer_1_6) @[block_division.scala 46:46]
    node _acc_1_T_6 = add(_acc_1_T_5, two_complement_buffer_1_7) @[block_division.scala 46:46]
    node _acc_1_T_7 = add(_acc_1_T_6, two_complement_buffer_1_8) @[block_division.scala 46:46]
    node _acc_1_T_8 = add(_acc_1_T_7, two_complement_buffer_1_9) @[block_division.scala 46:46]
    node _acc_1_T_9 = add(_acc_1_T_8, two_complement_buffer_1_10) @[block_division.scala 46:46]
    node _acc_1_T_10 = add(_acc_1_T_9, two_complement_buffer_1_11) @[block_division.scala 46:46]
    node _acc_1_T_11 = add(_acc_1_T_10, two_complement_buffer_1_12) @[block_division.scala 46:46]
    node _acc_1_T_12 = add(_acc_1_T_11, two_complement_buffer_1_13) @[block_division.scala 46:46]
    node _acc_1_T_13 = add(_acc_1_T_12, two_complement_buffer_1_14) @[block_division.scala 46:46]
    node _acc_1_T_14 = add(_acc_1_T_13, two_complement_buffer_1_15) @[block_division.scala 46:46]
    node _exp_output_2_T = add(io_exp_a_2, io_exp_b_2) @[block_division.scala 27:34]
    reg dotProductRegs_2_0 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_2_0) @[block_division.scala 28:29]
    reg dotProductRegs_2_1 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_2_1) @[block_division.scala 28:29]
    reg dotProductRegs_2_2 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_2_2) @[block_division.scala 28:29]
    reg dotProductRegs_2_3 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_2_3) @[block_division.scala 28:29]
    reg dotProductRegs_2_4 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_2_4) @[block_division.scala 28:29]
    reg dotProductRegs_2_5 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_2_5) @[block_division.scala 28:29]
    reg dotProductRegs_2_6 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_2_6) @[block_division.scala 28:29]
    reg dotProductRegs_2_7 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_2_7) @[block_division.scala 28:29]
    reg dotProductRegs_2_8 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_2_8) @[block_division.scala 28:29]
    reg dotProductRegs_2_9 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_2_9) @[block_division.scala 28:29]
    reg dotProductRegs_2_10 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_2_10) @[block_division.scala 28:29]
    reg dotProductRegs_2_11 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_2_11) @[block_division.scala 28:29]
    reg dotProductRegs_2_12 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_2_12) @[block_division.scala 28:29]
    reg dotProductRegs_2_13 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_2_13) @[block_division.scala 28:29]
    reg dotProductRegs_2_14 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_2_14) @[block_division.scala 28:29]
    reg dotProductRegs_2_15 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_2_15) @[block_division.scala 28:29]
    reg signs_2_0 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_2_0) @[block_division.scala 29:20]
    reg signs_2_1 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_2_1) @[block_division.scala 29:20]
    reg signs_2_2 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_2_2) @[block_division.scala 29:20]
    reg signs_2_3 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_2_3) @[block_division.scala 29:20]
    reg signs_2_4 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_2_4) @[block_division.scala 29:20]
    reg signs_2_5 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_2_5) @[block_division.scala 29:20]
    reg signs_2_6 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_2_6) @[block_division.scala 29:20]
    reg signs_2_7 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_2_7) @[block_division.scala 29:20]
    reg signs_2_8 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_2_8) @[block_division.scala 29:20]
    reg signs_2_9 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_2_9) @[block_division.scala 29:20]
    reg signs_2_10 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_2_10) @[block_division.scala 29:20]
    reg signs_2_11 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_2_11) @[block_division.scala 29:20]
    reg signs_2_12 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_2_12) @[block_division.scala 29:20]
    reg signs_2_13 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_2_13) @[block_division.scala 29:20]
    reg signs_2_14 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_2_14) @[block_division.scala 29:20]
    reg signs_2_15 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_2_15) @[block_division.scala 29:20]
    reg two_complement_2_0 : UInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_2_0) @[block_division.scala 30:29]
    reg two_complement_2_1 : UInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_2_1) @[block_division.scala 30:29]
    reg two_complement_2_2 : UInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_2_2) @[block_division.scala 30:29]
    reg two_complement_2_3 : UInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_2_3) @[block_division.scala 30:29]
    reg two_complement_2_4 : UInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_2_4) @[block_division.scala 30:29]
    reg two_complement_2_5 : UInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_2_5) @[block_division.scala 30:29]
    reg two_complement_2_6 : UInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_2_6) @[block_division.scala 30:29]
    reg two_complement_2_7 : UInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_2_7) @[block_division.scala 30:29]
    reg two_complement_2_8 : UInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_2_8) @[block_division.scala 30:29]
    reg two_complement_2_9 : UInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_2_9) @[block_division.scala 30:29]
    reg two_complement_2_10 : UInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_2_10) @[block_division.scala 30:29]
    reg two_complement_2_11 : UInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_2_11) @[block_division.scala 30:29]
    reg two_complement_2_12 : UInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_2_12) @[block_division.scala 30:29]
    reg two_complement_2_13 : UInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_2_13) @[block_division.scala 30:29]
    reg two_complement_2_14 : UInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_2_14) @[block_division.scala 30:29]
    reg two_complement_2_15 : UInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_2_15) @[block_division.scala 30:29]
    reg two_complement_buffer_2_0 : SInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_2_0) @[block_division.scala 31:36]
    reg two_complement_buffer_2_1 : SInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_2_1) @[block_division.scala 31:36]
    reg two_complement_buffer_2_2 : SInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_2_2) @[block_division.scala 31:36]
    reg two_complement_buffer_2_3 : SInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_2_3) @[block_division.scala 31:36]
    reg two_complement_buffer_2_4 : SInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_2_4) @[block_division.scala 31:36]
    reg two_complement_buffer_2_5 : SInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_2_5) @[block_division.scala 31:36]
    reg two_complement_buffer_2_6 : SInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_2_6) @[block_division.scala 31:36]
    reg two_complement_buffer_2_7 : SInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_2_7) @[block_division.scala 31:36]
    reg two_complement_buffer_2_8 : SInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_2_8) @[block_division.scala 31:36]
    reg two_complement_buffer_2_9 : SInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_2_9) @[block_division.scala 31:36]
    reg two_complement_buffer_2_10 : SInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_2_10) @[block_division.scala 31:36]
    reg two_complement_buffer_2_11 : SInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_2_11) @[block_division.scala 31:36]
    reg two_complement_buffer_2_12 : SInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_2_12) @[block_division.scala 31:36]
    reg two_complement_buffer_2_13 : SInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_2_13) @[block_division.scala 31:36]
    reg two_complement_buffer_2_14 : SInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_2_14) @[block_division.scala 31:36]
    reg two_complement_buffer_2_15 : SInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_2_15) @[block_division.scala 31:36]
    reg multiplierReg_32 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_32) @[block_division.scala 33:34]
    reg signReg_32 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_32) @[block_division.scala 34:28]
    node _dotProductRegs_0_T_2 = mul(multiplierReg_32, io_man_b_32) @[block_division.scala 37:42]
    node _signs_0_T_2 = xor(signReg_32, io_sign_b_32) @[block_division.scala 38:27]
    node _two_complement_0_T_14 = eq(signs_2_0, UInt<1>("h1")) @[block_division.scala 40:18]
    node _two_complement_0_T_15 = cat(UInt<1>("h0"), dotProductRegs_2_0) @[block_division.scala 41:16]
    node _two_complement_0_T_16 = not(_two_complement_0_T_15) @[block_division.scala 41:10]
    node _two_complement_0_T_17 = add(_two_complement_0_T_16, UInt<1>("h1")) @[block_division.scala 41:38]
    node _two_complement_0_T_18 = tail(_two_complement_0_T_17, 1) @[block_division.scala 41:38]
    node _two_complement_0_T_19 = cat(UInt<1>("h0"), dotProductRegs_2_0) @[block_division.scala 42:14]
    node _two_complement_0_T_20 = mux(_two_complement_0_T_14, _two_complement_0_T_18, _two_complement_0_T_19) @[block_division.scala 39:31]
    node _two_complement_buffer_0_T_2 = asSInt(two_complement_2_0) @[block_division.scala 44:53]
    reg multiplierReg_33 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_33) @[block_division.scala 33:34]
    reg signReg_33 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_33) @[block_division.scala 34:28]
    node _dotProductRegs_1_T_2 = mul(multiplierReg_33, io_man_b_33) @[block_division.scala 37:42]
    node _signs_1_T_2 = xor(signReg_33, io_sign_b_33) @[block_division.scala 38:27]
    node _two_complement_1_T_14 = eq(signs_2_1, UInt<1>("h1")) @[block_division.scala 40:18]
    node _two_complement_1_T_15 = cat(UInt<1>("h0"), dotProductRegs_2_1) @[block_division.scala 41:16]
    node _two_complement_1_T_16 = not(_two_complement_1_T_15) @[block_division.scala 41:10]
    node _two_complement_1_T_17 = add(_two_complement_1_T_16, UInt<1>("h1")) @[block_division.scala 41:38]
    node _two_complement_1_T_18 = tail(_two_complement_1_T_17, 1) @[block_division.scala 41:38]
    node _two_complement_1_T_19 = cat(UInt<1>("h0"), dotProductRegs_2_1) @[block_division.scala 42:14]
    node _two_complement_1_T_20 = mux(_two_complement_1_T_14, _two_complement_1_T_18, _two_complement_1_T_19) @[block_division.scala 39:31]
    node _two_complement_buffer_1_T_2 = asSInt(two_complement_2_1) @[block_division.scala 44:53]
    reg multiplierReg_34 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_34) @[block_division.scala 33:34]
    reg signReg_34 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_34) @[block_division.scala 34:28]
    node _dotProductRegs_2_T_2 = mul(multiplierReg_34, io_man_b_34) @[block_division.scala 37:42]
    node _signs_2_T_2 = xor(signReg_34, io_sign_b_34) @[block_division.scala 38:27]
    node _two_complement_2_T_14 = eq(signs_2_2, UInt<1>("h1")) @[block_division.scala 40:18]
    node _two_complement_2_T_15 = cat(UInt<1>("h0"), dotProductRegs_2_2) @[block_division.scala 41:16]
    node _two_complement_2_T_16 = not(_two_complement_2_T_15) @[block_division.scala 41:10]
    node _two_complement_2_T_17 = add(_two_complement_2_T_16, UInt<1>("h1")) @[block_division.scala 41:38]
    node _two_complement_2_T_18 = tail(_two_complement_2_T_17, 1) @[block_division.scala 41:38]
    node _two_complement_2_T_19 = cat(UInt<1>("h0"), dotProductRegs_2_2) @[block_division.scala 42:14]
    node _two_complement_2_T_20 = mux(_two_complement_2_T_14, _two_complement_2_T_18, _two_complement_2_T_19) @[block_division.scala 39:31]
    node _two_complement_buffer_2_T_2 = asSInt(two_complement_2_2) @[block_division.scala 44:53]
    reg multiplierReg_35 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_35) @[block_division.scala 33:34]
    reg signReg_35 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_35) @[block_division.scala 34:28]
    node _dotProductRegs_3_T_2 = mul(multiplierReg_35, io_man_b_35) @[block_division.scala 37:42]
    node _signs_3_T_2 = xor(signReg_35, io_sign_b_35) @[block_division.scala 38:27]
    node _two_complement_3_T_14 = eq(signs_2_3, UInt<1>("h1")) @[block_division.scala 40:18]
    node _two_complement_3_T_15 = cat(UInt<1>("h0"), dotProductRegs_2_3) @[block_division.scala 41:16]
    node _two_complement_3_T_16 = not(_two_complement_3_T_15) @[block_division.scala 41:10]
    node _two_complement_3_T_17 = add(_two_complement_3_T_16, UInt<1>("h1")) @[block_division.scala 41:38]
    node _two_complement_3_T_18 = tail(_two_complement_3_T_17, 1) @[block_division.scala 41:38]
    node _two_complement_3_T_19 = cat(UInt<1>("h0"), dotProductRegs_2_3) @[block_division.scala 42:14]
    node _two_complement_3_T_20 = mux(_two_complement_3_T_14, _two_complement_3_T_18, _two_complement_3_T_19) @[block_division.scala 39:31]
    node _two_complement_buffer_3_T_2 = asSInt(two_complement_2_3) @[block_division.scala 44:53]
    reg multiplierReg_36 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_36) @[block_division.scala 33:34]
    reg signReg_36 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_36) @[block_division.scala 34:28]
    node _dotProductRegs_4_T_2 = mul(multiplierReg_36, io_man_b_36) @[block_division.scala 37:42]
    node _signs_4_T_2 = xor(signReg_36, io_sign_b_36) @[block_division.scala 38:27]
    node _two_complement_4_T_14 = eq(signs_2_4, UInt<1>("h1")) @[block_division.scala 40:18]
    node _two_complement_4_T_15 = cat(UInt<1>("h0"), dotProductRegs_2_4) @[block_division.scala 41:16]
    node _two_complement_4_T_16 = not(_two_complement_4_T_15) @[block_division.scala 41:10]
    node _two_complement_4_T_17 = add(_two_complement_4_T_16, UInt<1>("h1")) @[block_division.scala 41:38]
    node _two_complement_4_T_18 = tail(_two_complement_4_T_17, 1) @[block_division.scala 41:38]
    node _two_complement_4_T_19 = cat(UInt<1>("h0"), dotProductRegs_2_4) @[block_division.scala 42:14]
    node _two_complement_4_T_20 = mux(_two_complement_4_T_14, _two_complement_4_T_18, _two_complement_4_T_19) @[block_division.scala 39:31]
    node _two_complement_buffer_4_T_2 = asSInt(two_complement_2_4) @[block_division.scala 44:53]
    reg multiplierReg_37 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_37) @[block_division.scala 33:34]
    reg signReg_37 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_37) @[block_division.scala 34:28]
    node _dotProductRegs_5_T_2 = mul(multiplierReg_37, io_man_b_37) @[block_division.scala 37:42]
    node _signs_5_T_2 = xor(signReg_37, io_sign_b_37) @[block_division.scala 38:27]
    node _two_complement_5_T_14 = eq(signs_2_5, UInt<1>("h1")) @[block_division.scala 40:18]
    node _two_complement_5_T_15 = cat(UInt<1>("h0"), dotProductRegs_2_5) @[block_division.scala 41:16]
    node _two_complement_5_T_16 = not(_two_complement_5_T_15) @[block_division.scala 41:10]
    node _two_complement_5_T_17 = add(_two_complement_5_T_16, UInt<1>("h1")) @[block_division.scala 41:38]
    node _two_complement_5_T_18 = tail(_two_complement_5_T_17, 1) @[block_division.scala 41:38]
    node _two_complement_5_T_19 = cat(UInt<1>("h0"), dotProductRegs_2_5) @[block_division.scala 42:14]
    node _two_complement_5_T_20 = mux(_two_complement_5_T_14, _two_complement_5_T_18, _two_complement_5_T_19) @[block_division.scala 39:31]
    node _two_complement_buffer_5_T_2 = asSInt(two_complement_2_5) @[block_division.scala 44:53]
    reg multiplierReg_38 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_38) @[block_division.scala 33:34]
    reg signReg_38 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_38) @[block_division.scala 34:28]
    node _dotProductRegs_6_T_2 = mul(multiplierReg_38, io_man_b_38) @[block_division.scala 37:42]
    node _signs_6_T_2 = xor(signReg_38, io_sign_b_38) @[block_division.scala 38:27]
    node _two_complement_6_T_14 = eq(signs_2_6, UInt<1>("h1")) @[block_division.scala 40:18]
    node _two_complement_6_T_15 = cat(UInt<1>("h0"), dotProductRegs_2_6) @[block_division.scala 41:16]
    node _two_complement_6_T_16 = not(_two_complement_6_T_15) @[block_division.scala 41:10]
    node _two_complement_6_T_17 = add(_two_complement_6_T_16, UInt<1>("h1")) @[block_division.scala 41:38]
    node _two_complement_6_T_18 = tail(_two_complement_6_T_17, 1) @[block_division.scala 41:38]
    node _two_complement_6_T_19 = cat(UInt<1>("h0"), dotProductRegs_2_6) @[block_division.scala 42:14]
    node _two_complement_6_T_20 = mux(_two_complement_6_T_14, _two_complement_6_T_18, _two_complement_6_T_19) @[block_division.scala 39:31]
    node _two_complement_buffer_6_T_2 = asSInt(two_complement_2_6) @[block_division.scala 44:53]
    reg multiplierReg_39 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_39) @[block_division.scala 33:34]
    reg signReg_39 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_39) @[block_division.scala 34:28]
    node _dotProductRegs_7_T_2 = mul(multiplierReg_39, io_man_b_39) @[block_division.scala 37:42]
    node _signs_7_T_2 = xor(signReg_39, io_sign_b_39) @[block_division.scala 38:27]
    node _two_complement_7_T_14 = eq(signs_2_7, UInt<1>("h1")) @[block_division.scala 40:18]
    node _two_complement_7_T_15 = cat(UInt<1>("h0"), dotProductRegs_2_7) @[block_division.scala 41:16]
    node _two_complement_7_T_16 = not(_two_complement_7_T_15) @[block_division.scala 41:10]
    node _two_complement_7_T_17 = add(_two_complement_7_T_16, UInt<1>("h1")) @[block_division.scala 41:38]
    node _two_complement_7_T_18 = tail(_two_complement_7_T_17, 1) @[block_division.scala 41:38]
    node _two_complement_7_T_19 = cat(UInt<1>("h0"), dotProductRegs_2_7) @[block_division.scala 42:14]
    node _two_complement_7_T_20 = mux(_two_complement_7_T_14, _two_complement_7_T_18, _two_complement_7_T_19) @[block_division.scala 39:31]
    node _two_complement_buffer_7_T_2 = asSInt(two_complement_2_7) @[block_division.scala 44:53]
    reg multiplierReg_40 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_40) @[block_division.scala 33:34]
    reg signReg_40 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_40) @[block_division.scala 34:28]
    node _dotProductRegs_8_T_2 = mul(multiplierReg_40, io_man_b_40) @[block_division.scala 37:42]
    node _signs_8_T_2 = xor(signReg_40, io_sign_b_40) @[block_division.scala 38:27]
    node _two_complement_8_T_14 = eq(signs_2_8, UInt<1>("h1")) @[block_division.scala 40:18]
    node _two_complement_8_T_15 = cat(UInt<1>("h0"), dotProductRegs_2_8) @[block_division.scala 41:16]
    node _two_complement_8_T_16 = not(_two_complement_8_T_15) @[block_division.scala 41:10]
    node _two_complement_8_T_17 = add(_two_complement_8_T_16, UInt<1>("h1")) @[block_division.scala 41:38]
    node _two_complement_8_T_18 = tail(_two_complement_8_T_17, 1) @[block_division.scala 41:38]
    node _two_complement_8_T_19 = cat(UInt<1>("h0"), dotProductRegs_2_8) @[block_division.scala 42:14]
    node _two_complement_8_T_20 = mux(_two_complement_8_T_14, _two_complement_8_T_18, _two_complement_8_T_19) @[block_division.scala 39:31]
    node _two_complement_buffer_8_T_2 = asSInt(two_complement_2_8) @[block_division.scala 44:53]
    reg multiplierReg_41 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_41) @[block_division.scala 33:34]
    reg signReg_41 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_41) @[block_division.scala 34:28]
    node _dotProductRegs_9_T_2 = mul(multiplierReg_41, io_man_b_41) @[block_division.scala 37:42]
    node _signs_9_T_2 = xor(signReg_41, io_sign_b_41) @[block_division.scala 38:27]
    node _two_complement_9_T_14 = eq(signs_2_9, UInt<1>("h1")) @[block_division.scala 40:18]
    node _two_complement_9_T_15 = cat(UInt<1>("h0"), dotProductRegs_2_9) @[block_division.scala 41:16]
    node _two_complement_9_T_16 = not(_two_complement_9_T_15) @[block_division.scala 41:10]
    node _two_complement_9_T_17 = add(_two_complement_9_T_16, UInt<1>("h1")) @[block_division.scala 41:38]
    node _two_complement_9_T_18 = tail(_two_complement_9_T_17, 1) @[block_division.scala 41:38]
    node _two_complement_9_T_19 = cat(UInt<1>("h0"), dotProductRegs_2_9) @[block_division.scala 42:14]
    node _two_complement_9_T_20 = mux(_two_complement_9_T_14, _two_complement_9_T_18, _two_complement_9_T_19) @[block_division.scala 39:31]
    node _two_complement_buffer_9_T_2 = asSInt(two_complement_2_9) @[block_division.scala 44:53]
    reg multiplierReg_42 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_42) @[block_division.scala 33:34]
    reg signReg_42 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_42) @[block_division.scala 34:28]
    node _dotProductRegs_10_T_2 = mul(multiplierReg_42, io_man_b_42) @[block_division.scala 37:42]
    node _signs_10_T_2 = xor(signReg_42, io_sign_b_42) @[block_division.scala 38:27]
    node _two_complement_10_T_14 = eq(signs_2_10, UInt<1>("h1")) @[block_division.scala 40:18]
    node _two_complement_10_T_15 = cat(UInt<1>("h0"), dotProductRegs_2_10) @[block_division.scala 41:16]
    node _two_complement_10_T_16 = not(_two_complement_10_T_15) @[block_division.scala 41:10]
    node _two_complement_10_T_17 = add(_two_complement_10_T_16, UInt<1>("h1")) @[block_division.scala 41:38]
    node _two_complement_10_T_18 = tail(_two_complement_10_T_17, 1) @[block_division.scala 41:38]
    node _two_complement_10_T_19 = cat(UInt<1>("h0"), dotProductRegs_2_10) @[block_division.scala 42:14]
    node _two_complement_10_T_20 = mux(_two_complement_10_T_14, _two_complement_10_T_18, _two_complement_10_T_19) @[block_division.scala 39:31]
    node _two_complement_buffer_10_T_2 = asSInt(two_complement_2_10) @[block_division.scala 44:53]
    reg multiplierReg_43 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_43) @[block_division.scala 33:34]
    reg signReg_43 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_43) @[block_division.scala 34:28]
    node _dotProductRegs_11_T_2 = mul(multiplierReg_43, io_man_b_43) @[block_division.scala 37:42]
    node _signs_11_T_2 = xor(signReg_43, io_sign_b_43) @[block_division.scala 38:27]
    node _two_complement_11_T_14 = eq(signs_2_11, UInt<1>("h1")) @[block_division.scala 40:18]
    node _two_complement_11_T_15 = cat(UInt<1>("h0"), dotProductRegs_2_11) @[block_division.scala 41:16]
    node _two_complement_11_T_16 = not(_two_complement_11_T_15) @[block_division.scala 41:10]
    node _two_complement_11_T_17 = add(_two_complement_11_T_16, UInt<1>("h1")) @[block_division.scala 41:38]
    node _two_complement_11_T_18 = tail(_two_complement_11_T_17, 1) @[block_division.scala 41:38]
    node _two_complement_11_T_19 = cat(UInt<1>("h0"), dotProductRegs_2_11) @[block_division.scala 42:14]
    node _two_complement_11_T_20 = mux(_two_complement_11_T_14, _two_complement_11_T_18, _two_complement_11_T_19) @[block_division.scala 39:31]
    node _two_complement_buffer_11_T_2 = asSInt(two_complement_2_11) @[block_division.scala 44:53]
    reg multiplierReg_44 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_44) @[block_division.scala 33:34]
    reg signReg_44 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_44) @[block_division.scala 34:28]
    node _dotProductRegs_12_T_2 = mul(multiplierReg_44, io_man_b_44) @[block_division.scala 37:42]
    node _signs_12_T_2 = xor(signReg_44, io_sign_b_44) @[block_division.scala 38:27]
    node _two_complement_12_T_14 = eq(signs_2_12, UInt<1>("h1")) @[block_division.scala 40:18]
    node _two_complement_12_T_15 = cat(UInt<1>("h0"), dotProductRegs_2_12) @[block_division.scala 41:16]
    node _two_complement_12_T_16 = not(_two_complement_12_T_15) @[block_division.scala 41:10]
    node _two_complement_12_T_17 = add(_two_complement_12_T_16, UInt<1>("h1")) @[block_division.scala 41:38]
    node _two_complement_12_T_18 = tail(_two_complement_12_T_17, 1) @[block_division.scala 41:38]
    node _two_complement_12_T_19 = cat(UInt<1>("h0"), dotProductRegs_2_12) @[block_division.scala 42:14]
    node _two_complement_12_T_20 = mux(_two_complement_12_T_14, _two_complement_12_T_18, _two_complement_12_T_19) @[block_division.scala 39:31]
    node _two_complement_buffer_12_T_2 = asSInt(two_complement_2_12) @[block_division.scala 44:53]
    reg multiplierReg_45 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_45) @[block_division.scala 33:34]
    reg signReg_45 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_45) @[block_division.scala 34:28]
    node _dotProductRegs_13_T_2 = mul(multiplierReg_45, io_man_b_45) @[block_division.scala 37:42]
    node _signs_13_T_2 = xor(signReg_45, io_sign_b_45) @[block_division.scala 38:27]
    node _two_complement_13_T_14 = eq(signs_2_13, UInt<1>("h1")) @[block_division.scala 40:18]
    node _two_complement_13_T_15 = cat(UInt<1>("h0"), dotProductRegs_2_13) @[block_division.scala 41:16]
    node _two_complement_13_T_16 = not(_two_complement_13_T_15) @[block_division.scala 41:10]
    node _two_complement_13_T_17 = add(_two_complement_13_T_16, UInt<1>("h1")) @[block_division.scala 41:38]
    node _two_complement_13_T_18 = tail(_two_complement_13_T_17, 1) @[block_division.scala 41:38]
    node _two_complement_13_T_19 = cat(UInt<1>("h0"), dotProductRegs_2_13) @[block_division.scala 42:14]
    node _two_complement_13_T_20 = mux(_two_complement_13_T_14, _two_complement_13_T_18, _two_complement_13_T_19) @[block_division.scala 39:31]
    node _two_complement_buffer_13_T_2 = asSInt(two_complement_2_13) @[block_division.scala 44:53]
    reg multiplierReg_46 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_46) @[block_division.scala 33:34]
    reg signReg_46 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_46) @[block_division.scala 34:28]
    node _dotProductRegs_14_T_2 = mul(multiplierReg_46, io_man_b_46) @[block_division.scala 37:42]
    node _signs_14_T_2 = xor(signReg_46, io_sign_b_46) @[block_division.scala 38:27]
    node _two_complement_14_T_14 = eq(signs_2_14, UInt<1>("h1")) @[block_division.scala 40:18]
    node _two_complement_14_T_15 = cat(UInt<1>("h0"), dotProductRegs_2_14) @[block_division.scala 41:16]
    node _two_complement_14_T_16 = not(_two_complement_14_T_15) @[block_division.scala 41:10]
    node _two_complement_14_T_17 = add(_two_complement_14_T_16, UInt<1>("h1")) @[block_division.scala 41:38]
    node _two_complement_14_T_18 = tail(_two_complement_14_T_17, 1) @[block_division.scala 41:38]
    node _two_complement_14_T_19 = cat(UInt<1>("h0"), dotProductRegs_2_14) @[block_division.scala 42:14]
    node _two_complement_14_T_20 = mux(_two_complement_14_T_14, _two_complement_14_T_18, _two_complement_14_T_19) @[block_division.scala 39:31]
    node _two_complement_buffer_14_T_2 = asSInt(two_complement_2_14) @[block_division.scala 44:53]
    reg multiplierReg_47 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_47) @[block_division.scala 33:34]
    reg signReg_47 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_47) @[block_division.scala 34:28]
    node _dotProductRegs_15_T_2 = mul(multiplierReg_47, io_man_b_47) @[block_division.scala 37:42]
    node _signs_15_T_2 = xor(signReg_47, io_sign_b_47) @[block_division.scala 38:27]
    node _two_complement_15_T_14 = eq(signs_2_15, UInt<1>("h1")) @[block_division.scala 40:18]
    node _two_complement_15_T_15 = cat(UInt<1>("h0"), dotProductRegs_2_15) @[block_division.scala 41:16]
    node _two_complement_15_T_16 = not(_two_complement_15_T_15) @[block_division.scala 41:10]
    node _two_complement_15_T_17 = add(_two_complement_15_T_16, UInt<1>("h1")) @[block_division.scala 41:38]
    node _two_complement_15_T_18 = tail(_two_complement_15_T_17, 1) @[block_division.scala 41:38]
    node _two_complement_15_T_19 = cat(UInt<1>("h0"), dotProductRegs_2_15) @[block_division.scala 42:14]
    node _two_complement_15_T_20 = mux(_two_complement_15_T_14, _two_complement_15_T_18, _two_complement_15_T_19) @[block_division.scala 39:31]
    node _two_complement_buffer_15_T_2 = asSInt(two_complement_2_15) @[block_division.scala 44:53]
    node _acc_2_T = add(two_complement_buffer_2_0, two_complement_buffer_2_1) @[block_division.scala 46:46]
    node _acc_2_T_1 = add(_acc_2_T, two_complement_buffer_2_2) @[block_division.scala 46:46]
    node _acc_2_T_2 = add(_acc_2_T_1, two_complement_buffer_2_3) @[block_division.scala 46:46]
    node _acc_2_T_3 = add(_acc_2_T_2, two_complement_buffer_2_4) @[block_division.scala 46:46]
    node _acc_2_T_4 = add(_acc_2_T_3, two_complement_buffer_2_5) @[block_division.scala 46:46]
    node _acc_2_T_5 = add(_acc_2_T_4, two_complement_buffer_2_6) @[block_division.scala 46:46]
    node _acc_2_T_6 = add(_acc_2_T_5, two_complement_buffer_2_7) @[block_division.scala 46:46]
    node _acc_2_T_7 = add(_acc_2_T_6, two_complement_buffer_2_8) @[block_division.scala 46:46]
    node _acc_2_T_8 = add(_acc_2_T_7, two_complement_buffer_2_9) @[block_division.scala 46:46]
    node _acc_2_T_9 = add(_acc_2_T_8, two_complement_buffer_2_10) @[block_division.scala 46:46]
    node _acc_2_T_10 = add(_acc_2_T_9, two_complement_buffer_2_11) @[block_division.scala 46:46]
    node _acc_2_T_11 = add(_acc_2_T_10, two_complement_buffer_2_12) @[block_division.scala 46:46]
    node _acc_2_T_12 = add(_acc_2_T_11, two_complement_buffer_2_13) @[block_division.scala 46:46]
    node _acc_2_T_13 = add(_acc_2_T_12, two_complement_buffer_2_14) @[block_division.scala 46:46]
    node _acc_2_T_14 = add(_acc_2_T_13, two_complement_buffer_2_15) @[block_division.scala 46:46]
    node _exp_output_3_T = add(io_exp_a_3, io_exp_b_3) @[block_division.scala 27:34]
    reg dotProductRegs_3_0 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_3_0) @[block_division.scala 28:29]
    reg dotProductRegs_3_1 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_3_1) @[block_division.scala 28:29]
    reg dotProductRegs_3_2 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_3_2) @[block_division.scala 28:29]
    reg dotProductRegs_3_3 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_3_3) @[block_division.scala 28:29]
    reg dotProductRegs_3_4 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_3_4) @[block_division.scala 28:29]
    reg dotProductRegs_3_5 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_3_5) @[block_division.scala 28:29]
    reg dotProductRegs_3_6 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_3_6) @[block_division.scala 28:29]
    reg dotProductRegs_3_7 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_3_7) @[block_division.scala 28:29]
    reg dotProductRegs_3_8 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_3_8) @[block_division.scala 28:29]
    reg dotProductRegs_3_9 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_3_9) @[block_division.scala 28:29]
    reg dotProductRegs_3_10 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_3_10) @[block_division.scala 28:29]
    reg dotProductRegs_3_11 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_3_11) @[block_division.scala 28:29]
    reg dotProductRegs_3_12 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_3_12) @[block_division.scala 28:29]
    reg dotProductRegs_3_13 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_3_13) @[block_division.scala 28:29]
    reg dotProductRegs_3_14 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_3_14) @[block_division.scala 28:29]
    reg dotProductRegs_3_15 : UInt<12>, clock with :
      reset => (UInt<1>("h0"), dotProductRegs_3_15) @[block_division.scala 28:29]
    reg signs_3_0 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_3_0) @[block_division.scala 29:20]
    reg signs_3_1 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_3_1) @[block_division.scala 29:20]
    reg signs_3_2 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_3_2) @[block_division.scala 29:20]
    reg signs_3_3 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_3_3) @[block_division.scala 29:20]
    reg signs_3_4 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_3_4) @[block_division.scala 29:20]
    reg signs_3_5 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_3_5) @[block_division.scala 29:20]
    reg signs_3_6 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_3_6) @[block_division.scala 29:20]
    reg signs_3_7 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_3_7) @[block_division.scala 29:20]
    reg signs_3_8 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_3_8) @[block_division.scala 29:20]
    reg signs_3_9 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_3_9) @[block_division.scala 29:20]
    reg signs_3_10 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_3_10) @[block_division.scala 29:20]
    reg signs_3_11 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_3_11) @[block_division.scala 29:20]
    reg signs_3_12 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_3_12) @[block_division.scala 29:20]
    reg signs_3_13 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_3_13) @[block_division.scala 29:20]
    reg signs_3_14 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_3_14) @[block_division.scala 29:20]
    reg signs_3_15 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signs_3_15) @[block_division.scala 29:20]
    reg two_complement_3_0 : UInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_3_0) @[block_division.scala 30:29]
    reg two_complement_3_1 : UInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_3_1) @[block_division.scala 30:29]
    reg two_complement_3_2 : UInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_3_2) @[block_division.scala 30:29]
    reg two_complement_3_3 : UInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_3_3) @[block_division.scala 30:29]
    reg two_complement_3_4 : UInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_3_4) @[block_division.scala 30:29]
    reg two_complement_3_5 : UInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_3_5) @[block_division.scala 30:29]
    reg two_complement_3_6 : UInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_3_6) @[block_division.scala 30:29]
    reg two_complement_3_7 : UInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_3_7) @[block_division.scala 30:29]
    reg two_complement_3_8 : UInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_3_8) @[block_division.scala 30:29]
    reg two_complement_3_9 : UInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_3_9) @[block_division.scala 30:29]
    reg two_complement_3_10 : UInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_3_10) @[block_division.scala 30:29]
    reg two_complement_3_11 : UInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_3_11) @[block_division.scala 30:29]
    reg two_complement_3_12 : UInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_3_12) @[block_division.scala 30:29]
    reg two_complement_3_13 : UInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_3_13) @[block_division.scala 30:29]
    reg two_complement_3_14 : UInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_3_14) @[block_division.scala 30:29]
    reg two_complement_3_15 : UInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_3_15) @[block_division.scala 30:29]
    reg two_complement_buffer_3_0 : SInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_3_0) @[block_division.scala 31:36]
    reg two_complement_buffer_3_1 : SInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_3_1) @[block_division.scala 31:36]
    reg two_complement_buffer_3_2 : SInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_3_2) @[block_division.scala 31:36]
    reg two_complement_buffer_3_3 : SInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_3_3) @[block_division.scala 31:36]
    reg two_complement_buffer_3_4 : SInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_3_4) @[block_division.scala 31:36]
    reg two_complement_buffer_3_5 : SInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_3_5) @[block_division.scala 31:36]
    reg two_complement_buffer_3_6 : SInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_3_6) @[block_division.scala 31:36]
    reg two_complement_buffer_3_7 : SInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_3_7) @[block_division.scala 31:36]
    reg two_complement_buffer_3_8 : SInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_3_8) @[block_division.scala 31:36]
    reg two_complement_buffer_3_9 : SInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_3_9) @[block_division.scala 31:36]
    reg two_complement_buffer_3_10 : SInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_3_10) @[block_division.scala 31:36]
    reg two_complement_buffer_3_11 : SInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_3_11) @[block_division.scala 31:36]
    reg two_complement_buffer_3_12 : SInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_3_12) @[block_division.scala 31:36]
    reg two_complement_buffer_3_13 : SInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_3_13) @[block_division.scala 31:36]
    reg two_complement_buffer_3_14 : SInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_3_14) @[block_division.scala 31:36]
    reg two_complement_buffer_3_15 : SInt<13>, clock with :
      reset => (UInt<1>("h0"), two_complement_buffer_3_15) @[block_division.scala 31:36]
    reg multiplierReg_48 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_48) @[block_division.scala 33:34]
    reg signReg_48 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_48) @[block_division.scala 34:28]
    node _dotProductRegs_0_T_3 = mul(multiplierReg_48, io_man_b_48) @[block_division.scala 37:42]
    node _signs_0_T_3 = xor(signReg_48, io_sign_b_48) @[block_division.scala 38:27]
    node _two_complement_0_T_21 = eq(signs_3_0, UInt<1>("h1")) @[block_division.scala 40:18]
    node _two_complement_0_T_22 = cat(UInt<1>("h0"), dotProductRegs_3_0) @[block_division.scala 41:16]
    node _two_complement_0_T_23 = not(_two_complement_0_T_22) @[block_division.scala 41:10]
    node _two_complement_0_T_24 = add(_two_complement_0_T_23, UInt<1>("h1")) @[block_division.scala 41:38]
    node _two_complement_0_T_25 = tail(_two_complement_0_T_24, 1) @[block_division.scala 41:38]
    node _two_complement_0_T_26 = cat(UInt<1>("h0"), dotProductRegs_3_0) @[block_division.scala 42:14]
    node _two_complement_0_T_27 = mux(_two_complement_0_T_21, _two_complement_0_T_25, _two_complement_0_T_26) @[block_division.scala 39:31]
    node _two_complement_buffer_0_T_3 = asSInt(two_complement_3_0) @[block_division.scala 44:53]
    reg multiplierReg_49 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_49) @[block_division.scala 33:34]
    reg signReg_49 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_49) @[block_division.scala 34:28]
    node _dotProductRegs_1_T_3 = mul(multiplierReg_49, io_man_b_49) @[block_division.scala 37:42]
    node _signs_1_T_3 = xor(signReg_49, io_sign_b_49) @[block_division.scala 38:27]
    node _two_complement_1_T_21 = eq(signs_3_1, UInt<1>("h1")) @[block_division.scala 40:18]
    node _two_complement_1_T_22 = cat(UInt<1>("h0"), dotProductRegs_3_1) @[block_division.scala 41:16]
    node _two_complement_1_T_23 = not(_two_complement_1_T_22) @[block_division.scala 41:10]
    node _two_complement_1_T_24 = add(_two_complement_1_T_23, UInt<1>("h1")) @[block_division.scala 41:38]
    node _two_complement_1_T_25 = tail(_two_complement_1_T_24, 1) @[block_division.scala 41:38]
    node _two_complement_1_T_26 = cat(UInt<1>("h0"), dotProductRegs_3_1) @[block_division.scala 42:14]
    node _two_complement_1_T_27 = mux(_two_complement_1_T_21, _two_complement_1_T_25, _two_complement_1_T_26) @[block_division.scala 39:31]
    node _two_complement_buffer_1_T_3 = asSInt(two_complement_3_1) @[block_division.scala 44:53]
    reg multiplierReg_50 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_50) @[block_division.scala 33:34]
    reg signReg_50 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_50) @[block_division.scala 34:28]
    node _dotProductRegs_2_T_3 = mul(multiplierReg_50, io_man_b_50) @[block_division.scala 37:42]
    node _signs_2_T_3 = xor(signReg_50, io_sign_b_50) @[block_division.scala 38:27]
    node _two_complement_2_T_21 = eq(signs_3_2, UInt<1>("h1")) @[block_division.scala 40:18]
    node _two_complement_2_T_22 = cat(UInt<1>("h0"), dotProductRegs_3_2) @[block_division.scala 41:16]
    node _two_complement_2_T_23 = not(_two_complement_2_T_22) @[block_division.scala 41:10]
    node _two_complement_2_T_24 = add(_two_complement_2_T_23, UInt<1>("h1")) @[block_division.scala 41:38]
    node _two_complement_2_T_25 = tail(_two_complement_2_T_24, 1) @[block_division.scala 41:38]
    node _two_complement_2_T_26 = cat(UInt<1>("h0"), dotProductRegs_3_2) @[block_division.scala 42:14]
    node _two_complement_2_T_27 = mux(_two_complement_2_T_21, _two_complement_2_T_25, _two_complement_2_T_26) @[block_division.scala 39:31]
    node _two_complement_buffer_2_T_3 = asSInt(two_complement_3_2) @[block_division.scala 44:53]
    reg multiplierReg_51 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_51) @[block_division.scala 33:34]
    reg signReg_51 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_51) @[block_division.scala 34:28]
    node _dotProductRegs_3_T_3 = mul(multiplierReg_51, io_man_b_51) @[block_division.scala 37:42]
    node _signs_3_T_3 = xor(signReg_51, io_sign_b_51) @[block_division.scala 38:27]
    node _two_complement_3_T_21 = eq(signs_3_3, UInt<1>("h1")) @[block_division.scala 40:18]
    node _two_complement_3_T_22 = cat(UInt<1>("h0"), dotProductRegs_3_3) @[block_division.scala 41:16]
    node _two_complement_3_T_23 = not(_two_complement_3_T_22) @[block_division.scala 41:10]
    node _two_complement_3_T_24 = add(_two_complement_3_T_23, UInt<1>("h1")) @[block_division.scala 41:38]
    node _two_complement_3_T_25 = tail(_two_complement_3_T_24, 1) @[block_division.scala 41:38]
    node _two_complement_3_T_26 = cat(UInt<1>("h0"), dotProductRegs_3_3) @[block_division.scala 42:14]
    node _two_complement_3_T_27 = mux(_two_complement_3_T_21, _two_complement_3_T_25, _two_complement_3_T_26) @[block_division.scala 39:31]
    node _two_complement_buffer_3_T_3 = asSInt(two_complement_3_3) @[block_division.scala 44:53]
    reg multiplierReg_52 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_52) @[block_division.scala 33:34]
    reg signReg_52 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_52) @[block_division.scala 34:28]
    node _dotProductRegs_4_T_3 = mul(multiplierReg_52, io_man_b_52) @[block_division.scala 37:42]
    node _signs_4_T_3 = xor(signReg_52, io_sign_b_52) @[block_division.scala 38:27]
    node _two_complement_4_T_21 = eq(signs_3_4, UInt<1>("h1")) @[block_division.scala 40:18]
    node _two_complement_4_T_22 = cat(UInt<1>("h0"), dotProductRegs_3_4) @[block_division.scala 41:16]
    node _two_complement_4_T_23 = not(_two_complement_4_T_22) @[block_division.scala 41:10]
    node _two_complement_4_T_24 = add(_two_complement_4_T_23, UInt<1>("h1")) @[block_division.scala 41:38]
    node _two_complement_4_T_25 = tail(_two_complement_4_T_24, 1) @[block_division.scala 41:38]
    node _two_complement_4_T_26 = cat(UInt<1>("h0"), dotProductRegs_3_4) @[block_division.scala 42:14]
    node _two_complement_4_T_27 = mux(_two_complement_4_T_21, _two_complement_4_T_25, _two_complement_4_T_26) @[block_division.scala 39:31]
    node _two_complement_buffer_4_T_3 = asSInt(two_complement_3_4) @[block_division.scala 44:53]
    reg multiplierReg_53 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_53) @[block_division.scala 33:34]
    reg signReg_53 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_53) @[block_division.scala 34:28]
    node _dotProductRegs_5_T_3 = mul(multiplierReg_53, io_man_b_53) @[block_division.scala 37:42]
    node _signs_5_T_3 = xor(signReg_53, io_sign_b_53) @[block_division.scala 38:27]
    node _two_complement_5_T_21 = eq(signs_3_5, UInt<1>("h1")) @[block_division.scala 40:18]
    node _two_complement_5_T_22 = cat(UInt<1>("h0"), dotProductRegs_3_5) @[block_division.scala 41:16]
    node _two_complement_5_T_23 = not(_two_complement_5_T_22) @[block_division.scala 41:10]
    node _two_complement_5_T_24 = add(_two_complement_5_T_23, UInt<1>("h1")) @[block_division.scala 41:38]
    node _two_complement_5_T_25 = tail(_two_complement_5_T_24, 1) @[block_division.scala 41:38]
    node _two_complement_5_T_26 = cat(UInt<1>("h0"), dotProductRegs_3_5) @[block_division.scala 42:14]
    node _two_complement_5_T_27 = mux(_two_complement_5_T_21, _two_complement_5_T_25, _two_complement_5_T_26) @[block_division.scala 39:31]
    node _two_complement_buffer_5_T_3 = asSInt(two_complement_3_5) @[block_division.scala 44:53]
    reg multiplierReg_54 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_54) @[block_division.scala 33:34]
    reg signReg_54 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_54) @[block_division.scala 34:28]
    node _dotProductRegs_6_T_3 = mul(multiplierReg_54, io_man_b_54) @[block_division.scala 37:42]
    node _signs_6_T_3 = xor(signReg_54, io_sign_b_54) @[block_division.scala 38:27]
    node _two_complement_6_T_21 = eq(signs_3_6, UInt<1>("h1")) @[block_division.scala 40:18]
    node _two_complement_6_T_22 = cat(UInt<1>("h0"), dotProductRegs_3_6) @[block_division.scala 41:16]
    node _two_complement_6_T_23 = not(_two_complement_6_T_22) @[block_division.scala 41:10]
    node _two_complement_6_T_24 = add(_two_complement_6_T_23, UInt<1>("h1")) @[block_division.scala 41:38]
    node _two_complement_6_T_25 = tail(_two_complement_6_T_24, 1) @[block_division.scala 41:38]
    node _two_complement_6_T_26 = cat(UInt<1>("h0"), dotProductRegs_3_6) @[block_division.scala 42:14]
    node _two_complement_6_T_27 = mux(_two_complement_6_T_21, _two_complement_6_T_25, _two_complement_6_T_26) @[block_division.scala 39:31]
    node _two_complement_buffer_6_T_3 = asSInt(two_complement_3_6) @[block_division.scala 44:53]
    reg multiplierReg_55 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_55) @[block_division.scala 33:34]
    reg signReg_55 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_55) @[block_division.scala 34:28]
    node _dotProductRegs_7_T_3 = mul(multiplierReg_55, io_man_b_55) @[block_division.scala 37:42]
    node _signs_7_T_3 = xor(signReg_55, io_sign_b_55) @[block_division.scala 38:27]
    node _two_complement_7_T_21 = eq(signs_3_7, UInt<1>("h1")) @[block_division.scala 40:18]
    node _two_complement_7_T_22 = cat(UInt<1>("h0"), dotProductRegs_3_7) @[block_division.scala 41:16]
    node _two_complement_7_T_23 = not(_two_complement_7_T_22) @[block_division.scala 41:10]
    node _two_complement_7_T_24 = add(_two_complement_7_T_23, UInt<1>("h1")) @[block_division.scala 41:38]
    node _two_complement_7_T_25 = tail(_two_complement_7_T_24, 1) @[block_division.scala 41:38]
    node _two_complement_7_T_26 = cat(UInt<1>("h0"), dotProductRegs_3_7) @[block_division.scala 42:14]
    node _two_complement_7_T_27 = mux(_two_complement_7_T_21, _two_complement_7_T_25, _two_complement_7_T_26) @[block_division.scala 39:31]
    node _two_complement_buffer_7_T_3 = asSInt(two_complement_3_7) @[block_division.scala 44:53]
    reg multiplierReg_56 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_56) @[block_division.scala 33:34]
    reg signReg_56 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_56) @[block_division.scala 34:28]
    node _dotProductRegs_8_T_3 = mul(multiplierReg_56, io_man_b_56) @[block_division.scala 37:42]
    node _signs_8_T_3 = xor(signReg_56, io_sign_b_56) @[block_division.scala 38:27]
    node _two_complement_8_T_21 = eq(signs_3_8, UInt<1>("h1")) @[block_division.scala 40:18]
    node _two_complement_8_T_22 = cat(UInt<1>("h0"), dotProductRegs_3_8) @[block_division.scala 41:16]
    node _two_complement_8_T_23 = not(_two_complement_8_T_22) @[block_division.scala 41:10]
    node _two_complement_8_T_24 = add(_two_complement_8_T_23, UInt<1>("h1")) @[block_division.scala 41:38]
    node _two_complement_8_T_25 = tail(_two_complement_8_T_24, 1) @[block_division.scala 41:38]
    node _two_complement_8_T_26 = cat(UInt<1>("h0"), dotProductRegs_3_8) @[block_division.scala 42:14]
    node _two_complement_8_T_27 = mux(_two_complement_8_T_21, _two_complement_8_T_25, _two_complement_8_T_26) @[block_division.scala 39:31]
    node _two_complement_buffer_8_T_3 = asSInt(two_complement_3_8) @[block_division.scala 44:53]
    reg multiplierReg_57 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_57) @[block_division.scala 33:34]
    reg signReg_57 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_57) @[block_division.scala 34:28]
    node _dotProductRegs_9_T_3 = mul(multiplierReg_57, io_man_b_57) @[block_division.scala 37:42]
    node _signs_9_T_3 = xor(signReg_57, io_sign_b_57) @[block_division.scala 38:27]
    node _two_complement_9_T_21 = eq(signs_3_9, UInt<1>("h1")) @[block_division.scala 40:18]
    node _two_complement_9_T_22 = cat(UInt<1>("h0"), dotProductRegs_3_9) @[block_division.scala 41:16]
    node _two_complement_9_T_23 = not(_two_complement_9_T_22) @[block_division.scala 41:10]
    node _two_complement_9_T_24 = add(_two_complement_9_T_23, UInt<1>("h1")) @[block_division.scala 41:38]
    node _two_complement_9_T_25 = tail(_two_complement_9_T_24, 1) @[block_division.scala 41:38]
    node _two_complement_9_T_26 = cat(UInt<1>("h0"), dotProductRegs_3_9) @[block_division.scala 42:14]
    node _two_complement_9_T_27 = mux(_two_complement_9_T_21, _two_complement_9_T_25, _two_complement_9_T_26) @[block_division.scala 39:31]
    node _two_complement_buffer_9_T_3 = asSInt(two_complement_3_9) @[block_division.scala 44:53]
    reg multiplierReg_58 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_58) @[block_division.scala 33:34]
    reg signReg_58 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_58) @[block_division.scala 34:28]
    node _dotProductRegs_10_T_3 = mul(multiplierReg_58, io_man_b_58) @[block_division.scala 37:42]
    node _signs_10_T_3 = xor(signReg_58, io_sign_b_58) @[block_division.scala 38:27]
    node _two_complement_10_T_21 = eq(signs_3_10, UInt<1>("h1")) @[block_division.scala 40:18]
    node _two_complement_10_T_22 = cat(UInt<1>("h0"), dotProductRegs_3_10) @[block_division.scala 41:16]
    node _two_complement_10_T_23 = not(_two_complement_10_T_22) @[block_division.scala 41:10]
    node _two_complement_10_T_24 = add(_two_complement_10_T_23, UInt<1>("h1")) @[block_division.scala 41:38]
    node _two_complement_10_T_25 = tail(_two_complement_10_T_24, 1) @[block_division.scala 41:38]
    node _two_complement_10_T_26 = cat(UInt<1>("h0"), dotProductRegs_3_10) @[block_division.scala 42:14]
    node _two_complement_10_T_27 = mux(_two_complement_10_T_21, _two_complement_10_T_25, _two_complement_10_T_26) @[block_division.scala 39:31]
    node _two_complement_buffer_10_T_3 = asSInt(two_complement_3_10) @[block_division.scala 44:53]
    reg multiplierReg_59 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_59) @[block_division.scala 33:34]
    reg signReg_59 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_59) @[block_division.scala 34:28]
    node _dotProductRegs_11_T_3 = mul(multiplierReg_59, io_man_b_59) @[block_division.scala 37:42]
    node _signs_11_T_3 = xor(signReg_59, io_sign_b_59) @[block_division.scala 38:27]
    node _two_complement_11_T_21 = eq(signs_3_11, UInt<1>("h1")) @[block_division.scala 40:18]
    node _two_complement_11_T_22 = cat(UInt<1>("h0"), dotProductRegs_3_11) @[block_division.scala 41:16]
    node _two_complement_11_T_23 = not(_two_complement_11_T_22) @[block_division.scala 41:10]
    node _two_complement_11_T_24 = add(_two_complement_11_T_23, UInt<1>("h1")) @[block_division.scala 41:38]
    node _two_complement_11_T_25 = tail(_two_complement_11_T_24, 1) @[block_division.scala 41:38]
    node _two_complement_11_T_26 = cat(UInt<1>("h0"), dotProductRegs_3_11) @[block_division.scala 42:14]
    node _two_complement_11_T_27 = mux(_two_complement_11_T_21, _two_complement_11_T_25, _two_complement_11_T_26) @[block_division.scala 39:31]
    node _two_complement_buffer_11_T_3 = asSInt(two_complement_3_11) @[block_division.scala 44:53]
    reg multiplierReg_60 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_60) @[block_division.scala 33:34]
    reg signReg_60 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_60) @[block_division.scala 34:28]
    node _dotProductRegs_12_T_3 = mul(multiplierReg_60, io_man_b_60) @[block_division.scala 37:42]
    node _signs_12_T_3 = xor(signReg_60, io_sign_b_60) @[block_division.scala 38:27]
    node _two_complement_12_T_21 = eq(signs_3_12, UInt<1>("h1")) @[block_division.scala 40:18]
    node _two_complement_12_T_22 = cat(UInt<1>("h0"), dotProductRegs_3_12) @[block_division.scala 41:16]
    node _two_complement_12_T_23 = not(_two_complement_12_T_22) @[block_division.scala 41:10]
    node _two_complement_12_T_24 = add(_two_complement_12_T_23, UInt<1>("h1")) @[block_division.scala 41:38]
    node _two_complement_12_T_25 = tail(_two_complement_12_T_24, 1) @[block_division.scala 41:38]
    node _two_complement_12_T_26 = cat(UInt<1>("h0"), dotProductRegs_3_12) @[block_division.scala 42:14]
    node _two_complement_12_T_27 = mux(_two_complement_12_T_21, _two_complement_12_T_25, _two_complement_12_T_26) @[block_division.scala 39:31]
    node _two_complement_buffer_12_T_3 = asSInt(two_complement_3_12) @[block_division.scala 44:53]
    reg multiplierReg_61 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_61) @[block_division.scala 33:34]
    reg signReg_61 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_61) @[block_division.scala 34:28]
    node _dotProductRegs_13_T_3 = mul(multiplierReg_61, io_man_b_61) @[block_division.scala 37:42]
    node _signs_13_T_3 = xor(signReg_61, io_sign_b_61) @[block_division.scala 38:27]
    node _two_complement_13_T_21 = eq(signs_3_13, UInt<1>("h1")) @[block_division.scala 40:18]
    node _two_complement_13_T_22 = cat(UInt<1>("h0"), dotProductRegs_3_13) @[block_division.scala 41:16]
    node _two_complement_13_T_23 = not(_two_complement_13_T_22) @[block_division.scala 41:10]
    node _two_complement_13_T_24 = add(_two_complement_13_T_23, UInt<1>("h1")) @[block_division.scala 41:38]
    node _two_complement_13_T_25 = tail(_two_complement_13_T_24, 1) @[block_division.scala 41:38]
    node _two_complement_13_T_26 = cat(UInt<1>("h0"), dotProductRegs_3_13) @[block_division.scala 42:14]
    node _two_complement_13_T_27 = mux(_two_complement_13_T_21, _two_complement_13_T_25, _two_complement_13_T_26) @[block_division.scala 39:31]
    node _two_complement_buffer_13_T_3 = asSInt(two_complement_3_13) @[block_division.scala 44:53]
    reg multiplierReg_62 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_62) @[block_division.scala 33:34]
    reg signReg_62 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_62) @[block_division.scala 34:28]
    node _dotProductRegs_14_T_3 = mul(multiplierReg_62, io_man_b_62) @[block_division.scala 37:42]
    node _signs_14_T_3 = xor(signReg_62, io_sign_b_62) @[block_division.scala 38:27]
    node _two_complement_14_T_21 = eq(signs_3_14, UInt<1>("h1")) @[block_division.scala 40:18]
    node _two_complement_14_T_22 = cat(UInt<1>("h0"), dotProductRegs_3_14) @[block_division.scala 41:16]
    node _two_complement_14_T_23 = not(_two_complement_14_T_22) @[block_division.scala 41:10]
    node _two_complement_14_T_24 = add(_two_complement_14_T_23, UInt<1>("h1")) @[block_division.scala 41:38]
    node _two_complement_14_T_25 = tail(_two_complement_14_T_24, 1) @[block_division.scala 41:38]
    node _two_complement_14_T_26 = cat(UInt<1>("h0"), dotProductRegs_3_14) @[block_division.scala 42:14]
    node _two_complement_14_T_27 = mux(_two_complement_14_T_21, _two_complement_14_T_25, _two_complement_14_T_26) @[block_division.scala 39:31]
    node _two_complement_buffer_14_T_3 = asSInt(two_complement_3_14) @[block_division.scala 44:53]
    reg multiplierReg_63 : UInt<6>, clock with :
      reset => (UInt<1>("h0"), multiplierReg_63) @[block_division.scala 33:34]
    reg signReg_63 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), signReg_63) @[block_division.scala 34:28]
    node _dotProductRegs_15_T_3 = mul(multiplierReg_63, io_man_b_63) @[block_division.scala 37:42]
    node _signs_15_T_3 = xor(signReg_63, io_sign_b_63) @[block_division.scala 38:27]
    node _two_complement_15_T_21 = eq(signs_3_15, UInt<1>("h1")) @[block_division.scala 40:18]
    node _two_complement_15_T_22 = cat(UInt<1>("h0"), dotProductRegs_3_15) @[block_division.scala 41:16]
    node _two_complement_15_T_23 = not(_two_complement_15_T_22) @[block_division.scala 41:10]
    node _two_complement_15_T_24 = add(_two_complement_15_T_23, UInt<1>("h1")) @[block_division.scala 41:38]
    node _two_complement_15_T_25 = tail(_two_complement_15_T_24, 1) @[block_division.scala 41:38]
    node _two_complement_15_T_26 = cat(UInt<1>("h0"), dotProductRegs_3_15) @[block_division.scala 42:14]
    node _two_complement_15_T_27 = mux(_two_complement_15_T_21, _two_complement_15_T_25, _two_complement_15_T_26) @[block_division.scala 39:31]
    node _two_complement_buffer_15_T_3 = asSInt(two_complement_3_15) @[block_division.scala 44:53]
    node _acc_3_T = add(two_complement_buffer_3_0, two_complement_buffer_3_1) @[block_division.scala 46:46]
    node _acc_3_T_1 = add(_acc_3_T, two_complement_buffer_3_2) @[block_division.scala 46:46]
    node _acc_3_T_2 = add(_acc_3_T_1, two_complement_buffer_3_3) @[block_division.scala 46:46]
    node _acc_3_T_3 = add(_acc_3_T_2, two_complement_buffer_3_4) @[block_division.scala 46:46]
    node _acc_3_T_4 = add(_acc_3_T_3, two_complement_buffer_3_5) @[block_division.scala 46:46]
    node _acc_3_T_5 = add(_acc_3_T_4, two_complement_buffer_3_6) @[block_division.scala 46:46]
    node _acc_3_T_6 = add(_acc_3_T_5, two_complement_buffer_3_7) @[block_division.scala 46:46]
    node _acc_3_T_7 = add(_acc_3_T_6, two_complement_buffer_3_8) @[block_division.scala 46:46]
    node _acc_3_T_8 = add(_acc_3_T_7, two_complement_buffer_3_9) @[block_division.scala 46:46]
    node _acc_3_T_9 = add(_acc_3_T_8, two_complement_buffer_3_10) @[block_division.scala 46:46]
    node _acc_3_T_10 = add(_acc_3_T_9, two_complement_buffer_3_11) @[block_division.scala 46:46]
    node _acc_3_T_11 = add(_acc_3_T_10, two_complement_buffer_3_12) @[block_division.scala 46:46]
    node _acc_3_T_12 = add(_acc_3_T_11, two_complement_buffer_3_13) @[block_division.scala 46:46]
    node _acc_3_T_13 = add(_acc_3_T_12, two_complement_buffer_3_14) @[block_division.scala 46:46]
    node _acc_3_T_14 = add(_acc_3_T_13, two_complement_buffer_3_15) @[block_division.scala 46:46]
    node _WIRE__0 = acc_0 @[block_division.scala 51:{39,39}]
    node _WIRE__1 = acc_1 @[block_division.scala 51:{39,39}]
    node _WIRE__2 = acc_2 @[block_division.scala 51:{39,39}]
    node _WIRE__3 = acc_3 @[block_division.scala 51:{39,39}]
    node _WIRE_1_0 = exp_output_0 @[block_division.scala 52:{35,35}]
    node _WIRE_1_1 = exp_output_1 @[block_division.scala 52:{35,35}]
    node _WIRE_1_2 = exp_output_2 @[block_division.scala 52:{35,35}]
    node _WIRE_1_3 = exp_output_3 @[block_division.scala 52:{35,35}]
    io_result <= adderTreeInst.io_result_tree @[block_division.scala 55:13]
    exp_output_0 <= mux(reset, UInt<9>("h0"), _exp_output_0_T) @[block_division.scala 19:{60,60} 27:19]
    exp_output_1 <= mux(reset, UInt<9>("h0"), _exp_output_1_T) @[block_division.scala 19:{60,60} 27:19]
    exp_output_2 <= mux(reset, UInt<9>("h0"), _exp_output_2_T) @[block_division.scala 19:{60,60} 27:19]
    exp_output_3 <= mux(reset, UInt<9>("h0"), _exp_output_3_T) @[block_division.scala 19:{60,60} 27:19]
    acc_0 <= mux(reset, asSInt(UInt<28>("h0")), _acc_0_T_14) @[block_division.scala 24:{53,53} 46:12]
    acc_1 <= mux(reset, asSInt(UInt<28>("h0")), _acc_1_T_14) @[block_division.scala 24:{53,53} 46:12]
    acc_2 <= mux(reset, asSInt(UInt<28>("h0")), _acc_2_T_14) @[block_division.scala 24:{53,53} 46:12]
    acc_3 <= mux(reset, asSInt(UInt<28>("h0")), _acc_3_T_14) @[block_division.scala 24:{53,53} 46:12]
    dotProductRegs__0 <= _dotProductRegs_0_T @[block_division.scala 37:25]
    dotProductRegs__1 <= _dotProductRegs_1_T @[block_division.scala 37:25]
    dotProductRegs__2 <= _dotProductRegs_2_T @[block_division.scala 37:25]
    dotProductRegs__3 <= _dotProductRegs_3_T @[block_division.scala 37:25]
    dotProductRegs__4 <= _dotProductRegs_4_T @[block_division.scala 37:25]
    dotProductRegs__5 <= _dotProductRegs_5_T @[block_division.scala 37:25]
    dotProductRegs__6 <= _dotProductRegs_6_T @[block_division.scala 37:25]
    dotProductRegs__7 <= _dotProductRegs_7_T @[block_division.scala 37:25]
    dotProductRegs__8 <= _dotProductRegs_8_T @[block_division.scala 37:25]
    dotProductRegs__9 <= _dotProductRegs_9_T @[block_division.scala 37:25]
    dotProductRegs__10 <= _dotProductRegs_10_T @[block_division.scala 37:25]
    dotProductRegs__11 <= _dotProductRegs_11_T @[block_division.scala 37:25]
    dotProductRegs__12 <= _dotProductRegs_12_T @[block_division.scala 37:25]
    dotProductRegs__13 <= _dotProductRegs_13_T @[block_division.scala 37:25]
    dotProductRegs__14 <= _dotProductRegs_14_T @[block_division.scala 37:25]
    dotProductRegs__15 <= _dotProductRegs_15_T @[block_division.scala 37:25]
    signs__0 <= _signs_0_T @[block_division.scala 38:16]
    signs__1 <= _signs_1_T @[block_division.scala 38:16]
    signs__2 <= _signs_2_T @[block_division.scala 38:16]
    signs__3 <= _signs_3_T @[block_division.scala 38:16]
    signs__4 <= _signs_4_T @[block_division.scala 38:16]
    signs__5 <= _signs_5_T @[block_division.scala 38:16]
    signs__6 <= _signs_6_T @[block_division.scala 38:16]
    signs__7 <= _signs_7_T @[block_division.scala 38:16]
    signs__8 <= _signs_8_T @[block_division.scala 38:16]
    signs__9 <= _signs_9_T @[block_division.scala 38:16]
    signs__10 <= _signs_10_T @[block_division.scala 38:16]
    signs__11 <= _signs_11_T @[block_division.scala 38:16]
    signs__12 <= _signs_12_T @[block_division.scala 38:16]
    signs__13 <= _signs_13_T @[block_division.scala 38:16]
    signs__14 <= _signs_14_T @[block_division.scala 38:16]
    signs__15 <= _signs_15_T @[block_division.scala 38:16]
    two_complement__0 <= _two_complement_0_T_6 @[block_division.scala 39:25]
    two_complement__1 <= _two_complement_1_T_6 @[block_division.scala 39:25]
    two_complement__2 <= _two_complement_2_T_6 @[block_division.scala 39:25]
    two_complement__3 <= _two_complement_3_T_6 @[block_division.scala 39:25]
    two_complement__4 <= _two_complement_4_T_6 @[block_division.scala 39:25]
    two_complement__5 <= _two_complement_5_T_6 @[block_division.scala 39:25]
    two_complement__6 <= _two_complement_6_T_6 @[block_division.scala 39:25]
    two_complement__7 <= _two_complement_7_T_6 @[block_division.scala 39:25]
    two_complement__8 <= _two_complement_8_T_6 @[block_division.scala 39:25]
    two_complement__9 <= _two_complement_9_T_6 @[block_division.scala 39:25]
    two_complement__10 <= _two_complement_10_T_6 @[block_division.scala 39:25]
    two_complement__11 <= _two_complement_11_T_6 @[block_division.scala 39:25]
    two_complement__12 <= _two_complement_12_T_6 @[block_division.scala 39:25]
    two_complement__13 <= _two_complement_13_T_6 @[block_division.scala 39:25]
    two_complement__14 <= _two_complement_14_T_6 @[block_division.scala 39:25]
    two_complement__15 <= _two_complement_15_T_6 @[block_division.scala 39:25]
    two_complement_buffer__0 <= _two_complement_buffer_0_T @[block_division.scala 44:32]
    two_complement_buffer__1 <= _two_complement_buffer_1_T @[block_division.scala 44:32]
    two_complement_buffer__2 <= _two_complement_buffer_2_T @[block_division.scala 44:32]
    two_complement_buffer__3 <= _two_complement_buffer_3_T @[block_division.scala 44:32]
    two_complement_buffer__4 <= _two_complement_buffer_4_T @[block_division.scala 44:32]
    two_complement_buffer__5 <= _two_complement_buffer_5_T @[block_division.scala 44:32]
    two_complement_buffer__6 <= _two_complement_buffer_6_T @[block_division.scala 44:32]
    two_complement_buffer__7 <= _two_complement_buffer_7_T @[block_division.scala 44:32]
    two_complement_buffer__8 <= _two_complement_buffer_8_T @[block_division.scala 44:32]
    two_complement_buffer__9 <= _two_complement_buffer_9_T @[block_division.scala 44:32]
    two_complement_buffer__10 <= _two_complement_buffer_10_T @[block_division.scala 44:32]
    two_complement_buffer__11 <= _two_complement_buffer_11_T @[block_division.scala 44:32]
    two_complement_buffer__12 <= _two_complement_buffer_12_T @[block_division.scala 44:32]
    two_complement_buffer__13 <= _two_complement_buffer_13_T @[block_division.scala 44:32]
    two_complement_buffer__14 <= _two_complement_buffer_14_T @[block_division.scala 44:32]
    two_complement_buffer__15 <= _two_complement_buffer_15_T @[block_division.scala 44:32]
    multiplierReg <= mux(reset, UInt<6>("h0"), io_man_a_0) @[block_division.scala 33:{34,34} 36:21]
    signReg <= mux(reset, UInt<1>("h0"), io_sign_a_0) @[block_division.scala 34:{28,28} 35:15]
    multiplierReg_1 <= mux(reset, UInt<6>("h0"), io_man_a_1) @[block_division.scala 33:{34,34} 36:21]
    signReg_1 <= mux(reset, UInt<1>("h0"), io_sign_a_1) @[block_division.scala 34:{28,28} 35:15]
    multiplierReg_2 <= mux(reset, UInt<6>("h0"), io_man_a_2) @[block_division.scala 33:{34,34} 36:21]
    signReg_2 <= mux(reset, UInt<1>("h0"), io_sign_a_2) @[block_division.scala 34:{28,28} 35:15]
    multiplierReg_3 <= mux(reset, UInt<6>("h0"), io_man_a_3) @[block_division.scala 33:{34,34} 36:21]
    signReg_3 <= mux(reset, UInt<1>("h0"), io_sign_a_3) @[block_division.scala 34:{28,28} 35:15]
    multiplierReg_4 <= mux(reset, UInt<6>("h0"), io_man_a_4) @[block_division.scala 33:{34,34} 36:21]
    signReg_4 <= mux(reset, UInt<1>("h0"), io_sign_a_4) @[block_division.scala 34:{28,28} 35:15]
    multiplierReg_5 <= mux(reset, UInt<6>("h0"), io_man_a_5) @[block_division.scala 33:{34,34} 36:21]
    signReg_5 <= mux(reset, UInt<1>("h0"), io_sign_a_5) @[block_division.scala 34:{28,28} 35:15]
    multiplierReg_6 <= mux(reset, UInt<6>("h0"), io_man_a_6) @[block_division.scala 33:{34,34} 36:21]
    signReg_6 <= mux(reset, UInt<1>("h0"), io_sign_a_6) @[block_division.scala 34:{28,28} 35:15]
    multiplierReg_7 <= mux(reset, UInt<6>("h0"), io_man_a_7) @[block_division.scala 33:{34,34} 36:21]
    signReg_7 <= mux(reset, UInt<1>("h0"), io_sign_a_7) @[block_division.scala 34:{28,28} 35:15]
    multiplierReg_8 <= mux(reset, UInt<6>("h0"), io_man_a_8) @[block_division.scala 33:{34,34} 36:21]
    signReg_8 <= mux(reset, UInt<1>("h0"), io_sign_a_8) @[block_division.scala 34:{28,28} 35:15]
    multiplierReg_9 <= mux(reset, UInt<6>("h0"), io_man_a_9) @[block_division.scala 33:{34,34} 36:21]
    signReg_9 <= mux(reset, UInt<1>("h0"), io_sign_a_9) @[block_division.scala 34:{28,28} 35:15]
    multiplierReg_10 <= mux(reset, UInt<6>("h0"), io_man_a_10) @[block_division.scala 33:{34,34} 36:21]
    signReg_10 <= mux(reset, UInt<1>("h0"), io_sign_a_10) @[block_division.scala 34:{28,28} 35:15]
    multiplierReg_11 <= mux(reset, UInt<6>("h0"), io_man_a_11) @[block_division.scala 33:{34,34} 36:21]
    signReg_11 <= mux(reset, UInt<1>("h0"), io_sign_a_11) @[block_division.scala 34:{28,28} 35:15]
    multiplierReg_12 <= mux(reset, UInt<6>("h0"), io_man_a_12) @[block_division.scala 33:{34,34} 36:21]
    signReg_12 <= mux(reset, UInt<1>("h0"), io_sign_a_12) @[block_division.scala 34:{28,28} 35:15]
    multiplierReg_13 <= mux(reset, UInt<6>("h0"), io_man_a_13) @[block_division.scala 33:{34,34} 36:21]
    signReg_13 <= mux(reset, UInt<1>("h0"), io_sign_a_13) @[block_division.scala 34:{28,28} 35:15]
    multiplierReg_14 <= mux(reset, UInt<6>("h0"), io_man_a_14) @[block_division.scala 33:{34,34} 36:21]
    signReg_14 <= mux(reset, UInt<1>("h0"), io_sign_a_14) @[block_division.scala 34:{28,28} 35:15]
    multiplierReg_15 <= mux(reset, UInt<6>("h0"), io_man_a_15) @[block_division.scala 33:{34,34} 36:21]
    signReg_15 <= mux(reset, UInt<1>("h0"), io_sign_a_15) @[block_division.scala 34:{28,28} 35:15]
    dotProductRegs_1_0 <= _dotProductRegs_0_T_1 @[block_division.scala 37:25]
    dotProductRegs_1_1 <= _dotProductRegs_1_T_1 @[block_division.scala 37:25]
    dotProductRegs_1_2 <= _dotProductRegs_2_T_1 @[block_division.scala 37:25]
    dotProductRegs_1_3 <= _dotProductRegs_3_T_1 @[block_division.scala 37:25]
    dotProductRegs_1_4 <= _dotProductRegs_4_T_1 @[block_division.scala 37:25]
    dotProductRegs_1_5 <= _dotProductRegs_5_T_1 @[block_division.scala 37:25]
    dotProductRegs_1_6 <= _dotProductRegs_6_T_1 @[block_division.scala 37:25]
    dotProductRegs_1_7 <= _dotProductRegs_7_T_1 @[block_division.scala 37:25]
    dotProductRegs_1_8 <= _dotProductRegs_8_T_1 @[block_division.scala 37:25]
    dotProductRegs_1_9 <= _dotProductRegs_9_T_1 @[block_division.scala 37:25]
    dotProductRegs_1_10 <= _dotProductRegs_10_T_1 @[block_division.scala 37:25]
    dotProductRegs_1_11 <= _dotProductRegs_11_T_1 @[block_division.scala 37:25]
    dotProductRegs_1_12 <= _dotProductRegs_12_T_1 @[block_division.scala 37:25]
    dotProductRegs_1_13 <= _dotProductRegs_13_T_1 @[block_division.scala 37:25]
    dotProductRegs_1_14 <= _dotProductRegs_14_T_1 @[block_division.scala 37:25]
    dotProductRegs_1_15 <= _dotProductRegs_15_T_1 @[block_division.scala 37:25]
    signs_1_0 <= _signs_0_T_1 @[block_division.scala 38:16]
    signs_1_1 <= _signs_1_T_1 @[block_division.scala 38:16]
    signs_1_2 <= _signs_2_T_1 @[block_division.scala 38:16]
    signs_1_3 <= _signs_3_T_1 @[block_division.scala 38:16]
    signs_1_4 <= _signs_4_T_1 @[block_division.scala 38:16]
    signs_1_5 <= _signs_5_T_1 @[block_division.scala 38:16]
    signs_1_6 <= _signs_6_T_1 @[block_division.scala 38:16]
    signs_1_7 <= _signs_7_T_1 @[block_division.scala 38:16]
    signs_1_8 <= _signs_8_T_1 @[block_division.scala 38:16]
    signs_1_9 <= _signs_9_T_1 @[block_division.scala 38:16]
    signs_1_10 <= _signs_10_T_1 @[block_division.scala 38:16]
    signs_1_11 <= _signs_11_T_1 @[block_division.scala 38:16]
    signs_1_12 <= _signs_12_T_1 @[block_division.scala 38:16]
    signs_1_13 <= _signs_13_T_1 @[block_division.scala 38:16]
    signs_1_14 <= _signs_14_T_1 @[block_division.scala 38:16]
    signs_1_15 <= _signs_15_T_1 @[block_division.scala 38:16]
    two_complement_1_0 <= _two_complement_0_T_13 @[block_division.scala 39:25]
    two_complement_1_1 <= _two_complement_1_T_13 @[block_division.scala 39:25]
    two_complement_1_2 <= _two_complement_2_T_13 @[block_division.scala 39:25]
    two_complement_1_3 <= _two_complement_3_T_13 @[block_division.scala 39:25]
    two_complement_1_4 <= _two_complement_4_T_13 @[block_division.scala 39:25]
    two_complement_1_5 <= _two_complement_5_T_13 @[block_division.scala 39:25]
    two_complement_1_6 <= _two_complement_6_T_13 @[block_division.scala 39:25]
    two_complement_1_7 <= _two_complement_7_T_13 @[block_division.scala 39:25]
    two_complement_1_8 <= _two_complement_8_T_13 @[block_division.scala 39:25]
    two_complement_1_9 <= _two_complement_9_T_13 @[block_division.scala 39:25]
    two_complement_1_10 <= _two_complement_10_T_13 @[block_division.scala 39:25]
    two_complement_1_11 <= _two_complement_11_T_13 @[block_division.scala 39:25]
    two_complement_1_12 <= _two_complement_12_T_13 @[block_division.scala 39:25]
    two_complement_1_13 <= _two_complement_13_T_13 @[block_division.scala 39:25]
    two_complement_1_14 <= _two_complement_14_T_13 @[block_division.scala 39:25]
    two_complement_1_15 <= _two_complement_15_T_13 @[block_division.scala 39:25]
    two_complement_buffer_1_0 <= _two_complement_buffer_0_T_1 @[block_division.scala 44:32]
    two_complement_buffer_1_1 <= _two_complement_buffer_1_T_1 @[block_division.scala 44:32]
    two_complement_buffer_1_2 <= _two_complement_buffer_2_T_1 @[block_division.scala 44:32]
    two_complement_buffer_1_3 <= _two_complement_buffer_3_T_1 @[block_division.scala 44:32]
    two_complement_buffer_1_4 <= _two_complement_buffer_4_T_1 @[block_division.scala 44:32]
    two_complement_buffer_1_5 <= _two_complement_buffer_5_T_1 @[block_division.scala 44:32]
    two_complement_buffer_1_6 <= _two_complement_buffer_6_T_1 @[block_division.scala 44:32]
    two_complement_buffer_1_7 <= _two_complement_buffer_7_T_1 @[block_division.scala 44:32]
    two_complement_buffer_1_8 <= _two_complement_buffer_8_T_1 @[block_division.scala 44:32]
    two_complement_buffer_1_9 <= _two_complement_buffer_9_T_1 @[block_division.scala 44:32]
    two_complement_buffer_1_10 <= _two_complement_buffer_10_T_1 @[block_division.scala 44:32]
    two_complement_buffer_1_11 <= _two_complement_buffer_11_T_1 @[block_division.scala 44:32]
    two_complement_buffer_1_12 <= _two_complement_buffer_12_T_1 @[block_division.scala 44:32]
    two_complement_buffer_1_13 <= _two_complement_buffer_13_T_1 @[block_division.scala 44:32]
    two_complement_buffer_1_14 <= _two_complement_buffer_14_T_1 @[block_division.scala 44:32]
    two_complement_buffer_1_15 <= _two_complement_buffer_15_T_1 @[block_division.scala 44:32]
    multiplierReg_16 <= mux(reset, UInt<6>("h0"), io_man_a_16) @[block_division.scala 33:{34,34} 36:21]
    signReg_16 <= mux(reset, UInt<1>("h0"), io_sign_a_16) @[block_division.scala 34:{28,28} 35:15]
    multiplierReg_17 <= mux(reset, UInt<6>("h0"), io_man_a_17) @[block_division.scala 33:{34,34} 36:21]
    signReg_17 <= mux(reset, UInt<1>("h0"), io_sign_a_17) @[block_division.scala 34:{28,28} 35:15]
    multiplierReg_18 <= mux(reset, UInt<6>("h0"), io_man_a_18) @[block_division.scala 33:{34,34} 36:21]
    signReg_18 <= mux(reset, UInt<1>("h0"), io_sign_a_18) @[block_division.scala 34:{28,28} 35:15]
    multiplierReg_19 <= mux(reset, UInt<6>("h0"), io_man_a_19) @[block_division.scala 33:{34,34} 36:21]
    signReg_19 <= mux(reset, UInt<1>("h0"), io_sign_a_19) @[block_division.scala 34:{28,28} 35:15]
    multiplierReg_20 <= mux(reset, UInt<6>("h0"), io_man_a_20) @[block_division.scala 33:{34,34} 36:21]
    signReg_20 <= mux(reset, UInt<1>("h0"), io_sign_a_20) @[block_division.scala 34:{28,28} 35:15]
    multiplierReg_21 <= mux(reset, UInt<6>("h0"), io_man_a_21) @[block_division.scala 33:{34,34} 36:21]
    signReg_21 <= mux(reset, UInt<1>("h0"), io_sign_a_21) @[block_division.scala 34:{28,28} 35:15]
    multiplierReg_22 <= mux(reset, UInt<6>("h0"), io_man_a_22) @[block_division.scala 33:{34,34} 36:21]
    signReg_22 <= mux(reset, UInt<1>("h0"), io_sign_a_22) @[block_division.scala 34:{28,28} 35:15]
    multiplierReg_23 <= mux(reset, UInt<6>("h0"), io_man_a_23) @[block_division.scala 33:{34,34} 36:21]
    signReg_23 <= mux(reset, UInt<1>("h0"), io_sign_a_23) @[block_division.scala 34:{28,28} 35:15]
    multiplierReg_24 <= mux(reset, UInt<6>("h0"), io_man_a_24) @[block_division.scala 33:{34,34} 36:21]
    signReg_24 <= mux(reset, UInt<1>("h0"), io_sign_a_24) @[block_division.scala 34:{28,28} 35:15]
    multiplierReg_25 <= mux(reset, UInt<6>("h0"), io_man_a_25) @[block_division.scala 33:{34,34} 36:21]
    signReg_25 <= mux(reset, UInt<1>("h0"), io_sign_a_25) @[block_division.scala 34:{28,28} 35:15]
    multiplierReg_26 <= mux(reset, UInt<6>("h0"), io_man_a_26) @[block_division.scala 33:{34,34} 36:21]
    signReg_26 <= mux(reset, UInt<1>("h0"), io_sign_a_26) @[block_division.scala 34:{28,28} 35:15]
    multiplierReg_27 <= mux(reset, UInt<6>("h0"), io_man_a_27) @[block_division.scala 33:{34,34} 36:21]
    signReg_27 <= mux(reset, UInt<1>("h0"), io_sign_a_27) @[block_division.scala 34:{28,28} 35:15]
    multiplierReg_28 <= mux(reset, UInt<6>("h0"), io_man_a_28) @[block_division.scala 33:{34,34} 36:21]
    signReg_28 <= mux(reset, UInt<1>("h0"), io_sign_a_28) @[block_division.scala 34:{28,28} 35:15]
    multiplierReg_29 <= mux(reset, UInt<6>("h0"), io_man_a_29) @[block_division.scala 33:{34,34} 36:21]
    signReg_29 <= mux(reset, UInt<1>("h0"), io_sign_a_29) @[block_division.scala 34:{28,28} 35:15]
    multiplierReg_30 <= mux(reset, UInt<6>("h0"), io_man_a_30) @[block_division.scala 33:{34,34} 36:21]
    signReg_30 <= mux(reset, UInt<1>("h0"), io_sign_a_30) @[block_division.scala 34:{28,28} 35:15]
    multiplierReg_31 <= mux(reset, UInt<6>("h0"), io_man_a_31) @[block_division.scala 33:{34,34} 36:21]
    signReg_31 <= mux(reset, UInt<1>("h0"), io_sign_a_31) @[block_division.scala 34:{28,28} 35:15]
    dotProductRegs_2_0 <= _dotProductRegs_0_T_2 @[block_division.scala 37:25]
    dotProductRegs_2_1 <= _dotProductRegs_1_T_2 @[block_division.scala 37:25]
    dotProductRegs_2_2 <= _dotProductRegs_2_T_2 @[block_division.scala 37:25]
    dotProductRegs_2_3 <= _dotProductRegs_3_T_2 @[block_division.scala 37:25]
    dotProductRegs_2_4 <= _dotProductRegs_4_T_2 @[block_division.scala 37:25]
    dotProductRegs_2_5 <= _dotProductRegs_5_T_2 @[block_division.scala 37:25]
    dotProductRegs_2_6 <= _dotProductRegs_6_T_2 @[block_division.scala 37:25]
    dotProductRegs_2_7 <= _dotProductRegs_7_T_2 @[block_division.scala 37:25]
    dotProductRegs_2_8 <= _dotProductRegs_8_T_2 @[block_division.scala 37:25]
    dotProductRegs_2_9 <= _dotProductRegs_9_T_2 @[block_division.scala 37:25]
    dotProductRegs_2_10 <= _dotProductRegs_10_T_2 @[block_division.scala 37:25]
    dotProductRegs_2_11 <= _dotProductRegs_11_T_2 @[block_division.scala 37:25]
    dotProductRegs_2_12 <= _dotProductRegs_12_T_2 @[block_division.scala 37:25]
    dotProductRegs_2_13 <= _dotProductRegs_13_T_2 @[block_division.scala 37:25]
    dotProductRegs_2_14 <= _dotProductRegs_14_T_2 @[block_division.scala 37:25]
    dotProductRegs_2_15 <= _dotProductRegs_15_T_2 @[block_division.scala 37:25]
    signs_2_0 <= _signs_0_T_2 @[block_division.scala 38:16]
    signs_2_1 <= _signs_1_T_2 @[block_division.scala 38:16]
    signs_2_2 <= _signs_2_T_2 @[block_division.scala 38:16]
    signs_2_3 <= _signs_3_T_2 @[block_division.scala 38:16]
    signs_2_4 <= _signs_4_T_2 @[block_division.scala 38:16]
    signs_2_5 <= _signs_5_T_2 @[block_division.scala 38:16]
    signs_2_6 <= _signs_6_T_2 @[block_division.scala 38:16]
    signs_2_7 <= _signs_7_T_2 @[block_division.scala 38:16]
    signs_2_8 <= _signs_8_T_2 @[block_division.scala 38:16]
    signs_2_9 <= _signs_9_T_2 @[block_division.scala 38:16]
    signs_2_10 <= _signs_10_T_2 @[block_division.scala 38:16]
    signs_2_11 <= _signs_11_T_2 @[block_division.scala 38:16]
    signs_2_12 <= _signs_12_T_2 @[block_division.scala 38:16]
    signs_2_13 <= _signs_13_T_2 @[block_division.scala 38:16]
    signs_2_14 <= _signs_14_T_2 @[block_division.scala 38:16]
    signs_2_15 <= _signs_15_T_2 @[block_division.scala 38:16]
    two_complement_2_0 <= _two_complement_0_T_20 @[block_division.scala 39:25]
    two_complement_2_1 <= _two_complement_1_T_20 @[block_division.scala 39:25]
    two_complement_2_2 <= _two_complement_2_T_20 @[block_division.scala 39:25]
    two_complement_2_3 <= _two_complement_3_T_20 @[block_division.scala 39:25]
    two_complement_2_4 <= _two_complement_4_T_20 @[block_division.scala 39:25]
    two_complement_2_5 <= _two_complement_5_T_20 @[block_division.scala 39:25]
    two_complement_2_6 <= _two_complement_6_T_20 @[block_division.scala 39:25]
    two_complement_2_7 <= _two_complement_7_T_20 @[block_division.scala 39:25]
    two_complement_2_8 <= _two_complement_8_T_20 @[block_division.scala 39:25]
    two_complement_2_9 <= _two_complement_9_T_20 @[block_division.scala 39:25]
    two_complement_2_10 <= _two_complement_10_T_20 @[block_division.scala 39:25]
    two_complement_2_11 <= _two_complement_11_T_20 @[block_division.scala 39:25]
    two_complement_2_12 <= _two_complement_12_T_20 @[block_division.scala 39:25]
    two_complement_2_13 <= _two_complement_13_T_20 @[block_division.scala 39:25]
    two_complement_2_14 <= _two_complement_14_T_20 @[block_division.scala 39:25]
    two_complement_2_15 <= _two_complement_15_T_20 @[block_division.scala 39:25]
    two_complement_buffer_2_0 <= _two_complement_buffer_0_T_2 @[block_division.scala 44:32]
    two_complement_buffer_2_1 <= _two_complement_buffer_1_T_2 @[block_division.scala 44:32]
    two_complement_buffer_2_2 <= _two_complement_buffer_2_T_2 @[block_division.scala 44:32]
    two_complement_buffer_2_3 <= _two_complement_buffer_3_T_2 @[block_division.scala 44:32]
    two_complement_buffer_2_4 <= _two_complement_buffer_4_T_2 @[block_division.scala 44:32]
    two_complement_buffer_2_5 <= _two_complement_buffer_5_T_2 @[block_division.scala 44:32]
    two_complement_buffer_2_6 <= _two_complement_buffer_6_T_2 @[block_division.scala 44:32]
    two_complement_buffer_2_7 <= _two_complement_buffer_7_T_2 @[block_division.scala 44:32]
    two_complement_buffer_2_8 <= _two_complement_buffer_8_T_2 @[block_division.scala 44:32]
    two_complement_buffer_2_9 <= _two_complement_buffer_9_T_2 @[block_division.scala 44:32]
    two_complement_buffer_2_10 <= _two_complement_buffer_10_T_2 @[block_division.scala 44:32]
    two_complement_buffer_2_11 <= _two_complement_buffer_11_T_2 @[block_division.scala 44:32]
    two_complement_buffer_2_12 <= _two_complement_buffer_12_T_2 @[block_division.scala 44:32]
    two_complement_buffer_2_13 <= _two_complement_buffer_13_T_2 @[block_division.scala 44:32]
    two_complement_buffer_2_14 <= _two_complement_buffer_14_T_2 @[block_division.scala 44:32]
    two_complement_buffer_2_15 <= _two_complement_buffer_15_T_2 @[block_division.scala 44:32]
    multiplierReg_32 <= mux(reset, UInt<6>("h0"), io_man_a_32) @[block_division.scala 33:{34,34} 36:21]
    signReg_32 <= mux(reset, UInt<1>("h0"), io_sign_a_32) @[block_division.scala 34:{28,28} 35:15]
    multiplierReg_33 <= mux(reset, UInt<6>("h0"), io_man_a_33) @[block_division.scala 33:{34,34} 36:21]
    signReg_33 <= mux(reset, UInt<1>("h0"), io_sign_a_33) @[block_division.scala 34:{28,28} 35:15]
    multiplierReg_34 <= mux(reset, UInt<6>("h0"), io_man_a_34) @[block_division.scala 33:{34,34} 36:21]
    signReg_34 <= mux(reset, UInt<1>("h0"), io_sign_a_34) @[block_division.scala 34:{28,28} 35:15]
    multiplierReg_35 <= mux(reset, UInt<6>("h0"), io_man_a_35) @[block_division.scala 33:{34,34} 36:21]
    signReg_35 <= mux(reset, UInt<1>("h0"), io_sign_a_35) @[block_division.scala 34:{28,28} 35:15]
    multiplierReg_36 <= mux(reset, UInt<6>("h0"), io_man_a_36) @[block_division.scala 33:{34,34} 36:21]
    signReg_36 <= mux(reset, UInt<1>("h0"), io_sign_a_36) @[block_division.scala 34:{28,28} 35:15]
    multiplierReg_37 <= mux(reset, UInt<6>("h0"), io_man_a_37) @[block_division.scala 33:{34,34} 36:21]
    signReg_37 <= mux(reset, UInt<1>("h0"), io_sign_a_37) @[block_division.scala 34:{28,28} 35:15]
    multiplierReg_38 <= mux(reset, UInt<6>("h0"), io_man_a_38) @[block_division.scala 33:{34,34} 36:21]
    signReg_38 <= mux(reset, UInt<1>("h0"), io_sign_a_38) @[block_division.scala 34:{28,28} 35:15]
    multiplierReg_39 <= mux(reset, UInt<6>("h0"), io_man_a_39) @[block_division.scala 33:{34,34} 36:21]
    signReg_39 <= mux(reset, UInt<1>("h0"), io_sign_a_39) @[block_division.scala 34:{28,28} 35:15]
    multiplierReg_40 <= mux(reset, UInt<6>("h0"), io_man_a_40) @[block_division.scala 33:{34,34} 36:21]
    signReg_40 <= mux(reset, UInt<1>("h0"), io_sign_a_40) @[block_division.scala 34:{28,28} 35:15]
    multiplierReg_41 <= mux(reset, UInt<6>("h0"), io_man_a_41) @[block_division.scala 33:{34,34} 36:21]
    signReg_41 <= mux(reset, UInt<1>("h0"), io_sign_a_41) @[block_division.scala 34:{28,28} 35:15]
    multiplierReg_42 <= mux(reset, UInt<6>("h0"), io_man_a_42) @[block_division.scala 33:{34,34} 36:21]
    signReg_42 <= mux(reset, UInt<1>("h0"), io_sign_a_42) @[block_division.scala 34:{28,28} 35:15]
    multiplierReg_43 <= mux(reset, UInt<6>("h0"), io_man_a_43) @[block_division.scala 33:{34,34} 36:21]
    signReg_43 <= mux(reset, UInt<1>("h0"), io_sign_a_43) @[block_division.scala 34:{28,28} 35:15]
    multiplierReg_44 <= mux(reset, UInt<6>("h0"), io_man_a_44) @[block_division.scala 33:{34,34} 36:21]
    signReg_44 <= mux(reset, UInt<1>("h0"), io_sign_a_44) @[block_division.scala 34:{28,28} 35:15]
    multiplierReg_45 <= mux(reset, UInt<6>("h0"), io_man_a_45) @[block_division.scala 33:{34,34} 36:21]
    signReg_45 <= mux(reset, UInt<1>("h0"), io_sign_a_45) @[block_division.scala 34:{28,28} 35:15]
    multiplierReg_46 <= mux(reset, UInt<6>("h0"), io_man_a_46) @[block_division.scala 33:{34,34} 36:21]
    signReg_46 <= mux(reset, UInt<1>("h0"), io_sign_a_46) @[block_division.scala 34:{28,28} 35:15]
    multiplierReg_47 <= mux(reset, UInt<6>("h0"), io_man_a_47) @[block_division.scala 33:{34,34} 36:21]
    signReg_47 <= mux(reset, UInt<1>("h0"), io_sign_a_47) @[block_division.scala 34:{28,28} 35:15]
    dotProductRegs_3_0 <= _dotProductRegs_0_T_3 @[block_division.scala 37:25]
    dotProductRegs_3_1 <= _dotProductRegs_1_T_3 @[block_division.scala 37:25]
    dotProductRegs_3_2 <= _dotProductRegs_2_T_3 @[block_division.scala 37:25]
    dotProductRegs_3_3 <= _dotProductRegs_3_T_3 @[block_division.scala 37:25]
    dotProductRegs_3_4 <= _dotProductRegs_4_T_3 @[block_division.scala 37:25]
    dotProductRegs_3_5 <= _dotProductRegs_5_T_3 @[block_division.scala 37:25]
    dotProductRegs_3_6 <= _dotProductRegs_6_T_3 @[block_division.scala 37:25]
    dotProductRegs_3_7 <= _dotProductRegs_7_T_3 @[block_division.scala 37:25]
    dotProductRegs_3_8 <= _dotProductRegs_8_T_3 @[block_division.scala 37:25]
    dotProductRegs_3_9 <= _dotProductRegs_9_T_3 @[block_division.scala 37:25]
    dotProductRegs_3_10 <= _dotProductRegs_10_T_3 @[block_division.scala 37:25]
    dotProductRegs_3_11 <= _dotProductRegs_11_T_3 @[block_division.scala 37:25]
    dotProductRegs_3_12 <= _dotProductRegs_12_T_3 @[block_division.scala 37:25]
    dotProductRegs_3_13 <= _dotProductRegs_13_T_3 @[block_division.scala 37:25]
    dotProductRegs_3_14 <= _dotProductRegs_14_T_3 @[block_division.scala 37:25]
    dotProductRegs_3_15 <= _dotProductRegs_15_T_3 @[block_division.scala 37:25]
    signs_3_0 <= _signs_0_T_3 @[block_division.scala 38:16]
    signs_3_1 <= _signs_1_T_3 @[block_division.scala 38:16]
    signs_3_2 <= _signs_2_T_3 @[block_division.scala 38:16]
    signs_3_3 <= _signs_3_T_3 @[block_division.scala 38:16]
    signs_3_4 <= _signs_4_T_3 @[block_division.scala 38:16]
    signs_3_5 <= _signs_5_T_3 @[block_division.scala 38:16]
    signs_3_6 <= _signs_6_T_3 @[block_division.scala 38:16]
    signs_3_7 <= _signs_7_T_3 @[block_division.scala 38:16]
    signs_3_8 <= _signs_8_T_3 @[block_division.scala 38:16]
    signs_3_9 <= _signs_9_T_3 @[block_division.scala 38:16]
    signs_3_10 <= _signs_10_T_3 @[block_division.scala 38:16]
    signs_3_11 <= _signs_11_T_3 @[block_division.scala 38:16]
    signs_3_12 <= _signs_12_T_3 @[block_division.scala 38:16]
    signs_3_13 <= _signs_13_T_3 @[block_division.scala 38:16]
    signs_3_14 <= _signs_14_T_3 @[block_division.scala 38:16]
    signs_3_15 <= _signs_15_T_3 @[block_division.scala 38:16]
    two_complement_3_0 <= _two_complement_0_T_27 @[block_division.scala 39:25]
    two_complement_3_1 <= _two_complement_1_T_27 @[block_division.scala 39:25]
    two_complement_3_2 <= _two_complement_2_T_27 @[block_division.scala 39:25]
    two_complement_3_3 <= _two_complement_3_T_27 @[block_division.scala 39:25]
    two_complement_3_4 <= _two_complement_4_T_27 @[block_division.scala 39:25]
    two_complement_3_5 <= _two_complement_5_T_27 @[block_division.scala 39:25]
    two_complement_3_6 <= _two_complement_6_T_27 @[block_division.scala 39:25]
    two_complement_3_7 <= _two_complement_7_T_27 @[block_division.scala 39:25]
    two_complement_3_8 <= _two_complement_8_T_27 @[block_division.scala 39:25]
    two_complement_3_9 <= _two_complement_9_T_27 @[block_division.scala 39:25]
    two_complement_3_10 <= _two_complement_10_T_27 @[block_division.scala 39:25]
    two_complement_3_11 <= _two_complement_11_T_27 @[block_division.scala 39:25]
    two_complement_3_12 <= _two_complement_12_T_27 @[block_division.scala 39:25]
    two_complement_3_13 <= _two_complement_13_T_27 @[block_division.scala 39:25]
    two_complement_3_14 <= _two_complement_14_T_27 @[block_division.scala 39:25]
    two_complement_3_15 <= _two_complement_15_T_27 @[block_division.scala 39:25]
    two_complement_buffer_3_0 <= _two_complement_buffer_0_T_3 @[block_division.scala 44:32]
    two_complement_buffer_3_1 <= _two_complement_buffer_1_T_3 @[block_division.scala 44:32]
    two_complement_buffer_3_2 <= _two_complement_buffer_2_T_3 @[block_division.scala 44:32]
    two_complement_buffer_3_3 <= _two_complement_buffer_3_T_3 @[block_division.scala 44:32]
    two_complement_buffer_3_4 <= _two_complement_buffer_4_T_3 @[block_division.scala 44:32]
    two_complement_buffer_3_5 <= _two_complement_buffer_5_T_3 @[block_division.scala 44:32]
    two_complement_buffer_3_6 <= _two_complement_buffer_6_T_3 @[block_division.scala 44:32]
    two_complement_buffer_3_7 <= _two_complement_buffer_7_T_3 @[block_division.scala 44:32]
    two_complement_buffer_3_8 <= _two_complement_buffer_8_T_3 @[block_division.scala 44:32]
    two_complement_buffer_3_9 <= _two_complement_buffer_9_T_3 @[block_division.scala 44:32]
    two_complement_buffer_3_10 <= _two_complement_buffer_10_T_3 @[block_division.scala 44:32]
    two_complement_buffer_3_11 <= _two_complement_buffer_11_T_3 @[block_division.scala 44:32]
    two_complement_buffer_3_12 <= _two_complement_buffer_12_T_3 @[block_division.scala 44:32]
    two_complement_buffer_3_13 <= _two_complement_buffer_13_T_3 @[block_division.scala 44:32]
    two_complement_buffer_3_14 <= _two_complement_buffer_14_T_3 @[block_division.scala 44:32]
    two_complement_buffer_3_15 <= _two_complement_buffer_15_T_3 @[block_division.scala 44:32]
    multiplierReg_48 <= mux(reset, UInt<6>("h0"), io_man_a_48) @[block_division.scala 33:{34,34} 36:21]
    signReg_48 <= mux(reset, UInt<1>("h0"), io_sign_a_48) @[block_division.scala 34:{28,28} 35:15]
    multiplierReg_49 <= mux(reset, UInt<6>("h0"), io_man_a_49) @[block_division.scala 33:{34,34} 36:21]
    signReg_49 <= mux(reset, UInt<1>("h0"), io_sign_a_49) @[block_division.scala 34:{28,28} 35:15]
    multiplierReg_50 <= mux(reset, UInt<6>("h0"), io_man_a_50) @[block_division.scala 33:{34,34} 36:21]
    signReg_50 <= mux(reset, UInt<1>("h0"), io_sign_a_50) @[block_division.scala 34:{28,28} 35:15]
    multiplierReg_51 <= mux(reset, UInt<6>("h0"), io_man_a_51) @[block_division.scala 33:{34,34} 36:21]
    signReg_51 <= mux(reset, UInt<1>("h0"), io_sign_a_51) @[block_division.scala 34:{28,28} 35:15]
    multiplierReg_52 <= mux(reset, UInt<6>("h0"), io_man_a_52) @[block_division.scala 33:{34,34} 36:21]
    signReg_52 <= mux(reset, UInt<1>("h0"), io_sign_a_52) @[block_division.scala 34:{28,28} 35:15]
    multiplierReg_53 <= mux(reset, UInt<6>("h0"), io_man_a_53) @[block_division.scala 33:{34,34} 36:21]
    signReg_53 <= mux(reset, UInt<1>("h0"), io_sign_a_53) @[block_division.scala 34:{28,28} 35:15]
    multiplierReg_54 <= mux(reset, UInt<6>("h0"), io_man_a_54) @[block_division.scala 33:{34,34} 36:21]
    signReg_54 <= mux(reset, UInt<1>("h0"), io_sign_a_54) @[block_division.scala 34:{28,28} 35:15]
    multiplierReg_55 <= mux(reset, UInt<6>("h0"), io_man_a_55) @[block_division.scala 33:{34,34} 36:21]
    signReg_55 <= mux(reset, UInt<1>("h0"), io_sign_a_55) @[block_division.scala 34:{28,28} 35:15]
    multiplierReg_56 <= mux(reset, UInt<6>("h0"), io_man_a_56) @[block_division.scala 33:{34,34} 36:21]
    signReg_56 <= mux(reset, UInt<1>("h0"), io_sign_a_56) @[block_division.scala 34:{28,28} 35:15]
    multiplierReg_57 <= mux(reset, UInt<6>("h0"), io_man_a_57) @[block_division.scala 33:{34,34} 36:21]
    signReg_57 <= mux(reset, UInt<1>("h0"), io_sign_a_57) @[block_division.scala 34:{28,28} 35:15]
    multiplierReg_58 <= mux(reset, UInt<6>("h0"), io_man_a_58) @[block_division.scala 33:{34,34} 36:21]
    signReg_58 <= mux(reset, UInt<1>("h0"), io_sign_a_58) @[block_division.scala 34:{28,28} 35:15]
    multiplierReg_59 <= mux(reset, UInt<6>("h0"), io_man_a_59) @[block_division.scala 33:{34,34} 36:21]
    signReg_59 <= mux(reset, UInt<1>("h0"), io_sign_a_59) @[block_division.scala 34:{28,28} 35:15]
    multiplierReg_60 <= mux(reset, UInt<6>("h0"), io_man_a_60) @[block_division.scala 33:{34,34} 36:21]
    signReg_60 <= mux(reset, UInt<1>("h0"), io_sign_a_60) @[block_division.scala 34:{28,28} 35:15]
    multiplierReg_61 <= mux(reset, UInt<6>("h0"), io_man_a_61) @[block_division.scala 33:{34,34} 36:21]
    signReg_61 <= mux(reset, UInt<1>("h0"), io_sign_a_61) @[block_division.scala 34:{28,28} 35:15]
    multiplierReg_62 <= mux(reset, UInt<6>("h0"), io_man_a_62) @[block_division.scala 33:{34,34} 36:21]
    signReg_62 <= mux(reset, UInt<1>("h0"), io_sign_a_62) @[block_division.scala 34:{28,28} 35:15]
    multiplierReg_63 <= mux(reset, UInt<6>("h0"), io_man_a_63) @[block_division.scala 33:{34,34} 36:21]
    signReg_63 <= mux(reset, UInt<1>("h0"), io_sign_a_63) @[block_division.scala 34:{28,28} 35:15]
    adderTreeInst.clock <= clock
    adderTreeInst.reset <= reset
    adderTreeInst.io_sign_man_0 <= _WIRE__0 @[block_division.scala 51:29]
    adderTreeInst.io_sign_man_1 <= _WIRE__1 @[block_division.scala 51:29]
    adderTreeInst.io_sign_man_2 <= _WIRE__2 @[block_division.scala 51:29]
    adderTreeInst.io_sign_man_3 <= _WIRE__3 @[block_division.scala 51:29]
    adderTreeInst.io_exps_0 <= _WIRE_1_0 @[block_division.scala 52:25]
    adderTreeInst.io_exps_1 <= _WIRE_1_1 @[block_division.scala 52:25]
    adderTreeInst.io_exps_2 <= _WIRE_1_2 @[block_division.scala 52:25]
    adderTreeInst.io_exps_3 <= _WIRE_1_3 @[block_division.scala 52:25]
    adderTreeInst.io_control_signal <= io_control @[block_division.scala 53:35]
    adderTreeInst.io_control_signal2 <= io_control2 @[block_division.scala 54:36]
