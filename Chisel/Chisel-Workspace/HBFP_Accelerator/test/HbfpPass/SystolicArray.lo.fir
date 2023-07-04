FIRRTL version 1.1.0
circuit SystolicArray :
  module FPMult :
    input clock : Clock
    input reset : UInt<1>
    input io_in_a_sign : UInt<1>
    input io_in_a_man : UInt<4>
    input io_in_a_exp : UInt<8>
    input io_in_b_sign : UInt<1>
    input io_in_b_man : UInt<4>
    input io_in_b_exp : UInt<8>
    output io_out_result_sign : UInt<1>
    output io_out_result_man : UInt<4>
    output io_out_result_exp : UInt<8>

    node _io_out_result_sign_T = xor(io_in_a_sign, io_in_b_sign) @[MatMul.scala 28:38]
    node _io_out_result_exp_T = add(io_in_a_exp, io_in_b_exp) @[MatMul.scala 29:36]
    node _io_out_result_exp_T_1 = tail(_io_out_result_exp_T, 1) @[MatMul.scala 29:36]
    node _io_out_result_man_T = mul(io_in_a_man, io_in_b_man) @[MatMul.scala 30:36]
    io_out_result_sign <= _io_out_result_sign_T @[MatMul.scala 28:22]
    io_out_result_man <= bits(_io_out_result_man_T, 3, 0) @[MatMul.scala 30:21]
    io_out_result_exp <= _io_out_result_exp_T_1 @[MatMul.scala 29:21]

  module FPAdder :
    input clock : Clock
    input reset : UInt<1>
    input io_in_a_sign : UInt<1>
    input io_in_a_man : UInt<4>
    input io_in_a_exp : UInt<8>
    input io_in_b_sign : UInt<1>
    input io_in_b_man : UInt<4>
    input io_in_b_exp : UInt<8>
    output io_out_result_sign : UInt<1>
    output io_out_result_man : UInt<4>
    output io_out_result_exp : UInt<8>

    node _exp_diff_T = gt(io_in_a_exp, io_in_b_exp) @[MatMul.scala 44:34]
    node _exp_diff_T_1 = sub(io_in_a_exp, io_in_b_exp) @[MatMul.scala 44:61]
    node _exp_diff_T_2 = tail(_exp_diff_T_1, 1) @[MatMul.scala 44:61]
    node _exp_diff_T_3 = sub(io_in_b_exp, io_in_a_exp) @[MatMul.scala 44:88]
    node _exp_diff_T_4 = tail(_exp_diff_T_3, 1) @[MatMul.scala 44:88]
    node exp_diff = mux(_exp_diff_T, _exp_diff_T_2, _exp_diff_T_4) @[MatMul.scala 44:21]
    node _io_out_result_sign_T = gt(io_in_a_exp, io_in_b_exp) @[MatMul.scala 46:41]
    node _io_out_result_sign_T_1 = mux(_io_out_result_sign_T, io_in_a_sign, io_in_b_sign) @[MatMul.scala 46:28]
    node _io_out_result_exp_T = gt(io_in_a_exp, io_in_b_exp) @[MatMul.scala 47:40]
    node _io_out_result_exp_T_1 = mux(_io_out_result_exp_T, io_in_a_exp, io_in_b_exp) @[MatMul.scala 47:27]
    node _io_out_result_man_T = gt(io_in_a_exp, io_in_b_exp) @[MatMul.scala 48:40]
    node _io_out_result_man_T_1 = dshr(io_in_b_man, exp_diff) @[MatMul.scala 48:82]
    node _io_out_result_man_T_2 = add(io_in_a_man, _io_out_result_man_T_1) @[MatMul.scala 48:67]
    node _io_out_result_man_T_3 = tail(_io_out_result_man_T_2, 1) @[MatMul.scala 48:67]
    node _io_out_result_man_T_4 = dshr(io_in_a_man, exp_diff) @[MatMul.scala 48:109]
    node _io_out_result_man_T_5 = add(_io_out_result_man_T_4, io_in_b_man) @[MatMul.scala 48:122]
    node _io_out_result_man_T_6 = tail(_io_out_result_man_T_5, 1) @[MatMul.scala 48:122]
    node _io_out_result_man_T_7 = mux(_io_out_result_man_T, _io_out_result_man_T_3, _io_out_result_man_T_6) @[MatMul.scala 48:27]
    io_out_result_sign <= _io_out_result_sign_T_1 @[MatMul.scala 46:22]
    io_out_result_man <= _io_out_result_man_T_7 @[MatMul.scala 48:21]
    io_out_result_exp <= _io_out_result_exp_T_1 @[MatMul.scala 47:21]

  module PE :
    input clock : Clock
    input reset : UInt<1>
    input io_in_hor_sign : UInt<1>
    input io_in_hor_man : UInt<4>
    input io_in_hor_exp : UInt<8>
    input io_in_ver_sign : UInt<1>
    input io_in_ver_man : UInt<4>
    input io_in_ver_exp : UInt<8>
    output io_out_hor_sign : UInt<1>
    output io_out_hor_man : UInt<4>
    output io_out_hor_exp : UInt<8>
    output io_out_ver_sign : UInt<1>
    output io_out_ver_man : UInt<4>
    output io_out_ver_exp : UInt<8>
    output io_out_result_sign : UInt<1>
    output io_out_result_man : UInt<4>
    output io_out_result_exp : UInt<8>

    inst fpmult of FPMult @[MatMul.scala 70:24]
    inst fpadder of FPAdder @[MatMul.scala 74:25]
    reg result_buffer_sign : UInt<1>, clock with :
      reset => (UInt<1>("h0"), result_buffer_sign) @[MatMul.scala 67:28]
    reg result_buffer_man : UInt<4>, clock with :
      reset => (UInt<1>("h0"), result_buffer_man) @[MatMul.scala 67:28]
    reg result_buffer_exp : UInt<8>, clock with :
      reset => (UInt<1>("h0"), result_buffer_exp) @[MatMul.scala 67:28]
    reg mult_buffer_sign : UInt<1>, clock with :
      reset => (UInt<1>("h0"), mult_buffer_sign) @[MatMul.scala 68:26]
    reg mult_buffer_man : UInt<4>, clock with :
      reset => (UInt<1>("h0"), mult_buffer_man) @[MatMul.scala 68:26]
    reg mult_buffer_exp : UInt<8>, clock with :
      reset => (UInt<1>("h0"), mult_buffer_exp) @[MatMul.scala 68:26]
    reg io_out_hor_REG_sign : UInt<1>, clock with :
      reset => (UInt<1>("h0"), io_out_hor_REG_sign) @[MatMul.scala 79:26]
    reg io_out_hor_REG_man : UInt<4>, clock with :
      reset => (UInt<1>("h0"), io_out_hor_REG_man) @[MatMul.scala 79:26]
    reg io_out_hor_REG_exp : UInt<8>, clock with :
      reset => (UInt<1>("h0"), io_out_hor_REG_exp) @[MatMul.scala 79:26]
    reg io_out_ver_REG_sign : UInt<1>, clock with :
      reset => (UInt<1>("h0"), io_out_ver_REG_sign) @[MatMul.scala 80:26]
    reg io_out_ver_REG_man : UInt<4>, clock with :
      reset => (UInt<1>("h0"), io_out_ver_REG_man) @[MatMul.scala 80:26]
    reg io_out_ver_REG_exp : UInt<8>, clock with :
      reset => (UInt<1>("h0"), io_out_ver_REG_exp) @[MatMul.scala 80:26]
    io_out_hor_sign <= io_out_hor_REG_sign @[MatMul.scala 79:16]
    io_out_hor_man <= io_out_hor_REG_man @[MatMul.scala 79:16]
    io_out_hor_exp <= io_out_hor_REG_exp @[MatMul.scala 79:16]
    io_out_ver_sign <= io_out_ver_REG_sign @[MatMul.scala 80:16]
    io_out_ver_man <= io_out_ver_REG_man @[MatMul.scala 80:16]
    io_out_ver_exp <= io_out_ver_REG_exp @[MatMul.scala 80:16]
    io_out_result_sign <= result_buffer_sign @[MatMul.scala 81:19]
    io_out_result_man <= result_buffer_man @[MatMul.scala 81:19]
    io_out_result_exp <= result_buffer_exp @[MatMul.scala 81:19]
    result_buffer_sign <= fpadder.io_out_result_sign @[MatMul.scala 77:19]
    result_buffer_man <= fpadder.io_out_result_man @[MatMul.scala 77:19]
    result_buffer_exp <= fpadder.io_out_result_exp @[MatMul.scala 77:19]
    mult_buffer_sign <= mult_buffer_sign @[MatMul.scala 68:26]
    mult_buffer_man <= mult_buffer_man @[MatMul.scala 68:26]
    mult_buffer_exp <= mult_buffer_exp @[MatMul.scala 68:26]
    fpmult.clock <= clock
    fpmult.reset <= reset
    fpmult.io_in_a_sign <= io_in_hor_sign @[MatMul.scala 71:20]
    fpmult.io_in_a_man <= io_in_hor_man @[MatMul.scala 71:20]
    fpmult.io_in_a_exp <= io_in_hor_exp @[MatMul.scala 71:20]
    fpmult.io_in_b_sign <= io_in_ver_sign @[MatMul.scala 72:20]
    fpmult.io_in_b_man <= io_in_ver_man @[MatMul.scala 72:20]
    fpmult.io_in_b_exp <= io_in_ver_exp @[MatMul.scala 72:20]
    fpadder.clock <= clock
    fpadder.reset <= reset
    fpadder.io_in_a_sign <= fpmult.io_out_result_sign @[MatMul.scala 75:21]
    fpadder.io_in_a_man <= fpmult.io_out_result_man @[MatMul.scala 75:21]
    fpadder.io_in_a_exp <= fpmult.io_out_result_exp @[MatMul.scala 75:21]
    fpadder.io_in_b_sign <= result_buffer_sign @[MatMul.scala 76:21]
    fpadder.io_in_b_man <= result_buffer_man @[MatMul.scala 76:21]
    fpadder.io_in_b_exp <= result_buffer_exp @[MatMul.scala 76:21]
    io_out_hor_REG_sign <= io_in_hor_sign @[MatMul.scala 79:26]
    io_out_hor_REG_man <= io_in_hor_man @[MatMul.scala 79:26]
    io_out_hor_REG_exp <= io_in_hor_exp @[MatMul.scala 79:26]
    io_out_ver_REG_sign <= io_in_ver_sign @[MatMul.scala 80:26]
    io_out_ver_REG_man <= io_in_ver_man @[MatMul.scala 80:26]
    io_out_ver_REG_exp <= io_in_ver_exp @[MatMul.scala 80:26]

  module SystolicArray :
    input clock : Clock
    input reset : UInt<1>
    input io_in_0_0_hor_sign : UInt<1>
    input io_in_0_0_hor_man : UInt<4>
    input io_in_0_0_hor_exp : UInt<8>
    input io_in_0_0_ver_sign : UInt<1>
    input io_in_0_0_ver_man : UInt<4>
    input io_in_0_0_ver_exp : UInt<8>
    input io_in_0_1_hor_sign : UInt<1>
    input io_in_0_1_hor_man : UInt<4>
    input io_in_0_1_hor_exp : UInt<8>
    input io_in_0_1_ver_sign : UInt<1>
    input io_in_0_1_ver_man : UInt<4>
    input io_in_0_1_ver_exp : UInt<8>
    input io_in_1_0_hor_sign : UInt<1>
    input io_in_1_0_hor_man : UInt<4>
    input io_in_1_0_hor_exp : UInt<8>
    input io_in_1_0_ver_sign : UInt<1>
    input io_in_1_0_ver_man : UInt<4>
    input io_in_1_0_ver_exp : UInt<8>
    input io_in_1_1_hor_sign : UInt<1>
    input io_in_1_1_hor_man : UInt<4>
    input io_in_1_1_hor_exp : UInt<8>
    input io_in_1_1_ver_sign : UInt<1>
    input io_in_1_1_ver_man : UInt<4>
    input io_in_1_1_ver_exp : UInt<8>
    output io_out_0_0_hor_sign : UInt<1>
    output io_out_0_0_hor_man : UInt<4>
    output io_out_0_0_hor_exp : UInt<8>
    output io_out_0_0_ver_sign : UInt<1>
    output io_out_0_0_ver_man : UInt<4>
    output io_out_0_0_ver_exp : UInt<8>
    output io_out_0_0_result_sign : UInt<1>
    output io_out_0_0_result_man : UInt<4>
    output io_out_0_0_result_exp : UInt<8>
    output io_out_0_1_hor_sign : UInt<1>
    output io_out_0_1_hor_man : UInt<4>
    output io_out_0_1_hor_exp : UInt<8>
    output io_out_0_1_ver_sign : UInt<1>
    output io_out_0_1_ver_man : UInt<4>
    output io_out_0_1_ver_exp : UInt<8>
    output io_out_0_1_result_sign : UInt<1>
    output io_out_0_1_result_man : UInt<4>
    output io_out_0_1_result_exp : UInt<8>
    output io_out_1_0_hor_sign : UInt<1>
    output io_out_1_0_hor_man : UInt<4>
    output io_out_1_0_hor_exp : UInt<8>
    output io_out_1_0_ver_sign : UInt<1>
    output io_out_1_0_ver_man : UInt<4>
    output io_out_1_0_ver_exp : UInt<8>
    output io_out_1_0_result_sign : UInt<1>
    output io_out_1_0_result_man : UInt<4>
    output io_out_1_0_result_exp : UInt<8>
    output io_out_1_1_hor_sign : UInt<1>
    output io_out_1_1_hor_man : UInt<4>
    output io_out_1_1_hor_exp : UInt<8>
    output io_out_1_1_ver_sign : UInt<1>
    output io_out_1_1_ver_man : UInt<4>
    output io_out_1_1_ver_exp : UInt<8>
    output io_out_1_1_result_sign : UInt<1>
    output io_out_1_1_result_man : UInt<4>
    output io_out_1_1_result_exp : UInt<8>

    inst pes_0_0 of PE @[MatMul.scala 100:34]
    inst pes_0_1 of PE @[MatMul.scala 100:34]
    inst pes_1_0 of PE @[MatMul.scala 100:34]
    inst pes_1_1 of PE @[MatMul.scala 100:34]
    io_out_0_0_hor_sign <= pes_0_0.io_out_hor_sign @[MatMul.scala 127:24]
    io_out_0_0_hor_man <= pes_0_0.io_out_hor_man @[MatMul.scala 127:24]
    io_out_0_0_hor_exp <= pes_0_0.io_out_hor_exp @[MatMul.scala 127:24]
    io_out_0_0_ver_sign <= pes_0_0.io_out_ver_sign @[MatMul.scala 128:24]
    io_out_0_0_ver_man <= pes_0_0.io_out_ver_man @[MatMul.scala 128:24]
    io_out_0_0_ver_exp <= pes_0_0.io_out_ver_exp @[MatMul.scala 128:24]
    io_out_0_0_result_sign <= pes_0_0.io_out_result_sign @[MatMul.scala 129:27]
    io_out_0_0_result_man <= pes_0_0.io_out_result_man @[MatMul.scala 129:27]
    io_out_0_0_result_exp <= pes_0_0.io_out_result_exp @[MatMul.scala 129:27]
    io_out_0_1_hor_sign <= pes_0_1.io_out_hor_sign @[MatMul.scala 127:24]
    io_out_0_1_hor_man <= pes_0_1.io_out_hor_man @[MatMul.scala 127:24]
    io_out_0_1_hor_exp <= pes_0_1.io_out_hor_exp @[MatMul.scala 127:24]
    io_out_0_1_ver_sign <= pes_0_1.io_out_ver_sign @[MatMul.scala 128:24]
    io_out_0_1_ver_man <= pes_0_1.io_out_ver_man @[MatMul.scala 128:24]
    io_out_0_1_ver_exp <= pes_0_1.io_out_ver_exp @[MatMul.scala 128:24]
    io_out_0_1_result_sign <= pes_0_1.io_out_result_sign @[MatMul.scala 129:27]
    io_out_0_1_result_man <= pes_0_1.io_out_result_man @[MatMul.scala 129:27]
    io_out_0_1_result_exp <= pes_0_1.io_out_result_exp @[MatMul.scala 129:27]
    io_out_1_0_hor_sign <= pes_1_0.io_out_hor_sign @[MatMul.scala 127:24]
    io_out_1_0_hor_man <= pes_1_0.io_out_hor_man @[MatMul.scala 127:24]
    io_out_1_0_hor_exp <= pes_1_0.io_out_hor_exp @[MatMul.scala 127:24]
    io_out_1_0_ver_sign <= pes_1_0.io_out_ver_sign @[MatMul.scala 128:24]
    io_out_1_0_ver_man <= pes_1_0.io_out_ver_man @[MatMul.scala 128:24]
    io_out_1_0_ver_exp <= pes_1_0.io_out_ver_exp @[MatMul.scala 128:24]
    io_out_1_0_result_sign <= pes_1_0.io_out_result_sign @[MatMul.scala 129:27]
    io_out_1_0_result_man <= pes_1_0.io_out_result_man @[MatMul.scala 129:27]
    io_out_1_0_result_exp <= pes_1_0.io_out_result_exp @[MatMul.scala 129:27]
    io_out_1_1_hor_sign <= pes_1_1.io_out_hor_sign @[MatMul.scala 127:24]
    io_out_1_1_hor_man <= pes_1_1.io_out_hor_man @[MatMul.scala 127:24]
    io_out_1_1_hor_exp <= pes_1_1.io_out_hor_exp @[MatMul.scala 127:24]
    io_out_1_1_ver_sign <= pes_1_1.io_out_ver_sign @[MatMul.scala 128:24]
    io_out_1_1_ver_man <= pes_1_1.io_out_ver_man @[MatMul.scala 128:24]
    io_out_1_1_ver_exp <= pes_1_1.io_out_ver_exp @[MatMul.scala 128:24]
    io_out_1_1_result_sign <= pes_1_1.io_out_result_sign @[MatMul.scala 129:27]
    io_out_1_1_result_man <= pes_1_1.io_out_result_man @[MatMul.scala 129:27]
    io_out_1_1_result_exp <= pes_1_1.io_out_result_exp @[MatMul.scala 129:27]
    pes_0_0.clock <= clock
    pes_0_0.reset <= reset
    pes_0_0.io_in_hor_sign <= io_in_0_0_hor_sign @[MatMul.scala 105:27]
    pes_0_0.io_in_hor_man <= io_in_0_0_hor_man @[MatMul.scala 105:27]
    pes_0_0.io_in_hor_exp <= io_in_0_0_hor_exp @[MatMul.scala 105:27]
    pes_0_0.io_in_ver_sign <= io_in_0_0_ver_sign @[MatMul.scala 106:27]
    pes_0_0.io_in_ver_man <= io_in_0_0_ver_man @[MatMul.scala 106:27]
    pes_0_0.io_in_ver_exp <= io_in_0_0_ver_exp @[MatMul.scala 106:27]
    pes_0_1.clock <= clock
    pes_0_1.reset <= reset
    pes_0_1.io_in_hor_sign <= pes_0_0.io_out_hor_sign @[MatMul.scala 113:27]
    pes_0_1.io_in_hor_man <= pes_0_0.io_out_hor_man @[MatMul.scala 113:27]
    pes_0_1.io_in_hor_exp <= pes_0_0.io_out_hor_exp @[MatMul.scala 113:27]
    pes_0_1.io_in_ver_sign <= io_in_0_1_ver_sign @[MatMul.scala 106:27]
    pes_0_1.io_in_ver_man <= io_in_0_1_ver_man @[MatMul.scala 106:27]
    pes_0_1.io_in_ver_exp <= io_in_0_1_ver_exp @[MatMul.scala 106:27]
    pes_1_0.clock <= clock
    pes_1_0.reset <= reset
    pes_1_0.io_in_hor_sign <= io_in_1_0_hor_sign @[MatMul.scala 105:27]
    pes_1_0.io_in_hor_man <= io_in_1_0_hor_man @[MatMul.scala 105:27]
    pes_1_0.io_in_hor_exp <= io_in_1_0_hor_exp @[MatMul.scala 105:27]
    pes_1_0.io_in_ver_sign <= pes_0_0.io_out_ver_sign @[MatMul.scala 120:27]
    pes_1_0.io_in_ver_man <= pes_0_0.io_out_ver_man @[MatMul.scala 120:27]
    pes_1_0.io_in_ver_exp <= pes_0_0.io_out_ver_exp @[MatMul.scala 120:27]
    pes_1_1.clock <= clock
    pes_1_1.reset <= reset
    pes_1_1.io_in_hor_sign <= pes_1_0.io_out_hor_sign @[MatMul.scala 113:27]
    pes_1_1.io_in_hor_man <= pes_1_0.io_out_hor_man @[MatMul.scala 113:27]
    pes_1_1.io_in_hor_exp <= pes_1_0.io_out_hor_exp @[MatMul.scala 113:27]
    pes_1_1.io_in_ver_sign <= pes_0_1.io_out_ver_sign @[MatMul.scala 120:27]
    pes_1_1.io_in_ver_man <= pes_0_1.io_out_ver_man @[MatMul.scala 120:27]
    pes_1_1.io_in_ver_exp <= pes_0_1.io_out_ver_exp @[MatMul.scala 120:27]
