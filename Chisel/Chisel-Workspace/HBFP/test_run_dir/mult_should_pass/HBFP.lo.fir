FIRRTL version 1.1.0
circuit HBFP :
  module HBFP :
    input clock : Clock
    input reset : UInt<1>
    input io_man_0 : UInt<5>
    input io_man_1 : UInt<5>
    input io_man_2 : UInt<5>
    input io_man_3 : UInt<5>
    input io_exp_0 : UInt<8>
    input io_exp_1 : UInt<8>
    input io_signs_0 : UInt<1>
    input io_signs_1 : UInt<1>
    input io_signs_2 : UInt<1>
    input io_signs_3 : UInt<1>
    output io_result : UInt<14>

    reg exp_output : UInt<8>, clock with :
      reset => (UInt<1>("h0"), exp_output) @[mult.scala 14:23]
    node _exp_output_T = add(io_exp_0, io_exp_1) @[mult.scala 15:24]
    node _exp_output_T_1 = tail(_exp_output_T, 1) @[mult.scala 15:24]
    reg result_buf_0 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), result_buf_0) @[mult.scala 16:23]
    reg result_buf_1 : UInt<19>, clock with :
      reset => (UInt<1>("h0"), result_buf_1) @[mult.scala 16:23]
    reg finalr : UInt<14>, clock with :
      reset => (UInt<1>("h0"), finalr) @[mult.scala 17:19]
    node _mant_total2_T = mul(io_man_0, io_man_2) @[mult.scala 24:34]
    node _mant_total_0_T = mul(io_man_0, io_man_2) @[mult.scala 25:36]
    node _si_T = xor(io_signs_0, io_signs_2) @[mult.scala 26:28]
    node sa = xor(io_signs_1, io_signs_3) @[mult.scala 29:34]
    node ma1 = mul(io_man_1, io_man_3) @[mult.scala 30:33]
    node _buf_T = cat(sa, exp_output) @[mult.scala 31:18]
    node buf = cat(_buf_T, ma1) @[mult.scala 31:32]
    node si = _si_T @[mult.scala 18:16 26:6]
    node _mant_total2_T_1 = eq(sa, si) @[mult.scala 35:27]
    node mant_total_0 = pad(_mant_total_0_T, 12) @[mult.scala 20:24 25:17]
    node _mant_total2_T_2 = add(mant_total_0, ma1) @[mult.scala 35:51]
    node _mant_total2_T_3 = tail(_mant_total2_T_2, 1) @[mult.scala 35:51]
    node _mant_total2_T_4 = gt(ma1, mant_total_0) @[mult.scala 35:66]
    node _mant_total2_T_5 = sub(ma1, mant_total_0) @[mult.scala 35:89]
    node _mant_total2_T_6 = tail(_mant_total2_T_5, 1) @[mult.scala 35:89]
    node _mant_total2_T_7 = sub(mant_total_0, ma1) @[mult.scala 35:124]
    node _mant_total2_T_8 = tail(_mant_total2_T_7, 1) @[mult.scala 35:124]
    node _mant_total2_T_9 = mux(_mant_total2_T_4, _mant_total2_T_6, _mant_total2_T_8) @[mult.scala 35:61]
    node _mant_total2_T_10 = mux(_mant_total2_T_1, _mant_total2_T_3, _mant_total2_T_9) @[mult.scala 35:23]
    node _sign_final_T = gt(ma1, mant_total_0) @[mult.scala 45:27]
    node _sign_final_T_1 = mux(_sign_final_T, sa, si) @[mult.scala 45:22]
    node sign_final = _sign_final_T_1 @[mult.scala 19:24 45:16]
    node _io_result_T = cat(sign_final, exp_output) @[mult.scala 51:27]
    node mant_total2 = _mant_total2_T_10 @[mult.scala 21:25 35:17]
    node mant_total_1 = mant_total2 @[mult.scala 20:24 36:19]
    node _io_result_T_1 = bits(mant_total_1, 4, 0) @[mult.scala 51:69]
    node _io_result_T_2 = cat(_io_result_T, _io_result_T_1) @[mult.scala 51:41]
    io_result <= _io_result_T_2 @[mult.scala 51:13]
    exp_output <= _exp_output_T_1 @[mult.scala 15:14]
    result_buf_0 <= result_buf_0 @[mult.scala 16:23]
    result_buf_1 <= buf @[mult.scala 32:19]
    finalr <= finalr @[mult.scala 17:19]
