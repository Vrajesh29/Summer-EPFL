circuit SystolicArray :
  module FPMult :
    input clock : Clock
    input reset : Reset
    output io : { flip in : { a : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, b : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}, out : { result : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}}

    node _io_out_result_sign_T = xor(io.in.a.sign, io.in.b.sign) @[MatMul.scala 28:38]
    io.out.result.sign <= _io_out_result_sign_T @[MatMul.scala 28:22]
    node _io_out_result_exp_T = add(io.in.a.exp, io.in.b.exp) @[MatMul.scala 29:36]
    node _io_out_result_exp_T_1 = tail(_io_out_result_exp_T, 1) @[MatMul.scala 29:36]
    io.out.result.exp <= _io_out_result_exp_T_1 @[MatMul.scala 29:21]
    node _io_out_result_man_T = mul(io.in.a.man, io.in.b.man) @[MatMul.scala 30:36]
    io.out.result.man <= _io_out_result_man_T @[MatMul.scala 30:21]

  module FPAdder :
    input clock : Clock
    input reset : Reset
    output io : { flip in : { a : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, b : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}, out : { result : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}}

    node _exp_diff_T = gt(io.in.a.exp, io.in.b.exp) @[MatMul.scala 44:34]
    node _exp_diff_T_1 = sub(io.in.a.exp, io.in.b.exp) @[MatMul.scala 44:61]
    node _exp_diff_T_2 = tail(_exp_diff_T_1, 1) @[MatMul.scala 44:61]
    node _exp_diff_T_3 = sub(io.in.b.exp, io.in.a.exp) @[MatMul.scala 44:88]
    node _exp_diff_T_4 = tail(_exp_diff_T_3, 1) @[MatMul.scala 44:88]
    node exp_diff = mux(_exp_diff_T, _exp_diff_T_2, _exp_diff_T_4) @[MatMul.scala 44:21]
    node _io_out_result_sign_T = gt(io.in.a.exp, io.in.b.exp) @[MatMul.scala 46:41]
    node _io_out_result_sign_T_1 = mux(_io_out_result_sign_T, io.in.a.sign, io.in.b.sign) @[MatMul.scala 46:28]
    io.out.result.sign <= _io_out_result_sign_T_1 @[MatMul.scala 46:22]
    node _io_out_result_exp_T = gt(io.in.a.exp, io.in.b.exp) @[MatMul.scala 47:40]
    node _io_out_result_exp_T_1 = mux(_io_out_result_exp_T, io.in.a.exp, io.in.b.exp) @[MatMul.scala 47:27]
    io.out.result.exp <= _io_out_result_exp_T_1 @[MatMul.scala 47:21]
    node _io_out_result_man_T = gt(io.in.a.exp, io.in.b.exp) @[MatMul.scala 48:40]
    node _io_out_result_man_T_1 = dshr(io.in.b.man, exp_diff) @[MatMul.scala 48:82]
    node _io_out_result_man_T_2 = add(io.in.a.man, _io_out_result_man_T_1) @[MatMul.scala 48:67]
    node _io_out_result_man_T_3 = tail(_io_out_result_man_T_2, 1) @[MatMul.scala 48:67]
    node _io_out_result_man_T_4 = dshr(io.in.a.man, exp_diff) @[MatMul.scala 48:109]
    node _io_out_result_man_T_5 = add(_io_out_result_man_T_4, io.in.b.man) @[MatMul.scala 48:122]
    node _io_out_result_man_T_6 = tail(_io_out_result_man_T_5, 1) @[MatMul.scala 48:122]
    node _io_out_result_man_T_7 = mux(_io_out_result_man_T, _io_out_result_man_T_3, _io_out_result_man_T_6) @[MatMul.scala 48:27]
    io.out.result.man <= _io_out_result_man_T_7 @[MatMul.scala 48:21]

  module PE :
    input clock : Clock
    input reset : Reset
    output io : { flip in : { hor : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, ver : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}, out : { hor : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, ver : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, result : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}}

    reg result_buffer : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, clock with :
      reset => (UInt<1>("h0"), result_buffer) @[MatMul.scala 67:28]
    reg mult_buffer : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, clock with :
      reset => (UInt<1>("h0"), mult_buffer) @[MatMul.scala 68:26]
    inst fpmult of FPMult @[MatMul.scala 70:24]
    fpmult.clock <= clock
    fpmult.reset <= reset
    fpmult.io.in.a <= io.in.hor @[MatMul.scala 71:20]
    fpmult.io.in.b <= io.in.ver @[MatMul.scala 72:20]
    inst fpadder of FPAdder @[MatMul.scala 74:25]
    fpadder.clock <= clock
    fpadder.reset <= reset
    fpadder.io.in.a <= fpmult.io.out.result @[MatMul.scala 75:21]
    fpadder.io.in.b <= result_buffer @[MatMul.scala 76:21]
    result_buffer <= fpadder.io.out.result @[MatMul.scala 77:19]
    reg io_out_hor_REG : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, clock with :
      reset => (UInt<1>("h0"), io_out_hor_REG) @[MatMul.scala 79:26]
    io_out_hor_REG <= io.in.hor @[MatMul.scala 79:26]
    io.out.hor <= io_out_hor_REG @[MatMul.scala 79:16]
    reg io_out_ver_REG : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, clock with :
      reset => (UInt<1>("h0"), io_out_ver_REG) @[MatMul.scala 80:26]
    io_out_ver_REG <= io.in.ver @[MatMul.scala 80:26]
    io.out.ver <= io_out_ver_REG @[MatMul.scala 80:16]
    io.out.result <= result_buffer @[MatMul.scala 81:19]

  module FPMult_1 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : { a : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, b : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}, out : { result : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}}

    node _io_out_result_sign_T = xor(io.in.a.sign, io.in.b.sign) @[MatMul.scala 28:38]
    io.out.result.sign <= _io_out_result_sign_T @[MatMul.scala 28:22]
    node _io_out_result_exp_T = add(io.in.a.exp, io.in.b.exp) @[MatMul.scala 29:36]
    node _io_out_result_exp_T_1 = tail(_io_out_result_exp_T, 1) @[MatMul.scala 29:36]
    io.out.result.exp <= _io_out_result_exp_T_1 @[MatMul.scala 29:21]
    node _io_out_result_man_T = mul(io.in.a.man, io.in.b.man) @[MatMul.scala 30:36]
    io.out.result.man <= _io_out_result_man_T @[MatMul.scala 30:21]

  module FPAdder_1 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : { a : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, b : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}, out : { result : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}}

    node _exp_diff_T = gt(io.in.a.exp, io.in.b.exp) @[MatMul.scala 44:34]
    node _exp_diff_T_1 = sub(io.in.a.exp, io.in.b.exp) @[MatMul.scala 44:61]
    node _exp_diff_T_2 = tail(_exp_diff_T_1, 1) @[MatMul.scala 44:61]
    node _exp_diff_T_3 = sub(io.in.b.exp, io.in.a.exp) @[MatMul.scala 44:88]
    node _exp_diff_T_4 = tail(_exp_diff_T_3, 1) @[MatMul.scala 44:88]
    node exp_diff = mux(_exp_diff_T, _exp_diff_T_2, _exp_diff_T_4) @[MatMul.scala 44:21]
    node _io_out_result_sign_T = gt(io.in.a.exp, io.in.b.exp) @[MatMul.scala 46:41]
    node _io_out_result_sign_T_1 = mux(_io_out_result_sign_T, io.in.a.sign, io.in.b.sign) @[MatMul.scala 46:28]
    io.out.result.sign <= _io_out_result_sign_T_1 @[MatMul.scala 46:22]
    node _io_out_result_exp_T = gt(io.in.a.exp, io.in.b.exp) @[MatMul.scala 47:40]
    node _io_out_result_exp_T_1 = mux(_io_out_result_exp_T, io.in.a.exp, io.in.b.exp) @[MatMul.scala 47:27]
    io.out.result.exp <= _io_out_result_exp_T_1 @[MatMul.scala 47:21]
    node _io_out_result_man_T = gt(io.in.a.exp, io.in.b.exp) @[MatMul.scala 48:40]
    node _io_out_result_man_T_1 = dshr(io.in.b.man, exp_diff) @[MatMul.scala 48:82]
    node _io_out_result_man_T_2 = add(io.in.a.man, _io_out_result_man_T_1) @[MatMul.scala 48:67]
    node _io_out_result_man_T_3 = tail(_io_out_result_man_T_2, 1) @[MatMul.scala 48:67]
    node _io_out_result_man_T_4 = dshr(io.in.a.man, exp_diff) @[MatMul.scala 48:109]
    node _io_out_result_man_T_5 = add(_io_out_result_man_T_4, io.in.b.man) @[MatMul.scala 48:122]
    node _io_out_result_man_T_6 = tail(_io_out_result_man_T_5, 1) @[MatMul.scala 48:122]
    node _io_out_result_man_T_7 = mux(_io_out_result_man_T, _io_out_result_man_T_3, _io_out_result_man_T_6) @[MatMul.scala 48:27]
    io.out.result.man <= _io_out_result_man_T_7 @[MatMul.scala 48:21]

  module PE_1 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : { hor : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, ver : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}, out : { hor : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, ver : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, result : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}}

    reg result_buffer : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, clock with :
      reset => (UInt<1>("h0"), result_buffer) @[MatMul.scala 67:28]
    reg mult_buffer : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, clock with :
      reset => (UInt<1>("h0"), mult_buffer) @[MatMul.scala 68:26]
    inst fpmult of FPMult_1 @[MatMul.scala 70:24]
    fpmult.clock <= clock
    fpmult.reset <= reset
    fpmult.io.in.a <= io.in.hor @[MatMul.scala 71:20]
    fpmult.io.in.b <= io.in.ver @[MatMul.scala 72:20]
    inst fpadder of FPAdder_1 @[MatMul.scala 74:25]
    fpadder.clock <= clock
    fpadder.reset <= reset
    fpadder.io.in.a <= fpmult.io.out.result @[MatMul.scala 75:21]
    fpadder.io.in.b <= result_buffer @[MatMul.scala 76:21]
    result_buffer <= fpadder.io.out.result @[MatMul.scala 77:19]
    reg io_out_hor_REG : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, clock with :
      reset => (UInt<1>("h0"), io_out_hor_REG) @[MatMul.scala 79:26]
    io_out_hor_REG <= io.in.hor @[MatMul.scala 79:26]
    io.out.hor <= io_out_hor_REG @[MatMul.scala 79:16]
    reg io_out_ver_REG : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, clock with :
      reset => (UInt<1>("h0"), io_out_ver_REG) @[MatMul.scala 80:26]
    io_out_ver_REG <= io.in.ver @[MatMul.scala 80:26]
    io.out.ver <= io_out_ver_REG @[MatMul.scala 80:16]
    io.out.result <= result_buffer @[MatMul.scala 81:19]

  module FPMult_2 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : { a : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, b : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}, out : { result : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}}

    node _io_out_result_sign_T = xor(io.in.a.sign, io.in.b.sign) @[MatMul.scala 28:38]
    io.out.result.sign <= _io_out_result_sign_T @[MatMul.scala 28:22]
    node _io_out_result_exp_T = add(io.in.a.exp, io.in.b.exp) @[MatMul.scala 29:36]
    node _io_out_result_exp_T_1 = tail(_io_out_result_exp_T, 1) @[MatMul.scala 29:36]
    io.out.result.exp <= _io_out_result_exp_T_1 @[MatMul.scala 29:21]
    node _io_out_result_man_T = mul(io.in.a.man, io.in.b.man) @[MatMul.scala 30:36]
    io.out.result.man <= _io_out_result_man_T @[MatMul.scala 30:21]

  module FPAdder_2 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : { a : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, b : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}, out : { result : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}}

    node _exp_diff_T = gt(io.in.a.exp, io.in.b.exp) @[MatMul.scala 44:34]
    node _exp_diff_T_1 = sub(io.in.a.exp, io.in.b.exp) @[MatMul.scala 44:61]
    node _exp_diff_T_2 = tail(_exp_diff_T_1, 1) @[MatMul.scala 44:61]
    node _exp_diff_T_3 = sub(io.in.b.exp, io.in.a.exp) @[MatMul.scala 44:88]
    node _exp_diff_T_4 = tail(_exp_diff_T_3, 1) @[MatMul.scala 44:88]
    node exp_diff = mux(_exp_diff_T, _exp_diff_T_2, _exp_diff_T_4) @[MatMul.scala 44:21]
    node _io_out_result_sign_T = gt(io.in.a.exp, io.in.b.exp) @[MatMul.scala 46:41]
    node _io_out_result_sign_T_1 = mux(_io_out_result_sign_T, io.in.a.sign, io.in.b.sign) @[MatMul.scala 46:28]
    io.out.result.sign <= _io_out_result_sign_T_1 @[MatMul.scala 46:22]
    node _io_out_result_exp_T = gt(io.in.a.exp, io.in.b.exp) @[MatMul.scala 47:40]
    node _io_out_result_exp_T_1 = mux(_io_out_result_exp_T, io.in.a.exp, io.in.b.exp) @[MatMul.scala 47:27]
    io.out.result.exp <= _io_out_result_exp_T_1 @[MatMul.scala 47:21]
    node _io_out_result_man_T = gt(io.in.a.exp, io.in.b.exp) @[MatMul.scala 48:40]
    node _io_out_result_man_T_1 = dshr(io.in.b.man, exp_diff) @[MatMul.scala 48:82]
    node _io_out_result_man_T_2 = add(io.in.a.man, _io_out_result_man_T_1) @[MatMul.scala 48:67]
    node _io_out_result_man_T_3 = tail(_io_out_result_man_T_2, 1) @[MatMul.scala 48:67]
    node _io_out_result_man_T_4 = dshr(io.in.a.man, exp_diff) @[MatMul.scala 48:109]
    node _io_out_result_man_T_5 = add(_io_out_result_man_T_4, io.in.b.man) @[MatMul.scala 48:122]
    node _io_out_result_man_T_6 = tail(_io_out_result_man_T_5, 1) @[MatMul.scala 48:122]
    node _io_out_result_man_T_7 = mux(_io_out_result_man_T, _io_out_result_man_T_3, _io_out_result_man_T_6) @[MatMul.scala 48:27]
    io.out.result.man <= _io_out_result_man_T_7 @[MatMul.scala 48:21]

  module PE_2 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : { hor : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, ver : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}, out : { hor : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, ver : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, result : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}}

    reg result_buffer : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, clock with :
      reset => (UInt<1>("h0"), result_buffer) @[MatMul.scala 67:28]
    reg mult_buffer : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, clock with :
      reset => (UInt<1>("h0"), mult_buffer) @[MatMul.scala 68:26]
    inst fpmult of FPMult_2 @[MatMul.scala 70:24]
    fpmult.clock <= clock
    fpmult.reset <= reset
    fpmult.io.in.a <= io.in.hor @[MatMul.scala 71:20]
    fpmult.io.in.b <= io.in.ver @[MatMul.scala 72:20]
    inst fpadder of FPAdder_2 @[MatMul.scala 74:25]
    fpadder.clock <= clock
    fpadder.reset <= reset
    fpadder.io.in.a <= fpmult.io.out.result @[MatMul.scala 75:21]
    fpadder.io.in.b <= result_buffer @[MatMul.scala 76:21]
    result_buffer <= fpadder.io.out.result @[MatMul.scala 77:19]
    reg io_out_hor_REG : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, clock with :
      reset => (UInt<1>("h0"), io_out_hor_REG) @[MatMul.scala 79:26]
    io_out_hor_REG <= io.in.hor @[MatMul.scala 79:26]
    io.out.hor <= io_out_hor_REG @[MatMul.scala 79:16]
    reg io_out_ver_REG : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, clock with :
      reset => (UInt<1>("h0"), io_out_ver_REG) @[MatMul.scala 80:26]
    io_out_ver_REG <= io.in.ver @[MatMul.scala 80:26]
    io.out.ver <= io_out_ver_REG @[MatMul.scala 80:16]
    io.out.result <= result_buffer @[MatMul.scala 81:19]

  module FPMult_3 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : { a : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, b : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}, out : { result : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}}

    node _io_out_result_sign_T = xor(io.in.a.sign, io.in.b.sign) @[MatMul.scala 28:38]
    io.out.result.sign <= _io_out_result_sign_T @[MatMul.scala 28:22]
    node _io_out_result_exp_T = add(io.in.a.exp, io.in.b.exp) @[MatMul.scala 29:36]
    node _io_out_result_exp_T_1 = tail(_io_out_result_exp_T, 1) @[MatMul.scala 29:36]
    io.out.result.exp <= _io_out_result_exp_T_1 @[MatMul.scala 29:21]
    node _io_out_result_man_T = mul(io.in.a.man, io.in.b.man) @[MatMul.scala 30:36]
    io.out.result.man <= _io_out_result_man_T @[MatMul.scala 30:21]

  module FPAdder_3 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : { a : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, b : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}, out : { result : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}}

    node _exp_diff_T = gt(io.in.a.exp, io.in.b.exp) @[MatMul.scala 44:34]
    node _exp_diff_T_1 = sub(io.in.a.exp, io.in.b.exp) @[MatMul.scala 44:61]
    node _exp_diff_T_2 = tail(_exp_diff_T_1, 1) @[MatMul.scala 44:61]
    node _exp_diff_T_3 = sub(io.in.b.exp, io.in.a.exp) @[MatMul.scala 44:88]
    node _exp_diff_T_4 = tail(_exp_diff_T_3, 1) @[MatMul.scala 44:88]
    node exp_diff = mux(_exp_diff_T, _exp_diff_T_2, _exp_diff_T_4) @[MatMul.scala 44:21]
    node _io_out_result_sign_T = gt(io.in.a.exp, io.in.b.exp) @[MatMul.scala 46:41]
    node _io_out_result_sign_T_1 = mux(_io_out_result_sign_T, io.in.a.sign, io.in.b.sign) @[MatMul.scala 46:28]
    io.out.result.sign <= _io_out_result_sign_T_1 @[MatMul.scala 46:22]
    node _io_out_result_exp_T = gt(io.in.a.exp, io.in.b.exp) @[MatMul.scala 47:40]
    node _io_out_result_exp_T_1 = mux(_io_out_result_exp_T, io.in.a.exp, io.in.b.exp) @[MatMul.scala 47:27]
    io.out.result.exp <= _io_out_result_exp_T_1 @[MatMul.scala 47:21]
    node _io_out_result_man_T = gt(io.in.a.exp, io.in.b.exp) @[MatMul.scala 48:40]
    node _io_out_result_man_T_1 = dshr(io.in.b.man, exp_diff) @[MatMul.scala 48:82]
    node _io_out_result_man_T_2 = add(io.in.a.man, _io_out_result_man_T_1) @[MatMul.scala 48:67]
    node _io_out_result_man_T_3 = tail(_io_out_result_man_T_2, 1) @[MatMul.scala 48:67]
    node _io_out_result_man_T_4 = dshr(io.in.a.man, exp_diff) @[MatMul.scala 48:109]
    node _io_out_result_man_T_5 = add(_io_out_result_man_T_4, io.in.b.man) @[MatMul.scala 48:122]
    node _io_out_result_man_T_6 = tail(_io_out_result_man_T_5, 1) @[MatMul.scala 48:122]
    node _io_out_result_man_T_7 = mux(_io_out_result_man_T, _io_out_result_man_T_3, _io_out_result_man_T_6) @[MatMul.scala 48:27]
    io.out.result.man <= _io_out_result_man_T_7 @[MatMul.scala 48:21]

  module PE_3 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : { hor : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, ver : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}, out : { hor : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, ver : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, result : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}}

    reg result_buffer : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, clock with :
      reset => (UInt<1>("h0"), result_buffer) @[MatMul.scala 67:28]
    reg mult_buffer : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, clock with :
      reset => (UInt<1>("h0"), mult_buffer) @[MatMul.scala 68:26]
    inst fpmult of FPMult_3 @[MatMul.scala 70:24]
    fpmult.clock <= clock
    fpmult.reset <= reset
    fpmult.io.in.a <= io.in.hor @[MatMul.scala 71:20]
    fpmult.io.in.b <= io.in.ver @[MatMul.scala 72:20]
    inst fpadder of FPAdder_3 @[MatMul.scala 74:25]
    fpadder.clock <= clock
    fpadder.reset <= reset
    fpadder.io.in.a <= fpmult.io.out.result @[MatMul.scala 75:21]
    fpadder.io.in.b <= result_buffer @[MatMul.scala 76:21]
    result_buffer <= fpadder.io.out.result @[MatMul.scala 77:19]
    reg io_out_hor_REG : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, clock with :
      reset => (UInt<1>("h0"), io_out_hor_REG) @[MatMul.scala 79:26]
    io_out_hor_REG <= io.in.hor @[MatMul.scala 79:26]
    io.out.hor <= io_out_hor_REG @[MatMul.scala 79:16]
    reg io_out_ver_REG : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, clock with :
      reset => (UInt<1>("h0"), io_out_ver_REG) @[MatMul.scala 80:26]
    io_out_ver_REG <= io.in.ver @[MatMul.scala 80:26]
    io.out.ver <= io_out_ver_REG @[MatMul.scala 80:16]
    io.out.result <= result_buffer @[MatMul.scala 81:19]

  module FPMult_4 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : { a : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, b : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}, out : { result : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}}

    node _io_out_result_sign_T = xor(io.in.a.sign, io.in.b.sign) @[MatMul.scala 28:38]
    io.out.result.sign <= _io_out_result_sign_T @[MatMul.scala 28:22]
    node _io_out_result_exp_T = add(io.in.a.exp, io.in.b.exp) @[MatMul.scala 29:36]
    node _io_out_result_exp_T_1 = tail(_io_out_result_exp_T, 1) @[MatMul.scala 29:36]
    io.out.result.exp <= _io_out_result_exp_T_1 @[MatMul.scala 29:21]
    node _io_out_result_man_T = mul(io.in.a.man, io.in.b.man) @[MatMul.scala 30:36]
    io.out.result.man <= _io_out_result_man_T @[MatMul.scala 30:21]

  module FPAdder_4 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : { a : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, b : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}, out : { result : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}}

    node _exp_diff_T = gt(io.in.a.exp, io.in.b.exp) @[MatMul.scala 44:34]
    node _exp_diff_T_1 = sub(io.in.a.exp, io.in.b.exp) @[MatMul.scala 44:61]
    node _exp_diff_T_2 = tail(_exp_diff_T_1, 1) @[MatMul.scala 44:61]
    node _exp_diff_T_3 = sub(io.in.b.exp, io.in.a.exp) @[MatMul.scala 44:88]
    node _exp_diff_T_4 = tail(_exp_diff_T_3, 1) @[MatMul.scala 44:88]
    node exp_diff = mux(_exp_diff_T, _exp_diff_T_2, _exp_diff_T_4) @[MatMul.scala 44:21]
    node _io_out_result_sign_T = gt(io.in.a.exp, io.in.b.exp) @[MatMul.scala 46:41]
    node _io_out_result_sign_T_1 = mux(_io_out_result_sign_T, io.in.a.sign, io.in.b.sign) @[MatMul.scala 46:28]
    io.out.result.sign <= _io_out_result_sign_T_1 @[MatMul.scala 46:22]
    node _io_out_result_exp_T = gt(io.in.a.exp, io.in.b.exp) @[MatMul.scala 47:40]
    node _io_out_result_exp_T_1 = mux(_io_out_result_exp_T, io.in.a.exp, io.in.b.exp) @[MatMul.scala 47:27]
    io.out.result.exp <= _io_out_result_exp_T_1 @[MatMul.scala 47:21]
    node _io_out_result_man_T = gt(io.in.a.exp, io.in.b.exp) @[MatMul.scala 48:40]
    node _io_out_result_man_T_1 = dshr(io.in.b.man, exp_diff) @[MatMul.scala 48:82]
    node _io_out_result_man_T_2 = add(io.in.a.man, _io_out_result_man_T_1) @[MatMul.scala 48:67]
    node _io_out_result_man_T_3 = tail(_io_out_result_man_T_2, 1) @[MatMul.scala 48:67]
    node _io_out_result_man_T_4 = dshr(io.in.a.man, exp_diff) @[MatMul.scala 48:109]
    node _io_out_result_man_T_5 = add(_io_out_result_man_T_4, io.in.b.man) @[MatMul.scala 48:122]
    node _io_out_result_man_T_6 = tail(_io_out_result_man_T_5, 1) @[MatMul.scala 48:122]
    node _io_out_result_man_T_7 = mux(_io_out_result_man_T, _io_out_result_man_T_3, _io_out_result_man_T_6) @[MatMul.scala 48:27]
    io.out.result.man <= _io_out_result_man_T_7 @[MatMul.scala 48:21]

  module PE_4 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : { hor : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, ver : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}, out : { hor : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, ver : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, result : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}}

    reg result_buffer : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, clock with :
      reset => (UInt<1>("h0"), result_buffer) @[MatMul.scala 67:28]
    reg mult_buffer : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, clock with :
      reset => (UInt<1>("h0"), mult_buffer) @[MatMul.scala 68:26]
    inst fpmult of FPMult_4 @[MatMul.scala 70:24]
    fpmult.clock <= clock
    fpmult.reset <= reset
    fpmult.io.in.a <= io.in.hor @[MatMul.scala 71:20]
    fpmult.io.in.b <= io.in.ver @[MatMul.scala 72:20]
    inst fpadder of FPAdder_4 @[MatMul.scala 74:25]
    fpadder.clock <= clock
    fpadder.reset <= reset
    fpadder.io.in.a <= fpmult.io.out.result @[MatMul.scala 75:21]
    fpadder.io.in.b <= result_buffer @[MatMul.scala 76:21]
    result_buffer <= fpadder.io.out.result @[MatMul.scala 77:19]
    reg io_out_hor_REG : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, clock with :
      reset => (UInt<1>("h0"), io_out_hor_REG) @[MatMul.scala 79:26]
    io_out_hor_REG <= io.in.hor @[MatMul.scala 79:26]
    io.out.hor <= io_out_hor_REG @[MatMul.scala 79:16]
    reg io_out_ver_REG : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, clock with :
      reset => (UInt<1>("h0"), io_out_ver_REG) @[MatMul.scala 80:26]
    io_out_ver_REG <= io.in.ver @[MatMul.scala 80:26]
    io.out.ver <= io_out_ver_REG @[MatMul.scala 80:16]
    io.out.result <= result_buffer @[MatMul.scala 81:19]

  module FPMult_5 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : { a : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, b : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}, out : { result : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}}

    node _io_out_result_sign_T = xor(io.in.a.sign, io.in.b.sign) @[MatMul.scala 28:38]
    io.out.result.sign <= _io_out_result_sign_T @[MatMul.scala 28:22]
    node _io_out_result_exp_T = add(io.in.a.exp, io.in.b.exp) @[MatMul.scala 29:36]
    node _io_out_result_exp_T_1 = tail(_io_out_result_exp_T, 1) @[MatMul.scala 29:36]
    io.out.result.exp <= _io_out_result_exp_T_1 @[MatMul.scala 29:21]
    node _io_out_result_man_T = mul(io.in.a.man, io.in.b.man) @[MatMul.scala 30:36]
    io.out.result.man <= _io_out_result_man_T @[MatMul.scala 30:21]

  module FPAdder_5 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : { a : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, b : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}, out : { result : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}}

    node _exp_diff_T = gt(io.in.a.exp, io.in.b.exp) @[MatMul.scala 44:34]
    node _exp_diff_T_1 = sub(io.in.a.exp, io.in.b.exp) @[MatMul.scala 44:61]
    node _exp_diff_T_2 = tail(_exp_diff_T_1, 1) @[MatMul.scala 44:61]
    node _exp_diff_T_3 = sub(io.in.b.exp, io.in.a.exp) @[MatMul.scala 44:88]
    node _exp_diff_T_4 = tail(_exp_diff_T_3, 1) @[MatMul.scala 44:88]
    node exp_diff = mux(_exp_diff_T, _exp_diff_T_2, _exp_diff_T_4) @[MatMul.scala 44:21]
    node _io_out_result_sign_T = gt(io.in.a.exp, io.in.b.exp) @[MatMul.scala 46:41]
    node _io_out_result_sign_T_1 = mux(_io_out_result_sign_T, io.in.a.sign, io.in.b.sign) @[MatMul.scala 46:28]
    io.out.result.sign <= _io_out_result_sign_T_1 @[MatMul.scala 46:22]
    node _io_out_result_exp_T = gt(io.in.a.exp, io.in.b.exp) @[MatMul.scala 47:40]
    node _io_out_result_exp_T_1 = mux(_io_out_result_exp_T, io.in.a.exp, io.in.b.exp) @[MatMul.scala 47:27]
    io.out.result.exp <= _io_out_result_exp_T_1 @[MatMul.scala 47:21]
    node _io_out_result_man_T = gt(io.in.a.exp, io.in.b.exp) @[MatMul.scala 48:40]
    node _io_out_result_man_T_1 = dshr(io.in.b.man, exp_diff) @[MatMul.scala 48:82]
    node _io_out_result_man_T_2 = add(io.in.a.man, _io_out_result_man_T_1) @[MatMul.scala 48:67]
    node _io_out_result_man_T_3 = tail(_io_out_result_man_T_2, 1) @[MatMul.scala 48:67]
    node _io_out_result_man_T_4 = dshr(io.in.a.man, exp_diff) @[MatMul.scala 48:109]
    node _io_out_result_man_T_5 = add(_io_out_result_man_T_4, io.in.b.man) @[MatMul.scala 48:122]
    node _io_out_result_man_T_6 = tail(_io_out_result_man_T_5, 1) @[MatMul.scala 48:122]
    node _io_out_result_man_T_7 = mux(_io_out_result_man_T, _io_out_result_man_T_3, _io_out_result_man_T_6) @[MatMul.scala 48:27]
    io.out.result.man <= _io_out_result_man_T_7 @[MatMul.scala 48:21]

  module PE_5 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : { hor : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, ver : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}, out : { hor : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, ver : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, result : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}}

    reg result_buffer : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, clock with :
      reset => (UInt<1>("h0"), result_buffer) @[MatMul.scala 67:28]
    reg mult_buffer : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, clock with :
      reset => (UInt<1>("h0"), mult_buffer) @[MatMul.scala 68:26]
    inst fpmult of FPMult_5 @[MatMul.scala 70:24]
    fpmult.clock <= clock
    fpmult.reset <= reset
    fpmult.io.in.a <= io.in.hor @[MatMul.scala 71:20]
    fpmult.io.in.b <= io.in.ver @[MatMul.scala 72:20]
    inst fpadder of FPAdder_5 @[MatMul.scala 74:25]
    fpadder.clock <= clock
    fpadder.reset <= reset
    fpadder.io.in.a <= fpmult.io.out.result @[MatMul.scala 75:21]
    fpadder.io.in.b <= result_buffer @[MatMul.scala 76:21]
    result_buffer <= fpadder.io.out.result @[MatMul.scala 77:19]
    reg io_out_hor_REG : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, clock with :
      reset => (UInt<1>("h0"), io_out_hor_REG) @[MatMul.scala 79:26]
    io_out_hor_REG <= io.in.hor @[MatMul.scala 79:26]
    io.out.hor <= io_out_hor_REG @[MatMul.scala 79:16]
    reg io_out_ver_REG : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, clock with :
      reset => (UInt<1>("h0"), io_out_ver_REG) @[MatMul.scala 80:26]
    io_out_ver_REG <= io.in.ver @[MatMul.scala 80:26]
    io.out.ver <= io_out_ver_REG @[MatMul.scala 80:16]
    io.out.result <= result_buffer @[MatMul.scala 81:19]

  module FPMult_6 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : { a : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, b : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}, out : { result : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}}

    node _io_out_result_sign_T = xor(io.in.a.sign, io.in.b.sign) @[MatMul.scala 28:38]
    io.out.result.sign <= _io_out_result_sign_T @[MatMul.scala 28:22]
    node _io_out_result_exp_T = add(io.in.a.exp, io.in.b.exp) @[MatMul.scala 29:36]
    node _io_out_result_exp_T_1 = tail(_io_out_result_exp_T, 1) @[MatMul.scala 29:36]
    io.out.result.exp <= _io_out_result_exp_T_1 @[MatMul.scala 29:21]
    node _io_out_result_man_T = mul(io.in.a.man, io.in.b.man) @[MatMul.scala 30:36]
    io.out.result.man <= _io_out_result_man_T @[MatMul.scala 30:21]

  module FPAdder_6 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : { a : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, b : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}, out : { result : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}}

    node _exp_diff_T = gt(io.in.a.exp, io.in.b.exp) @[MatMul.scala 44:34]
    node _exp_diff_T_1 = sub(io.in.a.exp, io.in.b.exp) @[MatMul.scala 44:61]
    node _exp_diff_T_2 = tail(_exp_diff_T_1, 1) @[MatMul.scala 44:61]
    node _exp_diff_T_3 = sub(io.in.b.exp, io.in.a.exp) @[MatMul.scala 44:88]
    node _exp_diff_T_4 = tail(_exp_diff_T_3, 1) @[MatMul.scala 44:88]
    node exp_diff = mux(_exp_diff_T, _exp_diff_T_2, _exp_diff_T_4) @[MatMul.scala 44:21]
    node _io_out_result_sign_T = gt(io.in.a.exp, io.in.b.exp) @[MatMul.scala 46:41]
    node _io_out_result_sign_T_1 = mux(_io_out_result_sign_T, io.in.a.sign, io.in.b.sign) @[MatMul.scala 46:28]
    io.out.result.sign <= _io_out_result_sign_T_1 @[MatMul.scala 46:22]
    node _io_out_result_exp_T = gt(io.in.a.exp, io.in.b.exp) @[MatMul.scala 47:40]
    node _io_out_result_exp_T_1 = mux(_io_out_result_exp_T, io.in.a.exp, io.in.b.exp) @[MatMul.scala 47:27]
    io.out.result.exp <= _io_out_result_exp_T_1 @[MatMul.scala 47:21]
    node _io_out_result_man_T = gt(io.in.a.exp, io.in.b.exp) @[MatMul.scala 48:40]
    node _io_out_result_man_T_1 = dshr(io.in.b.man, exp_diff) @[MatMul.scala 48:82]
    node _io_out_result_man_T_2 = add(io.in.a.man, _io_out_result_man_T_1) @[MatMul.scala 48:67]
    node _io_out_result_man_T_3 = tail(_io_out_result_man_T_2, 1) @[MatMul.scala 48:67]
    node _io_out_result_man_T_4 = dshr(io.in.a.man, exp_diff) @[MatMul.scala 48:109]
    node _io_out_result_man_T_5 = add(_io_out_result_man_T_4, io.in.b.man) @[MatMul.scala 48:122]
    node _io_out_result_man_T_6 = tail(_io_out_result_man_T_5, 1) @[MatMul.scala 48:122]
    node _io_out_result_man_T_7 = mux(_io_out_result_man_T, _io_out_result_man_T_3, _io_out_result_man_T_6) @[MatMul.scala 48:27]
    io.out.result.man <= _io_out_result_man_T_7 @[MatMul.scala 48:21]

  module PE_6 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : { hor : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, ver : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}, out : { hor : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, ver : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, result : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}}

    reg result_buffer : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, clock with :
      reset => (UInt<1>("h0"), result_buffer) @[MatMul.scala 67:28]
    reg mult_buffer : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, clock with :
      reset => (UInt<1>("h0"), mult_buffer) @[MatMul.scala 68:26]
    inst fpmult of FPMult_6 @[MatMul.scala 70:24]
    fpmult.clock <= clock
    fpmult.reset <= reset
    fpmult.io.in.a <= io.in.hor @[MatMul.scala 71:20]
    fpmult.io.in.b <= io.in.ver @[MatMul.scala 72:20]
    inst fpadder of FPAdder_6 @[MatMul.scala 74:25]
    fpadder.clock <= clock
    fpadder.reset <= reset
    fpadder.io.in.a <= fpmult.io.out.result @[MatMul.scala 75:21]
    fpadder.io.in.b <= result_buffer @[MatMul.scala 76:21]
    result_buffer <= fpadder.io.out.result @[MatMul.scala 77:19]
    reg io_out_hor_REG : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, clock with :
      reset => (UInt<1>("h0"), io_out_hor_REG) @[MatMul.scala 79:26]
    io_out_hor_REG <= io.in.hor @[MatMul.scala 79:26]
    io.out.hor <= io_out_hor_REG @[MatMul.scala 79:16]
    reg io_out_ver_REG : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, clock with :
      reset => (UInt<1>("h0"), io_out_ver_REG) @[MatMul.scala 80:26]
    io_out_ver_REG <= io.in.ver @[MatMul.scala 80:26]
    io.out.ver <= io_out_ver_REG @[MatMul.scala 80:16]
    io.out.result <= result_buffer @[MatMul.scala 81:19]

  module FPMult_7 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : { a : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, b : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}, out : { result : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}}

    node _io_out_result_sign_T = xor(io.in.a.sign, io.in.b.sign) @[MatMul.scala 28:38]
    io.out.result.sign <= _io_out_result_sign_T @[MatMul.scala 28:22]
    node _io_out_result_exp_T = add(io.in.a.exp, io.in.b.exp) @[MatMul.scala 29:36]
    node _io_out_result_exp_T_1 = tail(_io_out_result_exp_T, 1) @[MatMul.scala 29:36]
    io.out.result.exp <= _io_out_result_exp_T_1 @[MatMul.scala 29:21]
    node _io_out_result_man_T = mul(io.in.a.man, io.in.b.man) @[MatMul.scala 30:36]
    io.out.result.man <= _io_out_result_man_T @[MatMul.scala 30:21]

  module FPAdder_7 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : { a : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, b : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}, out : { result : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}}

    node _exp_diff_T = gt(io.in.a.exp, io.in.b.exp) @[MatMul.scala 44:34]
    node _exp_diff_T_1 = sub(io.in.a.exp, io.in.b.exp) @[MatMul.scala 44:61]
    node _exp_diff_T_2 = tail(_exp_diff_T_1, 1) @[MatMul.scala 44:61]
    node _exp_diff_T_3 = sub(io.in.b.exp, io.in.a.exp) @[MatMul.scala 44:88]
    node _exp_diff_T_4 = tail(_exp_diff_T_3, 1) @[MatMul.scala 44:88]
    node exp_diff = mux(_exp_diff_T, _exp_diff_T_2, _exp_diff_T_4) @[MatMul.scala 44:21]
    node _io_out_result_sign_T = gt(io.in.a.exp, io.in.b.exp) @[MatMul.scala 46:41]
    node _io_out_result_sign_T_1 = mux(_io_out_result_sign_T, io.in.a.sign, io.in.b.sign) @[MatMul.scala 46:28]
    io.out.result.sign <= _io_out_result_sign_T_1 @[MatMul.scala 46:22]
    node _io_out_result_exp_T = gt(io.in.a.exp, io.in.b.exp) @[MatMul.scala 47:40]
    node _io_out_result_exp_T_1 = mux(_io_out_result_exp_T, io.in.a.exp, io.in.b.exp) @[MatMul.scala 47:27]
    io.out.result.exp <= _io_out_result_exp_T_1 @[MatMul.scala 47:21]
    node _io_out_result_man_T = gt(io.in.a.exp, io.in.b.exp) @[MatMul.scala 48:40]
    node _io_out_result_man_T_1 = dshr(io.in.b.man, exp_diff) @[MatMul.scala 48:82]
    node _io_out_result_man_T_2 = add(io.in.a.man, _io_out_result_man_T_1) @[MatMul.scala 48:67]
    node _io_out_result_man_T_3 = tail(_io_out_result_man_T_2, 1) @[MatMul.scala 48:67]
    node _io_out_result_man_T_4 = dshr(io.in.a.man, exp_diff) @[MatMul.scala 48:109]
    node _io_out_result_man_T_5 = add(_io_out_result_man_T_4, io.in.b.man) @[MatMul.scala 48:122]
    node _io_out_result_man_T_6 = tail(_io_out_result_man_T_5, 1) @[MatMul.scala 48:122]
    node _io_out_result_man_T_7 = mux(_io_out_result_man_T, _io_out_result_man_T_3, _io_out_result_man_T_6) @[MatMul.scala 48:27]
    io.out.result.man <= _io_out_result_man_T_7 @[MatMul.scala 48:21]

  module PE_7 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : { hor : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, ver : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}, out : { hor : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, ver : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, result : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}}

    reg result_buffer : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, clock with :
      reset => (UInt<1>("h0"), result_buffer) @[MatMul.scala 67:28]
    reg mult_buffer : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, clock with :
      reset => (UInt<1>("h0"), mult_buffer) @[MatMul.scala 68:26]
    inst fpmult of FPMult_7 @[MatMul.scala 70:24]
    fpmult.clock <= clock
    fpmult.reset <= reset
    fpmult.io.in.a <= io.in.hor @[MatMul.scala 71:20]
    fpmult.io.in.b <= io.in.ver @[MatMul.scala 72:20]
    inst fpadder of FPAdder_7 @[MatMul.scala 74:25]
    fpadder.clock <= clock
    fpadder.reset <= reset
    fpadder.io.in.a <= fpmult.io.out.result @[MatMul.scala 75:21]
    fpadder.io.in.b <= result_buffer @[MatMul.scala 76:21]
    result_buffer <= fpadder.io.out.result @[MatMul.scala 77:19]
    reg io_out_hor_REG : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, clock with :
      reset => (UInt<1>("h0"), io_out_hor_REG) @[MatMul.scala 79:26]
    io_out_hor_REG <= io.in.hor @[MatMul.scala 79:26]
    io.out.hor <= io_out_hor_REG @[MatMul.scala 79:16]
    reg io_out_ver_REG : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, clock with :
      reset => (UInt<1>("h0"), io_out_ver_REG) @[MatMul.scala 80:26]
    io_out_ver_REG <= io.in.ver @[MatMul.scala 80:26]
    io.out.ver <= io_out_ver_REG @[MatMul.scala 80:16]
    io.out.result <= result_buffer @[MatMul.scala 81:19]

  module FPMult_8 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : { a : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, b : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}, out : { result : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}}

    node _io_out_result_sign_T = xor(io.in.a.sign, io.in.b.sign) @[MatMul.scala 28:38]
    io.out.result.sign <= _io_out_result_sign_T @[MatMul.scala 28:22]
    node _io_out_result_exp_T = add(io.in.a.exp, io.in.b.exp) @[MatMul.scala 29:36]
    node _io_out_result_exp_T_1 = tail(_io_out_result_exp_T, 1) @[MatMul.scala 29:36]
    io.out.result.exp <= _io_out_result_exp_T_1 @[MatMul.scala 29:21]
    node _io_out_result_man_T = mul(io.in.a.man, io.in.b.man) @[MatMul.scala 30:36]
    io.out.result.man <= _io_out_result_man_T @[MatMul.scala 30:21]

  module FPAdder_8 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : { a : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, b : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}, out : { result : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}}

    node _exp_diff_T = gt(io.in.a.exp, io.in.b.exp) @[MatMul.scala 44:34]
    node _exp_diff_T_1 = sub(io.in.a.exp, io.in.b.exp) @[MatMul.scala 44:61]
    node _exp_diff_T_2 = tail(_exp_diff_T_1, 1) @[MatMul.scala 44:61]
    node _exp_diff_T_3 = sub(io.in.b.exp, io.in.a.exp) @[MatMul.scala 44:88]
    node _exp_diff_T_4 = tail(_exp_diff_T_3, 1) @[MatMul.scala 44:88]
    node exp_diff = mux(_exp_diff_T, _exp_diff_T_2, _exp_diff_T_4) @[MatMul.scala 44:21]
    node _io_out_result_sign_T = gt(io.in.a.exp, io.in.b.exp) @[MatMul.scala 46:41]
    node _io_out_result_sign_T_1 = mux(_io_out_result_sign_T, io.in.a.sign, io.in.b.sign) @[MatMul.scala 46:28]
    io.out.result.sign <= _io_out_result_sign_T_1 @[MatMul.scala 46:22]
    node _io_out_result_exp_T = gt(io.in.a.exp, io.in.b.exp) @[MatMul.scala 47:40]
    node _io_out_result_exp_T_1 = mux(_io_out_result_exp_T, io.in.a.exp, io.in.b.exp) @[MatMul.scala 47:27]
    io.out.result.exp <= _io_out_result_exp_T_1 @[MatMul.scala 47:21]
    node _io_out_result_man_T = gt(io.in.a.exp, io.in.b.exp) @[MatMul.scala 48:40]
    node _io_out_result_man_T_1 = dshr(io.in.b.man, exp_diff) @[MatMul.scala 48:82]
    node _io_out_result_man_T_2 = add(io.in.a.man, _io_out_result_man_T_1) @[MatMul.scala 48:67]
    node _io_out_result_man_T_3 = tail(_io_out_result_man_T_2, 1) @[MatMul.scala 48:67]
    node _io_out_result_man_T_4 = dshr(io.in.a.man, exp_diff) @[MatMul.scala 48:109]
    node _io_out_result_man_T_5 = add(_io_out_result_man_T_4, io.in.b.man) @[MatMul.scala 48:122]
    node _io_out_result_man_T_6 = tail(_io_out_result_man_T_5, 1) @[MatMul.scala 48:122]
    node _io_out_result_man_T_7 = mux(_io_out_result_man_T, _io_out_result_man_T_3, _io_out_result_man_T_6) @[MatMul.scala 48:27]
    io.out.result.man <= _io_out_result_man_T_7 @[MatMul.scala 48:21]

  module PE_8 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : { hor : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, ver : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}, out : { hor : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, ver : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, result : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}}

    reg result_buffer : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, clock with :
      reset => (UInt<1>("h0"), result_buffer) @[MatMul.scala 67:28]
    reg mult_buffer : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, clock with :
      reset => (UInt<1>("h0"), mult_buffer) @[MatMul.scala 68:26]
    inst fpmult of FPMult_8 @[MatMul.scala 70:24]
    fpmult.clock <= clock
    fpmult.reset <= reset
    fpmult.io.in.a <= io.in.hor @[MatMul.scala 71:20]
    fpmult.io.in.b <= io.in.ver @[MatMul.scala 72:20]
    inst fpadder of FPAdder_8 @[MatMul.scala 74:25]
    fpadder.clock <= clock
    fpadder.reset <= reset
    fpadder.io.in.a <= fpmult.io.out.result @[MatMul.scala 75:21]
    fpadder.io.in.b <= result_buffer @[MatMul.scala 76:21]
    result_buffer <= fpadder.io.out.result @[MatMul.scala 77:19]
    reg io_out_hor_REG : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, clock with :
      reset => (UInt<1>("h0"), io_out_hor_REG) @[MatMul.scala 79:26]
    io_out_hor_REG <= io.in.hor @[MatMul.scala 79:26]
    io.out.hor <= io_out_hor_REG @[MatMul.scala 79:16]
    reg io_out_ver_REG : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, clock with :
      reset => (UInt<1>("h0"), io_out_ver_REG) @[MatMul.scala 80:26]
    io_out_ver_REG <= io.in.ver @[MatMul.scala 80:26]
    io.out.ver <= io_out_ver_REG @[MatMul.scala 80:16]
    io.out.result <= result_buffer @[MatMul.scala 81:19]

  module FPMult_9 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : { a : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, b : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}, out : { result : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}}

    node _io_out_result_sign_T = xor(io.in.a.sign, io.in.b.sign) @[MatMul.scala 28:38]
    io.out.result.sign <= _io_out_result_sign_T @[MatMul.scala 28:22]
    node _io_out_result_exp_T = add(io.in.a.exp, io.in.b.exp) @[MatMul.scala 29:36]
    node _io_out_result_exp_T_1 = tail(_io_out_result_exp_T, 1) @[MatMul.scala 29:36]
    io.out.result.exp <= _io_out_result_exp_T_1 @[MatMul.scala 29:21]
    node _io_out_result_man_T = mul(io.in.a.man, io.in.b.man) @[MatMul.scala 30:36]
    io.out.result.man <= _io_out_result_man_T @[MatMul.scala 30:21]

  module FPAdder_9 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : { a : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, b : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}, out : { result : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}}

    node _exp_diff_T = gt(io.in.a.exp, io.in.b.exp) @[MatMul.scala 44:34]
    node _exp_diff_T_1 = sub(io.in.a.exp, io.in.b.exp) @[MatMul.scala 44:61]
    node _exp_diff_T_2 = tail(_exp_diff_T_1, 1) @[MatMul.scala 44:61]
    node _exp_diff_T_3 = sub(io.in.b.exp, io.in.a.exp) @[MatMul.scala 44:88]
    node _exp_diff_T_4 = tail(_exp_diff_T_3, 1) @[MatMul.scala 44:88]
    node exp_diff = mux(_exp_diff_T, _exp_diff_T_2, _exp_diff_T_4) @[MatMul.scala 44:21]
    node _io_out_result_sign_T = gt(io.in.a.exp, io.in.b.exp) @[MatMul.scala 46:41]
    node _io_out_result_sign_T_1 = mux(_io_out_result_sign_T, io.in.a.sign, io.in.b.sign) @[MatMul.scala 46:28]
    io.out.result.sign <= _io_out_result_sign_T_1 @[MatMul.scala 46:22]
    node _io_out_result_exp_T = gt(io.in.a.exp, io.in.b.exp) @[MatMul.scala 47:40]
    node _io_out_result_exp_T_1 = mux(_io_out_result_exp_T, io.in.a.exp, io.in.b.exp) @[MatMul.scala 47:27]
    io.out.result.exp <= _io_out_result_exp_T_1 @[MatMul.scala 47:21]
    node _io_out_result_man_T = gt(io.in.a.exp, io.in.b.exp) @[MatMul.scala 48:40]
    node _io_out_result_man_T_1 = dshr(io.in.b.man, exp_diff) @[MatMul.scala 48:82]
    node _io_out_result_man_T_2 = add(io.in.a.man, _io_out_result_man_T_1) @[MatMul.scala 48:67]
    node _io_out_result_man_T_3 = tail(_io_out_result_man_T_2, 1) @[MatMul.scala 48:67]
    node _io_out_result_man_T_4 = dshr(io.in.a.man, exp_diff) @[MatMul.scala 48:109]
    node _io_out_result_man_T_5 = add(_io_out_result_man_T_4, io.in.b.man) @[MatMul.scala 48:122]
    node _io_out_result_man_T_6 = tail(_io_out_result_man_T_5, 1) @[MatMul.scala 48:122]
    node _io_out_result_man_T_7 = mux(_io_out_result_man_T, _io_out_result_man_T_3, _io_out_result_man_T_6) @[MatMul.scala 48:27]
    io.out.result.man <= _io_out_result_man_T_7 @[MatMul.scala 48:21]

  module PE_9 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : { hor : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, ver : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}, out : { hor : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, ver : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, result : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}}

    reg result_buffer : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, clock with :
      reset => (UInt<1>("h0"), result_buffer) @[MatMul.scala 67:28]
    reg mult_buffer : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, clock with :
      reset => (UInt<1>("h0"), mult_buffer) @[MatMul.scala 68:26]
    inst fpmult of FPMult_9 @[MatMul.scala 70:24]
    fpmult.clock <= clock
    fpmult.reset <= reset
    fpmult.io.in.a <= io.in.hor @[MatMul.scala 71:20]
    fpmult.io.in.b <= io.in.ver @[MatMul.scala 72:20]
    inst fpadder of FPAdder_9 @[MatMul.scala 74:25]
    fpadder.clock <= clock
    fpadder.reset <= reset
    fpadder.io.in.a <= fpmult.io.out.result @[MatMul.scala 75:21]
    fpadder.io.in.b <= result_buffer @[MatMul.scala 76:21]
    result_buffer <= fpadder.io.out.result @[MatMul.scala 77:19]
    reg io_out_hor_REG : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, clock with :
      reset => (UInt<1>("h0"), io_out_hor_REG) @[MatMul.scala 79:26]
    io_out_hor_REG <= io.in.hor @[MatMul.scala 79:26]
    io.out.hor <= io_out_hor_REG @[MatMul.scala 79:16]
    reg io_out_ver_REG : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, clock with :
      reset => (UInt<1>("h0"), io_out_ver_REG) @[MatMul.scala 80:26]
    io_out_ver_REG <= io.in.ver @[MatMul.scala 80:26]
    io.out.ver <= io_out_ver_REG @[MatMul.scala 80:16]
    io.out.result <= result_buffer @[MatMul.scala 81:19]

  module FPMult_10 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : { a : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, b : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}, out : { result : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}}

    node _io_out_result_sign_T = xor(io.in.a.sign, io.in.b.sign) @[MatMul.scala 28:38]
    io.out.result.sign <= _io_out_result_sign_T @[MatMul.scala 28:22]
    node _io_out_result_exp_T = add(io.in.a.exp, io.in.b.exp) @[MatMul.scala 29:36]
    node _io_out_result_exp_T_1 = tail(_io_out_result_exp_T, 1) @[MatMul.scala 29:36]
    io.out.result.exp <= _io_out_result_exp_T_1 @[MatMul.scala 29:21]
    node _io_out_result_man_T = mul(io.in.a.man, io.in.b.man) @[MatMul.scala 30:36]
    io.out.result.man <= _io_out_result_man_T @[MatMul.scala 30:21]

  module FPAdder_10 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : { a : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, b : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}, out : { result : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}}

    node _exp_diff_T = gt(io.in.a.exp, io.in.b.exp) @[MatMul.scala 44:34]
    node _exp_diff_T_1 = sub(io.in.a.exp, io.in.b.exp) @[MatMul.scala 44:61]
    node _exp_diff_T_2 = tail(_exp_diff_T_1, 1) @[MatMul.scala 44:61]
    node _exp_diff_T_3 = sub(io.in.b.exp, io.in.a.exp) @[MatMul.scala 44:88]
    node _exp_diff_T_4 = tail(_exp_diff_T_3, 1) @[MatMul.scala 44:88]
    node exp_diff = mux(_exp_diff_T, _exp_diff_T_2, _exp_diff_T_4) @[MatMul.scala 44:21]
    node _io_out_result_sign_T = gt(io.in.a.exp, io.in.b.exp) @[MatMul.scala 46:41]
    node _io_out_result_sign_T_1 = mux(_io_out_result_sign_T, io.in.a.sign, io.in.b.sign) @[MatMul.scala 46:28]
    io.out.result.sign <= _io_out_result_sign_T_1 @[MatMul.scala 46:22]
    node _io_out_result_exp_T = gt(io.in.a.exp, io.in.b.exp) @[MatMul.scala 47:40]
    node _io_out_result_exp_T_1 = mux(_io_out_result_exp_T, io.in.a.exp, io.in.b.exp) @[MatMul.scala 47:27]
    io.out.result.exp <= _io_out_result_exp_T_1 @[MatMul.scala 47:21]
    node _io_out_result_man_T = gt(io.in.a.exp, io.in.b.exp) @[MatMul.scala 48:40]
    node _io_out_result_man_T_1 = dshr(io.in.b.man, exp_diff) @[MatMul.scala 48:82]
    node _io_out_result_man_T_2 = add(io.in.a.man, _io_out_result_man_T_1) @[MatMul.scala 48:67]
    node _io_out_result_man_T_3 = tail(_io_out_result_man_T_2, 1) @[MatMul.scala 48:67]
    node _io_out_result_man_T_4 = dshr(io.in.a.man, exp_diff) @[MatMul.scala 48:109]
    node _io_out_result_man_T_5 = add(_io_out_result_man_T_4, io.in.b.man) @[MatMul.scala 48:122]
    node _io_out_result_man_T_6 = tail(_io_out_result_man_T_5, 1) @[MatMul.scala 48:122]
    node _io_out_result_man_T_7 = mux(_io_out_result_man_T, _io_out_result_man_T_3, _io_out_result_man_T_6) @[MatMul.scala 48:27]
    io.out.result.man <= _io_out_result_man_T_7 @[MatMul.scala 48:21]

  module PE_10 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : { hor : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, ver : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}, out : { hor : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, ver : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, result : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}}

    reg result_buffer : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, clock with :
      reset => (UInt<1>("h0"), result_buffer) @[MatMul.scala 67:28]
    reg mult_buffer : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, clock with :
      reset => (UInt<1>("h0"), mult_buffer) @[MatMul.scala 68:26]
    inst fpmult of FPMult_10 @[MatMul.scala 70:24]
    fpmult.clock <= clock
    fpmult.reset <= reset
    fpmult.io.in.a <= io.in.hor @[MatMul.scala 71:20]
    fpmult.io.in.b <= io.in.ver @[MatMul.scala 72:20]
    inst fpadder of FPAdder_10 @[MatMul.scala 74:25]
    fpadder.clock <= clock
    fpadder.reset <= reset
    fpadder.io.in.a <= fpmult.io.out.result @[MatMul.scala 75:21]
    fpadder.io.in.b <= result_buffer @[MatMul.scala 76:21]
    result_buffer <= fpadder.io.out.result @[MatMul.scala 77:19]
    reg io_out_hor_REG : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, clock with :
      reset => (UInt<1>("h0"), io_out_hor_REG) @[MatMul.scala 79:26]
    io_out_hor_REG <= io.in.hor @[MatMul.scala 79:26]
    io.out.hor <= io_out_hor_REG @[MatMul.scala 79:16]
    reg io_out_ver_REG : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, clock with :
      reset => (UInt<1>("h0"), io_out_ver_REG) @[MatMul.scala 80:26]
    io_out_ver_REG <= io.in.ver @[MatMul.scala 80:26]
    io.out.ver <= io_out_ver_REG @[MatMul.scala 80:16]
    io.out.result <= result_buffer @[MatMul.scala 81:19]

  module FPMult_11 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : { a : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, b : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}, out : { result : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}}

    node _io_out_result_sign_T = xor(io.in.a.sign, io.in.b.sign) @[MatMul.scala 28:38]
    io.out.result.sign <= _io_out_result_sign_T @[MatMul.scala 28:22]
    node _io_out_result_exp_T = add(io.in.a.exp, io.in.b.exp) @[MatMul.scala 29:36]
    node _io_out_result_exp_T_1 = tail(_io_out_result_exp_T, 1) @[MatMul.scala 29:36]
    io.out.result.exp <= _io_out_result_exp_T_1 @[MatMul.scala 29:21]
    node _io_out_result_man_T = mul(io.in.a.man, io.in.b.man) @[MatMul.scala 30:36]
    io.out.result.man <= _io_out_result_man_T @[MatMul.scala 30:21]

  module FPAdder_11 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : { a : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, b : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}, out : { result : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}}

    node _exp_diff_T = gt(io.in.a.exp, io.in.b.exp) @[MatMul.scala 44:34]
    node _exp_diff_T_1 = sub(io.in.a.exp, io.in.b.exp) @[MatMul.scala 44:61]
    node _exp_diff_T_2 = tail(_exp_diff_T_1, 1) @[MatMul.scala 44:61]
    node _exp_diff_T_3 = sub(io.in.b.exp, io.in.a.exp) @[MatMul.scala 44:88]
    node _exp_diff_T_4 = tail(_exp_diff_T_3, 1) @[MatMul.scala 44:88]
    node exp_diff = mux(_exp_diff_T, _exp_diff_T_2, _exp_diff_T_4) @[MatMul.scala 44:21]
    node _io_out_result_sign_T = gt(io.in.a.exp, io.in.b.exp) @[MatMul.scala 46:41]
    node _io_out_result_sign_T_1 = mux(_io_out_result_sign_T, io.in.a.sign, io.in.b.sign) @[MatMul.scala 46:28]
    io.out.result.sign <= _io_out_result_sign_T_1 @[MatMul.scala 46:22]
    node _io_out_result_exp_T = gt(io.in.a.exp, io.in.b.exp) @[MatMul.scala 47:40]
    node _io_out_result_exp_T_1 = mux(_io_out_result_exp_T, io.in.a.exp, io.in.b.exp) @[MatMul.scala 47:27]
    io.out.result.exp <= _io_out_result_exp_T_1 @[MatMul.scala 47:21]
    node _io_out_result_man_T = gt(io.in.a.exp, io.in.b.exp) @[MatMul.scala 48:40]
    node _io_out_result_man_T_1 = dshr(io.in.b.man, exp_diff) @[MatMul.scala 48:82]
    node _io_out_result_man_T_2 = add(io.in.a.man, _io_out_result_man_T_1) @[MatMul.scala 48:67]
    node _io_out_result_man_T_3 = tail(_io_out_result_man_T_2, 1) @[MatMul.scala 48:67]
    node _io_out_result_man_T_4 = dshr(io.in.a.man, exp_diff) @[MatMul.scala 48:109]
    node _io_out_result_man_T_5 = add(_io_out_result_man_T_4, io.in.b.man) @[MatMul.scala 48:122]
    node _io_out_result_man_T_6 = tail(_io_out_result_man_T_5, 1) @[MatMul.scala 48:122]
    node _io_out_result_man_T_7 = mux(_io_out_result_man_T, _io_out_result_man_T_3, _io_out_result_man_T_6) @[MatMul.scala 48:27]
    io.out.result.man <= _io_out_result_man_T_7 @[MatMul.scala 48:21]

  module PE_11 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : { hor : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, ver : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}, out : { hor : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, ver : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, result : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}}

    reg result_buffer : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, clock with :
      reset => (UInt<1>("h0"), result_buffer) @[MatMul.scala 67:28]
    reg mult_buffer : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, clock with :
      reset => (UInt<1>("h0"), mult_buffer) @[MatMul.scala 68:26]
    inst fpmult of FPMult_11 @[MatMul.scala 70:24]
    fpmult.clock <= clock
    fpmult.reset <= reset
    fpmult.io.in.a <= io.in.hor @[MatMul.scala 71:20]
    fpmult.io.in.b <= io.in.ver @[MatMul.scala 72:20]
    inst fpadder of FPAdder_11 @[MatMul.scala 74:25]
    fpadder.clock <= clock
    fpadder.reset <= reset
    fpadder.io.in.a <= fpmult.io.out.result @[MatMul.scala 75:21]
    fpadder.io.in.b <= result_buffer @[MatMul.scala 76:21]
    result_buffer <= fpadder.io.out.result @[MatMul.scala 77:19]
    reg io_out_hor_REG : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, clock with :
      reset => (UInt<1>("h0"), io_out_hor_REG) @[MatMul.scala 79:26]
    io_out_hor_REG <= io.in.hor @[MatMul.scala 79:26]
    io.out.hor <= io_out_hor_REG @[MatMul.scala 79:16]
    reg io_out_ver_REG : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, clock with :
      reset => (UInt<1>("h0"), io_out_ver_REG) @[MatMul.scala 80:26]
    io_out_ver_REG <= io.in.ver @[MatMul.scala 80:26]
    io.out.ver <= io_out_ver_REG @[MatMul.scala 80:16]
    io.out.result <= result_buffer @[MatMul.scala 81:19]

  module FPMult_12 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : { a : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, b : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}, out : { result : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}}

    node _io_out_result_sign_T = xor(io.in.a.sign, io.in.b.sign) @[MatMul.scala 28:38]
    io.out.result.sign <= _io_out_result_sign_T @[MatMul.scala 28:22]
    node _io_out_result_exp_T = add(io.in.a.exp, io.in.b.exp) @[MatMul.scala 29:36]
    node _io_out_result_exp_T_1 = tail(_io_out_result_exp_T, 1) @[MatMul.scala 29:36]
    io.out.result.exp <= _io_out_result_exp_T_1 @[MatMul.scala 29:21]
    node _io_out_result_man_T = mul(io.in.a.man, io.in.b.man) @[MatMul.scala 30:36]
    io.out.result.man <= _io_out_result_man_T @[MatMul.scala 30:21]

  module FPAdder_12 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : { a : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, b : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}, out : { result : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}}

    node _exp_diff_T = gt(io.in.a.exp, io.in.b.exp) @[MatMul.scala 44:34]
    node _exp_diff_T_1 = sub(io.in.a.exp, io.in.b.exp) @[MatMul.scala 44:61]
    node _exp_diff_T_2 = tail(_exp_diff_T_1, 1) @[MatMul.scala 44:61]
    node _exp_diff_T_3 = sub(io.in.b.exp, io.in.a.exp) @[MatMul.scala 44:88]
    node _exp_diff_T_4 = tail(_exp_diff_T_3, 1) @[MatMul.scala 44:88]
    node exp_diff = mux(_exp_diff_T, _exp_diff_T_2, _exp_diff_T_4) @[MatMul.scala 44:21]
    node _io_out_result_sign_T = gt(io.in.a.exp, io.in.b.exp) @[MatMul.scala 46:41]
    node _io_out_result_sign_T_1 = mux(_io_out_result_sign_T, io.in.a.sign, io.in.b.sign) @[MatMul.scala 46:28]
    io.out.result.sign <= _io_out_result_sign_T_1 @[MatMul.scala 46:22]
    node _io_out_result_exp_T = gt(io.in.a.exp, io.in.b.exp) @[MatMul.scala 47:40]
    node _io_out_result_exp_T_1 = mux(_io_out_result_exp_T, io.in.a.exp, io.in.b.exp) @[MatMul.scala 47:27]
    io.out.result.exp <= _io_out_result_exp_T_1 @[MatMul.scala 47:21]
    node _io_out_result_man_T = gt(io.in.a.exp, io.in.b.exp) @[MatMul.scala 48:40]
    node _io_out_result_man_T_1 = dshr(io.in.b.man, exp_diff) @[MatMul.scala 48:82]
    node _io_out_result_man_T_2 = add(io.in.a.man, _io_out_result_man_T_1) @[MatMul.scala 48:67]
    node _io_out_result_man_T_3 = tail(_io_out_result_man_T_2, 1) @[MatMul.scala 48:67]
    node _io_out_result_man_T_4 = dshr(io.in.a.man, exp_diff) @[MatMul.scala 48:109]
    node _io_out_result_man_T_5 = add(_io_out_result_man_T_4, io.in.b.man) @[MatMul.scala 48:122]
    node _io_out_result_man_T_6 = tail(_io_out_result_man_T_5, 1) @[MatMul.scala 48:122]
    node _io_out_result_man_T_7 = mux(_io_out_result_man_T, _io_out_result_man_T_3, _io_out_result_man_T_6) @[MatMul.scala 48:27]
    io.out.result.man <= _io_out_result_man_T_7 @[MatMul.scala 48:21]

  module PE_12 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : { hor : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, ver : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}, out : { hor : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, ver : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, result : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}}

    reg result_buffer : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, clock with :
      reset => (UInt<1>("h0"), result_buffer) @[MatMul.scala 67:28]
    reg mult_buffer : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, clock with :
      reset => (UInt<1>("h0"), mult_buffer) @[MatMul.scala 68:26]
    inst fpmult of FPMult_12 @[MatMul.scala 70:24]
    fpmult.clock <= clock
    fpmult.reset <= reset
    fpmult.io.in.a <= io.in.hor @[MatMul.scala 71:20]
    fpmult.io.in.b <= io.in.ver @[MatMul.scala 72:20]
    inst fpadder of FPAdder_12 @[MatMul.scala 74:25]
    fpadder.clock <= clock
    fpadder.reset <= reset
    fpadder.io.in.a <= fpmult.io.out.result @[MatMul.scala 75:21]
    fpadder.io.in.b <= result_buffer @[MatMul.scala 76:21]
    result_buffer <= fpadder.io.out.result @[MatMul.scala 77:19]
    reg io_out_hor_REG : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, clock with :
      reset => (UInt<1>("h0"), io_out_hor_REG) @[MatMul.scala 79:26]
    io_out_hor_REG <= io.in.hor @[MatMul.scala 79:26]
    io.out.hor <= io_out_hor_REG @[MatMul.scala 79:16]
    reg io_out_ver_REG : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, clock with :
      reset => (UInt<1>("h0"), io_out_ver_REG) @[MatMul.scala 80:26]
    io_out_ver_REG <= io.in.ver @[MatMul.scala 80:26]
    io.out.ver <= io_out_ver_REG @[MatMul.scala 80:16]
    io.out.result <= result_buffer @[MatMul.scala 81:19]

  module FPMult_13 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : { a : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, b : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}, out : { result : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}}

    node _io_out_result_sign_T = xor(io.in.a.sign, io.in.b.sign) @[MatMul.scala 28:38]
    io.out.result.sign <= _io_out_result_sign_T @[MatMul.scala 28:22]
    node _io_out_result_exp_T = add(io.in.a.exp, io.in.b.exp) @[MatMul.scala 29:36]
    node _io_out_result_exp_T_1 = tail(_io_out_result_exp_T, 1) @[MatMul.scala 29:36]
    io.out.result.exp <= _io_out_result_exp_T_1 @[MatMul.scala 29:21]
    node _io_out_result_man_T = mul(io.in.a.man, io.in.b.man) @[MatMul.scala 30:36]
    io.out.result.man <= _io_out_result_man_T @[MatMul.scala 30:21]

  module FPAdder_13 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : { a : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, b : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}, out : { result : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}}

    node _exp_diff_T = gt(io.in.a.exp, io.in.b.exp) @[MatMul.scala 44:34]
    node _exp_diff_T_1 = sub(io.in.a.exp, io.in.b.exp) @[MatMul.scala 44:61]
    node _exp_diff_T_2 = tail(_exp_diff_T_1, 1) @[MatMul.scala 44:61]
    node _exp_diff_T_3 = sub(io.in.b.exp, io.in.a.exp) @[MatMul.scala 44:88]
    node _exp_diff_T_4 = tail(_exp_diff_T_3, 1) @[MatMul.scala 44:88]
    node exp_diff = mux(_exp_diff_T, _exp_diff_T_2, _exp_diff_T_4) @[MatMul.scala 44:21]
    node _io_out_result_sign_T = gt(io.in.a.exp, io.in.b.exp) @[MatMul.scala 46:41]
    node _io_out_result_sign_T_1 = mux(_io_out_result_sign_T, io.in.a.sign, io.in.b.sign) @[MatMul.scala 46:28]
    io.out.result.sign <= _io_out_result_sign_T_1 @[MatMul.scala 46:22]
    node _io_out_result_exp_T = gt(io.in.a.exp, io.in.b.exp) @[MatMul.scala 47:40]
    node _io_out_result_exp_T_1 = mux(_io_out_result_exp_T, io.in.a.exp, io.in.b.exp) @[MatMul.scala 47:27]
    io.out.result.exp <= _io_out_result_exp_T_1 @[MatMul.scala 47:21]
    node _io_out_result_man_T = gt(io.in.a.exp, io.in.b.exp) @[MatMul.scala 48:40]
    node _io_out_result_man_T_1 = dshr(io.in.b.man, exp_diff) @[MatMul.scala 48:82]
    node _io_out_result_man_T_2 = add(io.in.a.man, _io_out_result_man_T_1) @[MatMul.scala 48:67]
    node _io_out_result_man_T_3 = tail(_io_out_result_man_T_2, 1) @[MatMul.scala 48:67]
    node _io_out_result_man_T_4 = dshr(io.in.a.man, exp_diff) @[MatMul.scala 48:109]
    node _io_out_result_man_T_5 = add(_io_out_result_man_T_4, io.in.b.man) @[MatMul.scala 48:122]
    node _io_out_result_man_T_6 = tail(_io_out_result_man_T_5, 1) @[MatMul.scala 48:122]
    node _io_out_result_man_T_7 = mux(_io_out_result_man_T, _io_out_result_man_T_3, _io_out_result_man_T_6) @[MatMul.scala 48:27]
    io.out.result.man <= _io_out_result_man_T_7 @[MatMul.scala 48:21]

  module PE_13 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : { hor : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, ver : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}, out : { hor : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, ver : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, result : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}}

    reg result_buffer : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, clock with :
      reset => (UInt<1>("h0"), result_buffer) @[MatMul.scala 67:28]
    reg mult_buffer : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, clock with :
      reset => (UInt<1>("h0"), mult_buffer) @[MatMul.scala 68:26]
    inst fpmult of FPMult_13 @[MatMul.scala 70:24]
    fpmult.clock <= clock
    fpmult.reset <= reset
    fpmult.io.in.a <= io.in.hor @[MatMul.scala 71:20]
    fpmult.io.in.b <= io.in.ver @[MatMul.scala 72:20]
    inst fpadder of FPAdder_13 @[MatMul.scala 74:25]
    fpadder.clock <= clock
    fpadder.reset <= reset
    fpadder.io.in.a <= fpmult.io.out.result @[MatMul.scala 75:21]
    fpadder.io.in.b <= result_buffer @[MatMul.scala 76:21]
    result_buffer <= fpadder.io.out.result @[MatMul.scala 77:19]
    reg io_out_hor_REG : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, clock with :
      reset => (UInt<1>("h0"), io_out_hor_REG) @[MatMul.scala 79:26]
    io_out_hor_REG <= io.in.hor @[MatMul.scala 79:26]
    io.out.hor <= io_out_hor_REG @[MatMul.scala 79:16]
    reg io_out_ver_REG : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, clock with :
      reset => (UInt<1>("h0"), io_out_ver_REG) @[MatMul.scala 80:26]
    io_out_ver_REG <= io.in.ver @[MatMul.scala 80:26]
    io.out.ver <= io_out_ver_REG @[MatMul.scala 80:16]
    io.out.result <= result_buffer @[MatMul.scala 81:19]

  module FPMult_14 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : { a : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, b : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}, out : { result : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}}

    node _io_out_result_sign_T = xor(io.in.a.sign, io.in.b.sign) @[MatMul.scala 28:38]
    io.out.result.sign <= _io_out_result_sign_T @[MatMul.scala 28:22]
    node _io_out_result_exp_T = add(io.in.a.exp, io.in.b.exp) @[MatMul.scala 29:36]
    node _io_out_result_exp_T_1 = tail(_io_out_result_exp_T, 1) @[MatMul.scala 29:36]
    io.out.result.exp <= _io_out_result_exp_T_1 @[MatMul.scala 29:21]
    node _io_out_result_man_T = mul(io.in.a.man, io.in.b.man) @[MatMul.scala 30:36]
    io.out.result.man <= _io_out_result_man_T @[MatMul.scala 30:21]

  module FPAdder_14 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : { a : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, b : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}, out : { result : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}}

    node _exp_diff_T = gt(io.in.a.exp, io.in.b.exp) @[MatMul.scala 44:34]
    node _exp_diff_T_1 = sub(io.in.a.exp, io.in.b.exp) @[MatMul.scala 44:61]
    node _exp_diff_T_2 = tail(_exp_diff_T_1, 1) @[MatMul.scala 44:61]
    node _exp_diff_T_3 = sub(io.in.b.exp, io.in.a.exp) @[MatMul.scala 44:88]
    node _exp_diff_T_4 = tail(_exp_diff_T_3, 1) @[MatMul.scala 44:88]
    node exp_diff = mux(_exp_diff_T, _exp_diff_T_2, _exp_diff_T_4) @[MatMul.scala 44:21]
    node _io_out_result_sign_T = gt(io.in.a.exp, io.in.b.exp) @[MatMul.scala 46:41]
    node _io_out_result_sign_T_1 = mux(_io_out_result_sign_T, io.in.a.sign, io.in.b.sign) @[MatMul.scala 46:28]
    io.out.result.sign <= _io_out_result_sign_T_1 @[MatMul.scala 46:22]
    node _io_out_result_exp_T = gt(io.in.a.exp, io.in.b.exp) @[MatMul.scala 47:40]
    node _io_out_result_exp_T_1 = mux(_io_out_result_exp_T, io.in.a.exp, io.in.b.exp) @[MatMul.scala 47:27]
    io.out.result.exp <= _io_out_result_exp_T_1 @[MatMul.scala 47:21]
    node _io_out_result_man_T = gt(io.in.a.exp, io.in.b.exp) @[MatMul.scala 48:40]
    node _io_out_result_man_T_1 = dshr(io.in.b.man, exp_diff) @[MatMul.scala 48:82]
    node _io_out_result_man_T_2 = add(io.in.a.man, _io_out_result_man_T_1) @[MatMul.scala 48:67]
    node _io_out_result_man_T_3 = tail(_io_out_result_man_T_2, 1) @[MatMul.scala 48:67]
    node _io_out_result_man_T_4 = dshr(io.in.a.man, exp_diff) @[MatMul.scala 48:109]
    node _io_out_result_man_T_5 = add(_io_out_result_man_T_4, io.in.b.man) @[MatMul.scala 48:122]
    node _io_out_result_man_T_6 = tail(_io_out_result_man_T_5, 1) @[MatMul.scala 48:122]
    node _io_out_result_man_T_7 = mux(_io_out_result_man_T, _io_out_result_man_T_3, _io_out_result_man_T_6) @[MatMul.scala 48:27]
    io.out.result.man <= _io_out_result_man_T_7 @[MatMul.scala 48:21]

  module PE_14 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : { hor : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, ver : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}, out : { hor : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, ver : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, result : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}}

    reg result_buffer : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, clock with :
      reset => (UInt<1>("h0"), result_buffer) @[MatMul.scala 67:28]
    reg mult_buffer : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, clock with :
      reset => (UInt<1>("h0"), mult_buffer) @[MatMul.scala 68:26]
    inst fpmult of FPMult_14 @[MatMul.scala 70:24]
    fpmult.clock <= clock
    fpmult.reset <= reset
    fpmult.io.in.a <= io.in.hor @[MatMul.scala 71:20]
    fpmult.io.in.b <= io.in.ver @[MatMul.scala 72:20]
    inst fpadder of FPAdder_14 @[MatMul.scala 74:25]
    fpadder.clock <= clock
    fpadder.reset <= reset
    fpadder.io.in.a <= fpmult.io.out.result @[MatMul.scala 75:21]
    fpadder.io.in.b <= result_buffer @[MatMul.scala 76:21]
    result_buffer <= fpadder.io.out.result @[MatMul.scala 77:19]
    reg io_out_hor_REG : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, clock with :
      reset => (UInt<1>("h0"), io_out_hor_REG) @[MatMul.scala 79:26]
    io_out_hor_REG <= io.in.hor @[MatMul.scala 79:26]
    io.out.hor <= io_out_hor_REG @[MatMul.scala 79:16]
    reg io_out_ver_REG : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, clock with :
      reset => (UInt<1>("h0"), io_out_ver_REG) @[MatMul.scala 80:26]
    io_out_ver_REG <= io.in.ver @[MatMul.scala 80:26]
    io.out.ver <= io_out_ver_REG @[MatMul.scala 80:16]
    io.out.result <= result_buffer @[MatMul.scala 81:19]

  module FPMult_15 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : { a : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, b : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}, out : { result : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}}

    node _io_out_result_sign_T = xor(io.in.a.sign, io.in.b.sign) @[MatMul.scala 28:38]
    io.out.result.sign <= _io_out_result_sign_T @[MatMul.scala 28:22]
    node _io_out_result_exp_T = add(io.in.a.exp, io.in.b.exp) @[MatMul.scala 29:36]
    node _io_out_result_exp_T_1 = tail(_io_out_result_exp_T, 1) @[MatMul.scala 29:36]
    io.out.result.exp <= _io_out_result_exp_T_1 @[MatMul.scala 29:21]
    node _io_out_result_man_T = mul(io.in.a.man, io.in.b.man) @[MatMul.scala 30:36]
    io.out.result.man <= _io_out_result_man_T @[MatMul.scala 30:21]

  module FPAdder_15 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : { a : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, b : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}, out : { result : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}}

    node _exp_diff_T = gt(io.in.a.exp, io.in.b.exp) @[MatMul.scala 44:34]
    node _exp_diff_T_1 = sub(io.in.a.exp, io.in.b.exp) @[MatMul.scala 44:61]
    node _exp_diff_T_2 = tail(_exp_diff_T_1, 1) @[MatMul.scala 44:61]
    node _exp_diff_T_3 = sub(io.in.b.exp, io.in.a.exp) @[MatMul.scala 44:88]
    node _exp_diff_T_4 = tail(_exp_diff_T_3, 1) @[MatMul.scala 44:88]
    node exp_diff = mux(_exp_diff_T, _exp_diff_T_2, _exp_diff_T_4) @[MatMul.scala 44:21]
    node _io_out_result_sign_T = gt(io.in.a.exp, io.in.b.exp) @[MatMul.scala 46:41]
    node _io_out_result_sign_T_1 = mux(_io_out_result_sign_T, io.in.a.sign, io.in.b.sign) @[MatMul.scala 46:28]
    io.out.result.sign <= _io_out_result_sign_T_1 @[MatMul.scala 46:22]
    node _io_out_result_exp_T = gt(io.in.a.exp, io.in.b.exp) @[MatMul.scala 47:40]
    node _io_out_result_exp_T_1 = mux(_io_out_result_exp_T, io.in.a.exp, io.in.b.exp) @[MatMul.scala 47:27]
    io.out.result.exp <= _io_out_result_exp_T_1 @[MatMul.scala 47:21]
    node _io_out_result_man_T = gt(io.in.a.exp, io.in.b.exp) @[MatMul.scala 48:40]
    node _io_out_result_man_T_1 = dshr(io.in.b.man, exp_diff) @[MatMul.scala 48:82]
    node _io_out_result_man_T_2 = add(io.in.a.man, _io_out_result_man_T_1) @[MatMul.scala 48:67]
    node _io_out_result_man_T_3 = tail(_io_out_result_man_T_2, 1) @[MatMul.scala 48:67]
    node _io_out_result_man_T_4 = dshr(io.in.a.man, exp_diff) @[MatMul.scala 48:109]
    node _io_out_result_man_T_5 = add(_io_out_result_man_T_4, io.in.b.man) @[MatMul.scala 48:122]
    node _io_out_result_man_T_6 = tail(_io_out_result_man_T_5, 1) @[MatMul.scala 48:122]
    node _io_out_result_man_T_7 = mux(_io_out_result_man_T, _io_out_result_man_T_3, _io_out_result_man_T_6) @[MatMul.scala 48:27]
    io.out.result.man <= _io_out_result_man_T_7 @[MatMul.scala 48:21]

  module PE_15 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : { hor : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, ver : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}, out : { hor : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, ver : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, result : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}}

    reg result_buffer : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, clock with :
      reset => (UInt<1>("h0"), result_buffer) @[MatMul.scala 67:28]
    reg mult_buffer : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, clock with :
      reset => (UInt<1>("h0"), mult_buffer) @[MatMul.scala 68:26]
    inst fpmult of FPMult_15 @[MatMul.scala 70:24]
    fpmult.clock <= clock
    fpmult.reset <= reset
    fpmult.io.in.a <= io.in.hor @[MatMul.scala 71:20]
    fpmult.io.in.b <= io.in.ver @[MatMul.scala 72:20]
    inst fpadder of FPAdder_15 @[MatMul.scala 74:25]
    fpadder.clock <= clock
    fpadder.reset <= reset
    fpadder.io.in.a <= fpmult.io.out.result @[MatMul.scala 75:21]
    fpadder.io.in.b <= result_buffer @[MatMul.scala 76:21]
    result_buffer <= fpadder.io.out.result @[MatMul.scala 77:19]
    reg io_out_hor_REG : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, clock with :
      reset => (UInt<1>("h0"), io_out_hor_REG) @[MatMul.scala 79:26]
    io_out_hor_REG <= io.in.hor @[MatMul.scala 79:26]
    io.out.hor <= io_out_hor_REG @[MatMul.scala 79:16]
    reg io_out_ver_REG : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, clock with :
      reset => (UInt<1>("h0"), io_out_ver_REG) @[MatMul.scala 80:26]
    io_out_ver_REG <= io.in.ver @[MatMul.scala 80:26]
    io.out.ver <= io_out_ver_REG @[MatMul.scala 80:16]
    io.out.result <= result_buffer @[MatMul.scala 81:19]

  module SystolicArray :
    input clock : Clock
    input reset : UInt<1>
    output io : { flip in : { hor : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, ver : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}[4][4], out : { hor : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, ver : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, result : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}[4][4]}

    inst pes_0_0 of PE @[MatMul.scala 100:34]
    pes_0_0.clock <= clock
    pes_0_0.reset <= reset
    inst pes_0_1 of PE_1 @[MatMul.scala 100:34]
    pes_0_1.clock <= clock
    pes_0_1.reset <= reset
    inst pes_0_2 of PE_2 @[MatMul.scala 100:34]
    pes_0_2.clock <= clock
    pes_0_2.reset <= reset
    inst pes_0_3 of PE_3 @[MatMul.scala 100:34]
    pes_0_3.clock <= clock
    pes_0_3.reset <= reset
    inst pes_1_0 of PE_4 @[MatMul.scala 100:34]
    pes_1_0.clock <= clock
    pes_1_0.reset <= reset
    inst pes_1_1 of PE_5 @[MatMul.scala 100:34]
    pes_1_1.clock <= clock
    pes_1_1.reset <= reset
    inst pes_1_2 of PE_6 @[MatMul.scala 100:34]
    pes_1_2.clock <= clock
    pes_1_2.reset <= reset
    inst pes_1_3 of PE_7 @[MatMul.scala 100:34]
    pes_1_3.clock <= clock
    pes_1_3.reset <= reset
    inst pes_2_0 of PE_8 @[MatMul.scala 100:34]
    pes_2_0.clock <= clock
    pes_2_0.reset <= reset
    inst pes_2_1 of PE_9 @[MatMul.scala 100:34]
    pes_2_1.clock <= clock
    pes_2_1.reset <= reset
    inst pes_2_2 of PE_10 @[MatMul.scala 100:34]
    pes_2_2.clock <= clock
    pes_2_2.reset <= reset
    inst pes_2_3 of PE_11 @[MatMul.scala 100:34]
    pes_2_3.clock <= clock
    pes_2_3.reset <= reset
    inst pes_3_0 of PE_12 @[MatMul.scala 100:34]
    pes_3_0.clock <= clock
    pes_3_0.reset <= reset
    inst pes_3_1 of PE_13 @[MatMul.scala 100:34]
    pes_3_1.clock <= clock
    pes_3_1.reset <= reset
    inst pes_3_2 of PE_14 @[MatMul.scala 100:34]
    pes_3_2.clock <= clock
    pes_3_2.reset <= reset
    inst pes_3_3 of PE_15 @[MatMul.scala 100:34]
    pes_3_3.clock <= clock
    pes_3_3.reset <= reset
    pes_0_0.io.in.hor.exp <= io.in[0][0].hor.exp @[MatMul.scala 105:27]
    pes_0_0.io.in.hor.man <= io.in[0][0].hor.man @[MatMul.scala 105:27]
    pes_0_0.io.in.hor.sign <= io.in[0][0].hor.sign @[MatMul.scala 105:27]
    pes_0_0.io.in.ver.exp <= io.in[0][0].ver.exp @[MatMul.scala 106:27]
    pes_0_0.io.in.ver.man <= io.in[0][0].ver.man @[MatMul.scala 106:27]
    pes_0_0.io.in.ver.sign <= io.in[0][0].ver.sign @[MatMul.scala 106:27]
    pes_0_1.io.in.hor.exp <= io.in[0][1].hor.exp @[MatMul.scala 105:27]
    pes_0_1.io.in.hor.man <= io.in[0][1].hor.man @[MatMul.scala 105:27]
    pes_0_1.io.in.hor.sign <= io.in[0][1].hor.sign @[MatMul.scala 105:27]
    pes_0_1.io.in.ver.exp <= io.in[0][1].ver.exp @[MatMul.scala 106:27]
    pes_0_1.io.in.ver.man <= io.in[0][1].ver.man @[MatMul.scala 106:27]
    pes_0_1.io.in.ver.sign <= io.in[0][1].ver.sign @[MatMul.scala 106:27]
    pes_0_2.io.in.hor.exp <= io.in[0][2].hor.exp @[MatMul.scala 105:27]
    pes_0_2.io.in.hor.man <= io.in[0][2].hor.man @[MatMul.scala 105:27]
    pes_0_2.io.in.hor.sign <= io.in[0][2].hor.sign @[MatMul.scala 105:27]
    pes_0_2.io.in.ver.exp <= io.in[0][2].ver.exp @[MatMul.scala 106:27]
    pes_0_2.io.in.ver.man <= io.in[0][2].ver.man @[MatMul.scala 106:27]
    pes_0_2.io.in.ver.sign <= io.in[0][2].ver.sign @[MatMul.scala 106:27]
    pes_0_3.io.in.hor.exp <= io.in[0][3].hor.exp @[MatMul.scala 105:27]
    pes_0_3.io.in.hor.man <= io.in[0][3].hor.man @[MatMul.scala 105:27]
    pes_0_3.io.in.hor.sign <= io.in[0][3].hor.sign @[MatMul.scala 105:27]
    pes_0_3.io.in.ver.exp <= io.in[0][3].ver.exp @[MatMul.scala 106:27]
    pes_0_3.io.in.ver.man <= io.in[0][3].ver.man @[MatMul.scala 106:27]
    pes_0_3.io.in.ver.sign <= io.in[0][3].ver.sign @[MatMul.scala 106:27]
    pes_1_0.io.in.hor.exp <= io.in[1][0].hor.exp @[MatMul.scala 105:27]
    pes_1_0.io.in.hor.man <= io.in[1][0].hor.man @[MatMul.scala 105:27]
    pes_1_0.io.in.hor.sign <= io.in[1][0].hor.sign @[MatMul.scala 105:27]
    pes_1_0.io.in.ver.exp <= io.in[1][0].ver.exp @[MatMul.scala 106:27]
    pes_1_0.io.in.ver.man <= io.in[1][0].ver.man @[MatMul.scala 106:27]
    pes_1_0.io.in.ver.sign <= io.in[1][0].ver.sign @[MatMul.scala 106:27]
    pes_1_1.io.in.hor.exp <= io.in[1][1].hor.exp @[MatMul.scala 105:27]
    pes_1_1.io.in.hor.man <= io.in[1][1].hor.man @[MatMul.scala 105:27]
    pes_1_1.io.in.hor.sign <= io.in[1][1].hor.sign @[MatMul.scala 105:27]
    pes_1_1.io.in.ver.exp <= io.in[1][1].ver.exp @[MatMul.scala 106:27]
    pes_1_1.io.in.ver.man <= io.in[1][1].ver.man @[MatMul.scala 106:27]
    pes_1_1.io.in.ver.sign <= io.in[1][1].ver.sign @[MatMul.scala 106:27]
    pes_1_2.io.in.hor.exp <= io.in[1][2].hor.exp @[MatMul.scala 105:27]
    pes_1_2.io.in.hor.man <= io.in[1][2].hor.man @[MatMul.scala 105:27]
    pes_1_2.io.in.hor.sign <= io.in[1][2].hor.sign @[MatMul.scala 105:27]
    pes_1_2.io.in.ver.exp <= io.in[1][2].ver.exp @[MatMul.scala 106:27]
    pes_1_2.io.in.ver.man <= io.in[1][2].ver.man @[MatMul.scala 106:27]
    pes_1_2.io.in.ver.sign <= io.in[1][2].ver.sign @[MatMul.scala 106:27]
    pes_1_3.io.in.hor.exp <= io.in[1][3].hor.exp @[MatMul.scala 105:27]
    pes_1_3.io.in.hor.man <= io.in[1][3].hor.man @[MatMul.scala 105:27]
    pes_1_3.io.in.hor.sign <= io.in[1][3].hor.sign @[MatMul.scala 105:27]
    pes_1_3.io.in.ver.exp <= io.in[1][3].ver.exp @[MatMul.scala 106:27]
    pes_1_3.io.in.ver.man <= io.in[1][3].ver.man @[MatMul.scala 106:27]
    pes_1_3.io.in.ver.sign <= io.in[1][3].ver.sign @[MatMul.scala 106:27]
    pes_2_0.io.in.hor.exp <= io.in[2][0].hor.exp @[MatMul.scala 105:27]
    pes_2_0.io.in.hor.man <= io.in[2][0].hor.man @[MatMul.scala 105:27]
    pes_2_0.io.in.hor.sign <= io.in[2][0].hor.sign @[MatMul.scala 105:27]
    pes_2_0.io.in.ver.exp <= io.in[2][0].ver.exp @[MatMul.scala 106:27]
    pes_2_0.io.in.ver.man <= io.in[2][0].ver.man @[MatMul.scala 106:27]
    pes_2_0.io.in.ver.sign <= io.in[2][0].ver.sign @[MatMul.scala 106:27]
    pes_2_1.io.in.hor.exp <= io.in[2][1].hor.exp @[MatMul.scala 105:27]
    pes_2_1.io.in.hor.man <= io.in[2][1].hor.man @[MatMul.scala 105:27]
    pes_2_1.io.in.hor.sign <= io.in[2][1].hor.sign @[MatMul.scala 105:27]
    pes_2_1.io.in.ver.exp <= io.in[2][1].ver.exp @[MatMul.scala 106:27]
    pes_2_1.io.in.ver.man <= io.in[2][1].ver.man @[MatMul.scala 106:27]
    pes_2_1.io.in.ver.sign <= io.in[2][1].ver.sign @[MatMul.scala 106:27]
    pes_2_2.io.in.hor.exp <= io.in[2][2].hor.exp @[MatMul.scala 105:27]
    pes_2_2.io.in.hor.man <= io.in[2][2].hor.man @[MatMul.scala 105:27]
    pes_2_2.io.in.hor.sign <= io.in[2][2].hor.sign @[MatMul.scala 105:27]
    pes_2_2.io.in.ver.exp <= io.in[2][2].ver.exp @[MatMul.scala 106:27]
    pes_2_2.io.in.ver.man <= io.in[2][2].ver.man @[MatMul.scala 106:27]
    pes_2_2.io.in.ver.sign <= io.in[2][2].ver.sign @[MatMul.scala 106:27]
    pes_2_3.io.in.hor.exp <= io.in[2][3].hor.exp @[MatMul.scala 105:27]
    pes_2_3.io.in.hor.man <= io.in[2][3].hor.man @[MatMul.scala 105:27]
    pes_2_3.io.in.hor.sign <= io.in[2][3].hor.sign @[MatMul.scala 105:27]
    pes_2_3.io.in.ver.exp <= io.in[2][3].ver.exp @[MatMul.scala 106:27]
    pes_2_3.io.in.ver.man <= io.in[2][3].ver.man @[MatMul.scala 106:27]
    pes_2_3.io.in.ver.sign <= io.in[2][3].ver.sign @[MatMul.scala 106:27]
    pes_3_0.io.in.hor.exp <= io.in[3][0].hor.exp @[MatMul.scala 105:27]
    pes_3_0.io.in.hor.man <= io.in[3][0].hor.man @[MatMul.scala 105:27]
    pes_3_0.io.in.hor.sign <= io.in[3][0].hor.sign @[MatMul.scala 105:27]
    pes_3_0.io.in.ver.exp <= io.in[3][0].ver.exp @[MatMul.scala 106:27]
    pes_3_0.io.in.ver.man <= io.in[3][0].ver.man @[MatMul.scala 106:27]
    pes_3_0.io.in.ver.sign <= io.in[3][0].ver.sign @[MatMul.scala 106:27]
    pes_3_1.io.in.hor.exp <= io.in[3][1].hor.exp @[MatMul.scala 105:27]
    pes_3_1.io.in.hor.man <= io.in[3][1].hor.man @[MatMul.scala 105:27]
    pes_3_1.io.in.hor.sign <= io.in[3][1].hor.sign @[MatMul.scala 105:27]
    pes_3_1.io.in.ver.exp <= io.in[3][1].ver.exp @[MatMul.scala 106:27]
    pes_3_1.io.in.ver.man <= io.in[3][1].ver.man @[MatMul.scala 106:27]
    pes_3_1.io.in.ver.sign <= io.in[3][1].ver.sign @[MatMul.scala 106:27]
    pes_3_2.io.in.hor.exp <= io.in[3][2].hor.exp @[MatMul.scala 105:27]
    pes_3_2.io.in.hor.man <= io.in[3][2].hor.man @[MatMul.scala 105:27]
    pes_3_2.io.in.hor.sign <= io.in[3][2].hor.sign @[MatMul.scala 105:27]
    pes_3_2.io.in.ver.exp <= io.in[3][2].ver.exp @[MatMul.scala 106:27]
    pes_3_2.io.in.ver.man <= io.in[3][2].ver.man @[MatMul.scala 106:27]
    pes_3_2.io.in.ver.sign <= io.in[3][2].ver.sign @[MatMul.scala 106:27]
    pes_3_3.io.in.hor.exp <= io.in[3][3].hor.exp @[MatMul.scala 105:27]
    pes_3_3.io.in.hor.man <= io.in[3][3].hor.man @[MatMul.scala 105:27]
    pes_3_3.io.in.hor.sign <= io.in[3][3].hor.sign @[MatMul.scala 105:27]
    pes_3_3.io.in.ver.exp <= io.in[3][3].ver.exp @[MatMul.scala 106:27]
    pes_3_3.io.in.ver.man <= io.in[3][3].ver.man @[MatMul.scala 106:27]
    pes_3_3.io.in.ver.sign <= io.in[3][3].ver.sign @[MatMul.scala 106:27]
    pes_0_1.io.in.hor.exp <= pes_0_0.io.out.hor.exp @[MatMul.scala 113:27]
    pes_0_1.io.in.hor.man <= pes_0_0.io.out.hor.man @[MatMul.scala 113:27]
    pes_0_1.io.in.hor.sign <= pes_0_0.io.out.hor.sign @[MatMul.scala 113:27]
    pes_0_2.io.in.hor.exp <= pes_0_1.io.out.hor.exp @[MatMul.scala 113:27]
    pes_0_2.io.in.hor.man <= pes_0_1.io.out.hor.man @[MatMul.scala 113:27]
    pes_0_2.io.in.hor.sign <= pes_0_1.io.out.hor.sign @[MatMul.scala 113:27]
    pes_0_3.io.in.hor.exp <= pes_0_2.io.out.hor.exp @[MatMul.scala 113:27]
    pes_0_3.io.in.hor.man <= pes_0_2.io.out.hor.man @[MatMul.scala 113:27]
    pes_0_3.io.in.hor.sign <= pes_0_2.io.out.hor.sign @[MatMul.scala 113:27]
    pes_1_1.io.in.hor.exp <= pes_1_0.io.out.hor.exp @[MatMul.scala 113:27]
    pes_1_1.io.in.hor.man <= pes_1_0.io.out.hor.man @[MatMul.scala 113:27]
    pes_1_1.io.in.hor.sign <= pes_1_0.io.out.hor.sign @[MatMul.scala 113:27]
    pes_1_2.io.in.hor.exp <= pes_1_1.io.out.hor.exp @[MatMul.scala 113:27]
    pes_1_2.io.in.hor.man <= pes_1_1.io.out.hor.man @[MatMul.scala 113:27]
    pes_1_2.io.in.hor.sign <= pes_1_1.io.out.hor.sign @[MatMul.scala 113:27]
    pes_1_3.io.in.hor.exp <= pes_1_2.io.out.hor.exp @[MatMul.scala 113:27]
    pes_1_3.io.in.hor.man <= pes_1_2.io.out.hor.man @[MatMul.scala 113:27]
    pes_1_3.io.in.hor.sign <= pes_1_2.io.out.hor.sign @[MatMul.scala 113:27]
    pes_2_1.io.in.hor.exp <= pes_2_0.io.out.hor.exp @[MatMul.scala 113:27]
    pes_2_1.io.in.hor.man <= pes_2_0.io.out.hor.man @[MatMul.scala 113:27]
    pes_2_1.io.in.hor.sign <= pes_2_0.io.out.hor.sign @[MatMul.scala 113:27]
    pes_2_2.io.in.hor.exp <= pes_2_1.io.out.hor.exp @[MatMul.scala 113:27]
    pes_2_2.io.in.hor.man <= pes_2_1.io.out.hor.man @[MatMul.scala 113:27]
    pes_2_2.io.in.hor.sign <= pes_2_1.io.out.hor.sign @[MatMul.scala 113:27]
    pes_2_3.io.in.hor.exp <= pes_2_2.io.out.hor.exp @[MatMul.scala 113:27]
    pes_2_3.io.in.hor.man <= pes_2_2.io.out.hor.man @[MatMul.scala 113:27]
    pes_2_3.io.in.hor.sign <= pes_2_2.io.out.hor.sign @[MatMul.scala 113:27]
    pes_3_1.io.in.hor.exp <= pes_3_0.io.out.hor.exp @[MatMul.scala 113:27]
    pes_3_1.io.in.hor.man <= pes_3_0.io.out.hor.man @[MatMul.scala 113:27]
    pes_3_1.io.in.hor.sign <= pes_3_0.io.out.hor.sign @[MatMul.scala 113:27]
    pes_3_2.io.in.hor.exp <= pes_3_1.io.out.hor.exp @[MatMul.scala 113:27]
    pes_3_2.io.in.hor.man <= pes_3_1.io.out.hor.man @[MatMul.scala 113:27]
    pes_3_2.io.in.hor.sign <= pes_3_1.io.out.hor.sign @[MatMul.scala 113:27]
    pes_3_3.io.in.hor.exp <= pes_3_2.io.out.hor.exp @[MatMul.scala 113:27]
    pes_3_3.io.in.hor.man <= pes_3_2.io.out.hor.man @[MatMul.scala 113:27]
    pes_3_3.io.in.hor.sign <= pes_3_2.io.out.hor.sign @[MatMul.scala 113:27]
    pes_1_0.io.in.ver.exp <= pes_0_0.io.out.ver.exp @[MatMul.scala 120:27]
    pes_1_0.io.in.ver.man <= pes_0_0.io.out.ver.man @[MatMul.scala 120:27]
    pes_1_0.io.in.ver.sign <= pes_0_0.io.out.ver.sign @[MatMul.scala 120:27]
    pes_1_1.io.in.ver.exp <= pes_0_1.io.out.ver.exp @[MatMul.scala 120:27]
    pes_1_1.io.in.ver.man <= pes_0_1.io.out.ver.man @[MatMul.scala 120:27]
    pes_1_1.io.in.ver.sign <= pes_0_1.io.out.ver.sign @[MatMul.scala 120:27]
    pes_1_2.io.in.ver.exp <= pes_0_2.io.out.ver.exp @[MatMul.scala 120:27]
    pes_1_2.io.in.ver.man <= pes_0_2.io.out.ver.man @[MatMul.scala 120:27]
    pes_1_2.io.in.ver.sign <= pes_0_2.io.out.ver.sign @[MatMul.scala 120:27]
    pes_1_3.io.in.ver.exp <= pes_0_3.io.out.ver.exp @[MatMul.scala 120:27]
    pes_1_3.io.in.ver.man <= pes_0_3.io.out.ver.man @[MatMul.scala 120:27]
    pes_1_3.io.in.ver.sign <= pes_0_3.io.out.ver.sign @[MatMul.scala 120:27]
    pes_2_0.io.in.ver.exp <= pes_1_0.io.out.ver.exp @[MatMul.scala 120:27]
    pes_2_0.io.in.ver.man <= pes_1_0.io.out.ver.man @[MatMul.scala 120:27]
    pes_2_0.io.in.ver.sign <= pes_1_0.io.out.ver.sign @[MatMul.scala 120:27]
    pes_2_1.io.in.ver.exp <= pes_1_1.io.out.ver.exp @[MatMul.scala 120:27]
    pes_2_1.io.in.ver.man <= pes_1_1.io.out.ver.man @[MatMul.scala 120:27]
    pes_2_1.io.in.ver.sign <= pes_1_1.io.out.ver.sign @[MatMul.scala 120:27]
    pes_2_2.io.in.ver.exp <= pes_1_2.io.out.ver.exp @[MatMul.scala 120:27]
    pes_2_2.io.in.ver.man <= pes_1_2.io.out.ver.man @[MatMul.scala 120:27]
    pes_2_2.io.in.ver.sign <= pes_1_2.io.out.ver.sign @[MatMul.scala 120:27]
    pes_2_3.io.in.ver.exp <= pes_1_3.io.out.ver.exp @[MatMul.scala 120:27]
    pes_2_3.io.in.ver.man <= pes_1_3.io.out.ver.man @[MatMul.scala 120:27]
    pes_2_3.io.in.ver.sign <= pes_1_3.io.out.ver.sign @[MatMul.scala 120:27]
    pes_3_0.io.in.ver.exp <= pes_2_0.io.out.ver.exp @[MatMul.scala 120:27]
    pes_3_0.io.in.ver.man <= pes_2_0.io.out.ver.man @[MatMul.scala 120:27]
    pes_3_0.io.in.ver.sign <= pes_2_0.io.out.ver.sign @[MatMul.scala 120:27]
    pes_3_1.io.in.ver.exp <= pes_2_1.io.out.ver.exp @[MatMul.scala 120:27]
    pes_3_1.io.in.ver.man <= pes_2_1.io.out.ver.man @[MatMul.scala 120:27]
    pes_3_1.io.in.ver.sign <= pes_2_1.io.out.ver.sign @[MatMul.scala 120:27]
    pes_3_2.io.in.ver.exp <= pes_2_2.io.out.ver.exp @[MatMul.scala 120:27]
    pes_3_2.io.in.ver.man <= pes_2_2.io.out.ver.man @[MatMul.scala 120:27]
    pes_3_2.io.in.ver.sign <= pes_2_2.io.out.ver.sign @[MatMul.scala 120:27]
    pes_3_3.io.in.ver.exp <= pes_2_3.io.out.ver.exp @[MatMul.scala 120:27]
    pes_3_3.io.in.ver.man <= pes_2_3.io.out.ver.man @[MatMul.scala 120:27]
    pes_3_3.io.in.ver.sign <= pes_2_3.io.out.ver.sign @[MatMul.scala 120:27]
    io.out[0][0].hor <= pes_0_0.io.out.hor @[MatMul.scala 127:24]
    io.out[0][0].ver <= pes_0_0.io.out.ver @[MatMul.scala 128:24]
    io.out[0][0].result <= pes_0_0.io.out.result @[MatMul.scala 129:27]
    io.out[0][1].hor <= pes_0_1.io.out.hor @[MatMul.scala 127:24]
    io.out[0][1].ver <= pes_0_1.io.out.ver @[MatMul.scala 128:24]
    io.out[0][1].result <= pes_0_1.io.out.result @[MatMul.scala 129:27]
    io.out[0][2].hor <= pes_0_2.io.out.hor @[MatMul.scala 127:24]
    io.out[0][2].ver <= pes_0_2.io.out.ver @[MatMul.scala 128:24]
    io.out[0][2].result <= pes_0_2.io.out.result @[MatMul.scala 129:27]
    io.out[0][3].hor <= pes_0_3.io.out.hor @[MatMul.scala 127:24]
    io.out[0][3].ver <= pes_0_3.io.out.ver @[MatMul.scala 128:24]
    io.out[0][3].result <= pes_0_3.io.out.result @[MatMul.scala 129:27]
    io.out[1][0].hor <= pes_1_0.io.out.hor @[MatMul.scala 127:24]
    io.out[1][0].ver <= pes_1_0.io.out.ver @[MatMul.scala 128:24]
    io.out[1][0].result <= pes_1_0.io.out.result @[MatMul.scala 129:27]
    io.out[1][1].hor <= pes_1_1.io.out.hor @[MatMul.scala 127:24]
    io.out[1][1].ver <= pes_1_1.io.out.ver @[MatMul.scala 128:24]
    io.out[1][1].result <= pes_1_1.io.out.result @[MatMul.scala 129:27]
    io.out[1][2].hor <= pes_1_2.io.out.hor @[MatMul.scala 127:24]
    io.out[1][2].ver <= pes_1_2.io.out.ver @[MatMul.scala 128:24]
    io.out[1][2].result <= pes_1_2.io.out.result @[MatMul.scala 129:27]
    io.out[1][3].hor <= pes_1_3.io.out.hor @[MatMul.scala 127:24]
    io.out[1][3].ver <= pes_1_3.io.out.ver @[MatMul.scala 128:24]
    io.out[1][3].result <= pes_1_3.io.out.result @[MatMul.scala 129:27]
    io.out[2][0].hor <= pes_2_0.io.out.hor @[MatMul.scala 127:24]
    io.out[2][0].ver <= pes_2_0.io.out.ver @[MatMul.scala 128:24]
    io.out[2][0].result <= pes_2_0.io.out.result @[MatMul.scala 129:27]
    io.out[2][1].hor <= pes_2_1.io.out.hor @[MatMul.scala 127:24]
    io.out[2][1].ver <= pes_2_1.io.out.ver @[MatMul.scala 128:24]
    io.out[2][1].result <= pes_2_1.io.out.result @[MatMul.scala 129:27]
    io.out[2][2].hor <= pes_2_2.io.out.hor @[MatMul.scala 127:24]
    io.out[2][2].ver <= pes_2_2.io.out.ver @[MatMul.scala 128:24]
    io.out[2][2].result <= pes_2_2.io.out.result @[MatMul.scala 129:27]
    io.out[2][3].hor <= pes_2_3.io.out.hor @[MatMul.scala 127:24]
    io.out[2][3].ver <= pes_2_3.io.out.ver @[MatMul.scala 128:24]
    io.out[2][3].result <= pes_2_3.io.out.result @[MatMul.scala 129:27]
    io.out[3][0].hor <= pes_3_0.io.out.hor @[MatMul.scala 127:24]
    io.out[3][0].ver <= pes_3_0.io.out.ver @[MatMul.scala 128:24]
    io.out[3][0].result <= pes_3_0.io.out.result @[MatMul.scala 129:27]
    io.out[3][1].hor <= pes_3_1.io.out.hor @[MatMul.scala 127:24]
    io.out[3][1].ver <= pes_3_1.io.out.ver @[MatMul.scala 128:24]
    io.out[3][1].result <= pes_3_1.io.out.result @[MatMul.scala 129:27]
    io.out[3][2].hor <= pes_3_2.io.out.hor @[MatMul.scala 127:24]
    io.out[3][2].ver <= pes_3_2.io.out.ver @[MatMul.scala 128:24]
    io.out[3][2].result <= pes_3_2.io.out.result @[MatMul.scala 129:27]
    io.out[3][3].hor <= pes_3_3.io.out.hor @[MatMul.scala 127:24]
    io.out[3][3].ver <= pes_3_3.io.out.ver @[MatMul.scala 128:24]
    io.out[3][3].result <= pes_3_3.io.out.result @[MatMul.scala 129:27]

