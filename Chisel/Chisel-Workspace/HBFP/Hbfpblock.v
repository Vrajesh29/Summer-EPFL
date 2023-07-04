module Hbfpblock(
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
  input  [7:0]  io_exp_a_0,
  input  [7:0]  io_exp_a_1,
  input  [7:0]  io_exp_a_2,
  input  [7:0]  io_exp_a_3,
  input  [7:0]  io_exp_b_0,
  input  [7:0]  io_exp_b_1,
  input  [7:0]  io_exp_b_2,
  input  [7:0]  io_exp_b_3,
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
`endif // RANDOMIZE_REG_INIT
  reg [26:0] accumulator; // @[block_division.scala 20:28]
  reg [11:0] dotProductRegs__0; // @[block_division.scala 23:29]
  reg [11:0] dotProductRegs__1; // @[block_division.scala 23:29]
  reg [11:0] dotProductRegs__2; // @[block_division.scala 23:29]
  reg [11:0] dotProductRegs__3; // @[block_division.scala 23:29]
  wire [7:0] exp_output_0 = io_exp_a_0 + io_exp_b_0; // @[block_division.scala 24:31]
  wire [11:0] _dotProducts_0_T_2 = $signed(dotProductRegs__0) + $signed(dotProductRegs__1); // @[block_division.scala 29:47]
  wire [11:0] _dotProducts_0_T_5 = $signed(_dotProducts_0_T_2) + $signed(dotProductRegs__2); // @[block_division.scala 29:47]
  wire [11:0] dotProducts_0 = $signed(_dotProducts_0_T_5) + $signed(dotProductRegs__3); // @[block_division.scala 29:47]
  reg [11:0] dotProductRegs_1_0; // @[block_division.scala 23:29]
  reg [11:0] dotProductRegs_1_1; // @[block_division.scala 23:29]
  reg [11:0] dotProductRegs_1_2; // @[block_division.scala 23:29]
  reg [11:0] dotProductRegs_1_3; // @[block_division.scala 23:29]
  wire [7:0] exp_output_1 = io_exp_a_1 + io_exp_b_1; // @[block_division.scala 24:31]
  wire [11:0] _dotProducts_1_T_2 = $signed(dotProductRegs_1_0) + $signed(dotProductRegs_1_1); // @[block_division.scala 29:47]
  wire [11:0] _dotProducts_1_T_5 = $signed(_dotProducts_1_T_2) + $signed(dotProductRegs_1_2); // @[block_division.scala 29:47]
  wire [11:0] dotProducts_1 = $signed(_dotProducts_1_T_5) + $signed(dotProductRegs_1_3); // @[block_division.scala 29:47]
  reg [11:0] dotProductRegs_2_0; // @[block_division.scala 23:29]
  reg [11:0] dotProductRegs_2_1; // @[block_division.scala 23:29]
  reg [11:0] dotProductRegs_2_2; // @[block_division.scala 23:29]
  reg [11:0] dotProductRegs_2_3; // @[block_division.scala 23:29]
  wire [7:0] exp_output_2 = io_exp_a_2 + io_exp_b_2; // @[block_division.scala 24:31]
  wire [11:0] _dotProducts_2_T_2 = $signed(dotProductRegs_2_0) + $signed(dotProductRegs_2_1); // @[block_division.scala 29:47]
  wire [11:0] _dotProducts_2_T_5 = $signed(_dotProducts_2_T_2) + $signed(dotProductRegs_2_2); // @[block_division.scala 29:47]
  wire [11:0] dotProducts_2 = $signed(_dotProducts_2_T_5) + $signed(dotProductRegs_2_3); // @[block_division.scala 29:47]
  reg [11:0] dotProductRegs_3_0; // @[block_division.scala 23:29]
  reg [11:0] dotProductRegs_3_1; // @[block_division.scala 23:29]
  reg [11:0] dotProductRegs_3_2; // @[block_division.scala 23:29]
  reg [11:0] dotProductRegs_3_3; // @[block_division.scala 23:29]
  wire [7:0] exp_output_3 = io_exp_a_3 + io_exp_b_3; // @[block_division.scala 24:31]
  wire [11:0] _dotProducts_3_T_2 = $signed(dotProductRegs_3_0) + $signed(dotProductRegs_3_1); // @[block_division.scala 29:47]
  wire [11:0] _dotProducts_3_T_5 = $signed(_dotProducts_3_T_2) + $signed(dotProductRegs_3_2); // @[block_division.scala 29:47]
  wire [11:0] dotProducts_3 = $signed(_dotProducts_3_T_5) + $signed(dotProductRegs_3_3); // @[block_division.scala 29:47]
  wire [7:0] _exp_min_T_1 = exp_output_0 < exp_output_1 ? exp_output_0 : exp_output_1; // @[block_division.scala 31:45]
  wire [7:0] _exp_min_T_3 = _exp_min_T_1 < exp_output_2 ? _exp_min_T_1 : exp_output_2; // @[block_division.scala 31:45]
  wire [7:0] exp_min = _exp_min_T_3 < exp_output_3 ? _exp_min_T_3 : exp_output_3; // @[block_division.scala 31:45]
  wire [7:0] exp_diff = exp_output_0 - exp_min; // @[block_division.scala 34:34]
  wire [11:0] shifteddotProducts_0 = $signed(dotProducts_0) >>> exp_diff; // @[block_division.scala 35:45]
  wire [7:0] exp_diff_1 = exp_output_1 - exp_min; // @[block_division.scala 34:34]
  wire [11:0] shifteddotProducts_1 = $signed(dotProducts_1) >>> exp_diff_1; // @[block_division.scala 35:45]
  wire [7:0] exp_diff_2 = exp_output_2 - exp_min; // @[block_division.scala 34:34]
  wire [11:0] shifteddotProducts_2 = $signed(dotProducts_2) >>> exp_diff_2; // @[block_division.scala 35:45]
  wire [7:0] exp_diff_3 = exp_output_3 - exp_min; // @[block_division.scala 34:34]
  wire [11:0] shifteddotProducts_3 = $signed(dotProducts_3) >>> exp_diff_3; // @[block_division.scala 35:45]
  wire [11:0] _accumulator_T_2 = $signed(shifteddotProducts_0) + $signed(shifteddotProducts_1); // @[block_division.scala 37:45]
  wire [11:0] _accumulator_T_5 = $signed(_accumulator_T_2) + $signed(shifteddotProducts_2); // @[block_division.scala 37:45]
  wire [11:0] _accumulator_T_8 = $signed(_accumulator_T_5) + $signed(shifteddotProducts_3); // @[block_division.scala 37:45]
  wire [8:0] _io_result_T_1 = {accumulator[26],exp_min}; // @[block_division.scala 38:51]
  assign io_result = {_io_result_T_1,accumulator[4:0]}; // @[block_division.scala 38:62]
  always @(posedge clock) begin
    if (reset) begin // @[block_division.scala 20:28]
      accumulator <= 27'sh0; // @[block_division.scala 20:28]
    end else begin
      accumulator <= {{15{_accumulator_T_8[11]}},_accumulator_T_8}; // @[block_division.scala 37:15]
    end
    dotProductRegs__0 <= $signed(io_man_a_0) * $signed(io_man_b_0); // @[block_division.scala 26:63]
    dotProductRegs__1 <= $signed(io_man_a_1) * $signed(io_man_b_1); // @[block_division.scala 26:63]
    dotProductRegs__2 <= $signed(io_man_a_2) * $signed(io_man_b_2); // @[block_division.scala 26:63]
    dotProductRegs__3 <= $signed(io_man_a_3) * $signed(io_man_b_3); // @[block_division.scala 26:63]
    dotProductRegs_1_0 <= $signed(io_man_a_4) * $signed(io_man_b_4); // @[block_division.scala 26:63]
    dotProductRegs_1_1 <= $signed(io_man_a_5) * $signed(io_man_b_5); // @[block_division.scala 26:63]
    dotProductRegs_1_2 <= $signed(io_man_a_6) * $signed(io_man_b_6); // @[block_division.scala 26:63]
    dotProductRegs_1_3 <= $signed(io_man_a_7) * $signed(io_man_b_7); // @[block_division.scala 26:63]
    dotProductRegs_2_0 <= $signed(io_man_a_8) * $signed(io_man_b_8); // @[block_division.scala 26:63]
    dotProductRegs_2_1 <= $signed(io_man_a_9) * $signed(io_man_b_9); // @[block_division.scala 26:63]
    dotProductRegs_2_2 <= $signed(io_man_a_10) * $signed(io_man_b_10); // @[block_division.scala 26:63]
    dotProductRegs_2_3 <= $signed(io_man_a_11) * $signed(io_man_b_11); // @[block_division.scala 26:63]
    dotProductRegs_3_0 <= $signed(io_man_a_12) * $signed(io_man_b_12); // @[block_division.scala 26:63]
    dotProductRegs_3_1 <= $signed(io_man_a_13) * $signed(io_man_b_13); // @[block_division.scala 26:63]
    dotProductRegs_3_2 <= $signed(io_man_a_14) * $signed(io_man_b_14); // @[block_division.scala 26:63]
    dotProductRegs_3_3 <= $signed(io_man_a_15) * $signed(io_man_b_15); // @[block_division.scala 26:63]
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
  accumulator = _RAND_0[26:0];
  _RAND_1 = {1{`RANDOM}};
  dotProductRegs__0 = _RAND_1[11:0];
  _RAND_2 = {1{`RANDOM}};
  dotProductRegs__1 = _RAND_2[11:0];
  _RAND_3 = {1{`RANDOM}};
  dotProductRegs__2 = _RAND_3[11:0];
  _RAND_4 = {1{`RANDOM}};
  dotProductRegs__3 = _RAND_4[11:0];
  _RAND_5 = {1{`RANDOM}};
  dotProductRegs_1_0 = _RAND_5[11:0];
  _RAND_6 = {1{`RANDOM}};
  dotProductRegs_1_1 = _RAND_6[11:0];
  _RAND_7 = {1{`RANDOM}};
  dotProductRegs_1_2 = _RAND_7[11:0];
  _RAND_8 = {1{`RANDOM}};
  dotProductRegs_1_3 = _RAND_8[11:0];
  _RAND_9 = {1{`RANDOM}};
  dotProductRegs_2_0 = _RAND_9[11:0];
  _RAND_10 = {1{`RANDOM}};
  dotProductRegs_2_1 = _RAND_10[11:0];
  _RAND_11 = {1{`RANDOM}};
  dotProductRegs_2_2 = _RAND_11[11:0];
  _RAND_12 = {1{`RANDOM}};
  dotProductRegs_2_3 = _RAND_12[11:0];
  _RAND_13 = {1{`RANDOM}};
  dotProductRegs_3_0 = _RAND_13[11:0];
  _RAND_14 = {1{`RANDOM}};
  dotProductRegs_3_1 = _RAND_14[11:0];
  _RAND_15 = {1{`RANDOM}};
  dotProductRegs_3_2 = _RAND_15[11:0];
  _RAND_16 = {1{`RANDOM}};
  dotProductRegs_3_3 = _RAND_16[11:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
