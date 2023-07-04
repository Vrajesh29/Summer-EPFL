module Hbfp(
  input         clock,
  input         reset,
  input  [5:0]  io_man_a_0,
  input  [5:0]  io_man_a_1,
  input  [5:0]  io_man_a_2,
  input  [5:0]  io_man_a_3,
  input  [5:0]  io_man_a_4,
  input  [5:0]  io_man_a_5,
  input  [5:0]  io_man_a_6,
  input  [5:0]  io_man_a_7,
  input  [5:0]  io_man_a_8,
  input  [5:0]  io_man_a_9,
  input  [5:0]  io_man_a_10,
  input  [5:0]  io_man_a_11,
  input  [5:0]  io_man_a_12,
  input  [5:0]  io_man_a_13,
  input  [5:0]  io_man_a_14,
  input  [5:0]  io_man_a_15,
  input  [5:0]  io_man_b_0,
  input  [5:0]  io_man_b_1,
  input  [5:0]  io_man_b_2,
  input  [5:0]  io_man_b_3,
  input  [5:0]  io_man_b_4,
  input  [5:0]  io_man_b_5,
  input  [5:0]  io_man_b_6,
  input  [5:0]  io_man_b_7,
  input  [5:0]  io_man_b_8,
  input  [5:0]  io_man_b_9,
  input  [5:0]  io_man_b_10,
  input  [5:0]  io_man_b_11,
  input  [5:0]  io_man_b_12,
  input  [5:0]  io_man_b_13,
  input  [5:0]  io_man_b_14,
  input  [5:0]  io_man_b_15,
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
`endif // RANDOMIZE_REG_INIT
  wire [7:0] exp_output = io_exp_a + io_exp_b; // @[hbfp.scala 150:23]
  reg [11:0] dotProductRegs_0; // @[hbfp.scala 152:51]
  reg [11:0] dotProductRegs_1; // @[hbfp.scala 152:51]
  reg [11:0] dotProductRegs_2; // @[hbfp.scala 152:51]
  reg [11:0] dotProductRegs_3; // @[hbfp.scala 152:51]
  reg [11:0] dotProductRegs_4; // @[hbfp.scala 152:51]
  reg [11:0] dotProductRegs_5; // @[hbfp.scala 152:51]
  reg [11:0] dotProductRegs_6; // @[hbfp.scala 152:51]
  reg [11:0] dotProductRegs_7; // @[hbfp.scala 152:51]
  reg [11:0] dotProductRegs_8; // @[hbfp.scala 152:51]
  reg [11:0] dotProductRegs_9; // @[hbfp.scala 152:51]
  reg [11:0] dotProductRegs_10; // @[hbfp.scala 152:51]
  reg [11:0] dotProductRegs_11; // @[hbfp.scala 152:51]
  reg [11:0] dotProductRegs_12; // @[hbfp.scala 152:51]
  reg [11:0] dotProductRegs_13; // @[hbfp.scala 152:51]
  reg [11:0] dotProductRegs_14; // @[hbfp.scala 152:51]
  reg [11:0] dotProductRegs_15; // @[hbfp.scala 152:51]
  reg [26:0] accumulator; // @[hbfp.scala 153:28]
  reg [5:0] multiplierReg; // @[hbfp.scala 156:32]
  wire [11:0] _dotProductRegs_0_T = $signed(multiplierReg) * $signed(io_man_b_0); // @[hbfp.scala 158:40]
  reg [5:0] multiplierReg_1; // @[hbfp.scala 156:32]
  wire [11:0] _dotProductRegs_1_T = $signed(multiplierReg_1) * $signed(io_man_b_1); // @[hbfp.scala 158:40]
  reg [5:0] multiplierReg_2; // @[hbfp.scala 156:32]
  wire [11:0] _dotProductRegs_2_T = $signed(multiplierReg_2) * $signed(io_man_b_2); // @[hbfp.scala 158:40]
  reg [5:0] multiplierReg_3; // @[hbfp.scala 156:32]
  wire [11:0] _dotProductRegs_3_T = $signed(multiplierReg_3) * $signed(io_man_b_3); // @[hbfp.scala 158:40]
  reg [5:0] multiplierReg_4; // @[hbfp.scala 156:32]
  wire [11:0] _dotProductRegs_4_T = $signed(multiplierReg_4) * $signed(io_man_b_4); // @[hbfp.scala 158:40]
  reg [5:0] multiplierReg_5; // @[hbfp.scala 156:32]
  wire [11:0] _dotProductRegs_5_T = $signed(multiplierReg_5) * $signed(io_man_b_5); // @[hbfp.scala 158:40]
  reg [5:0] multiplierReg_6; // @[hbfp.scala 156:32]
  wire [11:0] _dotProductRegs_6_T = $signed(multiplierReg_6) * $signed(io_man_b_6); // @[hbfp.scala 158:40]
  reg [5:0] multiplierReg_7; // @[hbfp.scala 156:32]
  wire [11:0] _dotProductRegs_7_T = $signed(multiplierReg_7) * $signed(io_man_b_7); // @[hbfp.scala 158:40]
  reg [5:0] multiplierReg_8; // @[hbfp.scala 156:32]
  wire [11:0] _dotProductRegs_8_T = $signed(multiplierReg_8) * $signed(io_man_b_8); // @[hbfp.scala 158:40]
  reg [5:0] multiplierReg_9; // @[hbfp.scala 156:32]
  wire [11:0] _dotProductRegs_9_T = $signed(multiplierReg_9) * $signed(io_man_b_9); // @[hbfp.scala 158:40]
  reg [5:0] multiplierReg_10; // @[hbfp.scala 156:32]
  wire [11:0] _dotProductRegs_10_T = $signed(multiplierReg_10) * $signed(io_man_b_10); // @[hbfp.scala 158:40]
  reg [5:0] multiplierReg_11; // @[hbfp.scala 156:32]
  wire [11:0] _dotProductRegs_11_T = $signed(multiplierReg_11) * $signed(io_man_b_11); // @[hbfp.scala 158:40]
  reg [5:0] multiplierReg_12; // @[hbfp.scala 156:32]
  wire [11:0] _dotProductRegs_12_T = $signed(multiplierReg_12) * $signed(io_man_b_12); // @[hbfp.scala 158:40]
  reg [5:0] multiplierReg_13; // @[hbfp.scala 156:32]
  wire [11:0] _dotProductRegs_13_T = $signed(multiplierReg_13) * $signed(io_man_b_13); // @[hbfp.scala 158:40]
  reg [5:0] multiplierReg_14; // @[hbfp.scala 156:32]
  wire [11:0] _dotProductRegs_14_T = $signed(multiplierReg_14) * $signed(io_man_b_14); // @[hbfp.scala 158:40]
  reg [5:0] multiplierReg_15; // @[hbfp.scala 156:32]
  wire [11:0] _dotProductRegs_15_T = $signed(multiplierReg_15) * $signed(io_man_b_15); // @[hbfp.scala 158:40]
  wire [12:0] _accumulator_T = $signed(dotProductRegs_0) + $signed(dotProductRegs_1); // @[hbfp.scala 161:42]
  wire [12:0] _GEN_0 = {{1{dotProductRegs_2[11]}},dotProductRegs_2}; // @[hbfp.scala 161:42]
  wire [13:0] _accumulator_T_1 = $signed(_accumulator_T) + $signed(_GEN_0); // @[hbfp.scala 161:42]
  wire [13:0] _GEN_1 = {{2{dotProductRegs_3[11]}},dotProductRegs_3}; // @[hbfp.scala 161:42]
  wire [14:0] _accumulator_T_2 = $signed(_accumulator_T_1) + $signed(_GEN_1); // @[hbfp.scala 161:42]
  wire [14:0] _GEN_2 = {{3{dotProductRegs_4[11]}},dotProductRegs_4}; // @[hbfp.scala 161:42]
  wire [15:0] _accumulator_T_3 = $signed(_accumulator_T_2) + $signed(_GEN_2); // @[hbfp.scala 161:42]
  wire [15:0] _GEN_3 = {{4{dotProductRegs_5[11]}},dotProductRegs_5}; // @[hbfp.scala 161:42]
  wire [16:0] _accumulator_T_4 = $signed(_accumulator_T_3) + $signed(_GEN_3); // @[hbfp.scala 161:42]
  wire [16:0] _GEN_4 = {{5{dotProductRegs_6[11]}},dotProductRegs_6}; // @[hbfp.scala 161:42]
  wire [17:0] _accumulator_T_5 = $signed(_accumulator_T_4) + $signed(_GEN_4); // @[hbfp.scala 161:42]
  wire [17:0] _GEN_5 = {{6{dotProductRegs_7[11]}},dotProductRegs_7}; // @[hbfp.scala 161:42]
  wire [18:0] _accumulator_T_6 = $signed(_accumulator_T_5) + $signed(_GEN_5); // @[hbfp.scala 161:42]
  wire [18:0] _GEN_6 = {{7{dotProductRegs_8[11]}},dotProductRegs_8}; // @[hbfp.scala 161:42]
  wire [19:0] _accumulator_T_7 = $signed(_accumulator_T_6) + $signed(_GEN_6); // @[hbfp.scala 161:42]
  wire [19:0] _GEN_7 = {{8{dotProductRegs_9[11]}},dotProductRegs_9}; // @[hbfp.scala 161:42]
  wire [20:0] _accumulator_T_8 = $signed(_accumulator_T_7) + $signed(_GEN_7); // @[hbfp.scala 161:42]
  wire [20:0] _GEN_8 = {{9{dotProductRegs_10[11]}},dotProductRegs_10}; // @[hbfp.scala 161:42]
  wire [21:0] _accumulator_T_9 = $signed(_accumulator_T_8) + $signed(_GEN_8); // @[hbfp.scala 161:42]
  wire [21:0] _GEN_9 = {{10{dotProductRegs_11[11]}},dotProductRegs_11}; // @[hbfp.scala 161:42]
  wire [22:0] _accumulator_T_10 = $signed(_accumulator_T_9) + $signed(_GEN_9); // @[hbfp.scala 161:42]
  wire [22:0] _GEN_10 = {{11{dotProductRegs_12[11]}},dotProductRegs_12}; // @[hbfp.scala 161:42]
  wire [23:0] _accumulator_T_11 = $signed(_accumulator_T_10) + $signed(_GEN_10); // @[hbfp.scala 161:42]
  wire [23:0] _GEN_11 = {{12{dotProductRegs_13[11]}},dotProductRegs_13}; // @[hbfp.scala 161:42]
  wire [24:0] _accumulator_T_12 = $signed(_accumulator_T_11) + $signed(_GEN_11); // @[hbfp.scala 161:42]
  wire [24:0] _GEN_12 = {{13{dotProductRegs_14[11]}},dotProductRegs_14}; // @[hbfp.scala 161:42]
  wire [25:0] _accumulator_T_13 = $signed(_accumulator_T_12) + $signed(_GEN_12); // @[hbfp.scala 161:42]
  wire [25:0] _GEN_13 = {{14{dotProductRegs_15[11]}},dotProductRegs_15}; // @[hbfp.scala 161:42]
  wire [26:0] _accumulator_T_14 = $signed(_accumulator_T_13) + $signed(_GEN_13); // @[hbfp.scala 161:42]
  wire [8:0] _io_result_T_1 = {accumulator[26],exp_output}; // @[hbfp.scala 163:51]
  assign io_result = {_io_result_T_1,accumulator[4:0]}; // @[hbfp.scala 163:65]
  always @(posedge clock) begin
    if (reset) begin // @[hbfp.scala 152:51]
      dotProductRegs_0 <= 12'sh0; // @[hbfp.scala 152:51]
    end else begin
      dotProductRegs_0 <= _dotProductRegs_0_T; // @[hbfp.scala 158:23]
    end
    if (reset) begin // @[hbfp.scala 152:51]
      dotProductRegs_1 <= 12'sh0; // @[hbfp.scala 152:51]
    end else begin
      dotProductRegs_1 <= _dotProductRegs_1_T; // @[hbfp.scala 158:23]
    end
    if (reset) begin // @[hbfp.scala 152:51]
      dotProductRegs_2 <= 12'sh0; // @[hbfp.scala 152:51]
    end else begin
      dotProductRegs_2 <= _dotProductRegs_2_T; // @[hbfp.scala 158:23]
    end
    if (reset) begin // @[hbfp.scala 152:51]
      dotProductRegs_3 <= 12'sh0; // @[hbfp.scala 152:51]
    end else begin
      dotProductRegs_3 <= _dotProductRegs_3_T; // @[hbfp.scala 158:23]
    end
    if (reset) begin // @[hbfp.scala 152:51]
      dotProductRegs_4 <= 12'sh0; // @[hbfp.scala 152:51]
    end else begin
      dotProductRegs_4 <= _dotProductRegs_4_T; // @[hbfp.scala 158:23]
    end
    if (reset) begin // @[hbfp.scala 152:51]
      dotProductRegs_5 <= 12'sh0; // @[hbfp.scala 152:51]
    end else begin
      dotProductRegs_5 <= _dotProductRegs_5_T; // @[hbfp.scala 158:23]
    end
    if (reset) begin // @[hbfp.scala 152:51]
      dotProductRegs_6 <= 12'sh0; // @[hbfp.scala 152:51]
    end else begin
      dotProductRegs_6 <= _dotProductRegs_6_T; // @[hbfp.scala 158:23]
    end
    if (reset) begin // @[hbfp.scala 152:51]
      dotProductRegs_7 <= 12'sh0; // @[hbfp.scala 152:51]
    end else begin
      dotProductRegs_7 <= _dotProductRegs_7_T; // @[hbfp.scala 158:23]
    end
    if (reset) begin // @[hbfp.scala 152:51]
      dotProductRegs_8 <= 12'sh0; // @[hbfp.scala 152:51]
    end else begin
      dotProductRegs_8 <= _dotProductRegs_8_T; // @[hbfp.scala 158:23]
    end
    if (reset) begin // @[hbfp.scala 152:51]
      dotProductRegs_9 <= 12'sh0; // @[hbfp.scala 152:51]
    end else begin
      dotProductRegs_9 <= _dotProductRegs_9_T; // @[hbfp.scala 158:23]
    end
    if (reset) begin // @[hbfp.scala 152:51]
      dotProductRegs_10 <= 12'sh0; // @[hbfp.scala 152:51]
    end else begin
      dotProductRegs_10 <= _dotProductRegs_10_T; // @[hbfp.scala 158:23]
    end
    if (reset) begin // @[hbfp.scala 152:51]
      dotProductRegs_11 <= 12'sh0; // @[hbfp.scala 152:51]
    end else begin
      dotProductRegs_11 <= _dotProductRegs_11_T; // @[hbfp.scala 158:23]
    end
    if (reset) begin // @[hbfp.scala 152:51]
      dotProductRegs_12 <= 12'sh0; // @[hbfp.scala 152:51]
    end else begin
      dotProductRegs_12 <= _dotProductRegs_12_T; // @[hbfp.scala 158:23]
    end
    if (reset) begin // @[hbfp.scala 152:51]
      dotProductRegs_13 <= 12'sh0; // @[hbfp.scala 152:51]
    end else begin
      dotProductRegs_13 <= _dotProductRegs_13_T; // @[hbfp.scala 158:23]
    end
    if (reset) begin // @[hbfp.scala 152:51]
      dotProductRegs_14 <= 12'sh0; // @[hbfp.scala 152:51]
    end else begin
      dotProductRegs_14 <= _dotProductRegs_14_T; // @[hbfp.scala 158:23]
    end
    if (reset) begin // @[hbfp.scala 152:51]
      dotProductRegs_15 <= 12'sh0; // @[hbfp.scala 152:51]
    end else begin
      dotProductRegs_15 <= _dotProductRegs_15_T; // @[hbfp.scala 158:23]
    end
    if (reset) begin // @[hbfp.scala 153:28]
      accumulator <= 27'sh0; // @[hbfp.scala 153:28]
    end else begin
      accumulator <= _accumulator_T_14; // @[hbfp.scala 161:15]
    end
    if (reset) begin // @[hbfp.scala 156:32]
      multiplierReg <= 6'sh0; // @[hbfp.scala 156:32]
    end else begin
      multiplierReg <= io_man_a_0; // @[hbfp.scala 157:19]
    end
    if (reset) begin // @[hbfp.scala 156:32]
      multiplierReg_1 <= 6'sh0; // @[hbfp.scala 156:32]
    end else begin
      multiplierReg_1 <= io_man_a_1; // @[hbfp.scala 157:19]
    end
    if (reset) begin // @[hbfp.scala 156:32]
      multiplierReg_2 <= 6'sh0; // @[hbfp.scala 156:32]
    end else begin
      multiplierReg_2 <= io_man_a_2; // @[hbfp.scala 157:19]
    end
    if (reset) begin // @[hbfp.scala 156:32]
      multiplierReg_3 <= 6'sh0; // @[hbfp.scala 156:32]
    end else begin
      multiplierReg_3 <= io_man_a_3; // @[hbfp.scala 157:19]
    end
    if (reset) begin // @[hbfp.scala 156:32]
      multiplierReg_4 <= 6'sh0; // @[hbfp.scala 156:32]
    end else begin
      multiplierReg_4 <= io_man_a_4; // @[hbfp.scala 157:19]
    end
    if (reset) begin // @[hbfp.scala 156:32]
      multiplierReg_5 <= 6'sh0; // @[hbfp.scala 156:32]
    end else begin
      multiplierReg_5 <= io_man_a_5; // @[hbfp.scala 157:19]
    end
    if (reset) begin // @[hbfp.scala 156:32]
      multiplierReg_6 <= 6'sh0; // @[hbfp.scala 156:32]
    end else begin
      multiplierReg_6 <= io_man_a_6; // @[hbfp.scala 157:19]
    end
    if (reset) begin // @[hbfp.scala 156:32]
      multiplierReg_7 <= 6'sh0; // @[hbfp.scala 156:32]
    end else begin
      multiplierReg_7 <= io_man_a_7; // @[hbfp.scala 157:19]
    end
    if (reset) begin // @[hbfp.scala 156:32]
      multiplierReg_8 <= 6'sh0; // @[hbfp.scala 156:32]
    end else begin
      multiplierReg_8 <= io_man_a_8; // @[hbfp.scala 157:19]
    end
    if (reset) begin // @[hbfp.scala 156:32]
      multiplierReg_9 <= 6'sh0; // @[hbfp.scala 156:32]
    end else begin
      multiplierReg_9 <= io_man_a_9; // @[hbfp.scala 157:19]
    end
    if (reset) begin // @[hbfp.scala 156:32]
      multiplierReg_10 <= 6'sh0; // @[hbfp.scala 156:32]
    end else begin
      multiplierReg_10 <= io_man_a_10; // @[hbfp.scala 157:19]
    end
    if (reset) begin // @[hbfp.scala 156:32]
      multiplierReg_11 <= 6'sh0; // @[hbfp.scala 156:32]
    end else begin
      multiplierReg_11 <= io_man_a_11; // @[hbfp.scala 157:19]
    end
    if (reset) begin // @[hbfp.scala 156:32]
      multiplierReg_12 <= 6'sh0; // @[hbfp.scala 156:32]
    end else begin
      multiplierReg_12 <= io_man_a_12; // @[hbfp.scala 157:19]
    end
    if (reset) begin // @[hbfp.scala 156:32]
      multiplierReg_13 <= 6'sh0; // @[hbfp.scala 156:32]
    end else begin
      multiplierReg_13 <= io_man_a_13; // @[hbfp.scala 157:19]
    end
    if (reset) begin // @[hbfp.scala 156:32]
      multiplierReg_14 <= 6'sh0; // @[hbfp.scala 156:32]
    end else begin
      multiplierReg_14 <= io_man_a_14; // @[hbfp.scala 157:19]
    end
    if (reset) begin // @[hbfp.scala 156:32]
      multiplierReg_15 <= 6'sh0; // @[hbfp.scala 156:32]
    end else begin
      multiplierReg_15 <= io_man_a_15; // @[hbfp.scala 157:19]
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
  dotProductRegs_0 = _RAND_0[11:0];
  _RAND_1 = {1{`RANDOM}};
  dotProductRegs_1 = _RAND_1[11:0];
  _RAND_2 = {1{`RANDOM}};
  dotProductRegs_2 = _RAND_2[11:0];
  _RAND_3 = {1{`RANDOM}};
  dotProductRegs_3 = _RAND_3[11:0];
  _RAND_4 = {1{`RANDOM}};
  dotProductRegs_4 = _RAND_4[11:0];
  _RAND_5 = {1{`RANDOM}};
  dotProductRegs_5 = _RAND_5[11:0];
  _RAND_6 = {1{`RANDOM}};
  dotProductRegs_6 = _RAND_6[11:0];
  _RAND_7 = {1{`RANDOM}};
  dotProductRegs_7 = _RAND_7[11:0];
  _RAND_8 = {1{`RANDOM}};
  dotProductRegs_8 = _RAND_8[11:0];
  _RAND_9 = {1{`RANDOM}};
  dotProductRegs_9 = _RAND_9[11:0];
  _RAND_10 = {1{`RANDOM}};
  dotProductRegs_10 = _RAND_10[11:0];
  _RAND_11 = {1{`RANDOM}};
  dotProductRegs_11 = _RAND_11[11:0];
  _RAND_12 = {1{`RANDOM}};
  dotProductRegs_12 = _RAND_12[11:0];
  _RAND_13 = {1{`RANDOM}};
  dotProductRegs_13 = _RAND_13[11:0];
  _RAND_14 = {1{`RANDOM}};
  dotProductRegs_14 = _RAND_14[11:0];
  _RAND_15 = {1{`RANDOM}};
  dotProductRegs_15 = _RAND_15[11:0];
  _RAND_16 = {1{`RANDOM}};
  accumulator = _RAND_16[26:0];
  _RAND_17 = {1{`RANDOM}};
  multiplierReg = _RAND_17[5:0];
  _RAND_18 = {1{`RANDOM}};
  multiplierReg_1 = _RAND_18[5:0];
  _RAND_19 = {1{`RANDOM}};
  multiplierReg_2 = _RAND_19[5:0];
  _RAND_20 = {1{`RANDOM}};
  multiplierReg_3 = _RAND_20[5:0];
  _RAND_21 = {1{`RANDOM}};
  multiplierReg_4 = _RAND_21[5:0];
  _RAND_22 = {1{`RANDOM}};
  multiplierReg_5 = _RAND_22[5:0];
  _RAND_23 = {1{`RANDOM}};
  multiplierReg_6 = _RAND_23[5:0];
  _RAND_24 = {1{`RANDOM}};
  multiplierReg_7 = _RAND_24[5:0];
  _RAND_25 = {1{`RANDOM}};
  multiplierReg_8 = _RAND_25[5:0];
  _RAND_26 = {1{`RANDOM}};
  multiplierReg_9 = _RAND_26[5:0];
  _RAND_27 = {1{`RANDOM}};
  multiplierReg_10 = _RAND_27[5:0];
  _RAND_28 = {1{`RANDOM}};
  multiplierReg_11 = _RAND_28[5:0];
  _RAND_29 = {1{`RANDOM}};
  multiplierReg_12 = _RAND_29[5:0];
  _RAND_30 = {1{`RANDOM}};
  multiplierReg_13 = _RAND_30[5:0];
  _RAND_31 = {1{`RANDOM}};
  multiplierReg_14 = _RAND_31[5:0];
  _RAND_32 = {1{`RANDOM}};
  multiplierReg_15 = _RAND_32[5:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
