module Multiplier(
  input  [3:0] io_in_a,
  input  [3:0] io_in_b,
  output [7:0] io_out
);
  assign io_out = io_in_a * io_in_b; // @[HBFP_MAC_MIXMAN_4x4.scala 78:23]
endmodule
module HBFP_MAC(
  input        clock,
  input        reset,
  input        io_in_a_sign_0,
  input        io_in_a_sign_1,
  input        io_in_a_sign_2,
  input        io_in_a_sign_3,
  input  [3:0] io_in_a_man_0,
  input  [3:0] io_in_a_man_1,
  input  [3:0] io_in_a_man_2,
  input  [3:0] io_in_a_man_3,
  input  [7:0] io_in_a_exp,
  input        io_in_b_sign_0,
  input        io_in_b_sign_1,
  input        io_in_b_sign_2,
  input        io_in_b_sign_3,
  input  [3:0] io_in_b_man_0,
  input  [3:0] io_in_b_man_1,
  input  [3:0] io_in_b_man_2,
  input  [3:0] io_in_b_man_3,
  input  [7:0] io_in_b_exp,
  input        io_in_flag,
  output       io_out_result_sign,
  output [3:0] io_out_result_man,
  output [7:0] io_out_result_exp
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
`endif // RANDOMIZE_REG_INIT
  wire [3:0] multiplier_1_io_in_a; // @[HBFP_MAC_MIXMAN_4x4.scala 37:32]
  wire [3:0] multiplier_1_io_in_b; // @[HBFP_MAC_MIXMAN_4x4.scala 37:32]
  wire [7:0] multiplier_1_io_out; // @[HBFP_MAC_MIXMAN_4x4.scala 37:32]
  wire [3:0] multiplier_2_io_in_a; // @[HBFP_MAC_MIXMAN_4x4.scala 38:32]
  wire [3:0] multiplier_2_io_in_b; // @[HBFP_MAC_MIXMAN_4x4.scala 38:32]
  wire [7:0] multiplier_2_io_out; // @[HBFP_MAC_MIXMAN_4x4.scala 38:32]
  wire [3:0] multiplier_3_io_in_a; // @[HBFP_MAC_MIXMAN_4x4.scala 39:32]
  wire [3:0] multiplier_3_io_in_b; // @[HBFP_MAC_MIXMAN_4x4.scala 39:32]
  wire [7:0] multiplier_3_io_out; // @[HBFP_MAC_MIXMAN_4x4.scala 39:32]
  wire [3:0] multiplier_4_io_in_a; // @[HBFP_MAC_MIXMAN_4x4.scala 40:32]
  wire [3:0] multiplier_4_io_in_b; // @[HBFP_MAC_MIXMAN_4x4.scala 40:32]
  wire [7:0] multiplier_4_io_out; // @[HBFP_MAC_MIXMAN_4x4.scala 40:32]
  wire [3:0] multiplier_1_1_io_in_a; // @[HBFP_MAC_MIXMAN_4x4.scala 37:32]
  wire [3:0] multiplier_1_1_io_in_b; // @[HBFP_MAC_MIXMAN_4x4.scala 37:32]
  wire [7:0] multiplier_1_1_io_out; // @[HBFP_MAC_MIXMAN_4x4.scala 37:32]
  wire [3:0] multiplier_2_1_io_in_a; // @[HBFP_MAC_MIXMAN_4x4.scala 38:32]
  wire [3:0] multiplier_2_1_io_in_b; // @[HBFP_MAC_MIXMAN_4x4.scala 38:32]
  wire [7:0] multiplier_2_1_io_out; // @[HBFP_MAC_MIXMAN_4x4.scala 38:32]
  wire [3:0] multiplier_3_1_io_in_a; // @[HBFP_MAC_MIXMAN_4x4.scala 39:32]
  wire [3:0] multiplier_3_1_io_in_b; // @[HBFP_MAC_MIXMAN_4x4.scala 39:32]
  wire [7:0] multiplier_3_1_io_out; // @[HBFP_MAC_MIXMAN_4x4.scala 39:32]
  wire [3:0] multiplier_4_1_io_in_a; // @[HBFP_MAC_MIXMAN_4x4.scala 40:32]
  wire [3:0] multiplier_4_1_io_in_b; // @[HBFP_MAC_MIXMAN_4x4.scala 40:32]
  wire [7:0] multiplier_4_1_io_out; // @[HBFP_MAC_MIXMAN_4x4.scala 40:32]
  wire [3:0] multiplier_1_2_io_in_a; // @[HBFP_MAC_MIXMAN_4x4.scala 37:32]
  wire [3:0] multiplier_1_2_io_in_b; // @[HBFP_MAC_MIXMAN_4x4.scala 37:32]
  wire [7:0] multiplier_1_2_io_out; // @[HBFP_MAC_MIXMAN_4x4.scala 37:32]
  wire [3:0] multiplier_2_2_io_in_a; // @[HBFP_MAC_MIXMAN_4x4.scala 38:32]
  wire [3:0] multiplier_2_2_io_in_b; // @[HBFP_MAC_MIXMAN_4x4.scala 38:32]
  wire [7:0] multiplier_2_2_io_out; // @[HBFP_MAC_MIXMAN_4x4.scala 38:32]
  wire [3:0] multiplier_3_2_io_in_a; // @[HBFP_MAC_MIXMAN_4x4.scala 39:32]
  wire [3:0] multiplier_3_2_io_in_b; // @[HBFP_MAC_MIXMAN_4x4.scala 39:32]
  wire [7:0] multiplier_3_2_io_out; // @[HBFP_MAC_MIXMAN_4x4.scala 39:32]
  wire [3:0] multiplier_4_2_io_in_a; // @[HBFP_MAC_MIXMAN_4x4.scala 40:32]
  wire [3:0] multiplier_4_2_io_in_b; // @[HBFP_MAC_MIXMAN_4x4.scala 40:32]
  wire [7:0] multiplier_4_2_io_out; // @[HBFP_MAC_MIXMAN_4x4.scala 40:32]
  wire [3:0] multiplier_1_3_io_in_a; // @[HBFP_MAC_MIXMAN_4x4.scala 37:32]
  wire [3:0] multiplier_1_3_io_in_b; // @[HBFP_MAC_MIXMAN_4x4.scala 37:32]
  wire [7:0] multiplier_1_3_io_out; // @[HBFP_MAC_MIXMAN_4x4.scala 37:32]
  wire [3:0] multiplier_2_3_io_in_a; // @[HBFP_MAC_MIXMAN_4x4.scala 38:32]
  wire [3:0] multiplier_2_3_io_in_b; // @[HBFP_MAC_MIXMAN_4x4.scala 38:32]
  wire [7:0] multiplier_2_3_io_out; // @[HBFP_MAC_MIXMAN_4x4.scala 38:32]
  wire [3:0] multiplier_3_3_io_in_a; // @[HBFP_MAC_MIXMAN_4x4.scala 39:32]
  wire [3:0] multiplier_3_3_io_in_b; // @[HBFP_MAC_MIXMAN_4x4.scala 39:32]
  wire [7:0] multiplier_3_3_io_out; // @[HBFP_MAC_MIXMAN_4x4.scala 39:32]
  wire [3:0] multiplier_4_3_io_in_a; // @[HBFP_MAC_MIXMAN_4x4.scala 40:32]
  wire [3:0] multiplier_4_3_io_in_b; // @[HBFP_MAC_MIXMAN_4x4.scala 40:32]
  wire [7:0] multiplier_4_3_io_out; // @[HBFP_MAC_MIXMAN_4x4.scala 40:32]
  reg [8:0] exp_addition_r; // @[Reg.scala 19:16]
  reg [8:0] exp_addition_r_1; // @[Reg.scala 19:16]
  reg [8:0] exp_addition_r_2; // @[Reg.scala 19:16]
  reg [8:0] exp_addition; // @[Reg.scala 19:16]
  wire [8:0] _io_out_result_exp_T_1 = 9'h100 - 9'h1; // @[HBFP_MAC_MIXMAN_4x4.scala 26:59]
  wire [8:0] _io_out_result_exp_T_5 = exp_addition > _io_out_result_exp_T_1 ? _io_out_result_exp_T_1 : exp_addition; // @[HBFP_MAC_MIXMAN_4x4.scala 26:29]
  reg [3:0] dotProductRegs_0; // @[HBFP_MAC_MIXMAN_4x4.scala 28:53]
  reg [3:0] dotProductRegs_1; // @[HBFP_MAC_MIXMAN_4x4.scala 28:53]
  reg [3:0] dotProductRegs_2; // @[HBFP_MAC_MIXMAN_4x4.scala 28:53]
  reg [3:0] dotProductRegs_3; // @[HBFP_MAC_MIXMAN_4x4.scala 28:53]
  reg [4:0] two_complement_buffer_0; // @[HBFP_MAC_MIXMAN_4x4.scala 29:60]
  reg [4:0] two_complement_buffer_1; // @[HBFP_MAC_MIXMAN_4x4.scala 29:60]
  reg [4:0] two_complement_buffer_2; // @[HBFP_MAC_MIXMAN_4x4.scala 29:60]
  reg [4:0] two_complement_buffer_3; // @[HBFP_MAC_MIXMAN_4x4.scala 29:60]
  reg  signs_0; // @[HBFP_MAC_MIXMAN_4x4.scala 30:44]
  reg  signs_1; // @[HBFP_MAC_MIXMAN_4x4.scala 30:44]
  reg  signs_2; // @[HBFP_MAC_MIXMAN_4x4.scala 30:44]
  reg  signs_3; // @[HBFP_MAC_MIXMAN_4x4.scala 30:44]
  reg [7:0] final_result; // @[HBFP_MAC_MIXMAN_4x4.scala 35:33]
  wire [3:0] _multiplier_2_io_in_a_T_2 = {2'h0,io_in_a_man_0[3:2]}; // @[HBFP_MAC_MIXMAN_4x4.scala 44:64]
  wire [3:0] _multiplier_3_io_in_b_T_2 = {2'h0,io_in_b_man_0[3:2]}; // @[HBFP_MAC_MIXMAN_4x4.scala 47:64]
  wire [8:0] _final_result_T_1 = multiplier_2_io_out + multiplier_3_io_out; // @[HBFP_MAC_MIXMAN_4x4.scala 51:93]
  wire [12:0] _GEN_8 = {_final_result_T_1, 4'h0}; // @[HBFP_MAC_MIXMAN_4x4.scala 51:117]
  wire [15:0] _final_result_T_2 = {{3'd0}, _GEN_8}; // @[HBFP_MAC_MIXMAN_4x4.scala 51:117]
  wire [15:0] _GEN_9 = {{8'd0}, multiplier_1_io_out}; // @[HBFP_MAC_MIXMAN_4x4.scala 51:68]
  wire [16:0] _final_result_T_3 = _GEN_9 + _final_result_T_2; // @[HBFP_MAC_MIXMAN_4x4.scala 51:68]
  wire [15:0] _GEN_10 = {multiplier_4_io_out, 8'h0}; // @[HBFP_MAC_MIXMAN_4x4.scala 51:149]
  wire [22:0] _final_result_T_4 = {{7'd0}, _GEN_10}; // @[HBFP_MAC_MIXMAN_4x4.scala 51:149]
  wire [22:0] _GEN_11 = {{6'd0}, _final_result_T_3}; // @[HBFP_MAC_MIXMAN_4x4.scala 51:125]
  wire [23:0] _final_result_T_5 = _GEN_11 + _final_result_T_4; // @[HBFP_MAC_MIXMAN_4x4.scala 51:125]
  wire [23:0] _final_result_T_6 = io_in_flag ? _final_result_T_5 : {{16'd0}, multiplier_1_io_out}; // @[HBFP_MAC_MIXMAN_4x4.scala 51:26]
  wire [4:0] _dotProductRegs_0_T_2 = 5'h10 - 5'h1; // @[HBFP_MAC_MIXMAN_4x4.scala 53:87]
  wire [7:0] _GEN_12 = {{3'd0}, _dotProductRegs_0_T_2}; // @[HBFP_MAC_MIXMAN_4x4.scala 53:69]
  wire [7:0] _dotProductRegs_0_T_6 = final_result > _GEN_12 ? {{3'd0}, _dotProductRegs_0_T_2} : final_result; // @[HBFP_MAC_MIXMAN_4x4.scala 53:55]
  wire [7:0] _dotProductRegs_0_T_13 = io_in_flag ? _dotProductRegs_0_T_6 : _dotProductRegs_0_T_6; // @[HBFP_MAC_MIXMAN_4x4.scala 53:31]
  reg  signs_0_r; // @[Reg.scala 19:16]
  wire [4:0] _two_complement_buffer_0_T_1 = {1'h0,dotProductRegs_0}; // @[HBFP_MAC_MIXMAN_4x4.scala 55:62]
  wire [4:0] _two_complement_buffer_0_T_2 = ~_two_complement_buffer_0_T_1; // @[HBFP_MAC_MIXMAN_4x4.scala 55:56]
  wire [4:0] _two_complement_buffer_0_T_4 = _two_complement_buffer_0_T_2 + 5'h1; // @[HBFP_MAC_MIXMAN_4x4.scala 55:84]
  wire [4:0] _two_complement_buffer_0_T_7 = signs_0 ? _two_complement_buffer_0_T_4 : _two_complement_buffer_0_T_1; // @[HBFP_MAC_MIXMAN_4x4.scala 55:120]
  reg [7:0] final_result_1; // @[HBFP_MAC_MIXMAN_4x4.scala 35:33]
  wire [3:0] _multiplier_2_io_in_a_T_6 = {2'h0,io_in_a_man_1[3:2]}; // @[HBFP_MAC_MIXMAN_4x4.scala 44:64]
  wire [3:0] _multiplier_3_io_in_b_T_6 = {2'h0,io_in_b_man_1[3:2]}; // @[HBFP_MAC_MIXMAN_4x4.scala 47:64]
  wire [8:0] _final_result_T_8 = multiplier_2_1_io_out + multiplier_3_1_io_out; // @[HBFP_MAC_MIXMAN_4x4.scala 51:93]
  wire [12:0] _GEN_14 = {_final_result_T_8, 4'h0}; // @[HBFP_MAC_MIXMAN_4x4.scala 51:117]
  wire [15:0] _final_result_T_9 = {{3'd0}, _GEN_14}; // @[HBFP_MAC_MIXMAN_4x4.scala 51:117]
  wire [15:0] _GEN_15 = {{8'd0}, multiplier_1_1_io_out}; // @[HBFP_MAC_MIXMAN_4x4.scala 51:68]
  wire [16:0] _final_result_T_10 = _GEN_15 + _final_result_T_9; // @[HBFP_MAC_MIXMAN_4x4.scala 51:68]
  wire [15:0] _GEN_16 = {multiplier_4_1_io_out, 8'h0}; // @[HBFP_MAC_MIXMAN_4x4.scala 51:149]
  wire [22:0] _final_result_T_11 = {{7'd0}, _GEN_16}; // @[HBFP_MAC_MIXMAN_4x4.scala 51:149]
  wire [22:0] _GEN_17 = {{6'd0}, _final_result_T_10}; // @[HBFP_MAC_MIXMAN_4x4.scala 51:125]
  wire [23:0] _final_result_T_12 = _GEN_17 + _final_result_T_11; // @[HBFP_MAC_MIXMAN_4x4.scala 51:125]
  wire [23:0] _final_result_T_13 = io_in_flag ? _final_result_T_12 : {{16'd0}, multiplier_1_1_io_out}; // @[HBFP_MAC_MIXMAN_4x4.scala 51:26]
  wire [7:0] _dotProductRegs_1_T_6 = final_result_1 > _GEN_12 ? {{3'd0}, _dotProductRegs_0_T_2} : final_result_1; // @[HBFP_MAC_MIXMAN_4x4.scala 53:55]
  wire [7:0] _dotProductRegs_1_T_13 = io_in_flag ? _dotProductRegs_1_T_6 : _dotProductRegs_1_T_6; // @[HBFP_MAC_MIXMAN_4x4.scala 53:31]
  reg  signs_1_r; // @[Reg.scala 19:16]
  wire [4:0] _two_complement_buffer_1_T_1 = {1'h0,dotProductRegs_1}; // @[HBFP_MAC_MIXMAN_4x4.scala 55:62]
  wire [4:0] _two_complement_buffer_1_T_2 = ~_two_complement_buffer_1_T_1; // @[HBFP_MAC_MIXMAN_4x4.scala 55:56]
  wire [4:0] _two_complement_buffer_1_T_4 = _two_complement_buffer_1_T_2 + 5'h1; // @[HBFP_MAC_MIXMAN_4x4.scala 55:84]
  wire [4:0] _two_complement_buffer_1_T_7 = signs_1 ? _two_complement_buffer_1_T_4 : _two_complement_buffer_1_T_1; // @[HBFP_MAC_MIXMAN_4x4.scala 55:120]
  reg [7:0] final_result_2; // @[HBFP_MAC_MIXMAN_4x4.scala 35:33]
  wire [3:0] _multiplier_2_io_in_a_T_10 = {2'h0,io_in_a_man_2[3:2]}; // @[HBFP_MAC_MIXMAN_4x4.scala 44:64]
  wire [3:0] _multiplier_3_io_in_b_T_10 = {2'h0,io_in_b_man_2[3:2]}; // @[HBFP_MAC_MIXMAN_4x4.scala 47:64]
  wire [8:0] _final_result_T_15 = multiplier_2_2_io_out + multiplier_3_2_io_out; // @[HBFP_MAC_MIXMAN_4x4.scala 51:93]
  wire [12:0] _GEN_20 = {_final_result_T_15, 4'h0}; // @[HBFP_MAC_MIXMAN_4x4.scala 51:117]
  wire [15:0] _final_result_T_16 = {{3'd0}, _GEN_20}; // @[HBFP_MAC_MIXMAN_4x4.scala 51:117]
  wire [15:0] _GEN_21 = {{8'd0}, multiplier_1_2_io_out}; // @[HBFP_MAC_MIXMAN_4x4.scala 51:68]
  wire [16:0] _final_result_T_17 = _GEN_21 + _final_result_T_16; // @[HBFP_MAC_MIXMAN_4x4.scala 51:68]
  wire [15:0] _GEN_22 = {multiplier_4_2_io_out, 8'h0}; // @[HBFP_MAC_MIXMAN_4x4.scala 51:149]
  wire [22:0] _final_result_T_18 = {{7'd0}, _GEN_22}; // @[HBFP_MAC_MIXMAN_4x4.scala 51:149]
  wire [22:0] _GEN_23 = {{6'd0}, _final_result_T_17}; // @[HBFP_MAC_MIXMAN_4x4.scala 51:125]
  wire [23:0] _final_result_T_19 = _GEN_23 + _final_result_T_18; // @[HBFP_MAC_MIXMAN_4x4.scala 51:125]
  wire [23:0] _final_result_T_20 = io_in_flag ? _final_result_T_19 : {{16'd0}, multiplier_1_2_io_out}; // @[HBFP_MAC_MIXMAN_4x4.scala 51:26]
  wire [7:0] _dotProductRegs_2_T_6 = final_result_2 > _GEN_12 ? {{3'd0}, _dotProductRegs_0_T_2} : final_result_2; // @[HBFP_MAC_MIXMAN_4x4.scala 53:55]
  wire [7:0] _dotProductRegs_2_T_13 = io_in_flag ? _dotProductRegs_2_T_6 : _dotProductRegs_2_T_6; // @[HBFP_MAC_MIXMAN_4x4.scala 53:31]
  reg  signs_2_r; // @[Reg.scala 19:16]
  wire [4:0] _two_complement_buffer_2_T_1 = {1'h0,dotProductRegs_2}; // @[HBFP_MAC_MIXMAN_4x4.scala 55:62]
  wire [4:0] _two_complement_buffer_2_T_2 = ~_two_complement_buffer_2_T_1; // @[HBFP_MAC_MIXMAN_4x4.scala 55:56]
  wire [4:0] _two_complement_buffer_2_T_4 = _two_complement_buffer_2_T_2 + 5'h1; // @[HBFP_MAC_MIXMAN_4x4.scala 55:84]
  wire [4:0] _two_complement_buffer_2_T_7 = signs_2 ? _two_complement_buffer_2_T_4 : _two_complement_buffer_2_T_1; // @[HBFP_MAC_MIXMAN_4x4.scala 55:120]
  reg [7:0] final_result_3; // @[HBFP_MAC_MIXMAN_4x4.scala 35:33]
  wire [3:0] _multiplier_2_io_in_a_T_14 = {2'h0,io_in_a_man_3[3:2]}; // @[HBFP_MAC_MIXMAN_4x4.scala 44:64]
  wire [3:0] _multiplier_3_io_in_b_T_14 = {2'h0,io_in_b_man_3[3:2]}; // @[HBFP_MAC_MIXMAN_4x4.scala 47:64]
  wire [8:0] _final_result_T_22 = multiplier_2_3_io_out + multiplier_3_3_io_out; // @[HBFP_MAC_MIXMAN_4x4.scala 51:93]
  wire [12:0] _GEN_26 = {_final_result_T_22, 4'h0}; // @[HBFP_MAC_MIXMAN_4x4.scala 51:117]
  wire [15:0] _final_result_T_23 = {{3'd0}, _GEN_26}; // @[HBFP_MAC_MIXMAN_4x4.scala 51:117]
  wire [15:0] _GEN_27 = {{8'd0}, multiplier_1_3_io_out}; // @[HBFP_MAC_MIXMAN_4x4.scala 51:68]
  wire [16:0] _final_result_T_24 = _GEN_27 + _final_result_T_23; // @[HBFP_MAC_MIXMAN_4x4.scala 51:68]
  wire [15:0] _GEN_28 = {multiplier_4_3_io_out, 8'h0}; // @[HBFP_MAC_MIXMAN_4x4.scala 51:149]
  wire [22:0] _final_result_T_25 = {{7'd0}, _GEN_28}; // @[HBFP_MAC_MIXMAN_4x4.scala 51:149]
  wire [22:0] _GEN_29 = {{6'd0}, _final_result_T_24}; // @[HBFP_MAC_MIXMAN_4x4.scala 51:125]
  wire [23:0] _final_result_T_26 = _GEN_29 + _final_result_T_25; // @[HBFP_MAC_MIXMAN_4x4.scala 51:125]
  wire [23:0] _final_result_T_27 = io_in_flag ? _final_result_T_26 : {{16'd0}, multiplier_1_3_io_out}; // @[HBFP_MAC_MIXMAN_4x4.scala 51:26]
  wire [7:0] _dotProductRegs_3_T_6 = final_result_3 > _GEN_12 ? {{3'd0}, _dotProductRegs_0_T_2} : final_result_3; // @[HBFP_MAC_MIXMAN_4x4.scala 53:55]
  wire [7:0] _dotProductRegs_3_T_13 = io_in_flag ? _dotProductRegs_3_T_6 : _dotProductRegs_3_T_6; // @[HBFP_MAC_MIXMAN_4x4.scala 53:31]
  reg  signs_3_r; // @[Reg.scala 19:16]
  wire [4:0] _two_complement_buffer_3_T_1 = {1'h0,dotProductRegs_3}; // @[HBFP_MAC_MIXMAN_4x4.scala 55:62]
  wire [4:0] _two_complement_buffer_3_T_2 = ~_two_complement_buffer_3_T_1; // @[HBFP_MAC_MIXMAN_4x4.scala 55:56]
  wire [4:0] _two_complement_buffer_3_T_4 = _two_complement_buffer_3_T_2 + 5'h1; // @[HBFP_MAC_MIXMAN_4x4.scala 55:84]
  wire [4:0] _two_complement_buffer_3_T_7 = signs_3 ? _two_complement_buffer_3_T_4 : _two_complement_buffer_3_T_1; // @[HBFP_MAC_MIXMAN_4x4.scala 55:120]
  wire [5:0] _sum_T = $signed(two_complement_buffer_0) + $signed(two_complement_buffer_1); // @[HBFP_MAC_MIXMAN_4x4.scala 58:46]
  wire [5:0] _GEN_32 = {{1{two_complement_buffer_2[4]}},two_complement_buffer_2}; // @[HBFP_MAC_MIXMAN_4x4.scala 58:46]
  wire [6:0] _sum_T_1 = $signed(_sum_T) + $signed(_GEN_32); // @[HBFP_MAC_MIXMAN_4x4.scala 58:46]
  wire [6:0] _GEN_33 = {{2{two_complement_buffer_3[4]}},two_complement_buffer_3}; // @[HBFP_MAC_MIXMAN_4x4.scala 58:46]
  wire [7:0] sum = $signed(_sum_T_1) + $signed(_GEN_33); // @[HBFP_MAC_MIXMAN_4x4.scala 58:46]
  reg [4:0] acc_hbfp; // @[HBFP_MAC_MIXMAN_4x4.scala 60:27]
  wire [6:0] _acc_hbfp_T_3 = ~sum[6:0]; // @[HBFP_MAC_MIXMAN_4x4.scala 63:59]
  wire [6:0] _acc_hbfp_T_5 = _acc_hbfp_T_3 + 7'h1; // @[HBFP_MAC_MIXMAN_4x4.scala 63:88]
  wire [6:0] _GEN_34 = {{2'd0}, _dotProductRegs_0_T_2}; // @[HBFP_MAC_MIXMAN_4x4.scala 63:95]
  wire [5:0] _acc_hbfp_T_10 = 6'h20 - 6'h1; // @[HBFP_MAC_MIXMAN_4x4.scala 63:124]
  wire [4:0] _acc_hbfp_T_12 = {1'h0,sum[3:0]}; // @[HBFP_MAC_MIXMAN_4x4.scala 63:137]
  wire [4:0] _acc_hbfp_T_13 = ~_acc_hbfp_T_12; // @[HBFP_MAC_MIXMAN_4x4.scala 63:131]
  wire [4:0] _acc_hbfp_T_15 = _acc_hbfp_T_13 + 5'h1; // @[HBFP_MAC_MIXMAN_4x4.scala 63:160]
  wire [5:0] _acc_hbfp_T_16 = _acc_hbfp_T_5 > _GEN_34 ? _acc_hbfp_T_10 : {{1'd0}, _acc_hbfp_T_15}; // @[HBFP_MAC_MIXMAN_4x4.scala 63:57]
  wire [4:0] _acc_hbfp_T_25 = sum[6:0] > _GEN_34 ? _dotProductRegs_0_T_2 : _acc_hbfp_T_12; // @[HBFP_MAC_MIXMAN_4x4.scala 64:12]
  wire [5:0] _acc_hbfp_T_26 = sum[7] ? _acc_hbfp_T_16 : {{1'd0}, _acc_hbfp_T_25}; // @[HBFP_MAC_MIXMAN_4x4.scala 63:20]
  wire [4:0] _GEN_36 = {{1'd0}, acc_hbfp[3:0]}; // @[HBFP_MAC_MIXMAN_4x4.scala 67:103]
  wire [4:0] _io_out_result_man_T_9 = _GEN_36 > _dotProductRegs_0_T_2 ? _dotProductRegs_0_T_2 : {{1'd0}, acc_hbfp[3:0]}; // @[HBFP_MAC_MIXMAN_4x4.scala 67:78]
  wire [4:0] _io_out_result_man_T_10 = io_in_flag ? {{1'd0}, acc_hbfp[3:0]} : _io_out_result_man_T_9; // @[HBFP_MAC_MIXMAN_4x4.scala 67:29]
  wire [7:0] _GEN_37 = reset ? 8'h0 : _dotProductRegs_0_T_13; // @[HBFP_MAC_MIXMAN_4x4.scala 28:{53,53} 53:25]
  wire [7:0] _GEN_38 = reset ? 8'h0 : _dotProductRegs_1_T_13; // @[HBFP_MAC_MIXMAN_4x4.scala 28:{53,53} 53:25]
  wire [7:0] _GEN_39 = reset ? 8'h0 : _dotProductRegs_2_T_13; // @[HBFP_MAC_MIXMAN_4x4.scala 28:{53,53} 53:25]
  wire [7:0] _GEN_40 = reset ? 8'h0 : _dotProductRegs_3_T_13; // @[HBFP_MAC_MIXMAN_4x4.scala 28:{53,53} 53:25]
  wire [23:0] _GEN_41 = reset ? 24'h0 : _final_result_T_6; // @[HBFP_MAC_MIXMAN_4x4.scala 35:{33,33} 51:20]
  wire [23:0] _GEN_42 = reset ? 24'h0 : _final_result_T_13; // @[HBFP_MAC_MIXMAN_4x4.scala 35:{33,33} 51:20]
  wire [23:0] _GEN_43 = reset ? 24'h0 : _final_result_T_20; // @[HBFP_MAC_MIXMAN_4x4.scala 35:{33,33} 51:20]
  wire [23:0] _GEN_44 = reset ? 24'h0 : _final_result_T_27; // @[HBFP_MAC_MIXMAN_4x4.scala 35:{33,33} 51:20]
  wire [5:0] _GEN_45 = reset ? 6'h0 : _acc_hbfp_T_26; // @[HBFP_MAC_MIXMAN_4x4.scala 60:{27,27} 63:14]
  Multiplier multiplier_1 ( // @[HBFP_MAC_MIXMAN_4x4.scala 37:32]
    .io_in_a(multiplier_1_io_in_a),
    .io_in_b(multiplier_1_io_in_b),
    .io_out(multiplier_1_io_out)
  );
  Multiplier multiplier_2 ( // @[HBFP_MAC_MIXMAN_4x4.scala 38:32]
    .io_in_a(multiplier_2_io_in_a),
    .io_in_b(multiplier_2_io_in_b),
    .io_out(multiplier_2_io_out)
  );
  Multiplier multiplier_3 ( // @[HBFP_MAC_MIXMAN_4x4.scala 39:32]
    .io_in_a(multiplier_3_io_in_a),
    .io_in_b(multiplier_3_io_in_b),
    .io_out(multiplier_3_io_out)
  );
  Multiplier multiplier_4 ( // @[HBFP_MAC_MIXMAN_4x4.scala 40:32]
    .io_in_a(multiplier_4_io_in_a),
    .io_in_b(multiplier_4_io_in_b),
    .io_out(multiplier_4_io_out)
  );
  Multiplier multiplier_1_1 ( // @[HBFP_MAC_MIXMAN_4x4.scala 37:32]
    .io_in_a(multiplier_1_1_io_in_a),
    .io_in_b(multiplier_1_1_io_in_b),
    .io_out(multiplier_1_1_io_out)
  );
  Multiplier multiplier_2_1 ( // @[HBFP_MAC_MIXMAN_4x4.scala 38:32]
    .io_in_a(multiplier_2_1_io_in_a),
    .io_in_b(multiplier_2_1_io_in_b),
    .io_out(multiplier_2_1_io_out)
  );
  Multiplier multiplier_3_1 ( // @[HBFP_MAC_MIXMAN_4x4.scala 39:32]
    .io_in_a(multiplier_3_1_io_in_a),
    .io_in_b(multiplier_3_1_io_in_b),
    .io_out(multiplier_3_1_io_out)
  );
  Multiplier multiplier_4_1 ( // @[HBFP_MAC_MIXMAN_4x4.scala 40:32]
    .io_in_a(multiplier_4_1_io_in_a),
    .io_in_b(multiplier_4_1_io_in_b),
    .io_out(multiplier_4_1_io_out)
  );
  Multiplier multiplier_1_2 ( // @[HBFP_MAC_MIXMAN_4x4.scala 37:32]
    .io_in_a(multiplier_1_2_io_in_a),
    .io_in_b(multiplier_1_2_io_in_b),
    .io_out(multiplier_1_2_io_out)
  );
  Multiplier multiplier_2_2 ( // @[HBFP_MAC_MIXMAN_4x4.scala 38:32]
    .io_in_a(multiplier_2_2_io_in_a),
    .io_in_b(multiplier_2_2_io_in_b),
    .io_out(multiplier_2_2_io_out)
  );
  Multiplier multiplier_3_2 ( // @[HBFP_MAC_MIXMAN_4x4.scala 39:32]
    .io_in_a(multiplier_3_2_io_in_a),
    .io_in_b(multiplier_3_2_io_in_b),
    .io_out(multiplier_3_2_io_out)
  );
  Multiplier multiplier_4_2 ( // @[HBFP_MAC_MIXMAN_4x4.scala 40:32]
    .io_in_a(multiplier_4_2_io_in_a),
    .io_in_b(multiplier_4_2_io_in_b),
    .io_out(multiplier_4_2_io_out)
  );
  Multiplier multiplier_1_3 ( // @[HBFP_MAC_MIXMAN_4x4.scala 37:32]
    .io_in_a(multiplier_1_3_io_in_a),
    .io_in_b(multiplier_1_3_io_in_b),
    .io_out(multiplier_1_3_io_out)
  );
  Multiplier multiplier_2_3 ( // @[HBFP_MAC_MIXMAN_4x4.scala 38:32]
    .io_in_a(multiplier_2_3_io_in_a),
    .io_in_b(multiplier_2_3_io_in_b),
    .io_out(multiplier_2_3_io_out)
  );
  Multiplier multiplier_3_3 ( // @[HBFP_MAC_MIXMAN_4x4.scala 39:32]
    .io_in_a(multiplier_3_3_io_in_a),
    .io_in_b(multiplier_3_3_io_in_b),
    .io_out(multiplier_3_3_io_out)
  );
  Multiplier multiplier_4_3 ( // @[HBFP_MAC_MIXMAN_4x4.scala 40:32]
    .io_in_a(multiplier_4_3_io_in_a),
    .io_in_b(multiplier_4_3_io_in_b),
    .io_out(multiplier_4_3_io_out)
  );
  assign io_out_result_sign = acc_hbfp[4]; // @[HBFP_MAC_MIXMAN_4x4.scala 66:35]
  assign io_out_result_man = _io_out_result_man_T_10[3:0]; // @[HBFP_MAC_MIXMAN_4x4.scala 67:23]
  assign io_out_result_exp = _io_out_result_exp_T_5[7:0]; // @[HBFP_MAC_MIXMAN_4x4.scala 26:23]
  assign multiplier_1_io_in_a = io_in_a_man_0; // @[HBFP_MAC_MIXMAN_4x4.scala 42:34]
  assign multiplier_1_io_in_b = io_in_b_man_0; // @[HBFP_MAC_MIXMAN_4x4.scala 43:34]
  assign multiplier_2_io_in_a = io_in_flag ? _multiplier_2_io_in_a_T_2 : 4'h0; // @[HBFP_MAC_MIXMAN_4x4.scala 44:34]
  assign multiplier_2_io_in_b = io_in_flag ? io_in_b_man_0 : 4'h0; // @[HBFP_MAC_MIXMAN_4x4.scala 45:34]
  assign multiplier_3_io_in_a = io_in_flag ? io_in_a_man_0 : 4'h0; // @[HBFP_MAC_MIXMAN_4x4.scala 46:34]
  assign multiplier_3_io_in_b = io_in_flag ? _multiplier_3_io_in_b_T_2 : 4'h0; // @[HBFP_MAC_MIXMAN_4x4.scala 47:34]
  assign multiplier_4_io_in_a = io_in_flag ? _multiplier_2_io_in_a_T_2 : 4'h0; // @[HBFP_MAC_MIXMAN_4x4.scala 48:34]
  assign multiplier_4_io_in_b = io_in_flag ? _multiplier_3_io_in_b_T_2 : 4'h0; // @[HBFP_MAC_MIXMAN_4x4.scala 49:34]
  assign multiplier_1_1_io_in_a = io_in_a_man_1; // @[HBFP_MAC_MIXMAN_4x4.scala 42:34]
  assign multiplier_1_1_io_in_b = io_in_b_man_1; // @[HBFP_MAC_MIXMAN_4x4.scala 43:34]
  assign multiplier_2_1_io_in_a = io_in_flag ? _multiplier_2_io_in_a_T_6 : 4'h0; // @[HBFP_MAC_MIXMAN_4x4.scala 44:34]
  assign multiplier_2_1_io_in_b = io_in_flag ? io_in_b_man_1 : 4'h0; // @[HBFP_MAC_MIXMAN_4x4.scala 45:34]
  assign multiplier_3_1_io_in_a = io_in_flag ? io_in_a_man_1 : 4'h0; // @[HBFP_MAC_MIXMAN_4x4.scala 46:34]
  assign multiplier_3_1_io_in_b = io_in_flag ? _multiplier_3_io_in_b_T_6 : 4'h0; // @[HBFP_MAC_MIXMAN_4x4.scala 47:34]
  assign multiplier_4_1_io_in_a = io_in_flag ? _multiplier_2_io_in_a_T_6 : 4'h0; // @[HBFP_MAC_MIXMAN_4x4.scala 48:34]
  assign multiplier_4_1_io_in_b = io_in_flag ? _multiplier_3_io_in_b_T_6 : 4'h0; // @[HBFP_MAC_MIXMAN_4x4.scala 49:34]
  assign multiplier_1_2_io_in_a = io_in_a_man_2; // @[HBFP_MAC_MIXMAN_4x4.scala 42:34]
  assign multiplier_1_2_io_in_b = io_in_b_man_2; // @[HBFP_MAC_MIXMAN_4x4.scala 43:34]
  assign multiplier_2_2_io_in_a = io_in_flag ? _multiplier_2_io_in_a_T_10 : 4'h0; // @[HBFP_MAC_MIXMAN_4x4.scala 44:34]
  assign multiplier_2_2_io_in_b = io_in_flag ? io_in_b_man_2 : 4'h0; // @[HBFP_MAC_MIXMAN_4x4.scala 45:34]
  assign multiplier_3_2_io_in_a = io_in_flag ? io_in_a_man_2 : 4'h0; // @[HBFP_MAC_MIXMAN_4x4.scala 46:34]
  assign multiplier_3_2_io_in_b = io_in_flag ? _multiplier_3_io_in_b_T_10 : 4'h0; // @[HBFP_MAC_MIXMAN_4x4.scala 47:34]
  assign multiplier_4_2_io_in_a = io_in_flag ? _multiplier_2_io_in_a_T_10 : 4'h0; // @[HBFP_MAC_MIXMAN_4x4.scala 48:34]
  assign multiplier_4_2_io_in_b = io_in_flag ? _multiplier_3_io_in_b_T_10 : 4'h0; // @[HBFP_MAC_MIXMAN_4x4.scala 49:34]
  assign multiplier_1_3_io_in_a = io_in_a_man_3; // @[HBFP_MAC_MIXMAN_4x4.scala 42:34]
  assign multiplier_1_3_io_in_b = io_in_b_man_3; // @[HBFP_MAC_MIXMAN_4x4.scala 43:34]
  assign multiplier_2_3_io_in_a = io_in_flag ? _multiplier_2_io_in_a_T_14 : 4'h0; // @[HBFP_MAC_MIXMAN_4x4.scala 44:34]
  assign multiplier_2_3_io_in_b = io_in_flag ? io_in_b_man_3 : 4'h0; // @[HBFP_MAC_MIXMAN_4x4.scala 45:34]
  assign multiplier_3_3_io_in_a = io_in_flag ? io_in_a_man_3 : 4'h0; // @[HBFP_MAC_MIXMAN_4x4.scala 46:34]
  assign multiplier_3_3_io_in_b = io_in_flag ? _multiplier_3_io_in_b_T_14 : 4'h0; // @[HBFP_MAC_MIXMAN_4x4.scala 47:34]
  assign multiplier_4_3_io_in_a = io_in_flag ? _multiplier_2_io_in_a_T_14 : 4'h0; // @[HBFP_MAC_MIXMAN_4x4.scala 48:34]
  assign multiplier_4_3_io_in_b = io_in_flag ? _multiplier_3_io_in_b_T_14 : 4'h0; // @[HBFP_MAC_MIXMAN_4x4.scala 49:34]
  always @(posedge clock) begin
    exp_addition_r <= io_in_a_exp + io_in_b_exp; // @[HBFP_MAC_MIXMAN_4x4.scala 25:50]
    exp_addition_r_1 <= exp_addition_r; // @[Reg.scala 19:16 20:{18,22}]
    exp_addition_r_2 <= exp_addition_r_1; // @[Reg.scala 19:16 20:{18,22}]
    exp_addition <= exp_addition_r_2; // @[Reg.scala 19:16 20:{18,22}]
    dotProductRegs_0 <= _GEN_37[3:0]; // @[HBFP_MAC_MIXMAN_4x4.scala 28:{53,53} 53:25]
    dotProductRegs_1 <= _GEN_38[3:0]; // @[HBFP_MAC_MIXMAN_4x4.scala 28:{53,53} 53:25]
    dotProductRegs_2 <= _GEN_39[3:0]; // @[HBFP_MAC_MIXMAN_4x4.scala 28:{53,53} 53:25]
    dotProductRegs_3 <= _GEN_40[3:0]; // @[HBFP_MAC_MIXMAN_4x4.scala 28:{53,53} 53:25]
    if (reset) begin // @[HBFP_MAC_MIXMAN_4x4.scala 29:60]
      two_complement_buffer_0 <= 5'sh0; // @[HBFP_MAC_MIXMAN_4x4.scala 29:60]
    end else begin
      two_complement_buffer_0 <= _two_complement_buffer_0_T_7; // @[HBFP_MAC_MIXMAN_4x4.scala 55:32]
    end
    if (reset) begin // @[HBFP_MAC_MIXMAN_4x4.scala 29:60]
      two_complement_buffer_1 <= 5'sh0; // @[HBFP_MAC_MIXMAN_4x4.scala 29:60]
    end else begin
      two_complement_buffer_1 <= _two_complement_buffer_1_T_7; // @[HBFP_MAC_MIXMAN_4x4.scala 55:32]
    end
    if (reset) begin // @[HBFP_MAC_MIXMAN_4x4.scala 29:60]
      two_complement_buffer_2 <= 5'sh0; // @[HBFP_MAC_MIXMAN_4x4.scala 29:60]
    end else begin
      two_complement_buffer_2 <= _two_complement_buffer_2_T_7; // @[HBFP_MAC_MIXMAN_4x4.scala 55:32]
    end
    if (reset) begin // @[HBFP_MAC_MIXMAN_4x4.scala 29:60]
      two_complement_buffer_3 <= 5'sh0; // @[HBFP_MAC_MIXMAN_4x4.scala 29:60]
    end else begin
      two_complement_buffer_3 <= _two_complement_buffer_3_T_7; // @[HBFP_MAC_MIXMAN_4x4.scala 55:32]
    end
    if (reset) begin // @[HBFP_MAC_MIXMAN_4x4.scala 30:44]
      signs_0 <= 1'h0; // @[HBFP_MAC_MIXMAN_4x4.scala 30:44]
    end else begin
      signs_0 <= signs_0_r; // @[HBFP_MAC_MIXMAN_4x4.scala 54:16]
    end
    if (reset) begin // @[HBFP_MAC_MIXMAN_4x4.scala 30:44]
      signs_1 <= 1'h0; // @[HBFP_MAC_MIXMAN_4x4.scala 30:44]
    end else begin
      signs_1 <= signs_1_r; // @[HBFP_MAC_MIXMAN_4x4.scala 54:16]
    end
    if (reset) begin // @[HBFP_MAC_MIXMAN_4x4.scala 30:44]
      signs_2 <= 1'h0; // @[HBFP_MAC_MIXMAN_4x4.scala 30:44]
    end else begin
      signs_2 <= signs_2_r; // @[HBFP_MAC_MIXMAN_4x4.scala 54:16]
    end
    if (reset) begin // @[HBFP_MAC_MIXMAN_4x4.scala 30:44]
      signs_3 <= 1'h0; // @[HBFP_MAC_MIXMAN_4x4.scala 30:44]
    end else begin
      signs_3 <= signs_3_r; // @[HBFP_MAC_MIXMAN_4x4.scala 54:16]
    end
    final_result <= _GEN_41[7:0]; // @[HBFP_MAC_MIXMAN_4x4.scala 35:{33,33} 51:20]
    signs_0_r <= io_in_a_sign_0 ^ io_in_b_sign_0; // @[HBFP_MAC_MIXMAN_4x4.scala 54:49]
    final_result_1 <= _GEN_42[7:0]; // @[HBFP_MAC_MIXMAN_4x4.scala 35:{33,33} 51:20]
    signs_1_r <= io_in_a_sign_1 ^ io_in_b_sign_1; // @[HBFP_MAC_MIXMAN_4x4.scala 54:49]
    final_result_2 <= _GEN_43[7:0]; // @[HBFP_MAC_MIXMAN_4x4.scala 35:{33,33} 51:20]
    signs_2_r <= io_in_a_sign_2 ^ io_in_b_sign_2; // @[HBFP_MAC_MIXMAN_4x4.scala 54:49]
    final_result_3 <= _GEN_44[7:0]; // @[HBFP_MAC_MIXMAN_4x4.scala 35:{33,33} 51:20]
    signs_3_r <= io_in_a_sign_3 ^ io_in_b_sign_3; // @[HBFP_MAC_MIXMAN_4x4.scala 54:49]
    acc_hbfp <= _GEN_45[4:0]; // @[HBFP_MAC_MIXMAN_4x4.scala 60:{27,27} 63:14]
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
  exp_addition_r = _RAND_0[8:0];
  _RAND_1 = {1{`RANDOM}};
  exp_addition_r_1 = _RAND_1[8:0];
  _RAND_2 = {1{`RANDOM}};
  exp_addition_r_2 = _RAND_2[8:0];
  _RAND_3 = {1{`RANDOM}};
  exp_addition = _RAND_3[8:0];
  _RAND_4 = {1{`RANDOM}};
  dotProductRegs_0 = _RAND_4[3:0];
  _RAND_5 = {1{`RANDOM}};
  dotProductRegs_1 = _RAND_5[3:0];
  _RAND_6 = {1{`RANDOM}};
  dotProductRegs_2 = _RAND_6[3:0];
  _RAND_7 = {1{`RANDOM}};
  dotProductRegs_3 = _RAND_7[3:0];
  _RAND_8 = {1{`RANDOM}};
  two_complement_buffer_0 = _RAND_8[4:0];
  _RAND_9 = {1{`RANDOM}};
  two_complement_buffer_1 = _RAND_9[4:0];
  _RAND_10 = {1{`RANDOM}};
  two_complement_buffer_2 = _RAND_10[4:0];
  _RAND_11 = {1{`RANDOM}};
  two_complement_buffer_3 = _RAND_11[4:0];
  _RAND_12 = {1{`RANDOM}};
  signs_0 = _RAND_12[0:0];
  _RAND_13 = {1{`RANDOM}};
  signs_1 = _RAND_13[0:0];
  _RAND_14 = {1{`RANDOM}};
  signs_2 = _RAND_14[0:0];
  _RAND_15 = {1{`RANDOM}};
  signs_3 = _RAND_15[0:0];
  _RAND_16 = {1{`RANDOM}};
  final_result = _RAND_16[7:0];
  _RAND_17 = {1{`RANDOM}};
  signs_0_r = _RAND_17[0:0];
  _RAND_18 = {1{`RANDOM}};
  final_result_1 = _RAND_18[7:0];
  _RAND_19 = {1{`RANDOM}};
  signs_1_r = _RAND_19[0:0];
  _RAND_20 = {1{`RANDOM}};
  final_result_2 = _RAND_20[7:0];
  _RAND_21 = {1{`RANDOM}};
  signs_2_r = _RAND_21[0:0];
  _RAND_22 = {1{`RANDOM}};
  final_result_3 = _RAND_22[7:0];
  _RAND_23 = {1{`RANDOM}};
  signs_3_r = _RAND_23[0:0];
  _RAND_24 = {1{`RANDOM}};
  acc_hbfp = _RAND_24[4:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module HBFP_Adder(
  input        io_in_a_sign,
  input  [3:0] io_in_a_man,
  input  [7:0] io_in_a_exp,
  input        io_in_b_sign,
  input  [3:0] io_in_b_man,
  input  [7:0] io_in_b_exp,
  input        io_in_flag,
  output       io_out_result_sign,
  output [3:0] io_out_result_man,
  output [7:0] io_out_result_exp
);
  wire  _exp_diff_T = io_in_a_exp > io_in_b_exp; // @[HBFP_Adder_MIXMAN_4x4.scala 25:34]
  wire [7:0] _exp_diff_T_2 = io_in_a_exp - io_in_b_exp; // @[HBFP_Adder_MIXMAN_4x4.scala 25:61]
  wire [7:0] _exp_diff_T_4 = io_in_b_exp - io_in_a_exp; // @[HBFP_Adder_MIXMAN_4x4.scala 25:88]
  wire [7:0] exp_diff = io_in_a_exp > io_in_b_exp ? _exp_diff_T_2 : _exp_diff_T_4; // @[HBFP_Adder_MIXMAN_4x4.scala 25:21]
  wire [3:0] _io_out_result_sign_T_1 = io_in_b_man >> exp_diff; // @[HBFP_Adder_MIXMAN_4x4.scala 29:87]
  wire  _io_out_result_sign_T_2 = io_in_a_man > _io_out_result_sign_T_1; // @[HBFP_Adder_MIXMAN_4x4.scala 29:72]
  wire  _io_out_result_sign_T_3 = io_in_a_man > _io_out_result_sign_T_1 ? io_in_a_sign : io_in_b_sign; // @[HBFP_Adder_MIXMAN_4x4.scala 29:59]
  wire [3:0] _io_out_result_sign_T_4 = io_in_a_man >> exp_diff; // @[HBFP_Adder_MIXMAN_4x4.scala 29:147]
  wire  _io_out_result_sign_T_6 = _io_out_result_sign_T_4 > io_in_b_man ? io_in_a_sign : io_in_b_sign; // @[HBFP_Adder_MIXMAN_4x4.scala 29:133]
  wire [4:0] _addition_T_3 = io_in_a_man + _io_out_result_sign_T_1; // @[HBFP_Adder_MIXMAN_4x4.scala 35:96]
  wire [3:0] _addition_T_8 = io_in_a_man - _io_out_result_sign_T_1; // @[HBFP_Adder_MIXMAN_4x4.scala 35:183]
  wire [3:0] _addition_T_11 = _io_out_result_sign_T_1 - io_in_a_man; // @[HBFP_Adder_MIXMAN_4x4.scala 35:236]
  wire [3:0] _addition_T_12 = _io_out_result_sign_T_2 ? _addition_T_8 : _addition_T_11; // @[HBFP_Adder_MIXMAN_4x4.scala 35:129]
  wire [4:0] _addition_T_13 = io_in_a_sign == io_in_b_sign ? _addition_T_3 : {{1'd0}, _addition_T_12}; // @[HBFP_Adder_MIXMAN_4x4.scala 35:52]
  wire [4:0] _addition_T_16 = io_in_b_man + _io_out_result_sign_T_4; // @[HBFP_Adder_MIXMAN_4x4.scala 35:301]
  wire [3:0] _addition_T_21 = io_in_b_man - _io_out_result_sign_T_4; // @[HBFP_Adder_MIXMAN_4x4.scala 35:388]
  wire [3:0] _addition_T_24 = _io_out_result_sign_T_4 - io_in_b_man; // @[HBFP_Adder_MIXMAN_4x4.scala 35:441]
  wire [3:0] _addition_T_25 = io_in_b_man > _io_out_result_sign_T_4 ? _addition_T_21 : _addition_T_24; // @[HBFP_Adder_MIXMAN_4x4.scala 35:334]
  wire [4:0] _addition_T_26 = io_in_a_sign == io_in_b_sign ? _addition_T_16 : {{1'd0}, _addition_T_25}; // @[HBFP_Adder_MIXMAN_4x4.scala 35:257]
  wire [4:0] addition = _exp_diff_T ? _addition_T_13 : _addition_T_26; // @[HBFP_Adder_MIXMAN_4x4.scala 35:21]
  wire [4:0] _io_out_result_man_T_2 = 5'h10 - 5'h1; // @[HBFP_Adder_MIXMAN_4x4.scala 36:79]
  wire [4:0] _io_out_result_man_T_6 = addition > _io_out_result_man_T_2 ? _io_out_result_man_T_2 : addition; // @[HBFP_Adder_MIXMAN_4x4.scala 36:51]
  wire [4:0] _io_out_result_man_T_13 = io_in_flag ? _io_out_result_man_T_6 : _io_out_result_man_T_6; // @[HBFP_Adder_MIXMAN_4x4.scala 36:27]
  assign io_out_result_sign = _exp_diff_T ? _io_out_result_sign_T_3 : _io_out_result_sign_T_6; // @[HBFP_Adder_MIXMAN_4x4.scala 29:28]
  assign io_out_result_man = _io_out_result_man_T_13[3:0]; // @[HBFP_Adder_MIXMAN_4x4.scala 36:21]
  assign io_out_result_exp = _exp_diff_T ? io_in_a_exp : io_in_b_exp; // @[HBFP_Adder_MIXMAN_4x4.scala 32:27]
endmodule
module HBFP_PE(
  input        clock,
  input        reset,
  input        io_in_hor_sign_0,
  input        io_in_hor_sign_1,
  input        io_in_hor_sign_2,
  input        io_in_hor_sign_3,
  input  [3:0] io_in_hor_man_0,
  input  [3:0] io_in_hor_man_1,
  input  [3:0] io_in_hor_man_2,
  input  [3:0] io_in_hor_man_3,
  input  [7:0] io_in_hor_exp,
  input        io_in_ver_sign_0,
  input        io_in_ver_sign_1,
  input        io_in_ver_sign_2,
  input        io_in_ver_sign_3,
  input  [3:0] io_in_ver_man_0,
  input  [3:0] io_in_ver_man_1,
  input  [3:0] io_in_ver_man_2,
  input  [3:0] io_in_ver_man_3,
  input  [7:0] io_in_ver_exp,
  input        io_in_flag,
  output       io_out_hor_sign_0,
  output       io_out_hor_sign_1,
  output       io_out_hor_sign_2,
  output       io_out_hor_sign_3,
  output [3:0] io_out_hor_man_0,
  output [3:0] io_out_hor_man_1,
  output [3:0] io_out_hor_man_2,
  output [3:0] io_out_hor_man_3,
  output [7:0] io_out_hor_exp,
  output       io_out_ver_sign_0,
  output       io_out_ver_sign_1,
  output       io_out_ver_sign_2,
  output       io_out_ver_sign_3,
  output [3:0] io_out_ver_man_0,
  output [3:0] io_out_ver_man_1,
  output [3:0] io_out_ver_man_2,
  output [3:0] io_out_ver_man_3,
  output [7:0] io_out_ver_exp,
  output       io_out_result_sign,
  output [3:0] io_out_result_man,
  output [7:0] io_out_result_exp
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
`endif // RANDOMIZE_REG_INIT
  wire  mac_clock; // @[HBFP_Processing_Element_MIXMAN_4x4.scala 30:21]
  wire  mac_reset; // @[HBFP_Processing_Element_MIXMAN_4x4.scala 30:21]
  wire  mac_io_in_a_sign_0; // @[HBFP_Processing_Element_MIXMAN_4x4.scala 30:21]
  wire  mac_io_in_a_sign_1; // @[HBFP_Processing_Element_MIXMAN_4x4.scala 30:21]
  wire  mac_io_in_a_sign_2; // @[HBFP_Processing_Element_MIXMAN_4x4.scala 30:21]
  wire  mac_io_in_a_sign_3; // @[HBFP_Processing_Element_MIXMAN_4x4.scala 30:21]
  wire [3:0] mac_io_in_a_man_0; // @[HBFP_Processing_Element_MIXMAN_4x4.scala 30:21]
  wire [3:0] mac_io_in_a_man_1; // @[HBFP_Processing_Element_MIXMAN_4x4.scala 30:21]
  wire [3:0] mac_io_in_a_man_2; // @[HBFP_Processing_Element_MIXMAN_4x4.scala 30:21]
  wire [3:0] mac_io_in_a_man_3; // @[HBFP_Processing_Element_MIXMAN_4x4.scala 30:21]
  wire [7:0] mac_io_in_a_exp; // @[HBFP_Processing_Element_MIXMAN_4x4.scala 30:21]
  wire  mac_io_in_b_sign_0; // @[HBFP_Processing_Element_MIXMAN_4x4.scala 30:21]
  wire  mac_io_in_b_sign_1; // @[HBFP_Processing_Element_MIXMAN_4x4.scala 30:21]
  wire  mac_io_in_b_sign_2; // @[HBFP_Processing_Element_MIXMAN_4x4.scala 30:21]
  wire  mac_io_in_b_sign_3; // @[HBFP_Processing_Element_MIXMAN_4x4.scala 30:21]
  wire [3:0] mac_io_in_b_man_0; // @[HBFP_Processing_Element_MIXMAN_4x4.scala 30:21]
  wire [3:0] mac_io_in_b_man_1; // @[HBFP_Processing_Element_MIXMAN_4x4.scala 30:21]
  wire [3:0] mac_io_in_b_man_2; // @[HBFP_Processing_Element_MIXMAN_4x4.scala 30:21]
  wire [3:0] mac_io_in_b_man_3; // @[HBFP_Processing_Element_MIXMAN_4x4.scala 30:21]
  wire [7:0] mac_io_in_b_exp; // @[HBFP_Processing_Element_MIXMAN_4x4.scala 30:21]
  wire  mac_io_in_flag; // @[HBFP_Processing_Element_MIXMAN_4x4.scala 30:21]
  wire  mac_io_out_result_sign; // @[HBFP_Processing_Element_MIXMAN_4x4.scala 30:21]
  wire [3:0] mac_io_out_result_man; // @[HBFP_Processing_Element_MIXMAN_4x4.scala 30:21]
  wire [7:0] mac_io_out_result_exp; // @[HBFP_Processing_Element_MIXMAN_4x4.scala 30:21]
  wire  adder_io_in_a_sign; // @[HBFP_Processing_Element_MIXMAN_4x4.scala 35:23]
  wire [3:0] adder_io_in_a_man; // @[HBFP_Processing_Element_MIXMAN_4x4.scala 35:23]
  wire [7:0] adder_io_in_a_exp; // @[HBFP_Processing_Element_MIXMAN_4x4.scala 35:23]
  wire  adder_io_in_b_sign; // @[HBFP_Processing_Element_MIXMAN_4x4.scala 35:23]
  wire [3:0] adder_io_in_b_man; // @[HBFP_Processing_Element_MIXMAN_4x4.scala 35:23]
  wire [7:0] adder_io_in_b_exp; // @[HBFP_Processing_Element_MIXMAN_4x4.scala 35:23]
  wire  adder_io_in_flag; // @[HBFP_Processing_Element_MIXMAN_4x4.scala 35:23]
  wire  adder_io_out_result_sign; // @[HBFP_Processing_Element_MIXMAN_4x4.scala 35:23]
  wire [3:0] adder_io_out_result_man; // @[HBFP_Processing_Element_MIXMAN_4x4.scala 35:23]
  wire [7:0] adder_io_out_result_exp; // @[HBFP_Processing_Element_MIXMAN_4x4.scala 35:23]
  reg  result_buffer_sign; // @[HBFP_Processing_Element_MIXMAN_4x4.scala 28:28]
  reg [3:0] result_buffer_man; // @[HBFP_Processing_Element_MIXMAN_4x4.scala 28:28]
  reg [7:0] result_buffer_exp; // @[HBFP_Processing_Element_MIXMAN_4x4.scala 28:28]
  HBFP_MAC mac ( // @[HBFP_Processing_Element_MIXMAN_4x4.scala 30:21]
    .clock(mac_clock),
    .reset(mac_reset),
    .io_in_a_sign_0(mac_io_in_a_sign_0),
    .io_in_a_sign_1(mac_io_in_a_sign_1),
    .io_in_a_sign_2(mac_io_in_a_sign_2),
    .io_in_a_sign_3(mac_io_in_a_sign_3),
    .io_in_a_man_0(mac_io_in_a_man_0),
    .io_in_a_man_1(mac_io_in_a_man_1),
    .io_in_a_man_2(mac_io_in_a_man_2),
    .io_in_a_man_3(mac_io_in_a_man_3),
    .io_in_a_exp(mac_io_in_a_exp),
    .io_in_b_sign_0(mac_io_in_b_sign_0),
    .io_in_b_sign_1(mac_io_in_b_sign_1),
    .io_in_b_sign_2(mac_io_in_b_sign_2),
    .io_in_b_sign_3(mac_io_in_b_sign_3),
    .io_in_b_man_0(mac_io_in_b_man_0),
    .io_in_b_man_1(mac_io_in_b_man_1),
    .io_in_b_man_2(mac_io_in_b_man_2),
    .io_in_b_man_3(mac_io_in_b_man_3),
    .io_in_b_exp(mac_io_in_b_exp),
    .io_in_flag(mac_io_in_flag),
    .io_out_result_sign(mac_io_out_result_sign),
    .io_out_result_man(mac_io_out_result_man),
    .io_out_result_exp(mac_io_out_result_exp)
  );
  HBFP_Adder adder ( // @[HBFP_Processing_Element_MIXMAN_4x4.scala 35:23]
    .io_in_a_sign(adder_io_in_a_sign),
    .io_in_a_man(adder_io_in_a_man),
    .io_in_a_exp(adder_io_in_a_exp),
    .io_in_b_sign(adder_io_in_b_sign),
    .io_in_b_man(adder_io_in_b_man),
    .io_in_b_exp(adder_io_in_b_exp),
    .io_in_flag(adder_io_in_flag),
    .io_out_result_sign(adder_io_out_result_sign),
    .io_out_result_man(adder_io_out_result_man),
    .io_out_result_exp(adder_io_out_result_exp)
  );
  assign io_out_hor_sign_0 = io_in_hor_sign_0; // @[HBFP_Processing_Element_MIXMAN_4x4.scala 41:16]
  assign io_out_hor_sign_1 = io_in_hor_sign_1; // @[HBFP_Processing_Element_MIXMAN_4x4.scala 41:16]
  assign io_out_hor_sign_2 = io_in_hor_sign_2; // @[HBFP_Processing_Element_MIXMAN_4x4.scala 41:16]
  assign io_out_hor_sign_3 = io_in_hor_sign_3; // @[HBFP_Processing_Element_MIXMAN_4x4.scala 41:16]
  assign io_out_hor_man_0 = io_in_hor_man_0; // @[HBFP_Processing_Element_MIXMAN_4x4.scala 41:16]
  assign io_out_hor_man_1 = io_in_hor_man_1; // @[HBFP_Processing_Element_MIXMAN_4x4.scala 41:16]
  assign io_out_hor_man_2 = io_in_hor_man_2; // @[HBFP_Processing_Element_MIXMAN_4x4.scala 41:16]
  assign io_out_hor_man_3 = io_in_hor_man_3; // @[HBFP_Processing_Element_MIXMAN_4x4.scala 41:16]
  assign io_out_hor_exp = io_in_hor_exp; // @[HBFP_Processing_Element_MIXMAN_4x4.scala 41:16]
  assign io_out_ver_sign_0 = io_in_ver_sign_0; // @[HBFP_Processing_Element_MIXMAN_4x4.scala 42:16]
  assign io_out_ver_sign_1 = io_in_ver_sign_1; // @[HBFP_Processing_Element_MIXMAN_4x4.scala 42:16]
  assign io_out_ver_sign_2 = io_in_ver_sign_2; // @[HBFP_Processing_Element_MIXMAN_4x4.scala 42:16]
  assign io_out_ver_sign_3 = io_in_ver_sign_3; // @[HBFP_Processing_Element_MIXMAN_4x4.scala 42:16]
  assign io_out_ver_man_0 = io_in_ver_man_0; // @[HBFP_Processing_Element_MIXMAN_4x4.scala 42:16]
  assign io_out_ver_man_1 = io_in_ver_man_1; // @[HBFP_Processing_Element_MIXMAN_4x4.scala 42:16]
  assign io_out_ver_man_2 = io_in_ver_man_2; // @[HBFP_Processing_Element_MIXMAN_4x4.scala 42:16]
  assign io_out_ver_man_3 = io_in_ver_man_3; // @[HBFP_Processing_Element_MIXMAN_4x4.scala 42:16]
  assign io_out_ver_exp = io_in_ver_exp; // @[HBFP_Processing_Element_MIXMAN_4x4.scala 42:16]
  assign io_out_result_sign = result_buffer_sign; // @[HBFP_Processing_Element_MIXMAN_4x4.scala 43:19]
  assign io_out_result_man = result_buffer_man; // @[HBFP_Processing_Element_MIXMAN_4x4.scala 43:19]
  assign io_out_result_exp = result_buffer_exp; // @[HBFP_Processing_Element_MIXMAN_4x4.scala 43:19]
  assign mac_clock = clock;
  assign mac_reset = reset;
  assign mac_io_in_a_sign_0 = io_in_hor_sign_0; // @[HBFP_Processing_Element_MIXMAN_4x4.scala 31:17]
  assign mac_io_in_a_sign_1 = io_in_hor_sign_1; // @[HBFP_Processing_Element_MIXMAN_4x4.scala 31:17]
  assign mac_io_in_a_sign_2 = io_in_hor_sign_2; // @[HBFP_Processing_Element_MIXMAN_4x4.scala 31:17]
  assign mac_io_in_a_sign_3 = io_in_hor_sign_3; // @[HBFP_Processing_Element_MIXMAN_4x4.scala 31:17]
  assign mac_io_in_a_man_0 = io_in_hor_man_0; // @[HBFP_Processing_Element_MIXMAN_4x4.scala 31:17]
  assign mac_io_in_a_man_1 = io_in_hor_man_1; // @[HBFP_Processing_Element_MIXMAN_4x4.scala 31:17]
  assign mac_io_in_a_man_2 = io_in_hor_man_2; // @[HBFP_Processing_Element_MIXMAN_4x4.scala 31:17]
  assign mac_io_in_a_man_3 = io_in_hor_man_3; // @[HBFP_Processing_Element_MIXMAN_4x4.scala 31:17]
  assign mac_io_in_a_exp = io_in_hor_exp; // @[HBFP_Processing_Element_MIXMAN_4x4.scala 31:17]
  assign mac_io_in_b_sign_0 = io_in_ver_sign_0; // @[HBFP_Processing_Element_MIXMAN_4x4.scala 32:17]
  assign mac_io_in_b_sign_1 = io_in_ver_sign_1; // @[HBFP_Processing_Element_MIXMAN_4x4.scala 32:17]
  assign mac_io_in_b_sign_2 = io_in_ver_sign_2; // @[HBFP_Processing_Element_MIXMAN_4x4.scala 32:17]
  assign mac_io_in_b_sign_3 = io_in_ver_sign_3; // @[HBFP_Processing_Element_MIXMAN_4x4.scala 32:17]
  assign mac_io_in_b_man_0 = io_in_ver_man_0; // @[HBFP_Processing_Element_MIXMAN_4x4.scala 32:17]
  assign mac_io_in_b_man_1 = io_in_ver_man_1; // @[HBFP_Processing_Element_MIXMAN_4x4.scala 32:17]
  assign mac_io_in_b_man_2 = io_in_ver_man_2; // @[HBFP_Processing_Element_MIXMAN_4x4.scala 32:17]
  assign mac_io_in_b_man_3 = io_in_ver_man_3; // @[HBFP_Processing_Element_MIXMAN_4x4.scala 32:17]
  assign mac_io_in_b_exp = io_in_ver_exp; // @[HBFP_Processing_Element_MIXMAN_4x4.scala 32:17]
  assign mac_io_in_flag = io_in_flag; // @[HBFP_Processing_Element_MIXMAN_4x4.scala 33:20]
  assign adder_io_in_a_sign = mac_io_out_result_sign; // @[HBFP_Processing_Element_MIXMAN_4x4.scala 36:19]
  assign adder_io_in_a_man = mac_io_out_result_man; // @[HBFP_Processing_Element_MIXMAN_4x4.scala 36:19]
  assign adder_io_in_a_exp = mac_io_out_result_exp; // @[HBFP_Processing_Element_MIXMAN_4x4.scala 36:19]
  assign adder_io_in_b_sign = result_buffer_sign; // @[HBFP_Processing_Element_MIXMAN_4x4.scala 37:19]
  assign adder_io_in_b_man = result_buffer_man; // @[HBFP_Processing_Element_MIXMAN_4x4.scala 37:19]
  assign adder_io_in_b_exp = result_buffer_exp; // @[HBFP_Processing_Element_MIXMAN_4x4.scala 37:19]
  assign adder_io_in_flag = io_in_flag; // @[HBFP_Processing_Element_MIXMAN_4x4.scala 38:22]
  always @(posedge clock) begin
    result_buffer_sign <= adder_io_out_result_sign; // @[HBFP_Processing_Element_MIXMAN_4x4.scala 39:19]
    result_buffer_man <= adder_io_out_result_man; // @[HBFP_Processing_Element_MIXMAN_4x4.scala 39:19]
    result_buffer_exp <= adder_io_out_result_exp; // @[HBFP_Processing_Element_MIXMAN_4x4.scala 39:19]
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
  result_buffer_sign = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  result_buffer_man = _RAND_1[3:0];
  _RAND_2 = {1{`RANDOM}};
  result_buffer_exp = _RAND_2[7:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module Queue(
  input        clock,
  input        reset,
  output       io_enq_ready,
  input        io_enq_valid,
  input        io_enq_bits_sign_0,
  input        io_enq_bits_sign_1,
  input        io_enq_bits_sign_2,
  input        io_enq_bits_sign_3,
  input  [3:0] io_enq_bits_man_0,
  input  [3:0] io_enq_bits_man_1,
  input  [3:0] io_enq_bits_man_2,
  input  [3:0] io_enq_bits_man_3,
  input  [7:0] io_enq_bits_exp,
  input        io_deq_ready,
  output       io_deq_valid,
  output       io_deq_bits_sign_0,
  output       io_deq_bits_sign_1,
  output       io_deq_bits_sign_2,
  output       io_deq_bits_sign_3,
  output [3:0] io_deq_bits_man_0,
  output [3:0] io_deq_bits_man_1,
  output [3:0] io_deq_bits_man_2,
  output [3:0] io_deq_bits_man_3,
  output [7:0] io_deq_bits_exp
);
`ifdef RANDOMIZE_MEM_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_9;
  reg [31:0] _RAND_10;
  reg [31:0] _RAND_11;
`endif // RANDOMIZE_REG_INIT
  reg  ram_sign_0 [0:3]; // @[Decoupled.scala 273:95]
  wire  ram_sign_0_io_deq_bits_MPORT_en; // @[Decoupled.scala 273:95]
  wire [1:0] ram_sign_0_io_deq_bits_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_sign_0_io_deq_bits_MPORT_data; // @[Decoupled.scala 273:95]
  wire  ram_sign_0_MPORT_data; // @[Decoupled.scala 273:95]
  wire [1:0] ram_sign_0_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_sign_0_MPORT_mask; // @[Decoupled.scala 273:95]
  wire  ram_sign_0_MPORT_en; // @[Decoupled.scala 273:95]
  reg  ram_sign_1 [0:3]; // @[Decoupled.scala 273:95]
  wire  ram_sign_1_io_deq_bits_MPORT_en; // @[Decoupled.scala 273:95]
  wire [1:0] ram_sign_1_io_deq_bits_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_sign_1_io_deq_bits_MPORT_data; // @[Decoupled.scala 273:95]
  wire  ram_sign_1_MPORT_data; // @[Decoupled.scala 273:95]
  wire [1:0] ram_sign_1_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_sign_1_MPORT_mask; // @[Decoupled.scala 273:95]
  wire  ram_sign_1_MPORT_en; // @[Decoupled.scala 273:95]
  reg  ram_sign_2 [0:3]; // @[Decoupled.scala 273:95]
  wire  ram_sign_2_io_deq_bits_MPORT_en; // @[Decoupled.scala 273:95]
  wire [1:0] ram_sign_2_io_deq_bits_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_sign_2_io_deq_bits_MPORT_data; // @[Decoupled.scala 273:95]
  wire  ram_sign_2_MPORT_data; // @[Decoupled.scala 273:95]
  wire [1:0] ram_sign_2_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_sign_2_MPORT_mask; // @[Decoupled.scala 273:95]
  wire  ram_sign_2_MPORT_en; // @[Decoupled.scala 273:95]
  reg  ram_sign_3 [0:3]; // @[Decoupled.scala 273:95]
  wire  ram_sign_3_io_deq_bits_MPORT_en; // @[Decoupled.scala 273:95]
  wire [1:0] ram_sign_3_io_deq_bits_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_sign_3_io_deq_bits_MPORT_data; // @[Decoupled.scala 273:95]
  wire  ram_sign_3_MPORT_data; // @[Decoupled.scala 273:95]
  wire [1:0] ram_sign_3_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_sign_3_MPORT_mask; // @[Decoupled.scala 273:95]
  wire  ram_sign_3_MPORT_en; // @[Decoupled.scala 273:95]
  reg [3:0] ram_man_0 [0:3]; // @[Decoupled.scala 273:95]
  wire  ram_man_0_io_deq_bits_MPORT_en; // @[Decoupled.scala 273:95]
  wire [1:0] ram_man_0_io_deq_bits_MPORT_addr; // @[Decoupled.scala 273:95]
  wire [3:0] ram_man_0_io_deq_bits_MPORT_data; // @[Decoupled.scala 273:95]
  wire [3:0] ram_man_0_MPORT_data; // @[Decoupled.scala 273:95]
  wire [1:0] ram_man_0_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_man_0_MPORT_mask; // @[Decoupled.scala 273:95]
  wire  ram_man_0_MPORT_en; // @[Decoupled.scala 273:95]
  reg [3:0] ram_man_1 [0:3]; // @[Decoupled.scala 273:95]
  wire  ram_man_1_io_deq_bits_MPORT_en; // @[Decoupled.scala 273:95]
  wire [1:0] ram_man_1_io_deq_bits_MPORT_addr; // @[Decoupled.scala 273:95]
  wire [3:0] ram_man_1_io_deq_bits_MPORT_data; // @[Decoupled.scala 273:95]
  wire [3:0] ram_man_1_MPORT_data; // @[Decoupled.scala 273:95]
  wire [1:0] ram_man_1_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_man_1_MPORT_mask; // @[Decoupled.scala 273:95]
  wire  ram_man_1_MPORT_en; // @[Decoupled.scala 273:95]
  reg [3:0] ram_man_2 [0:3]; // @[Decoupled.scala 273:95]
  wire  ram_man_2_io_deq_bits_MPORT_en; // @[Decoupled.scala 273:95]
  wire [1:0] ram_man_2_io_deq_bits_MPORT_addr; // @[Decoupled.scala 273:95]
  wire [3:0] ram_man_2_io_deq_bits_MPORT_data; // @[Decoupled.scala 273:95]
  wire [3:0] ram_man_2_MPORT_data; // @[Decoupled.scala 273:95]
  wire [1:0] ram_man_2_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_man_2_MPORT_mask; // @[Decoupled.scala 273:95]
  wire  ram_man_2_MPORT_en; // @[Decoupled.scala 273:95]
  reg [3:0] ram_man_3 [0:3]; // @[Decoupled.scala 273:95]
  wire  ram_man_3_io_deq_bits_MPORT_en; // @[Decoupled.scala 273:95]
  wire [1:0] ram_man_3_io_deq_bits_MPORT_addr; // @[Decoupled.scala 273:95]
  wire [3:0] ram_man_3_io_deq_bits_MPORT_data; // @[Decoupled.scala 273:95]
  wire [3:0] ram_man_3_MPORT_data; // @[Decoupled.scala 273:95]
  wire [1:0] ram_man_3_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_man_3_MPORT_mask; // @[Decoupled.scala 273:95]
  wire  ram_man_3_MPORT_en; // @[Decoupled.scala 273:95]
  reg [7:0] ram_exp [0:3]; // @[Decoupled.scala 273:95]
  wire  ram_exp_io_deq_bits_MPORT_en; // @[Decoupled.scala 273:95]
  wire [1:0] ram_exp_io_deq_bits_MPORT_addr; // @[Decoupled.scala 273:95]
  wire [7:0] ram_exp_io_deq_bits_MPORT_data; // @[Decoupled.scala 273:95]
  wire [7:0] ram_exp_MPORT_data; // @[Decoupled.scala 273:95]
  wire [1:0] ram_exp_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_exp_MPORT_mask; // @[Decoupled.scala 273:95]
  wire  ram_exp_MPORT_en; // @[Decoupled.scala 273:95]
  reg [1:0] enq_ptr_value; // @[Counter.scala 61:40]
  reg [1:0] deq_ptr_value; // @[Counter.scala 61:40]
  reg  maybe_full; // @[Decoupled.scala 276:27]
  wire  ptr_match = enq_ptr_value == deq_ptr_value; // @[Decoupled.scala 277:33]
  wire  empty = ptr_match & ~maybe_full; // @[Decoupled.scala 278:25]
  wire  full = ptr_match & maybe_full; // @[Decoupled.scala 279:24]
  wire  do_enq = io_enq_ready & io_enq_valid; // @[Decoupled.scala 51:35]
  wire  do_deq = io_deq_ready & io_deq_valid; // @[Decoupled.scala 51:35]
  wire [1:0] _value_T_1 = enq_ptr_value + 2'h1; // @[Counter.scala 77:24]
  wire [1:0] _value_T_3 = deq_ptr_value + 2'h1; // @[Counter.scala 77:24]
  assign ram_sign_0_io_deq_bits_MPORT_en = 1'h1;
  assign ram_sign_0_io_deq_bits_MPORT_addr = deq_ptr_value;
  assign ram_sign_0_io_deq_bits_MPORT_data = ram_sign_0[ram_sign_0_io_deq_bits_MPORT_addr]; // @[Decoupled.scala 273:95]
  assign ram_sign_0_MPORT_data = io_enq_bits_sign_0;
  assign ram_sign_0_MPORT_addr = enq_ptr_value;
  assign ram_sign_0_MPORT_mask = 1'h1;
  assign ram_sign_0_MPORT_en = io_enq_ready & io_enq_valid;
  assign ram_sign_1_io_deq_bits_MPORT_en = 1'h1;
  assign ram_sign_1_io_deq_bits_MPORT_addr = deq_ptr_value;
  assign ram_sign_1_io_deq_bits_MPORT_data = ram_sign_1[ram_sign_1_io_deq_bits_MPORT_addr]; // @[Decoupled.scala 273:95]
  assign ram_sign_1_MPORT_data = io_enq_bits_sign_1;
  assign ram_sign_1_MPORT_addr = enq_ptr_value;
  assign ram_sign_1_MPORT_mask = 1'h1;
  assign ram_sign_1_MPORT_en = io_enq_ready & io_enq_valid;
  assign ram_sign_2_io_deq_bits_MPORT_en = 1'h1;
  assign ram_sign_2_io_deq_bits_MPORT_addr = deq_ptr_value;
  assign ram_sign_2_io_deq_bits_MPORT_data = ram_sign_2[ram_sign_2_io_deq_bits_MPORT_addr]; // @[Decoupled.scala 273:95]
  assign ram_sign_2_MPORT_data = io_enq_bits_sign_2;
  assign ram_sign_2_MPORT_addr = enq_ptr_value;
  assign ram_sign_2_MPORT_mask = 1'h1;
  assign ram_sign_2_MPORT_en = io_enq_ready & io_enq_valid;
  assign ram_sign_3_io_deq_bits_MPORT_en = 1'h1;
  assign ram_sign_3_io_deq_bits_MPORT_addr = deq_ptr_value;
  assign ram_sign_3_io_deq_bits_MPORT_data = ram_sign_3[ram_sign_3_io_deq_bits_MPORT_addr]; // @[Decoupled.scala 273:95]
  assign ram_sign_3_MPORT_data = io_enq_bits_sign_3;
  assign ram_sign_3_MPORT_addr = enq_ptr_value;
  assign ram_sign_3_MPORT_mask = 1'h1;
  assign ram_sign_3_MPORT_en = io_enq_ready & io_enq_valid;
  assign ram_man_0_io_deq_bits_MPORT_en = 1'h1;
  assign ram_man_0_io_deq_bits_MPORT_addr = deq_ptr_value;
  assign ram_man_0_io_deq_bits_MPORT_data = ram_man_0[ram_man_0_io_deq_bits_MPORT_addr]; // @[Decoupled.scala 273:95]
  assign ram_man_0_MPORT_data = io_enq_bits_man_0;
  assign ram_man_0_MPORT_addr = enq_ptr_value;
  assign ram_man_0_MPORT_mask = 1'h1;
  assign ram_man_0_MPORT_en = io_enq_ready & io_enq_valid;
  assign ram_man_1_io_deq_bits_MPORT_en = 1'h1;
  assign ram_man_1_io_deq_bits_MPORT_addr = deq_ptr_value;
  assign ram_man_1_io_deq_bits_MPORT_data = ram_man_1[ram_man_1_io_deq_bits_MPORT_addr]; // @[Decoupled.scala 273:95]
  assign ram_man_1_MPORT_data = io_enq_bits_man_1;
  assign ram_man_1_MPORT_addr = enq_ptr_value;
  assign ram_man_1_MPORT_mask = 1'h1;
  assign ram_man_1_MPORT_en = io_enq_ready & io_enq_valid;
  assign ram_man_2_io_deq_bits_MPORT_en = 1'h1;
  assign ram_man_2_io_deq_bits_MPORT_addr = deq_ptr_value;
  assign ram_man_2_io_deq_bits_MPORT_data = ram_man_2[ram_man_2_io_deq_bits_MPORT_addr]; // @[Decoupled.scala 273:95]
  assign ram_man_2_MPORT_data = io_enq_bits_man_2;
  assign ram_man_2_MPORT_addr = enq_ptr_value;
  assign ram_man_2_MPORT_mask = 1'h1;
  assign ram_man_2_MPORT_en = io_enq_ready & io_enq_valid;
  assign ram_man_3_io_deq_bits_MPORT_en = 1'h1;
  assign ram_man_3_io_deq_bits_MPORT_addr = deq_ptr_value;
  assign ram_man_3_io_deq_bits_MPORT_data = ram_man_3[ram_man_3_io_deq_bits_MPORT_addr]; // @[Decoupled.scala 273:95]
  assign ram_man_3_MPORT_data = io_enq_bits_man_3;
  assign ram_man_3_MPORT_addr = enq_ptr_value;
  assign ram_man_3_MPORT_mask = 1'h1;
  assign ram_man_3_MPORT_en = io_enq_ready & io_enq_valid;
  assign ram_exp_io_deq_bits_MPORT_en = 1'h1;
  assign ram_exp_io_deq_bits_MPORT_addr = deq_ptr_value;
  assign ram_exp_io_deq_bits_MPORT_data = ram_exp[ram_exp_io_deq_bits_MPORT_addr]; // @[Decoupled.scala 273:95]
  assign ram_exp_MPORT_data = io_enq_bits_exp;
  assign ram_exp_MPORT_addr = enq_ptr_value;
  assign ram_exp_MPORT_mask = 1'h1;
  assign ram_exp_MPORT_en = io_enq_ready & io_enq_valid;
  assign io_enq_ready = ~full; // @[Decoupled.scala 303:19]
  assign io_deq_valid = ~empty; // @[Decoupled.scala 302:19]
  assign io_deq_bits_sign_0 = ram_sign_0_io_deq_bits_MPORT_data; // @[Decoupled.scala 310:17]
  assign io_deq_bits_sign_1 = ram_sign_1_io_deq_bits_MPORT_data; // @[Decoupled.scala 310:17]
  assign io_deq_bits_sign_2 = ram_sign_2_io_deq_bits_MPORT_data; // @[Decoupled.scala 310:17]
  assign io_deq_bits_sign_3 = ram_sign_3_io_deq_bits_MPORT_data; // @[Decoupled.scala 310:17]
  assign io_deq_bits_man_0 = ram_man_0_io_deq_bits_MPORT_data; // @[Decoupled.scala 310:17]
  assign io_deq_bits_man_1 = ram_man_1_io_deq_bits_MPORT_data; // @[Decoupled.scala 310:17]
  assign io_deq_bits_man_2 = ram_man_2_io_deq_bits_MPORT_data; // @[Decoupled.scala 310:17]
  assign io_deq_bits_man_3 = ram_man_3_io_deq_bits_MPORT_data; // @[Decoupled.scala 310:17]
  assign io_deq_bits_exp = ram_exp_io_deq_bits_MPORT_data; // @[Decoupled.scala 310:17]
  always @(posedge clock) begin
    if (ram_sign_0_MPORT_en & ram_sign_0_MPORT_mask) begin
      ram_sign_0[ram_sign_0_MPORT_addr] <= ram_sign_0_MPORT_data; // @[Decoupled.scala 273:95]
    end
    if (ram_sign_1_MPORT_en & ram_sign_1_MPORT_mask) begin
      ram_sign_1[ram_sign_1_MPORT_addr] <= ram_sign_1_MPORT_data; // @[Decoupled.scala 273:95]
    end
    if (ram_sign_2_MPORT_en & ram_sign_2_MPORT_mask) begin
      ram_sign_2[ram_sign_2_MPORT_addr] <= ram_sign_2_MPORT_data; // @[Decoupled.scala 273:95]
    end
    if (ram_sign_3_MPORT_en & ram_sign_3_MPORT_mask) begin
      ram_sign_3[ram_sign_3_MPORT_addr] <= ram_sign_3_MPORT_data; // @[Decoupled.scala 273:95]
    end
    if (ram_man_0_MPORT_en & ram_man_0_MPORT_mask) begin
      ram_man_0[ram_man_0_MPORT_addr] <= ram_man_0_MPORT_data; // @[Decoupled.scala 273:95]
    end
    if (ram_man_1_MPORT_en & ram_man_1_MPORT_mask) begin
      ram_man_1[ram_man_1_MPORT_addr] <= ram_man_1_MPORT_data; // @[Decoupled.scala 273:95]
    end
    if (ram_man_2_MPORT_en & ram_man_2_MPORT_mask) begin
      ram_man_2[ram_man_2_MPORT_addr] <= ram_man_2_MPORT_data; // @[Decoupled.scala 273:95]
    end
    if (ram_man_3_MPORT_en & ram_man_3_MPORT_mask) begin
      ram_man_3[ram_man_3_MPORT_addr] <= ram_man_3_MPORT_data; // @[Decoupled.scala 273:95]
    end
    if (ram_exp_MPORT_en & ram_exp_MPORT_mask) begin
      ram_exp[ram_exp_MPORT_addr] <= ram_exp_MPORT_data; // @[Decoupled.scala 273:95]
    end
    if (reset) begin // @[Counter.scala 61:40]
      enq_ptr_value <= 2'h0; // @[Counter.scala 61:40]
    end else if (do_enq) begin // @[Decoupled.scala 286:16]
      enq_ptr_value <= _value_T_1; // @[Counter.scala 77:15]
    end
    if (reset) begin // @[Counter.scala 61:40]
      deq_ptr_value <= 2'h0; // @[Counter.scala 61:40]
    end else if (do_deq) begin // @[Decoupled.scala 290:16]
      deq_ptr_value <= _value_T_3; // @[Counter.scala 77:15]
    end
    if (reset) begin // @[Decoupled.scala 276:27]
      maybe_full <= 1'h0; // @[Decoupled.scala 276:27]
    end else if (do_enq != do_deq) begin // @[Decoupled.scala 293:27]
      maybe_full <= do_enq; // @[Decoupled.scala 294:16]
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
`ifdef RANDOMIZE_MEM_INIT
  _RAND_0 = {1{`RANDOM}};
  for (initvar = 0; initvar < 4; initvar = initvar+1)
    ram_sign_0[initvar] = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  for (initvar = 0; initvar < 4; initvar = initvar+1)
    ram_sign_1[initvar] = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  for (initvar = 0; initvar < 4; initvar = initvar+1)
    ram_sign_2[initvar] = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  for (initvar = 0; initvar < 4; initvar = initvar+1)
    ram_sign_3[initvar] = _RAND_3[0:0];
  _RAND_4 = {1{`RANDOM}};
  for (initvar = 0; initvar < 4; initvar = initvar+1)
    ram_man_0[initvar] = _RAND_4[3:0];
  _RAND_5 = {1{`RANDOM}};
  for (initvar = 0; initvar < 4; initvar = initvar+1)
    ram_man_1[initvar] = _RAND_5[3:0];
  _RAND_6 = {1{`RANDOM}};
  for (initvar = 0; initvar < 4; initvar = initvar+1)
    ram_man_2[initvar] = _RAND_6[3:0];
  _RAND_7 = {1{`RANDOM}};
  for (initvar = 0; initvar < 4; initvar = initvar+1)
    ram_man_3[initvar] = _RAND_7[3:0];
  _RAND_8 = {1{`RANDOM}};
  for (initvar = 0; initvar < 4; initvar = initvar+1)
    ram_exp[initvar] = _RAND_8[7:0];
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  _RAND_9 = {1{`RANDOM}};
  enq_ptr_value = _RAND_9[1:0];
  _RAND_10 = {1{`RANDOM}};
  deq_ptr_value = _RAND_10[1:0];
  _RAND_11 = {1{`RANDOM}};
  maybe_full = _RAND_11[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module SystolicArray_HBFP_forTesting(
  input        clock,
  input        reset,
  output       io_in_hor_0_ready,
  input        io_in_hor_0_valid,
  input        io_in_hor_0_bits_sign_0,
  input        io_in_hor_0_bits_sign_1,
  input        io_in_hor_0_bits_sign_2,
  input        io_in_hor_0_bits_sign_3,
  input  [3:0] io_in_hor_0_bits_man_0,
  input  [3:0] io_in_hor_0_bits_man_1,
  input  [3:0] io_in_hor_0_bits_man_2,
  input  [3:0] io_in_hor_0_bits_man_3,
  input  [7:0] io_in_hor_0_bits_exp,
  output       io_in_hor_1_ready,
  input        io_in_hor_1_valid,
  input        io_in_hor_1_bits_sign_0,
  input        io_in_hor_1_bits_sign_1,
  input        io_in_hor_1_bits_sign_2,
  input        io_in_hor_1_bits_sign_3,
  input  [3:0] io_in_hor_1_bits_man_0,
  input  [3:0] io_in_hor_1_bits_man_1,
  input  [3:0] io_in_hor_1_bits_man_2,
  input  [3:0] io_in_hor_1_bits_man_3,
  input  [7:0] io_in_hor_1_bits_exp,
  output       io_in_hor_2_ready,
  input        io_in_hor_2_valid,
  input        io_in_hor_2_bits_sign_0,
  input        io_in_hor_2_bits_sign_1,
  input        io_in_hor_2_bits_sign_2,
  input        io_in_hor_2_bits_sign_3,
  input  [3:0] io_in_hor_2_bits_man_0,
  input  [3:0] io_in_hor_2_bits_man_1,
  input  [3:0] io_in_hor_2_bits_man_2,
  input  [3:0] io_in_hor_2_bits_man_3,
  input  [7:0] io_in_hor_2_bits_exp,
  output       io_in_hor_3_ready,
  input        io_in_hor_3_valid,
  input        io_in_hor_3_bits_sign_0,
  input        io_in_hor_3_bits_sign_1,
  input        io_in_hor_3_bits_sign_2,
  input        io_in_hor_3_bits_sign_3,
  input  [3:0] io_in_hor_3_bits_man_0,
  input  [3:0] io_in_hor_3_bits_man_1,
  input  [3:0] io_in_hor_3_bits_man_2,
  input  [3:0] io_in_hor_3_bits_man_3,
  input  [7:0] io_in_hor_3_bits_exp,
  output       io_in_ver_0_ready,
  input        io_in_ver_0_valid,
  input        io_in_ver_0_bits_sign_0,
  input        io_in_ver_0_bits_sign_1,
  input        io_in_ver_0_bits_sign_2,
  input        io_in_ver_0_bits_sign_3,
  input  [3:0] io_in_ver_0_bits_man_0,
  input  [3:0] io_in_ver_0_bits_man_1,
  input  [3:0] io_in_ver_0_bits_man_2,
  input  [3:0] io_in_ver_0_bits_man_3,
  input  [7:0] io_in_ver_0_bits_exp,
  output       io_in_ver_1_ready,
  input        io_in_ver_1_valid,
  input        io_in_ver_1_bits_sign_0,
  input        io_in_ver_1_bits_sign_1,
  input        io_in_ver_1_bits_sign_2,
  input        io_in_ver_1_bits_sign_3,
  input  [3:0] io_in_ver_1_bits_man_0,
  input  [3:0] io_in_ver_1_bits_man_1,
  input  [3:0] io_in_ver_1_bits_man_2,
  input  [3:0] io_in_ver_1_bits_man_3,
  input  [7:0] io_in_ver_1_bits_exp,
  output       io_in_ver_2_ready,
  input        io_in_ver_2_valid,
  input        io_in_ver_2_bits_sign_0,
  input        io_in_ver_2_bits_sign_1,
  input        io_in_ver_2_bits_sign_2,
  input        io_in_ver_2_bits_sign_3,
  input  [3:0] io_in_ver_2_bits_man_0,
  input  [3:0] io_in_ver_2_bits_man_1,
  input  [3:0] io_in_ver_2_bits_man_2,
  input  [3:0] io_in_ver_2_bits_man_3,
  input  [7:0] io_in_ver_2_bits_exp,
  output       io_in_ver_3_ready,
  input        io_in_ver_3_valid,
  input        io_in_ver_3_bits_sign_0,
  input        io_in_ver_3_bits_sign_1,
  input        io_in_ver_3_bits_sign_2,
  input        io_in_ver_3_bits_sign_3,
  input  [3:0] io_in_ver_3_bits_man_0,
  input  [3:0] io_in_ver_3_bits_man_1,
  input  [3:0] io_in_ver_3_bits_man_2,
  input  [3:0] io_in_ver_3_bits_man_3,
  input  [7:0] io_in_ver_3_bits_exp,
  input        io_in_flag,
  output       io_out_0_0_result_sign,
  output [3:0] io_out_0_0_result_man,
  output [7:0] io_out_0_0_result_exp,
  output       io_out_0_1_result_sign,
  output [3:0] io_out_0_1_result_man,
  output [7:0] io_out_0_1_result_exp,
  output       io_out_0_2_result_sign,
  output [3:0] io_out_0_2_result_man,
  output [7:0] io_out_0_2_result_exp,
  output       io_out_0_3_result_sign,
  output [3:0] io_out_0_3_result_man,
  output [7:0] io_out_0_3_result_exp,
  output       io_out_1_0_result_sign,
  output [3:0] io_out_1_0_result_man,
  output [7:0] io_out_1_0_result_exp,
  output       io_out_1_1_result_sign,
  output [3:0] io_out_1_1_result_man,
  output [7:0] io_out_1_1_result_exp,
  output       io_out_1_2_result_sign,
  output [3:0] io_out_1_2_result_man,
  output [7:0] io_out_1_2_result_exp,
  output       io_out_1_3_result_sign,
  output [3:0] io_out_1_3_result_man,
  output [7:0] io_out_1_3_result_exp,
  output       io_out_2_0_result_sign,
  output [3:0] io_out_2_0_result_man,
  output [7:0] io_out_2_0_result_exp,
  output       io_out_2_1_result_sign,
  output [3:0] io_out_2_1_result_man,
  output [7:0] io_out_2_1_result_exp,
  output       io_out_2_2_result_sign,
  output [3:0] io_out_2_2_result_man,
  output [7:0] io_out_2_2_result_exp,
  output       io_out_2_3_result_sign,
  output [3:0] io_out_2_3_result_man,
  output [7:0] io_out_2_3_result_exp,
  output       io_out_3_0_result_sign,
  output [3:0] io_out_3_0_result_man,
  output [7:0] io_out_3_0_result_exp,
  output       io_out_3_1_result_sign,
  output [3:0] io_out_3_1_result_man,
  output [7:0] io_out_3_1_result_exp,
  output       io_out_3_2_result_sign,
  output [3:0] io_out_3_2_result_man,
  output [7:0] io_out_3_2_result_exp,
  output       io_out_3_3_result_sign,
  output [3:0] io_out_3_3_result_man,
  output [7:0] io_out_3_3_result_exp
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
  reg [31:0] _RAND_97;
  reg [31:0] _RAND_98;
  reg [31:0] _RAND_99;
  reg [31:0] _RAND_100;
  reg [31:0] _RAND_101;
  reg [31:0] _RAND_102;
  reg [31:0] _RAND_103;
  reg [31:0] _RAND_104;
  reg [31:0] _RAND_105;
  reg [31:0] _RAND_106;
  reg [31:0] _RAND_107;
  reg [31:0] _RAND_108;
  reg [31:0] _RAND_109;
  reg [31:0] _RAND_110;
  reg [31:0] _RAND_111;
  reg [31:0] _RAND_112;
  reg [31:0] _RAND_113;
  reg [31:0] _RAND_114;
  reg [31:0] _RAND_115;
  reg [31:0] _RAND_116;
  reg [31:0] _RAND_117;
  reg [31:0] _RAND_118;
  reg [31:0] _RAND_119;
  reg [31:0] _RAND_120;
  reg [31:0] _RAND_121;
  reg [31:0] _RAND_122;
  reg [31:0] _RAND_123;
  reg [31:0] _RAND_124;
  reg [31:0] _RAND_125;
  reg [31:0] _RAND_126;
  reg [31:0] _RAND_127;
  reg [31:0] _RAND_128;
  reg [31:0] _RAND_129;
  reg [31:0] _RAND_130;
  reg [31:0] _RAND_131;
  reg [31:0] _RAND_132;
  reg [31:0] _RAND_133;
  reg [31:0] _RAND_134;
  reg [31:0] _RAND_135;
  reg [31:0] _RAND_136;
  reg [31:0] _RAND_137;
  reg [31:0] _RAND_138;
  reg [31:0] _RAND_139;
  reg [31:0] _RAND_140;
  reg [31:0] _RAND_141;
  reg [31:0] _RAND_142;
  reg [31:0] _RAND_143;
  reg [31:0] _RAND_144;
  reg [31:0] _RAND_145;
  reg [31:0] _RAND_146;
  reg [31:0] _RAND_147;
  reg [31:0] _RAND_148;
  reg [31:0] _RAND_149;
  reg [31:0] _RAND_150;
  reg [31:0] _RAND_151;
  reg [31:0] _RAND_152;
  reg [31:0] _RAND_153;
  reg [31:0] _RAND_154;
  reg [31:0] _RAND_155;
  reg [31:0] _RAND_156;
  reg [31:0] _RAND_157;
  reg [31:0] _RAND_158;
  reg [31:0] _RAND_159;
  reg [31:0] _RAND_160;
  reg [31:0] _RAND_161;
  reg [31:0] _RAND_162;
  reg [31:0] _RAND_163;
  reg [31:0] _RAND_164;
  reg [31:0] _RAND_165;
  reg [31:0] _RAND_166;
  reg [31:0] _RAND_167;
  reg [31:0] _RAND_168;
  reg [31:0] _RAND_169;
  reg [31:0] _RAND_170;
  reg [31:0] _RAND_171;
  reg [31:0] _RAND_172;
  reg [31:0] _RAND_173;
  reg [31:0] _RAND_174;
  reg [31:0] _RAND_175;
  reg [31:0] _RAND_176;
  reg [31:0] _RAND_177;
  reg [31:0] _RAND_178;
  reg [31:0] _RAND_179;
  reg [31:0] _RAND_180;
  reg [31:0] _RAND_181;
  reg [31:0] _RAND_182;
  reg [31:0] _RAND_183;
  reg [31:0] _RAND_184;
  reg [31:0] _RAND_185;
  reg [31:0] _RAND_186;
  reg [31:0] _RAND_187;
  reg [31:0] _RAND_188;
  reg [31:0] _RAND_189;
  reg [31:0] _RAND_190;
  reg [31:0] _RAND_191;
  reg [31:0] _RAND_192;
  reg [31:0] _RAND_193;
  reg [31:0] _RAND_194;
  reg [31:0] _RAND_195;
  reg [31:0] _RAND_196;
  reg [31:0] _RAND_197;
  reg [31:0] _RAND_198;
  reg [31:0] _RAND_199;
  reg [31:0] _RAND_200;
  reg [31:0] _RAND_201;
  reg [31:0] _RAND_202;
  reg [31:0] _RAND_203;
  reg [31:0] _RAND_204;
  reg [31:0] _RAND_205;
  reg [31:0] _RAND_206;
  reg [31:0] _RAND_207;
  reg [31:0] _RAND_208;
  reg [31:0] _RAND_209;
  reg [31:0] _RAND_210;
  reg [31:0] _RAND_211;
  reg [31:0] _RAND_212;
  reg [31:0] _RAND_213;
  reg [31:0] _RAND_214;
  reg [31:0] _RAND_215;
  reg [31:0] _RAND_216;
  reg [31:0] _RAND_217;
  reg [31:0] _RAND_218;
  reg [31:0] _RAND_219;
  reg [31:0] _RAND_220;
  reg [31:0] _RAND_221;
  reg [31:0] _RAND_222;
  reg [31:0] _RAND_223;
  reg [31:0] _RAND_224;
  reg [31:0] _RAND_225;
  reg [31:0] _RAND_226;
  reg [31:0] _RAND_227;
`endif // RANDOMIZE_REG_INIT
  wire  pes_0_0_clock; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_0_0_reset; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_0_0_io_in_hor_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_0_0_io_in_hor_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_0_0_io_in_hor_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_0_0_io_in_hor_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_0_0_io_in_hor_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_0_0_io_in_hor_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_0_0_io_in_hor_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_0_0_io_in_hor_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [7:0] pes_0_0_io_in_hor_exp; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_0_0_io_in_ver_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_0_0_io_in_ver_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_0_0_io_in_ver_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_0_0_io_in_ver_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_0_0_io_in_ver_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_0_0_io_in_ver_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_0_0_io_in_ver_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_0_0_io_in_ver_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [7:0] pes_0_0_io_in_ver_exp; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_0_0_io_in_flag; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_0_0_io_out_hor_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_0_0_io_out_hor_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_0_0_io_out_hor_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_0_0_io_out_hor_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_0_0_io_out_hor_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_0_0_io_out_hor_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_0_0_io_out_hor_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_0_0_io_out_hor_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [7:0] pes_0_0_io_out_hor_exp; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_0_0_io_out_ver_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_0_0_io_out_ver_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_0_0_io_out_ver_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_0_0_io_out_ver_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_0_0_io_out_ver_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_0_0_io_out_ver_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_0_0_io_out_ver_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_0_0_io_out_ver_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [7:0] pes_0_0_io_out_ver_exp; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_0_0_io_out_result_sign; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_0_0_io_out_result_man; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [7:0] pes_0_0_io_out_result_exp; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_0_1_clock; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_0_1_reset; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_0_1_io_in_hor_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_0_1_io_in_hor_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_0_1_io_in_hor_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_0_1_io_in_hor_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_0_1_io_in_hor_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_0_1_io_in_hor_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_0_1_io_in_hor_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_0_1_io_in_hor_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [7:0] pes_0_1_io_in_hor_exp; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_0_1_io_in_ver_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_0_1_io_in_ver_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_0_1_io_in_ver_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_0_1_io_in_ver_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_0_1_io_in_ver_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_0_1_io_in_ver_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_0_1_io_in_ver_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_0_1_io_in_ver_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [7:0] pes_0_1_io_in_ver_exp; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_0_1_io_in_flag; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_0_1_io_out_hor_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_0_1_io_out_hor_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_0_1_io_out_hor_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_0_1_io_out_hor_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_0_1_io_out_hor_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_0_1_io_out_hor_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_0_1_io_out_hor_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_0_1_io_out_hor_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [7:0] pes_0_1_io_out_hor_exp; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_0_1_io_out_ver_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_0_1_io_out_ver_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_0_1_io_out_ver_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_0_1_io_out_ver_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_0_1_io_out_ver_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_0_1_io_out_ver_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_0_1_io_out_ver_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_0_1_io_out_ver_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [7:0] pes_0_1_io_out_ver_exp; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_0_1_io_out_result_sign; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_0_1_io_out_result_man; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [7:0] pes_0_1_io_out_result_exp; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_0_2_clock; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_0_2_reset; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_0_2_io_in_hor_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_0_2_io_in_hor_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_0_2_io_in_hor_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_0_2_io_in_hor_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_0_2_io_in_hor_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_0_2_io_in_hor_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_0_2_io_in_hor_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_0_2_io_in_hor_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [7:0] pes_0_2_io_in_hor_exp; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_0_2_io_in_ver_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_0_2_io_in_ver_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_0_2_io_in_ver_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_0_2_io_in_ver_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_0_2_io_in_ver_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_0_2_io_in_ver_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_0_2_io_in_ver_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_0_2_io_in_ver_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [7:0] pes_0_2_io_in_ver_exp; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_0_2_io_in_flag; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_0_2_io_out_hor_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_0_2_io_out_hor_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_0_2_io_out_hor_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_0_2_io_out_hor_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_0_2_io_out_hor_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_0_2_io_out_hor_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_0_2_io_out_hor_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_0_2_io_out_hor_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [7:0] pes_0_2_io_out_hor_exp; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_0_2_io_out_ver_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_0_2_io_out_ver_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_0_2_io_out_ver_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_0_2_io_out_ver_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_0_2_io_out_ver_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_0_2_io_out_ver_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_0_2_io_out_ver_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_0_2_io_out_ver_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [7:0] pes_0_2_io_out_ver_exp; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_0_2_io_out_result_sign; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_0_2_io_out_result_man; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [7:0] pes_0_2_io_out_result_exp; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_0_3_clock; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_0_3_reset; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_0_3_io_in_hor_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_0_3_io_in_hor_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_0_3_io_in_hor_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_0_3_io_in_hor_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_0_3_io_in_hor_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_0_3_io_in_hor_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_0_3_io_in_hor_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_0_3_io_in_hor_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [7:0] pes_0_3_io_in_hor_exp; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_0_3_io_in_ver_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_0_3_io_in_ver_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_0_3_io_in_ver_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_0_3_io_in_ver_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_0_3_io_in_ver_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_0_3_io_in_ver_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_0_3_io_in_ver_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_0_3_io_in_ver_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [7:0] pes_0_3_io_in_ver_exp; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_0_3_io_in_flag; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_0_3_io_out_hor_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_0_3_io_out_hor_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_0_3_io_out_hor_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_0_3_io_out_hor_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_0_3_io_out_hor_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_0_3_io_out_hor_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_0_3_io_out_hor_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_0_3_io_out_hor_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [7:0] pes_0_3_io_out_hor_exp; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_0_3_io_out_ver_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_0_3_io_out_ver_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_0_3_io_out_ver_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_0_3_io_out_ver_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_0_3_io_out_ver_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_0_3_io_out_ver_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_0_3_io_out_ver_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_0_3_io_out_ver_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [7:0] pes_0_3_io_out_ver_exp; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_0_3_io_out_result_sign; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_0_3_io_out_result_man; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [7:0] pes_0_3_io_out_result_exp; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_1_0_clock; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_1_0_reset; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_1_0_io_in_hor_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_1_0_io_in_hor_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_1_0_io_in_hor_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_1_0_io_in_hor_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_1_0_io_in_hor_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_1_0_io_in_hor_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_1_0_io_in_hor_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_1_0_io_in_hor_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [7:0] pes_1_0_io_in_hor_exp; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_1_0_io_in_ver_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_1_0_io_in_ver_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_1_0_io_in_ver_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_1_0_io_in_ver_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_1_0_io_in_ver_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_1_0_io_in_ver_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_1_0_io_in_ver_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_1_0_io_in_ver_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [7:0] pes_1_0_io_in_ver_exp; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_1_0_io_in_flag; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_1_0_io_out_hor_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_1_0_io_out_hor_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_1_0_io_out_hor_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_1_0_io_out_hor_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_1_0_io_out_hor_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_1_0_io_out_hor_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_1_0_io_out_hor_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_1_0_io_out_hor_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [7:0] pes_1_0_io_out_hor_exp; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_1_0_io_out_ver_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_1_0_io_out_ver_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_1_0_io_out_ver_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_1_0_io_out_ver_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_1_0_io_out_ver_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_1_0_io_out_ver_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_1_0_io_out_ver_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_1_0_io_out_ver_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [7:0] pes_1_0_io_out_ver_exp; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_1_0_io_out_result_sign; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_1_0_io_out_result_man; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [7:0] pes_1_0_io_out_result_exp; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_1_1_clock; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_1_1_reset; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_1_1_io_in_hor_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_1_1_io_in_hor_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_1_1_io_in_hor_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_1_1_io_in_hor_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_1_1_io_in_hor_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_1_1_io_in_hor_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_1_1_io_in_hor_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_1_1_io_in_hor_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [7:0] pes_1_1_io_in_hor_exp; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_1_1_io_in_ver_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_1_1_io_in_ver_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_1_1_io_in_ver_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_1_1_io_in_ver_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_1_1_io_in_ver_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_1_1_io_in_ver_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_1_1_io_in_ver_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_1_1_io_in_ver_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [7:0] pes_1_1_io_in_ver_exp; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_1_1_io_in_flag; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_1_1_io_out_hor_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_1_1_io_out_hor_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_1_1_io_out_hor_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_1_1_io_out_hor_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_1_1_io_out_hor_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_1_1_io_out_hor_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_1_1_io_out_hor_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_1_1_io_out_hor_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [7:0] pes_1_1_io_out_hor_exp; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_1_1_io_out_ver_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_1_1_io_out_ver_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_1_1_io_out_ver_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_1_1_io_out_ver_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_1_1_io_out_ver_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_1_1_io_out_ver_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_1_1_io_out_ver_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_1_1_io_out_ver_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [7:0] pes_1_1_io_out_ver_exp; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_1_1_io_out_result_sign; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_1_1_io_out_result_man; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [7:0] pes_1_1_io_out_result_exp; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_1_2_clock; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_1_2_reset; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_1_2_io_in_hor_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_1_2_io_in_hor_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_1_2_io_in_hor_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_1_2_io_in_hor_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_1_2_io_in_hor_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_1_2_io_in_hor_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_1_2_io_in_hor_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_1_2_io_in_hor_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [7:0] pes_1_2_io_in_hor_exp; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_1_2_io_in_ver_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_1_2_io_in_ver_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_1_2_io_in_ver_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_1_2_io_in_ver_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_1_2_io_in_ver_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_1_2_io_in_ver_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_1_2_io_in_ver_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_1_2_io_in_ver_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [7:0] pes_1_2_io_in_ver_exp; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_1_2_io_in_flag; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_1_2_io_out_hor_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_1_2_io_out_hor_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_1_2_io_out_hor_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_1_2_io_out_hor_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_1_2_io_out_hor_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_1_2_io_out_hor_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_1_2_io_out_hor_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_1_2_io_out_hor_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [7:0] pes_1_2_io_out_hor_exp; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_1_2_io_out_ver_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_1_2_io_out_ver_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_1_2_io_out_ver_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_1_2_io_out_ver_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_1_2_io_out_ver_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_1_2_io_out_ver_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_1_2_io_out_ver_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_1_2_io_out_ver_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [7:0] pes_1_2_io_out_ver_exp; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_1_2_io_out_result_sign; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_1_2_io_out_result_man; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [7:0] pes_1_2_io_out_result_exp; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_1_3_clock; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_1_3_reset; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_1_3_io_in_hor_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_1_3_io_in_hor_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_1_3_io_in_hor_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_1_3_io_in_hor_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_1_3_io_in_hor_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_1_3_io_in_hor_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_1_3_io_in_hor_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_1_3_io_in_hor_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [7:0] pes_1_3_io_in_hor_exp; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_1_3_io_in_ver_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_1_3_io_in_ver_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_1_3_io_in_ver_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_1_3_io_in_ver_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_1_3_io_in_ver_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_1_3_io_in_ver_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_1_3_io_in_ver_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_1_3_io_in_ver_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [7:0] pes_1_3_io_in_ver_exp; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_1_3_io_in_flag; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_1_3_io_out_hor_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_1_3_io_out_hor_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_1_3_io_out_hor_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_1_3_io_out_hor_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_1_3_io_out_hor_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_1_3_io_out_hor_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_1_3_io_out_hor_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_1_3_io_out_hor_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [7:0] pes_1_3_io_out_hor_exp; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_1_3_io_out_ver_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_1_3_io_out_ver_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_1_3_io_out_ver_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_1_3_io_out_ver_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_1_3_io_out_ver_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_1_3_io_out_ver_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_1_3_io_out_ver_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_1_3_io_out_ver_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [7:0] pes_1_3_io_out_ver_exp; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_1_3_io_out_result_sign; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_1_3_io_out_result_man; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [7:0] pes_1_3_io_out_result_exp; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_2_0_clock; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_2_0_reset; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_2_0_io_in_hor_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_2_0_io_in_hor_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_2_0_io_in_hor_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_2_0_io_in_hor_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_2_0_io_in_hor_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_2_0_io_in_hor_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_2_0_io_in_hor_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_2_0_io_in_hor_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [7:0] pes_2_0_io_in_hor_exp; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_2_0_io_in_ver_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_2_0_io_in_ver_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_2_0_io_in_ver_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_2_0_io_in_ver_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_2_0_io_in_ver_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_2_0_io_in_ver_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_2_0_io_in_ver_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_2_0_io_in_ver_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [7:0] pes_2_0_io_in_ver_exp; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_2_0_io_in_flag; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_2_0_io_out_hor_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_2_0_io_out_hor_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_2_0_io_out_hor_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_2_0_io_out_hor_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_2_0_io_out_hor_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_2_0_io_out_hor_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_2_0_io_out_hor_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_2_0_io_out_hor_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [7:0] pes_2_0_io_out_hor_exp; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_2_0_io_out_ver_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_2_0_io_out_ver_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_2_0_io_out_ver_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_2_0_io_out_ver_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_2_0_io_out_ver_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_2_0_io_out_ver_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_2_0_io_out_ver_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_2_0_io_out_ver_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [7:0] pes_2_0_io_out_ver_exp; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_2_0_io_out_result_sign; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_2_0_io_out_result_man; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [7:0] pes_2_0_io_out_result_exp; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_2_1_clock; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_2_1_reset; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_2_1_io_in_hor_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_2_1_io_in_hor_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_2_1_io_in_hor_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_2_1_io_in_hor_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_2_1_io_in_hor_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_2_1_io_in_hor_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_2_1_io_in_hor_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_2_1_io_in_hor_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [7:0] pes_2_1_io_in_hor_exp; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_2_1_io_in_ver_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_2_1_io_in_ver_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_2_1_io_in_ver_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_2_1_io_in_ver_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_2_1_io_in_ver_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_2_1_io_in_ver_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_2_1_io_in_ver_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_2_1_io_in_ver_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [7:0] pes_2_1_io_in_ver_exp; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_2_1_io_in_flag; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_2_1_io_out_hor_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_2_1_io_out_hor_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_2_1_io_out_hor_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_2_1_io_out_hor_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_2_1_io_out_hor_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_2_1_io_out_hor_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_2_1_io_out_hor_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_2_1_io_out_hor_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [7:0] pes_2_1_io_out_hor_exp; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_2_1_io_out_ver_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_2_1_io_out_ver_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_2_1_io_out_ver_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_2_1_io_out_ver_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_2_1_io_out_ver_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_2_1_io_out_ver_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_2_1_io_out_ver_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_2_1_io_out_ver_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [7:0] pes_2_1_io_out_ver_exp; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_2_1_io_out_result_sign; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_2_1_io_out_result_man; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [7:0] pes_2_1_io_out_result_exp; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_2_2_clock; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_2_2_reset; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_2_2_io_in_hor_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_2_2_io_in_hor_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_2_2_io_in_hor_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_2_2_io_in_hor_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_2_2_io_in_hor_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_2_2_io_in_hor_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_2_2_io_in_hor_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_2_2_io_in_hor_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [7:0] pes_2_2_io_in_hor_exp; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_2_2_io_in_ver_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_2_2_io_in_ver_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_2_2_io_in_ver_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_2_2_io_in_ver_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_2_2_io_in_ver_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_2_2_io_in_ver_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_2_2_io_in_ver_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_2_2_io_in_ver_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [7:0] pes_2_2_io_in_ver_exp; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_2_2_io_in_flag; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_2_2_io_out_hor_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_2_2_io_out_hor_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_2_2_io_out_hor_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_2_2_io_out_hor_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_2_2_io_out_hor_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_2_2_io_out_hor_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_2_2_io_out_hor_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_2_2_io_out_hor_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [7:0] pes_2_2_io_out_hor_exp; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_2_2_io_out_ver_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_2_2_io_out_ver_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_2_2_io_out_ver_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_2_2_io_out_ver_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_2_2_io_out_ver_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_2_2_io_out_ver_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_2_2_io_out_ver_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_2_2_io_out_ver_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [7:0] pes_2_2_io_out_ver_exp; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_2_2_io_out_result_sign; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_2_2_io_out_result_man; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [7:0] pes_2_2_io_out_result_exp; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_2_3_clock; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_2_3_reset; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_2_3_io_in_hor_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_2_3_io_in_hor_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_2_3_io_in_hor_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_2_3_io_in_hor_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_2_3_io_in_hor_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_2_3_io_in_hor_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_2_3_io_in_hor_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_2_3_io_in_hor_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [7:0] pes_2_3_io_in_hor_exp; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_2_3_io_in_ver_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_2_3_io_in_ver_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_2_3_io_in_ver_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_2_3_io_in_ver_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_2_3_io_in_ver_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_2_3_io_in_ver_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_2_3_io_in_ver_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_2_3_io_in_ver_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [7:0] pes_2_3_io_in_ver_exp; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_2_3_io_in_flag; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_2_3_io_out_hor_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_2_3_io_out_hor_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_2_3_io_out_hor_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_2_3_io_out_hor_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_2_3_io_out_hor_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_2_3_io_out_hor_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_2_3_io_out_hor_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_2_3_io_out_hor_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [7:0] pes_2_3_io_out_hor_exp; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_2_3_io_out_ver_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_2_3_io_out_ver_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_2_3_io_out_ver_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_2_3_io_out_ver_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_2_3_io_out_ver_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_2_3_io_out_ver_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_2_3_io_out_ver_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_2_3_io_out_ver_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [7:0] pes_2_3_io_out_ver_exp; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_2_3_io_out_result_sign; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_2_3_io_out_result_man; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [7:0] pes_2_3_io_out_result_exp; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_3_0_clock; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_3_0_reset; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_3_0_io_in_hor_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_3_0_io_in_hor_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_3_0_io_in_hor_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_3_0_io_in_hor_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_3_0_io_in_hor_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_3_0_io_in_hor_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_3_0_io_in_hor_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_3_0_io_in_hor_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [7:0] pes_3_0_io_in_hor_exp; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_3_0_io_in_ver_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_3_0_io_in_ver_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_3_0_io_in_ver_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_3_0_io_in_ver_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_3_0_io_in_ver_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_3_0_io_in_ver_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_3_0_io_in_ver_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_3_0_io_in_ver_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [7:0] pes_3_0_io_in_ver_exp; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_3_0_io_in_flag; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_3_0_io_out_hor_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_3_0_io_out_hor_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_3_0_io_out_hor_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_3_0_io_out_hor_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_3_0_io_out_hor_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_3_0_io_out_hor_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_3_0_io_out_hor_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_3_0_io_out_hor_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [7:0] pes_3_0_io_out_hor_exp; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_3_0_io_out_ver_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_3_0_io_out_ver_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_3_0_io_out_ver_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_3_0_io_out_ver_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_3_0_io_out_ver_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_3_0_io_out_ver_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_3_0_io_out_ver_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_3_0_io_out_ver_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [7:0] pes_3_0_io_out_ver_exp; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_3_0_io_out_result_sign; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_3_0_io_out_result_man; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [7:0] pes_3_0_io_out_result_exp; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_3_1_clock; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_3_1_reset; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_3_1_io_in_hor_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_3_1_io_in_hor_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_3_1_io_in_hor_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_3_1_io_in_hor_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_3_1_io_in_hor_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_3_1_io_in_hor_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_3_1_io_in_hor_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_3_1_io_in_hor_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [7:0] pes_3_1_io_in_hor_exp; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_3_1_io_in_ver_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_3_1_io_in_ver_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_3_1_io_in_ver_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_3_1_io_in_ver_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_3_1_io_in_ver_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_3_1_io_in_ver_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_3_1_io_in_ver_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_3_1_io_in_ver_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [7:0] pes_3_1_io_in_ver_exp; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_3_1_io_in_flag; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_3_1_io_out_hor_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_3_1_io_out_hor_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_3_1_io_out_hor_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_3_1_io_out_hor_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_3_1_io_out_hor_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_3_1_io_out_hor_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_3_1_io_out_hor_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_3_1_io_out_hor_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [7:0] pes_3_1_io_out_hor_exp; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_3_1_io_out_ver_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_3_1_io_out_ver_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_3_1_io_out_ver_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_3_1_io_out_ver_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_3_1_io_out_ver_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_3_1_io_out_ver_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_3_1_io_out_ver_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_3_1_io_out_ver_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [7:0] pes_3_1_io_out_ver_exp; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_3_1_io_out_result_sign; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_3_1_io_out_result_man; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [7:0] pes_3_1_io_out_result_exp; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_3_2_clock; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_3_2_reset; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_3_2_io_in_hor_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_3_2_io_in_hor_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_3_2_io_in_hor_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_3_2_io_in_hor_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_3_2_io_in_hor_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_3_2_io_in_hor_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_3_2_io_in_hor_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_3_2_io_in_hor_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [7:0] pes_3_2_io_in_hor_exp; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_3_2_io_in_ver_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_3_2_io_in_ver_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_3_2_io_in_ver_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_3_2_io_in_ver_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_3_2_io_in_ver_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_3_2_io_in_ver_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_3_2_io_in_ver_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_3_2_io_in_ver_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [7:0] pes_3_2_io_in_ver_exp; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_3_2_io_in_flag; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_3_2_io_out_hor_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_3_2_io_out_hor_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_3_2_io_out_hor_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_3_2_io_out_hor_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_3_2_io_out_hor_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_3_2_io_out_hor_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_3_2_io_out_hor_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_3_2_io_out_hor_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [7:0] pes_3_2_io_out_hor_exp; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_3_2_io_out_ver_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_3_2_io_out_ver_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_3_2_io_out_ver_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_3_2_io_out_ver_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_3_2_io_out_ver_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_3_2_io_out_ver_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_3_2_io_out_ver_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_3_2_io_out_ver_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [7:0] pes_3_2_io_out_ver_exp; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_3_2_io_out_result_sign; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_3_2_io_out_result_man; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [7:0] pes_3_2_io_out_result_exp; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_3_3_clock; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_3_3_reset; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_3_3_io_in_hor_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_3_3_io_in_hor_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_3_3_io_in_hor_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_3_3_io_in_hor_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_3_3_io_in_hor_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_3_3_io_in_hor_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_3_3_io_in_hor_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_3_3_io_in_hor_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [7:0] pes_3_3_io_in_hor_exp; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_3_3_io_in_ver_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_3_3_io_in_ver_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_3_3_io_in_ver_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_3_3_io_in_ver_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_3_3_io_in_ver_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_3_3_io_in_ver_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_3_3_io_in_ver_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_3_3_io_in_ver_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [7:0] pes_3_3_io_in_ver_exp; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_3_3_io_in_flag; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_3_3_io_out_hor_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_3_3_io_out_hor_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_3_3_io_out_hor_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_3_3_io_out_hor_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_3_3_io_out_hor_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_3_3_io_out_hor_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_3_3_io_out_hor_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_3_3_io_out_hor_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [7:0] pes_3_3_io_out_hor_exp; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_3_3_io_out_ver_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_3_3_io_out_ver_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_3_3_io_out_ver_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_3_3_io_out_ver_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_3_3_io_out_ver_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_3_3_io_out_ver_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_3_3_io_out_ver_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_3_3_io_out_ver_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [7:0] pes_3_3_io_out_ver_exp; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  pes_3_3_io_out_result_sign; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [3:0] pes_3_3_io_out_result_man; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire [7:0] pes_3_3_io_out_result_exp; // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
  wire  myinputQ_hor_0_clock; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire  myinputQ_hor_0_reset; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire  myinputQ_hor_0_io_enq_ready; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire  myinputQ_hor_0_io_enq_valid; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire  myinputQ_hor_0_io_enq_bits_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire  myinputQ_hor_0_io_enq_bits_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire  myinputQ_hor_0_io_enq_bits_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire  myinputQ_hor_0_io_enq_bits_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire [3:0] myinputQ_hor_0_io_enq_bits_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire [3:0] myinputQ_hor_0_io_enq_bits_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire [3:0] myinputQ_hor_0_io_enq_bits_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire [3:0] myinputQ_hor_0_io_enq_bits_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire [7:0] myinputQ_hor_0_io_enq_bits_exp; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire  myinputQ_hor_0_io_deq_ready; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire  myinputQ_hor_0_io_deq_valid; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire  myinputQ_hor_0_io_deq_bits_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire  myinputQ_hor_0_io_deq_bits_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire  myinputQ_hor_0_io_deq_bits_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire  myinputQ_hor_0_io_deq_bits_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire [3:0] myinputQ_hor_0_io_deq_bits_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire [3:0] myinputQ_hor_0_io_deq_bits_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire [3:0] myinputQ_hor_0_io_deq_bits_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire [3:0] myinputQ_hor_0_io_deq_bits_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire [7:0] myinputQ_hor_0_io_deq_bits_exp; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire  myinputQ_hor_1_clock; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire  myinputQ_hor_1_reset; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire  myinputQ_hor_1_io_enq_ready; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire  myinputQ_hor_1_io_enq_valid; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire  myinputQ_hor_1_io_enq_bits_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire  myinputQ_hor_1_io_enq_bits_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire  myinputQ_hor_1_io_enq_bits_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire  myinputQ_hor_1_io_enq_bits_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire [3:0] myinputQ_hor_1_io_enq_bits_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire [3:0] myinputQ_hor_1_io_enq_bits_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire [3:0] myinputQ_hor_1_io_enq_bits_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire [3:0] myinputQ_hor_1_io_enq_bits_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire [7:0] myinputQ_hor_1_io_enq_bits_exp; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire  myinputQ_hor_1_io_deq_ready; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire  myinputQ_hor_1_io_deq_valid; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire  myinputQ_hor_1_io_deq_bits_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire  myinputQ_hor_1_io_deq_bits_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire  myinputQ_hor_1_io_deq_bits_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire  myinputQ_hor_1_io_deq_bits_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire [3:0] myinputQ_hor_1_io_deq_bits_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire [3:0] myinputQ_hor_1_io_deq_bits_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire [3:0] myinputQ_hor_1_io_deq_bits_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire [3:0] myinputQ_hor_1_io_deq_bits_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire [7:0] myinputQ_hor_1_io_deq_bits_exp; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire  myinputQ_hor_2_clock; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire  myinputQ_hor_2_reset; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire  myinputQ_hor_2_io_enq_ready; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire  myinputQ_hor_2_io_enq_valid; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire  myinputQ_hor_2_io_enq_bits_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire  myinputQ_hor_2_io_enq_bits_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire  myinputQ_hor_2_io_enq_bits_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire  myinputQ_hor_2_io_enq_bits_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire [3:0] myinputQ_hor_2_io_enq_bits_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire [3:0] myinputQ_hor_2_io_enq_bits_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire [3:0] myinputQ_hor_2_io_enq_bits_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire [3:0] myinputQ_hor_2_io_enq_bits_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire [7:0] myinputQ_hor_2_io_enq_bits_exp; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire  myinputQ_hor_2_io_deq_ready; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire  myinputQ_hor_2_io_deq_valid; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire  myinputQ_hor_2_io_deq_bits_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire  myinputQ_hor_2_io_deq_bits_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire  myinputQ_hor_2_io_deq_bits_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire  myinputQ_hor_2_io_deq_bits_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire [3:0] myinputQ_hor_2_io_deq_bits_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire [3:0] myinputQ_hor_2_io_deq_bits_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire [3:0] myinputQ_hor_2_io_deq_bits_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire [3:0] myinputQ_hor_2_io_deq_bits_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire [7:0] myinputQ_hor_2_io_deq_bits_exp; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire  myinputQ_hor_3_clock; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire  myinputQ_hor_3_reset; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire  myinputQ_hor_3_io_enq_ready; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire  myinputQ_hor_3_io_enq_valid; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire  myinputQ_hor_3_io_enq_bits_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire  myinputQ_hor_3_io_enq_bits_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire  myinputQ_hor_3_io_enq_bits_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire  myinputQ_hor_3_io_enq_bits_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire [3:0] myinputQ_hor_3_io_enq_bits_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire [3:0] myinputQ_hor_3_io_enq_bits_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire [3:0] myinputQ_hor_3_io_enq_bits_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire [3:0] myinputQ_hor_3_io_enq_bits_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire [7:0] myinputQ_hor_3_io_enq_bits_exp; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire  myinputQ_hor_3_io_deq_ready; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire  myinputQ_hor_3_io_deq_valid; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire  myinputQ_hor_3_io_deq_bits_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire  myinputQ_hor_3_io_deq_bits_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire  myinputQ_hor_3_io_deq_bits_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire  myinputQ_hor_3_io_deq_bits_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire [3:0] myinputQ_hor_3_io_deq_bits_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire [3:0] myinputQ_hor_3_io_deq_bits_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire [3:0] myinputQ_hor_3_io_deq_bits_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire [3:0] myinputQ_hor_3_io_deq_bits_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire [7:0] myinputQ_hor_3_io_deq_bits_exp; // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
  wire  myinputQ_ver_0_clock; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire  myinputQ_ver_0_reset; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire  myinputQ_ver_0_io_enq_ready; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire  myinputQ_ver_0_io_enq_valid; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire  myinputQ_ver_0_io_enq_bits_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire  myinputQ_ver_0_io_enq_bits_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire  myinputQ_ver_0_io_enq_bits_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire  myinputQ_ver_0_io_enq_bits_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire [3:0] myinputQ_ver_0_io_enq_bits_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire [3:0] myinputQ_ver_0_io_enq_bits_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire [3:0] myinputQ_ver_0_io_enq_bits_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire [3:0] myinputQ_ver_0_io_enq_bits_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire [7:0] myinputQ_ver_0_io_enq_bits_exp; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire  myinputQ_ver_0_io_deq_ready; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire  myinputQ_ver_0_io_deq_valid; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire  myinputQ_ver_0_io_deq_bits_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire  myinputQ_ver_0_io_deq_bits_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire  myinputQ_ver_0_io_deq_bits_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire  myinputQ_ver_0_io_deq_bits_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire [3:0] myinputQ_ver_0_io_deq_bits_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire [3:0] myinputQ_ver_0_io_deq_bits_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire [3:0] myinputQ_ver_0_io_deq_bits_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire [3:0] myinputQ_ver_0_io_deq_bits_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire [7:0] myinputQ_ver_0_io_deq_bits_exp; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire  myinputQ_ver_1_clock; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire  myinputQ_ver_1_reset; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire  myinputQ_ver_1_io_enq_ready; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire  myinputQ_ver_1_io_enq_valid; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire  myinputQ_ver_1_io_enq_bits_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire  myinputQ_ver_1_io_enq_bits_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire  myinputQ_ver_1_io_enq_bits_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire  myinputQ_ver_1_io_enq_bits_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire [3:0] myinputQ_ver_1_io_enq_bits_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire [3:0] myinputQ_ver_1_io_enq_bits_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire [3:0] myinputQ_ver_1_io_enq_bits_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire [3:0] myinputQ_ver_1_io_enq_bits_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire [7:0] myinputQ_ver_1_io_enq_bits_exp; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire  myinputQ_ver_1_io_deq_ready; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire  myinputQ_ver_1_io_deq_valid; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire  myinputQ_ver_1_io_deq_bits_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire  myinputQ_ver_1_io_deq_bits_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire  myinputQ_ver_1_io_deq_bits_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire  myinputQ_ver_1_io_deq_bits_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire [3:0] myinputQ_ver_1_io_deq_bits_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire [3:0] myinputQ_ver_1_io_deq_bits_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire [3:0] myinputQ_ver_1_io_deq_bits_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire [3:0] myinputQ_ver_1_io_deq_bits_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire [7:0] myinputQ_ver_1_io_deq_bits_exp; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire  myinputQ_ver_2_clock; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire  myinputQ_ver_2_reset; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire  myinputQ_ver_2_io_enq_ready; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire  myinputQ_ver_2_io_enq_valid; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire  myinputQ_ver_2_io_enq_bits_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire  myinputQ_ver_2_io_enq_bits_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire  myinputQ_ver_2_io_enq_bits_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire  myinputQ_ver_2_io_enq_bits_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire [3:0] myinputQ_ver_2_io_enq_bits_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire [3:0] myinputQ_ver_2_io_enq_bits_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire [3:0] myinputQ_ver_2_io_enq_bits_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire [3:0] myinputQ_ver_2_io_enq_bits_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire [7:0] myinputQ_ver_2_io_enq_bits_exp; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire  myinputQ_ver_2_io_deq_ready; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire  myinputQ_ver_2_io_deq_valid; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire  myinputQ_ver_2_io_deq_bits_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire  myinputQ_ver_2_io_deq_bits_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire  myinputQ_ver_2_io_deq_bits_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire  myinputQ_ver_2_io_deq_bits_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire [3:0] myinputQ_ver_2_io_deq_bits_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire [3:0] myinputQ_ver_2_io_deq_bits_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire [3:0] myinputQ_ver_2_io_deq_bits_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire [3:0] myinputQ_ver_2_io_deq_bits_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire [7:0] myinputQ_ver_2_io_deq_bits_exp; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire  myinputQ_ver_3_clock; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire  myinputQ_ver_3_reset; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire  myinputQ_ver_3_io_enq_ready; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire  myinputQ_ver_3_io_enq_valid; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire  myinputQ_ver_3_io_enq_bits_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire  myinputQ_ver_3_io_enq_bits_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire  myinputQ_ver_3_io_enq_bits_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire  myinputQ_ver_3_io_enq_bits_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire [3:0] myinputQ_ver_3_io_enq_bits_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire [3:0] myinputQ_ver_3_io_enq_bits_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire [3:0] myinputQ_ver_3_io_enq_bits_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire [3:0] myinputQ_ver_3_io_enq_bits_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire [7:0] myinputQ_ver_3_io_enq_bits_exp; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire  myinputQ_ver_3_io_deq_ready; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire  myinputQ_ver_3_io_deq_valid; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire  myinputQ_ver_3_io_deq_bits_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire  myinputQ_ver_3_io_deq_bits_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire  myinputQ_ver_3_io_deq_bits_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire  myinputQ_ver_3_io_deq_bits_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire [3:0] myinputQ_ver_3_io_deq_bits_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire [3:0] myinputQ_ver_3_io_deq_bits_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire [3:0] myinputQ_ver_3_io_deq_bits_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire [3:0] myinputQ_ver_3_io_deq_bits_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire [7:0] myinputQ_ver_3_io_deq_bits_exp; // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
  wire  _pes_0_0_io_in_hor_T = myinputQ_hor_0_io_deq_ready & myinputQ_hor_0_io_deq_valid; // @[Decoupled.scala 51:35]
  wire  _pes_0_0_io_in_ver_T = myinputQ_ver_0_io_deq_ready & myinputQ_ver_0_io_deq_valid; // @[Decoupled.scala 51:35]
  reg  myinputQ_hor_1_io_deq_ready_r; // @[Reg.scala 19:16]
  reg  myinputQ_ver_1_io_deq_ready_r; // @[Reg.scala 19:16]
  wire  _pes_1_0_io_in_hor_T = myinputQ_hor_1_io_deq_ready & myinputQ_hor_1_io_deq_valid; // @[Decoupled.scala 51:35]
  wire  _pes_0_1_io_in_ver_T = myinputQ_ver_1_io_deq_ready & myinputQ_ver_1_io_deq_valid; // @[Decoupled.scala 51:35]
  reg  myinputQ_hor_2_io_deq_ready_r; // @[Reg.scala 19:16]
  reg  myinputQ_hor_2_io_deq_ready_r_1; // @[Reg.scala 19:16]
  reg  myinputQ_ver_2_io_deq_ready_r; // @[Reg.scala 19:16]
  reg  myinputQ_ver_2_io_deq_ready_r_1; // @[Reg.scala 19:16]
  wire  _pes_2_0_io_in_hor_T = myinputQ_hor_2_io_deq_ready & myinputQ_hor_2_io_deq_valid; // @[Decoupled.scala 51:35]
  wire  _pes_0_2_io_in_ver_T = myinputQ_ver_2_io_deq_ready & myinputQ_ver_2_io_deq_valid; // @[Decoupled.scala 51:35]
  reg  myinputQ_hor_3_io_deq_ready_r; // @[Reg.scala 19:16]
  reg  myinputQ_hor_3_io_deq_ready_r_1; // @[Reg.scala 19:16]
  reg  myinputQ_hor_3_io_deq_ready_r_2; // @[Reg.scala 19:16]
  reg  myinputQ_ver_3_io_deq_ready_r; // @[Reg.scala 19:16]
  reg  myinputQ_ver_3_io_deq_ready_r_1; // @[Reg.scala 19:16]
  reg  myinputQ_ver_3_io_deq_ready_r_2; // @[Reg.scala 19:16]
  wire  _pes_3_0_io_in_hor_T = myinputQ_hor_3_io_deq_ready & myinputQ_hor_3_io_deq_valid; // @[Decoupled.scala 51:35]
  wire  _pes_0_3_io_in_ver_T = myinputQ_ver_3_io_deq_ready & myinputQ_ver_3_io_deq_valid; // @[Decoupled.scala 51:35]
  reg  pes_0_1_io_in_hor_r_sign_0; // @[Reg.scala 19:16]
  reg  pes_0_1_io_in_hor_r_sign_1; // @[Reg.scala 19:16]
  reg  pes_0_1_io_in_hor_r_sign_2; // @[Reg.scala 19:16]
  reg  pes_0_1_io_in_hor_r_sign_3; // @[Reg.scala 19:16]
  reg [3:0] pes_0_1_io_in_hor_r_man_0; // @[Reg.scala 19:16]
  reg [3:0] pes_0_1_io_in_hor_r_man_1; // @[Reg.scala 19:16]
  reg [3:0] pes_0_1_io_in_hor_r_man_2; // @[Reg.scala 19:16]
  reg [3:0] pes_0_1_io_in_hor_r_man_3; // @[Reg.scala 19:16]
  reg [7:0] pes_0_1_io_in_hor_r_exp; // @[Reg.scala 19:16]
  reg  pes_0_2_io_in_hor_r_sign_0; // @[Reg.scala 19:16]
  reg  pes_0_2_io_in_hor_r_sign_1; // @[Reg.scala 19:16]
  reg  pes_0_2_io_in_hor_r_sign_2; // @[Reg.scala 19:16]
  reg  pes_0_2_io_in_hor_r_sign_3; // @[Reg.scala 19:16]
  reg [3:0] pes_0_2_io_in_hor_r_man_0; // @[Reg.scala 19:16]
  reg [3:0] pes_0_2_io_in_hor_r_man_1; // @[Reg.scala 19:16]
  reg [3:0] pes_0_2_io_in_hor_r_man_2; // @[Reg.scala 19:16]
  reg [3:0] pes_0_2_io_in_hor_r_man_3; // @[Reg.scala 19:16]
  reg [7:0] pes_0_2_io_in_hor_r_exp; // @[Reg.scala 19:16]
  reg  pes_0_3_io_in_hor_r_sign_0; // @[Reg.scala 19:16]
  reg  pes_0_3_io_in_hor_r_sign_1; // @[Reg.scala 19:16]
  reg  pes_0_3_io_in_hor_r_sign_2; // @[Reg.scala 19:16]
  reg  pes_0_3_io_in_hor_r_sign_3; // @[Reg.scala 19:16]
  reg [3:0] pes_0_3_io_in_hor_r_man_0; // @[Reg.scala 19:16]
  reg [3:0] pes_0_3_io_in_hor_r_man_1; // @[Reg.scala 19:16]
  reg [3:0] pes_0_3_io_in_hor_r_man_2; // @[Reg.scala 19:16]
  reg [3:0] pes_0_3_io_in_hor_r_man_3; // @[Reg.scala 19:16]
  reg [7:0] pes_0_3_io_in_hor_r_exp; // @[Reg.scala 19:16]
  reg  pes_1_1_io_in_hor_r_sign_0; // @[Reg.scala 19:16]
  reg  pes_1_1_io_in_hor_r_sign_1; // @[Reg.scala 19:16]
  reg  pes_1_1_io_in_hor_r_sign_2; // @[Reg.scala 19:16]
  reg  pes_1_1_io_in_hor_r_sign_3; // @[Reg.scala 19:16]
  reg [3:0] pes_1_1_io_in_hor_r_man_0; // @[Reg.scala 19:16]
  reg [3:0] pes_1_1_io_in_hor_r_man_1; // @[Reg.scala 19:16]
  reg [3:0] pes_1_1_io_in_hor_r_man_2; // @[Reg.scala 19:16]
  reg [3:0] pes_1_1_io_in_hor_r_man_3; // @[Reg.scala 19:16]
  reg [7:0] pes_1_1_io_in_hor_r_exp; // @[Reg.scala 19:16]
  reg  pes_1_2_io_in_hor_r_sign_0; // @[Reg.scala 19:16]
  reg  pes_1_2_io_in_hor_r_sign_1; // @[Reg.scala 19:16]
  reg  pes_1_2_io_in_hor_r_sign_2; // @[Reg.scala 19:16]
  reg  pes_1_2_io_in_hor_r_sign_3; // @[Reg.scala 19:16]
  reg [3:0] pes_1_2_io_in_hor_r_man_0; // @[Reg.scala 19:16]
  reg [3:0] pes_1_2_io_in_hor_r_man_1; // @[Reg.scala 19:16]
  reg [3:0] pes_1_2_io_in_hor_r_man_2; // @[Reg.scala 19:16]
  reg [3:0] pes_1_2_io_in_hor_r_man_3; // @[Reg.scala 19:16]
  reg [7:0] pes_1_2_io_in_hor_r_exp; // @[Reg.scala 19:16]
  reg  pes_1_3_io_in_hor_r_sign_0; // @[Reg.scala 19:16]
  reg  pes_1_3_io_in_hor_r_sign_1; // @[Reg.scala 19:16]
  reg  pes_1_3_io_in_hor_r_sign_2; // @[Reg.scala 19:16]
  reg  pes_1_3_io_in_hor_r_sign_3; // @[Reg.scala 19:16]
  reg [3:0] pes_1_3_io_in_hor_r_man_0; // @[Reg.scala 19:16]
  reg [3:0] pes_1_3_io_in_hor_r_man_1; // @[Reg.scala 19:16]
  reg [3:0] pes_1_3_io_in_hor_r_man_2; // @[Reg.scala 19:16]
  reg [3:0] pes_1_3_io_in_hor_r_man_3; // @[Reg.scala 19:16]
  reg [7:0] pes_1_3_io_in_hor_r_exp; // @[Reg.scala 19:16]
  reg  pes_2_1_io_in_hor_r_sign_0; // @[Reg.scala 19:16]
  reg  pes_2_1_io_in_hor_r_sign_1; // @[Reg.scala 19:16]
  reg  pes_2_1_io_in_hor_r_sign_2; // @[Reg.scala 19:16]
  reg  pes_2_1_io_in_hor_r_sign_3; // @[Reg.scala 19:16]
  reg [3:0] pes_2_1_io_in_hor_r_man_0; // @[Reg.scala 19:16]
  reg [3:0] pes_2_1_io_in_hor_r_man_1; // @[Reg.scala 19:16]
  reg [3:0] pes_2_1_io_in_hor_r_man_2; // @[Reg.scala 19:16]
  reg [3:0] pes_2_1_io_in_hor_r_man_3; // @[Reg.scala 19:16]
  reg [7:0] pes_2_1_io_in_hor_r_exp; // @[Reg.scala 19:16]
  reg  pes_2_2_io_in_hor_r_sign_0; // @[Reg.scala 19:16]
  reg  pes_2_2_io_in_hor_r_sign_1; // @[Reg.scala 19:16]
  reg  pes_2_2_io_in_hor_r_sign_2; // @[Reg.scala 19:16]
  reg  pes_2_2_io_in_hor_r_sign_3; // @[Reg.scala 19:16]
  reg [3:0] pes_2_2_io_in_hor_r_man_0; // @[Reg.scala 19:16]
  reg [3:0] pes_2_2_io_in_hor_r_man_1; // @[Reg.scala 19:16]
  reg [3:0] pes_2_2_io_in_hor_r_man_2; // @[Reg.scala 19:16]
  reg [3:0] pes_2_2_io_in_hor_r_man_3; // @[Reg.scala 19:16]
  reg [7:0] pes_2_2_io_in_hor_r_exp; // @[Reg.scala 19:16]
  reg  pes_2_3_io_in_hor_r_sign_0; // @[Reg.scala 19:16]
  reg  pes_2_3_io_in_hor_r_sign_1; // @[Reg.scala 19:16]
  reg  pes_2_3_io_in_hor_r_sign_2; // @[Reg.scala 19:16]
  reg  pes_2_3_io_in_hor_r_sign_3; // @[Reg.scala 19:16]
  reg [3:0] pes_2_3_io_in_hor_r_man_0; // @[Reg.scala 19:16]
  reg [3:0] pes_2_3_io_in_hor_r_man_1; // @[Reg.scala 19:16]
  reg [3:0] pes_2_3_io_in_hor_r_man_2; // @[Reg.scala 19:16]
  reg [3:0] pes_2_3_io_in_hor_r_man_3; // @[Reg.scala 19:16]
  reg [7:0] pes_2_3_io_in_hor_r_exp; // @[Reg.scala 19:16]
  reg  pes_3_1_io_in_hor_r_sign_0; // @[Reg.scala 19:16]
  reg  pes_3_1_io_in_hor_r_sign_1; // @[Reg.scala 19:16]
  reg  pes_3_1_io_in_hor_r_sign_2; // @[Reg.scala 19:16]
  reg  pes_3_1_io_in_hor_r_sign_3; // @[Reg.scala 19:16]
  reg [3:0] pes_3_1_io_in_hor_r_man_0; // @[Reg.scala 19:16]
  reg [3:0] pes_3_1_io_in_hor_r_man_1; // @[Reg.scala 19:16]
  reg [3:0] pes_3_1_io_in_hor_r_man_2; // @[Reg.scala 19:16]
  reg [3:0] pes_3_1_io_in_hor_r_man_3; // @[Reg.scala 19:16]
  reg [7:0] pes_3_1_io_in_hor_r_exp; // @[Reg.scala 19:16]
  reg  pes_3_2_io_in_hor_r_sign_0; // @[Reg.scala 19:16]
  reg  pes_3_2_io_in_hor_r_sign_1; // @[Reg.scala 19:16]
  reg  pes_3_2_io_in_hor_r_sign_2; // @[Reg.scala 19:16]
  reg  pes_3_2_io_in_hor_r_sign_3; // @[Reg.scala 19:16]
  reg [3:0] pes_3_2_io_in_hor_r_man_0; // @[Reg.scala 19:16]
  reg [3:0] pes_3_2_io_in_hor_r_man_1; // @[Reg.scala 19:16]
  reg [3:0] pes_3_2_io_in_hor_r_man_2; // @[Reg.scala 19:16]
  reg [3:0] pes_3_2_io_in_hor_r_man_3; // @[Reg.scala 19:16]
  reg [7:0] pes_3_2_io_in_hor_r_exp; // @[Reg.scala 19:16]
  reg  pes_3_3_io_in_hor_r_sign_0; // @[Reg.scala 19:16]
  reg  pes_3_3_io_in_hor_r_sign_1; // @[Reg.scala 19:16]
  reg  pes_3_3_io_in_hor_r_sign_2; // @[Reg.scala 19:16]
  reg  pes_3_3_io_in_hor_r_sign_3; // @[Reg.scala 19:16]
  reg [3:0] pes_3_3_io_in_hor_r_man_0; // @[Reg.scala 19:16]
  reg [3:0] pes_3_3_io_in_hor_r_man_1; // @[Reg.scala 19:16]
  reg [3:0] pes_3_3_io_in_hor_r_man_2; // @[Reg.scala 19:16]
  reg [3:0] pes_3_3_io_in_hor_r_man_3; // @[Reg.scala 19:16]
  reg [7:0] pes_3_3_io_in_hor_r_exp; // @[Reg.scala 19:16]
  reg  pes_1_0_io_in_ver_r_sign_0; // @[Reg.scala 19:16]
  reg  pes_1_0_io_in_ver_r_sign_1; // @[Reg.scala 19:16]
  reg  pes_1_0_io_in_ver_r_sign_2; // @[Reg.scala 19:16]
  reg  pes_1_0_io_in_ver_r_sign_3; // @[Reg.scala 19:16]
  reg [3:0] pes_1_0_io_in_ver_r_man_0; // @[Reg.scala 19:16]
  reg [3:0] pes_1_0_io_in_ver_r_man_1; // @[Reg.scala 19:16]
  reg [3:0] pes_1_0_io_in_ver_r_man_2; // @[Reg.scala 19:16]
  reg [3:0] pes_1_0_io_in_ver_r_man_3; // @[Reg.scala 19:16]
  reg [7:0] pes_1_0_io_in_ver_r_exp; // @[Reg.scala 19:16]
  reg  pes_1_1_io_in_ver_r_sign_0; // @[Reg.scala 19:16]
  reg  pes_1_1_io_in_ver_r_sign_1; // @[Reg.scala 19:16]
  reg  pes_1_1_io_in_ver_r_sign_2; // @[Reg.scala 19:16]
  reg  pes_1_1_io_in_ver_r_sign_3; // @[Reg.scala 19:16]
  reg [3:0] pes_1_1_io_in_ver_r_man_0; // @[Reg.scala 19:16]
  reg [3:0] pes_1_1_io_in_ver_r_man_1; // @[Reg.scala 19:16]
  reg [3:0] pes_1_1_io_in_ver_r_man_2; // @[Reg.scala 19:16]
  reg [3:0] pes_1_1_io_in_ver_r_man_3; // @[Reg.scala 19:16]
  reg [7:0] pes_1_1_io_in_ver_r_exp; // @[Reg.scala 19:16]
  reg  pes_1_2_io_in_ver_r_sign_0; // @[Reg.scala 19:16]
  reg  pes_1_2_io_in_ver_r_sign_1; // @[Reg.scala 19:16]
  reg  pes_1_2_io_in_ver_r_sign_2; // @[Reg.scala 19:16]
  reg  pes_1_2_io_in_ver_r_sign_3; // @[Reg.scala 19:16]
  reg [3:0] pes_1_2_io_in_ver_r_man_0; // @[Reg.scala 19:16]
  reg [3:0] pes_1_2_io_in_ver_r_man_1; // @[Reg.scala 19:16]
  reg [3:0] pes_1_2_io_in_ver_r_man_2; // @[Reg.scala 19:16]
  reg [3:0] pes_1_2_io_in_ver_r_man_3; // @[Reg.scala 19:16]
  reg [7:0] pes_1_2_io_in_ver_r_exp; // @[Reg.scala 19:16]
  reg  pes_1_3_io_in_ver_r_sign_0; // @[Reg.scala 19:16]
  reg  pes_1_3_io_in_ver_r_sign_1; // @[Reg.scala 19:16]
  reg  pes_1_3_io_in_ver_r_sign_2; // @[Reg.scala 19:16]
  reg  pes_1_3_io_in_ver_r_sign_3; // @[Reg.scala 19:16]
  reg [3:0] pes_1_3_io_in_ver_r_man_0; // @[Reg.scala 19:16]
  reg [3:0] pes_1_3_io_in_ver_r_man_1; // @[Reg.scala 19:16]
  reg [3:0] pes_1_3_io_in_ver_r_man_2; // @[Reg.scala 19:16]
  reg [3:0] pes_1_3_io_in_ver_r_man_3; // @[Reg.scala 19:16]
  reg [7:0] pes_1_3_io_in_ver_r_exp; // @[Reg.scala 19:16]
  reg  pes_2_0_io_in_ver_r_sign_0; // @[Reg.scala 19:16]
  reg  pes_2_0_io_in_ver_r_sign_1; // @[Reg.scala 19:16]
  reg  pes_2_0_io_in_ver_r_sign_2; // @[Reg.scala 19:16]
  reg  pes_2_0_io_in_ver_r_sign_3; // @[Reg.scala 19:16]
  reg [3:0] pes_2_0_io_in_ver_r_man_0; // @[Reg.scala 19:16]
  reg [3:0] pes_2_0_io_in_ver_r_man_1; // @[Reg.scala 19:16]
  reg [3:0] pes_2_0_io_in_ver_r_man_2; // @[Reg.scala 19:16]
  reg [3:0] pes_2_0_io_in_ver_r_man_3; // @[Reg.scala 19:16]
  reg [7:0] pes_2_0_io_in_ver_r_exp; // @[Reg.scala 19:16]
  reg  pes_2_1_io_in_ver_r_sign_0; // @[Reg.scala 19:16]
  reg  pes_2_1_io_in_ver_r_sign_1; // @[Reg.scala 19:16]
  reg  pes_2_1_io_in_ver_r_sign_2; // @[Reg.scala 19:16]
  reg  pes_2_1_io_in_ver_r_sign_3; // @[Reg.scala 19:16]
  reg [3:0] pes_2_1_io_in_ver_r_man_0; // @[Reg.scala 19:16]
  reg [3:0] pes_2_1_io_in_ver_r_man_1; // @[Reg.scala 19:16]
  reg [3:0] pes_2_1_io_in_ver_r_man_2; // @[Reg.scala 19:16]
  reg [3:0] pes_2_1_io_in_ver_r_man_3; // @[Reg.scala 19:16]
  reg [7:0] pes_2_1_io_in_ver_r_exp; // @[Reg.scala 19:16]
  reg  pes_2_2_io_in_ver_r_sign_0; // @[Reg.scala 19:16]
  reg  pes_2_2_io_in_ver_r_sign_1; // @[Reg.scala 19:16]
  reg  pes_2_2_io_in_ver_r_sign_2; // @[Reg.scala 19:16]
  reg  pes_2_2_io_in_ver_r_sign_3; // @[Reg.scala 19:16]
  reg [3:0] pes_2_2_io_in_ver_r_man_0; // @[Reg.scala 19:16]
  reg [3:0] pes_2_2_io_in_ver_r_man_1; // @[Reg.scala 19:16]
  reg [3:0] pes_2_2_io_in_ver_r_man_2; // @[Reg.scala 19:16]
  reg [3:0] pes_2_2_io_in_ver_r_man_3; // @[Reg.scala 19:16]
  reg [7:0] pes_2_2_io_in_ver_r_exp; // @[Reg.scala 19:16]
  reg  pes_2_3_io_in_ver_r_sign_0; // @[Reg.scala 19:16]
  reg  pes_2_3_io_in_ver_r_sign_1; // @[Reg.scala 19:16]
  reg  pes_2_3_io_in_ver_r_sign_2; // @[Reg.scala 19:16]
  reg  pes_2_3_io_in_ver_r_sign_3; // @[Reg.scala 19:16]
  reg [3:0] pes_2_3_io_in_ver_r_man_0; // @[Reg.scala 19:16]
  reg [3:0] pes_2_3_io_in_ver_r_man_1; // @[Reg.scala 19:16]
  reg [3:0] pes_2_3_io_in_ver_r_man_2; // @[Reg.scala 19:16]
  reg [3:0] pes_2_3_io_in_ver_r_man_3; // @[Reg.scala 19:16]
  reg [7:0] pes_2_3_io_in_ver_r_exp; // @[Reg.scala 19:16]
  reg  pes_3_0_io_in_ver_r_sign_0; // @[Reg.scala 19:16]
  reg  pes_3_0_io_in_ver_r_sign_1; // @[Reg.scala 19:16]
  reg  pes_3_0_io_in_ver_r_sign_2; // @[Reg.scala 19:16]
  reg  pes_3_0_io_in_ver_r_sign_3; // @[Reg.scala 19:16]
  reg [3:0] pes_3_0_io_in_ver_r_man_0; // @[Reg.scala 19:16]
  reg [3:0] pes_3_0_io_in_ver_r_man_1; // @[Reg.scala 19:16]
  reg [3:0] pes_3_0_io_in_ver_r_man_2; // @[Reg.scala 19:16]
  reg [3:0] pes_3_0_io_in_ver_r_man_3; // @[Reg.scala 19:16]
  reg [7:0] pes_3_0_io_in_ver_r_exp; // @[Reg.scala 19:16]
  reg  pes_3_1_io_in_ver_r_sign_0; // @[Reg.scala 19:16]
  reg  pes_3_1_io_in_ver_r_sign_1; // @[Reg.scala 19:16]
  reg  pes_3_1_io_in_ver_r_sign_2; // @[Reg.scala 19:16]
  reg  pes_3_1_io_in_ver_r_sign_3; // @[Reg.scala 19:16]
  reg [3:0] pes_3_1_io_in_ver_r_man_0; // @[Reg.scala 19:16]
  reg [3:0] pes_3_1_io_in_ver_r_man_1; // @[Reg.scala 19:16]
  reg [3:0] pes_3_1_io_in_ver_r_man_2; // @[Reg.scala 19:16]
  reg [3:0] pes_3_1_io_in_ver_r_man_3; // @[Reg.scala 19:16]
  reg [7:0] pes_3_1_io_in_ver_r_exp; // @[Reg.scala 19:16]
  reg  pes_3_2_io_in_ver_r_sign_0; // @[Reg.scala 19:16]
  reg  pes_3_2_io_in_ver_r_sign_1; // @[Reg.scala 19:16]
  reg  pes_3_2_io_in_ver_r_sign_2; // @[Reg.scala 19:16]
  reg  pes_3_2_io_in_ver_r_sign_3; // @[Reg.scala 19:16]
  reg [3:0] pes_3_2_io_in_ver_r_man_0; // @[Reg.scala 19:16]
  reg [3:0] pes_3_2_io_in_ver_r_man_1; // @[Reg.scala 19:16]
  reg [3:0] pes_3_2_io_in_ver_r_man_2; // @[Reg.scala 19:16]
  reg [3:0] pes_3_2_io_in_ver_r_man_3; // @[Reg.scala 19:16]
  reg [7:0] pes_3_2_io_in_ver_r_exp; // @[Reg.scala 19:16]
  reg  pes_3_3_io_in_ver_r_sign_0; // @[Reg.scala 19:16]
  reg  pes_3_3_io_in_ver_r_sign_1; // @[Reg.scala 19:16]
  reg  pes_3_3_io_in_ver_r_sign_2; // @[Reg.scala 19:16]
  reg  pes_3_3_io_in_ver_r_sign_3; // @[Reg.scala 19:16]
  reg [3:0] pes_3_3_io_in_ver_r_man_0; // @[Reg.scala 19:16]
  reg [3:0] pes_3_3_io_in_ver_r_man_1; // @[Reg.scala 19:16]
  reg [3:0] pes_3_3_io_in_ver_r_man_2; // @[Reg.scala 19:16]
  reg [3:0] pes_3_3_io_in_ver_r_man_3; // @[Reg.scala 19:16]
  reg [7:0] pes_3_3_io_in_ver_r_exp; // @[Reg.scala 19:16]
  HBFP_PE pes_0_0 ( // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
    .clock(pes_0_0_clock),
    .reset(pes_0_0_reset),
    .io_in_hor_sign_0(pes_0_0_io_in_hor_sign_0),
    .io_in_hor_sign_1(pes_0_0_io_in_hor_sign_1),
    .io_in_hor_sign_2(pes_0_0_io_in_hor_sign_2),
    .io_in_hor_sign_3(pes_0_0_io_in_hor_sign_3),
    .io_in_hor_man_0(pes_0_0_io_in_hor_man_0),
    .io_in_hor_man_1(pes_0_0_io_in_hor_man_1),
    .io_in_hor_man_2(pes_0_0_io_in_hor_man_2),
    .io_in_hor_man_3(pes_0_0_io_in_hor_man_3),
    .io_in_hor_exp(pes_0_0_io_in_hor_exp),
    .io_in_ver_sign_0(pes_0_0_io_in_ver_sign_0),
    .io_in_ver_sign_1(pes_0_0_io_in_ver_sign_1),
    .io_in_ver_sign_2(pes_0_0_io_in_ver_sign_2),
    .io_in_ver_sign_3(pes_0_0_io_in_ver_sign_3),
    .io_in_ver_man_0(pes_0_0_io_in_ver_man_0),
    .io_in_ver_man_1(pes_0_0_io_in_ver_man_1),
    .io_in_ver_man_2(pes_0_0_io_in_ver_man_2),
    .io_in_ver_man_3(pes_0_0_io_in_ver_man_3),
    .io_in_ver_exp(pes_0_0_io_in_ver_exp),
    .io_in_flag(pes_0_0_io_in_flag),
    .io_out_hor_sign_0(pes_0_0_io_out_hor_sign_0),
    .io_out_hor_sign_1(pes_0_0_io_out_hor_sign_1),
    .io_out_hor_sign_2(pes_0_0_io_out_hor_sign_2),
    .io_out_hor_sign_3(pes_0_0_io_out_hor_sign_3),
    .io_out_hor_man_0(pes_0_0_io_out_hor_man_0),
    .io_out_hor_man_1(pes_0_0_io_out_hor_man_1),
    .io_out_hor_man_2(pes_0_0_io_out_hor_man_2),
    .io_out_hor_man_3(pes_0_0_io_out_hor_man_3),
    .io_out_hor_exp(pes_0_0_io_out_hor_exp),
    .io_out_ver_sign_0(pes_0_0_io_out_ver_sign_0),
    .io_out_ver_sign_1(pes_0_0_io_out_ver_sign_1),
    .io_out_ver_sign_2(pes_0_0_io_out_ver_sign_2),
    .io_out_ver_sign_3(pes_0_0_io_out_ver_sign_3),
    .io_out_ver_man_0(pes_0_0_io_out_ver_man_0),
    .io_out_ver_man_1(pes_0_0_io_out_ver_man_1),
    .io_out_ver_man_2(pes_0_0_io_out_ver_man_2),
    .io_out_ver_man_3(pes_0_0_io_out_ver_man_3),
    .io_out_ver_exp(pes_0_0_io_out_ver_exp),
    .io_out_result_sign(pes_0_0_io_out_result_sign),
    .io_out_result_man(pes_0_0_io_out_result_man),
    .io_out_result_exp(pes_0_0_io_out_result_exp)
  );
  HBFP_PE pes_0_1 ( // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
    .clock(pes_0_1_clock),
    .reset(pes_0_1_reset),
    .io_in_hor_sign_0(pes_0_1_io_in_hor_sign_0),
    .io_in_hor_sign_1(pes_0_1_io_in_hor_sign_1),
    .io_in_hor_sign_2(pes_0_1_io_in_hor_sign_2),
    .io_in_hor_sign_3(pes_0_1_io_in_hor_sign_3),
    .io_in_hor_man_0(pes_0_1_io_in_hor_man_0),
    .io_in_hor_man_1(pes_0_1_io_in_hor_man_1),
    .io_in_hor_man_2(pes_0_1_io_in_hor_man_2),
    .io_in_hor_man_3(pes_0_1_io_in_hor_man_3),
    .io_in_hor_exp(pes_0_1_io_in_hor_exp),
    .io_in_ver_sign_0(pes_0_1_io_in_ver_sign_0),
    .io_in_ver_sign_1(pes_0_1_io_in_ver_sign_1),
    .io_in_ver_sign_2(pes_0_1_io_in_ver_sign_2),
    .io_in_ver_sign_3(pes_0_1_io_in_ver_sign_3),
    .io_in_ver_man_0(pes_0_1_io_in_ver_man_0),
    .io_in_ver_man_1(pes_0_1_io_in_ver_man_1),
    .io_in_ver_man_2(pes_0_1_io_in_ver_man_2),
    .io_in_ver_man_3(pes_0_1_io_in_ver_man_3),
    .io_in_ver_exp(pes_0_1_io_in_ver_exp),
    .io_in_flag(pes_0_1_io_in_flag),
    .io_out_hor_sign_0(pes_0_1_io_out_hor_sign_0),
    .io_out_hor_sign_1(pes_0_1_io_out_hor_sign_1),
    .io_out_hor_sign_2(pes_0_1_io_out_hor_sign_2),
    .io_out_hor_sign_3(pes_0_1_io_out_hor_sign_3),
    .io_out_hor_man_0(pes_0_1_io_out_hor_man_0),
    .io_out_hor_man_1(pes_0_1_io_out_hor_man_1),
    .io_out_hor_man_2(pes_0_1_io_out_hor_man_2),
    .io_out_hor_man_3(pes_0_1_io_out_hor_man_3),
    .io_out_hor_exp(pes_0_1_io_out_hor_exp),
    .io_out_ver_sign_0(pes_0_1_io_out_ver_sign_0),
    .io_out_ver_sign_1(pes_0_1_io_out_ver_sign_1),
    .io_out_ver_sign_2(pes_0_1_io_out_ver_sign_2),
    .io_out_ver_sign_3(pes_0_1_io_out_ver_sign_3),
    .io_out_ver_man_0(pes_0_1_io_out_ver_man_0),
    .io_out_ver_man_1(pes_0_1_io_out_ver_man_1),
    .io_out_ver_man_2(pes_0_1_io_out_ver_man_2),
    .io_out_ver_man_3(pes_0_1_io_out_ver_man_3),
    .io_out_ver_exp(pes_0_1_io_out_ver_exp),
    .io_out_result_sign(pes_0_1_io_out_result_sign),
    .io_out_result_man(pes_0_1_io_out_result_man),
    .io_out_result_exp(pes_0_1_io_out_result_exp)
  );
  HBFP_PE pes_0_2 ( // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
    .clock(pes_0_2_clock),
    .reset(pes_0_2_reset),
    .io_in_hor_sign_0(pes_0_2_io_in_hor_sign_0),
    .io_in_hor_sign_1(pes_0_2_io_in_hor_sign_1),
    .io_in_hor_sign_2(pes_0_2_io_in_hor_sign_2),
    .io_in_hor_sign_3(pes_0_2_io_in_hor_sign_3),
    .io_in_hor_man_0(pes_0_2_io_in_hor_man_0),
    .io_in_hor_man_1(pes_0_2_io_in_hor_man_1),
    .io_in_hor_man_2(pes_0_2_io_in_hor_man_2),
    .io_in_hor_man_3(pes_0_2_io_in_hor_man_3),
    .io_in_hor_exp(pes_0_2_io_in_hor_exp),
    .io_in_ver_sign_0(pes_0_2_io_in_ver_sign_0),
    .io_in_ver_sign_1(pes_0_2_io_in_ver_sign_1),
    .io_in_ver_sign_2(pes_0_2_io_in_ver_sign_2),
    .io_in_ver_sign_3(pes_0_2_io_in_ver_sign_3),
    .io_in_ver_man_0(pes_0_2_io_in_ver_man_0),
    .io_in_ver_man_1(pes_0_2_io_in_ver_man_1),
    .io_in_ver_man_2(pes_0_2_io_in_ver_man_2),
    .io_in_ver_man_3(pes_0_2_io_in_ver_man_3),
    .io_in_ver_exp(pes_0_2_io_in_ver_exp),
    .io_in_flag(pes_0_2_io_in_flag),
    .io_out_hor_sign_0(pes_0_2_io_out_hor_sign_0),
    .io_out_hor_sign_1(pes_0_2_io_out_hor_sign_1),
    .io_out_hor_sign_2(pes_0_2_io_out_hor_sign_2),
    .io_out_hor_sign_3(pes_0_2_io_out_hor_sign_3),
    .io_out_hor_man_0(pes_0_2_io_out_hor_man_0),
    .io_out_hor_man_1(pes_0_2_io_out_hor_man_1),
    .io_out_hor_man_2(pes_0_2_io_out_hor_man_2),
    .io_out_hor_man_3(pes_0_2_io_out_hor_man_3),
    .io_out_hor_exp(pes_0_2_io_out_hor_exp),
    .io_out_ver_sign_0(pes_0_2_io_out_ver_sign_0),
    .io_out_ver_sign_1(pes_0_2_io_out_ver_sign_1),
    .io_out_ver_sign_2(pes_0_2_io_out_ver_sign_2),
    .io_out_ver_sign_3(pes_0_2_io_out_ver_sign_3),
    .io_out_ver_man_0(pes_0_2_io_out_ver_man_0),
    .io_out_ver_man_1(pes_0_2_io_out_ver_man_1),
    .io_out_ver_man_2(pes_0_2_io_out_ver_man_2),
    .io_out_ver_man_3(pes_0_2_io_out_ver_man_3),
    .io_out_ver_exp(pes_0_2_io_out_ver_exp),
    .io_out_result_sign(pes_0_2_io_out_result_sign),
    .io_out_result_man(pes_0_2_io_out_result_man),
    .io_out_result_exp(pes_0_2_io_out_result_exp)
  );
  HBFP_PE pes_0_3 ( // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
    .clock(pes_0_3_clock),
    .reset(pes_0_3_reset),
    .io_in_hor_sign_0(pes_0_3_io_in_hor_sign_0),
    .io_in_hor_sign_1(pes_0_3_io_in_hor_sign_1),
    .io_in_hor_sign_2(pes_0_3_io_in_hor_sign_2),
    .io_in_hor_sign_3(pes_0_3_io_in_hor_sign_3),
    .io_in_hor_man_0(pes_0_3_io_in_hor_man_0),
    .io_in_hor_man_1(pes_0_3_io_in_hor_man_1),
    .io_in_hor_man_2(pes_0_3_io_in_hor_man_2),
    .io_in_hor_man_3(pes_0_3_io_in_hor_man_3),
    .io_in_hor_exp(pes_0_3_io_in_hor_exp),
    .io_in_ver_sign_0(pes_0_3_io_in_ver_sign_0),
    .io_in_ver_sign_1(pes_0_3_io_in_ver_sign_1),
    .io_in_ver_sign_2(pes_0_3_io_in_ver_sign_2),
    .io_in_ver_sign_3(pes_0_3_io_in_ver_sign_3),
    .io_in_ver_man_0(pes_0_3_io_in_ver_man_0),
    .io_in_ver_man_1(pes_0_3_io_in_ver_man_1),
    .io_in_ver_man_2(pes_0_3_io_in_ver_man_2),
    .io_in_ver_man_3(pes_0_3_io_in_ver_man_3),
    .io_in_ver_exp(pes_0_3_io_in_ver_exp),
    .io_in_flag(pes_0_3_io_in_flag),
    .io_out_hor_sign_0(pes_0_3_io_out_hor_sign_0),
    .io_out_hor_sign_1(pes_0_3_io_out_hor_sign_1),
    .io_out_hor_sign_2(pes_0_3_io_out_hor_sign_2),
    .io_out_hor_sign_3(pes_0_3_io_out_hor_sign_3),
    .io_out_hor_man_0(pes_0_3_io_out_hor_man_0),
    .io_out_hor_man_1(pes_0_3_io_out_hor_man_1),
    .io_out_hor_man_2(pes_0_3_io_out_hor_man_2),
    .io_out_hor_man_3(pes_0_3_io_out_hor_man_3),
    .io_out_hor_exp(pes_0_3_io_out_hor_exp),
    .io_out_ver_sign_0(pes_0_3_io_out_ver_sign_0),
    .io_out_ver_sign_1(pes_0_3_io_out_ver_sign_1),
    .io_out_ver_sign_2(pes_0_3_io_out_ver_sign_2),
    .io_out_ver_sign_3(pes_0_3_io_out_ver_sign_3),
    .io_out_ver_man_0(pes_0_3_io_out_ver_man_0),
    .io_out_ver_man_1(pes_0_3_io_out_ver_man_1),
    .io_out_ver_man_2(pes_0_3_io_out_ver_man_2),
    .io_out_ver_man_3(pes_0_3_io_out_ver_man_3),
    .io_out_ver_exp(pes_0_3_io_out_ver_exp),
    .io_out_result_sign(pes_0_3_io_out_result_sign),
    .io_out_result_man(pes_0_3_io_out_result_man),
    .io_out_result_exp(pes_0_3_io_out_result_exp)
  );
  HBFP_PE pes_1_0 ( // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
    .clock(pes_1_0_clock),
    .reset(pes_1_0_reset),
    .io_in_hor_sign_0(pes_1_0_io_in_hor_sign_0),
    .io_in_hor_sign_1(pes_1_0_io_in_hor_sign_1),
    .io_in_hor_sign_2(pes_1_0_io_in_hor_sign_2),
    .io_in_hor_sign_3(pes_1_0_io_in_hor_sign_3),
    .io_in_hor_man_0(pes_1_0_io_in_hor_man_0),
    .io_in_hor_man_1(pes_1_0_io_in_hor_man_1),
    .io_in_hor_man_2(pes_1_0_io_in_hor_man_2),
    .io_in_hor_man_3(pes_1_0_io_in_hor_man_3),
    .io_in_hor_exp(pes_1_0_io_in_hor_exp),
    .io_in_ver_sign_0(pes_1_0_io_in_ver_sign_0),
    .io_in_ver_sign_1(pes_1_0_io_in_ver_sign_1),
    .io_in_ver_sign_2(pes_1_0_io_in_ver_sign_2),
    .io_in_ver_sign_3(pes_1_0_io_in_ver_sign_3),
    .io_in_ver_man_0(pes_1_0_io_in_ver_man_0),
    .io_in_ver_man_1(pes_1_0_io_in_ver_man_1),
    .io_in_ver_man_2(pes_1_0_io_in_ver_man_2),
    .io_in_ver_man_3(pes_1_0_io_in_ver_man_3),
    .io_in_ver_exp(pes_1_0_io_in_ver_exp),
    .io_in_flag(pes_1_0_io_in_flag),
    .io_out_hor_sign_0(pes_1_0_io_out_hor_sign_0),
    .io_out_hor_sign_1(pes_1_0_io_out_hor_sign_1),
    .io_out_hor_sign_2(pes_1_0_io_out_hor_sign_2),
    .io_out_hor_sign_3(pes_1_0_io_out_hor_sign_3),
    .io_out_hor_man_0(pes_1_0_io_out_hor_man_0),
    .io_out_hor_man_1(pes_1_0_io_out_hor_man_1),
    .io_out_hor_man_2(pes_1_0_io_out_hor_man_2),
    .io_out_hor_man_3(pes_1_0_io_out_hor_man_3),
    .io_out_hor_exp(pes_1_0_io_out_hor_exp),
    .io_out_ver_sign_0(pes_1_0_io_out_ver_sign_0),
    .io_out_ver_sign_1(pes_1_0_io_out_ver_sign_1),
    .io_out_ver_sign_2(pes_1_0_io_out_ver_sign_2),
    .io_out_ver_sign_3(pes_1_0_io_out_ver_sign_3),
    .io_out_ver_man_0(pes_1_0_io_out_ver_man_0),
    .io_out_ver_man_1(pes_1_0_io_out_ver_man_1),
    .io_out_ver_man_2(pes_1_0_io_out_ver_man_2),
    .io_out_ver_man_3(pes_1_0_io_out_ver_man_3),
    .io_out_ver_exp(pes_1_0_io_out_ver_exp),
    .io_out_result_sign(pes_1_0_io_out_result_sign),
    .io_out_result_man(pes_1_0_io_out_result_man),
    .io_out_result_exp(pes_1_0_io_out_result_exp)
  );
  HBFP_PE pes_1_1 ( // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
    .clock(pes_1_1_clock),
    .reset(pes_1_1_reset),
    .io_in_hor_sign_0(pes_1_1_io_in_hor_sign_0),
    .io_in_hor_sign_1(pes_1_1_io_in_hor_sign_1),
    .io_in_hor_sign_2(pes_1_1_io_in_hor_sign_2),
    .io_in_hor_sign_3(pes_1_1_io_in_hor_sign_3),
    .io_in_hor_man_0(pes_1_1_io_in_hor_man_0),
    .io_in_hor_man_1(pes_1_1_io_in_hor_man_1),
    .io_in_hor_man_2(pes_1_1_io_in_hor_man_2),
    .io_in_hor_man_3(pes_1_1_io_in_hor_man_3),
    .io_in_hor_exp(pes_1_1_io_in_hor_exp),
    .io_in_ver_sign_0(pes_1_1_io_in_ver_sign_0),
    .io_in_ver_sign_1(pes_1_1_io_in_ver_sign_1),
    .io_in_ver_sign_2(pes_1_1_io_in_ver_sign_2),
    .io_in_ver_sign_3(pes_1_1_io_in_ver_sign_3),
    .io_in_ver_man_0(pes_1_1_io_in_ver_man_0),
    .io_in_ver_man_1(pes_1_1_io_in_ver_man_1),
    .io_in_ver_man_2(pes_1_1_io_in_ver_man_2),
    .io_in_ver_man_3(pes_1_1_io_in_ver_man_3),
    .io_in_ver_exp(pes_1_1_io_in_ver_exp),
    .io_in_flag(pes_1_1_io_in_flag),
    .io_out_hor_sign_0(pes_1_1_io_out_hor_sign_0),
    .io_out_hor_sign_1(pes_1_1_io_out_hor_sign_1),
    .io_out_hor_sign_2(pes_1_1_io_out_hor_sign_2),
    .io_out_hor_sign_3(pes_1_1_io_out_hor_sign_3),
    .io_out_hor_man_0(pes_1_1_io_out_hor_man_0),
    .io_out_hor_man_1(pes_1_1_io_out_hor_man_1),
    .io_out_hor_man_2(pes_1_1_io_out_hor_man_2),
    .io_out_hor_man_3(pes_1_1_io_out_hor_man_3),
    .io_out_hor_exp(pes_1_1_io_out_hor_exp),
    .io_out_ver_sign_0(pes_1_1_io_out_ver_sign_0),
    .io_out_ver_sign_1(pes_1_1_io_out_ver_sign_1),
    .io_out_ver_sign_2(pes_1_1_io_out_ver_sign_2),
    .io_out_ver_sign_3(pes_1_1_io_out_ver_sign_3),
    .io_out_ver_man_0(pes_1_1_io_out_ver_man_0),
    .io_out_ver_man_1(pes_1_1_io_out_ver_man_1),
    .io_out_ver_man_2(pes_1_1_io_out_ver_man_2),
    .io_out_ver_man_3(pes_1_1_io_out_ver_man_3),
    .io_out_ver_exp(pes_1_1_io_out_ver_exp),
    .io_out_result_sign(pes_1_1_io_out_result_sign),
    .io_out_result_man(pes_1_1_io_out_result_man),
    .io_out_result_exp(pes_1_1_io_out_result_exp)
  );
  HBFP_PE pes_1_2 ( // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
    .clock(pes_1_2_clock),
    .reset(pes_1_2_reset),
    .io_in_hor_sign_0(pes_1_2_io_in_hor_sign_0),
    .io_in_hor_sign_1(pes_1_2_io_in_hor_sign_1),
    .io_in_hor_sign_2(pes_1_2_io_in_hor_sign_2),
    .io_in_hor_sign_3(pes_1_2_io_in_hor_sign_3),
    .io_in_hor_man_0(pes_1_2_io_in_hor_man_0),
    .io_in_hor_man_1(pes_1_2_io_in_hor_man_1),
    .io_in_hor_man_2(pes_1_2_io_in_hor_man_2),
    .io_in_hor_man_3(pes_1_2_io_in_hor_man_3),
    .io_in_hor_exp(pes_1_2_io_in_hor_exp),
    .io_in_ver_sign_0(pes_1_2_io_in_ver_sign_0),
    .io_in_ver_sign_1(pes_1_2_io_in_ver_sign_1),
    .io_in_ver_sign_2(pes_1_2_io_in_ver_sign_2),
    .io_in_ver_sign_3(pes_1_2_io_in_ver_sign_3),
    .io_in_ver_man_0(pes_1_2_io_in_ver_man_0),
    .io_in_ver_man_1(pes_1_2_io_in_ver_man_1),
    .io_in_ver_man_2(pes_1_2_io_in_ver_man_2),
    .io_in_ver_man_3(pes_1_2_io_in_ver_man_3),
    .io_in_ver_exp(pes_1_2_io_in_ver_exp),
    .io_in_flag(pes_1_2_io_in_flag),
    .io_out_hor_sign_0(pes_1_2_io_out_hor_sign_0),
    .io_out_hor_sign_1(pes_1_2_io_out_hor_sign_1),
    .io_out_hor_sign_2(pes_1_2_io_out_hor_sign_2),
    .io_out_hor_sign_3(pes_1_2_io_out_hor_sign_3),
    .io_out_hor_man_0(pes_1_2_io_out_hor_man_0),
    .io_out_hor_man_1(pes_1_2_io_out_hor_man_1),
    .io_out_hor_man_2(pes_1_2_io_out_hor_man_2),
    .io_out_hor_man_3(pes_1_2_io_out_hor_man_3),
    .io_out_hor_exp(pes_1_2_io_out_hor_exp),
    .io_out_ver_sign_0(pes_1_2_io_out_ver_sign_0),
    .io_out_ver_sign_1(pes_1_2_io_out_ver_sign_1),
    .io_out_ver_sign_2(pes_1_2_io_out_ver_sign_2),
    .io_out_ver_sign_3(pes_1_2_io_out_ver_sign_3),
    .io_out_ver_man_0(pes_1_2_io_out_ver_man_0),
    .io_out_ver_man_1(pes_1_2_io_out_ver_man_1),
    .io_out_ver_man_2(pes_1_2_io_out_ver_man_2),
    .io_out_ver_man_3(pes_1_2_io_out_ver_man_3),
    .io_out_ver_exp(pes_1_2_io_out_ver_exp),
    .io_out_result_sign(pes_1_2_io_out_result_sign),
    .io_out_result_man(pes_1_2_io_out_result_man),
    .io_out_result_exp(pes_1_2_io_out_result_exp)
  );
  HBFP_PE pes_1_3 ( // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
    .clock(pes_1_3_clock),
    .reset(pes_1_3_reset),
    .io_in_hor_sign_0(pes_1_3_io_in_hor_sign_0),
    .io_in_hor_sign_1(pes_1_3_io_in_hor_sign_1),
    .io_in_hor_sign_2(pes_1_3_io_in_hor_sign_2),
    .io_in_hor_sign_3(pes_1_3_io_in_hor_sign_3),
    .io_in_hor_man_0(pes_1_3_io_in_hor_man_0),
    .io_in_hor_man_1(pes_1_3_io_in_hor_man_1),
    .io_in_hor_man_2(pes_1_3_io_in_hor_man_2),
    .io_in_hor_man_3(pes_1_3_io_in_hor_man_3),
    .io_in_hor_exp(pes_1_3_io_in_hor_exp),
    .io_in_ver_sign_0(pes_1_3_io_in_ver_sign_0),
    .io_in_ver_sign_1(pes_1_3_io_in_ver_sign_1),
    .io_in_ver_sign_2(pes_1_3_io_in_ver_sign_2),
    .io_in_ver_sign_3(pes_1_3_io_in_ver_sign_3),
    .io_in_ver_man_0(pes_1_3_io_in_ver_man_0),
    .io_in_ver_man_1(pes_1_3_io_in_ver_man_1),
    .io_in_ver_man_2(pes_1_3_io_in_ver_man_2),
    .io_in_ver_man_3(pes_1_3_io_in_ver_man_3),
    .io_in_ver_exp(pes_1_3_io_in_ver_exp),
    .io_in_flag(pes_1_3_io_in_flag),
    .io_out_hor_sign_0(pes_1_3_io_out_hor_sign_0),
    .io_out_hor_sign_1(pes_1_3_io_out_hor_sign_1),
    .io_out_hor_sign_2(pes_1_3_io_out_hor_sign_2),
    .io_out_hor_sign_3(pes_1_3_io_out_hor_sign_3),
    .io_out_hor_man_0(pes_1_3_io_out_hor_man_0),
    .io_out_hor_man_1(pes_1_3_io_out_hor_man_1),
    .io_out_hor_man_2(pes_1_3_io_out_hor_man_2),
    .io_out_hor_man_3(pes_1_3_io_out_hor_man_3),
    .io_out_hor_exp(pes_1_3_io_out_hor_exp),
    .io_out_ver_sign_0(pes_1_3_io_out_ver_sign_0),
    .io_out_ver_sign_1(pes_1_3_io_out_ver_sign_1),
    .io_out_ver_sign_2(pes_1_3_io_out_ver_sign_2),
    .io_out_ver_sign_3(pes_1_3_io_out_ver_sign_3),
    .io_out_ver_man_0(pes_1_3_io_out_ver_man_0),
    .io_out_ver_man_1(pes_1_3_io_out_ver_man_1),
    .io_out_ver_man_2(pes_1_3_io_out_ver_man_2),
    .io_out_ver_man_3(pes_1_3_io_out_ver_man_3),
    .io_out_ver_exp(pes_1_3_io_out_ver_exp),
    .io_out_result_sign(pes_1_3_io_out_result_sign),
    .io_out_result_man(pes_1_3_io_out_result_man),
    .io_out_result_exp(pes_1_3_io_out_result_exp)
  );
  HBFP_PE pes_2_0 ( // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
    .clock(pes_2_0_clock),
    .reset(pes_2_0_reset),
    .io_in_hor_sign_0(pes_2_0_io_in_hor_sign_0),
    .io_in_hor_sign_1(pes_2_0_io_in_hor_sign_1),
    .io_in_hor_sign_2(pes_2_0_io_in_hor_sign_2),
    .io_in_hor_sign_3(pes_2_0_io_in_hor_sign_3),
    .io_in_hor_man_0(pes_2_0_io_in_hor_man_0),
    .io_in_hor_man_1(pes_2_0_io_in_hor_man_1),
    .io_in_hor_man_2(pes_2_0_io_in_hor_man_2),
    .io_in_hor_man_3(pes_2_0_io_in_hor_man_3),
    .io_in_hor_exp(pes_2_0_io_in_hor_exp),
    .io_in_ver_sign_0(pes_2_0_io_in_ver_sign_0),
    .io_in_ver_sign_1(pes_2_0_io_in_ver_sign_1),
    .io_in_ver_sign_2(pes_2_0_io_in_ver_sign_2),
    .io_in_ver_sign_3(pes_2_0_io_in_ver_sign_3),
    .io_in_ver_man_0(pes_2_0_io_in_ver_man_0),
    .io_in_ver_man_1(pes_2_0_io_in_ver_man_1),
    .io_in_ver_man_2(pes_2_0_io_in_ver_man_2),
    .io_in_ver_man_3(pes_2_0_io_in_ver_man_3),
    .io_in_ver_exp(pes_2_0_io_in_ver_exp),
    .io_in_flag(pes_2_0_io_in_flag),
    .io_out_hor_sign_0(pes_2_0_io_out_hor_sign_0),
    .io_out_hor_sign_1(pes_2_0_io_out_hor_sign_1),
    .io_out_hor_sign_2(pes_2_0_io_out_hor_sign_2),
    .io_out_hor_sign_3(pes_2_0_io_out_hor_sign_3),
    .io_out_hor_man_0(pes_2_0_io_out_hor_man_0),
    .io_out_hor_man_1(pes_2_0_io_out_hor_man_1),
    .io_out_hor_man_2(pes_2_0_io_out_hor_man_2),
    .io_out_hor_man_3(pes_2_0_io_out_hor_man_3),
    .io_out_hor_exp(pes_2_0_io_out_hor_exp),
    .io_out_ver_sign_0(pes_2_0_io_out_ver_sign_0),
    .io_out_ver_sign_1(pes_2_0_io_out_ver_sign_1),
    .io_out_ver_sign_2(pes_2_0_io_out_ver_sign_2),
    .io_out_ver_sign_3(pes_2_0_io_out_ver_sign_3),
    .io_out_ver_man_0(pes_2_0_io_out_ver_man_0),
    .io_out_ver_man_1(pes_2_0_io_out_ver_man_1),
    .io_out_ver_man_2(pes_2_0_io_out_ver_man_2),
    .io_out_ver_man_3(pes_2_0_io_out_ver_man_3),
    .io_out_ver_exp(pes_2_0_io_out_ver_exp),
    .io_out_result_sign(pes_2_0_io_out_result_sign),
    .io_out_result_man(pes_2_0_io_out_result_man),
    .io_out_result_exp(pes_2_0_io_out_result_exp)
  );
  HBFP_PE pes_2_1 ( // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
    .clock(pes_2_1_clock),
    .reset(pes_2_1_reset),
    .io_in_hor_sign_0(pes_2_1_io_in_hor_sign_0),
    .io_in_hor_sign_1(pes_2_1_io_in_hor_sign_1),
    .io_in_hor_sign_2(pes_2_1_io_in_hor_sign_2),
    .io_in_hor_sign_3(pes_2_1_io_in_hor_sign_3),
    .io_in_hor_man_0(pes_2_1_io_in_hor_man_0),
    .io_in_hor_man_1(pes_2_1_io_in_hor_man_1),
    .io_in_hor_man_2(pes_2_1_io_in_hor_man_2),
    .io_in_hor_man_3(pes_2_1_io_in_hor_man_3),
    .io_in_hor_exp(pes_2_1_io_in_hor_exp),
    .io_in_ver_sign_0(pes_2_1_io_in_ver_sign_0),
    .io_in_ver_sign_1(pes_2_1_io_in_ver_sign_1),
    .io_in_ver_sign_2(pes_2_1_io_in_ver_sign_2),
    .io_in_ver_sign_3(pes_2_1_io_in_ver_sign_3),
    .io_in_ver_man_0(pes_2_1_io_in_ver_man_0),
    .io_in_ver_man_1(pes_2_1_io_in_ver_man_1),
    .io_in_ver_man_2(pes_2_1_io_in_ver_man_2),
    .io_in_ver_man_3(pes_2_1_io_in_ver_man_3),
    .io_in_ver_exp(pes_2_1_io_in_ver_exp),
    .io_in_flag(pes_2_1_io_in_flag),
    .io_out_hor_sign_0(pes_2_1_io_out_hor_sign_0),
    .io_out_hor_sign_1(pes_2_1_io_out_hor_sign_1),
    .io_out_hor_sign_2(pes_2_1_io_out_hor_sign_2),
    .io_out_hor_sign_3(pes_2_1_io_out_hor_sign_3),
    .io_out_hor_man_0(pes_2_1_io_out_hor_man_0),
    .io_out_hor_man_1(pes_2_1_io_out_hor_man_1),
    .io_out_hor_man_2(pes_2_1_io_out_hor_man_2),
    .io_out_hor_man_3(pes_2_1_io_out_hor_man_3),
    .io_out_hor_exp(pes_2_1_io_out_hor_exp),
    .io_out_ver_sign_0(pes_2_1_io_out_ver_sign_0),
    .io_out_ver_sign_1(pes_2_1_io_out_ver_sign_1),
    .io_out_ver_sign_2(pes_2_1_io_out_ver_sign_2),
    .io_out_ver_sign_3(pes_2_1_io_out_ver_sign_3),
    .io_out_ver_man_0(pes_2_1_io_out_ver_man_0),
    .io_out_ver_man_1(pes_2_1_io_out_ver_man_1),
    .io_out_ver_man_2(pes_2_1_io_out_ver_man_2),
    .io_out_ver_man_3(pes_2_1_io_out_ver_man_3),
    .io_out_ver_exp(pes_2_1_io_out_ver_exp),
    .io_out_result_sign(pes_2_1_io_out_result_sign),
    .io_out_result_man(pes_2_1_io_out_result_man),
    .io_out_result_exp(pes_2_1_io_out_result_exp)
  );
  HBFP_PE pes_2_2 ( // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
    .clock(pes_2_2_clock),
    .reset(pes_2_2_reset),
    .io_in_hor_sign_0(pes_2_2_io_in_hor_sign_0),
    .io_in_hor_sign_1(pes_2_2_io_in_hor_sign_1),
    .io_in_hor_sign_2(pes_2_2_io_in_hor_sign_2),
    .io_in_hor_sign_3(pes_2_2_io_in_hor_sign_3),
    .io_in_hor_man_0(pes_2_2_io_in_hor_man_0),
    .io_in_hor_man_1(pes_2_2_io_in_hor_man_1),
    .io_in_hor_man_2(pes_2_2_io_in_hor_man_2),
    .io_in_hor_man_3(pes_2_2_io_in_hor_man_3),
    .io_in_hor_exp(pes_2_2_io_in_hor_exp),
    .io_in_ver_sign_0(pes_2_2_io_in_ver_sign_0),
    .io_in_ver_sign_1(pes_2_2_io_in_ver_sign_1),
    .io_in_ver_sign_2(pes_2_2_io_in_ver_sign_2),
    .io_in_ver_sign_3(pes_2_2_io_in_ver_sign_3),
    .io_in_ver_man_0(pes_2_2_io_in_ver_man_0),
    .io_in_ver_man_1(pes_2_2_io_in_ver_man_1),
    .io_in_ver_man_2(pes_2_2_io_in_ver_man_2),
    .io_in_ver_man_3(pes_2_2_io_in_ver_man_3),
    .io_in_ver_exp(pes_2_2_io_in_ver_exp),
    .io_in_flag(pes_2_2_io_in_flag),
    .io_out_hor_sign_0(pes_2_2_io_out_hor_sign_0),
    .io_out_hor_sign_1(pes_2_2_io_out_hor_sign_1),
    .io_out_hor_sign_2(pes_2_2_io_out_hor_sign_2),
    .io_out_hor_sign_3(pes_2_2_io_out_hor_sign_3),
    .io_out_hor_man_0(pes_2_2_io_out_hor_man_0),
    .io_out_hor_man_1(pes_2_2_io_out_hor_man_1),
    .io_out_hor_man_2(pes_2_2_io_out_hor_man_2),
    .io_out_hor_man_3(pes_2_2_io_out_hor_man_3),
    .io_out_hor_exp(pes_2_2_io_out_hor_exp),
    .io_out_ver_sign_0(pes_2_2_io_out_ver_sign_0),
    .io_out_ver_sign_1(pes_2_2_io_out_ver_sign_1),
    .io_out_ver_sign_2(pes_2_2_io_out_ver_sign_2),
    .io_out_ver_sign_3(pes_2_2_io_out_ver_sign_3),
    .io_out_ver_man_0(pes_2_2_io_out_ver_man_0),
    .io_out_ver_man_1(pes_2_2_io_out_ver_man_1),
    .io_out_ver_man_2(pes_2_2_io_out_ver_man_2),
    .io_out_ver_man_3(pes_2_2_io_out_ver_man_3),
    .io_out_ver_exp(pes_2_2_io_out_ver_exp),
    .io_out_result_sign(pes_2_2_io_out_result_sign),
    .io_out_result_man(pes_2_2_io_out_result_man),
    .io_out_result_exp(pes_2_2_io_out_result_exp)
  );
  HBFP_PE pes_2_3 ( // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
    .clock(pes_2_3_clock),
    .reset(pes_2_3_reset),
    .io_in_hor_sign_0(pes_2_3_io_in_hor_sign_0),
    .io_in_hor_sign_1(pes_2_3_io_in_hor_sign_1),
    .io_in_hor_sign_2(pes_2_3_io_in_hor_sign_2),
    .io_in_hor_sign_3(pes_2_3_io_in_hor_sign_3),
    .io_in_hor_man_0(pes_2_3_io_in_hor_man_0),
    .io_in_hor_man_1(pes_2_3_io_in_hor_man_1),
    .io_in_hor_man_2(pes_2_3_io_in_hor_man_2),
    .io_in_hor_man_3(pes_2_3_io_in_hor_man_3),
    .io_in_hor_exp(pes_2_3_io_in_hor_exp),
    .io_in_ver_sign_0(pes_2_3_io_in_ver_sign_0),
    .io_in_ver_sign_1(pes_2_3_io_in_ver_sign_1),
    .io_in_ver_sign_2(pes_2_3_io_in_ver_sign_2),
    .io_in_ver_sign_3(pes_2_3_io_in_ver_sign_3),
    .io_in_ver_man_0(pes_2_3_io_in_ver_man_0),
    .io_in_ver_man_1(pes_2_3_io_in_ver_man_1),
    .io_in_ver_man_2(pes_2_3_io_in_ver_man_2),
    .io_in_ver_man_3(pes_2_3_io_in_ver_man_3),
    .io_in_ver_exp(pes_2_3_io_in_ver_exp),
    .io_in_flag(pes_2_3_io_in_flag),
    .io_out_hor_sign_0(pes_2_3_io_out_hor_sign_0),
    .io_out_hor_sign_1(pes_2_3_io_out_hor_sign_1),
    .io_out_hor_sign_2(pes_2_3_io_out_hor_sign_2),
    .io_out_hor_sign_3(pes_2_3_io_out_hor_sign_3),
    .io_out_hor_man_0(pes_2_3_io_out_hor_man_0),
    .io_out_hor_man_1(pes_2_3_io_out_hor_man_1),
    .io_out_hor_man_2(pes_2_3_io_out_hor_man_2),
    .io_out_hor_man_3(pes_2_3_io_out_hor_man_3),
    .io_out_hor_exp(pes_2_3_io_out_hor_exp),
    .io_out_ver_sign_0(pes_2_3_io_out_ver_sign_0),
    .io_out_ver_sign_1(pes_2_3_io_out_ver_sign_1),
    .io_out_ver_sign_2(pes_2_3_io_out_ver_sign_2),
    .io_out_ver_sign_3(pes_2_3_io_out_ver_sign_3),
    .io_out_ver_man_0(pes_2_3_io_out_ver_man_0),
    .io_out_ver_man_1(pes_2_3_io_out_ver_man_1),
    .io_out_ver_man_2(pes_2_3_io_out_ver_man_2),
    .io_out_ver_man_3(pes_2_3_io_out_ver_man_3),
    .io_out_ver_exp(pes_2_3_io_out_ver_exp),
    .io_out_result_sign(pes_2_3_io_out_result_sign),
    .io_out_result_man(pes_2_3_io_out_result_man),
    .io_out_result_exp(pes_2_3_io_out_result_exp)
  );
  HBFP_PE pes_3_0 ( // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
    .clock(pes_3_0_clock),
    .reset(pes_3_0_reset),
    .io_in_hor_sign_0(pes_3_0_io_in_hor_sign_0),
    .io_in_hor_sign_1(pes_3_0_io_in_hor_sign_1),
    .io_in_hor_sign_2(pes_3_0_io_in_hor_sign_2),
    .io_in_hor_sign_3(pes_3_0_io_in_hor_sign_3),
    .io_in_hor_man_0(pes_3_0_io_in_hor_man_0),
    .io_in_hor_man_1(pes_3_0_io_in_hor_man_1),
    .io_in_hor_man_2(pes_3_0_io_in_hor_man_2),
    .io_in_hor_man_3(pes_3_0_io_in_hor_man_3),
    .io_in_hor_exp(pes_3_0_io_in_hor_exp),
    .io_in_ver_sign_0(pes_3_0_io_in_ver_sign_0),
    .io_in_ver_sign_1(pes_3_0_io_in_ver_sign_1),
    .io_in_ver_sign_2(pes_3_0_io_in_ver_sign_2),
    .io_in_ver_sign_3(pes_3_0_io_in_ver_sign_3),
    .io_in_ver_man_0(pes_3_0_io_in_ver_man_0),
    .io_in_ver_man_1(pes_3_0_io_in_ver_man_1),
    .io_in_ver_man_2(pes_3_0_io_in_ver_man_2),
    .io_in_ver_man_3(pes_3_0_io_in_ver_man_3),
    .io_in_ver_exp(pes_3_0_io_in_ver_exp),
    .io_in_flag(pes_3_0_io_in_flag),
    .io_out_hor_sign_0(pes_3_0_io_out_hor_sign_0),
    .io_out_hor_sign_1(pes_3_0_io_out_hor_sign_1),
    .io_out_hor_sign_2(pes_3_0_io_out_hor_sign_2),
    .io_out_hor_sign_3(pes_3_0_io_out_hor_sign_3),
    .io_out_hor_man_0(pes_3_0_io_out_hor_man_0),
    .io_out_hor_man_1(pes_3_0_io_out_hor_man_1),
    .io_out_hor_man_2(pes_3_0_io_out_hor_man_2),
    .io_out_hor_man_3(pes_3_0_io_out_hor_man_3),
    .io_out_hor_exp(pes_3_0_io_out_hor_exp),
    .io_out_ver_sign_0(pes_3_0_io_out_ver_sign_0),
    .io_out_ver_sign_1(pes_3_0_io_out_ver_sign_1),
    .io_out_ver_sign_2(pes_3_0_io_out_ver_sign_2),
    .io_out_ver_sign_3(pes_3_0_io_out_ver_sign_3),
    .io_out_ver_man_0(pes_3_0_io_out_ver_man_0),
    .io_out_ver_man_1(pes_3_0_io_out_ver_man_1),
    .io_out_ver_man_2(pes_3_0_io_out_ver_man_2),
    .io_out_ver_man_3(pes_3_0_io_out_ver_man_3),
    .io_out_ver_exp(pes_3_0_io_out_ver_exp),
    .io_out_result_sign(pes_3_0_io_out_result_sign),
    .io_out_result_man(pes_3_0_io_out_result_man),
    .io_out_result_exp(pes_3_0_io_out_result_exp)
  );
  HBFP_PE pes_3_1 ( // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
    .clock(pes_3_1_clock),
    .reset(pes_3_1_reset),
    .io_in_hor_sign_0(pes_3_1_io_in_hor_sign_0),
    .io_in_hor_sign_1(pes_3_1_io_in_hor_sign_1),
    .io_in_hor_sign_2(pes_3_1_io_in_hor_sign_2),
    .io_in_hor_sign_3(pes_3_1_io_in_hor_sign_3),
    .io_in_hor_man_0(pes_3_1_io_in_hor_man_0),
    .io_in_hor_man_1(pes_3_1_io_in_hor_man_1),
    .io_in_hor_man_2(pes_3_1_io_in_hor_man_2),
    .io_in_hor_man_3(pes_3_1_io_in_hor_man_3),
    .io_in_hor_exp(pes_3_1_io_in_hor_exp),
    .io_in_ver_sign_0(pes_3_1_io_in_ver_sign_0),
    .io_in_ver_sign_1(pes_3_1_io_in_ver_sign_1),
    .io_in_ver_sign_2(pes_3_1_io_in_ver_sign_2),
    .io_in_ver_sign_3(pes_3_1_io_in_ver_sign_3),
    .io_in_ver_man_0(pes_3_1_io_in_ver_man_0),
    .io_in_ver_man_1(pes_3_1_io_in_ver_man_1),
    .io_in_ver_man_2(pes_3_1_io_in_ver_man_2),
    .io_in_ver_man_3(pes_3_1_io_in_ver_man_3),
    .io_in_ver_exp(pes_3_1_io_in_ver_exp),
    .io_in_flag(pes_3_1_io_in_flag),
    .io_out_hor_sign_0(pes_3_1_io_out_hor_sign_0),
    .io_out_hor_sign_1(pes_3_1_io_out_hor_sign_1),
    .io_out_hor_sign_2(pes_3_1_io_out_hor_sign_2),
    .io_out_hor_sign_3(pes_3_1_io_out_hor_sign_3),
    .io_out_hor_man_0(pes_3_1_io_out_hor_man_0),
    .io_out_hor_man_1(pes_3_1_io_out_hor_man_1),
    .io_out_hor_man_2(pes_3_1_io_out_hor_man_2),
    .io_out_hor_man_3(pes_3_1_io_out_hor_man_3),
    .io_out_hor_exp(pes_3_1_io_out_hor_exp),
    .io_out_ver_sign_0(pes_3_1_io_out_ver_sign_0),
    .io_out_ver_sign_1(pes_3_1_io_out_ver_sign_1),
    .io_out_ver_sign_2(pes_3_1_io_out_ver_sign_2),
    .io_out_ver_sign_3(pes_3_1_io_out_ver_sign_3),
    .io_out_ver_man_0(pes_3_1_io_out_ver_man_0),
    .io_out_ver_man_1(pes_3_1_io_out_ver_man_1),
    .io_out_ver_man_2(pes_3_1_io_out_ver_man_2),
    .io_out_ver_man_3(pes_3_1_io_out_ver_man_3),
    .io_out_ver_exp(pes_3_1_io_out_ver_exp),
    .io_out_result_sign(pes_3_1_io_out_result_sign),
    .io_out_result_man(pes_3_1_io_out_result_man),
    .io_out_result_exp(pes_3_1_io_out_result_exp)
  );
  HBFP_PE pes_3_2 ( // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
    .clock(pes_3_2_clock),
    .reset(pes_3_2_reset),
    .io_in_hor_sign_0(pes_3_2_io_in_hor_sign_0),
    .io_in_hor_sign_1(pes_3_2_io_in_hor_sign_1),
    .io_in_hor_sign_2(pes_3_2_io_in_hor_sign_2),
    .io_in_hor_sign_3(pes_3_2_io_in_hor_sign_3),
    .io_in_hor_man_0(pes_3_2_io_in_hor_man_0),
    .io_in_hor_man_1(pes_3_2_io_in_hor_man_1),
    .io_in_hor_man_2(pes_3_2_io_in_hor_man_2),
    .io_in_hor_man_3(pes_3_2_io_in_hor_man_3),
    .io_in_hor_exp(pes_3_2_io_in_hor_exp),
    .io_in_ver_sign_0(pes_3_2_io_in_ver_sign_0),
    .io_in_ver_sign_1(pes_3_2_io_in_ver_sign_1),
    .io_in_ver_sign_2(pes_3_2_io_in_ver_sign_2),
    .io_in_ver_sign_3(pes_3_2_io_in_ver_sign_3),
    .io_in_ver_man_0(pes_3_2_io_in_ver_man_0),
    .io_in_ver_man_1(pes_3_2_io_in_ver_man_1),
    .io_in_ver_man_2(pes_3_2_io_in_ver_man_2),
    .io_in_ver_man_3(pes_3_2_io_in_ver_man_3),
    .io_in_ver_exp(pes_3_2_io_in_ver_exp),
    .io_in_flag(pes_3_2_io_in_flag),
    .io_out_hor_sign_0(pes_3_2_io_out_hor_sign_0),
    .io_out_hor_sign_1(pes_3_2_io_out_hor_sign_1),
    .io_out_hor_sign_2(pes_3_2_io_out_hor_sign_2),
    .io_out_hor_sign_3(pes_3_2_io_out_hor_sign_3),
    .io_out_hor_man_0(pes_3_2_io_out_hor_man_0),
    .io_out_hor_man_1(pes_3_2_io_out_hor_man_1),
    .io_out_hor_man_2(pes_3_2_io_out_hor_man_2),
    .io_out_hor_man_3(pes_3_2_io_out_hor_man_3),
    .io_out_hor_exp(pes_3_2_io_out_hor_exp),
    .io_out_ver_sign_0(pes_3_2_io_out_ver_sign_0),
    .io_out_ver_sign_1(pes_3_2_io_out_ver_sign_1),
    .io_out_ver_sign_2(pes_3_2_io_out_ver_sign_2),
    .io_out_ver_sign_3(pes_3_2_io_out_ver_sign_3),
    .io_out_ver_man_0(pes_3_2_io_out_ver_man_0),
    .io_out_ver_man_1(pes_3_2_io_out_ver_man_1),
    .io_out_ver_man_2(pes_3_2_io_out_ver_man_2),
    .io_out_ver_man_3(pes_3_2_io_out_ver_man_3),
    .io_out_ver_exp(pes_3_2_io_out_ver_exp),
    .io_out_result_sign(pes_3_2_io_out_result_sign),
    .io_out_result_man(pes_3_2_io_out_result_man),
    .io_out_result_exp(pes_3_2_io_out_result_exp)
  );
  HBFP_PE pes_3_3 ( // @[Systolic_Array_MIXMAN_4x4.scala 27:34]
    .clock(pes_3_3_clock),
    .reset(pes_3_3_reset),
    .io_in_hor_sign_0(pes_3_3_io_in_hor_sign_0),
    .io_in_hor_sign_1(pes_3_3_io_in_hor_sign_1),
    .io_in_hor_sign_2(pes_3_3_io_in_hor_sign_2),
    .io_in_hor_sign_3(pes_3_3_io_in_hor_sign_3),
    .io_in_hor_man_0(pes_3_3_io_in_hor_man_0),
    .io_in_hor_man_1(pes_3_3_io_in_hor_man_1),
    .io_in_hor_man_2(pes_3_3_io_in_hor_man_2),
    .io_in_hor_man_3(pes_3_3_io_in_hor_man_3),
    .io_in_hor_exp(pes_3_3_io_in_hor_exp),
    .io_in_ver_sign_0(pes_3_3_io_in_ver_sign_0),
    .io_in_ver_sign_1(pes_3_3_io_in_ver_sign_1),
    .io_in_ver_sign_2(pes_3_3_io_in_ver_sign_2),
    .io_in_ver_sign_3(pes_3_3_io_in_ver_sign_3),
    .io_in_ver_man_0(pes_3_3_io_in_ver_man_0),
    .io_in_ver_man_1(pes_3_3_io_in_ver_man_1),
    .io_in_ver_man_2(pes_3_3_io_in_ver_man_2),
    .io_in_ver_man_3(pes_3_3_io_in_ver_man_3),
    .io_in_ver_exp(pes_3_3_io_in_ver_exp),
    .io_in_flag(pes_3_3_io_in_flag),
    .io_out_hor_sign_0(pes_3_3_io_out_hor_sign_0),
    .io_out_hor_sign_1(pes_3_3_io_out_hor_sign_1),
    .io_out_hor_sign_2(pes_3_3_io_out_hor_sign_2),
    .io_out_hor_sign_3(pes_3_3_io_out_hor_sign_3),
    .io_out_hor_man_0(pes_3_3_io_out_hor_man_0),
    .io_out_hor_man_1(pes_3_3_io_out_hor_man_1),
    .io_out_hor_man_2(pes_3_3_io_out_hor_man_2),
    .io_out_hor_man_3(pes_3_3_io_out_hor_man_3),
    .io_out_hor_exp(pes_3_3_io_out_hor_exp),
    .io_out_ver_sign_0(pes_3_3_io_out_ver_sign_0),
    .io_out_ver_sign_1(pes_3_3_io_out_ver_sign_1),
    .io_out_ver_sign_2(pes_3_3_io_out_ver_sign_2),
    .io_out_ver_sign_3(pes_3_3_io_out_ver_sign_3),
    .io_out_ver_man_0(pes_3_3_io_out_ver_man_0),
    .io_out_ver_man_1(pes_3_3_io_out_ver_man_1),
    .io_out_ver_man_2(pes_3_3_io_out_ver_man_2),
    .io_out_ver_man_3(pes_3_3_io_out_ver_man_3),
    .io_out_ver_exp(pes_3_3_io_out_ver_exp),
    .io_out_result_sign(pes_3_3_io_out_result_sign),
    .io_out_result_man(pes_3_3_io_out_result_man),
    .io_out_result_exp(pes_3_3_io_out_result_exp)
  );
  Queue myinputQ_hor_0 ( // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
    .clock(myinputQ_hor_0_clock),
    .reset(myinputQ_hor_0_reset),
    .io_enq_ready(myinputQ_hor_0_io_enq_ready),
    .io_enq_valid(myinputQ_hor_0_io_enq_valid),
    .io_enq_bits_sign_0(myinputQ_hor_0_io_enq_bits_sign_0),
    .io_enq_bits_sign_1(myinputQ_hor_0_io_enq_bits_sign_1),
    .io_enq_bits_sign_2(myinputQ_hor_0_io_enq_bits_sign_2),
    .io_enq_bits_sign_3(myinputQ_hor_0_io_enq_bits_sign_3),
    .io_enq_bits_man_0(myinputQ_hor_0_io_enq_bits_man_0),
    .io_enq_bits_man_1(myinputQ_hor_0_io_enq_bits_man_1),
    .io_enq_bits_man_2(myinputQ_hor_0_io_enq_bits_man_2),
    .io_enq_bits_man_3(myinputQ_hor_0_io_enq_bits_man_3),
    .io_enq_bits_exp(myinputQ_hor_0_io_enq_bits_exp),
    .io_deq_ready(myinputQ_hor_0_io_deq_ready),
    .io_deq_valid(myinputQ_hor_0_io_deq_valid),
    .io_deq_bits_sign_0(myinputQ_hor_0_io_deq_bits_sign_0),
    .io_deq_bits_sign_1(myinputQ_hor_0_io_deq_bits_sign_1),
    .io_deq_bits_sign_2(myinputQ_hor_0_io_deq_bits_sign_2),
    .io_deq_bits_sign_3(myinputQ_hor_0_io_deq_bits_sign_3),
    .io_deq_bits_man_0(myinputQ_hor_0_io_deq_bits_man_0),
    .io_deq_bits_man_1(myinputQ_hor_0_io_deq_bits_man_1),
    .io_deq_bits_man_2(myinputQ_hor_0_io_deq_bits_man_2),
    .io_deq_bits_man_3(myinputQ_hor_0_io_deq_bits_man_3),
    .io_deq_bits_exp(myinputQ_hor_0_io_deq_bits_exp)
  );
  Queue myinputQ_hor_1 ( // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
    .clock(myinputQ_hor_1_clock),
    .reset(myinputQ_hor_1_reset),
    .io_enq_ready(myinputQ_hor_1_io_enq_ready),
    .io_enq_valid(myinputQ_hor_1_io_enq_valid),
    .io_enq_bits_sign_0(myinputQ_hor_1_io_enq_bits_sign_0),
    .io_enq_bits_sign_1(myinputQ_hor_1_io_enq_bits_sign_1),
    .io_enq_bits_sign_2(myinputQ_hor_1_io_enq_bits_sign_2),
    .io_enq_bits_sign_3(myinputQ_hor_1_io_enq_bits_sign_3),
    .io_enq_bits_man_0(myinputQ_hor_1_io_enq_bits_man_0),
    .io_enq_bits_man_1(myinputQ_hor_1_io_enq_bits_man_1),
    .io_enq_bits_man_2(myinputQ_hor_1_io_enq_bits_man_2),
    .io_enq_bits_man_3(myinputQ_hor_1_io_enq_bits_man_3),
    .io_enq_bits_exp(myinputQ_hor_1_io_enq_bits_exp),
    .io_deq_ready(myinputQ_hor_1_io_deq_ready),
    .io_deq_valid(myinputQ_hor_1_io_deq_valid),
    .io_deq_bits_sign_0(myinputQ_hor_1_io_deq_bits_sign_0),
    .io_deq_bits_sign_1(myinputQ_hor_1_io_deq_bits_sign_1),
    .io_deq_bits_sign_2(myinputQ_hor_1_io_deq_bits_sign_2),
    .io_deq_bits_sign_3(myinputQ_hor_1_io_deq_bits_sign_3),
    .io_deq_bits_man_0(myinputQ_hor_1_io_deq_bits_man_0),
    .io_deq_bits_man_1(myinputQ_hor_1_io_deq_bits_man_1),
    .io_deq_bits_man_2(myinputQ_hor_1_io_deq_bits_man_2),
    .io_deq_bits_man_3(myinputQ_hor_1_io_deq_bits_man_3),
    .io_deq_bits_exp(myinputQ_hor_1_io_deq_bits_exp)
  );
  Queue myinputQ_hor_2 ( // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
    .clock(myinputQ_hor_2_clock),
    .reset(myinputQ_hor_2_reset),
    .io_enq_ready(myinputQ_hor_2_io_enq_ready),
    .io_enq_valid(myinputQ_hor_2_io_enq_valid),
    .io_enq_bits_sign_0(myinputQ_hor_2_io_enq_bits_sign_0),
    .io_enq_bits_sign_1(myinputQ_hor_2_io_enq_bits_sign_1),
    .io_enq_bits_sign_2(myinputQ_hor_2_io_enq_bits_sign_2),
    .io_enq_bits_sign_3(myinputQ_hor_2_io_enq_bits_sign_3),
    .io_enq_bits_man_0(myinputQ_hor_2_io_enq_bits_man_0),
    .io_enq_bits_man_1(myinputQ_hor_2_io_enq_bits_man_1),
    .io_enq_bits_man_2(myinputQ_hor_2_io_enq_bits_man_2),
    .io_enq_bits_man_3(myinputQ_hor_2_io_enq_bits_man_3),
    .io_enq_bits_exp(myinputQ_hor_2_io_enq_bits_exp),
    .io_deq_ready(myinputQ_hor_2_io_deq_ready),
    .io_deq_valid(myinputQ_hor_2_io_deq_valid),
    .io_deq_bits_sign_0(myinputQ_hor_2_io_deq_bits_sign_0),
    .io_deq_bits_sign_1(myinputQ_hor_2_io_deq_bits_sign_1),
    .io_deq_bits_sign_2(myinputQ_hor_2_io_deq_bits_sign_2),
    .io_deq_bits_sign_3(myinputQ_hor_2_io_deq_bits_sign_3),
    .io_deq_bits_man_0(myinputQ_hor_2_io_deq_bits_man_0),
    .io_deq_bits_man_1(myinputQ_hor_2_io_deq_bits_man_1),
    .io_deq_bits_man_2(myinputQ_hor_2_io_deq_bits_man_2),
    .io_deq_bits_man_3(myinputQ_hor_2_io_deq_bits_man_3),
    .io_deq_bits_exp(myinputQ_hor_2_io_deq_bits_exp)
  );
  Queue myinputQ_hor_3 ( // @[Systolic_Array_MIXMAN_4x4.scala 34:40]
    .clock(myinputQ_hor_3_clock),
    .reset(myinputQ_hor_3_reset),
    .io_enq_ready(myinputQ_hor_3_io_enq_ready),
    .io_enq_valid(myinputQ_hor_3_io_enq_valid),
    .io_enq_bits_sign_0(myinputQ_hor_3_io_enq_bits_sign_0),
    .io_enq_bits_sign_1(myinputQ_hor_3_io_enq_bits_sign_1),
    .io_enq_bits_sign_2(myinputQ_hor_3_io_enq_bits_sign_2),
    .io_enq_bits_sign_3(myinputQ_hor_3_io_enq_bits_sign_3),
    .io_enq_bits_man_0(myinputQ_hor_3_io_enq_bits_man_0),
    .io_enq_bits_man_1(myinputQ_hor_3_io_enq_bits_man_1),
    .io_enq_bits_man_2(myinputQ_hor_3_io_enq_bits_man_2),
    .io_enq_bits_man_3(myinputQ_hor_3_io_enq_bits_man_3),
    .io_enq_bits_exp(myinputQ_hor_3_io_enq_bits_exp),
    .io_deq_ready(myinputQ_hor_3_io_deq_ready),
    .io_deq_valid(myinputQ_hor_3_io_deq_valid),
    .io_deq_bits_sign_0(myinputQ_hor_3_io_deq_bits_sign_0),
    .io_deq_bits_sign_1(myinputQ_hor_3_io_deq_bits_sign_1),
    .io_deq_bits_sign_2(myinputQ_hor_3_io_deq_bits_sign_2),
    .io_deq_bits_sign_3(myinputQ_hor_3_io_deq_bits_sign_3),
    .io_deq_bits_man_0(myinputQ_hor_3_io_deq_bits_man_0),
    .io_deq_bits_man_1(myinputQ_hor_3_io_deq_bits_man_1),
    .io_deq_bits_man_2(myinputQ_hor_3_io_deq_bits_man_2),
    .io_deq_bits_man_3(myinputQ_hor_3_io_deq_bits_man_3),
    .io_deq_bits_exp(myinputQ_hor_3_io_deq_bits_exp)
  );
  Queue myinputQ_ver_0 ( // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
    .clock(myinputQ_ver_0_clock),
    .reset(myinputQ_ver_0_reset),
    .io_enq_ready(myinputQ_ver_0_io_enq_ready),
    .io_enq_valid(myinputQ_ver_0_io_enq_valid),
    .io_enq_bits_sign_0(myinputQ_ver_0_io_enq_bits_sign_0),
    .io_enq_bits_sign_1(myinputQ_ver_0_io_enq_bits_sign_1),
    .io_enq_bits_sign_2(myinputQ_ver_0_io_enq_bits_sign_2),
    .io_enq_bits_sign_3(myinputQ_ver_0_io_enq_bits_sign_3),
    .io_enq_bits_man_0(myinputQ_ver_0_io_enq_bits_man_0),
    .io_enq_bits_man_1(myinputQ_ver_0_io_enq_bits_man_1),
    .io_enq_bits_man_2(myinputQ_ver_0_io_enq_bits_man_2),
    .io_enq_bits_man_3(myinputQ_ver_0_io_enq_bits_man_3),
    .io_enq_bits_exp(myinputQ_ver_0_io_enq_bits_exp),
    .io_deq_ready(myinputQ_ver_0_io_deq_ready),
    .io_deq_valid(myinputQ_ver_0_io_deq_valid),
    .io_deq_bits_sign_0(myinputQ_ver_0_io_deq_bits_sign_0),
    .io_deq_bits_sign_1(myinputQ_ver_0_io_deq_bits_sign_1),
    .io_deq_bits_sign_2(myinputQ_ver_0_io_deq_bits_sign_2),
    .io_deq_bits_sign_3(myinputQ_ver_0_io_deq_bits_sign_3),
    .io_deq_bits_man_0(myinputQ_ver_0_io_deq_bits_man_0),
    .io_deq_bits_man_1(myinputQ_ver_0_io_deq_bits_man_1),
    .io_deq_bits_man_2(myinputQ_ver_0_io_deq_bits_man_2),
    .io_deq_bits_man_3(myinputQ_ver_0_io_deq_bits_man_3),
    .io_deq_bits_exp(myinputQ_ver_0_io_deq_bits_exp)
  );
  Queue myinputQ_ver_1 ( // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
    .clock(myinputQ_ver_1_clock),
    .reset(myinputQ_ver_1_reset),
    .io_enq_ready(myinputQ_ver_1_io_enq_ready),
    .io_enq_valid(myinputQ_ver_1_io_enq_valid),
    .io_enq_bits_sign_0(myinputQ_ver_1_io_enq_bits_sign_0),
    .io_enq_bits_sign_1(myinputQ_ver_1_io_enq_bits_sign_1),
    .io_enq_bits_sign_2(myinputQ_ver_1_io_enq_bits_sign_2),
    .io_enq_bits_sign_3(myinputQ_ver_1_io_enq_bits_sign_3),
    .io_enq_bits_man_0(myinputQ_ver_1_io_enq_bits_man_0),
    .io_enq_bits_man_1(myinputQ_ver_1_io_enq_bits_man_1),
    .io_enq_bits_man_2(myinputQ_ver_1_io_enq_bits_man_2),
    .io_enq_bits_man_3(myinputQ_ver_1_io_enq_bits_man_3),
    .io_enq_bits_exp(myinputQ_ver_1_io_enq_bits_exp),
    .io_deq_ready(myinputQ_ver_1_io_deq_ready),
    .io_deq_valid(myinputQ_ver_1_io_deq_valid),
    .io_deq_bits_sign_0(myinputQ_ver_1_io_deq_bits_sign_0),
    .io_deq_bits_sign_1(myinputQ_ver_1_io_deq_bits_sign_1),
    .io_deq_bits_sign_2(myinputQ_ver_1_io_deq_bits_sign_2),
    .io_deq_bits_sign_3(myinputQ_ver_1_io_deq_bits_sign_3),
    .io_deq_bits_man_0(myinputQ_ver_1_io_deq_bits_man_0),
    .io_deq_bits_man_1(myinputQ_ver_1_io_deq_bits_man_1),
    .io_deq_bits_man_2(myinputQ_ver_1_io_deq_bits_man_2),
    .io_deq_bits_man_3(myinputQ_ver_1_io_deq_bits_man_3),
    .io_deq_bits_exp(myinputQ_ver_1_io_deq_bits_exp)
  );
  Queue myinputQ_ver_2 ( // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
    .clock(myinputQ_ver_2_clock),
    .reset(myinputQ_ver_2_reset),
    .io_enq_ready(myinputQ_ver_2_io_enq_ready),
    .io_enq_valid(myinputQ_ver_2_io_enq_valid),
    .io_enq_bits_sign_0(myinputQ_ver_2_io_enq_bits_sign_0),
    .io_enq_bits_sign_1(myinputQ_ver_2_io_enq_bits_sign_1),
    .io_enq_bits_sign_2(myinputQ_ver_2_io_enq_bits_sign_2),
    .io_enq_bits_sign_3(myinputQ_ver_2_io_enq_bits_sign_3),
    .io_enq_bits_man_0(myinputQ_ver_2_io_enq_bits_man_0),
    .io_enq_bits_man_1(myinputQ_ver_2_io_enq_bits_man_1),
    .io_enq_bits_man_2(myinputQ_ver_2_io_enq_bits_man_2),
    .io_enq_bits_man_3(myinputQ_ver_2_io_enq_bits_man_3),
    .io_enq_bits_exp(myinputQ_ver_2_io_enq_bits_exp),
    .io_deq_ready(myinputQ_ver_2_io_deq_ready),
    .io_deq_valid(myinputQ_ver_2_io_deq_valid),
    .io_deq_bits_sign_0(myinputQ_ver_2_io_deq_bits_sign_0),
    .io_deq_bits_sign_1(myinputQ_ver_2_io_deq_bits_sign_1),
    .io_deq_bits_sign_2(myinputQ_ver_2_io_deq_bits_sign_2),
    .io_deq_bits_sign_3(myinputQ_ver_2_io_deq_bits_sign_3),
    .io_deq_bits_man_0(myinputQ_ver_2_io_deq_bits_man_0),
    .io_deq_bits_man_1(myinputQ_ver_2_io_deq_bits_man_1),
    .io_deq_bits_man_2(myinputQ_ver_2_io_deq_bits_man_2),
    .io_deq_bits_man_3(myinputQ_ver_2_io_deq_bits_man_3),
    .io_deq_bits_exp(myinputQ_ver_2_io_deq_bits_exp)
  );
  Queue myinputQ_ver_3 ( // @[Systolic_Array_MIXMAN_4x4.scala 35:40]
    .clock(myinputQ_ver_3_clock),
    .reset(myinputQ_ver_3_reset),
    .io_enq_ready(myinputQ_ver_3_io_enq_ready),
    .io_enq_valid(myinputQ_ver_3_io_enq_valid),
    .io_enq_bits_sign_0(myinputQ_ver_3_io_enq_bits_sign_0),
    .io_enq_bits_sign_1(myinputQ_ver_3_io_enq_bits_sign_1),
    .io_enq_bits_sign_2(myinputQ_ver_3_io_enq_bits_sign_2),
    .io_enq_bits_sign_3(myinputQ_ver_3_io_enq_bits_sign_3),
    .io_enq_bits_man_0(myinputQ_ver_3_io_enq_bits_man_0),
    .io_enq_bits_man_1(myinputQ_ver_3_io_enq_bits_man_1),
    .io_enq_bits_man_2(myinputQ_ver_3_io_enq_bits_man_2),
    .io_enq_bits_man_3(myinputQ_ver_3_io_enq_bits_man_3),
    .io_enq_bits_exp(myinputQ_ver_3_io_enq_bits_exp),
    .io_deq_ready(myinputQ_ver_3_io_deq_ready),
    .io_deq_valid(myinputQ_ver_3_io_deq_valid),
    .io_deq_bits_sign_0(myinputQ_ver_3_io_deq_bits_sign_0),
    .io_deq_bits_sign_1(myinputQ_ver_3_io_deq_bits_sign_1),
    .io_deq_bits_sign_2(myinputQ_ver_3_io_deq_bits_sign_2),
    .io_deq_bits_sign_3(myinputQ_ver_3_io_deq_bits_sign_3),
    .io_deq_bits_man_0(myinputQ_ver_3_io_deq_bits_man_0),
    .io_deq_bits_man_1(myinputQ_ver_3_io_deq_bits_man_1),
    .io_deq_bits_man_2(myinputQ_ver_3_io_deq_bits_man_2),
    .io_deq_bits_man_3(myinputQ_ver_3_io_deq_bits_man_3),
    .io_deq_bits_exp(myinputQ_ver_3_io_deq_bits_exp)
  );
  assign io_in_hor_0_ready = myinputQ_hor_0_io_enq_ready; // @[Systolic_Array_MIXMAN_4x4.scala 38:28]
  assign io_in_hor_1_ready = myinputQ_hor_1_io_enq_ready; // @[Systolic_Array_MIXMAN_4x4.scala 38:28]
  assign io_in_hor_2_ready = myinputQ_hor_2_io_enq_ready; // @[Systolic_Array_MIXMAN_4x4.scala 38:28]
  assign io_in_hor_3_ready = myinputQ_hor_3_io_enq_ready; // @[Systolic_Array_MIXMAN_4x4.scala 38:28]
  assign io_in_ver_0_ready = myinputQ_ver_0_io_enq_ready; // @[Systolic_Array_MIXMAN_4x4.scala 39:28]
  assign io_in_ver_1_ready = myinputQ_ver_1_io_enq_ready; // @[Systolic_Array_MIXMAN_4x4.scala 39:28]
  assign io_in_ver_2_ready = myinputQ_ver_2_io_enq_ready; // @[Systolic_Array_MIXMAN_4x4.scala 39:28]
  assign io_in_ver_3_ready = myinputQ_ver_3_io_enq_ready; // @[Systolic_Array_MIXMAN_4x4.scala 39:28]
  assign io_out_0_0_result_sign = pes_0_0_io_out_result_sign; // @[Systolic_Array_MIXMAN_4x4.scala 81:27]
  assign io_out_0_0_result_man = pes_0_0_io_out_result_man; // @[Systolic_Array_MIXMAN_4x4.scala 81:27]
  assign io_out_0_0_result_exp = pes_0_0_io_out_result_exp; // @[Systolic_Array_MIXMAN_4x4.scala 81:27]
  assign io_out_0_1_result_sign = pes_0_1_io_out_result_sign; // @[Systolic_Array_MIXMAN_4x4.scala 81:27]
  assign io_out_0_1_result_man = pes_0_1_io_out_result_man; // @[Systolic_Array_MIXMAN_4x4.scala 81:27]
  assign io_out_0_1_result_exp = pes_0_1_io_out_result_exp; // @[Systolic_Array_MIXMAN_4x4.scala 81:27]
  assign io_out_0_2_result_sign = pes_0_2_io_out_result_sign; // @[Systolic_Array_MIXMAN_4x4.scala 81:27]
  assign io_out_0_2_result_man = pes_0_2_io_out_result_man; // @[Systolic_Array_MIXMAN_4x4.scala 81:27]
  assign io_out_0_2_result_exp = pes_0_2_io_out_result_exp; // @[Systolic_Array_MIXMAN_4x4.scala 81:27]
  assign io_out_0_3_result_sign = pes_0_3_io_out_result_sign; // @[Systolic_Array_MIXMAN_4x4.scala 81:27]
  assign io_out_0_3_result_man = pes_0_3_io_out_result_man; // @[Systolic_Array_MIXMAN_4x4.scala 81:27]
  assign io_out_0_3_result_exp = pes_0_3_io_out_result_exp; // @[Systolic_Array_MIXMAN_4x4.scala 81:27]
  assign io_out_1_0_result_sign = pes_1_0_io_out_result_sign; // @[Systolic_Array_MIXMAN_4x4.scala 81:27]
  assign io_out_1_0_result_man = pes_1_0_io_out_result_man; // @[Systolic_Array_MIXMAN_4x4.scala 81:27]
  assign io_out_1_0_result_exp = pes_1_0_io_out_result_exp; // @[Systolic_Array_MIXMAN_4x4.scala 81:27]
  assign io_out_1_1_result_sign = pes_1_1_io_out_result_sign; // @[Systolic_Array_MIXMAN_4x4.scala 81:27]
  assign io_out_1_1_result_man = pes_1_1_io_out_result_man; // @[Systolic_Array_MIXMAN_4x4.scala 81:27]
  assign io_out_1_1_result_exp = pes_1_1_io_out_result_exp; // @[Systolic_Array_MIXMAN_4x4.scala 81:27]
  assign io_out_1_2_result_sign = pes_1_2_io_out_result_sign; // @[Systolic_Array_MIXMAN_4x4.scala 81:27]
  assign io_out_1_2_result_man = pes_1_2_io_out_result_man; // @[Systolic_Array_MIXMAN_4x4.scala 81:27]
  assign io_out_1_2_result_exp = pes_1_2_io_out_result_exp; // @[Systolic_Array_MIXMAN_4x4.scala 81:27]
  assign io_out_1_3_result_sign = pes_1_3_io_out_result_sign; // @[Systolic_Array_MIXMAN_4x4.scala 81:27]
  assign io_out_1_3_result_man = pes_1_3_io_out_result_man; // @[Systolic_Array_MIXMAN_4x4.scala 81:27]
  assign io_out_1_3_result_exp = pes_1_3_io_out_result_exp; // @[Systolic_Array_MIXMAN_4x4.scala 81:27]
  assign io_out_2_0_result_sign = pes_2_0_io_out_result_sign; // @[Systolic_Array_MIXMAN_4x4.scala 81:27]
  assign io_out_2_0_result_man = pes_2_0_io_out_result_man; // @[Systolic_Array_MIXMAN_4x4.scala 81:27]
  assign io_out_2_0_result_exp = pes_2_0_io_out_result_exp; // @[Systolic_Array_MIXMAN_4x4.scala 81:27]
  assign io_out_2_1_result_sign = pes_2_1_io_out_result_sign; // @[Systolic_Array_MIXMAN_4x4.scala 81:27]
  assign io_out_2_1_result_man = pes_2_1_io_out_result_man; // @[Systolic_Array_MIXMAN_4x4.scala 81:27]
  assign io_out_2_1_result_exp = pes_2_1_io_out_result_exp; // @[Systolic_Array_MIXMAN_4x4.scala 81:27]
  assign io_out_2_2_result_sign = pes_2_2_io_out_result_sign; // @[Systolic_Array_MIXMAN_4x4.scala 81:27]
  assign io_out_2_2_result_man = pes_2_2_io_out_result_man; // @[Systolic_Array_MIXMAN_4x4.scala 81:27]
  assign io_out_2_2_result_exp = pes_2_2_io_out_result_exp; // @[Systolic_Array_MIXMAN_4x4.scala 81:27]
  assign io_out_2_3_result_sign = pes_2_3_io_out_result_sign; // @[Systolic_Array_MIXMAN_4x4.scala 81:27]
  assign io_out_2_3_result_man = pes_2_3_io_out_result_man; // @[Systolic_Array_MIXMAN_4x4.scala 81:27]
  assign io_out_2_3_result_exp = pes_2_3_io_out_result_exp; // @[Systolic_Array_MIXMAN_4x4.scala 81:27]
  assign io_out_3_0_result_sign = pes_3_0_io_out_result_sign; // @[Systolic_Array_MIXMAN_4x4.scala 81:27]
  assign io_out_3_0_result_man = pes_3_0_io_out_result_man; // @[Systolic_Array_MIXMAN_4x4.scala 81:27]
  assign io_out_3_0_result_exp = pes_3_0_io_out_result_exp; // @[Systolic_Array_MIXMAN_4x4.scala 81:27]
  assign io_out_3_1_result_sign = pes_3_1_io_out_result_sign; // @[Systolic_Array_MIXMAN_4x4.scala 81:27]
  assign io_out_3_1_result_man = pes_3_1_io_out_result_man; // @[Systolic_Array_MIXMAN_4x4.scala 81:27]
  assign io_out_3_1_result_exp = pes_3_1_io_out_result_exp; // @[Systolic_Array_MIXMAN_4x4.scala 81:27]
  assign io_out_3_2_result_sign = pes_3_2_io_out_result_sign; // @[Systolic_Array_MIXMAN_4x4.scala 81:27]
  assign io_out_3_2_result_man = pes_3_2_io_out_result_man; // @[Systolic_Array_MIXMAN_4x4.scala 81:27]
  assign io_out_3_2_result_exp = pes_3_2_io_out_result_exp; // @[Systolic_Array_MIXMAN_4x4.scala 81:27]
  assign io_out_3_3_result_sign = pes_3_3_io_out_result_sign; // @[Systolic_Array_MIXMAN_4x4.scala 81:27]
  assign io_out_3_3_result_man = pes_3_3_io_out_result_man; // @[Systolic_Array_MIXMAN_4x4.scala 81:27]
  assign io_out_3_3_result_exp = pes_3_3_io_out_result_exp; // @[Systolic_Array_MIXMAN_4x4.scala 81:27]
  assign pes_0_0_clock = clock;
  assign pes_0_0_reset = reset;
  assign pes_0_0_io_in_hor_sign_0 = _pes_0_0_io_in_hor_T & myinputQ_hor_0_io_deq_bits_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 58:31]
  assign pes_0_0_io_in_hor_sign_1 = _pes_0_0_io_in_hor_T & myinputQ_hor_0_io_deq_bits_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 58:31]
  assign pes_0_0_io_in_hor_sign_2 = _pes_0_0_io_in_hor_T & myinputQ_hor_0_io_deq_bits_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 58:31]
  assign pes_0_0_io_in_hor_sign_3 = _pes_0_0_io_in_hor_T & myinputQ_hor_0_io_deq_bits_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 58:31]
  assign pes_0_0_io_in_hor_man_0 = _pes_0_0_io_in_hor_T ? myinputQ_hor_0_io_deq_bits_man_0 : 4'h0; // @[Systolic_Array_MIXMAN_4x4.scala 58:31]
  assign pes_0_0_io_in_hor_man_1 = _pes_0_0_io_in_hor_T ? myinputQ_hor_0_io_deq_bits_man_1 : 4'h0; // @[Systolic_Array_MIXMAN_4x4.scala 58:31]
  assign pes_0_0_io_in_hor_man_2 = _pes_0_0_io_in_hor_T ? myinputQ_hor_0_io_deq_bits_man_2 : 4'h0; // @[Systolic_Array_MIXMAN_4x4.scala 58:31]
  assign pes_0_0_io_in_hor_man_3 = _pes_0_0_io_in_hor_T ? myinputQ_hor_0_io_deq_bits_man_3 : 4'h0; // @[Systolic_Array_MIXMAN_4x4.scala 58:31]
  assign pes_0_0_io_in_hor_exp = _pes_0_0_io_in_hor_T ? myinputQ_hor_0_io_deq_bits_exp : 8'h0; // @[Systolic_Array_MIXMAN_4x4.scala 58:31]
  assign pes_0_0_io_in_ver_sign_0 = _pes_0_0_io_in_ver_T & myinputQ_ver_0_io_deq_bits_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 59:31]
  assign pes_0_0_io_in_ver_sign_1 = _pes_0_0_io_in_ver_T & myinputQ_ver_0_io_deq_bits_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 59:31]
  assign pes_0_0_io_in_ver_sign_2 = _pes_0_0_io_in_ver_T & myinputQ_ver_0_io_deq_bits_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 59:31]
  assign pes_0_0_io_in_ver_sign_3 = _pes_0_0_io_in_ver_T & myinputQ_ver_0_io_deq_bits_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 59:31]
  assign pes_0_0_io_in_ver_man_0 = _pes_0_0_io_in_ver_T ? myinputQ_ver_0_io_deq_bits_man_0 : 4'h0; // @[Systolic_Array_MIXMAN_4x4.scala 59:31]
  assign pes_0_0_io_in_ver_man_1 = _pes_0_0_io_in_ver_T ? myinputQ_ver_0_io_deq_bits_man_1 : 4'h0; // @[Systolic_Array_MIXMAN_4x4.scala 59:31]
  assign pes_0_0_io_in_ver_man_2 = _pes_0_0_io_in_ver_T ? myinputQ_ver_0_io_deq_bits_man_2 : 4'h0; // @[Systolic_Array_MIXMAN_4x4.scala 59:31]
  assign pes_0_0_io_in_ver_man_3 = _pes_0_0_io_in_ver_T ? myinputQ_ver_0_io_deq_bits_man_3 : 4'h0; // @[Systolic_Array_MIXMAN_4x4.scala 59:31]
  assign pes_0_0_io_in_ver_exp = _pes_0_0_io_in_ver_T ? myinputQ_ver_0_io_deq_bits_exp : 8'h0; // @[Systolic_Array_MIXMAN_4x4.scala 59:31]
  assign pes_0_0_io_in_flag = io_in_flag; // @[Systolic_Array_MIXMAN_4x4.scala 31:28]
  assign pes_0_1_clock = clock;
  assign pes_0_1_reset = reset;
  assign pes_0_1_io_in_hor_sign_0 = pes_0_1_io_in_hor_r_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_0_1_io_in_hor_sign_1 = pes_0_1_io_in_hor_r_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_0_1_io_in_hor_sign_2 = pes_0_1_io_in_hor_r_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_0_1_io_in_hor_sign_3 = pes_0_1_io_in_hor_r_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_0_1_io_in_hor_man_0 = pes_0_1_io_in_hor_r_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_0_1_io_in_hor_man_1 = pes_0_1_io_in_hor_r_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_0_1_io_in_hor_man_2 = pes_0_1_io_in_hor_r_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_0_1_io_in_hor_man_3 = pes_0_1_io_in_hor_r_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_0_1_io_in_hor_exp = pes_0_1_io_in_hor_r_exp; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_0_1_io_in_ver_sign_0 = _pes_0_1_io_in_ver_T & myinputQ_ver_1_io_deq_bits_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 59:31]
  assign pes_0_1_io_in_ver_sign_1 = _pes_0_1_io_in_ver_T & myinputQ_ver_1_io_deq_bits_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 59:31]
  assign pes_0_1_io_in_ver_sign_2 = _pes_0_1_io_in_ver_T & myinputQ_ver_1_io_deq_bits_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 59:31]
  assign pes_0_1_io_in_ver_sign_3 = _pes_0_1_io_in_ver_T & myinputQ_ver_1_io_deq_bits_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 59:31]
  assign pes_0_1_io_in_ver_man_0 = _pes_0_1_io_in_ver_T ? myinputQ_ver_1_io_deq_bits_man_0 : 4'h0; // @[Systolic_Array_MIXMAN_4x4.scala 59:31]
  assign pes_0_1_io_in_ver_man_1 = _pes_0_1_io_in_ver_T ? myinputQ_ver_1_io_deq_bits_man_1 : 4'h0; // @[Systolic_Array_MIXMAN_4x4.scala 59:31]
  assign pes_0_1_io_in_ver_man_2 = _pes_0_1_io_in_ver_T ? myinputQ_ver_1_io_deq_bits_man_2 : 4'h0; // @[Systolic_Array_MIXMAN_4x4.scala 59:31]
  assign pes_0_1_io_in_ver_man_3 = _pes_0_1_io_in_ver_T ? myinputQ_ver_1_io_deq_bits_man_3 : 4'h0; // @[Systolic_Array_MIXMAN_4x4.scala 59:31]
  assign pes_0_1_io_in_ver_exp = _pes_0_1_io_in_ver_T ? myinputQ_ver_1_io_deq_bits_exp : 8'h0; // @[Systolic_Array_MIXMAN_4x4.scala 59:31]
  assign pes_0_1_io_in_flag = io_in_flag; // @[Systolic_Array_MIXMAN_4x4.scala 31:28]
  assign pes_0_2_clock = clock;
  assign pes_0_2_reset = reset;
  assign pes_0_2_io_in_hor_sign_0 = pes_0_2_io_in_hor_r_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_0_2_io_in_hor_sign_1 = pes_0_2_io_in_hor_r_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_0_2_io_in_hor_sign_2 = pes_0_2_io_in_hor_r_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_0_2_io_in_hor_sign_3 = pes_0_2_io_in_hor_r_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_0_2_io_in_hor_man_0 = pes_0_2_io_in_hor_r_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_0_2_io_in_hor_man_1 = pes_0_2_io_in_hor_r_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_0_2_io_in_hor_man_2 = pes_0_2_io_in_hor_r_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_0_2_io_in_hor_man_3 = pes_0_2_io_in_hor_r_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_0_2_io_in_hor_exp = pes_0_2_io_in_hor_r_exp; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_0_2_io_in_ver_sign_0 = _pes_0_2_io_in_ver_T & myinputQ_ver_2_io_deq_bits_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 59:31]
  assign pes_0_2_io_in_ver_sign_1 = _pes_0_2_io_in_ver_T & myinputQ_ver_2_io_deq_bits_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 59:31]
  assign pes_0_2_io_in_ver_sign_2 = _pes_0_2_io_in_ver_T & myinputQ_ver_2_io_deq_bits_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 59:31]
  assign pes_0_2_io_in_ver_sign_3 = _pes_0_2_io_in_ver_T & myinputQ_ver_2_io_deq_bits_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 59:31]
  assign pes_0_2_io_in_ver_man_0 = _pes_0_2_io_in_ver_T ? myinputQ_ver_2_io_deq_bits_man_0 : 4'h0; // @[Systolic_Array_MIXMAN_4x4.scala 59:31]
  assign pes_0_2_io_in_ver_man_1 = _pes_0_2_io_in_ver_T ? myinputQ_ver_2_io_deq_bits_man_1 : 4'h0; // @[Systolic_Array_MIXMAN_4x4.scala 59:31]
  assign pes_0_2_io_in_ver_man_2 = _pes_0_2_io_in_ver_T ? myinputQ_ver_2_io_deq_bits_man_2 : 4'h0; // @[Systolic_Array_MIXMAN_4x4.scala 59:31]
  assign pes_0_2_io_in_ver_man_3 = _pes_0_2_io_in_ver_T ? myinputQ_ver_2_io_deq_bits_man_3 : 4'h0; // @[Systolic_Array_MIXMAN_4x4.scala 59:31]
  assign pes_0_2_io_in_ver_exp = _pes_0_2_io_in_ver_T ? myinputQ_ver_2_io_deq_bits_exp : 8'h0; // @[Systolic_Array_MIXMAN_4x4.scala 59:31]
  assign pes_0_2_io_in_flag = io_in_flag; // @[Systolic_Array_MIXMAN_4x4.scala 31:28]
  assign pes_0_3_clock = clock;
  assign pes_0_3_reset = reset;
  assign pes_0_3_io_in_hor_sign_0 = pes_0_3_io_in_hor_r_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_0_3_io_in_hor_sign_1 = pes_0_3_io_in_hor_r_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_0_3_io_in_hor_sign_2 = pes_0_3_io_in_hor_r_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_0_3_io_in_hor_sign_3 = pes_0_3_io_in_hor_r_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_0_3_io_in_hor_man_0 = pes_0_3_io_in_hor_r_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_0_3_io_in_hor_man_1 = pes_0_3_io_in_hor_r_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_0_3_io_in_hor_man_2 = pes_0_3_io_in_hor_r_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_0_3_io_in_hor_man_3 = pes_0_3_io_in_hor_r_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_0_3_io_in_hor_exp = pes_0_3_io_in_hor_r_exp; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_0_3_io_in_ver_sign_0 = _pes_0_3_io_in_ver_T & myinputQ_ver_3_io_deq_bits_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 59:31]
  assign pes_0_3_io_in_ver_sign_1 = _pes_0_3_io_in_ver_T & myinputQ_ver_3_io_deq_bits_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 59:31]
  assign pes_0_3_io_in_ver_sign_2 = _pes_0_3_io_in_ver_T & myinputQ_ver_3_io_deq_bits_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 59:31]
  assign pes_0_3_io_in_ver_sign_3 = _pes_0_3_io_in_ver_T & myinputQ_ver_3_io_deq_bits_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 59:31]
  assign pes_0_3_io_in_ver_man_0 = _pes_0_3_io_in_ver_T ? myinputQ_ver_3_io_deq_bits_man_0 : 4'h0; // @[Systolic_Array_MIXMAN_4x4.scala 59:31]
  assign pes_0_3_io_in_ver_man_1 = _pes_0_3_io_in_ver_T ? myinputQ_ver_3_io_deq_bits_man_1 : 4'h0; // @[Systolic_Array_MIXMAN_4x4.scala 59:31]
  assign pes_0_3_io_in_ver_man_2 = _pes_0_3_io_in_ver_T ? myinputQ_ver_3_io_deq_bits_man_2 : 4'h0; // @[Systolic_Array_MIXMAN_4x4.scala 59:31]
  assign pes_0_3_io_in_ver_man_3 = _pes_0_3_io_in_ver_T ? myinputQ_ver_3_io_deq_bits_man_3 : 4'h0; // @[Systolic_Array_MIXMAN_4x4.scala 59:31]
  assign pes_0_3_io_in_ver_exp = _pes_0_3_io_in_ver_T ? myinputQ_ver_3_io_deq_bits_exp : 8'h0; // @[Systolic_Array_MIXMAN_4x4.scala 59:31]
  assign pes_0_3_io_in_flag = io_in_flag; // @[Systolic_Array_MIXMAN_4x4.scala 31:28]
  assign pes_1_0_clock = clock;
  assign pes_1_0_reset = reset;
  assign pes_1_0_io_in_hor_sign_0 = _pes_1_0_io_in_hor_T & myinputQ_hor_1_io_deq_bits_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 58:31]
  assign pes_1_0_io_in_hor_sign_1 = _pes_1_0_io_in_hor_T & myinputQ_hor_1_io_deq_bits_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 58:31]
  assign pes_1_0_io_in_hor_sign_2 = _pes_1_0_io_in_hor_T & myinputQ_hor_1_io_deq_bits_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 58:31]
  assign pes_1_0_io_in_hor_sign_3 = _pes_1_0_io_in_hor_T & myinputQ_hor_1_io_deq_bits_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 58:31]
  assign pes_1_0_io_in_hor_man_0 = _pes_1_0_io_in_hor_T ? myinputQ_hor_1_io_deq_bits_man_0 : 4'h0; // @[Systolic_Array_MIXMAN_4x4.scala 58:31]
  assign pes_1_0_io_in_hor_man_1 = _pes_1_0_io_in_hor_T ? myinputQ_hor_1_io_deq_bits_man_1 : 4'h0; // @[Systolic_Array_MIXMAN_4x4.scala 58:31]
  assign pes_1_0_io_in_hor_man_2 = _pes_1_0_io_in_hor_T ? myinputQ_hor_1_io_deq_bits_man_2 : 4'h0; // @[Systolic_Array_MIXMAN_4x4.scala 58:31]
  assign pes_1_0_io_in_hor_man_3 = _pes_1_0_io_in_hor_T ? myinputQ_hor_1_io_deq_bits_man_3 : 4'h0; // @[Systolic_Array_MIXMAN_4x4.scala 58:31]
  assign pes_1_0_io_in_hor_exp = _pes_1_0_io_in_hor_T ? myinputQ_hor_1_io_deq_bits_exp : 8'h0; // @[Systolic_Array_MIXMAN_4x4.scala 58:31]
  assign pes_1_0_io_in_ver_sign_0 = pes_1_0_io_in_ver_r_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_1_0_io_in_ver_sign_1 = pes_1_0_io_in_ver_r_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_1_0_io_in_ver_sign_2 = pes_1_0_io_in_ver_r_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_1_0_io_in_ver_sign_3 = pes_1_0_io_in_ver_r_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_1_0_io_in_ver_man_0 = pes_1_0_io_in_ver_r_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_1_0_io_in_ver_man_1 = pes_1_0_io_in_ver_r_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_1_0_io_in_ver_man_2 = pes_1_0_io_in_ver_r_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_1_0_io_in_ver_man_3 = pes_1_0_io_in_ver_r_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_1_0_io_in_ver_exp = pes_1_0_io_in_ver_r_exp; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_1_0_io_in_flag = io_in_flag; // @[Systolic_Array_MIXMAN_4x4.scala 31:28]
  assign pes_1_1_clock = clock;
  assign pes_1_1_reset = reset;
  assign pes_1_1_io_in_hor_sign_0 = pes_1_1_io_in_hor_r_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_1_1_io_in_hor_sign_1 = pes_1_1_io_in_hor_r_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_1_1_io_in_hor_sign_2 = pes_1_1_io_in_hor_r_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_1_1_io_in_hor_sign_3 = pes_1_1_io_in_hor_r_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_1_1_io_in_hor_man_0 = pes_1_1_io_in_hor_r_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_1_1_io_in_hor_man_1 = pes_1_1_io_in_hor_r_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_1_1_io_in_hor_man_2 = pes_1_1_io_in_hor_r_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_1_1_io_in_hor_man_3 = pes_1_1_io_in_hor_r_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_1_1_io_in_hor_exp = pes_1_1_io_in_hor_r_exp; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_1_1_io_in_ver_sign_0 = pes_1_1_io_in_ver_r_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_1_1_io_in_ver_sign_1 = pes_1_1_io_in_ver_r_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_1_1_io_in_ver_sign_2 = pes_1_1_io_in_ver_r_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_1_1_io_in_ver_sign_3 = pes_1_1_io_in_ver_r_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_1_1_io_in_ver_man_0 = pes_1_1_io_in_ver_r_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_1_1_io_in_ver_man_1 = pes_1_1_io_in_ver_r_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_1_1_io_in_ver_man_2 = pes_1_1_io_in_ver_r_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_1_1_io_in_ver_man_3 = pes_1_1_io_in_ver_r_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_1_1_io_in_ver_exp = pes_1_1_io_in_ver_r_exp; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_1_1_io_in_flag = io_in_flag; // @[Systolic_Array_MIXMAN_4x4.scala 31:28]
  assign pes_1_2_clock = clock;
  assign pes_1_2_reset = reset;
  assign pes_1_2_io_in_hor_sign_0 = pes_1_2_io_in_hor_r_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_1_2_io_in_hor_sign_1 = pes_1_2_io_in_hor_r_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_1_2_io_in_hor_sign_2 = pes_1_2_io_in_hor_r_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_1_2_io_in_hor_sign_3 = pes_1_2_io_in_hor_r_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_1_2_io_in_hor_man_0 = pes_1_2_io_in_hor_r_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_1_2_io_in_hor_man_1 = pes_1_2_io_in_hor_r_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_1_2_io_in_hor_man_2 = pes_1_2_io_in_hor_r_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_1_2_io_in_hor_man_3 = pes_1_2_io_in_hor_r_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_1_2_io_in_hor_exp = pes_1_2_io_in_hor_r_exp; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_1_2_io_in_ver_sign_0 = pes_1_2_io_in_ver_r_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_1_2_io_in_ver_sign_1 = pes_1_2_io_in_ver_r_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_1_2_io_in_ver_sign_2 = pes_1_2_io_in_ver_r_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_1_2_io_in_ver_sign_3 = pes_1_2_io_in_ver_r_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_1_2_io_in_ver_man_0 = pes_1_2_io_in_ver_r_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_1_2_io_in_ver_man_1 = pes_1_2_io_in_ver_r_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_1_2_io_in_ver_man_2 = pes_1_2_io_in_ver_r_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_1_2_io_in_ver_man_3 = pes_1_2_io_in_ver_r_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_1_2_io_in_ver_exp = pes_1_2_io_in_ver_r_exp; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_1_2_io_in_flag = io_in_flag; // @[Systolic_Array_MIXMAN_4x4.scala 31:28]
  assign pes_1_3_clock = clock;
  assign pes_1_3_reset = reset;
  assign pes_1_3_io_in_hor_sign_0 = pes_1_3_io_in_hor_r_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_1_3_io_in_hor_sign_1 = pes_1_3_io_in_hor_r_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_1_3_io_in_hor_sign_2 = pes_1_3_io_in_hor_r_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_1_3_io_in_hor_sign_3 = pes_1_3_io_in_hor_r_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_1_3_io_in_hor_man_0 = pes_1_3_io_in_hor_r_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_1_3_io_in_hor_man_1 = pes_1_3_io_in_hor_r_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_1_3_io_in_hor_man_2 = pes_1_3_io_in_hor_r_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_1_3_io_in_hor_man_3 = pes_1_3_io_in_hor_r_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_1_3_io_in_hor_exp = pes_1_3_io_in_hor_r_exp; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_1_3_io_in_ver_sign_0 = pes_1_3_io_in_ver_r_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_1_3_io_in_ver_sign_1 = pes_1_3_io_in_ver_r_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_1_3_io_in_ver_sign_2 = pes_1_3_io_in_ver_r_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_1_3_io_in_ver_sign_3 = pes_1_3_io_in_ver_r_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_1_3_io_in_ver_man_0 = pes_1_3_io_in_ver_r_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_1_3_io_in_ver_man_1 = pes_1_3_io_in_ver_r_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_1_3_io_in_ver_man_2 = pes_1_3_io_in_ver_r_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_1_3_io_in_ver_man_3 = pes_1_3_io_in_ver_r_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_1_3_io_in_ver_exp = pes_1_3_io_in_ver_r_exp; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_1_3_io_in_flag = io_in_flag; // @[Systolic_Array_MIXMAN_4x4.scala 31:28]
  assign pes_2_0_clock = clock;
  assign pes_2_0_reset = reset;
  assign pes_2_0_io_in_hor_sign_0 = _pes_2_0_io_in_hor_T & myinputQ_hor_2_io_deq_bits_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 58:31]
  assign pes_2_0_io_in_hor_sign_1 = _pes_2_0_io_in_hor_T & myinputQ_hor_2_io_deq_bits_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 58:31]
  assign pes_2_0_io_in_hor_sign_2 = _pes_2_0_io_in_hor_T & myinputQ_hor_2_io_deq_bits_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 58:31]
  assign pes_2_0_io_in_hor_sign_3 = _pes_2_0_io_in_hor_T & myinputQ_hor_2_io_deq_bits_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 58:31]
  assign pes_2_0_io_in_hor_man_0 = _pes_2_0_io_in_hor_T ? myinputQ_hor_2_io_deq_bits_man_0 : 4'h0; // @[Systolic_Array_MIXMAN_4x4.scala 58:31]
  assign pes_2_0_io_in_hor_man_1 = _pes_2_0_io_in_hor_T ? myinputQ_hor_2_io_deq_bits_man_1 : 4'h0; // @[Systolic_Array_MIXMAN_4x4.scala 58:31]
  assign pes_2_0_io_in_hor_man_2 = _pes_2_0_io_in_hor_T ? myinputQ_hor_2_io_deq_bits_man_2 : 4'h0; // @[Systolic_Array_MIXMAN_4x4.scala 58:31]
  assign pes_2_0_io_in_hor_man_3 = _pes_2_0_io_in_hor_T ? myinputQ_hor_2_io_deq_bits_man_3 : 4'h0; // @[Systolic_Array_MIXMAN_4x4.scala 58:31]
  assign pes_2_0_io_in_hor_exp = _pes_2_0_io_in_hor_T ? myinputQ_hor_2_io_deq_bits_exp : 8'h0; // @[Systolic_Array_MIXMAN_4x4.scala 58:31]
  assign pes_2_0_io_in_ver_sign_0 = pes_2_0_io_in_ver_r_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_2_0_io_in_ver_sign_1 = pes_2_0_io_in_ver_r_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_2_0_io_in_ver_sign_2 = pes_2_0_io_in_ver_r_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_2_0_io_in_ver_sign_3 = pes_2_0_io_in_ver_r_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_2_0_io_in_ver_man_0 = pes_2_0_io_in_ver_r_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_2_0_io_in_ver_man_1 = pes_2_0_io_in_ver_r_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_2_0_io_in_ver_man_2 = pes_2_0_io_in_ver_r_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_2_0_io_in_ver_man_3 = pes_2_0_io_in_ver_r_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_2_0_io_in_ver_exp = pes_2_0_io_in_ver_r_exp; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_2_0_io_in_flag = io_in_flag; // @[Systolic_Array_MIXMAN_4x4.scala 31:28]
  assign pes_2_1_clock = clock;
  assign pes_2_1_reset = reset;
  assign pes_2_1_io_in_hor_sign_0 = pes_2_1_io_in_hor_r_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_2_1_io_in_hor_sign_1 = pes_2_1_io_in_hor_r_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_2_1_io_in_hor_sign_2 = pes_2_1_io_in_hor_r_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_2_1_io_in_hor_sign_3 = pes_2_1_io_in_hor_r_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_2_1_io_in_hor_man_0 = pes_2_1_io_in_hor_r_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_2_1_io_in_hor_man_1 = pes_2_1_io_in_hor_r_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_2_1_io_in_hor_man_2 = pes_2_1_io_in_hor_r_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_2_1_io_in_hor_man_3 = pes_2_1_io_in_hor_r_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_2_1_io_in_hor_exp = pes_2_1_io_in_hor_r_exp; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_2_1_io_in_ver_sign_0 = pes_2_1_io_in_ver_r_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_2_1_io_in_ver_sign_1 = pes_2_1_io_in_ver_r_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_2_1_io_in_ver_sign_2 = pes_2_1_io_in_ver_r_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_2_1_io_in_ver_sign_3 = pes_2_1_io_in_ver_r_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_2_1_io_in_ver_man_0 = pes_2_1_io_in_ver_r_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_2_1_io_in_ver_man_1 = pes_2_1_io_in_ver_r_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_2_1_io_in_ver_man_2 = pes_2_1_io_in_ver_r_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_2_1_io_in_ver_man_3 = pes_2_1_io_in_ver_r_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_2_1_io_in_ver_exp = pes_2_1_io_in_ver_r_exp; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_2_1_io_in_flag = io_in_flag; // @[Systolic_Array_MIXMAN_4x4.scala 31:28]
  assign pes_2_2_clock = clock;
  assign pes_2_2_reset = reset;
  assign pes_2_2_io_in_hor_sign_0 = pes_2_2_io_in_hor_r_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_2_2_io_in_hor_sign_1 = pes_2_2_io_in_hor_r_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_2_2_io_in_hor_sign_2 = pes_2_2_io_in_hor_r_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_2_2_io_in_hor_sign_3 = pes_2_2_io_in_hor_r_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_2_2_io_in_hor_man_0 = pes_2_2_io_in_hor_r_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_2_2_io_in_hor_man_1 = pes_2_2_io_in_hor_r_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_2_2_io_in_hor_man_2 = pes_2_2_io_in_hor_r_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_2_2_io_in_hor_man_3 = pes_2_2_io_in_hor_r_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_2_2_io_in_hor_exp = pes_2_2_io_in_hor_r_exp; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_2_2_io_in_ver_sign_0 = pes_2_2_io_in_ver_r_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_2_2_io_in_ver_sign_1 = pes_2_2_io_in_ver_r_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_2_2_io_in_ver_sign_2 = pes_2_2_io_in_ver_r_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_2_2_io_in_ver_sign_3 = pes_2_2_io_in_ver_r_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_2_2_io_in_ver_man_0 = pes_2_2_io_in_ver_r_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_2_2_io_in_ver_man_1 = pes_2_2_io_in_ver_r_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_2_2_io_in_ver_man_2 = pes_2_2_io_in_ver_r_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_2_2_io_in_ver_man_3 = pes_2_2_io_in_ver_r_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_2_2_io_in_ver_exp = pes_2_2_io_in_ver_r_exp; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_2_2_io_in_flag = io_in_flag; // @[Systolic_Array_MIXMAN_4x4.scala 31:28]
  assign pes_2_3_clock = clock;
  assign pes_2_3_reset = reset;
  assign pes_2_3_io_in_hor_sign_0 = pes_2_3_io_in_hor_r_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_2_3_io_in_hor_sign_1 = pes_2_3_io_in_hor_r_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_2_3_io_in_hor_sign_2 = pes_2_3_io_in_hor_r_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_2_3_io_in_hor_sign_3 = pes_2_3_io_in_hor_r_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_2_3_io_in_hor_man_0 = pes_2_3_io_in_hor_r_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_2_3_io_in_hor_man_1 = pes_2_3_io_in_hor_r_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_2_3_io_in_hor_man_2 = pes_2_3_io_in_hor_r_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_2_3_io_in_hor_man_3 = pes_2_3_io_in_hor_r_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_2_3_io_in_hor_exp = pes_2_3_io_in_hor_r_exp; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_2_3_io_in_ver_sign_0 = pes_2_3_io_in_ver_r_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_2_3_io_in_ver_sign_1 = pes_2_3_io_in_ver_r_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_2_3_io_in_ver_sign_2 = pes_2_3_io_in_ver_r_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_2_3_io_in_ver_sign_3 = pes_2_3_io_in_ver_r_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_2_3_io_in_ver_man_0 = pes_2_3_io_in_ver_r_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_2_3_io_in_ver_man_1 = pes_2_3_io_in_ver_r_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_2_3_io_in_ver_man_2 = pes_2_3_io_in_ver_r_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_2_3_io_in_ver_man_3 = pes_2_3_io_in_ver_r_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_2_3_io_in_ver_exp = pes_2_3_io_in_ver_r_exp; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_2_3_io_in_flag = io_in_flag; // @[Systolic_Array_MIXMAN_4x4.scala 31:28]
  assign pes_3_0_clock = clock;
  assign pes_3_0_reset = reset;
  assign pes_3_0_io_in_hor_sign_0 = _pes_3_0_io_in_hor_T & myinputQ_hor_3_io_deq_bits_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 58:31]
  assign pes_3_0_io_in_hor_sign_1 = _pes_3_0_io_in_hor_T & myinputQ_hor_3_io_deq_bits_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 58:31]
  assign pes_3_0_io_in_hor_sign_2 = _pes_3_0_io_in_hor_T & myinputQ_hor_3_io_deq_bits_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 58:31]
  assign pes_3_0_io_in_hor_sign_3 = _pes_3_0_io_in_hor_T & myinputQ_hor_3_io_deq_bits_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 58:31]
  assign pes_3_0_io_in_hor_man_0 = _pes_3_0_io_in_hor_T ? myinputQ_hor_3_io_deq_bits_man_0 : 4'h0; // @[Systolic_Array_MIXMAN_4x4.scala 58:31]
  assign pes_3_0_io_in_hor_man_1 = _pes_3_0_io_in_hor_T ? myinputQ_hor_3_io_deq_bits_man_1 : 4'h0; // @[Systolic_Array_MIXMAN_4x4.scala 58:31]
  assign pes_3_0_io_in_hor_man_2 = _pes_3_0_io_in_hor_T ? myinputQ_hor_3_io_deq_bits_man_2 : 4'h0; // @[Systolic_Array_MIXMAN_4x4.scala 58:31]
  assign pes_3_0_io_in_hor_man_3 = _pes_3_0_io_in_hor_T ? myinputQ_hor_3_io_deq_bits_man_3 : 4'h0; // @[Systolic_Array_MIXMAN_4x4.scala 58:31]
  assign pes_3_0_io_in_hor_exp = _pes_3_0_io_in_hor_T ? myinputQ_hor_3_io_deq_bits_exp : 8'h0; // @[Systolic_Array_MIXMAN_4x4.scala 58:31]
  assign pes_3_0_io_in_ver_sign_0 = pes_3_0_io_in_ver_r_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_3_0_io_in_ver_sign_1 = pes_3_0_io_in_ver_r_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_3_0_io_in_ver_sign_2 = pes_3_0_io_in_ver_r_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_3_0_io_in_ver_sign_3 = pes_3_0_io_in_ver_r_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_3_0_io_in_ver_man_0 = pes_3_0_io_in_ver_r_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_3_0_io_in_ver_man_1 = pes_3_0_io_in_ver_r_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_3_0_io_in_ver_man_2 = pes_3_0_io_in_ver_r_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_3_0_io_in_ver_man_3 = pes_3_0_io_in_ver_r_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_3_0_io_in_ver_exp = pes_3_0_io_in_ver_r_exp; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_3_0_io_in_flag = io_in_flag; // @[Systolic_Array_MIXMAN_4x4.scala 31:28]
  assign pes_3_1_clock = clock;
  assign pes_3_1_reset = reset;
  assign pes_3_1_io_in_hor_sign_0 = pes_3_1_io_in_hor_r_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_3_1_io_in_hor_sign_1 = pes_3_1_io_in_hor_r_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_3_1_io_in_hor_sign_2 = pes_3_1_io_in_hor_r_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_3_1_io_in_hor_sign_3 = pes_3_1_io_in_hor_r_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_3_1_io_in_hor_man_0 = pes_3_1_io_in_hor_r_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_3_1_io_in_hor_man_1 = pes_3_1_io_in_hor_r_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_3_1_io_in_hor_man_2 = pes_3_1_io_in_hor_r_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_3_1_io_in_hor_man_3 = pes_3_1_io_in_hor_r_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_3_1_io_in_hor_exp = pes_3_1_io_in_hor_r_exp; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_3_1_io_in_ver_sign_0 = pes_3_1_io_in_ver_r_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_3_1_io_in_ver_sign_1 = pes_3_1_io_in_ver_r_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_3_1_io_in_ver_sign_2 = pes_3_1_io_in_ver_r_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_3_1_io_in_ver_sign_3 = pes_3_1_io_in_ver_r_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_3_1_io_in_ver_man_0 = pes_3_1_io_in_ver_r_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_3_1_io_in_ver_man_1 = pes_3_1_io_in_ver_r_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_3_1_io_in_ver_man_2 = pes_3_1_io_in_ver_r_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_3_1_io_in_ver_man_3 = pes_3_1_io_in_ver_r_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_3_1_io_in_ver_exp = pes_3_1_io_in_ver_r_exp; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_3_1_io_in_flag = io_in_flag; // @[Systolic_Array_MIXMAN_4x4.scala 31:28]
  assign pes_3_2_clock = clock;
  assign pes_3_2_reset = reset;
  assign pes_3_2_io_in_hor_sign_0 = pes_3_2_io_in_hor_r_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_3_2_io_in_hor_sign_1 = pes_3_2_io_in_hor_r_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_3_2_io_in_hor_sign_2 = pes_3_2_io_in_hor_r_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_3_2_io_in_hor_sign_3 = pes_3_2_io_in_hor_r_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_3_2_io_in_hor_man_0 = pes_3_2_io_in_hor_r_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_3_2_io_in_hor_man_1 = pes_3_2_io_in_hor_r_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_3_2_io_in_hor_man_2 = pes_3_2_io_in_hor_r_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_3_2_io_in_hor_man_3 = pes_3_2_io_in_hor_r_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_3_2_io_in_hor_exp = pes_3_2_io_in_hor_r_exp; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_3_2_io_in_ver_sign_0 = pes_3_2_io_in_ver_r_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_3_2_io_in_ver_sign_1 = pes_3_2_io_in_ver_r_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_3_2_io_in_ver_sign_2 = pes_3_2_io_in_ver_r_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_3_2_io_in_ver_sign_3 = pes_3_2_io_in_ver_r_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_3_2_io_in_ver_man_0 = pes_3_2_io_in_ver_r_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_3_2_io_in_ver_man_1 = pes_3_2_io_in_ver_r_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_3_2_io_in_ver_man_2 = pes_3_2_io_in_ver_r_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_3_2_io_in_ver_man_3 = pes_3_2_io_in_ver_r_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_3_2_io_in_ver_exp = pes_3_2_io_in_ver_r_exp; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_3_2_io_in_flag = io_in_flag; // @[Systolic_Array_MIXMAN_4x4.scala 31:28]
  assign pes_3_3_clock = clock;
  assign pes_3_3_reset = reset;
  assign pes_3_3_io_in_hor_sign_0 = pes_3_3_io_in_hor_r_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_3_3_io_in_hor_sign_1 = pes_3_3_io_in_hor_r_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_3_3_io_in_hor_sign_2 = pes_3_3_io_in_hor_r_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_3_3_io_in_hor_sign_3 = pes_3_3_io_in_hor_r_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_3_3_io_in_hor_man_0 = pes_3_3_io_in_hor_r_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_3_3_io_in_hor_man_1 = pes_3_3_io_in_hor_r_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_3_3_io_in_hor_man_2 = pes_3_3_io_in_hor_r_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_3_3_io_in_hor_man_3 = pes_3_3_io_in_hor_r_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_3_3_io_in_hor_exp = pes_3_3_io_in_hor_r_exp; // @[Systolic_Array_MIXMAN_4x4.scala 68:27]
  assign pes_3_3_io_in_ver_sign_0 = pes_3_3_io_in_ver_r_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_3_3_io_in_ver_sign_1 = pes_3_3_io_in_ver_r_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_3_3_io_in_ver_sign_2 = pes_3_3_io_in_ver_r_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_3_3_io_in_ver_sign_3 = pes_3_3_io_in_ver_r_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_3_3_io_in_ver_man_0 = pes_3_3_io_in_ver_r_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_3_3_io_in_ver_man_1 = pes_3_3_io_in_ver_r_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_3_3_io_in_ver_man_2 = pes_3_3_io_in_ver_r_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_3_3_io_in_ver_man_3 = pes_3_3_io_in_ver_r_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_3_3_io_in_ver_exp = pes_3_3_io_in_ver_r_exp; // @[Systolic_Array_MIXMAN_4x4.scala 75:27]
  assign pes_3_3_io_in_flag = io_in_flag; // @[Systolic_Array_MIXMAN_4x4.scala 31:28]
  assign myinputQ_hor_0_clock = clock;
  assign myinputQ_hor_0_reset = reset;
  assign myinputQ_hor_0_io_enq_valid = io_in_hor_0_valid; // @[Systolic_Array_MIXMAN_4x4.scala 38:28]
  assign myinputQ_hor_0_io_enq_bits_sign_0 = io_in_hor_0_bits_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 38:28]
  assign myinputQ_hor_0_io_enq_bits_sign_1 = io_in_hor_0_bits_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 38:28]
  assign myinputQ_hor_0_io_enq_bits_sign_2 = io_in_hor_0_bits_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 38:28]
  assign myinputQ_hor_0_io_enq_bits_sign_3 = io_in_hor_0_bits_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 38:28]
  assign myinputQ_hor_0_io_enq_bits_man_0 = io_in_hor_0_bits_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 38:28]
  assign myinputQ_hor_0_io_enq_bits_man_1 = io_in_hor_0_bits_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 38:28]
  assign myinputQ_hor_0_io_enq_bits_man_2 = io_in_hor_0_bits_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 38:28]
  assign myinputQ_hor_0_io_enq_bits_man_3 = io_in_hor_0_bits_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 38:28]
  assign myinputQ_hor_0_io_enq_bits_exp = io_in_hor_0_bits_exp; // @[Systolic_Array_MIXMAN_4x4.scala 38:28]
  assign myinputQ_hor_0_io_deq_ready = myinputQ_ver_0_io_deq_valid & myinputQ_ver_1_io_deq_valid &
    myinputQ_ver_2_io_deq_valid & myinputQ_ver_3_io_deq_valid; // @[Systolic_Array_MIXMAN_4x4.scala 62:77]
  assign myinputQ_hor_1_clock = clock;
  assign myinputQ_hor_1_reset = reset;
  assign myinputQ_hor_1_io_enq_valid = io_in_hor_1_valid; // @[Systolic_Array_MIXMAN_4x4.scala 38:28]
  assign myinputQ_hor_1_io_enq_bits_sign_0 = io_in_hor_1_bits_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 38:28]
  assign myinputQ_hor_1_io_enq_bits_sign_1 = io_in_hor_1_bits_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 38:28]
  assign myinputQ_hor_1_io_enq_bits_sign_2 = io_in_hor_1_bits_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 38:28]
  assign myinputQ_hor_1_io_enq_bits_sign_3 = io_in_hor_1_bits_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 38:28]
  assign myinputQ_hor_1_io_enq_bits_man_0 = io_in_hor_1_bits_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 38:28]
  assign myinputQ_hor_1_io_enq_bits_man_1 = io_in_hor_1_bits_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 38:28]
  assign myinputQ_hor_1_io_enq_bits_man_2 = io_in_hor_1_bits_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 38:28]
  assign myinputQ_hor_1_io_enq_bits_man_3 = io_in_hor_1_bits_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 38:28]
  assign myinputQ_hor_1_io_enq_bits_exp = io_in_hor_1_bits_exp; // @[Systolic_Array_MIXMAN_4x4.scala 38:28]
  assign myinputQ_hor_1_io_deq_ready = myinputQ_hor_1_io_deq_ready_r; // @[Systolic_Array_MIXMAN_4x4.scala 54:36]
  assign myinputQ_hor_2_clock = clock;
  assign myinputQ_hor_2_reset = reset;
  assign myinputQ_hor_2_io_enq_valid = io_in_hor_2_valid; // @[Systolic_Array_MIXMAN_4x4.scala 38:28]
  assign myinputQ_hor_2_io_enq_bits_sign_0 = io_in_hor_2_bits_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 38:28]
  assign myinputQ_hor_2_io_enq_bits_sign_1 = io_in_hor_2_bits_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 38:28]
  assign myinputQ_hor_2_io_enq_bits_sign_2 = io_in_hor_2_bits_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 38:28]
  assign myinputQ_hor_2_io_enq_bits_sign_3 = io_in_hor_2_bits_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 38:28]
  assign myinputQ_hor_2_io_enq_bits_man_0 = io_in_hor_2_bits_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 38:28]
  assign myinputQ_hor_2_io_enq_bits_man_1 = io_in_hor_2_bits_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 38:28]
  assign myinputQ_hor_2_io_enq_bits_man_2 = io_in_hor_2_bits_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 38:28]
  assign myinputQ_hor_2_io_enq_bits_man_3 = io_in_hor_2_bits_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 38:28]
  assign myinputQ_hor_2_io_enq_bits_exp = io_in_hor_2_bits_exp; // @[Systolic_Array_MIXMAN_4x4.scala 38:28]
  assign myinputQ_hor_2_io_deq_ready = myinputQ_hor_2_io_deq_ready_r_1; // @[Systolic_Array_MIXMAN_4x4.scala 54:36]
  assign myinputQ_hor_3_clock = clock;
  assign myinputQ_hor_3_reset = reset;
  assign myinputQ_hor_3_io_enq_valid = io_in_hor_3_valid; // @[Systolic_Array_MIXMAN_4x4.scala 38:28]
  assign myinputQ_hor_3_io_enq_bits_sign_0 = io_in_hor_3_bits_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 38:28]
  assign myinputQ_hor_3_io_enq_bits_sign_1 = io_in_hor_3_bits_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 38:28]
  assign myinputQ_hor_3_io_enq_bits_sign_2 = io_in_hor_3_bits_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 38:28]
  assign myinputQ_hor_3_io_enq_bits_sign_3 = io_in_hor_3_bits_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 38:28]
  assign myinputQ_hor_3_io_enq_bits_man_0 = io_in_hor_3_bits_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 38:28]
  assign myinputQ_hor_3_io_enq_bits_man_1 = io_in_hor_3_bits_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 38:28]
  assign myinputQ_hor_3_io_enq_bits_man_2 = io_in_hor_3_bits_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 38:28]
  assign myinputQ_hor_3_io_enq_bits_man_3 = io_in_hor_3_bits_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 38:28]
  assign myinputQ_hor_3_io_enq_bits_exp = io_in_hor_3_bits_exp; // @[Systolic_Array_MIXMAN_4x4.scala 38:28]
  assign myinputQ_hor_3_io_deq_ready = myinputQ_hor_3_io_deq_ready_r_2; // @[Systolic_Array_MIXMAN_4x4.scala 54:36]
  assign myinputQ_ver_0_clock = clock;
  assign myinputQ_ver_0_reset = reset;
  assign myinputQ_ver_0_io_enq_valid = io_in_ver_0_valid; // @[Systolic_Array_MIXMAN_4x4.scala 39:28]
  assign myinputQ_ver_0_io_enq_bits_sign_0 = io_in_ver_0_bits_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 39:28]
  assign myinputQ_ver_0_io_enq_bits_sign_1 = io_in_ver_0_bits_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 39:28]
  assign myinputQ_ver_0_io_enq_bits_sign_2 = io_in_ver_0_bits_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 39:28]
  assign myinputQ_ver_0_io_enq_bits_sign_3 = io_in_ver_0_bits_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 39:28]
  assign myinputQ_ver_0_io_enq_bits_man_0 = io_in_ver_0_bits_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 39:28]
  assign myinputQ_ver_0_io_enq_bits_man_1 = io_in_ver_0_bits_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 39:28]
  assign myinputQ_ver_0_io_enq_bits_man_2 = io_in_ver_0_bits_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 39:28]
  assign myinputQ_ver_0_io_enq_bits_man_3 = io_in_ver_0_bits_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 39:28]
  assign myinputQ_ver_0_io_enq_bits_exp = io_in_ver_0_bits_exp; // @[Systolic_Array_MIXMAN_4x4.scala 39:28]
  assign myinputQ_ver_0_io_deq_ready = myinputQ_hor_0_io_deq_valid & myinputQ_hor_1_io_deq_valid &
    myinputQ_hor_2_io_deq_valid & myinputQ_hor_3_io_deq_valid; // @[Systolic_Array_MIXMAN_4x4.scala 61:77]
  assign myinputQ_ver_1_clock = clock;
  assign myinputQ_ver_1_reset = reset;
  assign myinputQ_ver_1_io_enq_valid = io_in_ver_1_valid; // @[Systolic_Array_MIXMAN_4x4.scala 39:28]
  assign myinputQ_ver_1_io_enq_bits_sign_0 = io_in_ver_1_bits_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 39:28]
  assign myinputQ_ver_1_io_enq_bits_sign_1 = io_in_ver_1_bits_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 39:28]
  assign myinputQ_ver_1_io_enq_bits_sign_2 = io_in_ver_1_bits_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 39:28]
  assign myinputQ_ver_1_io_enq_bits_sign_3 = io_in_ver_1_bits_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 39:28]
  assign myinputQ_ver_1_io_enq_bits_man_0 = io_in_ver_1_bits_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 39:28]
  assign myinputQ_ver_1_io_enq_bits_man_1 = io_in_ver_1_bits_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 39:28]
  assign myinputQ_ver_1_io_enq_bits_man_2 = io_in_ver_1_bits_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 39:28]
  assign myinputQ_ver_1_io_enq_bits_man_3 = io_in_ver_1_bits_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 39:28]
  assign myinputQ_ver_1_io_enq_bits_exp = io_in_ver_1_bits_exp; // @[Systolic_Array_MIXMAN_4x4.scala 39:28]
  assign myinputQ_ver_1_io_deq_ready = myinputQ_ver_1_io_deq_ready_r; // @[Systolic_Array_MIXMAN_4x4.scala 56:36]
  assign myinputQ_ver_2_clock = clock;
  assign myinputQ_ver_2_reset = reset;
  assign myinputQ_ver_2_io_enq_valid = io_in_ver_2_valid; // @[Systolic_Array_MIXMAN_4x4.scala 39:28]
  assign myinputQ_ver_2_io_enq_bits_sign_0 = io_in_ver_2_bits_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 39:28]
  assign myinputQ_ver_2_io_enq_bits_sign_1 = io_in_ver_2_bits_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 39:28]
  assign myinputQ_ver_2_io_enq_bits_sign_2 = io_in_ver_2_bits_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 39:28]
  assign myinputQ_ver_2_io_enq_bits_sign_3 = io_in_ver_2_bits_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 39:28]
  assign myinputQ_ver_2_io_enq_bits_man_0 = io_in_ver_2_bits_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 39:28]
  assign myinputQ_ver_2_io_enq_bits_man_1 = io_in_ver_2_bits_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 39:28]
  assign myinputQ_ver_2_io_enq_bits_man_2 = io_in_ver_2_bits_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 39:28]
  assign myinputQ_ver_2_io_enq_bits_man_3 = io_in_ver_2_bits_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 39:28]
  assign myinputQ_ver_2_io_enq_bits_exp = io_in_ver_2_bits_exp; // @[Systolic_Array_MIXMAN_4x4.scala 39:28]
  assign myinputQ_ver_2_io_deq_ready = myinputQ_ver_2_io_deq_ready_r_1; // @[Systolic_Array_MIXMAN_4x4.scala 56:36]
  assign myinputQ_ver_3_clock = clock;
  assign myinputQ_ver_3_reset = reset;
  assign myinputQ_ver_3_io_enq_valid = io_in_ver_3_valid; // @[Systolic_Array_MIXMAN_4x4.scala 39:28]
  assign myinputQ_ver_3_io_enq_bits_sign_0 = io_in_ver_3_bits_sign_0; // @[Systolic_Array_MIXMAN_4x4.scala 39:28]
  assign myinputQ_ver_3_io_enq_bits_sign_1 = io_in_ver_3_bits_sign_1; // @[Systolic_Array_MIXMAN_4x4.scala 39:28]
  assign myinputQ_ver_3_io_enq_bits_sign_2 = io_in_ver_3_bits_sign_2; // @[Systolic_Array_MIXMAN_4x4.scala 39:28]
  assign myinputQ_ver_3_io_enq_bits_sign_3 = io_in_ver_3_bits_sign_3; // @[Systolic_Array_MIXMAN_4x4.scala 39:28]
  assign myinputQ_ver_3_io_enq_bits_man_0 = io_in_ver_3_bits_man_0; // @[Systolic_Array_MIXMAN_4x4.scala 39:28]
  assign myinputQ_ver_3_io_enq_bits_man_1 = io_in_ver_3_bits_man_1; // @[Systolic_Array_MIXMAN_4x4.scala 39:28]
  assign myinputQ_ver_3_io_enq_bits_man_2 = io_in_ver_3_bits_man_2; // @[Systolic_Array_MIXMAN_4x4.scala 39:28]
  assign myinputQ_ver_3_io_enq_bits_man_3 = io_in_ver_3_bits_man_3; // @[Systolic_Array_MIXMAN_4x4.scala 39:28]
  assign myinputQ_ver_3_io_enq_bits_exp = io_in_ver_3_bits_exp; // @[Systolic_Array_MIXMAN_4x4.scala 39:28]
  assign myinputQ_ver_3_io_deq_ready = myinputQ_ver_3_io_deq_ready_r_2; // @[Systolic_Array_MIXMAN_4x4.scala 56:36]
  always @(posedge clock) begin
    myinputQ_hor_1_io_deq_ready_r <= myinputQ_hor_0_io_deq_ready & myinputQ_hor_0_io_deq_valid; // @[Decoupled.scala 51:35]
    myinputQ_ver_1_io_deq_ready_r <= myinputQ_ver_0_io_deq_ready & myinputQ_ver_0_io_deq_valid; // @[Decoupled.scala 51:35]
    myinputQ_hor_2_io_deq_ready_r <= myinputQ_hor_0_io_deq_ready & myinputQ_hor_0_io_deq_valid; // @[Decoupled.scala 51:35]
    myinputQ_hor_2_io_deq_ready_r_1 <= myinputQ_hor_2_io_deq_ready_r; // @[Reg.scala 19:16 20:{18,22}]
    myinputQ_ver_2_io_deq_ready_r <= myinputQ_ver_0_io_deq_ready & myinputQ_ver_0_io_deq_valid; // @[Decoupled.scala 51:35]
    myinputQ_ver_2_io_deq_ready_r_1 <= myinputQ_ver_2_io_deq_ready_r; // @[Reg.scala 19:16 20:{18,22}]
    myinputQ_hor_3_io_deq_ready_r <= myinputQ_hor_0_io_deq_ready & myinputQ_hor_0_io_deq_valid; // @[Decoupled.scala 51:35]
    myinputQ_hor_3_io_deq_ready_r_1 <= myinputQ_hor_3_io_deq_ready_r; // @[Reg.scala 19:16 20:{18,22}]
    myinputQ_hor_3_io_deq_ready_r_2 <= myinputQ_hor_3_io_deq_ready_r_1; // @[Reg.scala 19:16 20:{18,22}]
    myinputQ_ver_3_io_deq_ready_r <= myinputQ_ver_0_io_deq_ready & myinputQ_ver_0_io_deq_valid; // @[Decoupled.scala 51:35]
    myinputQ_ver_3_io_deq_ready_r_1 <= myinputQ_ver_3_io_deq_ready_r; // @[Reg.scala 19:16 20:{18,22}]
    myinputQ_ver_3_io_deq_ready_r_2 <= myinputQ_ver_3_io_deq_ready_r_1; // @[Reg.scala 19:16 20:{18,22}]
    pes_0_1_io_in_hor_r_sign_0 <= pes_0_0_io_out_hor_sign_0; // @[Reg.scala 19:16 20:{18,22}]
    pes_0_1_io_in_hor_r_sign_1 <= pes_0_0_io_out_hor_sign_1; // @[Reg.scala 19:16 20:{18,22}]
    pes_0_1_io_in_hor_r_sign_2 <= pes_0_0_io_out_hor_sign_2; // @[Reg.scala 19:16 20:{18,22}]
    pes_0_1_io_in_hor_r_sign_3 <= pes_0_0_io_out_hor_sign_3; // @[Reg.scala 19:16 20:{18,22}]
    pes_0_1_io_in_hor_r_man_0 <= pes_0_0_io_out_hor_man_0; // @[Reg.scala 19:16 20:{18,22}]
    pes_0_1_io_in_hor_r_man_1 <= pes_0_0_io_out_hor_man_1; // @[Reg.scala 19:16 20:{18,22}]
    pes_0_1_io_in_hor_r_man_2 <= pes_0_0_io_out_hor_man_2; // @[Reg.scala 19:16 20:{18,22}]
    pes_0_1_io_in_hor_r_man_3 <= pes_0_0_io_out_hor_man_3; // @[Reg.scala 19:16 20:{18,22}]
    pes_0_1_io_in_hor_r_exp <= pes_0_0_io_out_hor_exp; // @[Reg.scala 19:16 20:{18,22}]
    pes_0_2_io_in_hor_r_sign_0 <= pes_0_1_io_out_hor_sign_0; // @[Reg.scala 19:16 20:{18,22}]
    pes_0_2_io_in_hor_r_sign_1 <= pes_0_1_io_out_hor_sign_1; // @[Reg.scala 19:16 20:{18,22}]
    pes_0_2_io_in_hor_r_sign_2 <= pes_0_1_io_out_hor_sign_2; // @[Reg.scala 19:16 20:{18,22}]
    pes_0_2_io_in_hor_r_sign_3 <= pes_0_1_io_out_hor_sign_3; // @[Reg.scala 19:16 20:{18,22}]
    pes_0_2_io_in_hor_r_man_0 <= pes_0_1_io_out_hor_man_0; // @[Reg.scala 19:16 20:{18,22}]
    pes_0_2_io_in_hor_r_man_1 <= pes_0_1_io_out_hor_man_1; // @[Reg.scala 19:16 20:{18,22}]
    pes_0_2_io_in_hor_r_man_2 <= pes_0_1_io_out_hor_man_2; // @[Reg.scala 19:16 20:{18,22}]
    pes_0_2_io_in_hor_r_man_3 <= pes_0_1_io_out_hor_man_3; // @[Reg.scala 19:16 20:{18,22}]
    pes_0_2_io_in_hor_r_exp <= pes_0_1_io_out_hor_exp; // @[Reg.scala 19:16 20:{18,22}]
    pes_0_3_io_in_hor_r_sign_0 <= pes_0_2_io_out_hor_sign_0; // @[Reg.scala 19:16 20:{18,22}]
    pes_0_3_io_in_hor_r_sign_1 <= pes_0_2_io_out_hor_sign_1; // @[Reg.scala 19:16 20:{18,22}]
    pes_0_3_io_in_hor_r_sign_2 <= pes_0_2_io_out_hor_sign_2; // @[Reg.scala 19:16 20:{18,22}]
    pes_0_3_io_in_hor_r_sign_3 <= pes_0_2_io_out_hor_sign_3; // @[Reg.scala 19:16 20:{18,22}]
    pes_0_3_io_in_hor_r_man_0 <= pes_0_2_io_out_hor_man_0; // @[Reg.scala 19:16 20:{18,22}]
    pes_0_3_io_in_hor_r_man_1 <= pes_0_2_io_out_hor_man_1; // @[Reg.scala 19:16 20:{18,22}]
    pes_0_3_io_in_hor_r_man_2 <= pes_0_2_io_out_hor_man_2; // @[Reg.scala 19:16 20:{18,22}]
    pes_0_3_io_in_hor_r_man_3 <= pes_0_2_io_out_hor_man_3; // @[Reg.scala 19:16 20:{18,22}]
    pes_0_3_io_in_hor_r_exp <= pes_0_2_io_out_hor_exp; // @[Reg.scala 19:16 20:{18,22}]
    pes_1_1_io_in_hor_r_sign_0 <= pes_1_0_io_out_hor_sign_0; // @[Reg.scala 19:16 20:{18,22}]
    pes_1_1_io_in_hor_r_sign_1 <= pes_1_0_io_out_hor_sign_1; // @[Reg.scala 19:16 20:{18,22}]
    pes_1_1_io_in_hor_r_sign_2 <= pes_1_0_io_out_hor_sign_2; // @[Reg.scala 19:16 20:{18,22}]
    pes_1_1_io_in_hor_r_sign_3 <= pes_1_0_io_out_hor_sign_3; // @[Reg.scala 19:16 20:{18,22}]
    pes_1_1_io_in_hor_r_man_0 <= pes_1_0_io_out_hor_man_0; // @[Reg.scala 19:16 20:{18,22}]
    pes_1_1_io_in_hor_r_man_1 <= pes_1_0_io_out_hor_man_1; // @[Reg.scala 19:16 20:{18,22}]
    pes_1_1_io_in_hor_r_man_2 <= pes_1_0_io_out_hor_man_2; // @[Reg.scala 19:16 20:{18,22}]
    pes_1_1_io_in_hor_r_man_3 <= pes_1_0_io_out_hor_man_3; // @[Reg.scala 19:16 20:{18,22}]
    pes_1_1_io_in_hor_r_exp <= pes_1_0_io_out_hor_exp; // @[Reg.scala 19:16 20:{18,22}]
    pes_1_2_io_in_hor_r_sign_0 <= pes_1_1_io_out_hor_sign_0; // @[Reg.scala 19:16 20:{18,22}]
    pes_1_2_io_in_hor_r_sign_1 <= pes_1_1_io_out_hor_sign_1; // @[Reg.scala 19:16 20:{18,22}]
    pes_1_2_io_in_hor_r_sign_2 <= pes_1_1_io_out_hor_sign_2; // @[Reg.scala 19:16 20:{18,22}]
    pes_1_2_io_in_hor_r_sign_3 <= pes_1_1_io_out_hor_sign_3; // @[Reg.scala 19:16 20:{18,22}]
    pes_1_2_io_in_hor_r_man_0 <= pes_1_1_io_out_hor_man_0; // @[Reg.scala 19:16 20:{18,22}]
    pes_1_2_io_in_hor_r_man_1 <= pes_1_1_io_out_hor_man_1; // @[Reg.scala 19:16 20:{18,22}]
    pes_1_2_io_in_hor_r_man_2 <= pes_1_1_io_out_hor_man_2; // @[Reg.scala 19:16 20:{18,22}]
    pes_1_2_io_in_hor_r_man_3 <= pes_1_1_io_out_hor_man_3; // @[Reg.scala 19:16 20:{18,22}]
    pes_1_2_io_in_hor_r_exp <= pes_1_1_io_out_hor_exp; // @[Reg.scala 19:16 20:{18,22}]
    pes_1_3_io_in_hor_r_sign_0 <= pes_1_2_io_out_hor_sign_0; // @[Reg.scala 19:16 20:{18,22}]
    pes_1_3_io_in_hor_r_sign_1 <= pes_1_2_io_out_hor_sign_1; // @[Reg.scala 19:16 20:{18,22}]
    pes_1_3_io_in_hor_r_sign_2 <= pes_1_2_io_out_hor_sign_2; // @[Reg.scala 19:16 20:{18,22}]
    pes_1_3_io_in_hor_r_sign_3 <= pes_1_2_io_out_hor_sign_3; // @[Reg.scala 19:16 20:{18,22}]
    pes_1_3_io_in_hor_r_man_0 <= pes_1_2_io_out_hor_man_0; // @[Reg.scala 19:16 20:{18,22}]
    pes_1_3_io_in_hor_r_man_1 <= pes_1_2_io_out_hor_man_1; // @[Reg.scala 19:16 20:{18,22}]
    pes_1_3_io_in_hor_r_man_2 <= pes_1_2_io_out_hor_man_2; // @[Reg.scala 19:16 20:{18,22}]
    pes_1_3_io_in_hor_r_man_3 <= pes_1_2_io_out_hor_man_3; // @[Reg.scala 19:16 20:{18,22}]
    pes_1_3_io_in_hor_r_exp <= pes_1_2_io_out_hor_exp; // @[Reg.scala 19:16 20:{18,22}]
    pes_2_1_io_in_hor_r_sign_0 <= pes_2_0_io_out_hor_sign_0; // @[Reg.scala 19:16 20:{18,22}]
    pes_2_1_io_in_hor_r_sign_1 <= pes_2_0_io_out_hor_sign_1; // @[Reg.scala 19:16 20:{18,22}]
    pes_2_1_io_in_hor_r_sign_2 <= pes_2_0_io_out_hor_sign_2; // @[Reg.scala 19:16 20:{18,22}]
    pes_2_1_io_in_hor_r_sign_3 <= pes_2_0_io_out_hor_sign_3; // @[Reg.scala 19:16 20:{18,22}]
    pes_2_1_io_in_hor_r_man_0 <= pes_2_0_io_out_hor_man_0; // @[Reg.scala 19:16 20:{18,22}]
    pes_2_1_io_in_hor_r_man_1 <= pes_2_0_io_out_hor_man_1; // @[Reg.scala 19:16 20:{18,22}]
    pes_2_1_io_in_hor_r_man_2 <= pes_2_0_io_out_hor_man_2; // @[Reg.scala 19:16 20:{18,22}]
    pes_2_1_io_in_hor_r_man_3 <= pes_2_0_io_out_hor_man_3; // @[Reg.scala 19:16 20:{18,22}]
    pes_2_1_io_in_hor_r_exp <= pes_2_0_io_out_hor_exp; // @[Reg.scala 19:16 20:{18,22}]
    pes_2_2_io_in_hor_r_sign_0 <= pes_2_1_io_out_hor_sign_0; // @[Reg.scala 19:16 20:{18,22}]
    pes_2_2_io_in_hor_r_sign_1 <= pes_2_1_io_out_hor_sign_1; // @[Reg.scala 19:16 20:{18,22}]
    pes_2_2_io_in_hor_r_sign_2 <= pes_2_1_io_out_hor_sign_2; // @[Reg.scala 19:16 20:{18,22}]
    pes_2_2_io_in_hor_r_sign_3 <= pes_2_1_io_out_hor_sign_3; // @[Reg.scala 19:16 20:{18,22}]
    pes_2_2_io_in_hor_r_man_0 <= pes_2_1_io_out_hor_man_0; // @[Reg.scala 19:16 20:{18,22}]
    pes_2_2_io_in_hor_r_man_1 <= pes_2_1_io_out_hor_man_1; // @[Reg.scala 19:16 20:{18,22}]
    pes_2_2_io_in_hor_r_man_2 <= pes_2_1_io_out_hor_man_2; // @[Reg.scala 19:16 20:{18,22}]
    pes_2_2_io_in_hor_r_man_3 <= pes_2_1_io_out_hor_man_3; // @[Reg.scala 19:16 20:{18,22}]
    pes_2_2_io_in_hor_r_exp <= pes_2_1_io_out_hor_exp; // @[Reg.scala 19:16 20:{18,22}]
    pes_2_3_io_in_hor_r_sign_0 <= pes_2_2_io_out_hor_sign_0; // @[Reg.scala 19:16 20:{18,22}]
    pes_2_3_io_in_hor_r_sign_1 <= pes_2_2_io_out_hor_sign_1; // @[Reg.scala 19:16 20:{18,22}]
    pes_2_3_io_in_hor_r_sign_2 <= pes_2_2_io_out_hor_sign_2; // @[Reg.scala 19:16 20:{18,22}]
    pes_2_3_io_in_hor_r_sign_3 <= pes_2_2_io_out_hor_sign_3; // @[Reg.scala 19:16 20:{18,22}]
    pes_2_3_io_in_hor_r_man_0 <= pes_2_2_io_out_hor_man_0; // @[Reg.scala 19:16 20:{18,22}]
    pes_2_3_io_in_hor_r_man_1 <= pes_2_2_io_out_hor_man_1; // @[Reg.scala 19:16 20:{18,22}]
    pes_2_3_io_in_hor_r_man_2 <= pes_2_2_io_out_hor_man_2; // @[Reg.scala 19:16 20:{18,22}]
    pes_2_3_io_in_hor_r_man_3 <= pes_2_2_io_out_hor_man_3; // @[Reg.scala 19:16 20:{18,22}]
    pes_2_3_io_in_hor_r_exp <= pes_2_2_io_out_hor_exp; // @[Reg.scala 19:16 20:{18,22}]
    pes_3_1_io_in_hor_r_sign_0 <= pes_3_0_io_out_hor_sign_0; // @[Reg.scala 19:16 20:{18,22}]
    pes_3_1_io_in_hor_r_sign_1 <= pes_3_0_io_out_hor_sign_1; // @[Reg.scala 19:16 20:{18,22}]
    pes_3_1_io_in_hor_r_sign_2 <= pes_3_0_io_out_hor_sign_2; // @[Reg.scala 19:16 20:{18,22}]
    pes_3_1_io_in_hor_r_sign_3 <= pes_3_0_io_out_hor_sign_3; // @[Reg.scala 19:16 20:{18,22}]
    pes_3_1_io_in_hor_r_man_0 <= pes_3_0_io_out_hor_man_0; // @[Reg.scala 19:16 20:{18,22}]
    pes_3_1_io_in_hor_r_man_1 <= pes_3_0_io_out_hor_man_1; // @[Reg.scala 19:16 20:{18,22}]
    pes_3_1_io_in_hor_r_man_2 <= pes_3_0_io_out_hor_man_2; // @[Reg.scala 19:16 20:{18,22}]
    pes_3_1_io_in_hor_r_man_3 <= pes_3_0_io_out_hor_man_3; // @[Reg.scala 19:16 20:{18,22}]
    pes_3_1_io_in_hor_r_exp <= pes_3_0_io_out_hor_exp; // @[Reg.scala 19:16 20:{18,22}]
    pes_3_2_io_in_hor_r_sign_0 <= pes_3_1_io_out_hor_sign_0; // @[Reg.scala 19:16 20:{18,22}]
    pes_3_2_io_in_hor_r_sign_1 <= pes_3_1_io_out_hor_sign_1; // @[Reg.scala 19:16 20:{18,22}]
    pes_3_2_io_in_hor_r_sign_2 <= pes_3_1_io_out_hor_sign_2; // @[Reg.scala 19:16 20:{18,22}]
    pes_3_2_io_in_hor_r_sign_3 <= pes_3_1_io_out_hor_sign_3; // @[Reg.scala 19:16 20:{18,22}]
    pes_3_2_io_in_hor_r_man_0 <= pes_3_1_io_out_hor_man_0; // @[Reg.scala 19:16 20:{18,22}]
    pes_3_2_io_in_hor_r_man_1 <= pes_3_1_io_out_hor_man_1; // @[Reg.scala 19:16 20:{18,22}]
    pes_3_2_io_in_hor_r_man_2 <= pes_3_1_io_out_hor_man_2; // @[Reg.scala 19:16 20:{18,22}]
    pes_3_2_io_in_hor_r_man_3 <= pes_3_1_io_out_hor_man_3; // @[Reg.scala 19:16 20:{18,22}]
    pes_3_2_io_in_hor_r_exp <= pes_3_1_io_out_hor_exp; // @[Reg.scala 19:16 20:{18,22}]
    pes_3_3_io_in_hor_r_sign_0 <= pes_3_2_io_out_hor_sign_0; // @[Reg.scala 19:16 20:{18,22}]
    pes_3_3_io_in_hor_r_sign_1 <= pes_3_2_io_out_hor_sign_1; // @[Reg.scala 19:16 20:{18,22}]
    pes_3_3_io_in_hor_r_sign_2 <= pes_3_2_io_out_hor_sign_2; // @[Reg.scala 19:16 20:{18,22}]
    pes_3_3_io_in_hor_r_sign_3 <= pes_3_2_io_out_hor_sign_3; // @[Reg.scala 19:16 20:{18,22}]
    pes_3_3_io_in_hor_r_man_0 <= pes_3_2_io_out_hor_man_0; // @[Reg.scala 19:16 20:{18,22}]
    pes_3_3_io_in_hor_r_man_1 <= pes_3_2_io_out_hor_man_1; // @[Reg.scala 19:16 20:{18,22}]
    pes_3_3_io_in_hor_r_man_2 <= pes_3_2_io_out_hor_man_2; // @[Reg.scala 19:16 20:{18,22}]
    pes_3_3_io_in_hor_r_man_3 <= pes_3_2_io_out_hor_man_3; // @[Reg.scala 19:16 20:{18,22}]
    pes_3_3_io_in_hor_r_exp <= pes_3_2_io_out_hor_exp; // @[Reg.scala 19:16 20:{18,22}]
    pes_1_0_io_in_ver_r_sign_0 <= pes_0_0_io_out_ver_sign_0; // @[Reg.scala 19:16 20:{18,22}]
    pes_1_0_io_in_ver_r_sign_1 <= pes_0_0_io_out_ver_sign_1; // @[Reg.scala 19:16 20:{18,22}]
    pes_1_0_io_in_ver_r_sign_2 <= pes_0_0_io_out_ver_sign_2; // @[Reg.scala 19:16 20:{18,22}]
    pes_1_0_io_in_ver_r_sign_3 <= pes_0_0_io_out_ver_sign_3; // @[Reg.scala 19:16 20:{18,22}]
    pes_1_0_io_in_ver_r_man_0 <= pes_0_0_io_out_ver_man_0; // @[Reg.scala 19:16 20:{18,22}]
    pes_1_0_io_in_ver_r_man_1 <= pes_0_0_io_out_ver_man_1; // @[Reg.scala 19:16 20:{18,22}]
    pes_1_0_io_in_ver_r_man_2 <= pes_0_0_io_out_ver_man_2; // @[Reg.scala 19:16 20:{18,22}]
    pes_1_0_io_in_ver_r_man_3 <= pes_0_0_io_out_ver_man_3; // @[Reg.scala 19:16 20:{18,22}]
    pes_1_0_io_in_ver_r_exp <= pes_0_0_io_out_ver_exp; // @[Reg.scala 19:16 20:{18,22}]
    pes_1_1_io_in_ver_r_sign_0 <= pes_0_1_io_out_ver_sign_0; // @[Reg.scala 19:16 20:{18,22}]
    pes_1_1_io_in_ver_r_sign_1 <= pes_0_1_io_out_ver_sign_1; // @[Reg.scala 19:16 20:{18,22}]
    pes_1_1_io_in_ver_r_sign_2 <= pes_0_1_io_out_ver_sign_2; // @[Reg.scala 19:16 20:{18,22}]
    pes_1_1_io_in_ver_r_sign_3 <= pes_0_1_io_out_ver_sign_3; // @[Reg.scala 19:16 20:{18,22}]
    pes_1_1_io_in_ver_r_man_0 <= pes_0_1_io_out_ver_man_0; // @[Reg.scala 19:16 20:{18,22}]
    pes_1_1_io_in_ver_r_man_1 <= pes_0_1_io_out_ver_man_1; // @[Reg.scala 19:16 20:{18,22}]
    pes_1_1_io_in_ver_r_man_2 <= pes_0_1_io_out_ver_man_2; // @[Reg.scala 19:16 20:{18,22}]
    pes_1_1_io_in_ver_r_man_3 <= pes_0_1_io_out_ver_man_3; // @[Reg.scala 19:16 20:{18,22}]
    pes_1_1_io_in_ver_r_exp <= pes_0_1_io_out_ver_exp; // @[Reg.scala 19:16 20:{18,22}]
    pes_1_2_io_in_ver_r_sign_0 <= pes_0_2_io_out_ver_sign_0; // @[Reg.scala 19:16 20:{18,22}]
    pes_1_2_io_in_ver_r_sign_1 <= pes_0_2_io_out_ver_sign_1; // @[Reg.scala 19:16 20:{18,22}]
    pes_1_2_io_in_ver_r_sign_2 <= pes_0_2_io_out_ver_sign_2; // @[Reg.scala 19:16 20:{18,22}]
    pes_1_2_io_in_ver_r_sign_3 <= pes_0_2_io_out_ver_sign_3; // @[Reg.scala 19:16 20:{18,22}]
    pes_1_2_io_in_ver_r_man_0 <= pes_0_2_io_out_ver_man_0; // @[Reg.scala 19:16 20:{18,22}]
    pes_1_2_io_in_ver_r_man_1 <= pes_0_2_io_out_ver_man_1; // @[Reg.scala 19:16 20:{18,22}]
    pes_1_2_io_in_ver_r_man_2 <= pes_0_2_io_out_ver_man_2; // @[Reg.scala 19:16 20:{18,22}]
    pes_1_2_io_in_ver_r_man_3 <= pes_0_2_io_out_ver_man_3; // @[Reg.scala 19:16 20:{18,22}]
    pes_1_2_io_in_ver_r_exp <= pes_0_2_io_out_ver_exp; // @[Reg.scala 19:16 20:{18,22}]
    pes_1_3_io_in_ver_r_sign_0 <= pes_0_3_io_out_ver_sign_0; // @[Reg.scala 19:16 20:{18,22}]
    pes_1_3_io_in_ver_r_sign_1 <= pes_0_3_io_out_ver_sign_1; // @[Reg.scala 19:16 20:{18,22}]
    pes_1_3_io_in_ver_r_sign_2 <= pes_0_3_io_out_ver_sign_2; // @[Reg.scala 19:16 20:{18,22}]
    pes_1_3_io_in_ver_r_sign_3 <= pes_0_3_io_out_ver_sign_3; // @[Reg.scala 19:16 20:{18,22}]
    pes_1_3_io_in_ver_r_man_0 <= pes_0_3_io_out_ver_man_0; // @[Reg.scala 19:16 20:{18,22}]
    pes_1_3_io_in_ver_r_man_1 <= pes_0_3_io_out_ver_man_1; // @[Reg.scala 19:16 20:{18,22}]
    pes_1_3_io_in_ver_r_man_2 <= pes_0_3_io_out_ver_man_2; // @[Reg.scala 19:16 20:{18,22}]
    pes_1_3_io_in_ver_r_man_3 <= pes_0_3_io_out_ver_man_3; // @[Reg.scala 19:16 20:{18,22}]
    pes_1_3_io_in_ver_r_exp <= pes_0_3_io_out_ver_exp; // @[Reg.scala 19:16 20:{18,22}]
    pes_2_0_io_in_ver_r_sign_0 <= pes_1_0_io_out_ver_sign_0; // @[Reg.scala 19:16 20:{18,22}]
    pes_2_0_io_in_ver_r_sign_1 <= pes_1_0_io_out_ver_sign_1; // @[Reg.scala 19:16 20:{18,22}]
    pes_2_0_io_in_ver_r_sign_2 <= pes_1_0_io_out_ver_sign_2; // @[Reg.scala 19:16 20:{18,22}]
    pes_2_0_io_in_ver_r_sign_3 <= pes_1_0_io_out_ver_sign_3; // @[Reg.scala 19:16 20:{18,22}]
    pes_2_0_io_in_ver_r_man_0 <= pes_1_0_io_out_ver_man_0; // @[Reg.scala 19:16 20:{18,22}]
    pes_2_0_io_in_ver_r_man_1 <= pes_1_0_io_out_ver_man_1; // @[Reg.scala 19:16 20:{18,22}]
    pes_2_0_io_in_ver_r_man_2 <= pes_1_0_io_out_ver_man_2; // @[Reg.scala 19:16 20:{18,22}]
    pes_2_0_io_in_ver_r_man_3 <= pes_1_0_io_out_ver_man_3; // @[Reg.scala 19:16 20:{18,22}]
    pes_2_0_io_in_ver_r_exp <= pes_1_0_io_out_ver_exp; // @[Reg.scala 19:16 20:{18,22}]
    pes_2_1_io_in_ver_r_sign_0 <= pes_1_1_io_out_ver_sign_0; // @[Reg.scala 19:16 20:{18,22}]
    pes_2_1_io_in_ver_r_sign_1 <= pes_1_1_io_out_ver_sign_1; // @[Reg.scala 19:16 20:{18,22}]
    pes_2_1_io_in_ver_r_sign_2 <= pes_1_1_io_out_ver_sign_2; // @[Reg.scala 19:16 20:{18,22}]
    pes_2_1_io_in_ver_r_sign_3 <= pes_1_1_io_out_ver_sign_3; // @[Reg.scala 19:16 20:{18,22}]
    pes_2_1_io_in_ver_r_man_0 <= pes_1_1_io_out_ver_man_0; // @[Reg.scala 19:16 20:{18,22}]
    pes_2_1_io_in_ver_r_man_1 <= pes_1_1_io_out_ver_man_1; // @[Reg.scala 19:16 20:{18,22}]
    pes_2_1_io_in_ver_r_man_2 <= pes_1_1_io_out_ver_man_2; // @[Reg.scala 19:16 20:{18,22}]
    pes_2_1_io_in_ver_r_man_3 <= pes_1_1_io_out_ver_man_3; // @[Reg.scala 19:16 20:{18,22}]
    pes_2_1_io_in_ver_r_exp <= pes_1_1_io_out_ver_exp; // @[Reg.scala 19:16 20:{18,22}]
    pes_2_2_io_in_ver_r_sign_0 <= pes_1_2_io_out_ver_sign_0; // @[Reg.scala 19:16 20:{18,22}]
    pes_2_2_io_in_ver_r_sign_1 <= pes_1_2_io_out_ver_sign_1; // @[Reg.scala 19:16 20:{18,22}]
    pes_2_2_io_in_ver_r_sign_2 <= pes_1_2_io_out_ver_sign_2; // @[Reg.scala 19:16 20:{18,22}]
    pes_2_2_io_in_ver_r_sign_3 <= pes_1_2_io_out_ver_sign_3; // @[Reg.scala 19:16 20:{18,22}]
    pes_2_2_io_in_ver_r_man_0 <= pes_1_2_io_out_ver_man_0; // @[Reg.scala 19:16 20:{18,22}]
    pes_2_2_io_in_ver_r_man_1 <= pes_1_2_io_out_ver_man_1; // @[Reg.scala 19:16 20:{18,22}]
    pes_2_2_io_in_ver_r_man_2 <= pes_1_2_io_out_ver_man_2; // @[Reg.scala 19:16 20:{18,22}]
    pes_2_2_io_in_ver_r_man_3 <= pes_1_2_io_out_ver_man_3; // @[Reg.scala 19:16 20:{18,22}]
    pes_2_2_io_in_ver_r_exp <= pes_1_2_io_out_ver_exp; // @[Reg.scala 19:16 20:{18,22}]
    pes_2_3_io_in_ver_r_sign_0 <= pes_1_3_io_out_ver_sign_0; // @[Reg.scala 19:16 20:{18,22}]
    pes_2_3_io_in_ver_r_sign_1 <= pes_1_3_io_out_ver_sign_1; // @[Reg.scala 19:16 20:{18,22}]
    pes_2_3_io_in_ver_r_sign_2 <= pes_1_3_io_out_ver_sign_2; // @[Reg.scala 19:16 20:{18,22}]
    pes_2_3_io_in_ver_r_sign_3 <= pes_1_3_io_out_ver_sign_3; // @[Reg.scala 19:16 20:{18,22}]
    pes_2_3_io_in_ver_r_man_0 <= pes_1_3_io_out_ver_man_0; // @[Reg.scala 19:16 20:{18,22}]
    pes_2_3_io_in_ver_r_man_1 <= pes_1_3_io_out_ver_man_1; // @[Reg.scala 19:16 20:{18,22}]
    pes_2_3_io_in_ver_r_man_2 <= pes_1_3_io_out_ver_man_2; // @[Reg.scala 19:16 20:{18,22}]
    pes_2_3_io_in_ver_r_man_3 <= pes_1_3_io_out_ver_man_3; // @[Reg.scala 19:16 20:{18,22}]
    pes_2_3_io_in_ver_r_exp <= pes_1_3_io_out_ver_exp; // @[Reg.scala 19:16 20:{18,22}]
    pes_3_0_io_in_ver_r_sign_0 <= pes_2_0_io_out_ver_sign_0; // @[Reg.scala 19:16 20:{18,22}]
    pes_3_0_io_in_ver_r_sign_1 <= pes_2_0_io_out_ver_sign_1; // @[Reg.scala 19:16 20:{18,22}]
    pes_3_0_io_in_ver_r_sign_2 <= pes_2_0_io_out_ver_sign_2; // @[Reg.scala 19:16 20:{18,22}]
    pes_3_0_io_in_ver_r_sign_3 <= pes_2_0_io_out_ver_sign_3; // @[Reg.scala 19:16 20:{18,22}]
    pes_3_0_io_in_ver_r_man_0 <= pes_2_0_io_out_ver_man_0; // @[Reg.scala 19:16 20:{18,22}]
    pes_3_0_io_in_ver_r_man_1 <= pes_2_0_io_out_ver_man_1; // @[Reg.scala 19:16 20:{18,22}]
    pes_3_0_io_in_ver_r_man_2 <= pes_2_0_io_out_ver_man_2; // @[Reg.scala 19:16 20:{18,22}]
    pes_3_0_io_in_ver_r_man_3 <= pes_2_0_io_out_ver_man_3; // @[Reg.scala 19:16 20:{18,22}]
    pes_3_0_io_in_ver_r_exp <= pes_2_0_io_out_ver_exp; // @[Reg.scala 19:16 20:{18,22}]
    pes_3_1_io_in_ver_r_sign_0 <= pes_2_1_io_out_ver_sign_0; // @[Reg.scala 19:16 20:{18,22}]
    pes_3_1_io_in_ver_r_sign_1 <= pes_2_1_io_out_ver_sign_1; // @[Reg.scala 19:16 20:{18,22}]
    pes_3_1_io_in_ver_r_sign_2 <= pes_2_1_io_out_ver_sign_2; // @[Reg.scala 19:16 20:{18,22}]
    pes_3_1_io_in_ver_r_sign_3 <= pes_2_1_io_out_ver_sign_3; // @[Reg.scala 19:16 20:{18,22}]
    pes_3_1_io_in_ver_r_man_0 <= pes_2_1_io_out_ver_man_0; // @[Reg.scala 19:16 20:{18,22}]
    pes_3_1_io_in_ver_r_man_1 <= pes_2_1_io_out_ver_man_1; // @[Reg.scala 19:16 20:{18,22}]
    pes_3_1_io_in_ver_r_man_2 <= pes_2_1_io_out_ver_man_2; // @[Reg.scala 19:16 20:{18,22}]
    pes_3_1_io_in_ver_r_man_3 <= pes_2_1_io_out_ver_man_3; // @[Reg.scala 19:16 20:{18,22}]
    pes_3_1_io_in_ver_r_exp <= pes_2_1_io_out_ver_exp; // @[Reg.scala 19:16 20:{18,22}]
    pes_3_2_io_in_ver_r_sign_0 <= pes_2_2_io_out_ver_sign_0; // @[Reg.scala 19:16 20:{18,22}]
    pes_3_2_io_in_ver_r_sign_1 <= pes_2_2_io_out_ver_sign_1; // @[Reg.scala 19:16 20:{18,22}]
    pes_3_2_io_in_ver_r_sign_2 <= pes_2_2_io_out_ver_sign_2; // @[Reg.scala 19:16 20:{18,22}]
    pes_3_2_io_in_ver_r_sign_3 <= pes_2_2_io_out_ver_sign_3; // @[Reg.scala 19:16 20:{18,22}]
    pes_3_2_io_in_ver_r_man_0 <= pes_2_2_io_out_ver_man_0; // @[Reg.scala 19:16 20:{18,22}]
    pes_3_2_io_in_ver_r_man_1 <= pes_2_2_io_out_ver_man_1; // @[Reg.scala 19:16 20:{18,22}]
    pes_3_2_io_in_ver_r_man_2 <= pes_2_2_io_out_ver_man_2; // @[Reg.scala 19:16 20:{18,22}]
    pes_3_2_io_in_ver_r_man_3 <= pes_2_2_io_out_ver_man_3; // @[Reg.scala 19:16 20:{18,22}]
    pes_3_2_io_in_ver_r_exp <= pes_2_2_io_out_ver_exp; // @[Reg.scala 19:16 20:{18,22}]
    pes_3_3_io_in_ver_r_sign_0 <= pes_2_3_io_out_ver_sign_0; // @[Reg.scala 19:16 20:{18,22}]
    pes_3_3_io_in_ver_r_sign_1 <= pes_2_3_io_out_ver_sign_1; // @[Reg.scala 19:16 20:{18,22}]
    pes_3_3_io_in_ver_r_sign_2 <= pes_2_3_io_out_ver_sign_2; // @[Reg.scala 19:16 20:{18,22}]
    pes_3_3_io_in_ver_r_sign_3 <= pes_2_3_io_out_ver_sign_3; // @[Reg.scala 19:16 20:{18,22}]
    pes_3_3_io_in_ver_r_man_0 <= pes_2_3_io_out_ver_man_0; // @[Reg.scala 19:16 20:{18,22}]
    pes_3_3_io_in_ver_r_man_1 <= pes_2_3_io_out_ver_man_1; // @[Reg.scala 19:16 20:{18,22}]
    pes_3_3_io_in_ver_r_man_2 <= pes_2_3_io_out_ver_man_2; // @[Reg.scala 19:16 20:{18,22}]
    pes_3_3_io_in_ver_r_man_3 <= pes_2_3_io_out_ver_man_3; // @[Reg.scala 19:16 20:{18,22}]
    pes_3_3_io_in_ver_r_exp <= pes_2_3_io_out_ver_exp; // @[Reg.scala 19:16 20:{18,22}]
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
  myinputQ_hor_1_io_deq_ready_r = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  myinputQ_ver_1_io_deq_ready_r = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  myinputQ_hor_2_io_deq_ready_r = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  myinputQ_hor_2_io_deq_ready_r_1 = _RAND_3[0:0];
  _RAND_4 = {1{`RANDOM}};
  myinputQ_ver_2_io_deq_ready_r = _RAND_4[0:0];
  _RAND_5 = {1{`RANDOM}};
  myinputQ_ver_2_io_deq_ready_r_1 = _RAND_5[0:0];
  _RAND_6 = {1{`RANDOM}};
  myinputQ_hor_3_io_deq_ready_r = _RAND_6[0:0];
  _RAND_7 = {1{`RANDOM}};
  myinputQ_hor_3_io_deq_ready_r_1 = _RAND_7[0:0];
  _RAND_8 = {1{`RANDOM}};
  myinputQ_hor_3_io_deq_ready_r_2 = _RAND_8[0:0];
  _RAND_9 = {1{`RANDOM}};
  myinputQ_ver_3_io_deq_ready_r = _RAND_9[0:0];
  _RAND_10 = {1{`RANDOM}};
  myinputQ_ver_3_io_deq_ready_r_1 = _RAND_10[0:0];
  _RAND_11 = {1{`RANDOM}};
  myinputQ_ver_3_io_deq_ready_r_2 = _RAND_11[0:0];
  _RAND_12 = {1{`RANDOM}};
  pes_0_1_io_in_hor_r_sign_0 = _RAND_12[0:0];
  _RAND_13 = {1{`RANDOM}};
  pes_0_1_io_in_hor_r_sign_1 = _RAND_13[0:0];
  _RAND_14 = {1{`RANDOM}};
  pes_0_1_io_in_hor_r_sign_2 = _RAND_14[0:0];
  _RAND_15 = {1{`RANDOM}};
  pes_0_1_io_in_hor_r_sign_3 = _RAND_15[0:0];
  _RAND_16 = {1{`RANDOM}};
  pes_0_1_io_in_hor_r_man_0 = _RAND_16[3:0];
  _RAND_17 = {1{`RANDOM}};
  pes_0_1_io_in_hor_r_man_1 = _RAND_17[3:0];
  _RAND_18 = {1{`RANDOM}};
  pes_0_1_io_in_hor_r_man_2 = _RAND_18[3:0];
  _RAND_19 = {1{`RANDOM}};
  pes_0_1_io_in_hor_r_man_3 = _RAND_19[3:0];
  _RAND_20 = {1{`RANDOM}};
  pes_0_1_io_in_hor_r_exp = _RAND_20[7:0];
  _RAND_21 = {1{`RANDOM}};
  pes_0_2_io_in_hor_r_sign_0 = _RAND_21[0:0];
  _RAND_22 = {1{`RANDOM}};
  pes_0_2_io_in_hor_r_sign_1 = _RAND_22[0:0];
  _RAND_23 = {1{`RANDOM}};
  pes_0_2_io_in_hor_r_sign_2 = _RAND_23[0:0];
  _RAND_24 = {1{`RANDOM}};
  pes_0_2_io_in_hor_r_sign_3 = _RAND_24[0:0];
  _RAND_25 = {1{`RANDOM}};
  pes_0_2_io_in_hor_r_man_0 = _RAND_25[3:0];
  _RAND_26 = {1{`RANDOM}};
  pes_0_2_io_in_hor_r_man_1 = _RAND_26[3:0];
  _RAND_27 = {1{`RANDOM}};
  pes_0_2_io_in_hor_r_man_2 = _RAND_27[3:0];
  _RAND_28 = {1{`RANDOM}};
  pes_0_2_io_in_hor_r_man_3 = _RAND_28[3:0];
  _RAND_29 = {1{`RANDOM}};
  pes_0_2_io_in_hor_r_exp = _RAND_29[7:0];
  _RAND_30 = {1{`RANDOM}};
  pes_0_3_io_in_hor_r_sign_0 = _RAND_30[0:0];
  _RAND_31 = {1{`RANDOM}};
  pes_0_3_io_in_hor_r_sign_1 = _RAND_31[0:0];
  _RAND_32 = {1{`RANDOM}};
  pes_0_3_io_in_hor_r_sign_2 = _RAND_32[0:0];
  _RAND_33 = {1{`RANDOM}};
  pes_0_3_io_in_hor_r_sign_3 = _RAND_33[0:0];
  _RAND_34 = {1{`RANDOM}};
  pes_0_3_io_in_hor_r_man_0 = _RAND_34[3:0];
  _RAND_35 = {1{`RANDOM}};
  pes_0_3_io_in_hor_r_man_1 = _RAND_35[3:0];
  _RAND_36 = {1{`RANDOM}};
  pes_0_3_io_in_hor_r_man_2 = _RAND_36[3:0];
  _RAND_37 = {1{`RANDOM}};
  pes_0_3_io_in_hor_r_man_3 = _RAND_37[3:0];
  _RAND_38 = {1{`RANDOM}};
  pes_0_3_io_in_hor_r_exp = _RAND_38[7:0];
  _RAND_39 = {1{`RANDOM}};
  pes_1_1_io_in_hor_r_sign_0 = _RAND_39[0:0];
  _RAND_40 = {1{`RANDOM}};
  pes_1_1_io_in_hor_r_sign_1 = _RAND_40[0:0];
  _RAND_41 = {1{`RANDOM}};
  pes_1_1_io_in_hor_r_sign_2 = _RAND_41[0:0];
  _RAND_42 = {1{`RANDOM}};
  pes_1_1_io_in_hor_r_sign_3 = _RAND_42[0:0];
  _RAND_43 = {1{`RANDOM}};
  pes_1_1_io_in_hor_r_man_0 = _RAND_43[3:0];
  _RAND_44 = {1{`RANDOM}};
  pes_1_1_io_in_hor_r_man_1 = _RAND_44[3:0];
  _RAND_45 = {1{`RANDOM}};
  pes_1_1_io_in_hor_r_man_2 = _RAND_45[3:0];
  _RAND_46 = {1{`RANDOM}};
  pes_1_1_io_in_hor_r_man_3 = _RAND_46[3:0];
  _RAND_47 = {1{`RANDOM}};
  pes_1_1_io_in_hor_r_exp = _RAND_47[7:0];
  _RAND_48 = {1{`RANDOM}};
  pes_1_2_io_in_hor_r_sign_0 = _RAND_48[0:0];
  _RAND_49 = {1{`RANDOM}};
  pes_1_2_io_in_hor_r_sign_1 = _RAND_49[0:0];
  _RAND_50 = {1{`RANDOM}};
  pes_1_2_io_in_hor_r_sign_2 = _RAND_50[0:0];
  _RAND_51 = {1{`RANDOM}};
  pes_1_2_io_in_hor_r_sign_3 = _RAND_51[0:0];
  _RAND_52 = {1{`RANDOM}};
  pes_1_2_io_in_hor_r_man_0 = _RAND_52[3:0];
  _RAND_53 = {1{`RANDOM}};
  pes_1_2_io_in_hor_r_man_1 = _RAND_53[3:0];
  _RAND_54 = {1{`RANDOM}};
  pes_1_2_io_in_hor_r_man_2 = _RAND_54[3:0];
  _RAND_55 = {1{`RANDOM}};
  pes_1_2_io_in_hor_r_man_3 = _RAND_55[3:0];
  _RAND_56 = {1{`RANDOM}};
  pes_1_2_io_in_hor_r_exp = _RAND_56[7:0];
  _RAND_57 = {1{`RANDOM}};
  pes_1_3_io_in_hor_r_sign_0 = _RAND_57[0:0];
  _RAND_58 = {1{`RANDOM}};
  pes_1_3_io_in_hor_r_sign_1 = _RAND_58[0:0];
  _RAND_59 = {1{`RANDOM}};
  pes_1_3_io_in_hor_r_sign_2 = _RAND_59[0:0];
  _RAND_60 = {1{`RANDOM}};
  pes_1_3_io_in_hor_r_sign_3 = _RAND_60[0:0];
  _RAND_61 = {1{`RANDOM}};
  pes_1_3_io_in_hor_r_man_0 = _RAND_61[3:0];
  _RAND_62 = {1{`RANDOM}};
  pes_1_3_io_in_hor_r_man_1 = _RAND_62[3:0];
  _RAND_63 = {1{`RANDOM}};
  pes_1_3_io_in_hor_r_man_2 = _RAND_63[3:0];
  _RAND_64 = {1{`RANDOM}};
  pes_1_3_io_in_hor_r_man_3 = _RAND_64[3:0];
  _RAND_65 = {1{`RANDOM}};
  pes_1_3_io_in_hor_r_exp = _RAND_65[7:0];
  _RAND_66 = {1{`RANDOM}};
  pes_2_1_io_in_hor_r_sign_0 = _RAND_66[0:0];
  _RAND_67 = {1{`RANDOM}};
  pes_2_1_io_in_hor_r_sign_1 = _RAND_67[0:0];
  _RAND_68 = {1{`RANDOM}};
  pes_2_1_io_in_hor_r_sign_2 = _RAND_68[0:0];
  _RAND_69 = {1{`RANDOM}};
  pes_2_1_io_in_hor_r_sign_3 = _RAND_69[0:0];
  _RAND_70 = {1{`RANDOM}};
  pes_2_1_io_in_hor_r_man_0 = _RAND_70[3:0];
  _RAND_71 = {1{`RANDOM}};
  pes_2_1_io_in_hor_r_man_1 = _RAND_71[3:0];
  _RAND_72 = {1{`RANDOM}};
  pes_2_1_io_in_hor_r_man_2 = _RAND_72[3:0];
  _RAND_73 = {1{`RANDOM}};
  pes_2_1_io_in_hor_r_man_3 = _RAND_73[3:0];
  _RAND_74 = {1{`RANDOM}};
  pes_2_1_io_in_hor_r_exp = _RAND_74[7:0];
  _RAND_75 = {1{`RANDOM}};
  pes_2_2_io_in_hor_r_sign_0 = _RAND_75[0:0];
  _RAND_76 = {1{`RANDOM}};
  pes_2_2_io_in_hor_r_sign_1 = _RAND_76[0:0];
  _RAND_77 = {1{`RANDOM}};
  pes_2_2_io_in_hor_r_sign_2 = _RAND_77[0:0];
  _RAND_78 = {1{`RANDOM}};
  pes_2_2_io_in_hor_r_sign_3 = _RAND_78[0:0];
  _RAND_79 = {1{`RANDOM}};
  pes_2_2_io_in_hor_r_man_0 = _RAND_79[3:0];
  _RAND_80 = {1{`RANDOM}};
  pes_2_2_io_in_hor_r_man_1 = _RAND_80[3:0];
  _RAND_81 = {1{`RANDOM}};
  pes_2_2_io_in_hor_r_man_2 = _RAND_81[3:0];
  _RAND_82 = {1{`RANDOM}};
  pes_2_2_io_in_hor_r_man_3 = _RAND_82[3:0];
  _RAND_83 = {1{`RANDOM}};
  pes_2_2_io_in_hor_r_exp = _RAND_83[7:0];
  _RAND_84 = {1{`RANDOM}};
  pes_2_3_io_in_hor_r_sign_0 = _RAND_84[0:0];
  _RAND_85 = {1{`RANDOM}};
  pes_2_3_io_in_hor_r_sign_1 = _RAND_85[0:0];
  _RAND_86 = {1{`RANDOM}};
  pes_2_3_io_in_hor_r_sign_2 = _RAND_86[0:0];
  _RAND_87 = {1{`RANDOM}};
  pes_2_3_io_in_hor_r_sign_3 = _RAND_87[0:0];
  _RAND_88 = {1{`RANDOM}};
  pes_2_3_io_in_hor_r_man_0 = _RAND_88[3:0];
  _RAND_89 = {1{`RANDOM}};
  pes_2_3_io_in_hor_r_man_1 = _RAND_89[3:0];
  _RAND_90 = {1{`RANDOM}};
  pes_2_3_io_in_hor_r_man_2 = _RAND_90[3:0];
  _RAND_91 = {1{`RANDOM}};
  pes_2_3_io_in_hor_r_man_3 = _RAND_91[3:0];
  _RAND_92 = {1{`RANDOM}};
  pes_2_3_io_in_hor_r_exp = _RAND_92[7:0];
  _RAND_93 = {1{`RANDOM}};
  pes_3_1_io_in_hor_r_sign_0 = _RAND_93[0:0];
  _RAND_94 = {1{`RANDOM}};
  pes_3_1_io_in_hor_r_sign_1 = _RAND_94[0:0];
  _RAND_95 = {1{`RANDOM}};
  pes_3_1_io_in_hor_r_sign_2 = _RAND_95[0:0];
  _RAND_96 = {1{`RANDOM}};
  pes_3_1_io_in_hor_r_sign_3 = _RAND_96[0:0];
  _RAND_97 = {1{`RANDOM}};
  pes_3_1_io_in_hor_r_man_0 = _RAND_97[3:0];
  _RAND_98 = {1{`RANDOM}};
  pes_3_1_io_in_hor_r_man_1 = _RAND_98[3:0];
  _RAND_99 = {1{`RANDOM}};
  pes_3_1_io_in_hor_r_man_2 = _RAND_99[3:0];
  _RAND_100 = {1{`RANDOM}};
  pes_3_1_io_in_hor_r_man_3 = _RAND_100[3:0];
  _RAND_101 = {1{`RANDOM}};
  pes_3_1_io_in_hor_r_exp = _RAND_101[7:0];
  _RAND_102 = {1{`RANDOM}};
  pes_3_2_io_in_hor_r_sign_0 = _RAND_102[0:0];
  _RAND_103 = {1{`RANDOM}};
  pes_3_2_io_in_hor_r_sign_1 = _RAND_103[0:0];
  _RAND_104 = {1{`RANDOM}};
  pes_3_2_io_in_hor_r_sign_2 = _RAND_104[0:0];
  _RAND_105 = {1{`RANDOM}};
  pes_3_2_io_in_hor_r_sign_3 = _RAND_105[0:0];
  _RAND_106 = {1{`RANDOM}};
  pes_3_2_io_in_hor_r_man_0 = _RAND_106[3:0];
  _RAND_107 = {1{`RANDOM}};
  pes_3_2_io_in_hor_r_man_1 = _RAND_107[3:0];
  _RAND_108 = {1{`RANDOM}};
  pes_3_2_io_in_hor_r_man_2 = _RAND_108[3:0];
  _RAND_109 = {1{`RANDOM}};
  pes_3_2_io_in_hor_r_man_3 = _RAND_109[3:0];
  _RAND_110 = {1{`RANDOM}};
  pes_3_2_io_in_hor_r_exp = _RAND_110[7:0];
  _RAND_111 = {1{`RANDOM}};
  pes_3_3_io_in_hor_r_sign_0 = _RAND_111[0:0];
  _RAND_112 = {1{`RANDOM}};
  pes_3_3_io_in_hor_r_sign_1 = _RAND_112[0:0];
  _RAND_113 = {1{`RANDOM}};
  pes_3_3_io_in_hor_r_sign_2 = _RAND_113[0:0];
  _RAND_114 = {1{`RANDOM}};
  pes_3_3_io_in_hor_r_sign_3 = _RAND_114[0:0];
  _RAND_115 = {1{`RANDOM}};
  pes_3_3_io_in_hor_r_man_0 = _RAND_115[3:0];
  _RAND_116 = {1{`RANDOM}};
  pes_3_3_io_in_hor_r_man_1 = _RAND_116[3:0];
  _RAND_117 = {1{`RANDOM}};
  pes_3_3_io_in_hor_r_man_2 = _RAND_117[3:0];
  _RAND_118 = {1{`RANDOM}};
  pes_3_3_io_in_hor_r_man_3 = _RAND_118[3:0];
  _RAND_119 = {1{`RANDOM}};
  pes_3_3_io_in_hor_r_exp = _RAND_119[7:0];
  _RAND_120 = {1{`RANDOM}};
  pes_1_0_io_in_ver_r_sign_0 = _RAND_120[0:0];
  _RAND_121 = {1{`RANDOM}};
  pes_1_0_io_in_ver_r_sign_1 = _RAND_121[0:0];
  _RAND_122 = {1{`RANDOM}};
  pes_1_0_io_in_ver_r_sign_2 = _RAND_122[0:0];
  _RAND_123 = {1{`RANDOM}};
  pes_1_0_io_in_ver_r_sign_3 = _RAND_123[0:0];
  _RAND_124 = {1{`RANDOM}};
  pes_1_0_io_in_ver_r_man_0 = _RAND_124[3:0];
  _RAND_125 = {1{`RANDOM}};
  pes_1_0_io_in_ver_r_man_1 = _RAND_125[3:0];
  _RAND_126 = {1{`RANDOM}};
  pes_1_0_io_in_ver_r_man_2 = _RAND_126[3:0];
  _RAND_127 = {1{`RANDOM}};
  pes_1_0_io_in_ver_r_man_3 = _RAND_127[3:0];
  _RAND_128 = {1{`RANDOM}};
  pes_1_0_io_in_ver_r_exp = _RAND_128[7:0];
  _RAND_129 = {1{`RANDOM}};
  pes_1_1_io_in_ver_r_sign_0 = _RAND_129[0:0];
  _RAND_130 = {1{`RANDOM}};
  pes_1_1_io_in_ver_r_sign_1 = _RAND_130[0:0];
  _RAND_131 = {1{`RANDOM}};
  pes_1_1_io_in_ver_r_sign_2 = _RAND_131[0:0];
  _RAND_132 = {1{`RANDOM}};
  pes_1_1_io_in_ver_r_sign_3 = _RAND_132[0:0];
  _RAND_133 = {1{`RANDOM}};
  pes_1_1_io_in_ver_r_man_0 = _RAND_133[3:0];
  _RAND_134 = {1{`RANDOM}};
  pes_1_1_io_in_ver_r_man_1 = _RAND_134[3:0];
  _RAND_135 = {1{`RANDOM}};
  pes_1_1_io_in_ver_r_man_2 = _RAND_135[3:0];
  _RAND_136 = {1{`RANDOM}};
  pes_1_1_io_in_ver_r_man_3 = _RAND_136[3:0];
  _RAND_137 = {1{`RANDOM}};
  pes_1_1_io_in_ver_r_exp = _RAND_137[7:0];
  _RAND_138 = {1{`RANDOM}};
  pes_1_2_io_in_ver_r_sign_0 = _RAND_138[0:0];
  _RAND_139 = {1{`RANDOM}};
  pes_1_2_io_in_ver_r_sign_1 = _RAND_139[0:0];
  _RAND_140 = {1{`RANDOM}};
  pes_1_2_io_in_ver_r_sign_2 = _RAND_140[0:0];
  _RAND_141 = {1{`RANDOM}};
  pes_1_2_io_in_ver_r_sign_3 = _RAND_141[0:0];
  _RAND_142 = {1{`RANDOM}};
  pes_1_2_io_in_ver_r_man_0 = _RAND_142[3:0];
  _RAND_143 = {1{`RANDOM}};
  pes_1_2_io_in_ver_r_man_1 = _RAND_143[3:0];
  _RAND_144 = {1{`RANDOM}};
  pes_1_2_io_in_ver_r_man_2 = _RAND_144[3:0];
  _RAND_145 = {1{`RANDOM}};
  pes_1_2_io_in_ver_r_man_3 = _RAND_145[3:0];
  _RAND_146 = {1{`RANDOM}};
  pes_1_2_io_in_ver_r_exp = _RAND_146[7:0];
  _RAND_147 = {1{`RANDOM}};
  pes_1_3_io_in_ver_r_sign_0 = _RAND_147[0:0];
  _RAND_148 = {1{`RANDOM}};
  pes_1_3_io_in_ver_r_sign_1 = _RAND_148[0:0];
  _RAND_149 = {1{`RANDOM}};
  pes_1_3_io_in_ver_r_sign_2 = _RAND_149[0:0];
  _RAND_150 = {1{`RANDOM}};
  pes_1_3_io_in_ver_r_sign_3 = _RAND_150[0:0];
  _RAND_151 = {1{`RANDOM}};
  pes_1_3_io_in_ver_r_man_0 = _RAND_151[3:0];
  _RAND_152 = {1{`RANDOM}};
  pes_1_3_io_in_ver_r_man_1 = _RAND_152[3:0];
  _RAND_153 = {1{`RANDOM}};
  pes_1_3_io_in_ver_r_man_2 = _RAND_153[3:0];
  _RAND_154 = {1{`RANDOM}};
  pes_1_3_io_in_ver_r_man_3 = _RAND_154[3:0];
  _RAND_155 = {1{`RANDOM}};
  pes_1_3_io_in_ver_r_exp = _RAND_155[7:0];
  _RAND_156 = {1{`RANDOM}};
  pes_2_0_io_in_ver_r_sign_0 = _RAND_156[0:0];
  _RAND_157 = {1{`RANDOM}};
  pes_2_0_io_in_ver_r_sign_1 = _RAND_157[0:0];
  _RAND_158 = {1{`RANDOM}};
  pes_2_0_io_in_ver_r_sign_2 = _RAND_158[0:0];
  _RAND_159 = {1{`RANDOM}};
  pes_2_0_io_in_ver_r_sign_3 = _RAND_159[0:0];
  _RAND_160 = {1{`RANDOM}};
  pes_2_0_io_in_ver_r_man_0 = _RAND_160[3:0];
  _RAND_161 = {1{`RANDOM}};
  pes_2_0_io_in_ver_r_man_1 = _RAND_161[3:0];
  _RAND_162 = {1{`RANDOM}};
  pes_2_0_io_in_ver_r_man_2 = _RAND_162[3:0];
  _RAND_163 = {1{`RANDOM}};
  pes_2_0_io_in_ver_r_man_3 = _RAND_163[3:0];
  _RAND_164 = {1{`RANDOM}};
  pes_2_0_io_in_ver_r_exp = _RAND_164[7:0];
  _RAND_165 = {1{`RANDOM}};
  pes_2_1_io_in_ver_r_sign_0 = _RAND_165[0:0];
  _RAND_166 = {1{`RANDOM}};
  pes_2_1_io_in_ver_r_sign_1 = _RAND_166[0:0];
  _RAND_167 = {1{`RANDOM}};
  pes_2_1_io_in_ver_r_sign_2 = _RAND_167[0:0];
  _RAND_168 = {1{`RANDOM}};
  pes_2_1_io_in_ver_r_sign_3 = _RAND_168[0:0];
  _RAND_169 = {1{`RANDOM}};
  pes_2_1_io_in_ver_r_man_0 = _RAND_169[3:0];
  _RAND_170 = {1{`RANDOM}};
  pes_2_1_io_in_ver_r_man_1 = _RAND_170[3:0];
  _RAND_171 = {1{`RANDOM}};
  pes_2_1_io_in_ver_r_man_2 = _RAND_171[3:0];
  _RAND_172 = {1{`RANDOM}};
  pes_2_1_io_in_ver_r_man_3 = _RAND_172[3:0];
  _RAND_173 = {1{`RANDOM}};
  pes_2_1_io_in_ver_r_exp = _RAND_173[7:0];
  _RAND_174 = {1{`RANDOM}};
  pes_2_2_io_in_ver_r_sign_0 = _RAND_174[0:0];
  _RAND_175 = {1{`RANDOM}};
  pes_2_2_io_in_ver_r_sign_1 = _RAND_175[0:0];
  _RAND_176 = {1{`RANDOM}};
  pes_2_2_io_in_ver_r_sign_2 = _RAND_176[0:0];
  _RAND_177 = {1{`RANDOM}};
  pes_2_2_io_in_ver_r_sign_3 = _RAND_177[0:0];
  _RAND_178 = {1{`RANDOM}};
  pes_2_2_io_in_ver_r_man_0 = _RAND_178[3:0];
  _RAND_179 = {1{`RANDOM}};
  pes_2_2_io_in_ver_r_man_1 = _RAND_179[3:0];
  _RAND_180 = {1{`RANDOM}};
  pes_2_2_io_in_ver_r_man_2 = _RAND_180[3:0];
  _RAND_181 = {1{`RANDOM}};
  pes_2_2_io_in_ver_r_man_3 = _RAND_181[3:0];
  _RAND_182 = {1{`RANDOM}};
  pes_2_2_io_in_ver_r_exp = _RAND_182[7:0];
  _RAND_183 = {1{`RANDOM}};
  pes_2_3_io_in_ver_r_sign_0 = _RAND_183[0:0];
  _RAND_184 = {1{`RANDOM}};
  pes_2_3_io_in_ver_r_sign_1 = _RAND_184[0:0];
  _RAND_185 = {1{`RANDOM}};
  pes_2_3_io_in_ver_r_sign_2 = _RAND_185[0:0];
  _RAND_186 = {1{`RANDOM}};
  pes_2_3_io_in_ver_r_sign_3 = _RAND_186[0:0];
  _RAND_187 = {1{`RANDOM}};
  pes_2_3_io_in_ver_r_man_0 = _RAND_187[3:0];
  _RAND_188 = {1{`RANDOM}};
  pes_2_3_io_in_ver_r_man_1 = _RAND_188[3:0];
  _RAND_189 = {1{`RANDOM}};
  pes_2_3_io_in_ver_r_man_2 = _RAND_189[3:0];
  _RAND_190 = {1{`RANDOM}};
  pes_2_3_io_in_ver_r_man_3 = _RAND_190[3:0];
  _RAND_191 = {1{`RANDOM}};
  pes_2_3_io_in_ver_r_exp = _RAND_191[7:0];
  _RAND_192 = {1{`RANDOM}};
  pes_3_0_io_in_ver_r_sign_0 = _RAND_192[0:0];
  _RAND_193 = {1{`RANDOM}};
  pes_3_0_io_in_ver_r_sign_1 = _RAND_193[0:0];
  _RAND_194 = {1{`RANDOM}};
  pes_3_0_io_in_ver_r_sign_2 = _RAND_194[0:0];
  _RAND_195 = {1{`RANDOM}};
  pes_3_0_io_in_ver_r_sign_3 = _RAND_195[0:0];
  _RAND_196 = {1{`RANDOM}};
  pes_3_0_io_in_ver_r_man_0 = _RAND_196[3:0];
  _RAND_197 = {1{`RANDOM}};
  pes_3_0_io_in_ver_r_man_1 = _RAND_197[3:0];
  _RAND_198 = {1{`RANDOM}};
  pes_3_0_io_in_ver_r_man_2 = _RAND_198[3:0];
  _RAND_199 = {1{`RANDOM}};
  pes_3_0_io_in_ver_r_man_3 = _RAND_199[3:0];
  _RAND_200 = {1{`RANDOM}};
  pes_3_0_io_in_ver_r_exp = _RAND_200[7:0];
  _RAND_201 = {1{`RANDOM}};
  pes_3_1_io_in_ver_r_sign_0 = _RAND_201[0:0];
  _RAND_202 = {1{`RANDOM}};
  pes_3_1_io_in_ver_r_sign_1 = _RAND_202[0:0];
  _RAND_203 = {1{`RANDOM}};
  pes_3_1_io_in_ver_r_sign_2 = _RAND_203[0:0];
  _RAND_204 = {1{`RANDOM}};
  pes_3_1_io_in_ver_r_sign_3 = _RAND_204[0:0];
  _RAND_205 = {1{`RANDOM}};
  pes_3_1_io_in_ver_r_man_0 = _RAND_205[3:0];
  _RAND_206 = {1{`RANDOM}};
  pes_3_1_io_in_ver_r_man_1 = _RAND_206[3:0];
  _RAND_207 = {1{`RANDOM}};
  pes_3_1_io_in_ver_r_man_2 = _RAND_207[3:0];
  _RAND_208 = {1{`RANDOM}};
  pes_3_1_io_in_ver_r_man_3 = _RAND_208[3:0];
  _RAND_209 = {1{`RANDOM}};
  pes_3_1_io_in_ver_r_exp = _RAND_209[7:0];
  _RAND_210 = {1{`RANDOM}};
  pes_3_2_io_in_ver_r_sign_0 = _RAND_210[0:0];
  _RAND_211 = {1{`RANDOM}};
  pes_3_2_io_in_ver_r_sign_1 = _RAND_211[0:0];
  _RAND_212 = {1{`RANDOM}};
  pes_3_2_io_in_ver_r_sign_2 = _RAND_212[0:0];
  _RAND_213 = {1{`RANDOM}};
  pes_3_2_io_in_ver_r_sign_3 = _RAND_213[0:0];
  _RAND_214 = {1{`RANDOM}};
  pes_3_2_io_in_ver_r_man_0 = _RAND_214[3:0];
  _RAND_215 = {1{`RANDOM}};
  pes_3_2_io_in_ver_r_man_1 = _RAND_215[3:0];
  _RAND_216 = {1{`RANDOM}};
  pes_3_2_io_in_ver_r_man_2 = _RAND_216[3:0];
  _RAND_217 = {1{`RANDOM}};
  pes_3_2_io_in_ver_r_man_3 = _RAND_217[3:0];
  _RAND_218 = {1{`RANDOM}};
  pes_3_2_io_in_ver_r_exp = _RAND_218[7:0];
  _RAND_219 = {1{`RANDOM}};
  pes_3_3_io_in_ver_r_sign_0 = _RAND_219[0:0];
  _RAND_220 = {1{`RANDOM}};
  pes_3_3_io_in_ver_r_sign_1 = _RAND_220[0:0];
  _RAND_221 = {1{`RANDOM}};
  pes_3_3_io_in_ver_r_sign_2 = _RAND_221[0:0];
  _RAND_222 = {1{`RANDOM}};
  pes_3_3_io_in_ver_r_sign_3 = _RAND_222[0:0];
  _RAND_223 = {1{`RANDOM}};
  pes_3_3_io_in_ver_r_man_0 = _RAND_223[3:0];
  _RAND_224 = {1{`RANDOM}};
  pes_3_3_io_in_ver_r_man_1 = _RAND_224[3:0];
  _RAND_225 = {1{`RANDOM}};
  pes_3_3_io_in_ver_r_man_2 = _RAND_225[3:0];
  _RAND_226 = {1{`RANDOM}};
  pes_3_3_io_in_ver_r_man_3 = _RAND_226[3:0];
  _RAND_227 = {1{`RANDOM}};
  pes_3_3_io_in_ver_r_exp = _RAND_227[7:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
