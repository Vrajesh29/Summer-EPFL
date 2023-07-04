circuit HBFP :
  module HBFP :
    input clock : Clock
    input reset : UInt<1>
    output io : { flip man : UInt<5>[4], flip exp : UInt<8>[2], flip signs : UInt<1>[4], result : UInt<14>}

    reg exp_output : UInt<8>, clock with :
      reset => (UInt<1>("h0"), exp_output) @[mult.scala 14:23]
    node _exp_output_T = add(io.exp[0], io.exp[1]) @[mult.scala 15:24]
    node _exp_output_T_1 = tail(_exp_output_T, 1) @[mult.scala 15:24]
    exp_output <= _exp_output_T_1 @[mult.scala 15:14]
    reg result_buf : UInt<19>[2], clock with :
      reset => (UInt<1>("h0"), result_buf) @[mult.scala 16:23]
    reg finalr : UInt<14>, clock with :
      reset => (UInt<1>("h0"), finalr) @[mult.scala 17:19]
    wire si : UInt<1> @[mult.scala 18:16]
    wire sign_final : UInt<1> @[mult.scala 19:24]
    wire mant_total : UInt<12>[2] @[mult.scala 20:24]
    wire mant_total2 : UInt<12> @[mult.scala 21:25]
    node _mant_total2_T = mul(io.man[0], io.man[2]) @[mult.scala 24:34]
    mant_total2 <= _mant_total2_T @[mult.scala 24:15]
    node _mant_total_0_T = mul(io.man[0], io.man[2]) @[mult.scala 25:36]
    mant_total[0] <= _mant_total_0_T @[mult.scala 25:17]
    node _si_T = xor(io.signs[0], io.signs[2]) @[mult.scala 26:28]
    si <= _si_T @[mult.scala 26:6]
    node sa = xor(io.signs[1], io.signs[3]) @[mult.scala 29:34]
    node ma1 = mul(io.man[1], io.man[3]) @[mult.scala 30:33]
    node _buf_T = cat(sa, exp_output) @[mult.scala 31:18]
    node buf = cat(_buf_T, ma1) @[mult.scala 31:32]
    result_buf[1] <= buf @[mult.scala 32:19]
    node _mant_total2_T_1 = eq(sa, si) @[mult.scala 35:27]
    node _mant_total2_T_2 = add(mant_total[0], ma1) @[mult.scala 35:51]
    node _mant_total2_T_3 = tail(_mant_total2_T_2, 1) @[mult.scala 35:51]
    node _mant_total2_T_4 = gt(ma1, mant_total[0]) @[mult.scala 35:66]
    node _mant_total2_T_5 = sub(ma1, mant_total[0]) @[mult.scala 35:89]
    node _mant_total2_T_6 = tail(_mant_total2_T_5, 1) @[mult.scala 35:89]
    node _mant_total2_T_7 = sub(mant_total[0], ma1) @[mult.scala 35:124]
    node _mant_total2_T_8 = tail(_mant_total2_T_7, 1) @[mult.scala 35:124]
    node _mant_total2_T_9 = mux(_mant_total2_T_4, _mant_total2_T_6, _mant_total2_T_8) @[mult.scala 35:61]
    node _mant_total2_T_10 = mux(_mant_total2_T_1, _mant_total2_T_3, _mant_total2_T_9) @[mult.scala 35:23]
    mant_total2 <= _mant_total2_T_10 @[mult.scala 35:17]
    mant_total[1] <= mant_total2 @[mult.scala 36:19]
    node _sign_final_T = gt(ma1, mant_total[0]) @[mult.scala 45:27]
    node _sign_final_T_1 = mux(_sign_final_T, sa, si) @[mult.scala 45:22]
    sign_final <= _sign_final_T_1 @[mult.scala 45:16]
    node _io_result_T = cat(sign_final, exp_output) @[mult.scala 51:27]
    node _io_result_T_1 = bits(mant_total[1], 4, 0) @[mult.scala 51:69]
    node _io_result_T_2 = cat(_io_result_T, _io_result_T_1) @[mult.scala 51:41]
    io.result <= _io_result_T_2 @[mult.scala 51:13]

