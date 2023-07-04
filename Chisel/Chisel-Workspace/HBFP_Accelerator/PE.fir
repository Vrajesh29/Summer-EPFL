circuit PE :
  module FPMult :
    input clock : Clock
    input reset : Reset
    output io : { flip in : { a : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, b : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}, out : { result : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}}

    node _io_out_result_sign_T = xor(io.in.a.sign, io.in.b.sign) @[MatMul.scala 56:38]
    io.out.result.sign <= _io_out_result_sign_T @[MatMul.scala 56:22]
    node _io_out_result_exp_T = add(io.in.a.exp, io.in.b.exp) @[MatMul.scala 57:36]
    node _io_out_result_exp_T_1 = tail(_io_out_result_exp_T, 1) @[MatMul.scala 57:36]
    io.out.result.exp <= _io_out_result_exp_T_1 @[MatMul.scala 57:21]
    node _io_out_result_man_T = mul(io.in.a.man, io.in.b.man) @[MatMul.scala 58:36]
    io.out.result.man <= _io_out_result_man_T @[MatMul.scala 58:21]

  module FPAdder :
    input clock : Clock
    input reset : Reset
    output io : { flip in : { a : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, b : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}, out : { result : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}}

    node _exp_diff_T = gt(io.in.a.exp, io.in.b.exp) @[MatMul.scala 72:34]
    node _exp_diff_T_1 = sub(io.in.a.exp, io.in.b.exp) @[MatMul.scala 72:61]
    node _exp_diff_T_2 = tail(_exp_diff_T_1, 1) @[MatMul.scala 72:61]
    node _exp_diff_T_3 = sub(io.in.b.exp, io.in.a.exp) @[MatMul.scala 72:88]
    node _exp_diff_T_4 = tail(_exp_diff_T_3, 1) @[MatMul.scala 72:88]
    node exp_diff = mux(_exp_diff_T, _exp_diff_T_2, _exp_diff_T_4) @[MatMul.scala 72:21]
    node _io_out_result_sign_T = gt(io.in.a.exp, io.in.b.exp) @[MatMul.scala 74:41]
    node _io_out_result_sign_T_1 = mux(_io_out_result_sign_T, io.in.a.sign, io.in.b.sign) @[MatMul.scala 74:28]
    io.out.result.sign <= _io_out_result_sign_T_1 @[MatMul.scala 74:22]
    node _io_out_result_exp_T = gt(io.in.a.exp, io.in.b.exp) @[MatMul.scala 75:40]
    node _io_out_result_exp_T_1 = mux(_io_out_result_exp_T, io.in.a.exp, io.in.b.exp) @[MatMul.scala 75:27]
    io.out.result.exp <= _io_out_result_exp_T_1 @[MatMul.scala 75:21]
    node _io_out_result_man_T = gt(io.in.a.exp, io.in.b.exp) @[MatMul.scala 76:40]
    node _io_out_result_man_T_1 = dshr(io.in.b.man, exp_diff) @[MatMul.scala 76:82]
    node _io_out_result_man_T_2 = add(io.in.a.man, _io_out_result_man_T_1) @[MatMul.scala 76:67]
    node _io_out_result_man_T_3 = tail(_io_out_result_man_T_2, 1) @[MatMul.scala 76:67]
    node _io_out_result_man_T_4 = dshr(io.in.a.man, exp_diff) @[MatMul.scala 76:109]
    node _io_out_result_man_T_5 = add(_io_out_result_man_T_4, io.in.b.man) @[MatMul.scala 76:122]
    node _io_out_result_man_T_6 = tail(_io_out_result_man_T_5, 1) @[MatMul.scala 76:122]
    node _io_out_result_man_T_7 = mux(_io_out_result_man_T, _io_out_result_man_T_3, _io_out_result_man_T_6) @[MatMul.scala 76:27]
    io.out.result.man <= _io_out_result_man_T_7 @[MatMul.scala 76:21]

  module PE :
    input clock : Clock
    input reset : UInt<1>
    output io : { flip in : { hor : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, ver : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}, out : { hor : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, ver : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, result : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}}

    reg result_buffer : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, clock with :
      reset => (UInt<1>("h0"), result_buffer) @[MatMul.scala 27:28]
    reg mult_buffer : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, clock with :
      reset => (UInt<1>("h0"), mult_buffer) @[MatMul.scala 28:26]
    inst fpmult of FPMult @[MatMul.scala 30:24]
    fpmult.clock <= clock
    fpmult.reset <= reset
    fpmult.io.in.a <= io.in.hor @[MatMul.scala 31:20]
    fpmult.io.in.b <= io.in.ver @[MatMul.scala 32:20]
    inst fpadder of FPAdder @[MatMul.scala 34:25]
    fpadder.clock <= clock
    fpadder.reset <= reset
    fpadder.io.in.a <= fpmult.io.out.result @[MatMul.scala 35:21]
    fpadder.io.in.b <= result_buffer @[MatMul.scala 36:21]
    result_buffer <= fpadder.io.out.result @[MatMul.scala 37:19]
    reg io_out_hor_REG : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, clock with :
      reset => (UInt<1>("h0"), io_out_hor_REG) @[MatMul.scala 39:26]
    io_out_hor_REG <= io.in.hor @[MatMul.scala 39:26]
    io.out.hor <= io_out_hor_REG @[MatMul.scala 39:16]
    reg io_out_ver_REG : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, clock with :
      reset => (UInt<1>("h0"), io_out_ver_REG) @[MatMul.scala 40:26]
    io_out_ver_REG <= io.in.ver @[MatMul.scala 40:26]
    io.out.ver <= io_out_ver_REG @[MatMul.scala 40:16]
    io.out.result <= result_buffer @[MatMul.scala 41:19]

