circuit SMatMul :
  module ProcElem :
    input clock : Clock
    input reset : Reset
    output io : { flip in_h : UInt<8>, flip in_v : UInt<8>, out_h : UInt<16>, out_v : UInt<16>, out : UInt<16>}

    reg res : UInt<16>, clock with :
      reset => (reset, UInt<16>("h0")) @[MatMul.scala 20:21]
    reg hreg : UInt<8>, clock with :
      reset => (reset, UInt<8>("h0")) @[MatMul.scala 21:21]
    reg vreg : UInt<8>, clock with :
      reset => (reset, UInt<8>("h0")) @[MatMul.scala 22:21]
    node _res_T = mul(io.in_h, io.in_v) @[MatMul.scala 25:25]
    node _res_T_1 = add(res, _res_T) @[MatMul.scala 25:14]
    node _res_T_2 = tail(_res_T_1, 1) @[MatMul.scala 25:14]
    res <= _res_T_2 @[MatMul.scala 25:7]
    hreg <= io.in_h @[MatMul.scala 28:8]
    vreg <= io.in_v @[MatMul.scala 29:8]
    io.out_h <= hreg @[MatMul.scala 31:12]
    io.out_v <= vreg @[MatMul.scala 32:12]
    io.out <= res @[MatMul.scala 33:10]

  module ProcElem_1 :
    input clock : Clock
    input reset : Reset
    output io : { flip in_h : UInt<8>, flip in_v : UInt<8>, out_h : UInt<16>, out_v : UInt<16>, out : UInt<16>}

    reg res : UInt<16>, clock with :
      reset => (reset, UInt<16>("h0")) @[MatMul.scala 20:21]
    reg hreg : UInt<8>, clock with :
      reset => (reset, UInt<8>("h0")) @[MatMul.scala 21:21]
    reg vreg : UInt<8>, clock with :
      reset => (reset, UInt<8>("h0")) @[MatMul.scala 22:21]
    node _res_T = mul(io.in_h, io.in_v) @[MatMul.scala 25:25]
    node _res_T_1 = add(res, _res_T) @[MatMul.scala 25:14]
    node _res_T_2 = tail(_res_T_1, 1) @[MatMul.scala 25:14]
    res <= _res_T_2 @[MatMul.scala 25:7]
    hreg <= io.in_h @[MatMul.scala 28:8]
    vreg <= io.in_v @[MatMul.scala 29:8]
    io.out_h <= hreg @[MatMul.scala 31:12]
    io.out_v <= vreg @[MatMul.scala 32:12]
    io.out <= res @[MatMul.scala 33:10]

  module ProcElem_2 :
    input clock : Clock
    input reset : Reset
    output io : { flip in_h : UInt<8>, flip in_v : UInt<8>, out_h : UInt<16>, out_v : UInt<16>, out : UInt<16>}

    reg res : UInt<16>, clock with :
      reset => (reset, UInt<16>("h0")) @[MatMul.scala 20:21]
    reg hreg : UInt<8>, clock with :
      reset => (reset, UInt<8>("h0")) @[MatMul.scala 21:21]
    reg vreg : UInt<8>, clock with :
      reset => (reset, UInt<8>("h0")) @[MatMul.scala 22:21]
    node _res_T = mul(io.in_h, io.in_v) @[MatMul.scala 25:25]
    node _res_T_1 = add(res, _res_T) @[MatMul.scala 25:14]
    node _res_T_2 = tail(_res_T_1, 1) @[MatMul.scala 25:14]
    res <= _res_T_2 @[MatMul.scala 25:7]
    hreg <= io.in_h @[MatMul.scala 28:8]
    vreg <= io.in_v @[MatMul.scala 29:8]
    io.out_h <= hreg @[MatMul.scala 31:12]
    io.out_v <= vreg @[MatMul.scala 32:12]
    io.out <= res @[MatMul.scala 33:10]

  module ProcElem_3 :
    input clock : Clock
    input reset : Reset
    output io : { flip in_h : UInt<8>, flip in_v : UInt<8>, out_h : UInt<16>, out_v : UInt<16>, out : UInt<16>}

    reg res : UInt<16>, clock with :
      reset => (reset, UInt<16>("h0")) @[MatMul.scala 20:21]
    reg hreg : UInt<8>, clock with :
      reset => (reset, UInt<8>("h0")) @[MatMul.scala 21:21]
    reg vreg : UInt<8>, clock with :
      reset => (reset, UInt<8>("h0")) @[MatMul.scala 22:21]
    node _res_T = mul(io.in_h, io.in_v) @[MatMul.scala 25:25]
    node _res_T_1 = add(res, _res_T) @[MatMul.scala 25:14]
    node _res_T_2 = tail(_res_T_1, 1) @[MatMul.scala 25:14]
    res <= _res_T_2 @[MatMul.scala 25:7]
    hreg <= io.in_h @[MatMul.scala 28:8]
    vreg <= io.in_v @[MatMul.scala 29:8]
    io.out_h <= hreg @[MatMul.scala 31:12]
    io.out_v <= vreg @[MatMul.scala 32:12]
    io.out <= res @[MatMul.scala 33:10]

  module ProcElem_4 :
    input clock : Clock
    input reset : Reset
    output io : { flip in_h : UInt<8>, flip in_v : UInt<8>, out_h : UInt<16>, out_v : UInt<16>, out : UInt<16>}

    reg res : UInt<16>, clock with :
      reset => (reset, UInt<16>("h0")) @[MatMul.scala 20:21]
    reg hreg : UInt<8>, clock with :
      reset => (reset, UInt<8>("h0")) @[MatMul.scala 21:21]
    reg vreg : UInt<8>, clock with :
      reset => (reset, UInt<8>("h0")) @[MatMul.scala 22:21]
    node _res_T = mul(io.in_h, io.in_v) @[MatMul.scala 25:25]
    node _res_T_1 = add(res, _res_T) @[MatMul.scala 25:14]
    node _res_T_2 = tail(_res_T_1, 1) @[MatMul.scala 25:14]
    res <= _res_T_2 @[MatMul.scala 25:7]
    hreg <= io.in_h @[MatMul.scala 28:8]
    vreg <= io.in_v @[MatMul.scala 29:8]
    io.out_h <= hreg @[MatMul.scala 31:12]
    io.out_v <= vreg @[MatMul.scala 32:12]
    io.out <= res @[MatMul.scala 33:10]

  module ProcElem_5 :
    input clock : Clock
    input reset : Reset
    output io : { flip in_h : UInt<8>, flip in_v : UInt<8>, out_h : UInt<16>, out_v : UInt<16>, out : UInt<16>}

    reg res : UInt<16>, clock with :
      reset => (reset, UInt<16>("h0")) @[MatMul.scala 20:21]
    reg hreg : UInt<8>, clock with :
      reset => (reset, UInt<8>("h0")) @[MatMul.scala 21:21]
    reg vreg : UInt<8>, clock with :
      reset => (reset, UInt<8>("h0")) @[MatMul.scala 22:21]
    node _res_T = mul(io.in_h, io.in_v) @[MatMul.scala 25:25]
    node _res_T_1 = add(res, _res_T) @[MatMul.scala 25:14]
    node _res_T_2 = tail(_res_T_1, 1) @[MatMul.scala 25:14]
    res <= _res_T_2 @[MatMul.scala 25:7]
    hreg <= io.in_h @[MatMul.scala 28:8]
    vreg <= io.in_v @[MatMul.scala 29:8]
    io.out_h <= hreg @[MatMul.scala 31:12]
    io.out_v <= vreg @[MatMul.scala 32:12]
    io.out <= res @[MatMul.scala 33:10]

  module ProcElem_6 :
    input clock : Clock
    input reset : Reset
    output io : { flip in_h : UInt<8>, flip in_v : UInt<8>, out_h : UInt<16>, out_v : UInt<16>, out : UInt<16>}

    reg res : UInt<16>, clock with :
      reset => (reset, UInt<16>("h0")) @[MatMul.scala 20:21]
    reg hreg : UInt<8>, clock with :
      reset => (reset, UInt<8>("h0")) @[MatMul.scala 21:21]
    reg vreg : UInt<8>, clock with :
      reset => (reset, UInt<8>("h0")) @[MatMul.scala 22:21]
    node _res_T = mul(io.in_h, io.in_v) @[MatMul.scala 25:25]
    node _res_T_1 = add(res, _res_T) @[MatMul.scala 25:14]
    node _res_T_2 = tail(_res_T_1, 1) @[MatMul.scala 25:14]
    res <= _res_T_2 @[MatMul.scala 25:7]
    hreg <= io.in_h @[MatMul.scala 28:8]
    vreg <= io.in_v @[MatMul.scala 29:8]
    io.out_h <= hreg @[MatMul.scala 31:12]
    io.out_v <= vreg @[MatMul.scala 32:12]
    io.out <= res @[MatMul.scala 33:10]

  module ProcElem_7 :
    input clock : Clock
    input reset : Reset
    output io : { flip in_h : UInt<8>, flip in_v : UInt<8>, out_h : UInt<16>, out_v : UInt<16>, out : UInt<16>}

    reg res : UInt<16>, clock with :
      reset => (reset, UInt<16>("h0")) @[MatMul.scala 20:21]
    reg hreg : UInt<8>, clock with :
      reset => (reset, UInt<8>("h0")) @[MatMul.scala 21:21]
    reg vreg : UInt<8>, clock with :
      reset => (reset, UInt<8>("h0")) @[MatMul.scala 22:21]
    node _res_T = mul(io.in_h, io.in_v) @[MatMul.scala 25:25]
    node _res_T_1 = add(res, _res_T) @[MatMul.scala 25:14]
    node _res_T_2 = tail(_res_T_1, 1) @[MatMul.scala 25:14]
    res <= _res_T_2 @[MatMul.scala 25:7]
    hreg <= io.in_h @[MatMul.scala 28:8]
    vreg <= io.in_v @[MatMul.scala 29:8]
    io.out_h <= hreg @[MatMul.scala 31:12]
    io.out_v <= vreg @[MatMul.scala 32:12]
    io.out <= res @[MatMul.scala 33:10]

  module ProcElem_8 :
    input clock : Clock
    input reset : Reset
    output io : { flip in_h : UInt<8>, flip in_v : UInt<8>, out_h : UInt<16>, out_v : UInt<16>, out : UInt<16>}

    reg res : UInt<16>, clock with :
      reset => (reset, UInt<16>("h0")) @[MatMul.scala 20:21]
    reg hreg : UInt<8>, clock with :
      reset => (reset, UInt<8>("h0")) @[MatMul.scala 21:21]
    reg vreg : UInt<8>, clock with :
      reset => (reset, UInt<8>("h0")) @[MatMul.scala 22:21]
    node _res_T = mul(io.in_h, io.in_v) @[MatMul.scala 25:25]
    node _res_T_1 = add(res, _res_T) @[MatMul.scala 25:14]
    node _res_T_2 = tail(_res_T_1, 1) @[MatMul.scala 25:14]
    res <= _res_T_2 @[MatMul.scala 25:7]
    hreg <= io.in_h @[MatMul.scala 28:8]
    vreg <= io.in_v @[MatMul.scala 29:8]
    io.out_h <= hreg @[MatMul.scala 31:12]
    io.out_v <= vreg @[MatMul.scala 32:12]
    io.out <= res @[MatMul.scala 33:10]

  module ProcElem_9 :
    input clock : Clock
    input reset : Reset
    output io : { flip in_h : UInt<8>, flip in_v : UInt<8>, out_h : UInt<16>, out_v : UInt<16>, out : UInt<16>}

    reg res : UInt<16>, clock with :
      reset => (reset, UInt<16>("h0")) @[MatMul.scala 20:21]
    reg hreg : UInt<8>, clock with :
      reset => (reset, UInt<8>("h0")) @[MatMul.scala 21:21]
    reg vreg : UInt<8>, clock with :
      reset => (reset, UInt<8>("h0")) @[MatMul.scala 22:21]
    node _res_T = mul(io.in_h, io.in_v) @[MatMul.scala 25:25]
    node _res_T_1 = add(res, _res_T) @[MatMul.scala 25:14]
    node _res_T_2 = tail(_res_T_1, 1) @[MatMul.scala 25:14]
    res <= _res_T_2 @[MatMul.scala 25:7]
    hreg <= io.in_h @[MatMul.scala 28:8]
    vreg <= io.in_v @[MatMul.scala 29:8]
    io.out_h <= hreg @[MatMul.scala 31:12]
    io.out_v <= vreg @[MatMul.scala 32:12]
    io.out <= res @[MatMul.scala 33:10]

  module ProcElem_10 :
    input clock : Clock
    input reset : Reset
    output io : { flip in_h : UInt<8>, flip in_v : UInt<8>, out_h : UInt<16>, out_v : UInt<16>, out : UInt<16>}

    reg res : UInt<16>, clock with :
      reset => (reset, UInt<16>("h0")) @[MatMul.scala 20:21]
    reg hreg : UInt<8>, clock with :
      reset => (reset, UInt<8>("h0")) @[MatMul.scala 21:21]
    reg vreg : UInt<8>, clock with :
      reset => (reset, UInt<8>("h0")) @[MatMul.scala 22:21]
    node _res_T = mul(io.in_h, io.in_v) @[MatMul.scala 25:25]
    node _res_T_1 = add(res, _res_T) @[MatMul.scala 25:14]
    node _res_T_2 = tail(_res_T_1, 1) @[MatMul.scala 25:14]
    res <= _res_T_2 @[MatMul.scala 25:7]
    hreg <= io.in_h @[MatMul.scala 28:8]
    vreg <= io.in_v @[MatMul.scala 29:8]
    io.out_h <= hreg @[MatMul.scala 31:12]
    io.out_v <= vreg @[MatMul.scala 32:12]
    io.out <= res @[MatMul.scala 33:10]

  module ProcElem_11 :
    input clock : Clock
    input reset : Reset
    output io : { flip in_h : UInt<8>, flip in_v : UInt<8>, out_h : UInt<16>, out_v : UInt<16>, out : UInt<16>}

    reg res : UInt<16>, clock with :
      reset => (reset, UInt<16>("h0")) @[MatMul.scala 20:21]
    reg hreg : UInt<8>, clock with :
      reset => (reset, UInt<8>("h0")) @[MatMul.scala 21:21]
    reg vreg : UInt<8>, clock with :
      reset => (reset, UInt<8>("h0")) @[MatMul.scala 22:21]
    node _res_T = mul(io.in_h, io.in_v) @[MatMul.scala 25:25]
    node _res_T_1 = add(res, _res_T) @[MatMul.scala 25:14]
    node _res_T_2 = tail(_res_T_1, 1) @[MatMul.scala 25:14]
    res <= _res_T_2 @[MatMul.scala 25:7]
    hreg <= io.in_h @[MatMul.scala 28:8]
    vreg <= io.in_v @[MatMul.scala 29:8]
    io.out_h <= hreg @[MatMul.scala 31:12]
    io.out_v <= vreg @[MatMul.scala 32:12]
    io.out <= res @[MatMul.scala 33:10]

  module ProcElem_12 :
    input clock : Clock
    input reset : Reset
    output io : { flip in_h : UInt<8>, flip in_v : UInt<8>, out_h : UInt<16>, out_v : UInt<16>, out : UInt<16>}

    reg res : UInt<16>, clock with :
      reset => (reset, UInt<16>("h0")) @[MatMul.scala 20:21]
    reg hreg : UInt<8>, clock with :
      reset => (reset, UInt<8>("h0")) @[MatMul.scala 21:21]
    reg vreg : UInt<8>, clock with :
      reset => (reset, UInt<8>("h0")) @[MatMul.scala 22:21]
    node _res_T = mul(io.in_h, io.in_v) @[MatMul.scala 25:25]
    node _res_T_1 = add(res, _res_T) @[MatMul.scala 25:14]
    node _res_T_2 = tail(_res_T_1, 1) @[MatMul.scala 25:14]
    res <= _res_T_2 @[MatMul.scala 25:7]
    hreg <= io.in_h @[MatMul.scala 28:8]
    vreg <= io.in_v @[MatMul.scala 29:8]
    io.out_h <= hreg @[MatMul.scala 31:12]
    io.out_v <= vreg @[MatMul.scala 32:12]
    io.out <= res @[MatMul.scala 33:10]

  module ProcElem_13 :
    input clock : Clock
    input reset : Reset
    output io : { flip in_h : UInt<8>, flip in_v : UInt<8>, out_h : UInt<16>, out_v : UInt<16>, out : UInt<16>}

    reg res : UInt<16>, clock with :
      reset => (reset, UInt<16>("h0")) @[MatMul.scala 20:21]
    reg hreg : UInt<8>, clock with :
      reset => (reset, UInt<8>("h0")) @[MatMul.scala 21:21]
    reg vreg : UInt<8>, clock with :
      reset => (reset, UInt<8>("h0")) @[MatMul.scala 22:21]
    node _res_T = mul(io.in_h, io.in_v) @[MatMul.scala 25:25]
    node _res_T_1 = add(res, _res_T) @[MatMul.scala 25:14]
    node _res_T_2 = tail(_res_T_1, 1) @[MatMul.scala 25:14]
    res <= _res_T_2 @[MatMul.scala 25:7]
    hreg <= io.in_h @[MatMul.scala 28:8]
    vreg <= io.in_v @[MatMul.scala 29:8]
    io.out_h <= hreg @[MatMul.scala 31:12]
    io.out_v <= vreg @[MatMul.scala 32:12]
    io.out <= res @[MatMul.scala 33:10]

  module ProcElem_14 :
    input clock : Clock
    input reset : Reset
    output io : { flip in_h : UInt<8>, flip in_v : UInt<8>, out_h : UInt<16>, out_v : UInt<16>, out : UInt<16>}

    reg res : UInt<16>, clock with :
      reset => (reset, UInt<16>("h0")) @[MatMul.scala 20:21]
    reg hreg : UInt<8>, clock with :
      reset => (reset, UInt<8>("h0")) @[MatMul.scala 21:21]
    reg vreg : UInt<8>, clock with :
      reset => (reset, UInt<8>("h0")) @[MatMul.scala 22:21]
    node _res_T = mul(io.in_h, io.in_v) @[MatMul.scala 25:25]
    node _res_T_1 = add(res, _res_T) @[MatMul.scala 25:14]
    node _res_T_2 = tail(_res_T_1, 1) @[MatMul.scala 25:14]
    res <= _res_T_2 @[MatMul.scala 25:7]
    hreg <= io.in_h @[MatMul.scala 28:8]
    vreg <= io.in_v @[MatMul.scala 29:8]
    io.out_h <= hreg @[MatMul.scala 31:12]
    io.out_v <= vreg @[MatMul.scala 32:12]
    io.out <= res @[MatMul.scala 33:10]

  module ProcElem_15 :
    input clock : Clock
    input reset : Reset
    output io : { flip in_h : UInt<8>, flip in_v : UInt<8>, out_h : UInt<16>, out_v : UInt<16>, out : UInt<16>}

    reg res : UInt<16>, clock with :
      reset => (reset, UInt<16>("h0")) @[MatMul.scala 20:21]
    reg hreg : UInt<8>, clock with :
      reset => (reset, UInt<8>("h0")) @[MatMul.scala 21:21]
    reg vreg : UInt<8>, clock with :
      reset => (reset, UInt<8>("h0")) @[MatMul.scala 22:21]
    node _res_T = mul(io.in_h, io.in_v) @[MatMul.scala 25:25]
    node _res_T_1 = add(res, _res_T) @[MatMul.scala 25:14]
    node _res_T_2 = tail(_res_T_1, 1) @[MatMul.scala 25:14]
    res <= _res_T_2 @[MatMul.scala 25:7]
    hreg <= io.in_h @[MatMul.scala 28:8]
    vreg <= io.in_v @[MatMul.scala 29:8]
    io.out_h <= hreg @[MatMul.scala 31:12]
    io.out_v <= vreg @[MatMul.scala 32:12]
    io.out <= res @[MatMul.scala 33:10]

  module SMatMul :
    input clock : Clock
    input reset : UInt<1>
    output io : { flip in_a : UInt<8>[4], flip in_b : UInt<8>[4], out : UInt<16>[16]}

    inst ProcElem of ProcElem @[MatMul.scala 43:47]
    ProcElem.clock <= clock
    ProcElem.reset <= reset
    inst ProcElem_1 of ProcElem_1 @[MatMul.scala 43:47]
    ProcElem_1.clock <= clock
    ProcElem_1.reset <= reset
    inst ProcElem_2 of ProcElem_2 @[MatMul.scala 43:47]
    ProcElem_2.clock <= clock
    ProcElem_2.reset <= reset
    inst ProcElem_3 of ProcElem_3 @[MatMul.scala 43:47]
    ProcElem_3.clock <= clock
    ProcElem_3.reset <= reset
    inst ProcElem_4 of ProcElem_4 @[MatMul.scala 43:47]
    ProcElem_4.clock <= clock
    ProcElem_4.reset <= reset
    inst ProcElem_5 of ProcElem_5 @[MatMul.scala 43:47]
    ProcElem_5.clock <= clock
    ProcElem_5.reset <= reset
    inst ProcElem_6 of ProcElem_6 @[MatMul.scala 43:47]
    ProcElem_6.clock <= clock
    ProcElem_6.reset <= reset
    inst ProcElem_7 of ProcElem_7 @[MatMul.scala 43:47]
    ProcElem_7.clock <= clock
    ProcElem_7.reset <= reset
    inst ProcElem_8 of ProcElem_8 @[MatMul.scala 43:47]
    ProcElem_8.clock <= clock
    ProcElem_8.reset <= reset
    inst ProcElem_9 of ProcElem_9 @[MatMul.scala 43:47]
    ProcElem_9.clock <= clock
    ProcElem_9.reset <= reset
    inst ProcElem_10 of ProcElem_10 @[MatMul.scala 43:47]
    ProcElem_10.clock <= clock
    ProcElem_10.reset <= reset
    inst ProcElem_11 of ProcElem_11 @[MatMul.scala 43:47]
    ProcElem_11.clock <= clock
    ProcElem_11.reset <= reset
    inst ProcElem_12 of ProcElem_12 @[MatMul.scala 43:47]
    ProcElem_12.clock <= clock
    ProcElem_12.reset <= reset
    inst ProcElem_13 of ProcElem_13 @[MatMul.scala 43:47]
    ProcElem_13.clock <= clock
    ProcElem_13.reset <= reset
    inst ProcElem_14 of ProcElem_14 @[MatMul.scala 43:47]
    ProcElem_14.clock <= clock
    ProcElem_14.reset <= reset
    inst ProcElem_15 of ProcElem_15 @[MatMul.scala 43:47]
    ProcElem_15.clock <= clock
    ProcElem_15.reset <= reset
    wire p_elems : { flip in_h : UInt<8>, flip in_v : UInt<8>, out_h : UInt<16>, out_v : UInt<16>, out : UInt<16>}[16] @[MatMul.scala 43:24]
    p_elems[0].out <= ProcElem.io.out @[MatMul.scala 43:24]
    p_elems[0].out_v <= ProcElem.io.out_v @[MatMul.scala 43:24]
    p_elems[0].out_h <= ProcElem.io.out_h @[MatMul.scala 43:24]
    ProcElem.io.in_v <= p_elems[0].in_v @[MatMul.scala 43:24]
    ProcElem.io.in_h <= p_elems[0].in_h @[MatMul.scala 43:24]
    p_elems[1].out <= ProcElem_1.io.out @[MatMul.scala 43:24]
    p_elems[1].out_v <= ProcElem_1.io.out_v @[MatMul.scala 43:24]
    p_elems[1].out_h <= ProcElem_1.io.out_h @[MatMul.scala 43:24]
    ProcElem_1.io.in_v <= p_elems[1].in_v @[MatMul.scala 43:24]
    ProcElem_1.io.in_h <= p_elems[1].in_h @[MatMul.scala 43:24]
    p_elems[2].out <= ProcElem_2.io.out @[MatMul.scala 43:24]
    p_elems[2].out_v <= ProcElem_2.io.out_v @[MatMul.scala 43:24]
    p_elems[2].out_h <= ProcElem_2.io.out_h @[MatMul.scala 43:24]
    ProcElem_2.io.in_v <= p_elems[2].in_v @[MatMul.scala 43:24]
    ProcElem_2.io.in_h <= p_elems[2].in_h @[MatMul.scala 43:24]
    p_elems[3].out <= ProcElem_3.io.out @[MatMul.scala 43:24]
    p_elems[3].out_v <= ProcElem_3.io.out_v @[MatMul.scala 43:24]
    p_elems[3].out_h <= ProcElem_3.io.out_h @[MatMul.scala 43:24]
    ProcElem_3.io.in_v <= p_elems[3].in_v @[MatMul.scala 43:24]
    ProcElem_3.io.in_h <= p_elems[3].in_h @[MatMul.scala 43:24]
    p_elems[4].out <= ProcElem_4.io.out @[MatMul.scala 43:24]
    p_elems[4].out_v <= ProcElem_4.io.out_v @[MatMul.scala 43:24]
    p_elems[4].out_h <= ProcElem_4.io.out_h @[MatMul.scala 43:24]
    ProcElem_4.io.in_v <= p_elems[4].in_v @[MatMul.scala 43:24]
    ProcElem_4.io.in_h <= p_elems[4].in_h @[MatMul.scala 43:24]
    p_elems[5].out <= ProcElem_5.io.out @[MatMul.scala 43:24]
    p_elems[5].out_v <= ProcElem_5.io.out_v @[MatMul.scala 43:24]
    p_elems[5].out_h <= ProcElem_5.io.out_h @[MatMul.scala 43:24]
    ProcElem_5.io.in_v <= p_elems[5].in_v @[MatMul.scala 43:24]
    ProcElem_5.io.in_h <= p_elems[5].in_h @[MatMul.scala 43:24]
    p_elems[6].out <= ProcElem_6.io.out @[MatMul.scala 43:24]
    p_elems[6].out_v <= ProcElem_6.io.out_v @[MatMul.scala 43:24]
    p_elems[6].out_h <= ProcElem_6.io.out_h @[MatMul.scala 43:24]
    ProcElem_6.io.in_v <= p_elems[6].in_v @[MatMul.scala 43:24]
    ProcElem_6.io.in_h <= p_elems[6].in_h @[MatMul.scala 43:24]
    p_elems[7].out <= ProcElem_7.io.out @[MatMul.scala 43:24]
    p_elems[7].out_v <= ProcElem_7.io.out_v @[MatMul.scala 43:24]
    p_elems[7].out_h <= ProcElem_7.io.out_h @[MatMul.scala 43:24]
    ProcElem_7.io.in_v <= p_elems[7].in_v @[MatMul.scala 43:24]
    ProcElem_7.io.in_h <= p_elems[7].in_h @[MatMul.scala 43:24]
    p_elems[8].out <= ProcElem_8.io.out @[MatMul.scala 43:24]
    p_elems[8].out_v <= ProcElem_8.io.out_v @[MatMul.scala 43:24]
    p_elems[8].out_h <= ProcElem_8.io.out_h @[MatMul.scala 43:24]
    ProcElem_8.io.in_v <= p_elems[8].in_v @[MatMul.scala 43:24]
    ProcElem_8.io.in_h <= p_elems[8].in_h @[MatMul.scala 43:24]
    p_elems[9].out <= ProcElem_9.io.out @[MatMul.scala 43:24]
    p_elems[9].out_v <= ProcElem_9.io.out_v @[MatMul.scala 43:24]
    p_elems[9].out_h <= ProcElem_9.io.out_h @[MatMul.scala 43:24]
    ProcElem_9.io.in_v <= p_elems[9].in_v @[MatMul.scala 43:24]
    ProcElem_9.io.in_h <= p_elems[9].in_h @[MatMul.scala 43:24]
    p_elems[10].out <= ProcElem_10.io.out @[MatMul.scala 43:24]
    p_elems[10].out_v <= ProcElem_10.io.out_v @[MatMul.scala 43:24]
    p_elems[10].out_h <= ProcElem_10.io.out_h @[MatMul.scala 43:24]
    ProcElem_10.io.in_v <= p_elems[10].in_v @[MatMul.scala 43:24]
    ProcElem_10.io.in_h <= p_elems[10].in_h @[MatMul.scala 43:24]
    p_elems[11].out <= ProcElem_11.io.out @[MatMul.scala 43:24]
    p_elems[11].out_v <= ProcElem_11.io.out_v @[MatMul.scala 43:24]
    p_elems[11].out_h <= ProcElem_11.io.out_h @[MatMul.scala 43:24]
    ProcElem_11.io.in_v <= p_elems[11].in_v @[MatMul.scala 43:24]
    ProcElem_11.io.in_h <= p_elems[11].in_h @[MatMul.scala 43:24]
    p_elems[12].out <= ProcElem_12.io.out @[MatMul.scala 43:24]
    p_elems[12].out_v <= ProcElem_12.io.out_v @[MatMul.scala 43:24]
    p_elems[12].out_h <= ProcElem_12.io.out_h @[MatMul.scala 43:24]
    ProcElem_12.io.in_v <= p_elems[12].in_v @[MatMul.scala 43:24]
    ProcElem_12.io.in_h <= p_elems[12].in_h @[MatMul.scala 43:24]
    p_elems[13].out <= ProcElem_13.io.out @[MatMul.scala 43:24]
    p_elems[13].out_v <= ProcElem_13.io.out_v @[MatMul.scala 43:24]
    p_elems[13].out_h <= ProcElem_13.io.out_h @[MatMul.scala 43:24]
    ProcElem_13.io.in_v <= p_elems[13].in_v @[MatMul.scala 43:24]
    ProcElem_13.io.in_h <= p_elems[13].in_h @[MatMul.scala 43:24]
    p_elems[14].out <= ProcElem_14.io.out @[MatMul.scala 43:24]
    p_elems[14].out_v <= ProcElem_14.io.out_v @[MatMul.scala 43:24]
    p_elems[14].out_h <= ProcElem_14.io.out_h @[MatMul.scala 43:24]
    ProcElem_14.io.in_v <= p_elems[14].in_v @[MatMul.scala 43:24]
    ProcElem_14.io.in_h <= p_elems[14].in_h @[MatMul.scala 43:24]
    p_elems[15].out <= ProcElem_15.io.out @[MatMul.scala 43:24]
    p_elems[15].out_v <= ProcElem_15.io.out_v @[MatMul.scala 43:24]
    p_elems[15].out_h <= ProcElem_15.io.out_h @[MatMul.scala 43:24]
    ProcElem_15.io.in_v <= p_elems[15].in_v @[MatMul.scala 43:24]
    ProcElem_15.io.in_h <= p_elems[15].in_h @[MatMul.scala 43:24]
    wire h_wires : UInt<8>[12] @[MatMul.scala 44:21]
    wire v_wires : UInt<8>[12] @[MatMul.scala 45:21]
    io.out[0] <= p_elems[0].out @[MatMul.scala 54:20]
    p_elems[0].in_h <= io.in_a[0] @[MatMul.scala 58:42]
    h_wires[0] <= p_elems[0].out_h @[MatMul.scala 61:49]
    p_elems[0].in_v <= io.in_b[0] @[MatMul.scala 63:42]
    v_wires[0] <= p_elems[0].out_v @[MatMul.scala 66:49]
    io.out[4] <= p_elems[4].out @[MatMul.scala 54:20]
    p_elems[4].in_h <= io.in_a[1] @[MatMul.scala 58:42]
    h_wires[3] <= p_elems[4].out_h @[MatMul.scala 61:49]
    p_elems[4].in_v <= v_wires[0] @[MatMul.scala 64:42]
    v_wires[4] <= p_elems[4].out_v @[MatMul.scala 66:49]
    io.out[8] <= p_elems[8].out @[MatMul.scala 54:20]
    p_elems[8].in_h <= io.in_a[2] @[MatMul.scala 58:42]
    h_wires[6] <= p_elems[8].out_h @[MatMul.scala 61:49]
    p_elems[8].in_v <= v_wires[4] @[MatMul.scala 64:42]
    v_wires[8] <= p_elems[8].out_v @[MatMul.scala 66:49]
    io.out[12] <= p_elems[12].out @[MatMul.scala 54:20]
    p_elems[12].in_h <= io.in_a[3] @[MatMul.scala 58:42]
    h_wires[9] <= p_elems[12].out_h @[MatMul.scala 61:49]
    p_elems[12].in_v <= v_wires[8] @[MatMul.scala 64:42]
    io.out[1] <= p_elems[1].out @[MatMul.scala 54:20]
    p_elems[1].in_h <= h_wires[0] @[MatMul.scala 59:42]
    h_wires[1] <= p_elems[1].out_h @[MatMul.scala 61:49]
    p_elems[1].in_v <= io.in_b[1] @[MatMul.scala 63:42]
    v_wires[1] <= p_elems[1].out_v @[MatMul.scala 66:49]
    io.out[5] <= p_elems[5].out @[MatMul.scala 54:20]
    p_elems[5].in_h <= h_wires[3] @[MatMul.scala 59:42]
    h_wires[4] <= p_elems[5].out_h @[MatMul.scala 61:49]
    p_elems[5].in_v <= v_wires[1] @[MatMul.scala 64:42]
    v_wires[5] <= p_elems[5].out_v @[MatMul.scala 66:49]
    io.out[9] <= p_elems[9].out @[MatMul.scala 54:20]
    p_elems[9].in_h <= h_wires[6] @[MatMul.scala 59:42]
    h_wires[7] <= p_elems[9].out_h @[MatMul.scala 61:49]
    p_elems[9].in_v <= v_wires[5] @[MatMul.scala 64:42]
    v_wires[9] <= p_elems[9].out_v @[MatMul.scala 66:49]
    io.out[13] <= p_elems[13].out @[MatMul.scala 54:20]
    p_elems[13].in_h <= h_wires[9] @[MatMul.scala 59:42]
    h_wires[10] <= p_elems[13].out_h @[MatMul.scala 61:49]
    p_elems[13].in_v <= v_wires[9] @[MatMul.scala 64:42]
    io.out[2] <= p_elems[2].out @[MatMul.scala 54:20]
    p_elems[2].in_h <= h_wires[1] @[MatMul.scala 59:42]
    h_wires[2] <= p_elems[2].out_h @[MatMul.scala 61:49]
    p_elems[2].in_v <= io.in_b[2] @[MatMul.scala 63:42]
    v_wires[2] <= p_elems[2].out_v @[MatMul.scala 66:49]
    io.out[6] <= p_elems[6].out @[MatMul.scala 54:20]
    p_elems[6].in_h <= h_wires[4] @[MatMul.scala 59:42]
    h_wires[5] <= p_elems[6].out_h @[MatMul.scala 61:49]
    p_elems[6].in_v <= v_wires[2] @[MatMul.scala 64:42]
    v_wires[6] <= p_elems[6].out_v @[MatMul.scala 66:49]
    io.out[10] <= p_elems[10].out @[MatMul.scala 54:20]
    p_elems[10].in_h <= h_wires[7] @[MatMul.scala 59:42]
    h_wires[8] <= p_elems[10].out_h @[MatMul.scala 61:49]
    p_elems[10].in_v <= v_wires[6] @[MatMul.scala 64:42]
    v_wires[10] <= p_elems[10].out_v @[MatMul.scala 66:49]
    io.out[14] <= p_elems[14].out @[MatMul.scala 54:20]
    p_elems[14].in_h <= h_wires[10] @[MatMul.scala 59:42]
    h_wires[11] <= p_elems[14].out_h @[MatMul.scala 61:49]
    p_elems[14].in_v <= v_wires[10] @[MatMul.scala 64:42]
    io.out[3] <= p_elems[3].out @[MatMul.scala 54:20]
    p_elems[3].in_h <= h_wires[2] @[MatMul.scala 59:42]
    p_elems[3].in_v <= io.in_b[3] @[MatMul.scala 63:42]
    v_wires[3] <= p_elems[3].out_v @[MatMul.scala 66:49]
    io.out[7] <= p_elems[7].out @[MatMul.scala 54:20]
    p_elems[7].in_h <= h_wires[5] @[MatMul.scala 59:42]
    p_elems[7].in_v <= v_wires[3] @[MatMul.scala 64:42]
    v_wires[7] <= p_elems[7].out_v @[MatMul.scala 66:49]
    io.out[11] <= p_elems[11].out @[MatMul.scala 54:20]
    p_elems[11].in_h <= h_wires[8] @[MatMul.scala 59:42]
    p_elems[11].in_v <= v_wires[7] @[MatMul.scala 64:42]
    v_wires[11] <= p_elems[11].out_v @[MatMul.scala 66:49]
    io.out[15] <= p_elems[15].out @[MatMul.scala 54:20]
    p_elems[15].in_h <= h_wires[11] @[MatMul.scala 59:42]
    p_elems[15].in_v <= v_wires[11] @[MatMul.scala 64:42]

