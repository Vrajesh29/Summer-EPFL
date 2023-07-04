circuit adderTree :
  module adderTree :
    input clock : Clock
    input reset : UInt<1>
    output io : { flip man : SInt<12>[4], man_out : SInt<6>}

    wire next_level_man : SInt<12>[2] @[adderTree.scala 17:30]
    node _next_level_man_0_T = add(io.man[0], io.man[1]) @[adderTree.scala 24:48]
    node _next_level_man_0_T_1 = tail(_next_level_man_0_T, 1) @[adderTree.scala 24:48]
    node _next_level_man_0_T_2 = asSInt(_next_level_man_0_T_1) @[adderTree.scala 24:48]
    next_level_man[0] <= _next_level_man_0_T_2 @[adderTree.scala 24:31]
    node _next_level_man_1_T = add(io.man[2], io.man[3]) @[adderTree.scala 24:48]
    node _next_level_man_1_T_1 = tail(_next_level_man_1_T, 1) @[adderTree.scala 24:48]
    node _next_level_man_1_T_2 = asSInt(_next_level_man_1_T_1) @[adderTree.scala 24:48]
    next_level_man[1] <= _next_level_man_1_T_2 @[adderTree.scala 24:31]
    wire current_level_man : SInt<13>[1] @[adderTree.scala 17:30]
    node _next_level_man_0_T_3 = add(next_level_man[0], next_level_man[1]) @[adderTree.scala 24:48]
    node _next_level_man_0_T_4 = tail(_next_level_man_0_T_3, 1) @[adderTree.scala 24:48]
    node _next_level_man_0_T_5 = asSInt(_next_level_man_0_T_4) @[adderTree.scala 24:48]
    current_level_man[0] <= _next_level_man_0_T_5 @[adderTree.scala 24:31]
    io.man_out <= current_level_man[0] @[adderTree.scala 33:14]

