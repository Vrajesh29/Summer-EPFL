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

    node _io_out_result_sign_T = xor(io_in_a_sign, io_in_b_sign) @[FP_GEMM.scala 30:38]
    node _io_out_result_exp_T = add(io_in_a_exp, io_in_b_exp) @[FP_GEMM.scala 31:36]
    node _io_out_result_exp_T_1 = tail(_io_out_result_exp_T, 1) @[FP_GEMM.scala 31:36]
    node _io_out_result_man_T = mul(io_in_a_man, io_in_b_man) @[FP_GEMM.scala 32:36]
    io_out_result_sign <= _io_out_result_sign_T @[FP_GEMM.scala 30:22]
    io_out_result_man <= bits(_io_out_result_man_T, 3, 0) @[FP_GEMM.scala 32:21]
    io_out_result_exp <= _io_out_result_exp_T_1 @[FP_GEMM.scala 31:21]

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

    node _exp_diff_T = gt(io_in_a_exp, io_in_b_exp) @[FP_GEMM.scala 46:34]
    node _exp_diff_T_1 = sub(io_in_a_exp, io_in_b_exp) @[FP_GEMM.scala 46:61]
    node _exp_diff_T_2 = tail(_exp_diff_T_1, 1) @[FP_GEMM.scala 46:61]
    node _exp_diff_T_3 = sub(io_in_b_exp, io_in_a_exp) @[FP_GEMM.scala 46:88]
    node _exp_diff_T_4 = tail(_exp_diff_T_3, 1) @[FP_GEMM.scala 46:88]
    node exp_diff = mux(_exp_diff_T, _exp_diff_T_2, _exp_diff_T_4) @[FP_GEMM.scala 46:21]
    node _io_out_result_sign_T = gt(io_in_a_exp, io_in_b_exp) @[FP_GEMM.scala 48:41]
    node _io_out_result_sign_T_1 = mux(_io_out_result_sign_T, io_in_a_sign, io_in_b_sign) @[FP_GEMM.scala 48:28]
    node _io_out_result_exp_T = gt(io_in_a_exp, io_in_b_exp) @[FP_GEMM.scala 49:40]
    node _io_out_result_exp_T_1 = mux(_io_out_result_exp_T, io_in_a_exp, io_in_b_exp) @[FP_GEMM.scala 49:27]
    node _io_out_result_man_T = gt(io_in_a_exp, io_in_b_exp) @[FP_GEMM.scala 50:40]
    node _io_out_result_man_T_1 = dshr(io_in_b_man, exp_diff) @[FP_GEMM.scala 50:82]
    node _io_out_result_man_T_2 = add(io_in_a_man, _io_out_result_man_T_1) @[FP_GEMM.scala 50:67]
    node _io_out_result_man_T_3 = tail(_io_out_result_man_T_2, 1) @[FP_GEMM.scala 50:67]
    node _io_out_result_man_T_4 = dshr(io_in_a_man, exp_diff) @[FP_GEMM.scala 50:109]
    node _io_out_result_man_T_5 = add(_io_out_result_man_T_4, io_in_b_man) @[FP_GEMM.scala 50:122]
    node _io_out_result_man_T_6 = tail(_io_out_result_man_T_5, 1) @[FP_GEMM.scala 50:122]
    node _io_out_result_man_T_7 = mux(_io_out_result_man_T, _io_out_result_man_T_3, _io_out_result_man_T_6) @[FP_GEMM.scala 50:27]
    io_out_result_sign <= _io_out_result_sign_T_1 @[FP_GEMM.scala 48:22]
    io_out_result_man <= _io_out_result_man_T_7 @[FP_GEMM.scala 50:21]
    io_out_result_exp <= _io_out_result_exp_T_1 @[FP_GEMM.scala 49:21]

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

    inst fpmult of FPMult @[FP_GEMM.scala 72:24]
    inst fpadder of FPAdder @[FP_GEMM.scala 76:25]
    reg result_buffer_sign : UInt<1>, clock with :
      reset => (UInt<1>("h0"), result_buffer_sign) @[FP_GEMM.scala 69:28]
    reg result_buffer_man : UInt<4>, clock with :
      reset => (UInt<1>("h0"), result_buffer_man) @[FP_GEMM.scala 69:28]
    reg result_buffer_exp : UInt<8>, clock with :
      reset => (UInt<1>("h0"), result_buffer_exp) @[FP_GEMM.scala 69:28]
    reg mult_buffer_sign : UInt<1>, clock with :
      reset => (UInt<1>("h0"), mult_buffer_sign) @[FP_GEMM.scala 70:26]
    reg mult_buffer_man : UInt<4>, clock with :
      reset => (UInt<1>("h0"), mult_buffer_man) @[FP_GEMM.scala 70:26]
    reg mult_buffer_exp : UInt<8>, clock with :
      reset => (UInt<1>("h0"), mult_buffer_exp) @[FP_GEMM.scala 70:26]
    io_out_hor_sign <= io_in_hor_sign @[FP_GEMM.scala 81:16]
    io_out_hor_man <= io_in_hor_man @[FP_GEMM.scala 81:16]
    io_out_hor_exp <= io_in_hor_exp @[FP_GEMM.scala 81:16]
    io_out_ver_sign <= io_in_ver_sign @[FP_GEMM.scala 82:16]
    io_out_ver_man <= io_in_ver_man @[FP_GEMM.scala 82:16]
    io_out_ver_exp <= io_in_ver_exp @[FP_GEMM.scala 82:16]
    io_out_result_sign <= result_buffer_sign @[FP_GEMM.scala 83:19]
    io_out_result_man <= result_buffer_man @[FP_GEMM.scala 83:19]
    io_out_result_exp <= result_buffer_exp @[FP_GEMM.scala 83:19]
    result_buffer_sign <= fpadder.io_out_result_sign @[FP_GEMM.scala 79:19]
    result_buffer_man <= fpadder.io_out_result_man @[FP_GEMM.scala 79:19]
    result_buffer_exp <= fpadder.io_out_result_exp @[FP_GEMM.scala 79:19]
    mult_buffer_sign <= mult_buffer_sign @[FP_GEMM.scala 70:26]
    mult_buffer_man <= mult_buffer_man @[FP_GEMM.scala 70:26]
    mult_buffer_exp <= mult_buffer_exp @[FP_GEMM.scala 70:26]
    fpmult.clock <= clock
    fpmult.reset <= reset
    fpmult.io_in_a_sign <= io_in_hor_sign @[FP_GEMM.scala 73:20]
    fpmult.io_in_a_man <= io_in_hor_man @[FP_GEMM.scala 73:20]
    fpmult.io_in_a_exp <= io_in_hor_exp @[FP_GEMM.scala 73:20]
    fpmult.io_in_b_sign <= io_in_ver_sign @[FP_GEMM.scala 74:20]
    fpmult.io_in_b_man <= io_in_ver_man @[FP_GEMM.scala 74:20]
    fpmult.io_in_b_exp <= io_in_ver_exp @[FP_GEMM.scala 74:20]
    fpadder.clock <= clock
    fpadder.reset <= reset
    fpadder.io_in_a_sign <= fpmult.io_out_result_sign @[FP_GEMM.scala 77:21]
    fpadder.io_in_a_man <= fpmult.io_out_result_man @[FP_GEMM.scala 77:21]
    fpadder.io_in_a_exp <= fpmult.io_out_result_exp @[FP_GEMM.scala 77:21]
    fpadder.io_in_b_sign <= result_buffer_sign @[FP_GEMM.scala 78:21]
    fpadder.io_in_b_man <= result_buffer_man @[FP_GEMM.scala 78:21]
    fpadder.io_in_b_exp <= result_buffer_exp @[FP_GEMM.scala 78:21]

  module Queue :
    input clock : Clock
    input reset : UInt<1>
    output io_enq_ready : UInt<1>
    input io_enq_valid : UInt<1>
    input io_enq_bits_0_0_hor_sign : UInt<1>
    input io_enq_bits_0_0_hor_man : UInt<4>
    input io_enq_bits_0_0_hor_exp : UInt<8>
    input io_enq_bits_0_0_ver_sign : UInt<1>
    input io_enq_bits_0_0_ver_man : UInt<4>
    input io_enq_bits_0_0_ver_exp : UInt<8>
    input io_enq_bits_0_1_hor_sign : UInt<1>
    input io_enq_bits_0_1_hor_man : UInt<4>
    input io_enq_bits_0_1_hor_exp : UInt<8>
    input io_enq_bits_0_1_ver_sign : UInt<1>
    input io_enq_bits_0_1_ver_man : UInt<4>
    input io_enq_bits_0_1_ver_exp : UInt<8>
    input io_enq_bits_1_0_hor_sign : UInt<1>
    input io_enq_bits_1_0_hor_man : UInt<4>
    input io_enq_bits_1_0_hor_exp : UInt<8>
    input io_enq_bits_1_0_ver_sign : UInt<1>
    input io_enq_bits_1_0_ver_man : UInt<4>
    input io_enq_bits_1_0_ver_exp : UInt<8>
    input io_enq_bits_1_1_hor_sign : UInt<1>
    input io_enq_bits_1_1_hor_man : UInt<4>
    input io_enq_bits_1_1_hor_exp : UInt<8>
    input io_enq_bits_1_1_ver_sign : UInt<1>
    input io_enq_bits_1_1_ver_man : UInt<4>
    input io_enq_bits_1_1_ver_exp : UInt<8>
    input io_deq_ready : UInt<1>
    output io_deq_valid : UInt<1>
    output io_deq_bits_0_0_hor_sign : UInt<1>
    output io_deq_bits_0_0_hor_man : UInt<4>
    output io_deq_bits_0_0_hor_exp : UInt<8>
    output io_deq_bits_0_0_ver_sign : UInt<1>
    output io_deq_bits_0_0_ver_man : UInt<4>
    output io_deq_bits_0_0_ver_exp : UInt<8>
    output io_deq_bits_0_1_hor_sign : UInt<1>
    output io_deq_bits_0_1_hor_man : UInt<4>
    output io_deq_bits_0_1_hor_exp : UInt<8>
    output io_deq_bits_0_1_ver_sign : UInt<1>
    output io_deq_bits_0_1_ver_man : UInt<4>
    output io_deq_bits_0_1_ver_exp : UInt<8>
    output io_deq_bits_1_0_hor_sign : UInt<1>
    output io_deq_bits_1_0_hor_man : UInt<4>
    output io_deq_bits_1_0_hor_exp : UInt<8>
    output io_deq_bits_1_0_ver_sign : UInt<1>
    output io_deq_bits_1_0_ver_man : UInt<4>
    output io_deq_bits_1_0_ver_exp : UInt<8>
    output io_deq_bits_1_1_hor_sign : UInt<1>
    output io_deq_bits_1_1_hor_man : UInt<4>
    output io_deq_bits_1_1_hor_exp : UInt<8>
    output io_deq_bits_1_1_ver_sign : UInt<1>
    output io_deq_bits_1_1_ver_man : UInt<4>
    output io_deq_bits_1_1_ver_exp : UInt<8>
    output io_count : UInt<2>

    mem ram_0_0_hor_sign : @[Decoupled.scala 273:95]
      data-type => UInt<1>
      depth => 2
      read-latency => 0
      write-latency => 1
      reader => io_deq_bits_MPORT
      writer => MPORT
      read-under-write => undefined
    mem ram_0_0_hor_man : @[Decoupled.scala 273:95]
      data-type => UInt<4>
      depth => 2
      read-latency => 0
      write-latency => 1
      reader => io_deq_bits_MPORT
      writer => MPORT
      read-under-write => undefined
    mem ram_0_0_hor_exp : @[Decoupled.scala 273:95]
      data-type => UInt<8>
      depth => 2
      read-latency => 0
      write-latency => 1
      reader => io_deq_bits_MPORT
      writer => MPORT
      read-under-write => undefined
    mem ram_0_0_ver_sign : @[Decoupled.scala 273:95]
      data-type => UInt<1>
      depth => 2
      read-latency => 0
      write-latency => 1
      reader => io_deq_bits_MPORT
      writer => MPORT
      read-under-write => undefined
    mem ram_0_0_ver_man : @[Decoupled.scala 273:95]
      data-type => UInt<4>
      depth => 2
      read-latency => 0
      write-latency => 1
      reader => io_deq_bits_MPORT
      writer => MPORT
      read-under-write => undefined
    mem ram_0_0_ver_exp : @[Decoupled.scala 273:95]
      data-type => UInt<8>
      depth => 2
      read-latency => 0
      write-latency => 1
      reader => io_deq_bits_MPORT
      writer => MPORT
      read-under-write => undefined
    mem ram_0_1_hor_sign : @[Decoupled.scala 273:95]
      data-type => UInt<1>
      depth => 2
      read-latency => 0
      write-latency => 1
      reader => io_deq_bits_MPORT
      writer => MPORT
      read-under-write => undefined
    mem ram_0_1_hor_man : @[Decoupled.scala 273:95]
      data-type => UInt<4>
      depth => 2
      read-latency => 0
      write-latency => 1
      reader => io_deq_bits_MPORT
      writer => MPORT
      read-under-write => undefined
    mem ram_0_1_hor_exp : @[Decoupled.scala 273:95]
      data-type => UInt<8>
      depth => 2
      read-latency => 0
      write-latency => 1
      reader => io_deq_bits_MPORT
      writer => MPORT
      read-under-write => undefined
    mem ram_0_1_ver_sign : @[Decoupled.scala 273:95]
      data-type => UInt<1>
      depth => 2
      read-latency => 0
      write-latency => 1
      reader => io_deq_bits_MPORT
      writer => MPORT
      read-under-write => undefined
    mem ram_0_1_ver_man : @[Decoupled.scala 273:95]
      data-type => UInt<4>
      depth => 2
      read-latency => 0
      write-latency => 1
      reader => io_deq_bits_MPORT
      writer => MPORT
      read-under-write => undefined
    mem ram_0_1_ver_exp : @[Decoupled.scala 273:95]
      data-type => UInt<8>
      depth => 2
      read-latency => 0
      write-latency => 1
      reader => io_deq_bits_MPORT
      writer => MPORT
      read-under-write => undefined
    mem ram_1_0_hor_sign : @[Decoupled.scala 273:95]
      data-type => UInt<1>
      depth => 2
      read-latency => 0
      write-latency => 1
      reader => io_deq_bits_MPORT
      writer => MPORT
      read-under-write => undefined
    mem ram_1_0_hor_man : @[Decoupled.scala 273:95]
      data-type => UInt<4>
      depth => 2
      read-latency => 0
      write-latency => 1
      reader => io_deq_bits_MPORT
      writer => MPORT
      read-under-write => undefined
    mem ram_1_0_hor_exp : @[Decoupled.scala 273:95]
      data-type => UInt<8>
      depth => 2
      read-latency => 0
      write-latency => 1
      reader => io_deq_bits_MPORT
      writer => MPORT
      read-under-write => undefined
    mem ram_1_0_ver_sign : @[Decoupled.scala 273:95]
      data-type => UInt<1>
      depth => 2
      read-latency => 0
      write-latency => 1
      reader => io_deq_bits_MPORT
      writer => MPORT
      read-under-write => undefined
    mem ram_1_0_ver_man : @[Decoupled.scala 273:95]
      data-type => UInt<4>
      depth => 2
      read-latency => 0
      write-latency => 1
      reader => io_deq_bits_MPORT
      writer => MPORT
      read-under-write => undefined
    mem ram_1_0_ver_exp : @[Decoupled.scala 273:95]
      data-type => UInt<8>
      depth => 2
      read-latency => 0
      write-latency => 1
      reader => io_deq_bits_MPORT
      writer => MPORT
      read-under-write => undefined
    mem ram_1_1_hor_sign : @[Decoupled.scala 273:95]
      data-type => UInt<1>
      depth => 2
      read-latency => 0
      write-latency => 1
      reader => io_deq_bits_MPORT
      writer => MPORT
      read-under-write => undefined
    mem ram_1_1_hor_man : @[Decoupled.scala 273:95]
      data-type => UInt<4>
      depth => 2
      read-latency => 0
      write-latency => 1
      reader => io_deq_bits_MPORT
      writer => MPORT
      read-under-write => undefined
    mem ram_1_1_hor_exp : @[Decoupled.scala 273:95]
      data-type => UInt<8>
      depth => 2
      read-latency => 0
      write-latency => 1
      reader => io_deq_bits_MPORT
      writer => MPORT
      read-under-write => undefined
    mem ram_1_1_ver_sign : @[Decoupled.scala 273:95]
      data-type => UInt<1>
      depth => 2
      read-latency => 0
      write-latency => 1
      reader => io_deq_bits_MPORT
      writer => MPORT
      read-under-write => undefined
    mem ram_1_1_ver_man : @[Decoupled.scala 273:95]
      data-type => UInt<4>
      depth => 2
      read-latency => 0
      write-latency => 1
      reader => io_deq_bits_MPORT
      writer => MPORT
      read-under-write => undefined
    mem ram_1_1_ver_exp : @[Decoupled.scala 273:95]
      data-type => UInt<8>
      depth => 2
      read-latency => 0
      write-latency => 1
      reader => io_deq_bits_MPORT
      writer => MPORT
      read-under-write => undefined
    reg enq_ptr_value : UInt<1>, clock with :
      reset => (UInt<1>("h0"), enq_ptr_value) @[Counter.scala 61:40]
    reg deq_ptr_value : UInt<1>, clock with :
      reset => (UInt<1>("h0"), deq_ptr_value) @[Counter.scala 61:40]
    reg maybe_full : UInt<1>, clock with :
      reset => (UInt<1>("h0"), maybe_full) @[Decoupled.scala 276:27]
    node ptr_match = eq(enq_ptr_value, deq_ptr_value) @[Decoupled.scala 277:33]
    node _empty_T = eq(maybe_full, UInt<1>("h0")) @[Decoupled.scala 278:28]
    node empty = and(ptr_match, _empty_T) @[Decoupled.scala 278:25]
    node full = and(ptr_match, maybe_full) @[Decoupled.scala 279:24]
    node _do_enq_T = and(io_enq_ready, io_enq_valid) @[Decoupled.scala 51:35]
    node _do_deq_T = and(io_deq_ready, io_deq_valid) @[Decoupled.scala 51:35]
    node wrap = eq(enq_ptr_value, UInt<1>("h1")) @[Counter.scala 73:24]
    node _value_T = add(enq_ptr_value, UInt<1>("h1")) @[Counter.scala 77:24]
    node _value_T_1 = tail(_value_T, 1) @[Counter.scala 77:24]
    node do_enq = _do_enq_T @[Decoupled.scala 280:{27,27}]
    node _GEN_0 = validif(do_enq, enq_ptr_value) @[Decoupled.scala 286:16 287:8]
    node _GEN_1 = validif(do_enq, clock) @[Decoupled.scala 286:16 287:8]
    node _GEN_2 = mux(do_enq, UInt<1>("h1"), UInt<1>("h0")) @[Decoupled.scala 286:16 287:8 273:95]
    node _GEN_3 = validif(do_enq, UInt<1>("h1")) @[Decoupled.scala 286:16 287:24]
    node _GEN_4 = validif(do_enq, io_enq_bits_0_0_hor_sign) @[Decoupled.scala 286:16 287:24]
    node _GEN_5 = validif(do_enq, io_enq_bits_0_0_hor_man) @[Decoupled.scala 286:16 287:24]
    node _GEN_6 = validif(do_enq, io_enq_bits_0_0_hor_exp) @[Decoupled.scala 286:16 287:24]
    node _GEN_7 = validif(do_enq, io_enq_bits_0_0_ver_sign) @[Decoupled.scala 286:16 287:24]
    node _GEN_8 = validif(do_enq, io_enq_bits_0_0_ver_man) @[Decoupled.scala 286:16 287:24]
    node _GEN_9 = validif(do_enq, io_enq_bits_0_0_ver_exp) @[Decoupled.scala 286:16 287:24]
    node _GEN_10 = validif(do_enq, io_enq_bits_0_1_hor_sign) @[Decoupled.scala 286:16 287:24]
    node _GEN_11 = validif(do_enq, io_enq_bits_0_1_hor_man) @[Decoupled.scala 286:16 287:24]
    node _GEN_12 = validif(do_enq, io_enq_bits_0_1_hor_exp) @[Decoupled.scala 286:16 287:24]
    node _GEN_13 = validif(do_enq, io_enq_bits_0_1_ver_sign) @[Decoupled.scala 286:16 287:24]
    node _GEN_14 = validif(do_enq, io_enq_bits_0_1_ver_man) @[Decoupled.scala 286:16 287:24]
    node _GEN_15 = validif(do_enq, io_enq_bits_0_1_ver_exp) @[Decoupled.scala 286:16 287:24]
    node _GEN_16 = validif(do_enq, io_enq_bits_1_0_hor_sign) @[Decoupled.scala 286:16 287:24]
    node _GEN_17 = validif(do_enq, io_enq_bits_1_0_hor_man) @[Decoupled.scala 286:16 287:24]
    node _GEN_18 = validif(do_enq, io_enq_bits_1_0_hor_exp) @[Decoupled.scala 286:16 287:24]
    node _GEN_19 = validif(do_enq, io_enq_bits_1_0_ver_sign) @[Decoupled.scala 286:16 287:24]
    node _GEN_20 = validif(do_enq, io_enq_bits_1_0_ver_man) @[Decoupled.scala 286:16 287:24]
    node _GEN_21 = validif(do_enq, io_enq_bits_1_0_ver_exp) @[Decoupled.scala 286:16 287:24]
    node _GEN_22 = validif(do_enq, io_enq_bits_1_1_hor_sign) @[Decoupled.scala 286:16 287:24]
    node _GEN_23 = validif(do_enq, io_enq_bits_1_1_hor_man) @[Decoupled.scala 286:16 287:24]
    node _GEN_24 = validif(do_enq, io_enq_bits_1_1_hor_exp) @[Decoupled.scala 286:16 287:24]
    node _GEN_25 = validif(do_enq, io_enq_bits_1_1_ver_sign) @[Decoupled.scala 286:16 287:24]
    node _GEN_26 = validif(do_enq, io_enq_bits_1_1_ver_man) @[Decoupled.scala 286:16 287:24]
    node _GEN_27 = validif(do_enq, io_enq_bits_1_1_ver_exp) @[Decoupled.scala 286:16 287:24]
    node _GEN_28 = mux(do_enq, _value_T_1, enq_ptr_value) @[Decoupled.scala 286:16 Counter.scala 77:15 61:40]
    node wrap_1 = eq(deq_ptr_value, UInt<1>("h1")) @[Counter.scala 73:24]
    node _value_T_2 = add(deq_ptr_value, UInt<1>("h1")) @[Counter.scala 77:24]
    node _value_T_3 = tail(_value_T_2, 1) @[Counter.scala 77:24]
    node do_deq = _do_deq_T @[Decoupled.scala 281:{27,27}]
    node _GEN_29 = mux(do_deq, _value_T_3, deq_ptr_value) @[Decoupled.scala 290:16 Counter.scala 77:15 61:40]
    node _T = neq(do_enq, do_deq) @[Decoupled.scala 293:15]
    node _GEN_30 = mux(_T, do_enq, maybe_full) @[Decoupled.scala 293:27 294:16 276:27]
    node _GEN_31 = mux(UInt<1>("h0"), UInt<1>("h0"), _GEN_28) @[Decoupled.scala 296:15 Counter.scala 98:11]
    node _GEN_32 = mux(UInt<1>("h0"), UInt<1>("h0"), _GEN_29) @[Decoupled.scala 296:15 Counter.scala 98:11]
    node _GEN_33 = mux(UInt<1>("h0"), UInt<1>("h0"), _GEN_30) @[Decoupled.scala 296:15 299:16]
    node _io_deq_valid_T = eq(empty, UInt<1>("h0")) @[Decoupled.scala 302:19]
    node _io_enq_ready_T = eq(full, UInt<1>("h0")) @[Decoupled.scala 303:19]
    node _ptr_diff_T = sub(enq_ptr_value, deq_ptr_value) @[Decoupled.scala 326:32]
    node ptr_diff = tail(_ptr_diff_T, 1) @[Decoupled.scala 326:32]
    node _io_count_T = and(maybe_full, ptr_match) @[Decoupled.scala 329:32]
    node _io_count_T_1 = mux(_io_count_T, UInt<2>("h2"), UInt<1>("h0")) @[Decoupled.scala 329:20]
    node _io_count_T_2 = or(_io_count_T_1, ptr_diff) @[Decoupled.scala 329:62]
    io_enq_ready <= _io_enq_ready_T @[Decoupled.scala 303:16]
    io_deq_valid <= _io_deq_valid_T @[Decoupled.scala 302:16]
    io_deq_bits_0_0_hor_sign <= ram_0_0_hor_sign.io_deq_bits_MPORT.data @[Decoupled.scala 310:17]
    io_deq_bits_0_0_hor_man <= ram_0_0_hor_man.io_deq_bits_MPORT.data @[Decoupled.scala 310:17]
    io_deq_bits_0_0_hor_exp <= ram_0_0_hor_exp.io_deq_bits_MPORT.data @[Decoupled.scala 310:17]
    io_deq_bits_0_0_ver_sign <= ram_0_0_ver_sign.io_deq_bits_MPORT.data @[Decoupled.scala 310:17]
    io_deq_bits_0_0_ver_man <= ram_0_0_ver_man.io_deq_bits_MPORT.data @[Decoupled.scala 310:17]
    io_deq_bits_0_0_ver_exp <= ram_0_0_ver_exp.io_deq_bits_MPORT.data @[Decoupled.scala 310:17]
    io_deq_bits_0_1_hor_sign <= ram_0_1_hor_sign.io_deq_bits_MPORT.data @[Decoupled.scala 310:17]
    io_deq_bits_0_1_hor_man <= ram_0_1_hor_man.io_deq_bits_MPORT.data @[Decoupled.scala 310:17]
    io_deq_bits_0_1_hor_exp <= ram_0_1_hor_exp.io_deq_bits_MPORT.data @[Decoupled.scala 310:17]
    io_deq_bits_0_1_ver_sign <= ram_0_1_ver_sign.io_deq_bits_MPORT.data @[Decoupled.scala 310:17]
    io_deq_bits_0_1_ver_man <= ram_0_1_ver_man.io_deq_bits_MPORT.data @[Decoupled.scala 310:17]
    io_deq_bits_0_1_ver_exp <= ram_0_1_ver_exp.io_deq_bits_MPORT.data @[Decoupled.scala 310:17]
    io_deq_bits_1_0_hor_sign <= ram_1_0_hor_sign.io_deq_bits_MPORT.data @[Decoupled.scala 310:17]
    io_deq_bits_1_0_hor_man <= ram_1_0_hor_man.io_deq_bits_MPORT.data @[Decoupled.scala 310:17]
    io_deq_bits_1_0_hor_exp <= ram_1_0_hor_exp.io_deq_bits_MPORT.data @[Decoupled.scala 310:17]
    io_deq_bits_1_0_ver_sign <= ram_1_0_ver_sign.io_deq_bits_MPORT.data @[Decoupled.scala 310:17]
    io_deq_bits_1_0_ver_man <= ram_1_0_ver_man.io_deq_bits_MPORT.data @[Decoupled.scala 310:17]
    io_deq_bits_1_0_ver_exp <= ram_1_0_ver_exp.io_deq_bits_MPORT.data @[Decoupled.scala 310:17]
    io_deq_bits_1_1_hor_sign <= ram_1_1_hor_sign.io_deq_bits_MPORT.data @[Decoupled.scala 310:17]
    io_deq_bits_1_1_hor_man <= ram_1_1_hor_man.io_deq_bits_MPORT.data @[Decoupled.scala 310:17]
    io_deq_bits_1_1_hor_exp <= ram_1_1_hor_exp.io_deq_bits_MPORT.data @[Decoupled.scala 310:17]
    io_deq_bits_1_1_ver_sign <= ram_1_1_ver_sign.io_deq_bits_MPORT.data @[Decoupled.scala 310:17]
    io_deq_bits_1_1_ver_man <= ram_1_1_ver_man.io_deq_bits_MPORT.data @[Decoupled.scala 310:17]
    io_deq_bits_1_1_ver_exp <= ram_1_1_ver_exp.io_deq_bits_MPORT.data @[Decoupled.scala 310:17]
    io_count <= _io_count_T_2 @[Decoupled.scala 329:14]
    ram_0_0_hor_sign.io_deq_bits_MPORT.addr <= deq_ptr_value @[Decoupled.scala 310:23]
    ram_0_0_hor_man.io_deq_bits_MPORT.addr <= deq_ptr_value @[Decoupled.scala 310:23]
    ram_0_0_hor_exp.io_deq_bits_MPORT.addr <= deq_ptr_value @[Decoupled.scala 310:23]
    ram_0_0_ver_sign.io_deq_bits_MPORT.addr <= deq_ptr_value @[Decoupled.scala 310:23]
    ram_0_0_ver_man.io_deq_bits_MPORT.addr <= deq_ptr_value @[Decoupled.scala 310:23]
    ram_0_0_ver_exp.io_deq_bits_MPORT.addr <= deq_ptr_value @[Decoupled.scala 310:23]
    ram_0_1_hor_sign.io_deq_bits_MPORT.addr <= deq_ptr_value @[Decoupled.scala 310:23]
    ram_0_1_hor_man.io_deq_bits_MPORT.addr <= deq_ptr_value @[Decoupled.scala 310:23]
    ram_0_1_hor_exp.io_deq_bits_MPORT.addr <= deq_ptr_value @[Decoupled.scala 310:23]
    ram_0_1_ver_sign.io_deq_bits_MPORT.addr <= deq_ptr_value @[Decoupled.scala 310:23]
    ram_0_1_ver_man.io_deq_bits_MPORT.addr <= deq_ptr_value @[Decoupled.scala 310:23]
    ram_0_1_ver_exp.io_deq_bits_MPORT.addr <= deq_ptr_value @[Decoupled.scala 310:23]
    ram_1_0_hor_sign.io_deq_bits_MPORT.addr <= deq_ptr_value @[Decoupled.scala 310:23]
    ram_1_0_hor_man.io_deq_bits_MPORT.addr <= deq_ptr_value @[Decoupled.scala 310:23]
    ram_1_0_hor_exp.io_deq_bits_MPORT.addr <= deq_ptr_value @[Decoupled.scala 310:23]
    ram_1_0_ver_sign.io_deq_bits_MPORT.addr <= deq_ptr_value @[Decoupled.scala 310:23]
    ram_1_0_ver_man.io_deq_bits_MPORT.addr <= deq_ptr_value @[Decoupled.scala 310:23]
    ram_1_0_ver_exp.io_deq_bits_MPORT.addr <= deq_ptr_value @[Decoupled.scala 310:23]
    ram_1_1_hor_sign.io_deq_bits_MPORT.addr <= deq_ptr_value @[Decoupled.scala 310:23]
    ram_1_1_hor_man.io_deq_bits_MPORT.addr <= deq_ptr_value @[Decoupled.scala 310:23]
    ram_1_1_hor_exp.io_deq_bits_MPORT.addr <= deq_ptr_value @[Decoupled.scala 310:23]
    ram_1_1_ver_sign.io_deq_bits_MPORT.addr <= deq_ptr_value @[Decoupled.scala 310:23]
    ram_1_1_ver_man.io_deq_bits_MPORT.addr <= deq_ptr_value @[Decoupled.scala 310:23]
    ram_1_1_ver_exp.io_deq_bits_MPORT.addr <= deq_ptr_value @[Decoupled.scala 310:23]
    ram_0_0_hor_sign.io_deq_bits_MPORT.en <= UInt<1>("h1") @[Decoupled.scala 310:23]
    ram_0_0_hor_man.io_deq_bits_MPORT.en <= UInt<1>("h1") @[Decoupled.scala 310:23]
    ram_0_0_hor_exp.io_deq_bits_MPORT.en <= UInt<1>("h1") @[Decoupled.scala 310:23]
    ram_0_0_ver_sign.io_deq_bits_MPORT.en <= UInt<1>("h1") @[Decoupled.scala 310:23]
    ram_0_0_ver_man.io_deq_bits_MPORT.en <= UInt<1>("h1") @[Decoupled.scala 310:23]
    ram_0_0_ver_exp.io_deq_bits_MPORT.en <= UInt<1>("h1") @[Decoupled.scala 310:23]
    ram_0_1_hor_sign.io_deq_bits_MPORT.en <= UInt<1>("h1") @[Decoupled.scala 310:23]
    ram_0_1_hor_man.io_deq_bits_MPORT.en <= UInt<1>("h1") @[Decoupled.scala 310:23]
    ram_0_1_hor_exp.io_deq_bits_MPORT.en <= UInt<1>("h1") @[Decoupled.scala 310:23]
    ram_0_1_ver_sign.io_deq_bits_MPORT.en <= UInt<1>("h1") @[Decoupled.scala 310:23]
    ram_0_1_ver_man.io_deq_bits_MPORT.en <= UInt<1>("h1") @[Decoupled.scala 310:23]
    ram_0_1_ver_exp.io_deq_bits_MPORT.en <= UInt<1>("h1") @[Decoupled.scala 310:23]
    ram_1_0_hor_sign.io_deq_bits_MPORT.en <= UInt<1>("h1") @[Decoupled.scala 310:23]
    ram_1_0_hor_man.io_deq_bits_MPORT.en <= UInt<1>("h1") @[Decoupled.scala 310:23]
    ram_1_0_hor_exp.io_deq_bits_MPORT.en <= UInt<1>("h1") @[Decoupled.scala 310:23]
    ram_1_0_ver_sign.io_deq_bits_MPORT.en <= UInt<1>("h1") @[Decoupled.scala 310:23]
    ram_1_0_ver_man.io_deq_bits_MPORT.en <= UInt<1>("h1") @[Decoupled.scala 310:23]
    ram_1_0_ver_exp.io_deq_bits_MPORT.en <= UInt<1>("h1") @[Decoupled.scala 310:23]
    ram_1_1_hor_sign.io_deq_bits_MPORT.en <= UInt<1>("h1") @[Decoupled.scala 310:23]
    ram_1_1_hor_man.io_deq_bits_MPORT.en <= UInt<1>("h1") @[Decoupled.scala 310:23]
    ram_1_1_hor_exp.io_deq_bits_MPORT.en <= UInt<1>("h1") @[Decoupled.scala 310:23]
    ram_1_1_ver_sign.io_deq_bits_MPORT.en <= UInt<1>("h1") @[Decoupled.scala 310:23]
    ram_1_1_ver_man.io_deq_bits_MPORT.en <= UInt<1>("h1") @[Decoupled.scala 310:23]
    ram_1_1_ver_exp.io_deq_bits_MPORT.en <= UInt<1>("h1") @[Decoupled.scala 310:23]
    ram_0_0_hor_sign.io_deq_bits_MPORT.clk <= clock @[Decoupled.scala 310:23]
    ram_0_0_hor_man.io_deq_bits_MPORT.clk <= clock @[Decoupled.scala 310:23]
    ram_0_0_hor_exp.io_deq_bits_MPORT.clk <= clock @[Decoupled.scala 310:23]
    ram_0_0_ver_sign.io_deq_bits_MPORT.clk <= clock @[Decoupled.scala 310:23]
    ram_0_0_ver_man.io_deq_bits_MPORT.clk <= clock @[Decoupled.scala 310:23]
    ram_0_0_ver_exp.io_deq_bits_MPORT.clk <= clock @[Decoupled.scala 310:23]
    ram_0_1_hor_sign.io_deq_bits_MPORT.clk <= clock @[Decoupled.scala 310:23]
    ram_0_1_hor_man.io_deq_bits_MPORT.clk <= clock @[Decoupled.scala 310:23]
    ram_0_1_hor_exp.io_deq_bits_MPORT.clk <= clock @[Decoupled.scala 310:23]
    ram_0_1_ver_sign.io_deq_bits_MPORT.clk <= clock @[Decoupled.scala 310:23]
    ram_0_1_ver_man.io_deq_bits_MPORT.clk <= clock @[Decoupled.scala 310:23]
    ram_0_1_ver_exp.io_deq_bits_MPORT.clk <= clock @[Decoupled.scala 310:23]
    ram_1_0_hor_sign.io_deq_bits_MPORT.clk <= clock @[Decoupled.scala 310:23]
    ram_1_0_hor_man.io_deq_bits_MPORT.clk <= clock @[Decoupled.scala 310:23]
    ram_1_0_hor_exp.io_deq_bits_MPORT.clk <= clock @[Decoupled.scala 310:23]
    ram_1_0_ver_sign.io_deq_bits_MPORT.clk <= clock @[Decoupled.scala 310:23]
    ram_1_0_ver_man.io_deq_bits_MPORT.clk <= clock @[Decoupled.scala 310:23]
    ram_1_0_ver_exp.io_deq_bits_MPORT.clk <= clock @[Decoupled.scala 310:23]
    ram_1_1_hor_sign.io_deq_bits_MPORT.clk <= clock @[Decoupled.scala 310:23]
    ram_1_1_hor_man.io_deq_bits_MPORT.clk <= clock @[Decoupled.scala 310:23]
    ram_1_1_hor_exp.io_deq_bits_MPORT.clk <= clock @[Decoupled.scala 310:23]
    ram_1_1_ver_sign.io_deq_bits_MPORT.clk <= clock @[Decoupled.scala 310:23]
    ram_1_1_ver_man.io_deq_bits_MPORT.clk <= clock @[Decoupled.scala 310:23]
    ram_1_1_ver_exp.io_deq_bits_MPORT.clk <= clock @[Decoupled.scala 310:23]
    ram_0_0_hor_sign.MPORT.addr <= _GEN_0
    ram_0_0_hor_man.MPORT.addr <= _GEN_0
    ram_0_0_hor_exp.MPORT.addr <= _GEN_0
    ram_0_0_ver_sign.MPORT.addr <= _GEN_0
    ram_0_0_ver_man.MPORT.addr <= _GEN_0
    ram_0_0_ver_exp.MPORT.addr <= _GEN_0
    ram_0_1_hor_sign.MPORT.addr <= _GEN_0
    ram_0_1_hor_man.MPORT.addr <= _GEN_0
    ram_0_1_hor_exp.MPORT.addr <= _GEN_0
    ram_0_1_ver_sign.MPORT.addr <= _GEN_0
    ram_0_1_ver_man.MPORT.addr <= _GEN_0
    ram_0_1_ver_exp.MPORT.addr <= _GEN_0
    ram_1_0_hor_sign.MPORT.addr <= _GEN_0
    ram_1_0_hor_man.MPORT.addr <= _GEN_0
    ram_1_0_hor_exp.MPORT.addr <= _GEN_0
    ram_1_0_ver_sign.MPORT.addr <= _GEN_0
    ram_1_0_ver_man.MPORT.addr <= _GEN_0
    ram_1_0_ver_exp.MPORT.addr <= _GEN_0
    ram_1_1_hor_sign.MPORT.addr <= _GEN_0
    ram_1_1_hor_man.MPORT.addr <= _GEN_0
    ram_1_1_hor_exp.MPORT.addr <= _GEN_0
    ram_1_1_ver_sign.MPORT.addr <= _GEN_0
    ram_1_1_ver_man.MPORT.addr <= _GEN_0
    ram_1_1_ver_exp.MPORT.addr <= _GEN_0
    ram_0_0_hor_sign.MPORT.en <= _GEN_2
    ram_0_0_hor_man.MPORT.en <= _GEN_2
    ram_0_0_hor_exp.MPORT.en <= _GEN_2
    ram_0_0_ver_sign.MPORT.en <= _GEN_2
    ram_0_0_ver_man.MPORT.en <= _GEN_2
    ram_0_0_ver_exp.MPORT.en <= _GEN_2
    ram_0_1_hor_sign.MPORT.en <= _GEN_2
    ram_0_1_hor_man.MPORT.en <= _GEN_2
    ram_0_1_hor_exp.MPORT.en <= _GEN_2
    ram_0_1_ver_sign.MPORT.en <= _GEN_2
    ram_0_1_ver_man.MPORT.en <= _GEN_2
    ram_0_1_ver_exp.MPORT.en <= _GEN_2
    ram_1_0_hor_sign.MPORT.en <= _GEN_2
    ram_1_0_hor_man.MPORT.en <= _GEN_2
    ram_1_0_hor_exp.MPORT.en <= _GEN_2
    ram_1_0_ver_sign.MPORT.en <= _GEN_2
    ram_1_0_ver_man.MPORT.en <= _GEN_2
    ram_1_0_ver_exp.MPORT.en <= _GEN_2
    ram_1_1_hor_sign.MPORT.en <= _GEN_2
    ram_1_1_hor_man.MPORT.en <= _GEN_2
    ram_1_1_hor_exp.MPORT.en <= _GEN_2
    ram_1_1_ver_sign.MPORT.en <= _GEN_2
    ram_1_1_ver_man.MPORT.en <= _GEN_2
    ram_1_1_ver_exp.MPORT.en <= _GEN_2
    ram_0_0_hor_sign.MPORT.clk <= _GEN_1
    ram_0_0_hor_man.MPORT.clk <= _GEN_1
    ram_0_0_hor_exp.MPORT.clk <= _GEN_1
    ram_0_0_ver_sign.MPORT.clk <= _GEN_1
    ram_0_0_ver_man.MPORT.clk <= _GEN_1
    ram_0_0_ver_exp.MPORT.clk <= _GEN_1
    ram_0_1_hor_sign.MPORT.clk <= _GEN_1
    ram_0_1_hor_man.MPORT.clk <= _GEN_1
    ram_0_1_hor_exp.MPORT.clk <= _GEN_1
    ram_0_1_ver_sign.MPORT.clk <= _GEN_1
    ram_0_1_ver_man.MPORT.clk <= _GEN_1
    ram_0_1_ver_exp.MPORT.clk <= _GEN_1
    ram_1_0_hor_sign.MPORT.clk <= _GEN_1
    ram_1_0_hor_man.MPORT.clk <= _GEN_1
    ram_1_0_hor_exp.MPORT.clk <= _GEN_1
    ram_1_0_ver_sign.MPORT.clk <= _GEN_1
    ram_1_0_ver_man.MPORT.clk <= _GEN_1
    ram_1_0_ver_exp.MPORT.clk <= _GEN_1
    ram_1_1_hor_sign.MPORT.clk <= _GEN_1
    ram_1_1_hor_man.MPORT.clk <= _GEN_1
    ram_1_1_hor_exp.MPORT.clk <= _GEN_1
    ram_1_1_ver_sign.MPORT.clk <= _GEN_1
    ram_1_1_ver_man.MPORT.clk <= _GEN_1
    ram_1_1_ver_exp.MPORT.clk <= _GEN_1
    ram_0_0_hor_sign.MPORT.data <= _GEN_4
    ram_0_0_hor_man.MPORT.data <= _GEN_5
    ram_0_0_hor_exp.MPORT.data <= _GEN_6
    ram_0_0_ver_sign.MPORT.data <= _GEN_7
    ram_0_0_ver_man.MPORT.data <= _GEN_8
    ram_0_0_ver_exp.MPORT.data <= _GEN_9
    ram_0_1_hor_sign.MPORT.data <= _GEN_10
    ram_0_1_hor_man.MPORT.data <= _GEN_11
    ram_0_1_hor_exp.MPORT.data <= _GEN_12
    ram_0_1_ver_sign.MPORT.data <= _GEN_13
    ram_0_1_ver_man.MPORT.data <= _GEN_14
    ram_0_1_ver_exp.MPORT.data <= _GEN_15
    ram_1_0_hor_sign.MPORT.data <= _GEN_16
    ram_1_0_hor_man.MPORT.data <= _GEN_17
    ram_1_0_hor_exp.MPORT.data <= _GEN_18
    ram_1_0_ver_sign.MPORT.data <= _GEN_19
    ram_1_0_ver_man.MPORT.data <= _GEN_20
    ram_1_0_ver_exp.MPORT.data <= _GEN_21
    ram_1_1_hor_sign.MPORT.data <= _GEN_22
    ram_1_1_hor_man.MPORT.data <= _GEN_23
    ram_1_1_hor_exp.MPORT.data <= _GEN_24
    ram_1_1_ver_sign.MPORT.data <= _GEN_25
    ram_1_1_ver_man.MPORT.data <= _GEN_26
    ram_1_1_ver_exp.MPORT.data <= _GEN_27
    ram_0_0_hor_sign.MPORT.mask <= _GEN_3
    ram_0_0_hor_man.MPORT.mask <= _GEN_3
    ram_0_0_hor_exp.MPORT.mask <= _GEN_3
    ram_0_0_ver_sign.MPORT.mask <= _GEN_3
    ram_0_0_ver_man.MPORT.mask <= _GEN_3
    ram_0_0_ver_exp.MPORT.mask <= _GEN_3
    ram_0_1_hor_sign.MPORT.mask <= _GEN_3
    ram_0_1_hor_man.MPORT.mask <= _GEN_3
    ram_0_1_hor_exp.MPORT.mask <= _GEN_3
    ram_0_1_ver_sign.MPORT.mask <= _GEN_3
    ram_0_1_ver_man.MPORT.mask <= _GEN_3
    ram_0_1_ver_exp.MPORT.mask <= _GEN_3
    ram_1_0_hor_sign.MPORT.mask <= _GEN_3
    ram_1_0_hor_man.MPORT.mask <= _GEN_3
    ram_1_0_hor_exp.MPORT.mask <= _GEN_3
    ram_1_0_ver_sign.MPORT.mask <= _GEN_3
    ram_1_0_ver_man.MPORT.mask <= _GEN_3
    ram_1_0_ver_exp.MPORT.mask <= _GEN_3
    ram_1_1_hor_sign.MPORT.mask <= _GEN_3
    ram_1_1_hor_man.MPORT.mask <= _GEN_3
    ram_1_1_hor_exp.MPORT.mask <= _GEN_3
    ram_1_1_ver_sign.MPORT.mask <= _GEN_3
    ram_1_1_ver_man.MPORT.mask <= _GEN_3
    ram_1_1_ver_exp.MPORT.mask <= _GEN_3
    enq_ptr_value <= mux(reset, UInt<1>("h0"), _GEN_31) @[Counter.scala 61:{40,40}]
    deq_ptr_value <= mux(reset, UInt<1>("h0"), _GEN_32) @[Counter.scala 61:{40,40}]
    maybe_full <= mux(reset, UInt<1>("h0"), _GEN_33) @[Decoupled.scala 276:{27,27}]

  module SystolicArray :
    input clock : Clock
    input reset : UInt<1>
    output io_in_ready : UInt<1>
    input io_in_valid : UInt<1>
    input io_in_bits_0_0_hor_sign : UInt<1>
    input io_in_bits_0_0_hor_man : UInt<4>
    input io_in_bits_0_0_hor_exp : UInt<8>
    input io_in_bits_0_0_ver_sign : UInt<1>
    input io_in_bits_0_0_ver_man : UInt<4>
    input io_in_bits_0_0_ver_exp : UInt<8>
    input io_in_bits_0_1_hor_sign : UInt<1>
    input io_in_bits_0_1_hor_man : UInt<4>
    input io_in_bits_0_1_hor_exp : UInt<8>
    input io_in_bits_0_1_ver_sign : UInt<1>
    input io_in_bits_0_1_ver_man : UInt<4>
    input io_in_bits_0_1_ver_exp : UInt<8>
    input io_in_bits_1_0_hor_sign : UInt<1>
    input io_in_bits_1_0_hor_man : UInt<4>
    input io_in_bits_1_0_hor_exp : UInt<8>
    input io_in_bits_1_0_ver_sign : UInt<1>
    input io_in_bits_1_0_ver_man : UInt<4>
    input io_in_bits_1_0_ver_exp : UInt<8>
    input io_in_bits_1_1_hor_sign : UInt<1>
    input io_in_bits_1_1_hor_man : UInt<4>
    input io_in_bits_1_1_hor_exp : UInt<8>
    input io_in_bits_1_1_ver_sign : UInt<1>
    input io_in_bits_1_1_ver_man : UInt<4>
    input io_in_bits_1_1_ver_exp : UInt<8>
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

    inst pes_0_0 of PE @[FP_GEMM.scala 102:34]
    inst pes_0_1 of PE @[FP_GEMM.scala 102:34]
    inst pes_1_0 of PE @[FP_GEMM.scala 102:34]
    inst pes_1_1 of PE @[FP_GEMM.scala 102:34]
    inst inputQueue of Queue @[FP_GEMM.scala 103:26]
    reg pes_0_1_io_in_hor_r_sign : UInt<1>, clock with :
      reset => (UInt<1>("h0"), pes_0_1_io_in_hor_r_sign) @[Reg.scala 19:16]
    reg pes_0_1_io_in_hor_r_man : UInt<4>, clock with :
      reset => (UInt<1>("h0"), pes_0_1_io_in_hor_r_man) @[Reg.scala 19:16]
    reg pes_0_1_io_in_hor_r_exp : UInt<8>, clock with :
      reset => (UInt<1>("h0"), pes_0_1_io_in_hor_r_exp) @[Reg.scala 19:16]
    node _GEN_0 = mux(UInt<1>("h1"), pes_0_0.io_out_hor_sign, pes_0_1_io_in_hor_r_sign) @[Reg.scala 19:16 20:{18,22}]
    node _GEN_1 = mux(UInt<1>("h1"), pes_0_0.io_out_hor_man, pes_0_1_io_in_hor_r_man) @[Reg.scala 19:16 20:{18,22}]
    node _GEN_2 = mux(UInt<1>("h1"), pes_0_0.io_out_hor_exp, pes_0_1_io_in_hor_r_exp) @[Reg.scala 19:16 20:{18,22}]
    reg pes_1_1_io_in_hor_r_sign : UInt<1>, clock with :
      reset => (UInt<1>("h0"), pes_1_1_io_in_hor_r_sign) @[Reg.scala 19:16]
    reg pes_1_1_io_in_hor_r_man : UInt<4>, clock with :
      reset => (UInt<1>("h0"), pes_1_1_io_in_hor_r_man) @[Reg.scala 19:16]
    reg pes_1_1_io_in_hor_r_exp : UInt<8>, clock with :
      reset => (UInt<1>("h0"), pes_1_1_io_in_hor_r_exp) @[Reg.scala 19:16]
    node _GEN_3 = mux(UInt<1>("h1"), pes_1_0.io_out_hor_sign, pes_1_1_io_in_hor_r_sign) @[Reg.scala 19:16 20:{18,22}]
    node _GEN_4 = mux(UInt<1>("h1"), pes_1_0.io_out_hor_man, pes_1_1_io_in_hor_r_man) @[Reg.scala 19:16 20:{18,22}]
    node _GEN_5 = mux(UInt<1>("h1"), pes_1_0.io_out_hor_exp, pes_1_1_io_in_hor_r_exp) @[Reg.scala 19:16 20:{18,22}]
    reg pes_1_0_io_in_ver_r_sign : UInt<1>, clock with :
      reset => (UInt<1>("h0"), pes_1_0_io_in_ver_r_sign) @[Reg.scala 19:16]
    reg pes_1_0_io_in_ver_r_man : UInt<4>, clock with :
      reset => (UInt<1>("h0"), pes_1_0_io_in_ver_r_man) @[Reg.scala 19:16]
    reg pes_1_0_io_in_ver_r_exp : UInt<8>, clock with :
      reset => (UInt<1>("h0"), pes_1_0_io_in_ver_r_exp) @[Reg.scala 19:16]
    node _GEN_6 = mux(UInt<1>("h1"), pes_0_0.io_out_ver_sign, pes_1_0_io_in_ver_r_sign) @[Reg.scala 19:16 20:{18,22}]
    node _GEN_7 = mux(UInt<1>("h1"), pes_0_0.io_out_ver_man, pes_1_0_io_in_ver_r_man) @[Reg.scala 19:16 20:{18,22}]
    node _GEN_8 = mux(UInt<1>("h1"), pes_0_0.io_out_ver_exp, pes_1_0_io_in_ver_r_exp) @[Reg.scala 19:16 20:{18,22}]
    reg pes_1_1_io_in_ver_r_sign : UInt<1>, clock with :
      reset => (UInt<1>("h0"), pes_1_1_io_in_ver_r_sign) @[Reg.scala 19:16]
    reg pes_1_1_io_in_ver_r_man : UInt<4>, clock with :
      reset => (UInt<1>("h0"), pes_1_1_io_in_ver_r_man) @[Reg.scala 19:16]
    reg pes_1_1_io_in_ver_r_exp : UInt<8>, clock with :
      reset => (UInt<1>("h0"), pes_1_1_io_in_ver_r_exp) @[Reg.scala 19:16]
    node _GEN_9 = mux(UInt<1>("h1"), pes_0_1.io_out_ver_sign, pes_1_1_io_in_ver_r_sign) @[Reg.scala 19:16 20:{18,22}]
    node _GEN_10 = mux(UInt<1>("h1"), pes_0_1.io_out_ver_man, pes_1_1_io_in_ver_r_man) @[Reg.scala 19:16 20:{18,22}]
    node _GEN_11 = mux(UInt<1>("h1"), pes_0_1.io_out_ver_exp, pes_1_1_io_in_ver_r_exp) @[Reg.scala 19:16 20:{18,22}]
    io_in_ready <= inputQueue.io_enq_ready @[FP_GEMM.scala 108:21]
    io_out_0_0_hor_sign <= pes_0_0.io_out_hor_sign @[FP_GEMM.scala 135:24]
    io_out_0_0_hor_man <= pes_0_0.io_out_hor_man @[FP_GEMM.scala 135:24]
    io_out_0_0_hor_exp <= pes_0_0.io_out_hor_exp @[FP_GEMM.scala 135:24]
    io_out_0_0_ver_sign <= pes_0_0.io_out_ver_sign @[FP_GEMM.scala 136:24]
    io_out_0_0_ver_man <= pes_0_0.io_out_ver_man @[FP_GEMM.scala 136:24]
    io_out_0_0_ver_exp <= pes_0_0.io_out_ver_exp @[FP_GEMM.scala 136:24]
    io_out_0_0_result_sign <= pes_0_0.io_out_result_sign @[FP_GEMM.scala 137:27]
    io_out_0_0_result_man <= pes_0_0.io_out_result_man @[FP_GEMM.scala 137:27]
    io_out_0_0_result_exp <= pes_0_0.io_out_result_exp @[FP_GEMM.scala 137:27]
    io_out_0_1_hor_sign <= pes_0_1.io_out_hor_sign @[FP_GEMM.scala 135:24]
    io_out_0_1_hor_man <= pes_0_1.io_out_hor_man @[FP_GEMM.scala 135:24]
    io_out_0_1_hor_exp <= pes_0_1.io_out_hor_exp @[FP_GEMM.scala 135:24]
    io_out_0_1_ver_sign <= pes_0_1.io_out_ver_sign @[FP_GEMM.scala 136:24]
    io_out_0_1_ver_man <= pes_0_1.io_out_ver_man @[FP_GEMM.scala 136:24]
    io_out_0_1_ver_exp <= pes_0_1.io_out_ver_exp @[FP_GEMM.scala 136:24]
    io_out_0_1_result_sign <= pes_0_1.io_out_result_sign @[FP_GEMM.scala 137:27]
    io_out_0_1_result_man <= pes_0_1.io_out_result_man @[FP_GEMM.scala 137:27]
    io_out_0_1_result_exp <= pes_0_1.io_out_result_exp @[FP_GEMM.scala 137:27]
    io_out_1_0_hor_sign <= pes_1_0.io_out_hor_sign @[FP_GEMM.scala 135:24]
    io_out_1_0_hor_man <= pes_1_0.io_out_hor_man @[FP_GEMM.scala 135:24]
    io_out_1_0_hor_exp <= pes_1_0.io_out_hor_exp @[FP_GEMM.scala 135:24]
    io_out_1_0_ver_sign <= pes_1_0.io_out_ver_sign @[FP_GEMM.scala 136:24]
    io_out_1_0_ver_man <= pes_1_0.io_out_ver_man @[FP_GEMM.scala 136:24]
    io_out_1_0_ver_exp <= pes_1_0.io_out_ver_exp @[FP_GEMM.scala 136:24]
    io_out_1_0_result_sign <= pes_1_0.io_out_result_sign @[FP_GEMM.scala 137:27]
    io_out_1_0_result_man <= pes_1_0.io_out_result_man @[FP_GEMM.scala 137:27]
    io_out_1_0_result_exp <= pes_1_0.io_out_result_exp @[FP_GEMM.scala 137:27]
    io_out_1_1_hor_sign <= pes_1_1.io_out_hor_sign @[FP_GEMM.scala 135:24]
    io_out_1_1_hor_man <= pes_1_1.io_out_hor_man @[FP_GEMM.scala 135:24]
    io_out_1_1_hor_exp <= pes_1_1.io_out_hor_exp @[FP_GEMM.scala 135:24]
    io_out_1_1_ver_sign <= pes_1_1.io_out_ver_sign @[FP_GEMM.scala 136:24]
    io_out_1_1_ver_man <= pes_1_1.io_out_ver_man @[FP_GEMM.scala 136:24]
    io_out_1_1_ver_exp <= pes_1_1.io_out_ver_exp @[FP_GEMM.scala 136:24]
    io_out_1_1_result_sign <= pes_1_1.io_out_result_sign @[FP_GEMM.scala 137:27]
    io_out_1_1_result_man <= pes_1_1.io_out_result_man @[FP_GEMM.scala 137:27]
    io_out_1_1_result_exp <= pes_1_1.io_out_result_exp @[FP_GEMM.scala 137:27]
    pes_0_0.clock <= clock
    pes_0_0.reset <= reset
    pes_0_0.io_in_hor_sign <= inputQueue.io_deq_bits_0_1_hor_sign @[FP_GEMM.scala 113:27]
    pes_0_0.io_in_hor_man <= inputQueue.io_deq_bits_0_1_hor_man @[FP_GEMM.scala 113:27]
    pes_0_0.io_in_hor_exp <= inputQueue.io_deq_bits_0_1_hor_exp @[FP_GEMM.scala 113:27]
    pes_0_0.io_in_ver_sign <= inputQueue.io_deq_bits_1_0_ver_sign @[FP_GEMM.scala 114:27]
    pes_0_0.io_in_ver_man <= inputQueue.io_deq_bits_1_0_ver_man @[FP_GEMM.scala 114:27]
    pes_0_0.io_in_ver_exp <= inputQueue.io_deq_bits_1_0_ver_exp @[FP_GEMM.scala 114:27]
    pes_0_1.clock <= clock
    pes_0_1.reset <= reset
    pes_0_1.io_in_hor_sign <= pes_0_1_io_in_hor_r_sign @[FP_GEMM.scala 121:27]
    pes_0_1.io_in_hor_man <= pes_0_1_io_in_hor_r_man @[FP_GEMM.scala 121:27]
    pes_0_1.io_in_hor_exp <= pes_0_1_io_in_hor_r_exp @[FP_GEMM.scala 121:27]
    pes_0_1.io_in_ver_sign <= inputQueue.io_deq_bits_1_1_ver_sign @[FP_GEMM.scala 114:27]
    pes_0_1.io_in_ver_man <= inputQueue.io_deq_bits_1_1_ver_man @[FP_GEMM.scala 114:27]
    pes_0_1.io_in_ver_exp <= inputQueue.io_deq_bits_1_1_ver_exp @[FP_GEMM.scala 114:27]
    pes_1_0.clock <= clock
    pes_1_0.reset <= reset
    pes_1_0.io_in_hor_sign <= inputQueue.io_deq_bits_1_1_hor_sign @[FP_GEMM.scala 113:27]
    pes_1_0.io_in_hor_man <= inputQueue.io_deq_bits_1_1_hor_man @[FP_GEMM.scala 113:27]
    pes_1_0.io_in_hor_exp <= inputQueue.io_deq_bits_1_1_hor_exp @[FP_GEMM.scala 113:27]
    pes_1_0.io_in_ver_sign <= pes_1_0_io_in_ver_r_sign @[FP_GEMM.scala 128:27]
    pes_1_0.io_in_ver_man <= pes_1_0_io_in_ver_r_man @[FP_GEMM.scala 128:27]
    pes_1_0.io_in_ver_exp <= pes_1_0_io_in_ver_r_exp @[FP_GEMM.scala 128:27]
    pes_1_1.clock <= clock
    pes_1_1.reset <= reset
    pes_1_1.io_in_hor_sign <= pes_1_1_io_in_hor_r_sign @[FP_GEMM.scala 121:27]
    pes_1_1.io_in_hor_man <= pes_1_1_io_in_hor_r_man @[FP_GEMM.scala 121:27]
    pes_1_1.io_in_hor_exp <= pes_1_1_io_in_hor_r_exp @[FP_GEMM.scala 121:27]
    pes_1_1.io_in_ver_sign <= pes_1_1_io_in_ver_r_sign @[FP_GEMM.scala 128:27]
    pes_1_1.io_in_ver_man <= pes_1_1_io_in_ver_r_man @[FP_GEMM.scala 128:27]
    pes_1_1.io_in_ver_exp <= pes_1_1_io_in_ver_r_exp @[FP_GEMM.scala 128:27]
    inputQueue.clock <= clock
    inputQueue.reset <= reset
    inputQueue.io_enq_valid <= io_in_valid @[FP_GEMM.scala 108:21]
    inputQueue.io_enq_bits_0_0_hor_sign <= io_in_bits_0_0_hor_sign @[FP_GEMM.scala 108:21]
    inputQueue.io_enq_bits_0_0_hor_man <= io_in_bits_0_0_hor_man @[FP_GEMM.scala 108:21]
    inputQueue.io_enq_bits_0_0_hor_exp <= io_in_bits_0_0_hor_exp @[FP_GEMM.scala 108:21]
    inputQueue.io_enq_bits_0_0_ver_sign <= io_in_bits_0_0_ver_sign @[FP_GEMM.scala 108:21]
    inputQueue.io_enq_bits_0_0_ver_man <= io_in_bits_0_0_ver_man @[FP_GEMM.scala 108:21]
    inputQueue.io_enq_bits_0_0_ver_exp <= io_in_bits_0_0_ver_exp @[FP_GEMM.scala 108:21]
    inputQueue.io_enq_bits_0_1_hor_sign <= io_in_bits_0_1_hor_sign @[FP_GEMM.scala 108:21]
    inputQueue.io_enq_bits_0_1_hor_man <= io_in_bits_0_1_hor_man @[FP_GEMM.scala 108:21]
    inputQueue.io_enq_bits_0_1_hor_exp <= io_in_bits_0_1_hor_exp @[FP_GEMM.scala 108:21]
    inputQueue.io_enq_bits_0_1_ver_sign <= io_in_bits_0_1_ver_sign @[FP_GEMM.scala 108:21]
    inputQueue.io_enq_bits_0_1_ver_man <= io_in_bits_0_1_ver_man @[FP_GEMM.scala 108:21]
    inputQueue.io_enq_bits_0_1_ver_exp <= io_in_bits_0_1_ver_exp @[FP_GEMM.scala 108:21]
    inputQueue.io_enq_bits_1_0_hor_sign <= io_in_bits_1_0_hor_sign @[FP_GEMM.scala 108:21]
    inputQueue.io_enq_bits_1_0_hor_man <= io_in_bits_1_0_hor_man @[FP_GEMM.scala 108:21]
    inputQueue.io_enq_bits_1_0_hor_exp <= io_in_bits_1_0_hor_exp @[FP_GEMM.scala 108:21]
    inputQueue.io_enq_bits_1_0_ver_sign <= io_in_bits_1_0_ver_sign @[FP_GEMM.scala 108:21]
    inputQueue.io_enq_bits_1_0_ver_man <= io_in_bits_1_0_ver_man @[FP_GEMM.scala 108:21]
    inputQueue.io_enq_bits_1_0_ver_exp <= io_in_bits_1_0_ver_exp @[FP_GEMM.scala 108:21]
    inputQueue.io_enq_bits_1_1_hor_sign <= io_in_bits_1_1_hor_sign @[FP_GEMM.scala 108:21]
    inputQueue.io_enq_bits_1_1_hor_man <= io_in_bits_1_1_hor_man @[FP_GEMM.scala 108:21]
    inputQueue.io_enq_bits_1_1_hor_exp <= io_in_bits_1_1_hor_exp @[FP_GEMM.scala 108:21]
    inputQueue.io_enq_bits_1_1_ver_sign <= io_in_bits_1_1_ver_sign @[FP_GEMM.scala 108:21]
    inputQueue.io_enq_bits_1_1_ver_man <= io_in_bits_1_1_ver_man @[FP_GEMM.scala 108:21]
    inputQueue.io_enq_bits_1_1_ver_exp <= io_in_bits_1_1_ver_exp @[FP_GEMM.scala 108:21]
    inputQueue.io_deq_ready <= UInt<1>("h1") @[FP_GEMM.scala 112:31]
    pes_0_1_io_in_hor_r_sign <= _GEN_0
    pes_0_1_io_in_hor_r_man <= _GEN_1
    pes_0_1_io_in_hor_r_exp <= _GEN_2
    pes_1_1_io_in_hor_r_sign <= _GEN_3
    pes_1_1_io_in_hor_r_man <= _GEN_4
    pes_1_1_io_in_hor_r_exp <= _GEN_5
    pes_1_0_io_in_ver_r_sign <= _GEN_6
    pes_1_0_io_in_ver_r_man <= _GEN_7
    pes_1_0_io_in_ver_r_exp <= _GEN_8
    pes_1_1_io_in_ver_r_sign <= _GEN_9
    pes_1_1_io_in_ver_r_man <= _GEN_10
    pes_1_1_io_in_ver_r_exp <= _GEN_11
