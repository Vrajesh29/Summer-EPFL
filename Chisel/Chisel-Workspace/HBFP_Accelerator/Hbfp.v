module Hbfp(
  input         clock,
  input         reset,
  input  [4:0]  io_man_a_0,
  input  [4:0]  io_man_a_1,
  input  [4:0]  io_man_a_2,
  input  [4:0]  io_man_a_3,
  input  [4:0]  io_man_a_4,
  input  [4:0]  io_man_a_5,
  input  [4:0]  io_man_a_6,
  input  [4:0]  io_man_a_7,
  input  [4:0]  io_man_a_8,
  input  [4:0]  io_man_a_9,
  input  [4:0]  io_man_a_10,
  input  [4:0]  io_man_a_11,
  input  [4:0]  io_man_a_12,
  input  [4:0]  io_man_a_13,
  input  [4:0]  io_man_a_14,
  input  [4:0]  io_man_a_15,
  input  [4:0]  io_man_b_0,
  input  [4:0]  io_man_b_1,
  input  [4:0]  io_man_b_2,
  input  [4:0]  io_man_b_3,
  input  [4:0]  io_man_b_4,
  input  [4:0]  io_man_b_5,
  input  [4:0]  io_man_b_6,
  input  [4:0]  io_man_b_7,
  input  [4:0]  io_man_b_8,
  input  [4:0]  io_man_b_9,
  input  [4:0]  io_man_b_10,
  input  [4:0]  io_man_b_11,
  input  [4:0]  io_man_b_12,
  input  [4:0]  io_man_b_13,
  input  [4:0]  io_man_b_14,
  input  [4:0]  io_man_b_15,
  input         io_sign_a_0,
  input         io_sign_a_1,
  input         io_sign_a_2,
  input         io_sign_a_3,
  input         io_sign_a_4,
  input         io_sign_a_5,
  input         io_sign_a_6,
  input         io_sign_a_7,
  input         io_sign_a_8,
  input         io_sign_a_9,
  input         io_sign_a_10,
  input         io_sign_a_11,
  input         io_sign_a_12,
  input         io_sign_a_13,
  input         io_sign_a_14,
  input         io_sign_a_15,
  input         io_sign_b_0,
  input         io_sign_b_1,
  input         io_sign_b_2,
  input         io_sign_b_3,
  input         io_sign_b_4,
  input         io_sign_b_5,
  input         io_sign_b_6,
  input         io_sign_b_7,
  input         io_sign_b_8,
  input         io_sign_b_9,
  input         io_sign_b_10,
  input         io_sign_b_11,
  input         io_sign_b_12,
  input         io_sign_b_13,
  input         io_sign_b_14,
  input         io_sign_b_15,
  input  [7:0]  io_exp_a,
  input  [7:0]  io_exp_b,
  output [13:0] io_result
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
  reg [31:0] _RAND_9;
  reg [31:0] _RAND_10;
  reg [31:0] _RAND_11;
  reg [31:0] _RAND_12;
  reg [31:0] _RAND_13;
  reg [31:0] _RAND_14;
  reg [31:0] _RAND_15;
  reg [31:0] _RAND_16;
  reg [31:0] _RAND_17;
  reg [31:0] _RAND_18;
  reg [31:0] _RAND_19;
  reg [31:0] _RAND_20;
  reg [31:0] _RAND_21;
  reg [31:0] _RAND_22;
  reg [31:0] _RAND_23;
  reg [31:0] _RAND_24;
  reg [31:0] _RAND_25;
  reg [31:0] _RAND_26;
  reg [31:0] _RAND_27;
  reg [31:0] _RAND_28;
  reg [31:0] _RAND_29;
  reg [31:0] _RAND_30;
  reg [31:0] _RAND_31;
  reg [31:0] _RAND_32;
  reg [31:0] _RAND_33;
  reg [31:0] _RAND_34;
  reg [31:0] _RAND_35;
  reg [31:0] _RAND_36;
  reg [31:0] _RAND_37;
  reg [31:0] _RAND_38;
  reg [31:0] _RAND_39;
  reg [31:0] _RAND_40;
  reg [31:0] _RAND_41;
  reg [31:0] _RAND_42;
  reg [31:0] _RAND_43;
  reg [31:0] _RAND_44;
  reg [31:0] _RAND_45;
  reg [31:0] _RAND_46;
  reg [31:0] _RAND_47;
  reg [31:0] _RAND_48;
  reg [31:0] _RAND_49;
  reg [31:0] _RAND_50;
  reg [31:0] _RAND_51;
  reg [31:0] _RAND_52;
  reg [31:0] _RAND_53;
  reg [31:0] _RAND_54;
  reg [31:0] _RAND_55;
  reg [31:0] _RAND_56;
  reg [31:0] _RAND_57;
  reg [31:0] _RAND_58;
  reg [31:0] _RAND_59;
  reg [31:0] _RAND_60;
  reg [31:0] _RAND_61;
  reg [31:0] _RAND_62;
  reg [31:0] _RAND_63;
  reg [31:0] _RAND_64;
  reg [31:0] _RAND_65;
  reg [31:0] _RAND_66;
  reg [31:0] _RAND_67;
  reg [31:0] _RAND_68;
  reg [31:0] _RAND_69;
  reg [31:0] _RAND_70;
  reg [31:0] _RAND_71;
  reg [31:0] _RAND_72;
  reg [31:0] _RAND_73;
  reg [31:0] _RAND_74;
  reg [31:0] _RAND_75;
  reg [31:0] _RAND_76;
  reg [31:0] _RAND_77;
  reg [31:0] _RAND_78;
  reg [31:0] _RAND_79;
  reg [31:0] _RAND_80;
  reg [31:0] _RAND_81;
  reg [31:0] _RAND_82;
  reg [31:0] _RAND_83;
  reg [31:0] _RAND_84;
  reg [31:0] _RAND_85;
  reg [31:0] _RAND_86;
  reg [31:0] _RAND_87;
  reg [31:0] _RAND_88;
  reg [31:0] _RAND_89;
  reg [31:0] _RAND_90;
  reg [31:0] _RAND_91;
  reg [31:0] _RAND_92;
  reg [31:0] _RAND_93;
  reg [31:0] _RAND_94;
  reg [31:0] _RAND_95;
  reg [31:0] _RAND_96;
`endif // RANDOMIZE_REG_INIT
  wire [8:0] exp_output = io_exp_a + io_exp_b; // @[hbfp.scala 262:23]
  reg [4:0] dotProductRegs_0; // @[hbfp.scala 264:51]
  reg [4:0] dotProductRegs_1; // @[hbfp.scala 264:51]
  reg [4:0] dotProductRegs_2; // @[hbfp.scala 264:51]
  reg [4:0] dotProductRegs_3; // @[hbfp.scala 264:51]
  reg [4:0] dotProductRegs_4; // @[hbfp.scala 264:51]
  reg [4:0] dotProductRegs_5; // @[hbfp.scala 264:51]
  reg [4:0] dotProductRegs_6; // @[hbfp.scala 264:51]
  reg [4:0] dotProductRegs_7; // @[hbfp.scala 264:51]
  reg [4:0] dotProductRegs_8; // @[hbfp.scala 264:51]
  reg [4:0] dotProductRegs_9; // @[hbfp.scala 264:51]
  reg [4:0] dotProductRegs_10; // @[hbfp.scala 264:51]
  reg [4:0] dotProductRegs_11; // @[hbfp.scala 264:51]
  reg [4:0] dotProductRegs_12; // @[hbfp.scala 264:51]
  reg [4:0] dotProductRegs_13; // @[hbfp.scala 264:51]
  reg [4:0] dotProductRegs_14; // @[hbfp.scala 264:51]
  reg [4:0] dotProductRegs_15; // @[hbfp.scala 264:51]
  reg [5:0] two_complement_buffer_0; // @[hbfp.scala 265:58]
  reg [5:0] two_complement_buffer_1; // @[hbfp.scala 265:58]
  reg [5:0] two_complement_buffer_2; // @[hbfp.scala 265:58]
  reg [5:0] two_complement_buffer_3; // @[hbfp.scala 265:58]
  reg [5:0] two_complement_buffer_4; // @[hbfp.scala 265:58]
  reg [5:0] two_complement_buffer_5; // @[hbfp.scala 265:58]
  reg [5:0] two_complement_buffer_6; // @[hbfp.scala 265:58]
  reg [5:0] two_complement_buffer_7; // @[hbfp.scala 265:58]
  reg [5:0] two_complement_buffer_8; // @[hbfp.scala 265:58]
  reg [5:0] two_complement_buffer_9; // @[hbfp.scala 265:58]
  reg [5:0] two_complement_buffer_10; // @[hbfp.scala 265:58]
  reg [5:0] two_complement_buffer_11; // @[hbfp.scala 265:58]
  reg [5:0] two_complement_buffer_12; // @[hbfp.scala 265:58]
  reg [5:0] two_complement_buffer_13; // @[hbfp.scala 265:58]
  reg [5:0] two_complement_buffer_14; // @[hbfp.scala 265:58]
  reg [5:0] two_complement_buffer_15; // @[hbfp.scala 265:58]
  reg [5:0] two_complement_0; // @[hbfp.scala 266:51]
  reg [5:0] two_complement_1; // @[hbfp.scala 266:51]
  reg [5:0] two_complement_2; // @[hbfp.scala 266:51]
  reg [5:0] two_complement_3; // @[hbfp.scala 266:51]
  reg [5:0] two_complement_4; // @[hbfp.scala 266:51]
  reg [5:0] two_complement_5; // @[hbfp.scala 266:51]
  reg [5:0] two_complement_6; // @[hbfp.scala 266:51]
  reg [5:0] two_complement_7; // @[hbfp.scala 266:51]
  reg [5:0] two_complement_8; // @[hbfp.scala 266:51]
  reg [5:0] two_complement_9; // @[hbfp.scala 266:51]
  reg [5:0] two_complement_10; // @[hbfp.scala 266:51]
  reg [5:0] two_complement_11; // @[hbfp.scala 266:51]
  reg [5:0] two_complement_12; // @[hbfp.scala 266:51]
  reg [5:0] two_complement_13; // @[hbfp.scala 266:51]
  reg [5:0] two_complement_14; // @[hbfp.scala 266:51]
  reg [5:0] two_complement_15; // @[hbfp.scala 266:51]
  reg  signs_0; // @[hbfp.scala 267:42]
  reg  signs_1; // @[hbfp.scala 267:42]
  reg  signs_2; // @[hbfp.scala 267:42]
  reg  signs_3; // @[hbfp.scala 267:42]
  reg  signs_4; // @[hbfp.scala 267:42]
  reg  signs_5; // @[hbfp.scala 267:42]
  reg  signs_6; // @[hbfp.scala 267:42]
  reg  signs_7; // @[hbfp.scala 267:42]
  reg  signs_8; // @[hbfp.scala 267:42]
  reg  signs_9; // @[hbfp.scala 267:42]
  reg  signs_10; // @[hbfp.scala 267:42]
  reg  signs_11; // @[hbfp.scala 267:42]
  reg  signs_12; // @[hbfp.scala 267:42]
  reg  signs_13; // @[hbfp.scala 267:42]
  reg  signs_14; // @[hbfp.scala 267:42]
  reg  signs_15; // @[hbfp.scala 267:42]
  reg [5:0] acc_hbfp; // @[hbfp.scala 269:25]
  reg [4:0] multiplierReg; // @[hbfp.scala 274:32]
  reg  signReg; // @[hbfp.scala 275:26]
  wire [9:0] multiplication = multiplierReg * io_man_b_0; // @[hbfp.scala 278:41]
  wire [5:0] _dotProductRegs_0_T_1 = 6'h20 - 6'h1; // @[hbfp.scala 279:58]
  wire [9:0] _GEN_0 = {{4'd0}, _dotProductRegs_0_T_1}; // @[hbfp.scala 279:45]
  wire [9:0] _dotProductRegs_0_T_5 = multiplication > _GEN_0 ? {{4'd0}, _dotProductRegs_0_T_1} : multiplication; // @[hbfp.scala 279:29]
  wire [5:0] _two_complement_0_T_1 = {1'h0,dotProductRegs_0}; // @[hbfp.scala 281:53]
  wire [5:0] _two_complement_0_T_2 = ~_two_complement_0_T_1; // @[hbfp.scala 281:47]
  wire [5:0] _two_complement_0_T_4 = _two_complement_0_T_2 + 6'h1; // @[hbfp.scala 281:75]
  reg [4:0] multiplierReg_1; // @[hbfp.scala 274:32]
  reg  signReg_1; // @[hbfp.scala 275:26]
  wire [9:0] multiplication_1 = multiplierReg_1 * io_man_b_1; // @[hbfp.scala 278:41]
  wire [9:0] _dotProductRegs_1_T_5 = multiplication_1 > _GEN_0 ? {{4'd0}, _dotProductRegs_0_T_1} : multiplication_1; // @[hbfp.scala 279:29]
  wire [5:0] _two_complement_1_T_1 = {1'h0,dotProductRegs_1}; // @[hbfp.scala 281:53]
  wire [5:0] _two_complement_1_T_2 = ~_two_complement_1_T_1; // @[hbfp.scala 281:47]
  wire [5:0] _two_complement_1_T_4 = _two_complement_1_T_2 + 6'h1; // @[hbfp.scala 281:75]
  reg [4:0] multiplierReg_2; // @[hbfp.scala 274:32]
  reg  signReg_2; // @[hbfp.scala 275:26]
  wire [9:0] multiplication_2 = multiplierReg_2 * io_man_b_2; // @[hbfp.scala 278:41]
  wire [9:0] _dotProductRegs_2_T_5 = multiplication_2 > _GEN_0 ? {{4'd0}, _dotProductRegs_0_T_1} : multiplication_2; // @[hbfp.scala 279:29]
  wire [5:0] _two_complement_2_T_1 = {1'h0,dotProductRegs_2}; // @[hbfp.scala 281:53]
  wire [5:0] _two_complement_2_T_2 = ~_two_complement_2_T_1; // @[hbfp.scala 281:47]
  wire [5:0] _two_complement_2_T_4 = _two_complement_2_T_2 + 6'h1; // @[hbfp.scala 281:75]
  reg [4:0] multiplierReg_3; // @[hbfp.scala 274:32]
  reg  signReg_3; // @[hbfp.scala 275:26]
  wire [9:0] multiplication_3 = multiplierReg_3 * io_man_b_3; // @[hbfp.scala 278:41]
  wire [9:0] _dotProductRegs_3_T_5 = multiplication_3 > _GEN_0 ? {{4'd0}, _dotProductRegs_0_T_1} : multiplication_3; // @[hbfp.scala 279:29]
  wire [5:0] _two_complement_3_T_1 = {1'h0,dotProductRegs_3}; // @[hbfp.scala 281:53]
  wire [5:0] _two_complement_3_T_2 = ~_two_complement_3_T_1; // @[hbfp.scala 281:47]
  wire [5:0] _two_complement_3_T_4 = _two_complement_3_T_2 + 6'h1; // @[hbfp.scala 281:75]
  reg [4:0] multiplierReg_4; // @[hbfp.scala 274:32]
  reg  signReg_4; // @[hbfp.scala 275:26]
  wire [9:0] multiplication_4 = multiplierReg_4 * io_man_b_4; // @[hbfp.scala 278:41]
  wire [9:0] _dotProductRegs_4_T_5 = multiplication_4 > _GEN_0 ? {{4'd0}, _dotProductRegs_0_T_1} : multiplication_4; // @[hbfp.scala 279:29]
  wire [5:0] _two_complement_4_T_1 = {1'h0,dotProductRegs_4}; // @[hbfp.scala 281:53]
  wire [5:0] _two_complement_4_T_2 = ~_two_complement_4_T_1; // @[hbfp.scala 281:47]
  wire [5:0] _two_complement_4_T_4 = _two_complement_4_T_2 + 6'h1; // @[hbfp.scala 281:75]
  reg [4:0] multiplierReg_5; // @[hbfp.scala 274:32]
  reg  signReg_5; // @[hbfp.scala 275:26]
  wire [9:0] multiplication_5 = multiplierReg_5 * io_man_b_5; // @[hbfp.scala 278:41]
  wire [9:0] _dotProductRegs_5_T_5 = multiplication_5 > _GEN_0 ? {{4'd0}, _dotProductRegs_0_T_1} : multiplication_5; // @[hbfp.scala 279:29]
  wire [5:0] _two_complement_5_T_1 = {1'h0,dotProductRegs_5}; // @[hbfp.scala 281:53]
  wire [5:0] _two_complement_5_T_2 = ~_two_complement_5_T_1; // @[hbfp.scala 281:47]
  wire [5:0] _two_complement_5_T_4 = _two_complement_5_T_2 + 6'h1; // @[hbfp.scala 281:75]
  reg [4:0] multiplierReg_6; // @[hbfp.scala 274:32]
  reg  signReg_6; // @[hbfp.scala 275:26]
  wire [9:0] multiplication_6 = multiplierReg_6 * io_man_b_6; // @[hbfp.scala 278:41]
  wire [9:0] _dotProductRegs_6_T_5 = multiplication_6 > _GEN_0 ? {{4'd0}, _dotProductRegs_0_T_1} : multiplication_6; // @[hbfp.scala 279:29]
  wire [5:0] _two_complement_6_T_1 = {1'h0,dotProductRegs_6}; // @[hbfp.scala 281:53]
  wire [5:0] _two_complement_6_T_2 = ~_two_complement_6_T_1; // @[hbfp.scala 281:47]
  wire [5:0] _two_complement_6_T_4 = _two_complement_6_T_2 + 6'h1; // @[hbfp.scala 281:75]
  reg [4:0] multiplierReg_7; // @[hbfp.scala 274:32]
  reg  signReg_7; // @[hbfp.scala 275:26]
  wire [9:0] multiplication_7 = multiplierReg_7 * io_man_b_7; // @[hbfp.scala 278:41]
  wire [9:0] _dotProductRegs_7_T_5 = multiplication_7 > _GEN_0 ? {{4'd0}, _dotProductRegs_0_T_1} : multiplication_7; // @[hbfp.scala 279:29]
  wire [5:0] _two_complement_7_T_1 = {1'h0,dotProductRegs_7}; // @[hbfp.scala 281:53]
  wire [5:0] _two_complement_7_T_2 = ~_two_complement_7_T_1; // @[hbfp.scala 281:47]
  wire [5:0] _two_complement_7_T_4 = _two_complement_7_T_2 + 6'h1; // @[hbfp.scala 281:75]
  reg [4:0] multiplierReg_8; // @[hbfp.scala 274:32]
  reg  signReg_8; // @[hbfp.scala 275:26]
  wire [9:0] multiplication_8 = multiplierReg_8 * io_man_b_8; // @[hbfp.scala 278:41]
  wire [9:0] _dotProductRegs_8_T_5 = multiplication_8 > _GEN_0 ? {{4'd0}, _dotProductRegs_0_T_1} : multiplication_8; // @[hbfp.scala 279:29]
  wire [5:0] _two_complement_8_T_1 = {1'h0,dotProductRegs_8}; // @[hbfp.scala 281:53]
  wire [5:0] _two_complement_8_T_2 = ~_two_complement_8_T_1; // @[hbfp.scala 281:47]
  wire [5:0] _two_complement_8_T_4 = _two_complement_8_T_2 + 6'h1; // @[hbfp.scala 281:75]
  reg [4:0] multiplierReg_9; // @[hbfp.scala 274:32]
  reg  signReg_9; // @[hbfp.scala 275:26]
  wire [9:0] multiplication_9 = multiplierReg_9 * io_man_b_9; // @[hbfp.scala 278:41]
  wire [9:0] _dotProductRegs_9_T_5 = multiplication_9 > _GEN_0 ? {{4'd0}, _dotProductRegs_0_T_1} : multiplication_9; // @[hbfp.scala 279:29]
  wire [5:0] _two_complement_9_T_1 = {1'h0,dotProductRegs_9}; // @[hbfp.scala 281:53]
  wire [5:0] _two_complement_9_T_2 = ~_two_complement_9_T_1; // @[hbfp.scala 281:47]
  wire [5:0] _two_complement_9_T_4 = _two_complement_9_T_2 + 6'h1; // @[hbfp.scala 281:75]
  reg [4:0] multiplierReg_10; // @[hbfp.scala 274:32]
  reg  signReg_10; // @[hbfp.scala 275:26]
  wire [9:0] multiplication_10 = multiplierReg_10 * io_man_b_10; // @[hbfp.scala 278:41]
  wire [9:0] _dotProductRegs_10_T_5 = multiplication_10 > _GEN_0 ? {{4'd0}, _dotProductRegs_0_T_1} : multiplication_10; // @[hbfp.scala 279:29]
  wire [5:0] _two_complement_10_T_1 = {1'h0,dotProductRegs_10}; // @[hbfp.scala 281:53]
  wire [5:0] _two_complement_10_T_2 = ~_two_complement_10_T_1; // @[hbfp.scala 281:47]
  wire [5:0] _two_complement_10_T_4 = _two_complement_10_T_2 + 6'h1; // @[hbfp.scala 281:75]
  reg [4:0] multiplierReg_11; // @[hbfp.scala 274:32]
  reg  signReg_11; // @[hbfp.scala 275:26]
  wire [9:0] multiplication_11 = multiplierReg_11 * io_man_b_11; // @[hbfp.scala 278:41]
  wire [9:0] _dotProductRegs_11_T_5 = multiplication_11 > _GEN_0 ? {{4'd0}, _dotProductRegs_0_T_1} : multiplication_11; // @[hbfp.scala 279:29]
  wire [5:0] _two_complement_11_T_1 = {1'h0,dotProductRegs_11}; // @[hbfp.scala 281:53]
  wire [5:0] _two_complement_11_T_2 = ~_two_complement_11_T_1; // @[hbfp.scala 281:47]
  wire [5:0] _two_complement_11_T_4 = _two_complement_11_T_2 + 6'h1; // @[hbfp.scala 281:75]
  reg [4:0] multiplierReg_12; // @[hbfp.scala 274:32]
  reg  signReg_12; // @[hbfp.scala 275:26]
  wire [9:0] multiplication_12 = multiplierReg_12 * io_man_b_12; // @[hbfp.scala 278:41]
  wire [9:0] _dotProductRegs_12_T_5 = multiplication_12 > _GEN_0 ? {{4'd0}, _dotProductRegs_0_T_1} : multiplication_12; // @[hbfp.scala 279:29]
  wire [5:0] _two_complement_12_T_1 = {1'h0,dotProductRegs_12}; // @[hbfp.scala 281:53]
  wire [5:0] _two_complement_12_T_2 = ~_two_complement_12_T_1; // @[hbfp.scala 281:47]
  wire [5:0] _two_complement_12_T_4 = _two_complement_12_T_2 + 6'h1; // @[hbfp.scala 281:75]
  reg [4:0] multiplierReg_13; // @[hbfp.scala 274:32]
  reg  signReg_13; // @[hbfp.scala 275:26]
  wire [9:0] multiplication_13 = multiplierReg_13 * io_man_b_13; // @[hbfp.scala 278:41]
  wire [9:0] _dotProductRegs_13_T_5 = multiplication_13 > _GEN_0 ? {{4'd0}, _dotProductRegs_0_T_1} : multiplication_13; // @[hbfp.scala 279:29]
  wire [5:0] _two_complement_13_T_1 = {1'h0,dotProductRegs_13}; // @[hbfp.scala 281:53]
  wire [5:0] _two_complement_13_T_2 = ~_two_complement_13_T_1; // @[hbfp.scala 281:47]
  wire [5:0] _two_complement_13_T_4 = _two_complement_13_T_2 + 6'h1; // @[hbfp.scala 281:75]
  reg [4:0] multiplierReg_14; // @[hbfp.scala 274:32]
  reg  signReg_14; // @[hbfp.scala 275:26]
  wire [9:0] multiplication_14 = multiplierReg_14 * io_man_b_14; // @[hbfp.scala 278:41]
  wire [9:0] _dotProductRegs_14_T_5 = multiplication_14 > _GEN_0 ? {{4'd0}, _dotProductRegs_0_T_1} : multiplication_14; // @[hbfp.scala 279:29]
  wire [5:0] _two_complement_14_T_1 = {1'h0,dotProductRegs_14}; // @[hbfp.scala 281:53]
  wire [5:0] _two_complement_14_T_2 = ~_two_complement_14_T_1; // @[hbfp.scala 281:47]
  wire [5:0] _two_complement_14_T_4 = _two_complement_14_T_2 + 6'h1; // @[hbfp.scala 281:75]
  reg [4:0] multiplierReg_15; // @[hbfp.scala 274:32]
  reg  signReg_15; // @[hbfp.scala 275:26]
  wire [9:0] multiplication_15 = multiplierReg_15 * io_man_b_15; // @[hbfp.scala 278:41]
  wire [9:0] _dotProductRegs_15_T_5 = multiplication_15 > _GEN_0 ? {{4'd0}, _dotProductRegs_0_T_1} : multiplication_15; // @[hbfp.scala 279:29]
  wire [5:0] _two_complement_15_T_1 = {1'h0,dotProductRegs_15}; // @[hbfp.scala 281:53]
  wire [5:0] _two_complement_15_T_2 = ~_two_complement_15_T_1; // @[hbfp.scala 281:47]
  wire [5:0] _two_complement_15_T_4 = _two_complement_15_T_2 + 6'h1; // @[hbfp.scala 281:75]
  wire [6:0] _sum_T = $signed(two_complement_buffer_0) + $signed(two_complement_buffer_1); // @[hbfp.scala 285:43]
  wire [6:0] _GEN_16 = {{1{two_complement_buffer_2[5]}},two_complement_buffer_2}; // @[hbfp.scala 285:43]
  wire [7:0] _sum_T_1 = $signed(_sum_T) + $signed(_GEN_16); // @[hbfp.scala 285:43]
  wire [7:0] _GEN_17 = {{2{two_complement_buffer_3[5]}},two_complement_buffer_3}; // @[hbfp.scala 285:43]
  wire [8:0] _sum_T_2 = $signed(_sum_T_1) + $signed(_GEN_17); // @[hbfp.scala 285:43]
  wire [8:0] _GEN_18 = {{3{two_complement_buffer_4[5]}},two_complement_buffer_4}; // @[hbfp.scala 285:43]
  wire [9:0] _sum_T_3 = $signed(_sum_T_2) + $signed(_GEN_18); // @[hbfp.scala 285:43]
  wire [9:0] _GEN_19 = {{4{two_complement_buffer_5[5]}},two_complement_buffer_5}; // @[hbfp.scala 285:43]
  wire [10:0] _sum_T_4 = $signed(_sum_T_3) + $signed(_GEN_19); // @[hbfp.scala 285:43]
  wire [10:0] _GEN_20 = {{5{two_complement_buffer_6[5]}},two_complement_buffer_6}; // @[hbfp.scala 285:43]
  wire [11:0] _sum_T_5 = $signed(_sum_T_4) + $signed(_GEN_20); // @[hbfp.scala 285:43]
  wire [11:0] _GEN_21 = {{6{two_complement_buffer_7[5]}},two_complement_buffer_7}; // @[hbfp.scala 285:43]
  wire [12:0] _sum_T_6 = $signed(_sum_T_5) + $signed(_GEN_21); // @[hbfp.scala 285:43]
  wire [12:0] _GEN_22 = {{7{two_complement_buffer_8[5]}},two_complement_buffer_8}; // @[hbfp.scala 285:43]
  wire [13:0] _sum_T_7 = $signed(_sum_T_6) + $signed(_GEN_22); // @[hbfp.scala 285:43]
  wire [13:0] _GEN_23 = {{8{two_complement_buffer_9[5]}},two_complement_buffer_9}; // @[hbfp.scala 285:43]
  wire [14:0] _sum_T_8 = $signed(_sum_T_7) + $signed(_GEN_23); // @[hbfp.scala 285:43]
  wire [14:0] _GEN_24 = {{9{two_complement_buffer_10[5]}},two_complement_buffer_10}; // @[hbfp.scala 285:43]
  wire [15:0] _sum_T_9 = $signed(_sum_T_8) + $signed(_GEN_24); // @[hbfp.scala 285:43]
  wire [15:0] _GEN_25 = {{10{two_complement_buffer_11[5]}},two_complement_buffer_11}; // @[hbfp.scala 285:43]
  wire [16:0] _sum_T_10 = $signed(_sum_T_9) + $signed(_GEN_25); // @[hbfp.scala 285:43]
  wire [16:0] _GEN_26 = {{11{two_complement_buffer_12[5]}},two_complement_buffer_12}; // @[hbfp.scala 285:43]
  wire [17:0] _sum_T_11 = $signed(_sum_T_10) + $signed(_GEN_26); // @[hbfp.scala 285:43]
  wire [17:0] _GEN_27 = {{12{two_complement_buffer_13[5]}},two_complement_buffer_13}; // @[hbfp.scala 285:43]
  wire [18:0] _sum_T_12 = $signed(_sum_T_11) + $signed(_GEN_27); // @[hbfp.scala 285:43]
  wire [18:0] _GEN_28 = {{13{two_complement_buffer_14[5]}},two_complement_buffer_14}; // @[hbfp.scala 285:43]
  wire [19:0] _sum_T_13 = $signed(_sum_T_12) + $signed(_GEN_28); // @[hbfp.scala 285:43]
  wire [19:0] _GEN_29 = {{14{two_complement_buffer_15[5]}},two_complement_buffer_15}; // @[hbfp.scala 285:43]
  wire [20:0] sum = $signed(_sum_T_13) + $signed(_GEN_29); // @[hbfp.scala 285:43]
  wire [19:0] _GEN_30 = {{14'd0}, _dotProductRegs_0_T_1}; // @[hbfp.scala 286:42]
  wire  _acc_T_3 = sum[19:0] > _GEN_30; // @[hbfp.scala 286:42]
  wire [19:0] _acc_hbfp_T_3 = ~sum[19:0]; // @[hbfp.scala 290:57]
  wire [19:0] _acc_hbfp_T_5 = _acc_hbfp_T_3 + 20'h1; // @[hbfp.scala 290:86]
  wire [6:0] _acc_hbfp_T_10 = 7'h40 - 7'h1; // @[hbfp.scala 290:122]
  wire [20:0] _acc_hbfp_T_12 = {1'h0,sum[19:0]}; // @[hbfp.scala 290:135]
  wire [20:0] _acc_hbfp_T_13 = ~_acc_hbfp_T_12; // @[hbfp.scala 290:129]
  wire [20:0] _acc_hbfp_T_15 = _acc_hbfp_T_13 + 21'h1; // @[hbfp.scala 290:168]
  wire [20:0] _acc_hbfp_T_16 = _acc_hbfp_T_5 > _GEN_30 ? {{14'd0}, _acc_hbfp_T_10} : _acc_hbfp_T_15; // @[hbfp.scala 290:55]
  wire [20:0] _acc_hbfp_T_25 = _acc_T_3 ? {{15'd0}, _dotProductRegs_0_T_1} : _acc_hbfp_T_12; // @[hbfp.scala 291:6]
  wire [20:0] _acc_hbfp_T_26 = sum[20] ? _acc_hbfp_T_16 : _acc_hbfp_T_25; // @[hbfp.scala 290:18]
  wire [8:0] _io_result_T_2 = {acc_hbfp[5],exp_output[8:1]}; // @[hbfp.scala 294:35]
  wire [9:0] _GEN_33 = reset ? 10'h0 : _dotProductRegs_0_T_5; // @[hbfp.scala 264:{51,51} 279:23]
  wire [9:0] _GEN_34 = reset ? 10'h0 : _dotProductRegs_1_T_5; // @[hbfp.scala 264:{51,51} 279:23]
  wire [9:0] _GEN_35 = reset ? 10'h0 : _dotProductRegs_2_T_5; // @[hbfp.scala 264:{51,51} 279:23]
  wire [9:0] _GEN_36 = reset ? 10'h0 : _dotProductRegs_3_T_5; // @[hbfp.scala 264:{51,51} 279:23]
  wire [9:0] _GEN_37 = reset ? 10'h0 : _dotProductRegs_4_T_5; // @[hbfp.scala 264:{51,51} 279:23]
  wire [9:0] _GEN_38 = reset ? 10'h0 : _dotProductRegs_5_T_5; // @[hbfp.scala 264:{51,51} 279:23]
  wire [9:0] _GEN_39 = reset ? 10'h0 : _dotProductRegs_6_T_5; // @[hbfp.scala 264:{51,51} 279:23]
  wire [9:0] _GEN_40 = reset ? 10'h0 : _dotProductRegs_7_T_5; // @[hbfp.scala 264:{51,51} 279:23]
  wire [9:0] _GEN_41 = reset ? 10'h0 : _dotProductRegs_8_T_5; // @[hbfp.scala 264:{51,51} 279:23]
  wire [9:0] _GEN_42 = reset ? 10'h0 : _dotProductRegs_9_T_5; // @[hbfp.scala 264:{51,51} 279:23]
  wire [9:0] _GEN_43 = reset ? 10'h0 : _dotProductRegs_10_T_5; // @[hbfp.scala 264:{51,51} 279:23]
  wire [9:0] _GEN_44 = reset ? 10'h0 : _dotProductRegs_11_T_5; // @[hbfp.scala 264:{51,51} 279:23]
  wire [9:0] _GEN_45 = reset ? 10'h0 : _dotProductRegs_12_T_5; // @[hbfp.scala 264:{51,51} 279:23]
  wire [9:0] _GEN_46 = reset ? 10'h0 : _dotProductRegs_13_T_5; // @[hbfp.scala 264:{51,51} 279:23]
  wire [9:0] _GEN_47 = reset ? 10'h0 : _dotProductRegs_14_T_5; // @[hbfp.scala 264:{51,51} 279:23]
  wire [9:0] _GEN_48 = reset ? 10'h0 : _dotProductRegs_15_T_5; // @[hbfp.scala 264:{51,51} 279:23]
  wire [20:0] _GEN_50 = reset ? 21'h0 : _acc_hbfp_T_26; // @[hbfp.scala 269:{25,25} 290:12]
  assign io_result = {_io_result_T_2,acc_hbfp[4:0]}; // @[hbfp.scala 294:55]
  always @(posedge clock) begin
    dotProductRegs_0 <= _GEN_33[4:0]; // @[hbfp.scala 264:{51,51} 279:23]
    dotProductRegs_1 <= _GEN_34[4:0]; // @[hbfp.scala 264:{51,51} 279:23]
    dotProductRegs_2 <= _GEN_35[4:0]; // @[hbfp.scala 264:{51,51} 279:23]
    dotProductRegs_3 <= _GEN_36[4:0]; // @[hbfp.scala 264:{51,51} 279:23]
    dotProductRegs_4 <= _GEN_37[4:0]; // @[hbfp.scala 264:{51,51} 279:23]
    dotProductRegs_5 <= _GEN_38[4:0]; // @[hbfp.scala 264:{51,51} 279:23]
    dotProductRegs_6 <= _GEN_39[4:0]; // @[hbfp.scala 264:{51,51} 279:23]
    dotProductRegs_7 <= _GEN_40[4:0]; // @[hbfp.scala 264:{51,51} 279:23]
    dotProductRegs_8 <= _GEN_41[4:0]; // @[hbfp.scala 264:{51,51} 279:23]
    dotProductRegs_9 <= _GEN_42[4:0]; // @[hbfp.scala 264:{51,51} 279:23]
    dotProductRegs_10 <= _GEN_43[4:0]; // @[hbfp.scala 264:{51,51} 279:23]
    dotProductRegs_11 <= _GEN_44[4:0]; // @[hbfp.scala 264:{51,51} 279:23]
    dotProductRegs_12 <= _GEN_45[4:0]; // @[hbfp.scala 264:{51,51} 279:23]
    dotProductRegs_13 <= _GEN_46[4:0]; // @[hbfp.scala 264:{51,51} 279:23]
    dotProductRegs_14 <= _GEN_47[4:0]; // @[hbfp.scala 264:{51,51} 279:23]
    dotProductRegs_15 <= _GEN_48[4:0]; // @[hbfp.scala 264:{51,51} 279:23]
    if (reset) begin // @[hbfp.scala 265:58]
      two_complement_buffer_0 <= 6'sh0; // @[hbfp.scala 265:58]
    end else begin
      two_complement_buffer_0 <= two_complement_0; // @[hbfp.scala 282:30]
    end
    if (reset) begin // @[hbfp.scala 265:58]
      two_complement_buffer_1 <= 6'sh0; // @[hbfp.scala 265:58]
    end else begin
      two_complement_buffer_1 <= two_complement_1; // @[hbfp.scala 282:30]
    end
    if (reset) begin // @[hbfp.scala 265:58]
      two_complement_buffer_2 <= 6'sh0; // @[hbfp.scala 265:58]
    end else begin
      two_complement_buffer_2 <= two_complement_2; // @[hbfp.scala 282:30]
    end
    if (reset) begin // @[hbfp.scala 265:58]
      two_complement_buffer_3 <= 6'sh0; // @[hbfp.scala 265:58]
    end else begin
      two_complement_buffer_3 <= two_complement_3; // @[hbfp.scala 282:30]
    end
    if (reset) begin // @[hbfp.scala 265:58]
      two_complement_buffer_4 <= 6'sh0; // @[hbfp.scala 265:58]
    end else begin
      two_complement_buffer_4 <= two_complement_4; // @[hbfp.scala 282:30]
    end
    if (reset) begin // @[hbfp.scala 265:58]
      two_complement_buffer_5 <= 6'sh0; // @[hbfp.scala 265:58]
    end else begin
      two_complement_buffer_5 <= two_complement_5; // @[hbfp.scala 282:30]
    end
    if (reset) begin // @[hbfp.scala 265:58]
      two_complement_buffer_6 <= 6'sh0; // @[hbfp.scala 265:58]
    end else begin
      two_complement_buffer_6 <= two_complement_6; // @[hbfp.scala 282:30]
    end
    if (reset) begin // @[hbfp.scala 265:58]
      two_complement_buffer_7 <= 6'sh0; // @[hbfp.scala 265:58]
    end else begin
      two_complement_buffer_7 <= two_complement_7; // @[hbfp.scala 282:30]
    end
    if (reset) begin // @[hbfp.scala 265:58]
      two_complement_buffer_8 <= 6'sh0; // @[hbfp.scala 265:58]
    end else begin
      two_complement_buffer_8 <= two_complement_8; // @[hbfp.scala 282:30]
    end
    if (reset) begin // @[hbfp.scala 265:58]
      two_complement_buffer_9 <= 6'sh0; // @[hbfp.scala 265:58]
    end else begin
      two_complement_buffer_9 <= two_complement_9; // @[hbfp.scala 282:30]
    end
    if (reset) begin // @[hbfp.scala 265:58]
      two_complement_buffer_10 <= 6'sh0; // @[hbfp.scala 265:58]
    end else begin
      two_complement_buffer_10 <= two_complement_10; // @[hbfp.scala 282:30]
    end
    if (reset) begin // @[hbfp.scala 265:58]
      two_complement_buffer_11 <= 6'sh0; // @[hbfp.scala 265:58]
    end else begin
      two_complement_buffer_11 <= two_complement_11; // @[hbfp.scala 282:30]
    end
    if (reset) begin // @[hbfp.scala 265:58]
      two_complement_buffer_12 <= 6'sh0; // @[hbfp.scala 265:58]
    end else begin
      two_complement_buffer_12 <= two_complement_12; // @[hbfp.scala 282:30]
    end
    if (reset) begin // @[hbfp.scala 265:58]
      two_complement_buffer_13 <= 6'sh0; // @[hbfp.scala 265:58]
    end else begin
      two_complement_buffer_13 <= two_complement_13; // @[hbfp.scala 282:30]
    end
    if (reset) begin // @[hbfp.scala 265:58]
      two_complement_buffer_14 <= 6'sh0; // @[hbfp.scala 265:58]
    end else begin
      two_complement_buffer_14 <= two_complement_14; // @[hbfp.scala 282:30]
    end
    if (reset) begin // @[hbfp.scala 265:58]
      two_complement_buffer_15 <= 6'sh0; // @[hbfp.scala 265:58]
    end else begin
      two_complement_buffer_15 <= two_complement_15; // @[hbfp.scala 282:30]
    end
    if (reset) begin // @[hbfp.scala 266:51]
      two_complement_0 <= 6'h0; // @[hbfp.scala 266:51]
    end else if (signs_0) begin // @[hbfp.scala 281:29]
      two_complement_0 <= _two_complement_0_T_4;
    end else begin
      two_complement_0 <= _two_complement_0_T_1;
    end
    if (reset) begin // @[hbfp.scala 266:51]
      two_complement_1 <= 6'h0; // @[hbfp.scala 266:51]
    end else if (signs_1) begin // @[hbfp.scala 281:29]
      two_complement_1 <= _two_complement_1_T_4;
    end else begin
      two_complement_1 <= _two_complement_1_T_1;
    end
    if (reset) begin // @[hbfp.scala 266:51]
      two_complement_2 <= 6'h0; // @[hbfp.scala 266:51]
    end else if (signs_2) begin // @[hbfp.scala 281:29]
      two_complement_2 <= _two_complement_2_T_4;
    end else begin
      two_complement_2 <= _two_complement_2_T_1;
    end
    if (reset) begin // @[hbfp.scala 266:51]
      two_complement_3 <= 6'h0; // @[hbfp.scala 266:51]
    end else if (signs_3) begin // @[hbfp.scala 281:29]
      two_complement_3 <= _two_complement_3_T_4;
    end else begin
      two_complement_3 <= _two_complement_3_T_1;
    end
    if (reset) begin // @[hbfp.scala 266:51]
      two_complement_4 <= 6'h0; // @[hbfp.scala 266:51]
    end else if (signs_4) begin // @[hbfp.scala 281:29]
      two_complement_4 <= _two_complement_4_T_4;
    end else begin
      two_complement_4 <= _two_complement_4_T_1;
    end
    if (reset) begin // @[hbfp.scala 266:51]
      two_complement_5 <= 6'h0; // @[hbfp.scala 266:51]
    end else if (signs_5) begin // @[hbfp.scala 281:29]
      two_complement_5 <= _two_complement_5_T_4;
    end else begin
      two_complement_5 <= _two_complement_5_T_1;
    end
    if (reset) begin // @[hbfp.scala 266:51]
      two_complement_6 <= 6'h0; // @[hbfp.scala 266:51]
    end else if (signs_6) begin // @[hbfp.scala 281:29]
      two_complement_6 <= _two_complement_6_T_4;
    end else begin
      two_complement_6 <= _two_complement_6_T_1;
    end
    if (reset) begin // @[hbfp.scala 266:51]
      two_complement_7 <= 6'h0; // @[hbfp.scala 266:51]
    end else if (signs_7) begin // @[hbfp.scala 281:29]
      two_complement_7 <= _two_complement_7_T_4;
    end else begin
      two_complement_7 <= _two_complement_7_T_1;
    end
    if (reset) begin // @[hbfp.scala 266:51]
      two_complement_8 <= 6'h0; // @[hbfp.scala 266:51]
    end else if (signs_8) begin // @[hbfp.scala 281:29]
      two_complement_8 <= _two_complement_8_T_4;
    end else begin
      two_complement_8 <= _two_complement_8_T_1;
    end
    if (reset) begin // @[hbfp.scala 266:51]
      two_complement_9 <= 6'h0; // @[hbfp.scala 266:51]
    end else if (signs_9) begin // @[hbfp.scala 281:29]
      two_complement_9 <= _two_complement_9_T_4;
    end else begin
      two_complement_9 <= _two_complement_9_T_1;
    end
    if (reset) begin // @[hbfp.scala 266:51]
      two_complement_10 <= 6'h0; // @[hbfp.scala 266:51]
    end else if (signs_10) begin // @[hbfp.scala 281:29]
      two_complement_10 <= _two_complement_10_T_4;
    end else begin
      two_complement_10 <= _two_complement_10_T_1;
    end
    if (reset) begin // @[hbfp.scala 266:51]
      two_complement_11 <= 6'h0; // @[hbfp.scala 266:51]
    end else if (signs_11) begin // @[hbfp.scala 281:29]
      two_complement_11 <= _two_complement_11_T_4;
    end else begin
      two_complement_11 <= _two_complement_11_T_1;
    end
    if (reset) begin // @[hbfp.scala 266:51]
      two_complement_12 <= 6'h0; // @[hbfp.scala 266:51]
    end else if (signs_12) begin // @[hbfp.scala 281:29]
      two_complement_12 <= _two_complement_12_T_4;
    end else begin
      two_complement_12 <= _two_complement_12_T_1;
    end
    if (reset) begin // @[hbfp.scala 266:51]
      two_complement_13 <= 6'h0; // @[hbfp.scala 266:51]
    end else if (signs_13) begin // @[hbfp.scala 281:29]
      two_complement_13 <= _two_complement_13_T_4;
    end else begin
      two_complement_13 <= _two_complement_13_T_1;
    end
    if (reset) begin // @[hbfp.scala 266:51]
      two_complement_14 <= 6'h0; // @[hbfp.scala 266:51]
    end else if (signs_14) begin // @[hbfp.scala 281:29]
      two_complement_14 <= _two_complement_14_T_4;
    end else begin
      two_complement_14 <= _two_complement_14_T_1;
    end
    if (reset) begin // @[hbfp.scala 266:51]
      two_complement_15 <= 6'h0; // @[hbfp.scala 266:51]
    end else if (signs_15) begin // @[hbfp.scala 281:29]
      two_complement_15 <= _two_complement_15_T_4;
    end else begin
      two_complement_15 <= _two_complement_15_T_1;
    end
    if (reset) begin // @[hbfp.scala 267:42]
      signs_0 <= 1'h0; // @[hbfp.scala 267:42]
    end else begin
      signs_0 <= signReg ^ io_sign_b_0; // @[hbfp.scala 280:14]
    end
    if (reset) begin // @[hbfp.scala 267:42]
      signs_1 <= 1'h0; // @[hbfp.scala 267:42]
    end else begin
      signs_1 <= signReg_1 ^ io_sign_b_1; // @[hbfp.scala 280:14]
    end
    if (reset) begin // @[hbfp.scala 267:42]
      signs_2 <= 1'h0; // @[hbfp.scala 267:42]
    end else begin
      signs_2 <= signReg_2 ^ io_sign_b_2; // @[hbfp.scala 280:14]
    end
    if (reset) begin // @[hbfp.scala 267:42]
      signs_3 <= 1'h0; // @[hbfp.scala 267:42]
    end else begin
      signs_3 <= signReg_3 ^ io_sign_b_3; // @[hbfp.scala 280:14]
    end
    if (reset) begin // @[hbfp.scala 267:42]
      signs_4 <= 1'h0; // @[hbfp.scala 267:42]
    end else begin
      signs_4 <= signReg_4 ^ io_sign_b_4; // @[hbfp.scala 280:14]
    end
    if (reset) begin // @[hbfp.scala 267:42]
      signs_5 <= 1'h0; // @[hbfp.scala 267:42]
    end else begin
      signs_5 <= signReg_5 ^ io_sign_b_5; // @[hbfp.scala 280:14]
    end
    if (reset) begin // @[hbfp.scala 267:42]
      signs_6 <= 1'h0; // @[hbfp.scala 267:42]
    end else begin
      signs_6 <= signReg_6 ^ io_sign_b_6; // @[hbfp.scala 280:14]
    end
    if (reset) begin // @[hbfp.scala 267:42]
      signs_7 <= 1'h0; // @[hbfp.scala 267:42]
    end else begin
      signs_7 <= signReg_7 ^ io_sign_b_7; // @[hbfp.scala 280:14]
    end
    if (reset) begin // @[hbfp.scala 267:42]
      signs_8 <= 1'h0; // @[hbfp.scala 267:42]
    end else begin
      signs_8 <= signReg_8 ^ io_sign_b_8; // @[hbfp.scala 280:14]
    end
    if (reset) begin // @[hbfp.scala 267:42]
      signs_9 <= 1'h0; // @[hbfp.scala 267:42]
    end else begin
      signs_9 <= signReg_9 ^ io_sign_b_9; // @[hbfp.scala 280:14]
    end
    if (reset) begin // @[hbfp.scala 267:42]
      signs_10 <= 1'h0; // @[hbfp.scala 267:42]
    end else begin
      signs_10 <= signReg_10 ^ io_sign_b_10; // @[hbfp.scala 280:14]
    end
    if (reset) begin // @[hbfp.scala 267:42]
      signs_11 <= 1'h0; // @[hbfp.scala 267:42]
    end else begin
      signs_11 <= signReg_11 ^ io_sign_b_11; // @[hbfp.scala 280:14]
    end
    if (reset) begin // @[hbfp.scala 267:42]
      signs_12 <= 1'h0; // @[hbfp.scala 267:42]
    end else begin
      signs_12 <= signReg_12 ^ io_sign_b_12; // @[hbfp.scala 280:14]
    end
    if (reset) begin // @[hbfp.scala 267:42]
      signs_13 <= 1'h0; // @[hbfp.scala 267:42]
    end else begin
      signs_13 <= signReg_13 ^ io_sign_b_13; // @[hbfp.scala 280:14]
    end
    if (reset) begin // @[hbfp.scala 267:42]
      signs_14 <= 1'h0; // @[hbfp.scala 267:42]
    end else begin
      signs_14 <= signReg_14 ^ io_sign_b_14; // @[hbfp.scala 280:14]
    end
    if (reset) begin // @[hbfp.scala 267:42]
      signs_15 <= 1'h0; // @[hbfp.scala 267:42]
    end else begin
      signs_15 <= signReg_15 ^ io_sign_b_15; // @[hbfp.scala 280:14]
    end
    acc_hbfp <= _GEN_50[5:0]; // @[hbfp.scala 269:{25,25} 290:12]
    if (reset) begin // @[hbfp.scala 274:32]
      multiplierReg <= 5'h0; // @[hbfp.scala 274:32]
    end else begin
      multiplierReg <= io_man_a_0; // @[hbfp.scala 277:19]
    end
    if (reset) begin // @[hbfp.scala 275:26]
      signReg <= 1'h0; // @[hbfp.scala 275:26]
    end else begin
      signReg <= io_sign_a_0; // @[hbfp.scala 276:13]
    end
    if (reset) begin // @[hbfp.scala 274:32]
      multiplierReg_1 <= 5'h0; // @[hbfp.scala 274:32]
    end else begin
      multiplierReg_1 <= io_man_a_1; // @[hbfp.scala 277:19]
    end
    if (reset) begin // @[hbfp.scala 275:26]
      signReg_1 <= 1'h0; // @[hbfp.scala 275:26]
    end else begin
      signReg_1 <= io_sign_a_1; // @[hbfp.scala 276:13]
    end
    if (reset) begin // @[hbfp.scala 274:32]
      multiplierReg_2 <= 5'h0; // @[hbfp.scala 274:32]
    end else begin
      multiplierReg_2 <= io_man_a_2; // @[hbfp.scala 277:19]
    end
    if (reset) begin // @[hbfp.scala 275:26]
      signReg_2 <= 1'h0; // @[hbfp.scala 275:26]
    end else begin
      signReg_2 <= io_sign_a_2; // @[hbfp.scala 276:13]
    end
    if (reset) begin // @[hbfp.scala 274:32]
      multiplierReg_3 <= 5'h0; // @[hbfp.scala 274:32]
    end else begin
      multiplierReg_3 <= io_man_a_3; // @[hbfp.scala 277:19]
    end
    if (reset) begin // @[hbfp.scala 275:26]
      signReg_3 <= 1'h0; // @[hbfp.scala 275:26]
    end else begin
      signReg_3 <= io_sign_a_3; // @[hbfp.scala 276:13]
    end
    if (reset) begin // @[hbfp.scala 274:32]
      multiplierReg_4 <= 5'h0; // @[hbfp.scala 274:32]
    end else begin
      multiplierReg_4 <= io_man_a_4; // @[hbfp.scala 277:19]
    end
    if (reset) begin // @[hbfp.scala 275:26]
      signReg_4 <= 1'h0; // @[hbfp.scala 275:26]
    end else begin
      signReg_4 <= io_sign_a_4; // @[hbfp.scala 276:13]
    end
    if (reset) begin // @[hbfp.scala 274:32]
      multiplierReg_5 <= 5'h0; // @[hbfp.scala 274:32]
    end else begin
      multiplierReg_5 <= io_man_a_5; // @[hbfp.scala 277:19]
    end
    if (reset) begin // @[hbfp.scala 275:26]
      signReg_5 <= 1'h0; // @[hbfp.scala 275:26]
    end else begin
      signReg_5 <= io_sign_a_5; // @[hbfp.scala 276:13]
    end
    if (reset) begin // @[hbfp.scala 274:32]
      multiplierReg_6 <= 5'h0; // @[hbfp.scala 274:32]
    end else begin
      multiplierReg_6 <= io_man_a_6; // @[hbfp.scala 277:19]
    end
    if (reset) begin // @[hbfp.scala 275:26]
      signReg_6 <= 1'h0; // @[hbfp.scala 275:26]
    end else begin
      signReg_6 <= io_sign_a_6; // @[hbfp.scala 276:13]
    end
    if (reset) begin // @[hbfp.scala 274:32]
      multiplierReg_7 <= 5'h0; // @[hbfp.scala 274:32]
    end else begin
      multiplierReg_7 <= io_man_a_7; // @[hbfp.scala 277:19]
    end
    if (reset) begin // @[hbfp.scala 275:26]
      signReg_7 <= 1'h0; // @[hbfp.scala 275:26]
    end else begin
      signReg_7 <= io_sign_a_7; // @[hbfp.scala 276:13]
    end
    if (reset) begin // @[hbfp.scala 274:32]
      multiplierReg_8 <= 5'h0; // @[hbfp.scala 274:32]
    end else begin
      multiplierReg_8 <= io_man_a_8; // @[hbfp.scala 277:19]
    end
    if (reset) begin // @[hbfp.scala 275:26]
      signReg_8 <= 1'h0; // @[hbfp.scala 275:26]
    end else begin
      signReg_8 <= io_sign_a_8; // @[hbfp.scala 276:13]
    end
    if (reset) begin // @[hbfp.scala 274:32]
      multiplierReg_9 <= 5'h0; // @[hbfp.scala 274:32]
    end else begin
      multiplierReg_9 <= io_man_a_9; // @[hbfp.scala 277:19]
    end
    if (reset) begin // @[hbfp.scala 275:26]
      signReg_9 <= 1'h0; // @[hbfp.scala 275:26]
    end else begin
      signReg_9 <= io_sign_a_9; // @[hbfp.scala 276:13]
    end
    if (reset) begin // @[hbfp.scala 274:32]
      multiplierReg_10 <= 5'h0; // @[hbfp.scala 274:32]
    end else begin
      multiplierReg_10 <= io_man_a_10; // @[hbfp.scala 277:19]
    end
    if (reset) begin // @[hbfp.scala 275:26]
      signReg_10 <= 1'h0; // @[hbfp.scala 275:26]
    end else begin
      signReg_10 <= io_sign_a_10; // @[hbfp.scala 276:13]
    end
    if (reset) begin // @[hbfp.scala 274:32]
      multiplierReg_11 <= 5'h0; // @[hbfp.scala 274:32]
    end else begin
      multiplierReg_11 <= io_man_a_11; // @[hbfp.scala 277:19]
    end
    if (reset) begin // @[hbfp.scala 275:26]
      signReg_11 <= 1'h0; // @[hbfp.scala 275:26]
    end else begin
      signReg_11 <= io_sign_a_11; // @[hbfp.scala 276:13]
    end
    if (reset) begin // @[hbfp.scala 274:32]
      multiplierReg_12 <= 5'h0; // @[hbfp.scala 274:32]
    end else begin
      multiplierReg_12 <= io_man_a_12; // @[hbfp.scala 277:19]
    end
    if (reset) begin // @[hbfp.scala 275:26]
      signReg_12 <= 1'h0; // @[hbfp.scala 275:26]
    end else begin
      signReg_12 <= io_sign_a_12; // @[hbfp.scala 276:13]
    end
    if (reset) begin // @[hbfp.scala 274:32]
      multiplierReg_13 <= 5'h0; // @[hbfp.scala 274:32]
    end else begin
      multiplierReg_13 <= io_man_a_13; // @[hbfp.scala 277:19]
    end
    if (reset) begin // @[hbfp.scala 275:26]
      signReg_13 <= 1'h0; // @[hbfp.scala 275:26]
    end else begin
      signReg_13 <= io_sign_a_13; // @[hbfp.scala 276:13]
    end
    if (reset) begin // @[hbfp.scala 274:32]
      multiplierReg_14 <= 5'h0; // @[hbfp.scala 274:32]
    end else begin
      multiplierReg_14 <= io_man_a_14; // @[hbfp.scala 277:19]
    end
    if (reset) begin // @[hbfp.scala 275:26]
      signReg_14 <= 1'h0; // @[hbfp.scala 275:26]
    end else begin
      signReg_14 <= io_sign_a_14; // @[hbfp.scala 276:13]
    end
    if (reset) begin // @[hbfp.scala 274:32]
      multiplierReg_15 <= 5'h0; // @[hbfp.scala 274:32]
    end else begin
      multiplierReg_15 <= io_man_a_15; // @[hbfp.scala 277:19]
    end
    if (reset) begin // @[hbfp.scala 275:26]
      signReg_15 <= 1'h0; // @[hbfp.scala 275:26]
    end else begin
      signReg_15 <= io_sign_a_15; // @[hbfp.scala 276:13]
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  dotProductRegs_0 = _RAND_0[4:0];
  _RAND_1 = {1{`RANDOM}};
  dotProductRegs_1 = _RAND_1[4:0];
  _RAND_2 = {1{`RANDOM}};
  dotProductRegs_2 = _RAND_2[4:0];
  _RAND_3 = {1{`RANDOM}};
  dotProductRegs_3 = _RAND_3[4:0];
  _RAND_4 = {1{`RANDOM}};
  dotProductRegs_4 = _RAND_4[4:0];
  _RAND_5 = {1{`RANDOM}};
  dotProductRegs_5 = _RAND_5[4:0];
  _RAND_6 = {1{`RANDOM}};
  dotProductRegs_6 = _RAND_6[4:0];
  _RAND_7 = {1{`RANDOM}};
  dotProductRegs_7 = _RAND_7[4:0];
  _RAND_8 = {1{`RANDOM}};
  dotProductRegs_8 = _RAND_8[4:0];
  _RAND_9 = {1{`RANDOM}};
  dotProductRegs_9 = _RAND_9[4:0];
  _RAND_10 = {1{`RANDOM}};
  dotProductRegs_10 = _RAND_10[4:0];
  _RAND_11 = {1{`RANDOM}};
  dotProductRegs_11 = _RAND_11[4:0];
  _RAND_12 = {1{`RANDOM}};
  dotProductRegs_12 = _RAND_12[4:0];
  _RAND_13 = {1{`RANDOM}};
  dotProductRegs_13 = _RAND_13[4:0];
  _RAND_14 = {1{`RANDOM}};
  dotProductRegs_14 = _RAND_14[4:0];
  _RAND_15 = {1{`RANDOM}};
  dotProductRegs_15 = _RAND_15[4:0];
  _RAND_16 = {1{`RANDOM}};
  two_complement_buffer_0 = _RAND_16[5:0];
  _RAND_17 = {1{`RANDOM}};
  two_complement_buffer_1 = _RAND_17[5:0];
  _RAND_18 = {1{`RANDOM}};
  two_complement_buffer_2 = _RAND_18[5:0];
  _RAND_19 = {1{`RANDOM}};
  two_complement_buffer_3 = _RAND_19[5:0];
  _RAND_20 = {1{`RANDOM}};
  two_complement_buffer_4 = _RAND_20[5:0];
  _RAND_21 = {1{`RANDOM}};
  two_complement_buffer_5 = _RAND_21[5:0];
  _RAND_22 = {1{`RANDOM}};
  two_complement_buffer_6 = _RAND_22[5:0];
  _RAND_23 = {1{`RANDOM}};
  two_complement_buffer_7 = _RAND_23[5:0];
  _RAND_24 = {1{`RANDOM}};
  two_complement_buffer_8 = _RAND_24[5:0];
  _RAND_25 = {1{`RANDOM}};
  two_complement_buffer_9 = _RAND_25[5:0];
  _RAND_26 = {1{`RANDOM}};
  two_complement_buffer_10 = _RAND_26[5:0];
  _RAND_27 = {1{`RANDOM}};
  two_complement_buffer_11 = _RAND_27[5:0];
  _RAND_28 = {1{`RANDOM}};
  two_complement_buffer_12 = _RAND_28[5:0];
  _RAND_29 = {1{`RANDOM}};
  two_complement_buffer_13 = _RAND_29[5:0];
  _RAND_30 = {1{`RANDOM}};
  two_complement_buffer_14 = _RAND_30[5:0];
  _RAND_31 = {1{`RANDOM}};
  two_complement_buffer_15 = _RAND_31[5:0];
  _RAND_32 = {1{`RANDOM}};
  two_complement_0 = _RAND_32[5:0];
  _RAND_33 = {1{`RANDOM}};
  two_complement_1 = _RAND_33[5:0];
  _RAND_34 = {1{`RANDOM}};
  two_complement_2 = _RAND_34[5:0];
  _RAND_35 = {1{`RANDOM}};
  two_complement_3 = _RAND_35[5:0];
  _RAND_36 = {1{`RANDOM}};
  two_complement_4 = _RAND_36[5:0];
  _RAND_37 = {1{`RANDOM}};
  two_complement_5 = _RAND_37[5:0];
  _RAND_38 = {1{`RANDOM}};
  two_complement_6 = _RAND_38[5:0];
  _RAND_39 = {1{`RANDOM}};
  two_complement_7 = _RAND_39[5:0];
  _RAND_40 = {1{`RANDOM}};
  two_complement_8 = _RAND_40[5:0];
  _RAND_41 = {1{`RANDOM}};
  two_complement_9 = _RAND_41[5:0];
  _RAND_42 = {1{`RANDOM}};
  two_complement_10 = _RAND_42[5:0];
  _RAND_43 = {1{`RANDOM}};
  two_complement_11 = _RAND_43[5:0];
  _RAND_44 = {1{`RANDOM}};
  two_complement_12 = _RAND_44[5:0];
  _RAND_45 = {1{`RANDOM}};
  two_complement_13 = _RAND_45[5:0];
  _RAND_46 = {1{`RANDOM}};
  two_complement_14 = _RAND_46[5:0];
  _RAND_47 = {1{`RANDOM}};
  two_complement_15 = _RAND_47[5:0];
  _RAND_48 = {1{`RANDOM}};
  signs_0 = _RAND_48[0:0];
  _RAND_49 = {1{`RANDOM}};
  signs_1 = _RAND_49[0:0];
  _RAND_50 = {1{`RANDOM}};
  signs_2 = _RAND_50[0:0];
  _RAND_51 = {1{`RANDOM}};
  signs_3 = _RAND_51[0:0];
  _RAND_52 = {1{`RANDOM}};
  signs_4 = _RAND_52[0:0];
  _RAND_53 = {1{`RANDOM}};
  signs_5 = _RAND_53[0:0];
  _RAND_54 = {1{`RANDOM}};
  signs_6 = _RAND_54[0:0];
  _RAND_55 = {1{`RANDOM}};
  signs_7 = _RAND_55[0:0];
  _RAND_56 = {1{`RANDOM}};
  signs_8 = _RAND_56[0:0];
  _RAND_57 = {1{`RANDOM}};
  signs_9 = _RAND_57[0:0];
  _RAND_58 = {1{`RANDOM}};
  signs_10 = _RAND_58[0:0];
  _RAND_59 = {1{`RANDOM}};
  signs_11 = _RAND_59[0:0];
  _RAND_60 = {1{`RANDOM}};
  signs_12 = _RAND_60[0:0];
  _RAND_61 = {1{`RANDOM}};
  signs_13 = _RAND_61[0:0];
  _RAND_62 = {1{`RANDOM}};
  signs_14 = _RAND_62[0:0];
  _RAND_63 = {1{`RANDOM}};
  signs_15 = _RAND_63[0:0];
  _RAND_64 = {1{`RANDOM}};
  acc_hbfp = _RAND_64[5:0];
  _RAND_65 = {1{`RANDOM}};
  multiplierReg = _RAND_65[4:0];
  _RAND_66 = {1{`RANDOM}};
  signReg = _RAND_66[0:0];
  _RAND_67 = {1{`RANDOM}};
  multiplierReg_1 = _RAND_67[4:0];
  _RAND_68 = {1{`RANDOM}};
  signReg_1 = _RAND_68[0:0];
  _RAND_69 = {1{`RANDOM}};
  multiplierReg_2 = _RAND_69[4:0];
  _RAND_70 = {1{`RANDOM}};
  signReg_2 = _RAND_70[0:0];
  _RAND_71 = {1{`RANDOM}};
  multiplierReg_3 = _RAND_71[4:0];
  _RAND_72 = {1{`RANDOM}};
  signReg_3 = _RAND_72[0:0];
  _RAND_73 = {1{`RANDOM}};
  multiplierReg_4 = _RAND_73[4:0];
  _RAND_74 = {1{`RANDOM}};
  signReg_4 = _RAND_74[0:0];
  _RAND_75 = {1{`RANDOM}};
  multiplierReg_5 = _RAND_75[4:0];
  _RAND_76 = {1{`RANDOM}};
  signReg_5 = _RAND_76[0:0];
  _RAND_77 = {1{`RANDOM}};
  multiplierReg_6 = _RAND_77[4:0];
  _RAND_78 = {1{`RANDOM}};
  signReg_6 = _RAND_78[0:0];
  _RAND_79 = {1{`RANDOM}};
  multiplierReg_7 = _RAND_79[4:0];
  _RAND_80 = {1{`RANDOM}};
  signReg_7 = _RAND_80[0:0];
  _RAND_81 = {1{`RANDOM}};
  multiplierReg_8 = _RAND_81[4:0];
  _RAND_82 = {1{`RANDOM}};
  signReg_8 = _RAND_82[0:0];
  _RAND_83 = {1{`RANDOM}};
  multiplierReg_9 = _RAND_83[4:0];
  _RAND_84 = {1{`RANDOM}};
  signReg_9 = _RAND_84[0:0];
  _RAND_85 = {1{`RANDOM}};
  multiplierReg_10 = _RAND_85[4:0];
  _RAND_86 = {1{`RANDOM}};
  signReg_10 = _RAND_86[0:0];
  _RAND_87 = {1{`RANDOM}};
  multiplierReg_11 = _RAND_87[4:0];
  _RAND_88 = {1{`RANDOM}};
  signReg_11 = _RAND_88[0:0];
  _RAND_89 = {1{`RANDOM}};
  multiplierReg_12 = _RAND_89[4:0];
  _RAND_90 = {1{`RANDOM}};
  signReg_12 = _RAND_90[0:0];
  _RAND_91 = {1{`RANDOM}};
  multiplierReg_13 = _RAND_91[4:0];
  _RAND_92 = {1{`RANDOM}};
  signReg_13 = _RAND_92[0:0];
  _RAND_93 = {1{`RANDOM}};
  multiplierReg_14 = _RAND_93[4:0];
  _RAND_94 = {1{`RANDOM}};
  signReg_14 = _RAND_94[0:0];
  _RAND_95 = {1{`RANDOM}};
  multiplierReg_15 = _RAND_95[4:0];
  _RAND_96 = {1{`RANDOM}};
  signReg_15 = _RAND_96[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
