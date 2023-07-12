circuit SystolicArray_HBFP :
  module FPMult :
    input clock : Clock
    input reset : Reset
    output io : { flip in : { a : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, b : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}, out : { result : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}}

    node _io_out_result_sign_T = xor(io.in.a.sign, io.in.b.sign) @[MatMul.scala 344:38]
    io.out.result.sign <= _io_out_result_sign_T @[MatMul.scala 344:22]
    node exp_addition = add(io.in.a.exp, io.in.b.exp) @[MatMul.scala 345:34]
    node _io_out_result_exp_T = sub(UInt<9>("h100"), UInt<1>("h1")) @[MatMul.scala 346:57]
    node _io_out_result_exp_T_1 = tail(_io_out_result_exp_T, 1) @[MatMul.scala 346:57]
    node _io_out_result_exp_T_2 = gt(exp_addition, _io_out_result_exp_T_1) @[MatMul.scala 346:41]
    node _io_out_result_exp_T_3 = sub(UInt<9>("h100"), UInt<1>("h1")) @[MatMul.scala 346:78]
    node _io_out_result_exp_T_4 = tail(_io_out_result_exp_T_3, 1) @[MatMul.scala 346:78]
    node _io_out_result_exp_T_5 = mux(_io_out_result_exp_T_2, _io_out_result_exp_T_4, exp_addition) @[MatMul.scala 346:27]
    io.out.result.exp <= _io_out_result_exp_T_5 @[MatMul.scala 346:21]
    node _io_out_result_man_T = mul(io.in.a.man, io.in.b.man) @[MatMul.scala 347:39]
    node _io_out_result_man_T_1 = sub(UInt<7>("h40"), UInt<1>("h1")) @[MatMul.scala 347:68]
    node _io_out_result_man_T_2 = tail(_io_out_result_man_T_1, 1) @[MatMul.scala 347:68]
    node _io_out_result_man_T_3 = gt(_io_out_result_man_T, _io_out_result_man_T_2) @[MatMul.scala 347:52]
    node _io_out_result_man_T_4 = sub(UInt<7>("h40"), UInt<1>("h1")) @[MatMul.scala 347:89]
    node _io_out_result_man_T_5 = tail(_io_out_result_man_T_4, 1) @[MatMul.scala 347:89]
    node _io_out_result_man_T_6 = mul(io.in.a.man, io.in.b.man) @[MatMul.scala 347:107]
    node _io_out_result_man_T_7 = mux(_io_out_result_man_T_3, _io_out_result_man_T_5, _io_out_result_man_T_6) @[MatMul.scala 347:27]
    io.out.result.man <= _io_out_result_man_T_7 @[MatMul.scala 347:21]

  module FPAdder :
    input clock : Clock
    input reset : Reset
    output io : { flip in : { a : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, b : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}, out : { result : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}}

    node _exp_diff_T = gt(io.in.a.exp, io.in.b.exp) @[MatMul.scala 361:34]
    node _exp_diff_T_1 = sub(io.in.a.exp, io.in.b.exp) @[MatMul.scala 361:61]
    node _exp_diff_T_2 = tail(_exp_diff_T_1, 1) @[MatMul.scala 361:61]
    node _exp_diff_T_3 = sub(io.in.b.exp, io.in.a.exp) @[MatMul.scala 361:88]
    node _exp_diff_T_4 = tail(_exp_diff_T_3, 1) @[MatMul.scala 361:88]
    node exp_diff = mux(_exp_diff_T, _exp_diff_T_2, _exp_diff_T_4) @[MatMul.scala 361:21]
    node _io_out_result_sign_T = gt(io.in.a.exp, io.in.b.exp) @[MatMul.scala 363:41]
    node _io_out_result_sign_T_1 = dshr(io.in.b.man, exp_diff) @[MatMul.scala 363:87]
    node _io_out_result_sign_T_2 = gt(io.in.a.man, _io_out_result_sign_T_1) @[MatMul.scala 363:72]
    node _io_out_result_sign_T_3 = mux(_io_out_result_sign_T_2, io.in.a.sign, io.in.b.sign) @[MatMul.scala 363:59]
    node _io_out_result_sign_T_4 = dshr(io.in.a.man, exp_diff) @[MatMul.scala 363:147]
    node _io_out_result_sign_T_5 = gt(_io_out_result_sign_T_4, io.in.b.man) @[MatMul.scala 363:158]
    node _io_out_result_sign_T_6 = mux(_io_out_result_sign_T_5, io.in.a.sign, io.in.b.sign) @[MatMul.scala 363:133]
    node _io_out_result_sign_T_7 = mux(_io_out_result_sign_T, _io_out_result_sign_T_3, _io_out_result_sign_T_6) @[MatMul.scala 363:28]
    io.out.result.sign <= _io_out_result_sign_T_7 @[MatMul.scala 363:22]
    node _io_out_result_exp_T = gt(io.in.a.exp, io.in.b.exp) @[MatMul.scala 364:40]
    node _io_out_result_exp_T_1 = mux(_io_out_result_exp_T, io.in.a.exp, io.in.b.exp) @[MatMul.scala 364:27]
    io.out.result.exp <= _io_out_result_exp_T_1 @[MatMul.scala 364:21]
    node _addition_T = gt(io.in.a.exp, io.in.b.exp) @[MatMul.scala 365:34]
    node _addition_T_1 = eq(io.in.a.sign, io.in.b.sign) @[MatMul.scala 365:66]
    node _addition_T_2 = dshr(io.in.b.man, exp_diff) @[MatMul.scala 365:112]
    node _addition_T_3 = add(io.in.a.man, _addition_T_2) @[MatMul.scala 365:96]
    node _addition_T_4 = dshr(io.in.b.man, exp_diff) @[MatMul.scala 365:157]
    node _addition_T_5 = gt(io.in.a.man, _addition_T_4) @[MatMul.scala 365:142]
    node _addition_T_6 = dshr(io.in.b.man, exp_diff) @[MatMul.scala 365:197]
    node _addition_T_7 = sub(io.in.a.man, _addition_T_6) @[MatMul.scala 365:183]
    node _addition_T_8 = tail(_addition_T_7, 1) @[MatMul.scala 365:183]
    node _addition_T_9 = dshr(io.in.b.man, exp_diff) @[MatMul.scala 365:223]
    node _addition_T_10 = sub(_addition_T_9, io.in.a.man) @[MatMul.scala 365:236]
    node _addition_T_11 = tail(_addition_T_10, 1) @[MatMul.scala 365:236]
    node _addition_T_12 = mux(_addition_T_5, _addition_T_8, _addition_T_11) @[MatMul.scala 365:129]
    node _addition_T_13 = mux(_addition_T_1, _addition_T_3, _addition_T_12) @[MatMul.scala 365:52]
    node _addition_T_14 = eq(io.in.a.sign, io.in.b.sign) @[MatMul.scala 365:271]
    node _addition_T_15 = dshr(io.in.a.man, exp_diff) @[MatMul.scala 365:317]
    node _addition_T_16 = add(io.in.b.man, _addition_T_15) @[MatMul.scala 365:301]
    node _addition_T_17 = dshr(io.in.a.man, exp_diff) @[MatMul.scala 365:362]
    node _addition_T_18 = gt(io.in.b.man, _addition_T_17) @[MatMul.scala 365:347]
    node _addition_T_19 = dshr(io.in.a.man, exp_diff) @[MatMul.scala 365:402]
    node _addition_T_20 = sub(io.in.b.man, _addition_T_19) @[MatMul.scala 365:388]
    node _addition_T_21 = tail(_addition_T_20, 1) @[MatMul.scala 365:388]
    node _addition_T_22 = dshr(io.in.a.man, exp_diff) @[MatMul.scala 365:428]
    node _addition_T_23 = sub(_addition_T_22, io.in.b.man) @[MatMul.scala 365:441]
    node _addition_T_24 = tail(_addition_T_23, 1) @[MatMul.scala 365:441]
    node _addition_T_25 = mux(_addition_T_18, _addition_T_21, _addition_T_24) @[MatMul.scala 365:334]
    node _addition_T_26 = mux(_addition_T_14, _addition_T_16, _addition_T_25) @[MatMul.scala 365:257]
    node addition = mux(_addition_T, _addition_T_13, _addition_T_26) @[MatMul.scala 365:21]
    node _io_out_result_man_T = sub(UInt<7>("h40"), UInt<1>("h1")) @[MatMul.scala 366:53]
    node _io_out_result_man_T_1 = tail(_io_out_result_man_T, 1) @[MatMul.scala 366:53]
    node _io_out_result_man_T_2 = gt(addition, _io_out_result_man_T_1) @[MatMul.scala 366:37]
    node _io_out_result_man_T_3 = sub(UInt<7>("h40"), UInt<1>("h1")) @[MatMul.scala 366:74]
    node _io_out_result_man_T_4 = tail(_io_out_result_man_T_3, 1) @[MatMul.scala 366:74]
    node _io_out_result_man_T_5 = mux(_io_out_result_man_T_2, _io_out_result_man_T_4, addition) @[MatMul.scala 366:27]
    io.out.result.man <= _io_out_result_man_T_5 @[MatMul.scala 366:21]

  module PE :
    input clock : Clock
    input reset : Reset
    output io : { flip in : { hor : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, ver : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}, out : { hor : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, ver : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, result : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}}

    reg result_buffer : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, clock with :
      reset => (UInt<1>("h0"), result_buffer) @[MatMul.scala 385:28]
    inst fpmult of FPMult @[MatMul.scala 388:24]
    fpmult.clock <= clock
    fpmult.reset <= reset
    fpmult.io.in.a <= io.in.hor @[MatMul.scala 389:20]
    fpmult.io.in.b <= io.in.ver @[MatMul.scala 390:20]
    inst fpadder of FPAdder @[MatMul.scala 392:25]
    fpadder.clock <= clock
    fpadder.reset <= reset
    fpadder.io.in.a <= fpmult.io.out.result @[MatMul.scala 393:21]
    fpadder.io.in.b <= result_buffer @[MatMul.scala 394:21]
    result_buffer <= fpadder.io.out.result @[MatMul.scala 395:19]
    io.out.hor <= io.in.hor @[MatMul.scala 397:16]
    io.out.ver <= io.in.ver @[MatMul.scala 398:16]
    io.out.result <= result_buffer @[MatMul.scala 399:19]

  module FPMult_1 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : { a : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, b : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}, out : { result : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}}

    node _io_out_result_sign_T = xor(io.in.a.sign, io.in.b.sign) @[MatMul.scala 344:38]
    io.out.result.sign <= _io_out_result_sign_T @[MatMul.scala 344:22]
    node exp_addition = add(io.in.a.exp, io.in.b.exp) @[MatMul.scala 345:34]
    node _io_out_result_exp_T = sub(UInt<9>("h100"), UInt<1>("h1")) @[MatMul.scala 346:57]
    node _io_out_result_exp_T_1 = tail(_io_out_result_exp_T, 1) @[MatMul.scala 346:57]
    node _io_out_result_exp_T_2 = gt(exp_addition, _io_out_result_exp_T_1) @[MatMul.scala 346:41]
    node _io_out_result_exp_T_3 = sub(UInt<9>("h100"), UInt<1>("h1")) @[MatMul.scala 346:78]
    node _io_out_result_exp_T_4 = tail(_io_out_result_exp_T_3, 1) @[MatMul.scala 346:78]
    node _io_out_result_exp_T_5 = mux(_io_out_result_exp_T_2, _io_out_result_exp_T_4, exp_addition) @[MatMul.scala 346:27]
    io.out.result.exp <= _io_out_result_exp_T_5 @[MatMul.scala 346:21]
    node _io_out_result_man_T = mul(io.in.a.man, io.in.b.man) @[MatMul.scala 347:39]
    node _io_out_result_man_T_1 = sub(UInt<7>("h40"), UInt<1>("h1")) @[MatMul.scala 347:68]
    node _io_out_result_man_T_2 = tail(_io_out_result_man_T_1, 1) @[MatMul.scala 347:68]
    node _io_out_result_man_T_3 = gt(_io_out_result_man_T, _io_out_result_man_T_2) @[MatMul.scala 347:52]
    node _io_out_result_man_T_4 = sub(UInt<7>("h40"), UInt<1>("h1")) @[MatMul.scala 347:89]
    node _io_out_result_man_T_5 = tail(_io_out_result_man_T_4, 1) @[MatMul.scala 347:89]
    node _io_out_result_man_T_6 = mul(io.in.a.man, io.in.b.man) @[MatMul.scala 347:107]
    node _io_out_result_man_T_7 = mux(_io_out_result_man_T_3, _io_out_result_man_T_5, _io_out_result_man_T_6) @[MatMul.scala 347:27]
    io.out.result.man <= _io_out_result_man_T_7 @[MatMul.scala 347:21]

  module FPAdder_1 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : { a : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, b : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}, out : { result : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}}

    node _exp_diff_T = gt(io.in.a.exp, io.in.b.exp) @[MatMul.scala 361:34]
    node _exp_diff_T_1 = sub(io.in.a.exp, io.in.b.exp) @[MatMul.scala 361:61]
    node _exp_diff_T_2 = tail(_exp_diff_T_1, 1) @[MatMul.scala 361:61]
    node _exp_diff_T_3 = sub(io.in.b.exp, io.in.a.exp) @[MatMul.scala 361:88]
    node _exp_diff_T_4 = tail(_exp_diff_T_3, 1) @[MatMul.scala 361:88]
    node exp_diff = mux(_exp_diff_T, _exp_diff_T_2, _exp_diff_T_4) @[MatMul.scala 361:21]
    node _io_out_result_sign_T = gt(io.in.a.exp, io.in.b.exp) @[MatMul.scala 363:41]
    node _io_out_result_sign_T_1 = dshr(io.in.b.man, exp_diff) @[MatMul.scala 363:87]
    node _io_out_result_sign_T_2 = gt(io.in.a.man, _io_out_result_sign_T_1) @[MatMul.scala 363:72]
    node _io_out_result_sign_T_3 = mux(_io_out_result_sign_T_2, io.in.a.sign, io.in.b.sign) @[MatMul.scala 363:59]
    node _io_out_result_sign_T_4 = dshr(io.in.a.man, exp_diff) @[MatMul.scala 363:147]
    node _io_out_result_sign_T_5 = gt(_io_out_result_sign_T_4, io.in.b.man) @[MatMul.scala 363:158]
    node _io_out_result_sign_T_6 = mux(_io_out_result_sign_T_5, io.in.a.sign, io.in.b.sign) @[MatMul.scala 363:133]
    node _io_out_result_sign_T_7 = mux(_io_out_result_sign_T, _io_out_result_sign_T_3, _io_out_result_sign_T_6) @[MatMul.scala 363:28]
    io.out.result.sign <= _io_out_result_sign_T_7 @[MatMul.scala 363:22]
    node _io_out_result_exp_T = gt(io.in.a.exp, io.in.b.exp) @[MatMul.scala 364:40]
    node _io_out_result_exp_T_1 = mux(_io_out_result_exp_T, io.in.a.exp, io.in.b.exp) @[MatMul.scala 364:27]
    io.out.result.exp <= _io_out_result_exp_T_1 @[MatMul.scala 364:21]
    node _addition_T = gt(io.in.a.exp, io.in.b.exp) @[MatMul.scala 365:34]
    node _addition_T_1 = eq(io.in.a.sign, io.in.b.sign) @[MatMul.scala 365:66]
    node _addition_T_2 = dshr(io.in.b.man, exp_diff) @[MatMul.scala 365:112]
    node _addition_T_3 = add(io.in.a.man, _addition_T_2) @[MatMul.scala 365:96]
    node _addition_T_4 = dshr(io.in.b.man, exp_diff) @[MatMul.scala 365:157]
    node _addition_T_5 = gt(io.in.a.man, _addition_T_4) @[MatMul.scala 365:142]
    node _addition_T_6 = dshr(io.in.b.man, exp_diff) @[MatMul.scala 365:197]
    node _addition_T_7 = sub(io.in.a.man, _addition_T_6) @[MatMul.scala 365:183]
    node _addition_T_8 = tail(_addition_T_7, 1) @[MatMul.scala 365:183]
    node _addition_T_9 = dshr(io.in.b.man, exp_diff) @[MatMul.scala 365:223]
    node _addition_T_10 = sub(_addition_T_9, io.in.a.man) @[MatMul.scala 365:236]
    node _addition_T_11 = tail(_addition_T_10, 1) @[MatMul.scala 365:236]
    node _addition_T_12 = mux(_addition_T_5, _addition_T_8, _addition_T_11) @[MatMul.scala 365:129]
    node _addition_T_13 = mux(_addition_T_1, _addition_T_3, _addition_T_12) @[MatMul.scala 365:52]
    node _addition_T_14 = eq(io.in.a.sign, io.in.b.sign) @[MatMul.scala 365:271]
    node _addition_T_15 = dshr(io.in.a.man, exp_diff) @[MatMul.scala 365:317]
    node _addition_T_16 = add(io.in.b.man, _addition_T_15) @[MatMul.scala 365:301]
    node _addition_T_17 = dshr(io.in.a.man, exp_diff) @[MatMul.scala 365:362]
    node _addition_T_18 = gt(io.in.b.man, _addition_T_17) @[MatMul.scala 365:347]
    node _addition_T_19 = dshr(io.in.a.man, exp_diff) @[MatMul.scala 365:402]
    node _addition_T_20 = sub(io.in.b.man, _addition_T_19) @[MatMul.scala 365:388]
    node _addition_T_21 = tail(_addition_T_20, 1) @[MatMul.scala 365:388]
    node _addition_T_22 = dshr(io.in.a.man, exp_diff) @[MatMul.scala 365:428]
    node _addition_T_23 = sub(_addition_T_22, io.in.b.man) @[MatMul.scala 365:441]
    node _addition_T_24 = tail(_addition_T_23, 1) @[MatMul.scala 365:441]
    node _addition_T_25 = mux(_addition_T_18, _addition_T_21, _addition_T_24) @[MatMul.scala 365:334]
    node _addition_T_26 = mux(_addition_T_14, _addition_T_16, _addition_T_25) @[MatMul.scala 365:257]
    node addition = mux(_addition_T, _addition_T_13, _addition_T_26) @[MatMul.scala 365:21]
    node _io_out_result_man_T = sub(UInt<7>("h40"), UInt<1>("h1")) @[MatMul.scala 366:53]
    node _io_out_result_man_T_1 = tail(_io_out_result_man_T, 1) @[MatMul.scala 366:53]
    node _io_out_result_man_T_2 = gt(addition, _io_out_result_man_T_1) @[MatMul.scala 366:37]
    node _io_out_result_man_T_3 = sub(UInt<7>("h40"), UInt<1>("h1")) @[MatMul.scala 366:74]
    node _io_out_result_man_T_4 = tail(_io_out_result_man_T_3, 1) @[MatMul.scala 366:74]
    node _io_out_result_man_T_5 = mux(_io_out_result_man_T_2, _io_out_result_man_T_4, addition) @[MatMul.scala 366:27]
    io.out.result.man <= _io_out_result_man_T_5 @[MatMul.scala 366:21]

  module PE_1 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : { hor : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, ver : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}, out : { hor : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, ver : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, result : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}}

    reg result_buffer : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, clock with :
      reset => (UInt<1>("h0"), result_buffer) @[MatMul.scala 385:28]
    inst fpmult of FPMult_1 @[MatMul.scala 388:24]
    fpmult.clock <= clock
    fpmult.reset <= reset
    fpmult.io.in.a <= io.in.hor @[MatMul.scala 389:20]
    fpmult.io.in.b <= io.in.ver @[MatMul.scala 390:20]
    inst fpadder of FPAdder_1 @[MatMul.scala 392:25]
    fpadder.clock <= clock
    fpadder.reset <= reset
    fpadder.io.in.a <= fpmult.io.out.result @[MatMul.scala 393:21]
    fpadder.io.in.b <= result_buffer @[MatMul.scala 394:21]
    result_buffer <= fpadder.io.out.result @[MatMul.scala 395:19]
    io.out.hor <= io.in.hor @[MatMul.scala 397:16]
    io.out.ver <= io.in.ver @[MatMul.scala 398:16]
    io.out.result <= result_buffer @[MatMul.scala 399:19]

  module FPMult_2 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : { a : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, b : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}, out : { result : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}}

    node _io_out_result_sign_T = xor(io.in.a.sign, io.in.b.sign) @[MatMul.scala 344:38]
    io.out.result.sign <= _io_out_result_sign_T @[MatMul.scala 344:22]
    node exp_addition = add(io.in.a.exp, io.in.b.exp) @[MatMul.scala 345:34]
    node _io_out_result_exp_T = sub(UInt<9>("h100"), UInt<1>("h1")) @[MatMul.scala 346:57]
    node _io_out_result_exp_T_1 = tail(_io_out_result_exp_T, 1) @[MatMul.scala 346:57]
    node _io_out_result_exp_T_2 = gt(exp_addition, _io_out_result_exp_T_1) @[MatMul.scala 346:41]
    node _io_out_result_exp_T_3 = sub(UInt<9>("h100"), UInt<1>("h1")) @[MatMul.scala 346:78]
    node _io_out_result_exp_T_4 = tail(_io_out_result_exp_T_3, 1) @[MatMul.scala 346:78]
    node _io_out_result_exp_T_5 = mux(_io_out_result_exp_T_2, _io_out_result_exp_T_4, exp_addition) @[MatMul.scala 346:27]
    io.out.result.exp <= _io_out_result_exp_T_5 @[MatMul.scala 346:21]
    node _io_out_result_man_T = mul(io.in.a.man, io.in.b.man) @[MatMul.scala 347:39]
    node _io_out_result_man_T_1 = sub(UInt<7>("h40"), UInt<1>("h1")) @[MatMul.scala 347:68]
    node _io_out_result_man_T_2 = tail(_io_out_result_man_T_1, 1) @[MatMul.scala 347:68]
    node _io_out_result_man_T_3 = gt(_io_out_result_man_T, _io_out_result_man_T_2) @[MatMul.scala 347:52]
    node _io_out_result_man_T_4 = sub(UInt<7>("h40"), UInt<1>("h1")) @[MatMul.scala 347:89]
    node _io_out_result_man_T_5 = tail(_io_out_result_man_T_4, 1) @[MatMul.scala 347:89]
    node _io_out_result_man_T_6 = mul(io.in.a.man, io.in.b.man) @[MatMul.scala 347:107]
    node _io_out_result_man_T_7 = mux(_io_out_result_man_T_3, _io_out_result_man_T_5, _io_out_result_man_T_6) @[MatMul.scala 347:27]
    io.out.result.man <= _io_out_result_man_T_7 @[MatMul.scala 347:21]

  module FPAdder_2 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : { a : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, b : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}, out : { result : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}}

    node _exp_diff_T = gt(io.in.a.exp, io.in.b.exp) @[MatMul.scala 361:34]
    node _exp_diff_T_1 = sub(io.in.a.exp, io.in.b.exp) @[MatMul.scala 361:61]
    node _exp_diff_T_2 = tail(_exp_diff_T_1, 1) @[MatMul.scala 361:61]
    node _exp_diff_T_3 = sub(io.in.b.exp, io.in.a.exp) @[MatMul.scala 361:88]
    node _exp_diff_T_4 = tail(_exp_diff_T_3, 1) @[MatMul.scala 361:88]
    node exp_diff = mux(_exp_diff_T, _exp_diff_T_2, _exp_diff_T_4) @[MatMul.scala 361:21]
    node _io_out_result_sign_T = gt(io.in.a.exp, io.in.b.exp) @[MatMul.scala 363:41]
    node _io_out_result_sign_T_1 = dshr(io.in.b.man, exp_diff) @[MatMul.scala 363:87]
    node _io_out_result_sign_T_2 = gt(io.in.a.man, _io_out_result_sign_T_1) @[MatMul.scala 363:72]
    node _io_out_result_sign_T_3 = mux(_io_out_result_sign_T_2, io.in.a.sign, io.in.b.sign) @[MatMul.scala 363:59]
    node _io_out_result_sign_T_4 = dshr(io.in.a.man, exp_diff) @[MatMul.scala 363:147]
    node _io_out_result_sign_T_5 = gt(_io_out_result_sign_T_4, io.in.b.man) @[MatMul.scala 363:158]
    node _io_out_result_sign_T_6 = mux(_io_out_result_sign_T_5, io.in.a.sign, io.in.b.sign) @[MatMul.scala 363:133]
    node _io_out_result_sign_T_7 = mux(_io_out_result_sign_T, _io_out_result_sign_T_3, _io_out_result_sign_T_6) @[MatMul.scala 363:28]
    io.out.result.sign <= _io_out_result_sign_T_7 @[MatMul.scala 363:22]
    node _io_out_result_exp_T = gt(io.in.a.exp, io.in.b.exp) @[MatMul.scala 364:40]
    node _io_out_result_exp_T_1 = mux(_io_out_result_exp_T, io.in.a.exp, io.in.b.exp) @[MatMul.scala 364:27]
    io.out.result.exp <= _io_out_result_exp_T_1 @[MatMul.scala 364:21]
    node _addition_T = gt(io.in.a.exp, io.in.b.exp) @[MatMul.scala 365:34]
    node _addition_T_1 = eq(io.in.a.sign, io.in.b.sign) @[MatMul.scala 365:66]
    node _addition_T_2 = dshr(io.in.b.man, exp_diff) @[MatMul.scala 365:112]
    node _addition_T_3 = add(io.in.a.man, _addition_T_2) @[MatMul.scala 365:96]
    node _addition_T_4 = dshr(io.in.b.man, exp_diff) @[MatMul.scala 365:157]
    node _addition_T_5 = gt(io.in.a.man, _addition_T_4) @[MatMul.scala 365:142]
    node _addition_T_6 = dshr(io.in.b.man, exp_diff) @[MatMul.scala 365:197]
    node _addition_T_7 = sub(io.in.a.man, _addition_T_6) @[MatMul.scala 365:183]
    node _addition_T_8 = tail(_addition_T_7, 1) @[MatMul.scala 365:183]
    node _addition_T_9 = dshr(io.in.b.man, exp_diff) @[MatMul.scala 365:223]
    node _addition_T_10 = sub(_addition_T_9, io.in.a.man) @[MatMul.scala 365:236]
    node _addition_T_11 = tail(_addition_T_10, 1) @[MatMul.scala 365:236]
    node _addition_T_12 = mux(_addition_T_5, _addition_T_8, _addition_T_11) @[MatMul.scala 365:129]
    node _addition_T_13 = mux(_addition_T_1, _addition_T_3, _addition_T_12) @[MatMul.scala 365:52]
    node _addition_T_14 = eq(io.in.a.sign, io.in.b.sign) @[MatMul.scala 365:271]
    node _addition_T_15 = dshr(io.in.a.man, exp_diff) @[MatMul.scala 365:317]
    node _addition_T_16 = add(io.in.b.man, _addition_T_15) @[MatMul.scala 365:301]
    node _addition_T_17 = dshr(io.in.a.man, exp_diff) @[MatMul.scala 365:362]
    node _addition_T_18 = gt(io.in.b.man, _addition_T_17) @[MatMul.scala 365:347]
    node _addition_T_19 = dshr(io.in.a.man, exp_diff) @[MatMul.scala 365:402]
    node _addition_T_20 = sub(io.in.b.man, _addition_T_19) @[MatMul.scala 365:388]
    node _addition_T_21 = tail(_addition_T_20, 1) @[MatMul.scala 365:388]
    node _addition_T_22 = dshr(io.in.a.man, exp_diff) @[MatMul.scala 365:428]
    node _addition_T_23 = sub(_addition_T_22, io.in.b.man) @[MatMul.scala 365:441]
    node _addition_T_24 = tail(_addition_T_23, 1) @[MatMul.scala 365:441]
    node _addition_T_25 = mux(_addition_T_18, _addition_T_21, _addition_T_24) @[MatMul.scala 365:334]
    node _addition_T_26 = mux(_addition_T_14, _addition_T_16, _addition_T_25) @[MatMul.scala 365:257]
    node addition = mux(_addition_T, _addition_T_13, _addition_T_26) @[MatMul.scala 365:21]
    node _io_out_result_man_T = sub(UInt<7>("h40"), UInt<1>("h1")) @[MatMul.scala 366:53]
    node _io_out_result_man_T_1 = tail(_io_out_result_man_T, 1) @[MatMul.scala 366:53]
    node _io_out_result_man_T_2 = gt(addition, _io_out_result_man_T_1) @[MatMul.scala 366:37]
    node _io_out_result_man_T_3 = sub(UInt<7>("h40"), UInt<1>("h1")) @[MatMul.scala 366:74]
    node _io_out_result_man_T_4 = tail(_io_out_result_man_T_3, 1) @[MatMul.scala 366:74]
    node _io_out_result_man_T_5 = mux(_io_out_result_man_T_2, _io_out_result_man_T_4, addition) @[MatMul.scala 366:27]
    io.out.result.man <= _io_out_result_man_T_5 @[MatMul.scala 366:21]

  module PE_2 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : { hor : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, ver : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}, out : { hor : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, ver : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, result : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}}

    reg result_buffer : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, clock with :
      reset => (UInt<1>("h0"), result_buffer) @[MatMul.scala 385:28]
    inst fpmult of FPMult_2 @[MatMul.scala 388:24]
    fpmult.clock <= clock
    fpmult.reset <= reset
    fpmult.io.in.a <= io.in.hor @[MatMul.scala 389:20]
    fpmult.io.in.b <= io.in.ver @[MatMul.scala 390:20]
    inst fpadder of FPAdder_2 @[MatMul.scala 392:25]
    fpadder.clock <= clock
    fpadder.reset <= reset
    fpadder.io.in.a <= fpmult.io.out.result @[MatMul.scala 393:21]
    fpadder.io.in.b <= result_buffer @[MatMul.scala 394:21]
    result_buffer <= fpadder.io.out.result @[MatMul.scala 395:19]
    io.out.hor <= io.in.hor @[MatMul.scala 397:16]
    io.out.ver <= io.in.ver @[MatMul.scala 398:16]
    io.out.result <= result_buffer @[MatMul.scala 399:19]

  module FPMult_3 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : { a : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, b : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}, out : { result : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}}

    node _io_out_result_sign_T = xor(io.in.a.sign, io.in.b.sign) @[MatMul.scala 344:38]
    io.out.result.sign <= _io_out_result_sign_T @[MatMul.scala 344:22]
    node exp_addition = add(io.in.a.exp, io.in.b.exp) @[MatMul.scala 345:34]
    node _io_out_result_exp_T = sub(UInt<9>("h100"), UInt<1>("h1")) @[MatMul.scala 346:57]
    node _io_out_result_exp_T_1 = tail(_io_out_result_exp_T, 1) @[MatMul.scala 346:57]
    node _io_out_result_exp_T_2 = gt(exp_addition, _io_out_result_exp_T_1) @[MatMul.scala 346:41]
    node _io_out_result_exp_T_3 = sub(UInt<9>("h100"), UInt<1>("h1")) @[MatMul.scala 346:78]
    node _io_out_result_exp_T_4 = tail(_io_out_result_exp_T_3, 1) @[MatMul.scala 346:78]
    node _io_out_result_exp_T_5 = mux(_io_out_result_exp_T_2, _io_out_result_exp_T_4, exp_addition) @[MatMul.scala 346:27]
    io.out.result.exp <= _io_out_result_exp_T_5 @[MatMul.scala 346:21]
    node _io_out_result_man_T = mul(io.in.a.man, io.in.b.man) @[MatMul.scala 347:39]
    node _io_out_result_man_T_1 = sub(UInt<7>("h40"), UInt<1>("h1")) @[MatMul.scala 347:68]
    node _io_out_result_man_T_2 = tail(_io_out_result_man_T_1, 1) @[MatMul.scala 347:68]
    node _io_out_result_man_T_3 = gt(_io_out_result_man_T, _io_out_result_man_T_2) @[MatMul.scala 347:52]
    node _io_out_result_man_T_4 = sub(UInt<7>("h40"), UInt<1>("h1")) @[MatMul.scala 347:89]
    node _io_out_result_man_T_5 = tail(_io_out_result_man_T_4, 1) @[MatMul.scala 347:89]
    node _io_out_result_man_T_6 = mul(io.in.a.man, io.in.b.man) @[MatMul.scala 347:107]
    node _io_out_result_man_T_7 = mux(_io_out_result_man_T_3, _io_out_result_man_T_5, _io_out_result_man_T_6) @[MatMul.scala 347:27]
    io.out.result.man <= _io_out_result_man_T_7 @[MatMul.scala 347:21]

  module FPAdder_3 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : { a : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, b : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}, out : { result : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}}

    node _exp_diff_T = gt(io.in.a.exp, io.in.b.exp) @[MatMul.scala 361:34]
    node _exp_diff_T_1 = sub(io.in.a.exp, io.in.b.exp) @[MatMul.scala 361:61]
    node _exp_diff_T_2 = tail(_exp_diff_T_1, 1) @[MatMul.scala 361:61]
    node _exp_diff_T_3 = sub(io.in.b.exp, io.in.a.exp) @[MatMul.scala 361:88]
    node _exp_diff_T_4 = tail(_exp_diff_T_3, 1) @[MatMul.scala 361:88]
    node exp_diff = mux(_exp_diff_T, _exp_diff_T_2, _exp_diff_T_4) @[MatMul.scala 361:21]
    node _io_out_result_sign_T = gt(io.in.a.exp, io.in.b.exp) @[MatMul.scala 363:41]
    node _io_out_result_sign_T_1 = dshr(io.in.b.man, exp_diff) @[MatMul.scala 363:87]
    node _io_out_result_sign_T_2 = gt(io.in.a.man, _io_out_result_sign_T_1) @[MatMul.scala 363:72]
    node _io_out_result_sign_T_3 = mux(_io_out_result_sign_T_2, io.in.a.sign, io.in.b.sign) @[MatMul.scala 363:59]
    node _io_out_result_sign_T_4 = dshr(io.in.a.man, exp_diff) @[MatMul.scala 363:147]
    node _io_out_result_sign_T_5 = gt(_io_out_result_sign_T_4, io.in.b.man) @[MatMul.scala 363:158]
    node _io_out_result_sign_T_6 = mux(_io_out_result_sign_T_5, io.in.a.sign, io.in.b.sign) @[MatMul.scala 363:133]
    node _io_out_result_sign_T_7 = mux(_io_out_result_sign_T, _io_out_result_sign_T_3, _io_out_result_sign_T_6) @[MatMul.scala 363:28]
    io.out.result.sign <= _io_out_result_sign_T_7 @[MatMul.scala 363:22]
    node _io_out_result_exp_T = gt(io.in.a.exp, io.in.b.exp) @[MatMul.scala 364:40]
    node _io_out_result_exp_T_1 = mux(_io_out_result_exp_T, io.in.a.exp, io.in.b.exp) @[MatMul.scala 364:27]
    io.out.result.exp <= _io_out_result_exp_T_1 @[MatMul.scala 364:21]
    node _addition_T = gt(io.in.a.exp, io.in.b.exp) @[MatMul.scala 365:34]
    node _addition_T_1 = eq(io.in.a.sign, io.in.b.sign) @[MatMul.scala 365:66]
    node _addition_T_2 = dshr(io.in.b.man, exp_diff) @[MatMul.scala 365:112]
    node _addition_T_3 = add(io.in.a.man, _addition_T_2) @[MatMul.scala 365:96]
    node _addition_T_4 = dshr(io.in.b.man, exp_diff) @[MatMul.scala 365:157]
    node _addition_T_5 = gt(io.in.a.man, _addition_T_4) @[MatMul.scala 365:142]
    node _addition_T_6 = dshr(io.in.b.man, exp_diff) @[MatMul.scala 365:197]
    node _addition_T_7 = sub(io.in.a.man, _addition_T_6) @[MatMul.scala 365:183]
    node _addition_T_8 = tail(_addition_T_7, 1) @[MatMul.scala 365:183]
    node _addition_T_9 = dshr(io.in.b.man, exp_diff) @[MatMul.scala 365:223]
    node _addition_T_10 = sub(_addition_T_9, io.in.a.man) @[MatMul.scala 365:236]
    node _addition_T_11 = tail(_addition_T_10, 1) @[MatMul.scala 365:236]
    node _addition_T_12 = mux(_addition_T_5, _addition_T_8, _addition_T_11) @[MatMul.scala 365:129]
    node _addition_T_13 = mux(_addition_T_1, _addition_T_3, _addition_T_12) @[MatMul.scala 365:52]
    node _addition_T_14 = eq(io.in.a.sign, io.in.b.sign) @[MatMul.scala 365:271]
    node _addition_T_15 = dshr(io.in.a.man, exp_diff) @[MatMul.scala 365:317]
    node _addition_T_16 = add(io.in.b.man, _addition_T_15) @[MatMul.scala 365:301]
    node _addition_T_17 = dshr(io.in.a.man, exp_diff) @[MatMul.scala 365:362]
    node _addition_T_18 = gt(io.in.b.man, _addition_T_17) @[MatMul.scala 365:347]
    node _addition_T_19 = dshr(io.in.a.man, exp_diff) @[MatMul.scala 365:402]
    node _addition_T_20 = sub(io.in.b.man, _addition_T_19) @[MatMul.scala 365:388]
    node _addition_T_21 = tail(_addition_T_20, 1) @[MatMul.scala 365:388]
    node _addition_T_22 = dshr(io.in.a.man, exp_diff) @[MatMul.scala 365:428]
    node _addition_T_23 = sub(_addition_T_22, io.in.b.man) @[MatMul.scala 365:441]
    node _addition_T_24 = tail(_addition_T_23, 1) @[MatMul.scala 365:441]
    node _addition_T_25 = mux(_addition_T_18, _addition_T_21, _addition_T_24) @[MatMul.scala 365:334]
    node _addition_T_26 = mux(_addition_T_14, _addition_T_16, _addition_T_25) @[MatMul.scala 365:257]
    node addition = mux(_addition_T, _addition_T_13, _addition_T_26) @[MatMul.scala 365:21]
    node _io_out_result_man_T = sub(UInt<7>("h40"), UInt<1>("h1")) @[MatMul.scala 366:53]
    node _io_out_result_man_T_1 = tail(_io_out_result_man_T, 1) @[MatMul.scala 366:53]
    node _io_out_result_man_T_2 = gt(addition, _io_out_result_man_T_1) @[MatMul.scala 366:37]
    node _io_out_result_man_T_3 = sub(UInt<7>("h40"), UInt<1>("h1")) @[MatMul.scala 366:74]
    node _io_out_result_man_T_4 = tail(_io_out_result_man_T_3, 1) @[MatMul.scala 366:74]
    node _io_out_result_man_T_5 = mux(_io_out_result_man_T_2, _io_out_result_man_T_4, addition) @[MatMul.scala 366:27]
    io.out.result.man <= _io_out_result_man_T_5 @[MatMul.scala 366:21]

  module PE_3 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : { hor : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, ver : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}, out : { hor : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, ver : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, result : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}}

    reg result_buffer : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, clock with :
      reset => (UInt<1>("h0"), result_buffer) @[MatMul.scala 385:28]
    inst fpmult of FPMult_3 @[MatMul.scala 388:24]
    fpmult.clock <= clock
    fpmult.reset <= reset
    fpmult.io.in.a <= io.in.hor @[MatMul.scala 389:20]
    fpmult.io.in.b <= io.in.ver @[MatMul.scala 390:20]
    inst fpadder of FPAdder_3 @[MatMul.scala 392:25]
    fpadder.clock <= clock
    fpadder.reset <= reset
    fpadder.io.in.a <= fpmult.io.out.result @[MatMul.scala 393:21]
    fpadder.io.in.b <= result_buffer @[MatMul.scala 394:21]
    result_buffer <= fpadder.io.out.result @[MatMul.scala 395:19]
    io.out.hor <= io.in.hor @[MatMul.scala 397:16]
    io.out.ver <= io.in.ver @[MatMul.scala 398:16]
    io.out.result <= result_buffer @[MatMul.scala 399:19]

  module Queue :
    input clock : Clock
    input reset : Reset
    output io : { flip enq : { flip ready : UInt<1>, valid : UInt<1>, bits : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}, deq : { flip ready : UInt<1>, valid : UInt<1>, bits : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}, count : UInt<2>}

    cmem ram : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>} [2] @[Decoupled.scala 273:95]
    reg enq_ptr_value : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[Counter.scala 61:40]
    reg deq_ptr_value : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[Counter.scala 61:40]
    reg maybe_full : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[Decoupled.scala 276:27]
    node ptr_match = eq(enq_ptr_value, deq_ptr_value) @[Decoupled.scala 277:33]
    node _empty_T = eq(maybe_full, UInt<1>("h0")) @[Decoupled.scala 278:28]
    node empty = and(ptr_match, _empty_T) @[Decoupled.scala 278:25]
    node full = and(ptr_match, maybe_full) @[Decoupled.scala 279:24]
    node _do_enq_T = and(io.enq.ready, io.enq.valid) @[Decoupled.scala 51:35]
    wire do_enq : UInt<1> @[Decoupled.scala 280:27]
    do_enq <= _do_enq_T @[Decoupled.scala 280:27]
    node _do_deq_T = and(io.deq.ready, io.deq.valid) @[Decoupled.scala 51:35]
    wire do_deq : UInt<1> @[Decoupled.scala 281:27]
    do_deq <= _do_deq_T @[Decoupled.scala 281:27]
    when do_enq : @[Decoupled.scala 286:16]
      infer mport MPORT = ram[enq_ptr_value], clock @[Decoupled.scala 287:8]
      MPORT <= io.enq.bits @[Decoupled.scala 287:24]
      node wrap = eq(enq_ptr_value, UInt<1>("h1")) @[Counter.scala 73:24]
      node _value_T = add(enq_ptr_value, UInt<1>("h1")) @[Counter.scala 77:24]
      node _value_T_1 = tail(_value_T, 1) @[Counter.scala 77:24]
      enq_ptr_value <= _value_T_1 @[Counter.scala 77:15]
    when do_deq : @[Decoupled.scala 290:16]
      node wrap_1 = eq(deq_ptr_value, UInt<1>("h1")) @[Counter.scala 73:24]
      node _value_T_2 = add(deq_ptr_value, UInt<1>("h1")) @[Counter.scala 77:24]
      node _value_T_3 = tail(_value_T_2, 1) @[Counter.scala 77:24]
      deq_ptr_value <= _value_T_3 @[Counter.scala 77:15]
    node _T = neq(do_enq, do_deq) @[Decoupled.scala 293:15]
    when _T : @[Decoupled.scala 293:27]
      maybe_full <= do_enq @[Decoupled.scala 294:16]
    when UInt<1>("h0") : @[Decoupled.scala 296:15]
      enq_ptr_value <= UInt<1>("h0") @[Counter.scala 98:11]
      deq_ptr_value <= UInt<1>("h0") @[Counter.scala 98:11]
      maybe_full <= UInt<1>("h0") @[Decoupled.scala 299:16]
    node _io_deq_valid_T = eq(empty, UInt<1>("h0")) @[Decoupled.scala 302:19]
    io.deq.valid <= _io_deq_valid_T @[Decoupled.scala 302:16]
    node _io_enq_ready_T = eq(full, UInt<1>("h0")) @[Decoupled.scala 303:19]
    io.enq.ready <= _io_enq_ready_T @[Decoupled.scala 303:16]
    infer mport io_deq_bits_MPORT = ram[deq_ptr_value], clock @[Decoupled.scala 310:23]
    io.deq.bits <= io_deq_bits_MPORT @[Decoupled.scala 310:17]
    node _ptr_diff_T = sub(enq_ptr_value, deq_ptr_value) @[Decoupled.scala 326:32]
    node ptr_diff = tail(_ptr_diff_T, 1) @[Decoupled.scala 326:32]
    node _io_count_T = and(maybe_full, ptr_match) @[Decoupled.scala 329:32]
    node _io_count_T_1 = mux(_io_count_T, UInt<2>("h2"), UInt<1>("h0")) @[Decoupled.scala 329:20]
    node _io_count_T_2 = or(_io_count_T_1, ptr_diff) @[Decoupled.scala 329:62]
    io.count <= _io_count_T_2 @[Decoupled.scala 329:14]

  module Queue_1 :
    input clock : Clock
    input reset : Reset
    output io : { flip enq : { flip ready : UInt<1>, valid : UInt<1>, bits : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}, deq : { flip ready : UInt<1>, valid : UInt<1>, bits : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}, count : UInt<2>}

    cmem ram : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>} [2] @[Decoupled.scala 273:95]
    reg enq_ptr_value : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[Counter.scala 61:40]
    reg deq_ptr_value : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[Counter.scala 61:40]
    reg maybe_full : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[Decoupled.scala 276:27]
    node ptr_match = eq(enq_ptr_value, deq_ptr_value) @[Decoupled.scala 277:33]
    node _empty_T = eq(maybe_full, UInt<1>("h0")) @[Decoupled.scala 278:28]
    node empty = and(ptr_match, _empty_T) @[Decoupled.scala 278:25]
    node full = and(ptr_match, maybe_full) @[Decoupled.scala 279:24]
    node _do_enq_T = and(io.enq.ready, io.enq.valid) @[Decoupled.scala 51:35]
    wire do_enq : UInt<1> @[Decoupled.scala 280:27]
    do_enq <= _do_enq_T @[Decoupled.scala 280:27]
    node _do_deq_T = and(io.deq.ready, io.deq.valid) @[Decoupled.scala 51:35]
    wire do_deq : UInt<1> @[Decoupled.scala 281:27]
    do_deq <= _do_deq_T @[Decoupled.scala 281:27]
    when do_enq : @[Decoupled.scala 286:16]
      infer mport MPORT = ram[enq_ptr_value], clock @[Decoupled.scala 287:8]
      MPORT <= io.enq.bits @[Decoupled.scala 287:24]
      node wrap = eq(enq_ptr_value, UInt<1>("h1")) @[Counter.scala 73:24]
      node _value_T = add(enq_ptr_value, UInt<1>("h1")) @[Counter.scala 77:24]
      node _value_T_1 = tail(_value_T, 1) @[Counter.scala 77:24]
      enq_ptr_value <= _value_T_1 @[Counter.scala 77:15]
    when do_deq : @[Decoupled.scala 290:16]
      node wrap_1 = eq(deq_ptr_value, UInt<1>("h1")) @[Counter.scala 73:24]
      node _value_T_2 = add(deq_ptr_value, UInt<1>("h1")) @[Counter.scala 77:24]
      node _value_T_3 = tail(_value_T_2, 1) @[Counter.scala 77:24]
      deq_ptr_value <= _value_T_3 @[Counter.scala 77:15]
    node _T = neq(do_enq, do_deq) @[Decoupled.scala 293:15]
    when _T : @[Decoupled.scala 293:27]
      maybe_full <= do_enq @[Decoupled.scala 294:16]
    when UInt<1>("h0") : @[Decoupled.scala 296:15]
      enq_ptr_value <= UInt<1>("h0") @[Counter.scala 98:11]
      deq_ptr_value <= UInt<1>("h0") @[Counter.scala 98:11]
      maybe_full <= UInt<1>("h0") @[Decoupled.scala 299:16]
    node _io_deq_valid_T = eq(empty, UInt<1>("h0")) @[Decoupled.scala 302:19]
    io.deq.valid <= _io_deq_valid_T @[Decoupled.scala 302:16]
    node _io_enq_ready_T = eq(full, UInt<1>("h0")) @[Decoupled.scala 303:19]
    io.enq.ready <= _io_enq_ready_T @[Decoupled.scala 303:16]
    infer mport io_deq_bits_MPORT = ram[deq_ptr_value], clock @[Decoupled.scala 310:23]
    io.deq.bits <= io_deq_bits_MPORT @[Decoupled.scala 310:17]
    node _ptr_diff_T = sub(enq_ptr_value, deq_ptr_value) @[Decoupled.scala 326:32]
    node ptr_diff = tail(_ptr_diff_T, 1) @[Decoupled.scala 326:32]
    node _io_count_T = and(maybe_full, ptr_match) @[Decoupled.scala 329:32]
    node _io_count_T_1 = mux(_io_count_T, UInt<2>("h2"), UInt<1>("h0")) @[Decoupled.scala 329:20]
    node _io_count_T_2 = or(_io_count_T_1, ptr_diff) @[Decoupled.scala 329:62]
    io.count <= _io_count_T_2 @[Decoupled.scala 329:14]

  module Queue_2 :
    input clock : Clock
    input reset : Reset
    output io : { flip enq : { flip ready : UInt<1>, valid : UInt<1>, bits : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}, deq : { flip ready : UInt<1>, valid : UInt<1>, bits : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}, count : UInt<2>}

    cmem ram : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>} [2] @[Decoupled.scala 273:95]
    reg enq_ptr_value : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[Counter.scala 61:40]
    reg deq_ptr_value : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[Counter.scala 61:40]
    reg maybe_full : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[Decoupled.scala 276:27]
    node ptr_match = eq(enq_ptr_value, deq_ptr_value) @[Decoupled.scala 277:33]
    node _empty_T = eq(maybe_full, UInt<1>("h0")) @[Decoupled.scala 278:28]
    node empty = and(ptr_match, _empty_T) @[Decoupled.scala 278:25]
    node full = and(ptr_match, maybe_full) @[Decoupled.scala 279:24]
    node _do_enq_T = and(io.enq.ready, io.enq.valid) @[Decoupled.scala 51:35]
    wire do_enq : UInt<1> @[Decoupled.scala 280:27]
    do_enq <= _do_enq_T @[Decoupled.scala 280:27]
    node _do_deq_T = and(io.deq.ready, io.deq.valid) @[Decoupled.scala 51:35]
    wire do_deq : UInt<1> @[Decoupled.scala 281:27]
    do_deq <= _do_deq_T @[Decoupled.scala 281:27]
    when do_enq : @[Decoupled.scala 286:16]
      infer mport MPORT = ram[enq_ptr_value], clock @[Decoupled.scala 287:8]
      MPORT <= io.enq.bits @[Decoupled.scala 287:24]
      node wrap = eq(enq_ptr_value, UInt<1>("h1")) @[Counter.scala 73:24]
      node _value_T = add(enq_ptr_value, UInt<1>("h1")) @[Counter.scala 77:24]
      node _value_T_1 = tail(_value_T, 1) @[Counter.scala 77:24]
      enq_ptr_value <= _value_T_1 @[Counter.scala 77:15]
    when do_deq : @[Decoupled.scala 290:16]
      node wrap_1 = eq(deq_ptr_value, UInt<1>("h1")) @[Counter.scala 73:24]
      node _value_T_2 = add(deq_ptr_value, UInt<1>("h1")) @[Counter.scala 77:24]
      node _value_T_3 = tail(_value_T_2, 1) @[Counter.scala 77:24]
      deq_ptr_value <= _value_T_3 @[Counter.scala 77:15]
    node _T = neq(do_enq, do_deq) @[Decoupled.scala 293:15]
    when _T : @[Decoupled.scala 293:27]
      maybe_full <= do_enq @[Decoupled.scala 294:16]
    when UInt<1>("h0") : @[Decoupled.scala 296:15]
      enq_ptr_value <= UInt<1>("h0") @[Counter.scala 98:11]
      deq_ptr_value <= UInt<1>("h0") @[Counter.scala 98:11]
      maybe_full <= UInt<1>("h0") @[Decoupled.scala 299:16]
    node _io_deq_valid_T = eq(empty, UInt<1>("h0")) @[Decoupled.scala 302:19]
    io.deq.valid <= _io_deq_valid_T @[Decoupled.scala 302:16]
    node _io_enq_ready_T = eq(full, UInt<1>("h0")) @[Decoupled.scala 303:19]
    io.enq.ready <= _io_enq_ready_T @[Decoupled.scala 303:16]
    infer mport io_deq_bits_MPORT = ram[deq_ptr_value], clock @[Decoupled.scala 310:23]
    io.deq.bits <= io_deq_bits_MPORT @[Decoupled.scala 310:17]
    node _ptr_diff_T = sub(enq_ptr_value, deq_ptr_value) @[Decoupled.scala 326:32]
    node ptr_diff = tail(_ptr_diff_T, 1) @[Decoupled.scala 326:32]
    node _io_count_T = and(maybe_full, ptr_match) @[Decoupled.scala 329:32]
    node _io_count_T_1 = mux(_io_count_T, UInt<2>("h2"), UInt<1>("h0")) @[Decoupled.scala 329:20]
    node _io_count_T_2 = or(_io_count_T_1, ptr_diff) @[Decoupled.scala 329:62]
    io.count <= _io_count_T_2 @[Decoupled.scala 329:14]

  module Queue_3 :
    input clock : Clock
    input reset : Reset
    output io : { flip enq : { flip ready : UInt<1>, valid : UInt<1>, bits : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}, deq : { flip ready : UInt<1>, valid : UInt<1>, bits : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}, count : UInt<2>}

    cmem ram : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>} [2] @[Decoupled.scala 273:95]
    reg enq_ptr_value : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[Counter.scala 61:40]
    reg deq_ptr_value : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[Counter.scala 61:40]
    reg maybe_full : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[Decoupled.scala 276:27]
    node ptr_match = eq(enq_ptr_value, deq_ptr_value) @[Decoupled.scala 277:33]
    node _empty_T = eq(maybe_full, UInt<1>("h0")) @[Decoupled.scala 278:28]
    node empty = and(ptr_match, _empty_T) @[Decoupled.scala 278:25]
    node full = and(ptr_match, maybe_full) @[Decoupled.scala 279:24]
    node _do_enq_T = and(io.enq.ready, io.enq.valid) @[Decoupled.scala 51:35]
    wire do_enq : UInt<1> @[Decoupled.scala 280:27]
    do_enq <= _do_enq_T @[Decoupled.scala 280:27]
    node _do_deq_T = and(io.deq.ready, io.deq.valid) @[Decoupled.scala 51:35]
    wire do_deq : UInt<1> @[Decoupled.scala 281:27]
    do_deq <= _do_deq_T @[Decoupled.scala 281:27]
    when do_enq : @[Decoupled.scala 286:16]
      infer mport MPORT = ram[enq_ptr_value], clock @[Decoupled.scala 287:8]
      MPORT <= io.enq.bits @[Decoupled.scala 287:24]
      node wrap = eq(enq_ptr_value, UInt<1>("h1")) @[Counter.scala 73:24]
      node _value_T = add(enq_ptr_value, UInt<1>("h1")) @[Counter.scala 77:24]
      node _value_T_1 = tail(_value_T, 1) @[Counter.scala 77:24]
      enq_ptr_value <= _value_T_1 @[Counter.scala 77:15]
    when do_deq : @[Decoupled.scala 290:16]
      node wrap_1 = eq(deq_ptr_value, UInt<1>("h1")) @[Counter.scala 73:24]
      node _value_T_2 = add(deq_ptr_value, UInt<1>("h1")) @[Counter.scala 77:24]
      node _value_T_3 = tail(_value_T_2, 1) @[Counter.scala 77:24]
      deq_ptr_value <= _value_T_3 @[Counter.scala 77:15]
    node _T = neq(do_enq, do_deq) @[Decoupled.scala 293:15]
    when _T : @[Decoupled.scala 293:27]
      maybe_full <= do_enq @[Decoupled.scala 294:16]
    when UInt<1>("h0") : @[Decoupled.scala 296:15]
      enq_ptr_value <= UInt<1>("h0") @[Counter.scala 98:11]
      deq_ptr_value <= UInt<1>("h0") @[Counter.scala 98:11]
      maybe_full <= UInt<1>("h0") @[Decoupled.scala 299:16]
    node _io_deq_valid_T = eq(empty, UInt<1>("h0")) @[Decoupled.scala 302:19]
    io.deq.valid <= _io_deq_valid_T @[Decoupled.scala 302:16]
    node _io_enq_ready_T = eq(full, UInt<1>("h0")) @[Decoupled.scala 303:19]
    io.enq.ready <= _io_enq_ready_T @[Decoupled.scala 303:16]
    infer mport io_deq_bits_MPORT = ram[deq_ptr_value], clock @[Decoupled.scala 310:23]
    io.deq.bits <= io_deq_bits_MPORT @[Decoupled.scala 310:17]
    node _ptr_diff_T = sub(enq_ptr_value, deq_ptr_value) @[Decoupled.scala 326:32]
    node ptr_diff = tail(_ptr_diff_T, 1) @[Decoupled.scala 326:32]
    node _io_count_T = and(maybe_full, ptr_match) @[Decoupled.scala 329:32]
    node _io_count_T_1 = mux(_io_count_T, UInt<2>("h2"), UInt<1>("h0")) @[Decoupled.scala 329:20]
    node _io_count_T_2 = or(_io_count_T_1, ptr_diff) @[Decoupled.scala 329:62]
    io.count <= _io_count_T_2 @[Decoupled.scala 329:14]

  module Queue_4 :
    input clock : Clock
    input reset : Reset
    output io : { flip enq : { flip ready : UInt<1>, valid : UInt<1>, bits : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}, deq : { flip ready : UInt<1>, valid : UInt<1>, bits : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}, count : UInt<2>}

    cmem ram : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>} [2] @[Decoupled.scala 273:95]
    reg enq_ptr_value : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[Counter.scala 61:40]
    reg deq_ptr_value : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[Counter.scala 61:40]
    reg maybe_full : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[Decoupled.scala 276:27]
    node ptr_match = eq(enq_ptr_value, deq_ptr_value) @[Decoupled.scala 277:33]
    node _empty_T = eq(maybe_full, UInt<1>("h0")) @[Decoupled.scala 278:28]
    node empty = and(ptr_match, _empty_T) @[Decoupled.scala 278:25]
    node full = and(ptr_match, maybe_full) @[Decoupled.scala 279:24]
    node _do_enq_T = and(io.enq.ready, io.enq.valid) @[Decoupled.scala 51:35]
    wire do_enq : UInt<1> @[Decoupled.scala 280:27]
    do_enq <= _do_enq_T @[Decoupled.scala 280:27]
    node _do_deq_T = and(io.deq.ready, io.deq.valid) @[Decoupled.scala 51:35]
    wire do_deq : UInt<1> @[Decoupled.scala 281:27]
    do_deq <= _do_deq_T @[Decoupled.scala 281:27]
    when do_enq : @[Decoupled.scala 286:16]
      infer mport MPORT = ram[enq_ptr_value], clock @[Decoupled.scala 287:8]
      MPORT <= io.enq.bits @[Decoupled.scala 287:24]
      node wrap = eq(enq_ptr_value, UInt<1>("h1")) @[Counter.scala 73:24]
      node _value_T = add(enq_ptr_value, UInt<1>("h1")) @[Counter.scala 77:24]
      node _value_T_1 = tail(_value_T, 1) @[Counter.scala 77:24]
      enq_ptr_value <= _value_T_1 @[Counter.scala 77:15]
    when do_deq : @[Decoupled.scala 290:16]
      node wrap_1 = eq(deq_ptr_value, UInt<1>("h1")) @[Counter.scala 73:24]
      node _value_T_2 = add(deq_ptr_value, UInt<1>("h1")) @[Counter.scala 77:24]
      node _value_T_3 = tail(_value_T_2, 1) @[Counter.scala 77:24]
      deq_ptr_value <= _value_T_3 @[Counter.scala 77:15]
    node _T = neq(do_enq, do_deq) @[Decoupled.scala 293:15]
    when _T : @[Decoupled.scala 293:27]
      maybe_full <= do_enq @[Decoupled.scala 294:16]
    when UInt<1>("h0") : @[Decoupled.scala 296:15]
      enq_ptr_value <= UInt<1>("h0") @[Counter.scala 98:11]
      deq_ptr_value <= UInt<1>("h0") @[Counter.scala 98:11]
      maybe_full <= UInt<1>("h0") @[Decoupled.scala 299:16]
    node _io_deq_valid_T = eq(empty, UInt<1>("h0")) @[Decoupled.scala 302:19]
    io.deq.valid <= _io_deq_valid_T @[Decoupled.scala 302:16]
    node _io_enq_ready_T = eq(full, UInt<1>("h0")) @[Decoupled.scala 303:19]
    io.enq.ready <= _io_enq_ready_T @[Decoupled.scala 303:16]
    infer mport io_deq_bits_MPORT = ram[deq_ptr_value], clock @[Decoupled.scala 310:23]
    io.deq.bits <= io_deq_bits_MPORT @[Decoupled.scala 310:17]
    node _ptr_diff_T = sub(enq_ptr_value, deq_ptr_value) @[Decoupled.scala 326:32]
    node ptr_diff = tail(_ptr_diff_T, 1) @[Decoupled.scala 326:32]
    node _io_count_T = and(maybe_full, ptr_match) @[Decoupled.scala 329:32]
    node _io_count_T_1 = mux(_io_count_T, UInt<2>("h2"), UInt<1>("h0")) @[Decoupled.scala 329:20]
    node _io_count_T_2 = or(_io_count_T_1, ptr_diff) @[Decoupled.scala 329:62]
    io.count <= _io_count_T_2 @[Decoupled.scala 329:14]

  module Queue_5 :
    input clock : Clock
    input reset : Reset
    output io : { flip enq : { flip ready : UInt<1>, valid : UInt<1>, bits : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}, deq : { flip ready : UInt<1>, valid : UInt<1>, bits : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}, count : UInt<2>}

    cmem ram : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>} [2] @[Decoupled.scala 273:95]
    reg enq_ptr_value : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[Counter.scala 61:40]
    reg deq_ptr_value : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[Counter.scala 61:40]
    reg maybe_full : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[Decoupled.scala 276:27]
    node ptr_match = eq(enq_ptr_value, deq_ptr_value) @[Decoupled.scala 277:33]
    node _empty_T = eq(maybe_full, UInt<1>("h0")) @[Decoupled.scala 278:28]
    node empty = and(ptr_match, _empty_T) @[Decoupled.scala 278:25]
    node full = and(ptr_match, maybe_full) @[Decoupled.scala 279:24]
    node _do_enq_T = and(io.enq.ready, io.enq.valid) @[Decoupled.scala 51:35]
    wire do_enq : UInt<1> @[Decoupled.scala 280:27]
    do_enq <= _do_enq_T @[Decoupled.scala 280:27]
    node _do_deq_T = and(io.deq.ready, io.deq.valid) @[Decoupled.scala 51:35]
    wire do_deq : UInt<1> @[Decoupled.scala 281:27]
    do_deq <= _do_deq_T @[Decoupled.scala 281:27]
    when do_enq : @[Decoupled.scala 286:16]
      infer mport MPORT = ram[enq_ptr_value], clock @[Decoupled.scala 287:8]
      MPORT <= io.enq.bits @[Decoupled.scala 287:24]
      node wrap = eq(enq_ptr_value, UInt<1>("h1")) @[Counter.scala 73:24]
      node _value_T = add(enq_ptr_value, UInt<1>("h1")) @[Counter.scala 77:24]
      node _value_T_1 = tail(_value_T, 1) @[Counter.scala 77:24]
      enq_ptr_value <= _value_T_1 @[Counter.scala 77:15]
    when do_deq : @[Decoupled.scala 290:16]
      node wrap_1 = eq(deq_ptr_value, UInt<1>("h1")) @[Counter.scala 73:24]
      node _value_T_2 = add(deq_ptr_value, UInt<1>("h1")) @[Counter.scala 77:24]
      node _value_T_3 = tail(_value_T_2, 1) @[Counter.scala 77:24]
      deq_ptr_value <= _value_T_3 @[Counter.scala 77:15]
    node _T = neq(do_enq, do_deq) @[Decoupled.scala 293:15]
    when _T : @[Decoupled.scala 293:27]
      maybe_full <= do_enq @[Decoupled.scala 294:16]
    when UInt<1>("h0") : @[Decoupled.scala 296:15]
      enq_ptr_value <= UInt<1>("h0") @[Counter.scala 98:11]
      deq_ptr_value <= UInt<1>("h0") @[Counter.scala 98:11]
      maybe_full <= UInt<1>("h0") @[Decoupled.scala 299:16]
    node _io_deq_valid_T = eq(empty, UInt<1>("h0")) @[Decoupled.scala 302:19]
    io.deq.valid <= _io_deq_valid_T @[Decoupled.scala 302:16]
    node _io_enq_ready_T = eq(full, UInt<1>("h0")) @[Decoupled.scala 303:19]
    io.enq.ready <= _io_enq_ready_T @[Decoupled.scala 303:16]
    infer mport io_deq_bits_MPORT = ram[deq_ptr_value], clock @[Decoupled.scala 310:23]
    io.deq.bits <= io_deq_bits_MPORT @[Decoupled.scala 310:17]
    node _ptr_diff_T = sub(enq_ptr_value, deq_ptr_value) @[Decoupled.scala 326:32]
    node ptr_diff = tail(_ptr_diff_T, 1) @[Decoupled.scala 326:32]
    node _io_count_T = and(maybe_full, ptr_match) @[Decoupled.scala 329:32]
    node _io_count_T_1 = mux(_io_count_T, UInt<2>("h2"), UInt<1>("h0")) @[Decoupled.scala 329:20]
    node _io_count_T_2 = or(_io_count_T_1, ptr_diff) @[Decoupled.scala 329:62]
    io.count <= _io_count_T_2 @[Decoupled.scala 329:14]

  module SystolicArray_HBFP :
    input clock : Clock
    input reset : UInt<1>
    output io : { flip in : { hor : { ready : UInt<1>, valid : UInt<1>, bits : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}[2], ver : { ready : UInt<1>, valid : UInt<1>, bits : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}[2]}, out : { result : { ready : UInt<1>, valid : UInt<1>, bits : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}}[2]}}

    inst pes_0_0 of PE @[HBFP_GEMM.scala 122:34]
    pes_0_0.clock <= clock
    pes_0_0.reset <= reset
    inst pes_0_1 of PE_1 @[HBFP_GEMM.scala 122:34]
    pes_0_1.clock <= clock
    pes_0_1.reset <= reset
    inst pes_1_0 of PE_2 @[HBFP_GEMM.scala 122:34]
    pes_1_0.clock <= clock
    pes_1_0.reset <= reset
    inst pes_1_1 of PE_3 @[HBFP_GEMM.scala 122:34]
    pes_1_1.clock <= clock
    pes_1_1.reset <= reset
    inst myinputQ_hor_0 of Queue @[HBFP_GEMM.scala 124:40]
    myinputQ_hor_0.clock <= clock
    myinputQ_hor_0.reset <= reset
    inst myinputQ_hor_1 of Queue_1 @[HBFP_GEMM.scala 124:40]
    myinputQ_hor_1.clock <= clock
    myinputQ_hor_1.reset <= reset
    inst myinputQ_ver_0 of Queue_2 @[HBFP_GEMM.scala 125:40]
    myinputQ_ver_0.clock <= clock
    myinputQ_ver_0.reset <= reset
    inst myinputQ_ver_1 of Queue_3 @[HBFP_GEMM.scala 125:40]
    myinputQ_ver_1.clock <= clock
    myinputQ_ver_1.reset <= reset
    inst myoutputQ_0 of Queue_4 @[HBFP_GEMM.scala 126:37]
    myoutputQ_0.clock <= clock
    myoutputQ_0.reset <= reset
    inst myoutputQ_1 of Queue_5 @[HBFP_GEMM.scala 126:37]
    myoutputQ_1.clock <= clock
    myoutputQ_1.reset <= reset
    myinputQ_hor_0.io.enq.valid <= UInt<1>("h1") @[HBFP_GEMM.scala 129:34]
    myinputQ_hor_0.io.enq.bits.exp <= io.in.hor[0].bits.exp @[HBFP_GEMM.scala 130:33]
    myinputQ_hor_0.io.enq.bits.man <= io.in.hor[0].bits.man @[HBFP_GEMM.scala 130:33]
    myinputQ_hor_0.io.enq.bits.sign <= io.in.hor[0].bits.sign @[HBFP_GEMM.scala 130:33]
    myinputQ_ver_0.io.enq.valid <= UInt<1>("h1") @[HBFP_GEMM.scala 132:34]
    myinputQ_ver_0.io.enq.bits.exp <= io.in.ver[0].bits.exp @[HBFP_GEMM.scala 133:33]
    myinputQ_ver_0.io.enq.bits.man <= io.in.ver[0].bits.man @[HBFP_GEMM.scala 133:33]
    myinputQ_ver_0.io.enq.bits.sign <= io.in.ver[0].bits.sign @[HBFP_GEMM.scala 133:33]
    myinputQ_hor_1.io.enq.valid <= UInt<1>("h1") @[HBFP_GEMM.scala 129:34]
    myinputQ_hor_1.io.enq.bits.exp <= io.in.hor[1].bits.exp @[HBFP_GEMM.scala 130:33]
    myinputQ_hor_1.io.enq.bits.man <= io.in.hor[1].bits.man @[HBFP_GEMM.scala 130:33]
    myinputQ_hor_1.io.enq.bits.sign <= io.in.hor[1].bits.sign @[HBFP_GEMM.scala 130:33]
    myinputQ_ver_1.io.enq.valid <= UInt<1>("h1") @[HBFP_GEMM.scala 132:34]
    myinputQ_ver_1.io.enq.bits.exp <= io.in.ver[1].bits.exp @[HBFP_GEMM.scala 133:33]
    myinputQ_ver_1.io.enq.bits.man <= io.in.ver[1].bits.man @[HBFP_GEMM.scala 133:33]
    myinputQ_ver_1.io.enq.bits.sign <= io.in.ver[1].bits.sign @[HBFP_GEMM.scala 133:33]
    myinputQ_hor_0.io.deq.ready <= myinputQ_hor_0.io.deq.valid @[HBFP_GEMM.scala 138:34]
    myinputQ_ver_0.io.deq.ready <= myinputQ_ver_0.io.deq.valid @[HBFP_GEMM.scala 139:34]
    node _pes_0_0_io_in_hor_T = and(myinputQ_hor_0.io.deq.ready, myinputQ_hor_0.io.deq.valid) @[Decoupled.scala 51:35]
    wire _pes_0_0_io_in_hor_WIRE : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>} @[HBFP_GEMM.scala 140:102]
    _pes_0_0_io_in_hor_WIRE.exp <= UInt<8>("h0") @[HBFP_GEMM.scala 140:102]
    _pes_0_0_io_in_hor_WIRE.man <= UInt<6>("h0") @[HBFP_GEMM.scala 140:102]
    _pes_0_0_io_in_hor_WIRE.sign <= UInt<1>("h0") @[HBFP_GEMM.scala 140:102]
    node _pes_0_0_io_in_hor_T_1 = mux(_pes_0_0_io_in_hor_T, myinputQ_hor_0.io.deq.bits, _pes_0_0_io_in_hor_WIRE) @[HBFP_GEMM.scala 140:31]
    pes_0_0.io.in.hor.exp <= _pes_0_0_io_in_hor_T_1.exp @[HBFP_GEMM.scala 140:25]
    pes_0_0.io.in.hor.man <= _pes_0_0_io_in_hor_T_1.man @[HBFP_GEMM.scala 140:25]
    pes_0_0.io.in.hor.sign <= _pes_0_0_io_in_hor_T_1.sign @[HBFP_GEMM.scala 140:25]
    node _pes_0_0_io_in_ver_T = and(myinputQ_ver_0.io.deq.ready, myinputQ_ver_0.io.deq.valid) @[Decoupled.scala 51:35]
    wire _pes_0_0_io_in_ver_WIRE : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>} @[HBFP_GEMM.scala 141:102]
    _pes_0_0_io_in_ver_WIRE.exp <= UInt<8>("h0") @[HBFP_GEMM.scala 141:102]
    _pes_0_0_io_in_ver_WIRE.man <= UInt<6>("h0") @[HBFP_GEMM.scala 141:102]
    _pes_0_0_io_in_ver_WIRE.sign <= UInt<1>("h0") @[HBFP_GEMM.scala 141:102]
    node _pes_0_0_io_in_ver_T_1 = mux(_pes_0_0_io_in_ver_T, myinputQ_ver_0.io.deq.bits, _pes_0_0_io_in_ver_WIRE) @[HBFP_GEMM.scala 141:31]
    pes_0_0.io.in.ver.exp <= _pes_0_0_io_in_ver_T_1.exp @[HBFP_GEMM.scala 141:25]
    pes_0_0.io.in.ver.man <= _pes_0_0_io_in_ver_T_1.man @[HBFP_GEMM.scala 141:25]
    pes_0_0.io.in.ver.sign <= _pes_0_0_io_in_ver_T_1.sign @[HBFP_GEMM.scala 141:25]
    reg myinputQ_hor_1_io_deq_ready_r : UInt<1>, clock with :
      reset => (UInt<1>("h0"), myinputQ_hor_1_io_deq_ready_r) @[Reg.scala 19:16]
    when UInt<1>("h1") : @[Reg.scala 20:18]
      myinputQ_hor_1_io_deq_ready_r <= myinputQ_hor_1.io.deq.valid @[Reg.scala 20:22]
    myinputQ_hor_1.io.deq.ready <= myinputQ_hor_1_io_deq_ready_r @[HBFP_GEMM.scala 138:34]
    reg myinputQ_ver_1_io_deq_ready_r : UInt<1>, clock with :
      reset => (UInt<1>("h0"), myinputQ_ver_1_io_deq_ready_r) @[Reg.scala 19:16]
    when UInt<1>("h1") : @[Reg.scala 20:18]
      myinputQ_ver_1_io_deq_ready_r <= myinputQ_ver_1.io.deq.valid @[Reg.scala 20:22]
    myinputQ_ver_1.io.deq.ready <= myinputQ_ver_1_io_deq_ready_r @[HBFP_GEMM.scala 139:34]
    node _pes_1_0_io_in_hor_T = and(myinputQ_hor_1.io.deq.ready, myinputQ_hor_1.io.deq.valid) @[Decoupled.scala 51:35]
    wire _pes_1_0_io_in_hor_WIRE : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>} @[HBFP_GEMM.scala 140:102]
    _pes_1_0_io_in_hor_WIRE.exp <= UInt<8>("h0") @[HBFP_GEMM.scala 140:102]
    _pes_1_0_io_in_hor_WIRE.man <= UInt<6>("h0") @[HBFP_GEMM.scala 140:102]
    _pes_1_0_io_in_hor_WIRE.sign <= UInt<1>("h0") @[HBFP_GEMM.scala 140:102]
    node _pes_1_0_io_in_hor_T_1 = mux(_pes_1_0_io_in_hor_T, myinputQ_hor_1.io.deq.bits, _pes_1_0_io_in_hor_WIRE) @[HBFP_GEMM.scala 140:31]
    pes_1_0.io.in.hor.exp <= _pes_1_0_io_in_hor_T_1.exp @[HBFP_GEMM.scala 140:25]
    pes_1_0.io.in.hor.man <= _pes_1_0_io_in_hor_T_1.man @[HBFP_GEMM.scala 140:25]
    pes_1_0.io.in.hor.sign <= _pes_1_0_io_in_hor_T_1.sign @[HBFP_GEMM.scala 140:25]
    node _pes_0_1_io_in_ver_T = and(myinputQ_ver_1.io.deq.ready, myinputQ_ver_1.io.deq.valid) @[Decoupled.scala 51:35]
    wire _pes_0_1_io_in_ver_WIRE : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>} @[HBFP_GEMM.scala 141:102]
    _pes_0_1_io_in_ver_WIRE.exp <= UInt<8>("h0") @[HBFP_GEMM.scala 141:102]
    _pes_0_1_io_in_ver_WIRE.man <= UInt<6>("h0") @[HBFP_GEMM.scala 141:102]
    _pes_0_1_io_in_ver_WIRE.sign <= UInt<1>("h0") @[HBFP_GEMM.scala 141:102]
    node _pes_0_1_io_in_ver_T_1 = mux(_pes_0_1_io_in_ver_T, myinputQ_ver_1.io.deq.bits, _pes_0_1_io_in_ver_WIRE) @[HBFP_GEMM.scala 141:31]
    pes_0_1.io.in.ver.exp <= _pes_0_1_io_in_ver_T_1.exp @[HBFP_GEMM.scala 141:25]
    pes_0_1.io.in.ver.man <= _pes_0_1_io_in_ver_T_1.man @[HBFP_GEMM.scala 141:25]
    pes_0_1.io.in.ver.sign <= _pes_0_1_io_in_ver_T_1.sign @[HBFP_GEMM.scala 141:25]
    reg pes_0_1_io_in_hor_r : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, clock with :
      reset => (UInt<1>("h0"), pes_0_1_io_in_hor_r) @[Reg.scala 19:16]
    when UInt<1>("h1") : @[Reg.scala 20:18]
      pes_0_1_io_in_hor_r <= pes_0_0.io.out.hor @[Reg.scala 20:22]
    pes_0_1.io.in.hor.exp <= pes_0_1_io_in_hor_r.exp @[HBFP_GEMM.scala 148:27]
    pes_0_1.io.in.hor.man <= pes_0_1_io_in_hor_r.man @[HBFP_GEMM.scala 148:27]
    pes_0_1.io.in.hor.sign <= pes_0_1_io_in_hor_r.sign @[HBFP_GEMM.scala 148:27]
    reg pes_1_1_io_in_hor_r : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, clock with :
      reset => (UInt<1>("h0"), pes_1_1_io_in_hor_r) @[Reg.scala 19:16]
    when UInt<1>("h1") : @[Reg.scala 20:18]
      pes_1_1_io_in_hor_r <= pes_1_0.io.out.hor @[Reg.scala 20:22]
    pes_1_1.io.in.hor.exp <= pes_1_1_io_in_hor_r.exp @[HBFP_GEMM.scala 148:27]
    pes_1_1.io.in.hor.man <= pes_1_1_io_in_hor_r.man @[HBFP_GEMM.scala 148:27]
    pes_1_1.io.in.hor.sign <= pes_1_1_io_in_hor_r.sign @[HBFP_GEMM.scala 148:27]
    reg pes_1_0_io_in_ver_r : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, clock with :
      reset => (UInt<1>("h0"), pes_1_0_io_in_ver_r) @[Reg.scala 19:16]
    when UInt<1>("h1") : @[Reg.scala 20:18]
      pes_1_0_io_in_ver_r <= pes_0_0.io.out.ver @[Reg.scala 20:22]
    pes_1_0.io.in.ver.exp <= pes_1_0_io_in_ver_r.exp @[HBFP_GEMM.scala 155:27]
    pes_1_0.io.in.ver.man <= pes_1_0_io_in_ver_r.man @[HBFP_GEMM.scala 155:27]
    pes_1_0.io.in.ver.sign <= pes_1_0_io_in_ver_r.sign @[HBFP_GEMM.scala 155:27]
    reg pes_1_1_io_in_ver_r : { sign : UInt<1>, man : UInt<6>, exp : UInt<8>}, clock with :
      reset => (UInt<1>("h0"), pes_1_1_io_in_ver_r) @[Reg.scala 19:16]
    when UInt<1>("h1") : @[Reg.scala 20:18]
      pes_1_1_io_in_ver_r <= pes_0_1.io.out.ver @[Reg.scala 20:22]
    pes_1_1.io.in.ver.exp <= pes_1_1_io_in_ver_r.exp @[HBFP_GEMM.scala 155:27]
    pes_1_1.io.in.ver.man <= pes_1_1_io_in_ver_r.man @[HBFP_GEMM.scala 155:27]
    pes_1_1.io.in.ver.sign <= pes_1_1_io_in_ver_r.sign @[HBFP_GEMM.scala 155:27]
    myoutputQ_0.io.enq.valid <= UInt<1>("h1") @[HBFP_GEMM.scala 162:33]
    myoutputQ_0.io.enq.bits.exp <= pes_0_1.io.out.result.exp @[HBFP_GEMM.scala 163:32]
    myoutputQ_0.io.enq.bits.man <= pes_0_1.io.out.result.man @[HBFP_GEMM.scala 163:32]
    myoutputQ_0.io.enq.bits.sign <= pes_0_1.io.out.result.sign @[HBFP_GEMM.scala 163:32]
    myoutputQ_1.io.enq.valid <= UInt<1>("h1") @[HBFP_GEMM.scala 162:33]
    myoutputQ_1.io.enq.bits.exp <= pes_1_1.io.out.result.exp @[HBFP_GEMM.scala 163:32]
    myoutputQ_1.io.enq.bits.man <= pes_1_1.io.out.result.man @[HBFP_GEMM.scala 163:32]
    myoutputQ_1.io.enq.bits.sign <= pes_1_1.io.out.result.sign @[HBFP_GEMM.scala 163:32]
    io.out.result[0].valid <= myoutputQ_0.io.deq.valid @[HBFP_GEMM.scala 168:28]
    io.out.result[0].ready <= UInt<1>("h1") @[HBFP_GEMM.scala 169:28]
    io.out.result[0].bits <= myoutputQ_0.io.deq.bits @[HBFP_GEMM.scala 170:27]
    myoutputQ_0.io.deq.ready <= io.out.result[0].ready @[HBFP_GEMM.scala 171:31]
    io.out.result[1].valid <= myoutputQ_1.io.deq.valid @[HBFP_GEMM.scala 168:28]
    io.out.result[1].ready <= UInt<1>("h1") @[HBFP_GEMM.scala 169:28]
    io.out.result[1].bits <= myoutputQ_1.io.deq.bits @[HBFP_GEMM.scala 170:27]
    myoutputQ_1.io.deq.ready <= io.out.result[1].ready @[HBFP_GEMM.scala 171:31]

