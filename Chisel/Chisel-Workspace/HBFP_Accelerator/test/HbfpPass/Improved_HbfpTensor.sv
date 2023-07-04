module adderTree2(
  input         clock,
  input         reset,
  input  [15:0] io_in_sign_man_0,
  input  [15:0] io_in_sign_man_1,
  input  [15:0] io_in_sign_man_2,
  input  [15:0] io_in_sign_man_3,
  input  [8:0]  io_in_exps_0,
  input  [8:0]  io_in_exps_1,
  input  [8:0]  io_in_exps_2,
  input  [8:0]  io_in_exps_3,
  input         io_in_control_signal,
  input         io_in_control_signal2,
  output [14:0] io_result_tree
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
`endif // RANDOMIZE_REG_INIT
  reg [8:0] exp_buffer_0; // @[bundled_block_division.scala 26:60]
  reg [8:0] exp_buffer_1; // @[bundled_block_division.scala 26:60]
  reg [8:0] exp_buffer_2; // @[bundled_block_division.scala 26:60]
  reg [8:0] exp_buffer_3; // @[bundled_block_division.scala 26:60]
  reg [18:0] man_buffer_two_complement_0; // @[bundled_block_division.scala 28:12]
  reg [18:0] man_buffer_two_complement_1; // @[bundled_block_division.scala 28:12]
  reg [18:0] man_buffer_two_complement_2; // @[bundled_block_division.scala 28:12]
  reg [18:0] man_buffer_two_complement_3; // @[bundled_block_division.scala 28:12]
  reg [9:0] v; // @[bundled_block_division.scala 42:18]
  reg  enable; // @[bundled_block_division.scala 43:19]
  wire  _GEN_8 = io_in_control_signal2 | enable; // @[bundled_block_division.scala 44:39 45:12 43:19]
  wire [9:0] _v_T_1 = v + 10'h1; // @[bundled_block_division.scala 53:16]
  wire  _exp_buffer_0_T = exp_buffer_0 > exp_buffer_1; // @[bundled_block_division.scala 57:31]
  wire [8:0] _exp_difference_T_2 = exp_buffer_0 - exp_buffer_1; // @[bundled_block_division.scala 63:31]
  wire [8:0] _exp_difference_T_4 = exp_buffer_1 - exp_buffer_0; // @[bundled_block_division.scala 64:35]
  wire [8:0] exp_difference = _exp_buffer_0_T ? _exp_difference_T_2 : _exp_difference_T_4; // @[bundled_block_division.scala 61:35]
  wire [18:0] _man_buffer_two_complement_0_T_4 = ~man_buffer_two_complement_1; // @[bundled_block_division.scala 69:21]
  wire [18:0] _man_buffer_two_complement_0_T_7 = $signed(_man_buffer_two_complement_0_T_4) + 19'sh1; // @[bundled_block_division.scala 69:61]
  wire [18:0] _man_buffer_two_complement_0_T_8 = $signed(_man_buffer_two_complement_0_T_7) >>> exp_difference; // @[bundled_block_division.scala 69:68]
  wire [18:0] _man_buffer_two_complement_0_T_11 = 19'sh0 - $signed(_man_buffer_two_complement_0_T_8); // @[bundled_block_division.scala 69:17]
  wire [18:0] _man_buffer_two_complement_0_T_12 = $signed(man_buffer_two_complement_1) >>> exp_difference; // @[bundled_block_division.scala 70:51]
  wire [18:0] _man_buffer_two_complement_0_T_13 = man_buffer_two_complement_1[18] ? $signed(
    _man_buffer_two_complement_0_T_11) : $signed(_man_buffer_two_complement_0_T_12); // @[bundled_block_division.scala 68:51]
  wire [18:0] _man_buffer_two_complement_0_T_16 = $signed(man_buffer_two_complement_0) + $signed(
    _man_buffer_two_complement_0_T_13); // @[bundled_block_division.scala 68:46]
  wire [18:0] _man_buffer_two_complement_0_T_20 = ~man_buffer_two_complement_0; // @[bundled_block_division.scala 73:21]
  wire [18:0] _man_buffer_two_complement_0_T_23 = $signed(_man_buffer_two_complement_0_T_20) + 19'sh1; // @[bundled_block_division.scala 73:57]
  wire [18:0] _man_buffer_two_complement_0_T_24 = $signed(_man_buffer_two_complement_0_T_23) >>> exp_difference; // @[bundled_block_division.scala 73:64]
  wire [18:0] _man_buffer_two_complement_0_T_27 = 19'sh0 - $signed(_man_buffer_two_complement_0_T_24); // @[bundled_block_division.scala 73:17]
  wire [18:0] _man_buffer_two_complement_0_T_28 = $signed(man_buffer_two_complement_0) >>> exp_difference; // @[bundled_block_division.scala 74:47]
  wire [18:0] _man_buffer_two_complement_0_T_29 = man_buffer_two_complement_0[18] ? $signed(
    _man_buffer_two_complement_0_T_27) : $signed(_man_buffer_two_complement_0_T_28); // @[bundled_block_division.scala 72:55]
  wire [18:0] _man_buffer_two_complement_0_T_32 = $signed(man_buffer_two_complement_1) + $signed(
    _man_buffer_two_complement_0_T_29); // @[bundled_block_division.scala 72:50]
  wire  _exp_buffer_1_T = exp_buffer_2 > exp_buffer_3; // @[bundled_block_division.scala 57:31]
  wire [8:0] _exp_difference_T_7 = exp_buffer_2 - exp_buffer_3; // @[bundled_block_division.scala 63:31]
  wire [8:0] _exp_difference_T_9 = exp_buffer_3 - exp_buffer_2; // @[bundled_block_division.scala 64:35]
  wire [8:0] exp_difference_1 = _exp_buffer_1_T ? _exp_difference_T_7 : _exp_difference_T_9; // @[bundled_block_division.scala 61:35]
  wire [18:0] _man_buffer_two_complement_1_T_4 = ~man_buffer_two_complement_3; // @[bundled_block_division.scala 69:21]
  wire [18:0] _man_buffer_two_complement_1_T_7 = $signed(_man_buffer_two_complement_1_T_4) + 19'sh1; // @[bundled_block_division.scala 69:61]
  wire [18:0] _man_buffer_two_complement_1_T_8 = $signed(_man_buffer_two_complement_1_T_7) >>> exp_difference_1; // @[bundled_block_division.scala 69:68]
  wire [18:0] _man_buffer_two_complement_1_T_11 = 19'sh0 - $signed(_man_buffer_two_complement_1_T_8); // @[bundled_block_division.scala 69:17]
  wire [18:0] _man_buffer_two_complement_1_T_12 = $signed(man_buffer_two_complement_3) >>> exp_difference_1; // @[bundled_block_division.scala 70:51]
  wire [18:0] _man_buffer_two_complement_1_T_13 = man_buffer_two_complement_3[18] ? $signed(
    _man_buffer_two_complement_1_T_11) : $signed(_man_buffer_two_complement_1_T_12); // @[bundled_block_division.scala 68:51]
  wire [18:0] _man_buffer_two_complement_1_T_16 = $signed(man_buffer_two_complement_2) + $signed(
    _man_buffer_two_complement_1_T_13); // @[bundled_block_division.scala 68:46]
  wire [18:0] _man_buffer_two_complement_1_T_20 = ~man_buffer_two_complement_2; // @[bundled_block_division.scala 73:21]
  wire [18:0] _man_buffer_two_complement_1_T_23 = $signed(_man_buffer_two_complement_1_T_20) + 19'sh1; // @[bundled_block_division.scala 73:57]
  wire [18:0] _man_buffer_two_complement_1_T_24 = $signed(_man_buffer_two_complement_1_T_23) >>> exp_difference_1; // @[bundled_block_division.scala 73:64]
  wire [18:0] _man_buffer_two_complement_1_T_27 = 19'sh0 - $signed(_man_buffer_two_complement_1_T_24); // @[bundled_block_division.scala 73:17]
  wire [18:0] _man_buffer_two_complement_1_T_28 = $signed(man_buffer_two_complement_2) >>> exp_difference_1; // @[bundled_block_division.scala 74:47]
  wire [18:0] _man_buffer_two_complement_1_T_29 = man_buffer_two_complement_2[18] ? $signed(
    _man_buffer_two_complement_1_T_27) : $signed(_man_buffer_two_complement_1_T_28); // @[bundled_block_division.scala 72:55]
  wire [18:0] _man_buffer_two_complement_1_T_32 = $signed(man_buffer_two_complement_3) + $signed(
    _man_buffer_two_complement_1_T_29); // @[bundled_block_division.scala 72:50]
  reg [18:0] sign_man_hbfp; // @[bundled_block_division.scala 88:30]
  wire [18:0] _sign_man_hbfp_T_3 = {1'h0,man_buffer_two_complement_0[17:0]}; // @[bundled_block_division.scala 95:11]
  wire [18:0] _sign_man_hbfp_T_4 = ~_sign_man_hbfp_T_3; // @[bundled_block_division.scala 95:5]
  wire [18:0] _sign_man_hbfp_T_6 = _sign_man_hbfp_T_4 + 19'h1; // @[bundled_block_division.scala 98:16]
  reg [7:0] right_shift; // @[bundled_block_division.scala 102:28]
  reg [7:0] actual_shift; // @[bundled_block_division.scala 103:29]
  wire [7:0] _GEN_17 = {{4'd0}, sign_man_hbfp[13:10]}; // @[Bitwise.scala 108:31]
  wire [7:0] _buf_T_5 = _GEN_17 & 8'hf; // @[Bitwise.scala 108:31]
  wire [7:0] _buf_T_7 = {sign_man_hbfp[9:6], 4'h0}; // @[Bitwise.scala 108:70]
  wire [7:0] _buf_T_9 = _buf_T_7 & 8'hf0; // @[Bitwise.scala 108:80]
  wire [7:0] _buf_T_10 = _buf_T_5 | _buf_T_9; // @[Bitwise.scala 108:39]
  wire [7:0] _GEN_18 = {{2'd0}, _buf_T_10[7:2]}; // @[Bitwise.scala 108:31]
  wire [7:0] _buf_T_15 = _GEN_18 & 8'h33; // @[Bitwise.scala 108:31]
  wire [7:0] _buf_T_17 = {_buf_T_10[5:0], 2'h0}; // @[Bitwise.scala 108:70]
  wire [7:0] _buf_T_19 = _buf_T_17 & 8'hcc; // @[Bitwise.scala 108:80]
  wire [7:0] _buf_T_20 = _buf_T_15 | _buf_T_19; // @[Bitwise.scala 108:39]
  wire [7:0] _GEN_19 = {{1'd0}, _buf_T_20[7:1]}; // @[Bitwise.scala 108:31]
  wire [7:0] _buf_T_25 = _GEN_19 & 8'h55; // @[Bitwise.scala 108:31]
  wire [7:0] _buf_T_27 = {_buf_T_20[6:0], 1'h0}; // @[Bitwise.scala 108:70]
  wire [7:0] _buf_T_29 = _buf_T_27 & 8'haa; // @[Bitwise.scala 108:80]
  wire [7:0] _buf_T_30 = _buf_T_25 | _buf_T_29; // @[Bitwise.scala 108:39]
  wire [12:0] buf_ = {1'h0,_buf_T_30,sign_man_hbfp[14],sign_man_hbfp[15],sign_man_hbfp[16],sign_man_hbfp[17]}; // @[bundled_block_division.scala 104:17]
  wire [3:0] _right_shift_T_13 = buf_[11] ? 4'hb : 4'hc; // @[Mux.scala 47:70]
  wire [3:0] _right_shift_T_14 = buf_[10] ? 4'ha : _right_shift_T_13; // @[Mux.scala 47:70]
  wire [3:0] _right_shift_T_15 = buf_[9] ? 4'h9 : _right_shift_T_14; // @[Mux.scala 47:70]
  wire [3:0] _right_shift_T_16 = buf_[8] ? 4'h8 : _right_shift_T_15; // @[Mux.scala 47:70]
  wire [3:0] _right_shift_T_17 = buf_[7] ? 4'h7 : _right_shift_T_16; // @[Mux.scala 47:70]
  wire [3:0] _right_shift_T_18 = buf_[6] ? 4'h6 : _right_shift_T_17; // @[Mux.scala 47:70]
  wire [3:0] _right_shift_T_19 = buf_[5] ? 4'h5 : _right_shift_T_18; // @[Mux.scala 47:70]
  wire [3:0] _right_shift_T_20 = buf_[4] ? 4'h4 : _right_shift_T_19; // @[Mux.scala 47:70]
  wire [3:0] _right_shift_T_21 = buf_[3] ? 4'h3 : _right_shift_T_20; // @[Mux.scala 47:70]
  wire [3:0] _right_shift_T_22 = buf_[2] ? 4'h2 : _right_shift_T_21; // @[Mux.scala 47:70]
  wire [3:0] _right_shift_T_23 = buf_[1] ? 4'h1 : _right_shift_T_22; // @[Mux.scala 47:70]
  wire [3:0] _right_shift_T_24 = buf_[0] ? 4'h0 : _right_shift_T_23; // @[Mux.scala 47:70]
  wire [7:0] _actual_shift_T_1 = 8'h11 - right_shift; // @[bundled_block_division.scala 110:75]
  wire [7:0] _actual_shift_T_3 = _actual_shift_T_1 - 8'h5; // @[bundled_block_division.scala 110:89]
  wire [18:0] man_out_shifted = sign_man_hbfp >> actual_shift; // @[bundled_block_division.scala 112:39]
  wire [8:0] _GEN_20 = {{1'd0}, actual_shift}; // @[bundled_block_division.scala 114:31]
  wire [9:0] exp_actual = exp_buffer_0 + _GEN_20; // @[bundled_block_division.scala 114:31]
  wire [8:0] _io_result_tree_T_2 = {man_buffer_two_complement_0[18],exp_actual[9:2]}; // @[bundled_block_division.scala 118:5]
  assign io_result_tree = {_io_result_tree_T_2,man_out_shifted[5:0]}; // @[bundled_block_division.scala 118:27]
  always @(posedge clock) begin
    if (reset) begin // @[bundled_block_division.scala 26:60]
      exp_buffer_0 <= 9'h0; // @[bundled_block_division.scala 26:60]
    end else if (io_in_control_signal & enable) begin // @[bundled_block_division.scala 49:50]
      if (!(_exp_buffer_0_T)) begin // @[bundled_block_division.scala 56:33]
        exp_buffer_0 <= exp_buffer_1;
      end
    end else if (~io_in_control_signal) begin // @[bundled_block_division.scala 33:37]
      exp_buffer_0 <= io_in_exps_0; // @[bundled_block_division.scala 37:21]
    end
    if (reset) begin // @[bundled_block_division.scala 26:60]
      exp_buffer_1 <= 9'h0; // @[bundled_block_division.scala 26:60]
    end else if (io_in_control_signal & enable) begin // @[bundled_block_division.scala 49:50]
      if (_exp_buffer_1_T) begin // @[bundled_block_division.scala 56:33]
        exp_buffer_1 <= exp_buffer_2;
      end else begin
        exp_buffer_1 <= exp_buffer_3;
      end
    end else if (~io_in_control_signal) begin // @[bundled_block_division.scala 33:37]
      exp_buffer_1 <= io_in_exps_1; // @[bundled_block_division.scala 37:21]
    end
    if (reset) begin // @[bundled_block_division.scala 26:60]
      exp_buffer_2 <= 9'h0; // @[bundled_block_division.scala 26:60]
    end else if (~io_in_control_signal) begin // @[bundled_block_division.scala 33:37]
      exp_buffer_2 <= io_in_exps_2; // @[bundled_block_division.scala 37:21]
    end
    if (reset) begin // @[bundled_block_division.scala 26:60]
      exp_buffer_3 <= 9'h0; // @[bundled_block_division.scala 26:60]
    end else if (~io_in_control_signal) begin // @[bundled_block_division.scala 33:37]
      exp_buffer_3 <= io_in_exps_3; // @[bundled_block_division.scala 37:21]
    end
    if (reset) begin // @[bundled_block_division.scala 28:12]
      man_buffer_two_complement_0 <= 19'sh0; // @[bundled_block_division.scala 28:12]
    end else if (io_in_control_signal & enable) begin // @[bundled_block_division.scala 49:50]
      if (_exp_buffer_0_T) begin // @[bundled_block_division.scala 66:46]
        man_buffer_two_complement_0 <= _man_buffer_two_complement_0_T_16;
      end else begin
        man_buffer_two_complement_0 <= _man_buffer_two_complement_0_T_32;
      end
    end else if (~io_in_control_signal) begin // @[bundled_block_division.scala 33:37]
      man_buffer_two_complement_0 <= {{3{io_in_sign_man_0[15]}},io_in_sign_man_0}; // @[bundled_block_division.scala 38:36]
    end
    if (reset) begin // @[bundled_block_division.scala 28:12]
      man_buffer_two_complement_1 <= 19'sh0; // @[bundled_block_division.scala 28:12]
    end else if (io_in_control_signal & enable) begin // @[bundled_block_division.scala 49:50]
      if (_exp_buffer_1_T) begin // @[bundled_block_division.scala 66:46]
        man_buffer_two_complement_1 <= _man_buffer_two_complement_1_T_16;
      end else begin
        man_buffer_two_complement_1 <= _man_buffer_two_complement_1_T_32;
      end
    end else if (~io_in_control_signal) begin // @[bundled_block_division.scala 33:37]
      man_buffer_two_complement_1 <= {{3{io_in_sign_man_1[15]}},io_in_sign_man_1}; // @[bundled_block_division.scala 38:36]
    end
    if (reset) begin // @[bundled_block_division.scala 28:12]
      man_buffer_two_complement_2 <= 19'sh0; // @[bundled_block_division.scala 28:12]
    end else if (~io_in_control_signal) begin // @[bundled_block_division.scala 33:37]
      man_buffer_two_complement_2 <= {{3{io_in_sign_man_2[15]}},io_in_sign_man_2}; // @[bundled_block_division.scala 38:36]
    end
    if (reset) begin // @[bundled_block_division.scala 28:12]
      man_buffer_two_complement_3 <= 19'sh0; // @[bundled_block_division.scala 28:12]
    end else if (~io_in_control_signal) begin // @[bundled_block_division.scala 33:37]
      man_buffer_two_complement_3 <= {{3{io_in_sign_man_3[15]}},io_in_sign_man_3}; // @[bundled_block_division.scala 38:36]
    end
    if (reset) begin // @[bundled_block_division.scala 42:18]
      v <= 10'h0; // @[bundled_block_division.scala 42:18]
    end else if (io_in_control_signal & enable) begin // @[bundled_block_division.scala 49:50]
      v <= _v_T_1; // @[bundled_block_division.scala 53:11]
    end
    if (io_in_control_signal & enable) begin // @[bundled_block_division.scala 49:50]
      if (v == 10'h1) begin // @[bundled_block_division.scala 81:64]
        enable <= 1'h0; // @[bundled_block_division.scala 82:16]
      end else if (v == 10'h1) begin // @[bundled_block_division.scala 81:64]
        enable <= 1'h0; // @[bundled_block_division.scala 82:16]
      end else begin
        enable <= _GEN_8;
      end
    end else begin
      enable <= _GEN_8;
    end
    if (reset) begin // @[bundled_block_division.scala 88:30]
      sign_man_hbfp <= 19'h0; // @[bundled_block_division.scala 88:30]
    end else if (man_buffer_two_complement_0[18]) begin // @[bundled_block_division.scala 91:23]
      sign_man_hbfp <= _sign_man_hbfp_T_6;
    end else begin
      sign_man_hbfp <= man_buffer_two_complement_0;
    end
    if (reset) begin // @[bundled_block_division.scala 102:28]
      right_shift <= 8'h0; // @[bundled_block_division.scala 102:28]
    end else begin
      right_shift <= {{4'd0}, _right_shift_T_24}; // @[bundled_block_division.scala 108:15]
    end
    if (reset) begin // @[bundled_block_division.scala 103:29]
      actual_shift <= 8'h0; // @[bundled_block_division.scala 103:29]
    end else begin
      actual_shift <= _actual_shift_T_3; // @[bundled_block_division.scala 110:16]
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
  exp_buffer_0 = _RAND_0[8:0];
  _RAND_1 = {1{`RANDOM}};
  exp_buffer_1 = _RAND_1[8:0];
  _RAND_2 = {1{`RANDOM}};
  exp_buffer_2 = _RAND_2[8:0];
  _RAND_3 = {1{`RANDOM}};
  exp_buffer_3 = _RAND_3[8:0];
  _RAND_4 = {1{`RANDOM}};
  man_buffer_two_complement_0 = _RAND_4[18:0];
  _RAND_5 = {1{`RANDOM}};
  man_buffer_two_complement_1 = _RAND_5[18:0];
  _RAND_6 = {1{`RANDOM}};
  man_buffer_two_complement_2 = _RAND_6[18:0];
  _RAND_7 = {1{`RANDOM}};
  man_buffer_two_complement_3 = _RAND_7[18:0];
  _RAND_8 = {1{`RANDOM}};
  v = _RAND_8[9:0];
  _RAND_9 = {1{`RANDOM}};
  enable = _RAND_9[0:0];
  _RAND_10 = {1{`RANDOM}};
  sign_man_hbfp = _RAND_10[18:0];
  _RAND_11 = {1{`RANDOM}};
  right_shift = _RAND_11[7:0];
  _RAND_12 = {1{`RANDOM}};
  actual_shift = _RAND_12[7:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module Improved_HbfpTensor(
  input         clock,
  input         reset,
  input  [5:0]  io_in_a_man_0,
  input  [5:0]  io_in_a_man_1,
  input  [5:0]  io_in_a_man_2,
  input  [5:0]  io_in_a_man_3,
  input  [5:0]  io_in_a_man_4,
  input  [5:0]  io_in_a_man_5,
  input  [5:0]  io_in_a_man_6,
  input  [5:0]  io_in_a_man_7,
  input  [5:0]  io_in_a_man_8,
  input  [5:0]  io_in_a_man_9,
  input  [5:0]  io_in_a_man_10,
  input  [5:0]  io_in_a_man_11,
  input  [5:0]  io_in_a_man_12,
  input  [5:0]  io_in_a_man_13,
  input  [5:0]  io_in_a_man_14,
  input  [5:0]  io_in_a_man_15,
  input         io_in_a_sign_0,
  input         io_in_a_sign_1,
  input         io_in_a_sign_2,
  input         io_in_a_sign_3,
  input         io_in_a_sign_4,
  input         io_in_a_sign_5,
  input         io_in_a_sign_6,
  input         io_in_a_sign_7,
  input         io_in_a_sign_8,
  input         io_in_a_sign_9,
  input         io_in_a_sign_10,
  input         io_in_a_sign_11,
  input         io_in_a_sign_12,
  input         io_in_a_sign_13,
  input         io_in_a_sign_14,
  input         io_in_a_sign_15,
  input  [7:0]  io_in_a_exp_0,
  input  [7:0]  io_in_a_exp_1,
  input  [7:0]  io_in_a_exp_2,
  input  [7:0]  io_in_a_exp_3,
  input  [5:0]  io_in_b_man_0,
  input  [5:0]  io_in_b_man_1,
  input  [5:0]  io_in_b_man_2,
  input  [5:0]  io_in_b_man_3,
  input  [5:0]  io_in_b_man_4,
  input  [5:0]  io_in_b_man_5,
  input  [5:0]  io_in_b_man_6,
  input  [5:0]  io_in_b_man_7,
  input  [5:0]  io_in_b_man_8,
  input  [5:0]  io_in_b_man_9,
  input  [5:0]  io_in_b_man_10,
  input  [5:0]  io_in_b_man_11,
  input  [5:0]  io_in_b_man_12,
  input  [5:0]  io_in_b_man_13,
  input  [5:0]  io_in_b_man_14,
  input  [5:0]  io_in_b_man_15,
  input         io_in_b_sign_0,
  input         io_in_b_sign_1,
  input         io_in_b_sign_2,
  input         io_in_b_sign_3,
  input         io_in_b_sign_4,
  input         io_in_b_sign_5,
  input         io_in_b_sign_6,
  input         io_in_b_sign_7,
  input         io_in_b_sign_8,
  input         io_in_b_sign_9,
  input         io_in_b_sign_10,
  input         io_in_b_sign_11,
  input         io_in_b_sign_12,
  input         io_in_b_sign_13,
  input         io_in_b_sign_14,
  input         io_in_b_sign_15,
  input  [7:0]  io_in_b_exp_0,
  input  [7:0]  io_in_b_exp_1,
  input  [7:0]  io_in_b_exp_2,
  input  [7:0]  io_in_b_exp_3,
  input         io_in_control,
  input         io_in_control2,
  output [14:0] io_result
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
`endif // RANDOMIZE_REG_INIT
  wire  adderTreeInst_clock; // @[bundled_block_division.scala 180:29]
  wire  adderTreeInst_reset; // @[bundled_block_division.scala 180:29]
  wire [15:0] adderTreeInst_io_in_sign_man_0; // @[bundled_block_division.scala 180:29]
  wire [15:0] adderTreeInst_io_in_sign_man_1; // @[bundled_block_division.scala 180:29]
  wire [15:0] adderTreeInst_io_in_sign_man_2; // @[bundled_block_division.scala 180:29]
  wire [15:0] adderTreeInst_io_in_sign_man_3; // @[bundled_block_division.scala 180:29]
  wire [8:0] adderTreeInst_io_in_exps_0; // @[bundled_block_division.scala 180:29]
  wire [8:0] adderTreeInst_io_in_exps_1; // @[bundled_block_division.scala 180:29]
  wire [8:0] adderTreeInst_io_in_exps_2; // @[bundled_block_division.scala 180:29]
  wire [8:0] adderTreeInst_io_in_exps_3; // @[bundled_block_division.scala 180:29]
  wire  adderTreeInst_io_in_control_signal; // @[bundled_block_division.scala 180:29]
  wire  adderTreeInst_io_in_control_signal2; // @[bundled_block_division.scala 180:29]
  wire [14:0] adderTreeInst_io_result_tree; // @[bundled_block_division.scala 180:29]
  reg [8:0] exp_output_0; // @[bundled_block_division.scala 138:60]
  reg [8:0] exp_output_1; // @[bundled_block_division.scala 138:60]
  reg [8:0] exp_output_2; // @[bundled_block_division.scala 138:60]
  reg [8:0] exp_output_3; // @[bundled_block_division.scala 138:60]
  reg [15:0] acc_0; // @[bundled_block_division.scala 139:53]
  reg [15:0] acc_1; // @[bundled_block_division.scala 139:53]
  reg [15:0] acc_2; // @[bundled_block_division.scala 139:53]
  reg [15:0] acc_3; // @[bundled_block_division.scala 139:53]
  wire [8:0] _exp_output_0_T = io_in_a_exp_0 + io_in_b_exp_0; // @[bundled_block_division.scala 142:37]
  reg [11:0] dotProductRegs__0; // @[bundled_block_division.scala 143:29]
  reg [11:0] dotProductRegs__1; // @[bundled_block_division.scala 143:29]
  reg [11:0] dotProductRegs__2; // @[bundled_block_division.scala 143:29]
  reg [11:0] dotProductRegs__3; // @[bundled_block_division.scala 143:29]
  reg  signs__0; // @[bundled_block_division.scala 144:20]
  reg  signs__1; // @[bundled_block_division.scala 144:20]
  reg  signs__2; // @[bundled_block_division.scala 144:20]
  reg  signs__3; // @[bundled_block_division.scala 144:20]
  reg [12:0] two_complement__0; // @[bundled_block_division.scala 145:29]
  reg [12:0] two_complement__1; // @[bundled_block_division.scala 145:29]
  reg [12:0] two_complement__2; // @[bundled_block_division.scala 145:29]
  reg [12:0] two_complement__3; // @[bundled_block_division.scala 145:29]
  reg [12:0] two_complement_buffer__0; // @[bundled_block_division.scala 146:36]
  reg [12:0] two_complement_buffer__1; // @[bundled_block_division.scala 146:36]
  reg [12:0] two_complement_buffer__2; // @[bundled_block_division.scala 146:36]
  reg [12:0] two_complement_buffer__3; // @[bundled_block_division.scala 146:36]
  reg [5:0] multiplierReg; // @[bundled_block_division.scala 149:34]
  reg [5:0] multiplierReg2; // @[bundled_block_division.scala 150:35]
  reg  signReg; // @[bundled_block_division.scala 152:28]
  wire [7:0] _multiplication_T_2 = multiplierReg[3:0] * multiplierReg2[3:0]; // @[bundled_block_division.scala 156:47]
  wire [3:0] _multiplication_T_4 = {2'h0,multiplierReg[5:4]}; // @[bundled_block_division.scala 156:83]
  wire [7:0] _multiplication_T_6 = _multiplication_T_4 * multiplierReg2[3:0]; // @[bundled_block_division.scala 156:106]
  wire [11:0] _GEN_0 = {_multiplication_T_6, 4'h0}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _multiplication_T_7 = {{3'd0}, _GEN_0}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _GEN_1 = {{7'd0}, _multiplication_T_2}; // @[bundled_block_division.scala 156:69]
  wire [15:0] _multiplication_T_8 = _GEN_1 + _multiplication_T_7; // @[bundled_block_division.scala 156:69]
  wire [3:0] _multiplication_T_11 = {2'h0,multiplierReg2[5:4]}; // @[bundled_block_division.scala 156:172]
  wire [7:0] _multiplication_T_12 = multiplierReg[3:0] * _multiplication_T_11; // @[bundled_block_division.scala 156:161]
  wire [11:0] _GEN_2 = {_multiplication_T_12, 4'h0}; // @[bundled_block_division.scala 156:197]
  wire [14:0] _multiplication_T_13 = {{3'd0}, _GEN_2}; // @[bundled_block_division.scala 156:197]
  wire [15:0] _GEN_3 = {{1'd0}, _multiplication_T_13}; // @[bundled_block_division.scala 156:137]
  wire [16:0] _multiplication_T_14 = _multiplication_T_8 + _GEN_3; // @[bundled_block_division.scala 156:137]
  wire [7:0] _multiplication_T_19 = _multiplication_T_4 * _multiplication_T_11; // @[bundled_block_division.scala 156:240]
  wire [15:0] _GEN_4 = {_multiplication_T_19, 8'h0}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _multiplication_T_20 = {{7'd0}, _GEN_4}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _GEN_5 = {{6'd0}, _multiplication_T_14}; // @[bundled_block_division.scala 156:205]
  wire [23:0] multiplication = _GEN_5 + _multiplication_T_20; // @[bundled_block_division.scala 156:205]
  wire [12:0] _two_complement_0_T_1 = {1'h0,dotProductRegs__0}; // @[bundled_block_division.scala 159:55]
  wire [12:0] _two_complement_0_T_2 = ~_two_complement_0_T_1; // @[bundled_block_division.scala 159:49]
  wire [12:0] _two_complement_0_T_4 = _two_complement_0_T_2 + 13'h1; // @[bundled_block_division.scala 159:77]
  reg [5:0] multiplierReg_1; // @[bundled_block_division.scala 149:34]
  reg [5:0] multiplierReg2_1; // @[bundled_block_division.scala 150:35]
  reg  signReg_1; // @[bundled_block_division.scala 152:28]
  wire [7:0] _multiplication_T_23 = multiplierReg_1[3:0] * multiplierReg2_1[3:0]; // @[bundled_block_division.scala 156:47]
  wire [3:0] _multiplication_T_25 = {2'h0,multiplierReg_1[5:4]}; // @[bundled_block_division.scala 156:83]
  wire [7:0] _multiplication_T_27 = _multiplication_T_25 * multiplierReg2_1[3:0]; // @[bundled_block_division.scala 156:106]
  wire [11:0] _GEN_6 = {_multiplication_T_27, 4'h0}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _multiplication_T_28 = {{3'd0}, _GEN_6}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _GEN_7 = {{7'd0}, _multiplication_T_23}; // @[bundled_block_division.scala 156:69]
  wire [15:0] _multiplication_T_29 = _GEN_7 + _multiplication_T_28; // @[bundled_block_division.scala 156:69]
  wire [3:0] _multiplication_T_32 = {2'h0,multiplierReg2_1[5:4]}; // @[bundled_block_division.scala 156:172]
  wire [7:0] _multiplication_T_33 = multiplierReg_1[3:0] * _multiplication_T_32; // @[bundled_block_division.scala 156:161]
  wire [11:0] _GEN_8 = {_multiplication_T_33, 4'h0}; // @[bundled_block_division.scala 156:197]
  wire [14:0] _multiplication_T_34 = {{3'd0}, _GEN_8}; // @[bundled_block_division.scala 156:197]
  wire [15:0] _GEN_9 = {{1'd0}, _multiplication_T_34}; // @[bundled_block_division.scala 156:137]
  wire [16:0] _multiplication_T_35 = _multiplication_T_29 + _GEN_9; // @[bundled_block_division.scala 156:137]
  wire [7:0] _multiplication_T_40 = _multiplication_T_25 * _multiplication_T_32; // @[bundled_block_division.scala 156:240]
  wire [15:0] _GEN_10 = {_multiplication_T_40, 8'h0}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _multiplication_T_41 = {{7'd0}, _GEN_10}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _GEN_11 = {{6'd0}, _multiplication_T_35}; // @[bundled_block_division.scala 156:205]
  wire [23:0] multiplication_1 = _GEN_11 + _multiplication_T_41; // @[bundled_block_division.scala 156:205]
  wire [12:0] _two_complement_1_T_1 = {1'h0,dotProductRegs__1}; // @[bundled_block_division.scala 159:55]
  wire [12:0] _two_complement_1_T_2 = ~_two_complement_1_T_1; // @[bundled_block_division.scala 159:49]
  wire [12:0] _two_complement_1_T_4 = _two_complement_1_T_2 + 13'h1; // @[bundled_block_division.scala 159:77]
  reg [5:0] multiplierReg_2; // @[bundled_block_division.scala 149:34]
  reg [5:0] multiplierReg2_2; // @[bundled_block_division.scala 150:35]
  reg  signReg_2; // @[bundled_block_division.scala 152:28]
  wire [7:0] _multiplication_T_44 = multiplierReg_2[3:0] * multiplierReg2_2[3:0]; // @[bundled_block_division.scala 156:47]
  wire [3:0] _multiplication_T_46 = {2'h0,multiplierReg_2[5:4]}; // @[bundled_block_division.scala 156:83]
  wire [7:0] _multiplication_T_48 = _multiplication_T_46 * multiplierReg2_2[3:0]; // @[bundled_block_division.scala 156:106]
  wire [11:0] _GEN_12 = {_multiplication_T_48, 4'h0}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _multiplication_T_49 = {{3'd0}, _GEN_12}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _GEN_13 = {{7'd0}, _multiplication_T_44}; // @[bundled_block_division.scala 156:69]
  wire [15:0] _multiplication_T_50 = _GEN_13 + _multiplication_T_49; // @[bundled_block_division.scala 156:69]
  wire [3:0] _multiplication_T_53 = {2'h0,multiplierReg2_2[5:4]}; // @[bundled_block_division.scala 156:172]
  wire [7:0] _multiplication_T_54 = multiplierReg_2[3:0] * _multiplication_T_53; // @[bundled_block_division.scala 156:161]
  wire [11:0] _GEN_14 = {_multiplication_T_54, 4'h0}; // @[bundled_block_division.scala 156:197]
  wire [14:0] _multiplication_T_55 = {{3'd0}, _GEN_14}; // @[bundled_block_division.scala 156:197]
  wire [15:0] _GEN_15 = {{1'd0}, _multiplication_T_55}; // @[bundled_block_division.scala 156:137]
  wire [16:0] _multiplication_T_56 = _multiplication_T_50 + _GEN_15; // @[bundled_block_division.scala 156:137]
  wire [7:0] _multiplication_T_61 = _multiplication_T_46 * _multiplication_T_53; // @[bundled_block_division.scala 156:240]
  wire [15:0] _GEN_16 = {_multiplication_T_61, 8'h0}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _multiplication_T_62 = {{7'd0}, _GEN_16}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _GEN_17 = {{6'd0}, _multiplication_T_56}; // @[bundled_block_division.scala 156:205]
  wire [23:0] multiplication_2 = _GEN_17 + _multiplication_T_62; // @[bundled_block_division.scala 156:205]
  wire [12:0] _two_complement_2_T_1 = {1'h0,dotProductRegs__2}; // @[bundled_block_division.scala 159:55]
  wire [12:0] _two_complement_2_T_2 = ~_two_complement_2_T_1; // @[bundled_block_division.scala 159:49]
  wire [12:0] _two_complement_2_T_4 = _two_complement_2_T_2 + 13'h1; // @[bundled_block_division.scala 159:77]
  reg [5:0] multiplierReg_3; // @[bundled_block_division.scala 149:34]
  reg [5:0] multiplierReg2_3; // @[bundled_block_division.scala 150:35]
  reg  signReg_3; // @[bundled_block_division.scala 152:28]
  wire [7:0] _multiplication_T_65 = multiplierReg_3[3:0] * multiplierReg2_3[3:0]; // @[bundled_block_division.scala 156:47]
  wire [3:0] _multiplication_T_67 = {2'h0,multiplierReg_3[5:4]}; // @[bundled_block_division.scala 156:83]
  wire [7:0] _multiplication_T_69 = _multiplication_T_67 * multiplierReg2_3[3:0]; // @[bundled_block_division.scala 156:106]
  wire [11:0] _GEN_18 = {_multiplication_T_69, 4'h0}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _multiplication_T_70 = {{3'd0}, _GEN_18}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _GEN_19 = {{7'd0}, _multiplication_T_65}; // @[bundled_block_division.scala 156:69]
  wire [15:0] _multiplication_T_71 = _GEN_19 + _multiplication_T_70; // @[bundled_block_division.scala 156:69]
  wire [3:0] _multiplication_T_74 = {2'h0,multiplierReg2_3[5:4]}; // @[bundled_block_division.scala 156:172]
  wire [7:0] _multiplication_T_75 = multiplierReg_3[3:0] * _multiplication_T_74; // @[bundled_block_division.scala 156:161]
  wire [11:0] _GEN_20 = {_multiplication_T_75, 4'h0}; // @[bundled_block_division.scala 156:197]
  wire [14:0] _multiplication_T_76 = {{3'd0}, _GEN_20}; // @[bundled_block_division.scala 156:197]
  wire [15:0] _GEN_21 = {{1'd0}, _multiplication_T_76}; // @[bundled_block_division.scala 156:137]
  wire [16:0] _multiplication_T_77 = _multiplication_T_71 + _GEN_21; // @[bundled_block_division.scala 156:137]
  wire [7:0] _multiplication_T_82 = _multiplication_T_67 * _multiplication_T_74; // @[bundled_block_division.scala 156:240]
  wire [15:0] _GEN_22 = {_multiplication_T_82, 8'h0}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _multiplication_T_83 = {{7'd0}, _GEN_22}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _GEN_23 = {{6'd0}, _multiplication_T_77}; // @[bundled_block_division.scala 156:205]
  wire [23:0] multiplication_3 = _GEN_23 + _multiplication_T_83; // @[bundled_block_division.scala 156:205]
  wire [12:0] _two_complement_3_T_1 = {1'h0,dotProductRegs__3}; // @[bundled_block_division.scala 159:55]
  wire [12:0] _two_complement_3_T_2 = ~_two_complement_3_T_1; // @[bundled_block_division.scala 159:49]
  wire [12:0] _two_complement_3_T_4 = _two_complement_3_T_2 + 13'h1; // @[bundled_block_division.scala 159:77]
  wire [13:0] _acc_0_T = $signed(two_complement_buffer__0) + $signed(two_complement_buffer__1); // @[bundled_block_division.scala 177:46]
  wire [13:0] _GEN_24 = {{1{two_complement_buffer__2[12]}},two_complement_buffer__2}; // @[bundled_block_division.scala 177:46]
  wire [14:0] _acc_0_T_1 = $signed(_acc_0_T) + $signed(_GEN_24); // @[bundled_block_division.scala 177:46]
  wire [14:0] _GEN_25 = {{2{two_complement_buffer__3[12]}},two_complement_buffer__3}; // @[bundled_block_division.scala 177:46]
  wire [15:0] _acc_0_T_2 = $signed(_acc_0_T_1) + $signed(_GEN_25); // @[bundled_block_division.scala 177:46]
  wire [8:0] _exp_output_1_T = io_in_a_exp_1 + io_in_b_exp_1; // @[bundled_block_division.scala 142:37]
  reg [11:0] dotProductRegs_1_0; // @[bundled_block_division.scala 143:29]
  reg [11:0] dotProductRegs_1_1; // @[bundled_block_division.scala 143:29]
  reg [11:0] dotProductRegs_1_2; // @[bundled_block_division.scala 143:29]
  reg [11:0] dotProductRegs_1_3; // @[bundled_block_division.scala 143:29]
  reg  signs_1_0; // @[bundled_block_division.scala 144:20]
  reg  signs_1_1; // @[bundled_block_division.scala 144:20]
  reg  signs_1_2; // @[bundled_block_division.scala 144:20]
  reg  signs_1_3; // @[bundled_block_division.scala 144:20]
  reg [12:0] two_complement_1_0; // @[bundled_block_division.scala 145:29]
  reg [12:0] two_complement_1_1; // @[bundled_block_division.scala 145:29]
  reg [12:0] two_complement_1_2; // @[bundled_block_division.scala 145:29]
  reg [12:0] two_complement_1_3; // @[bundled_block_division.scala 145:29]
  reg [12:0] two_complement_buffer_1_0; // @[bundled_block_division.scala 146:36]
  reg [12:0] two_complement_buffer_1_1; // @[bundled_block_division.scala 146:36]
  reg [12:0] two_complement_buffer_1_2; // @[bundled_block_division.scala 146:36]
  reg [12:0] two_complement_buffer_1_3; // @[bundled_block_division.scala 146:36]
  reg [5:0] multiplierReg_4; // @[bundled_block_division.scala 149:34]
  reg [5:0] multiplierReg2_4; // @[bundled_block_division.scala 150:35]
  reg  signReg_4; // @[bundled_block_division.scala 152:28]
  wire [7:0] _multiplication_T_86 = multiplierReg_4[3:0] * multiplierReg2_4[3:0]; // @[bundled_block_division.scala 156:47]
  wire [3:0] _multiplication_T_88 = {2'h0,multiplierReg_4[5:4]}; // @[bundled_block_division.scala 156:83]
  wire [7:0] _multiplication_T_90 = _multiplication_T_88 * multiplierReg2_4[3:0]; // @[bundled_block_division.scala 156:106]
  wire [11:0] _GEN_26 = {_multiplication_T_90, 4'h0}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _multiplication_T_91 = {{3'd0}, _GEN_26}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _GEN_27 = {{7'd0}, _multiplication_T_86}; // @[bundled_block_division.scala 156:69]
  wire [15:0] _multiplication_T_92 = _GEN_27 + _multiplication_T_91; // @[bundled_block_division.scala 156:69]
  wire [3:0] _multiplication_T_95 = {2'h0,multiplierReg2_4[5:4]}; // @[bundled_block_division.scala 156:172]
  wire [7:0] _multiplication_T_96 = multiplierReg_4[3:0] * _multiplication_T_95; // @[bundled_block_division.scala 156:161]
  wire [11:0] _GEN_28 = {_multiplication_T_96, 4'h0}; // @[bundled_block_division.scala 156:197]
  wire [14:0] _multiplication_T_97 = {{3'd0}, _GEN_28}; // @[bundled_block_division.scala 156:197]
  wire [15:0] _GEN_29 = {{1'd0}, _multiplication_T_97}; // @[bundled_block_division.scala 156:137]
  wire [16:0] _multiplication_T_98 = _multiplication_T_92 + _GEN_29; // @[bundled_block_division.scala 156:137]
  wire [7:0] _multiplication_T_103 = _multiplication_T_88 * _multiplication_T_95; // @[bundled_block_division.scala 156:240]
  wire [15:0] _GEN_30 = {_multiplication_T_103, 8'h0}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _multiplication_T_104 = {{7'd0}, _GEN_30}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _GEN_31 = {{6'd0}, _multiplication_T_98}; // @[bundled_block_division.scala 156:205]
  wire [23:0] multiplication_4 = _GEN_31 + _multiplication_T_104; // @[bundled_block_division.scala 156:205]
  wire [12:0] _two_complement_0_T_8 = {1'h0,dotProductRegs_1_0}; // @[bundled_block_division.scala 159:55]
  wire [12:0] _two_complement_0_T_9 = ~_two_complement_0_T_8; // @[bundled_block_division.scala 159:49]
  wire [12:0] _two_complement_0_T_11 = _two_complement_0_T_9 + 13'h1; // @[bundled_block_division.scala 159:77]
  reg [5:0] multiplierReg_5; // @[bundled_block_division.scala 149:34]
  reg [5:0] multiplierReg2_5; // @[bundled_block_division.scala 150:35]
  reg  signReg_5; // @[bundled_block_division.scala 152:28]
  wire [7:0] _multiplication_T_107 = multiplierReg_5[3:0] * multiplierReg2_5[3:0]; // @[bundled_block_division.scala 156:47]
  wire [3:0] _multiplication_T_109 = {2'h0,multiplierReg_5[5:4]}; // @[bundled_block_division.scala 156:83]
  wire [7:0] _multiplication_T_111 = _multiplication_T_109 * multiplierReg2_5[3:0]; // @[bundled_block_division.scala 156:106]
  wire [11:0] _GEN_32 = {_multiplication_T_111, 4'h0}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _multiplication_T_112 = {{3'd0}, _GEN_32}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _GEN_33 = {{7'd0}, _multiplication_T_107}; // @[bundled_block_division.scala 156:69]
  wire [15:0] _multiplication_T_113 = _GEN_33 + _multiplication_T_112; // @[bundled_block_division.scala 156:69]
  wire [3:0] _multiplication_T_116 = {2'h0,multiplierReg2_5[5:4]}; // @[bundled_block_division.scala 156:172]
  wire [7:0] _multiplication_T_117 = multiplierReg_5[3:0] * _multiplication_T_116; // @[bundled_block_division.scala 156:161]
  wire [11:0] _GEN_34 = {_multiplication_T_117, 4'h0}; // @[bundled_block_division.scala 156:197]
  wire [14:0] _multiplication_T_118 = {{3'd0}, _GEN_34}; // @[bundled_block_division.scala 156:197]
  wire [15:0] _GEN_35 = {{1'd0}, _multiplication_T_118}; // @[bundled_block_division.scala 156:137]
  wire [16:0] _multiplication_T_119 = _multiplication_T_113 + _GEN_35; // @[bundled_block_division.scala 156:137]
  wire [7:0] _multiplication_T_124 = _multiplication_T_109 * _multiplication_T_116; // @[bundled_block_division.scala 156:240]
  wire [15:0] _GEN_36 = {_multiplication_T_124, 8'h0}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _multiplication_T_125 = {{7'd0}, _GEN_36}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _GEN_37 = {{6'd0}, _multiplication_T_119}; // @[bundled_block_division.scala 156:205]
  wire [23:0] multiplication_5 = _GEN_37 + _multiplication_T_125; // @[bundled_block_division.scala 156:205]
  wire [12:0] _two_complement_1_T_8 = {1'h0,dotProductRegs_1_1}; // @[bundled_block_division.scala 159:55]
  wire [12:0] _two_complement_1_T_9 = ~_two_complement_1_T_8; // @[bundled_block_division.scala 159:49]
  wire [12:0] _two_complement_1_T_11 = _two_complement_1_T_9 + 13'h1; // @[bundled_block_division.scala 159:77]
  reg [5:0] multiplierReg_6; // @[bundled_block_division.scala 149:34]
  reg [5:0] multiplierReg2_6; // @[bundled_block_division.scala 150:35]
  reg  signReg_6; // @[bundled_block_division.scala 152:28]
  wire [7:0] _multiplication_T_128 = multiplierReg_6[3:0] * multiplierReg2_6[3:0]; // @[bundled_block_division.scala 156:47]
  wire [3:0] _multiplication_T_130 = {2'h0,multiplierReg_6[5:4]}; // @[bundled_block_division.scala 156:83]
  wire [7:0] _multiplication_T_132 = _multiplication_T_130 * multiplierReg2_6[3:0]; // @[bundled_block_division.scala 156:106]
  wire [11:0] _GEN_38 = {_multiplication_T_132, 4'h0}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _multiplication_T_133 = {{3'd0}, _GEN_38}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _GEN_39 = {{7'd0}, _multiplication_T_128}; // @[bundled_block_division.scala 156:69]
  wire [15:0] _multiplication_T_134 = _GEN_39 + _multiplication_T_133; // @[bundled_block_division.scala 156:69]
  wire [3:0] _multiplication_T_137 = {2'h0,multiplierReg2_6[5:4]}; // @[bundled_block_division.scala 156:172]
  wire [7:0] _multiplication_T_138 = multiplierReg_6[3:0] * _multiplication_T_137; // @[bundled_block_division.scala 156:161]
  wire [11:0] _GEN_40 = {_multiplication_T_138, 4'h0}; // @[bundled_block_division.scala 156:197]
  wire [14:0] _multiplication_T_139 = {{3'd0}, _GEN_40}; // @[bundled_block_division.scala 156:197]
  wire [15:0] _GEN_41 = {{1'd0}, _multiplication_T_139}; // @[bundled_block_division.scala 156:137]
  wire [16:0] _multiplication_T_140 = _multiplication_T_134 + _GEN_41; // @[bundled_block_division.scala 156:137]
  wire [7:0] _multiplication_T_145 = _multiplication_T_130 * _multiplication_T_137; // @[bundled_block_division.scala 156:240]
  wire [15:0] _GEN_42 = {_multiplication_T_145, 8'h0}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _multiplication_T_146 = {{7'd0}, _GEN_42}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _GEN_43 = {{6'd0}, _multiplication_T_140}; // @[bundled_block_division.scala 156:205]
  wire [23:0] multiplication_6 = _GEN_43 + _multiplication_T_146; // @[bundled_block_division.scala 156:205]
  wire [12:0] _two_complement_2_T_8 = {1'h0,dotProductRegs_1_2}; // @[bundled_block_division.scala 159:55]
  wire [12:0] _two_complement_2_T_9 = ~_two_complement_2_T_8; // @[bundled_block_division.scala 159:49]
  wire [12:0] _two_complement_2_T_11 = _two_complement_2_T_9 + 13'h1; // @[bundled_block_division.scala 159:77]
  reg [5:0] multiplierReg_7; // @[bundled_block_division.scala 149:34]
  reg [5:0] multiplierReg2_7; // @[bundled_block_division.scala 150:35]
  reg  signReg_7; // @[bundled_block_division.scala 152:28]
  wire [7:0] _multiplication_T_149 = multiplierReg_7[3:0] * multiplierReg2_7[3:0]; // @[bundled_block_division.scala 156:47]
  wire [3:0] _multiplication_T_151 = {2'h0,multiplierReg_7[5:4]}; // @[bundled_block_division.scala 156:83]
  wire [7:0] _multiplication_T_153 = _multiplication_T_151 * multiplierReg2_7[3:0]; // @[bundled_block_division.scala 156:106]
  wire [11:0] _GEN_44 = {_multiplication_T_153, 4'h0}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _multiplication_T_154 = {{3'd0}, _GEN_44}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _GEN_45 = {{7'd0}, _multiplication_T_149}; // @[bundled_block_division.scala 156:69]
  wire [15:0] _multiplication_T_155 = _GEN_45 + _multiplication_T_154; // @[bundled_block_division.scala 156:69]
  wire [3:0] _multiplication_T_158 = {2'h0,multiplierReg2_7[5:4]}; // @[bundled_block_division.scala 156:172]
  wire [7:0] _multiplication_T_159 = multiplierReg_7[3:0] * _multiplication_T_158; // @[bundled_block_division.scala 156:161]
  wire [11:0] _GEN_46 = {_multiplication_T_159, 4'h0}; // @[bundled_block_division.scala 156:197]
  wire [14:0] _multiplication_T_160 = {{3'd0}, _GEN_46}; // @[bundled_block_division.scala 156:197]
  wire [15:0] _GEN_47 = {{1'd0}, _multiplication_T_160}; // @[bundled_block_division.scala 156:137]
  wire [16:0] _multiplication_T_161 = _multiplication_T_155 + _GEN_47; // @[bundled_block_division.scala 156:137]
  wire [7:0] _multiplication_T_166 = _multiplication_T_151 * _multiplication_T_158; // @[bundled_block_division.scala 156:240]
  wire [15:0] _GEN_48 = {_multiplication_T_166, 8'h0}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _multiplication_T_167 = {{7'd0}, _GEN_48}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _GEN_49 = {{6'd0}, _multiplication_T_161}; // @[bundled_block_division.scala 156:205]
  wire [23:0] multiplication_7 = _GEN_49 + _multiplication_T_167; // @[bundled_block_division.scala 156:205]
  wire [12:0] _two_complement_3_T_8 = {1'h0,dotProductRegs_1_3}; // @[bundled_block_division.scala 159:55]
  wire [12:0] _two_complement_3_T_9 = ~_two_complement_3_T_8; // @[bundled_block_division.scala 159:49]
  wire [12:0] _two_complement_3_T_11 = _two_complement_3_T_9 + 13'h1; // @[bundled_block_division.scala 159:77]
  wire [13:0] _acc_1_T = $signed(two_complement_buffer_1_0) + $signed(two_complement_buffer_1_1); // @[bundled_block_division.scala 177:46]
  wire [13:0] _GEN_50 = {{1{two_complement_buffer_1_2[12]}},two_complement_buffer_1_2}; // @[bundled_block_division.scala 177:46]
  wire [14:0] _acc_1_T_1 = $signed(_acc_1_T) + $signed(_GEN_50); // @[bundled_block_division.scala 177:46]
  wire [14:0] _GEN_51 = {{2{two_complement_buffer_1_3[12]}},two_complement_buffer_1_3}; // @[bundled_block_division.scala 177:46]
  wire [15:0] _acc_1_T_2 = $signed(_acc_1_T_1) + $signed(_GEN_51); // @[bundled_block_division.scala 177:46]
  wire [8:0] _exp_output_2_T = io_in_a_exp_2 + io_in_b_exp_2; // @[bundled_block_division.scala 142:37]
  reg [11:0] dotProductRegs_2_0; // @[bundled_block_division.scala 143:29]
  reg [11:0] dotProductRegs_2_1; // @[bundled_block_division.scala 143:29]
  reg [11:0] dotProductRegs_2_2; // @[bundled_block_division.scala 143:29]
  reg [11:0] dotProductRegs_2_3; // @[bundled_block_division.scala 143:29]
  reg  signs_2_0; // @[bundled_block_division.scala 144:20]
  reg  signs_2_1; // @[bundled_block_division.scala 144:20]
  reg  signs_2_2; // @[bundled_block_division.scala 144:20]
  reg  signs_2_3; // @[bundled_block_division.scala 144:20]
  reg [12:0] two_complement_2_0; // @[bundled_block_division.scala 145:29]
  reg [12:0] two_complement_2_1; // @[bundled_block_division.scala 145:29]
  reg [12:0] two_complement_2_2; // @[bundled_block_division.scala 145:29]
  reg [12:0] two_complement_2_3; // @[bundled_block_division.scala 145:29]
  reg [12:0] two_complement_buffer_2_0; // @[bundled_block_division.scala 146:36]
  reg [12:0] two_complement_buffer_2_1; // @[bundled_block_division.scala 146:36]
  reg [12:0] two_complement_buffer_2_2; // @[bundled_block_division.scala 146:36]
  reg [12:0] two_complement_buffer_2_3; // @[bundled_block_division.scala 146:36]
  reg [5:0] multiplierReg_8; // @[bundled_block_division.scala 149:34]
  reg [5:0] multiplierReg2_8; // @[bundled_block_division.scala 150:35]
  reg  signReg_8; // @[bundled_block_division.scala 152:28]
  wire [7:0] _multiplication_T_170 = multiplierReg_8[3:0] * multiplierReg2_8[3:0]; // @[bundled_block_division.scala 156:47]
  wire [3:0] _multiplication_T_172 = {2'h0,multiplierReg_8[5:4]}; // @[bundled_block_division.scala 156:83]
  wire [7:0] _multiplication_T_174 = _multiplication_T_172 * multiplierReg2_8[3:0]; // @[bundled_block_division.scala 156:106]
  wire [11:0] _GEN_52 = {_multiplication_T_174, 4'h0}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _multiplication_T_175 = {{3'd0}, _GEN_52}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _GEN_53 = {{7'd0}, _multiplication_T_170}; // @[bundled_block_division.scala 156:69]
  wire [15:0] _multiplication_T_176 = _GEN_53 + _multiplication_T_175; // @[bundled_block_division.scala 156:69]
  wire [3:0] _multiplication_T_179 = {2'h0,multiplierReg2_8[5:4]}; // @[bundled_block_division.scala 156:172]
  wire [7:0] _multiplication_T_180 = multiplierReg_8[3:0] * _multiplication_T_179; // @[bundled_block_division.scala 156:161]
  wire [11:0] _GEN_54 = {_multiplication_T_180, 4'h0}; // @[bundled_block_division.scala 156:197]
  wire [14:0] _multiplication_T_181 = {{3'd0}, _GEN_54}; // @[bundled_block_division.scala 156:197]
  wire [15:0] _GEN_55 = {{1'd0}, _multiplication_T_181}; // @[bundled_block_division.scala 156:137]
  wire [16:0] _multiplication_T_182 = _multiplication_T_176 + _GEN_55; // @[bundled_block_division.scala 156:137]
  wire [7:0] _multiplication_T_187 = _multiplication_T_172 * _multiplication_T_179; // @[bundled_block_division.scala 156:240]
  wire [15:0] _GEN_56 = {_multiplication_T_187, 8'h0}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _multiplication_T_188 = {{7'd0}, _GEN_56}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _GEN_57 = {{6'd0}, _multiplication_T_182}; // @[bundled_block_division.scala 156:205]
  wire [23:0] multiplication_8 = _GEN_57 + _multiplication_T_188; // @[bundled_block_division.scala 156:205]
  wire [12:0] _two_complement_0_T_15 = {1'h0,dotProductRegs_2_0}; // @[bundled_block_division.scala 159:55]
  wire [12:0] _two_complement_0_T_16 = ~_two_complement_0_T_15; // @[bundled_block_division.scala 159:49]
  wire [12:0] _two_complement_0_T_18 = _two_complement_0_T_16 + 13'h1; // @[bundled_block_division.scala 159:77]
  reg [5:0] multiplierReg_9; // @[bundled_block_division.scala 149:34]
  reg [5:0] multiplierReg2_9; // @[bundled_block_division.scala 150:35]
  reg  signReg_9; // @[bundled_block_division.scala 152:28]
  wire [7:0] _multiplication_T_191 = multiplierReg_9[3:0] * multiplierReg2_9[3:0]; // @[bundled_block_division.scala 156:47]
  wire [3:0] _multiplication_T_193 = {2'h0,multiplierReg_9[5:4]}; // @[bundled_block_division.scala 156:83]
  wire [7:0] _multiplication_T_195 = _multiplication_T_193 * multiplierReg2_9[3:0]; // @[bundled_block_division.scala 156:106]
  wire [11:0] _GEN_58 = {_multiplication_T_195, 4'h0}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _multiplication_T_196 = {{3'd0}, _GEN_58}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _GEN_59 = {{7'd0}, _multiplication_T_191}; // @[bundled_block_division.scala 156:69]
  wire [15:0] _multiplication_T_197 = _GEN_59 + _multiplication_T_196; // @[bundled_block_division.scala 156:69]
  wire [3:0] _multiplication_T_200 = {2'h0,multiplierReg2_9[5:4]}; // @[bundled_block_division.scala 156:172]
  wire [7:0] _multiplication_T_201 = multiplierReg_9[3:0] * _multiplication_T_200; // @[bundled_block_division.scala 156:161]
  wire [11:0] _GEN_60 = {_multiplication_T_201, 4'h0}; // @[bundled_block_division.scala 156:197]
  wire [14:0] _multiplication_T_202 = {{3'd0}, _GEN_60}; // @[bundled_block_division.scala 156:197]
  wire [15:0] _GEN_61 = {{1'd0}, _multiplication_T_202}; // @[bundled_block_division.scala 156:137]
  wire [16:0] _multiplication_T_203 = _multiplication_T_197 + _GEN_61; // @[bundled_block_division.scala 156:137]
  wire [7:0] _multiplication_T_208 = _multiplication_T_193 * _multiplication_T_200; // @[bundled_block_division.scala 156:240]
  wire [15:0] _GEN_62 = {_multiplication_T_208, 8'h0}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _multiplication_T_209 = {{7'd0}, _GEN_62}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _GEN_63 = {{6'd0}, _multiplication_T_203}; // @[bundled_block_division.scala 156:205]
  wire [23:0] multiplication_9 = _GEN_63 + _multiplication_T_209; // @[bundled_block_division.scala 156:205]
  wire [12:0] _two_complement_1_T_15 = {1'h0,dotProductRegs_2_1}; // @[bundled_block_division.scala 159:55]
  wire [12:0] _two_complement_1_T_16 = ~_two_complement_1_T_15; // @[bundled_block_division.scala 159:49]
  wire [12:0] _two_complement_1_T_18 = _two_complement_1_T_16 + 13'h1; // @[bundled_block_division.scala 159:77]
  reg [5:0] multiplierReg_10; // @[bundled_block_division.scala 149:34]
  reg [5:0] multiplierReg2_10; // @[bundled_block_division.scala 150:35]
  reg  signReg_10; // @[bundled_block_division.scala 152:28]
  wire [7:0] _multiplication_T_212 = multiplierReg_10[3:0] * multiplierReg2_10[3:0]; // @[bundled_block_division.scala 156:47]
  wire [3:0] _multiplication_T_214 = {2'h0,multiplierReg_10[5:4]}; // @[bundled_block_division.scala 156:83]
  wire [7:0] _multiplication_T_216 = _multiplication_T_214 * multiplierReg2_10[3:0]; // @[bundled_block_division.scala 156:106]
  wire [11:0] _GEN_64 = {_multiplication_T_216, 4'h0}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _multiplication_T_217 = {{3'd0}, _GEN_64}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _GEN_65 = {{7'd0}, _multiplication_T_212}; // @[bundled_block_division.scala 156:69]
  wire [15:0] _multiplication_T_218 = _GEN_65 + _multiplication_T_217; // @[bundled_block_division.scala 156:69]
  wire [3:0] _multiplication_T_221 = {2'h0,multiplierReg2_10[5:4]}; // @[bundled_block_division.scala 156:172]
  wire [7:0] _multiplication_T_222 = multiplierReg_10[3:0] * _multiplication_T_221; // @[bundled_block_division.scala 156:161]
  wire [11:0] _GEN_66 = {_multiplication_T_222, 4'h0}; // @[bundled_block_division.scala 156:197]
  wire [14:0] _multiplication_T_223 = {{3'd0}, _GEN_66}; // @[bundled_block_division.scala 156:197]
  wire [15:0] _GEN_67 = {{1'd0}, _multiplication_T_223}; // @[bundled_block_division.scala 156:137]
  wire [16:0] _multiplication_T_224 = _multiplication_T_218 + _GEN_67; // @[bundled_block_division.scala 156:137]
  wire [7:0] _multiplication_T_229 = _multiplication_T_214 * _multiplication_T_221; // @[bundled_block_division.scala 156:240]
  wire [15:0] _GEN_68 = {_multiplication_T_229, 8'h0}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _multiplication_T_230 = {{7'd0}, _GEN_68}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _GEN_69 = {{6'd0}, _multiplication_T_224}; // @[bundled_block_division.scala 156:205]
  wire [23:0] multiplication_10 = _GEN_69 + _multiplication_T_230; // @[bundled_block_division.scala 156:205]
  wire [12:0] _two_complement_2_T_15 = {1'h0,dotProductRegs_2_2}; // @[bundled_block_division.scala 159:55]
  wire [12:0] _two_complement_2_T_16 = ~_two_complement_2_T_15; // @[bundled_block_division.scala 159:49]
  wire [12:0] _two_complement_2_T_18 = _two_complement_2_T_16 + 13'h1; // @[bundled_block_division.scala 159:77]
  reg [5:0] multiplierReg_11; // @[bundled_block_division.scala 149:34]
  reg [5:0] multiplierReg2_11; // @[bundled_block_division.scala 150:35]
  reg  signReg_11; // @[bundled_block_division.scala 152:28]
  wire [7:0] _multiplication_T_233 = multiplierReg_11[3:0] * multiplierReg2_11[3:0]; // @[bundled_block_division.scala 156:47]
  wire [3:0] _multiplication_T_235 = {2'h0,multiplierReg_11[5:4]}; // @[bundled_block_division.scala 156:83]
  wire [7:0] _multiplication_T_237 = _multiplication_T_235 * multiplierReg2_11[3:0]; // @[bundled_block_division.scala 156:106]
  wire [11:0] _GEN_70 = {_multiplication_T_237, 4'h0}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _multiplication_T_238 = {{3'd0}, _GEN_70}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _GEN_71 = {{7'd0}, _multiplication_T_233}; // @[bundled_block_division.scala 156:69]
  wire [15:0] _multiplication_T_239 = _GEN_71 + _multiplication_T_238; // @[bundled_block_division.scala 156:69]
  wire [3:0] _multiplication_T_242 = {2'h0,multiplierReg2_11[5:4]}; // @[bundled_block_division.scala 156:172]
  wire [7:0] _multiplication_T_243 = multiplierReg_11[3:0] * _multiplication_T_242; // @[bundled_block_division.scala 156:161]
  wire [11:0] _GEN_72 = {_multiplication_T_243, 4'h0}; // @[bundled_block_division.scala 156:197]
  wire [14:0] _multiplication_T_244 = {{3'd0}, _GEN_72}; // @[bundled_block_division.scala 156:197]
  wire [15:0] _GEN_73 = {{1'd0}, _multiplication_T_244}; // @[bundled_block_division.scala 156:137]
  wire [16:0] _multiplication_T_245 = _multiplication_T_239 + _GEN_73; // @[bundled_block_division.scala 156:137]
  wire [7:0] _multiplication_T_250 = _multiplication_T_235 * _multiplication_T_242; // @[bundled_block_division.scala 156:240]
  wire [15:0] _GEN_74 = {_multiplication_T_250, 8'h0}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _multiplication_T_251 = {{7'd0}, _GEN_74}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _GEN_75 = {{6'd0}, _multiplication_T_245}; // @[bundled_block_division.scala 156:205]
  wire [23:0] multiplication_11 = _GEN_75 + _multiplication_T_251; // @[bundled_block_division.scala 156:205]
  wire [12:0] _two_complement_3_T_15 = {1'h0,dotProductRegs_2_3}; // @[bundled_block_division.scala 159:55]
  wire [12:0] _two_complement_3_T_16 = ~_two_complement_3_T_15; // @[bundled_block_division.scala 159:49]
  wire [12:0] _two_complement_3_T_18 = _two_complement_3_T_16 + 13'h1; // @[bundled_block_division.scala 159:77]
  wire [13:0] _acc_2_T = $signed(two_complement_buffer_2_0) + $signed(two_complement_buffer_2_1); // @[bundled_block_division.scala 177:46]
  wire [13:0] _GEN_76 = {{1{two_complement_buffer_2_2[12]}},two_complement_buffer_2_2}; // @[bundled_block_division.scala 177:46]
  wire [14:0] _acc_2_T_1 = $signed(_acc_2_T) + $signed(_GEN_76); // @[bundled_block_division.scala 177:46]
  wire [14:0] _GEN_77 = {{2{two_complement_buffer_2_3[12]}},two_complement_buffer_2_3}; // @[bundled_block_division.scala 177:46]
  wire [15:0] _acc_2_T_2 = $signed(_acc_2_T_1) + $signed(_GEN_77); // @[bundled_block_division.scala 177:46]
  wire [8:0] _exp_output_3_T = io_in_a_exp_3 + io_in_b_exp_3; // @[bundled_block_division.scala 142:37]
  reg [11:0] dotProductRegs_3_0; // @[bundled_block_division.scala 143:29]
  reg [11:0] dotProductRegs_3_1; // @[bundled_block_division.scala 143:29]
  reg [11:0] dotProductRegs_3_2; // @[bundled_block_division.scala 143:29]
  reg [11:0] dotProductRegs_3_3; // @[bundled_block_division.scala 143:29]
  reg  signs_3_0; // @[bundled_block_division.scala 144:20]
  reg  signs_3_1; // @[bundled_block_division.scala 144:20]
  reg  signs_3_2; // @[bundled_block_division.scala 144:20]
  reg  signs_3_3; // @[bundled_block_division.scala 144:20]
  reg [12:0] two_complement_3_0; // @[bundled_block_division.scala 145:29]
  reg [12:0] two_complement_3_1; // @[bundled_block_division.scala 145:29]
  reg [12:0] two_complement_3_2; // @[bundled_block_division.scala 145:29]
  reg [12:0] two_complement_3_3; // @[bundled_block_division.scala 145:29]
  reg [12:0] two_complement_buffer_3_0; // @[bundled_block_division.scala 146:36]
  reg [12:0] two_complement_buffer_3_1; // @[bundled_block_division.scala 146:36]
  reg [12:0] two_complement_buffer_3_2; // @[bundled_block_division.scala 146:36]
  reg [12:0] two_complement_buffer_3_3; // @[bundled_block_division.scala 146:36]
  reg [5:0] multiplierReg_12; // @[bundled_block_division.scala 149:34]
  reg [5:0] multiplierReg2_12; // @[bundled_block_division.scala 150:35]
  reg  signReg_12; // @[bundled_block_division.scala 152:28]
  wire [7:0] _multiplication_T_254 = multiplierReg_12[3:0] * multiplierReg2_12[3:0]; // @[bundled_block_division.scala 156:47]
  wire [3:0] _multiplication_T_256 = {2'h0,multiplierReg_12[5:4]}; // @[bundled_block_division.scala 156:83]
  wire [7:0] _multiplication_T_258 = _multiplication_T_256 * multiplierReg2_12[3:0]; // @[bundled_block_division.scala 156:106]
  wire [11:0] _GEN_78 = {_multiplication_T_258, 4'h0}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _multiplication_T_259 = {{3'd0}, _GEN_78}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _GEN_79 = {{7'd0}, _multiplication_T_254}; // @[bundled_block_division.scala 156:69]
  wire [15:0] _multiplication_T_260 = _GEN_79 + _multiplication_T_259; // @[bundled_block_division.scala 156:69]
  wire [3:0] _multiplication_T_263 = {2'h0,multiplierReg2_12[5:4]}; // @[bundled_block_division.scala 156:172]
  wire [7:0] _multiplication_T_264 = multiplierReg_12[3:0] * _multiplication_T_263; // @[bundled_block_division.scala 156:161]
  wire [11:0] _GEN_80 = {_multiplication_T_264, 4'h0}; // @[bundled_block_division.scala 156:197]
  wire [14:0] _multiplication_T_265 = {{3'd0}, _GEN_80}; // @[bundled_block_division.scala 156:197]
  wire [15:0] _GEN_81 = {{1'd0}, _multiplication_T_265}; // @[bundled_block_division.scala 156:137]
  wire [16:0] _multiplication_T_266 = _multiplication_T_260 + _GEN_81; // @[bundled_block_division.scala 156:137]
  wire [7:0] _multiplication_T_271 = _multiplication_T_256 * _multiplication_T_263; // @[bundled_block_division.scala 156:240]
  wire [15:0] _GEN_82 = {_multiplication_T_271, 8'h0}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _multiplication_T_272 = {{7'd0}, _GEN_82}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _GEN_83 = {{6'd0}, _multiplication_T_266}; // @[bundled_block_division.scala 156:205]
  wire [23:0] multiplication_12 = _GEN_83 + _multiplication_T_272; // @[bundled_block_division.scala 156:205]
  wire [12:0] _two_complement_0_T_22 = {1'h0,dotProductRegs_3_0}; // @[bundled_block_division.scala 159:55]
  wire [12:0] _two_complement_0_T_23 = ~_two_complement_0_T_22; // @[bundled_block_division.scala 159:49]
  wire [12:0] _two_complement_0_T_25 = _two_complement_0_T_23 + 13'h1; // @[bundled_block_division.scala 159:77]
  reg [5:0] multiplierReg_13; // @[bundled_block_division.scala 149:34]
  reg [5:0] multiplierReg2_13; // @[bundled_block_division.scala 150:35]
  reg  signReg_13; // @[bundled_block_division.scala 152:28]
  wire [7:0] _multiplication_T_275 = multiplierReg_13[3:0] * multiplierReg2_13[3:0]; // @[bundled_block_division.scala 156:47]
  wire [3:0] _multiplication_T_277 = {2'h0,multiplierReg_13[5:4]}; // @[bundled_block_division.scala 156:83]
  wire [7:0] _multiplication_T_279 = _multiplication_T_277 * multiplierReg2_13[3:0]; // @[bundled_block_division.scala 156:106]
  wire [11:0] _GEN_84 = {_multiplication_T_279, 4'h0}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _multiplication_T_280 = {{3'd0}, _GEN_84}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _GEN_85 = {{7'd0}, _multiplication_T_275}; // @[bundled_block_division.scala 156:69]
  wire [15:0] _multiplication_T_281 = _GEN_85 + _multiplication_T_280; // @[bundled_block_division.scala 156:69]
  wire [3:0] _multiplication_T_284 = {2'h0,multiplierReg2_13[5:4]}; // @[bundled_block_division.scala 156:172]
  wire [7:0] _multiplication_T_285 = multiplierReg_13[3:0] * _multiplication_T_284; // @[bundled_block_division.scala 156:161]
  wire [11:0] _GEN_86 = {_multiplication_T_285, 4'h0}; // @[bundled_block_division.scala 156:197]
  wire [14:0] _multiplication_T_286 = {{3'd0}, _GEN_86}; // @[bundled_block_division.scala 156:197]
  wire [15:0] _GEN_87 = {{1'd0}, _multiplication_T_286}; // @[bundled_block_division.scala 156:137]
  wire [16:0] _multiplication_T_287 = _multiplication_T_281 + _GEN_87; // @[bundled_block_division.scala 156:137]
  wire [7:0] _multiplication_T_292 = _multiplication_T_277 * _multiplication_T_284; // @[bundled_block_division.scala 156:240]
  wire [15:0] _GEN_88 = {_multiplication_T_292, 8'h0}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _multiplication_T_293 = {{7'd0}, _GEN_88}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _GEN_89 = {{6'd0}, _multiplication_T_287}; // @[bundled_block_division.scala 156:205]
  wire [23:0] multiplication_13 = _GEN_89 + _multiplication_T_293; // @[bundled_block_division.scala 156:205]
  wire [12:0] _two_complement_1_T_22 = {1'h0,dotProductRegs_3_1}; // @[bundled_block_division.scala 159:55]
  wire [12:0] _two_complement_1_T_23 = ~_two_complement_1_T_22; // @[bundled_block_division.scala 159:49]
  wire [12:0] _two_complement_1_T_25 = _two_complement_1_T_23 + 13'h1; // @[bundled_block_division.scala 159:77]
  reg [5:0] multiplierReg_14; // @[bundled_block_division.scala 149:34]
  reg [5:0] multiplierReg2_14; // @[bundled_block_division.scala 150:35]
  reg  signReg_14; // @[bundled_block_division.scala 152:28]
  wire [7:0] _multiplication_T_296 = multiplierReg_14[3:0] * multiplierReg2_14[3:0]; // @[bundled_block_division.scala 156:47]
  wire [3:0] _multiplication_T_298 = {2'h0,multiplierReg_14[5:4]}; // @[bundled_block_division.scala 156:83]
  wire [7:0] _multiplication_T_300 = _multiplication_T_298 * multiplierReg2_14[3:0]; // @[bundled_block_division.scala 156:106]
  wire [11:0] _GEN_90 = {_multiplication_T_300, 4'h0}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _multiplication_T_301 = {{3'd0}, _GEN_90}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _GEN_91 = {{7'd0}, _multiplication_T_296}; // @[bundled_block_division.scala 156:69]
  wire [15:0] _multiplication_T_302 = _GEN_91 + _multiplication_T_301; // @[bundled_block_division.scala 156:69]
  wire [3:0] _multiplication_T_305 = {2'h0,multiplierReg2_14[5:4]}; // @[bundled_block_division.scala 156:172]
  wire [7:0] _multiplication_T_306 = multiplierReg_14[3:0] * _multiplication_T_305; // @[bundled_block_division.scala 156:161]
  wire [11:0] _GEN_92 = {_multiplication_T_306, 4'h0}; // @[bundled_block_division.scala 156:197]
  wire [14:0] _multiplication_T_307 = {{3'd0}, _GEN_92}; // @[bundled_block_division.scala 156:197]
  wire [15:0] _GEN_93 = {{1'd0}, _multiplication_T_307}; // @[bundled_block_division.scala 156:137]
  wire [16:0] _multiplication_T_308 = _multiplication_T_302 + _GEN_93; // @[bundled_block_division.scala 156:137]
  wire [7:0] _multiplication_T_313 = _multiplication_T_298 * _multiplication_T_305; // @[bundled_block_division.scala 156:240]
  wire [15:0] _GEN_94 = {_multiplication_T_313, 8'h0}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _multiplication_T_314 = {{7'd0}, _GEN_94}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _GEN_95 = {{6'd0}, _multiplication_T_308}; // @[bundled_block_division.scala 156:205]
  wire [23:0] multiplication_14 = _GEN_95 + _multiplication_T_314; // @[bundled_block_division.scala 156:205]
  wire [12:0] _two_complement_2_T_22 = {1'h0,dotProductRegs_3_2}; // @[bundled_block_division.scala 159:55]
  wire [12:0] _two_complement_2_T_23 = ~_two_complement_2_T_22; // @[bundled_block_division.scala 159:49]
  wire [12:0] _two_complement_2_T_25 = _two_complement_2_T_23 + 13'h1; // @[bundled_block_division.scala 159:77]
  reg [5:0] multiplierReg_15; // @[bundled_block_division.scala 149:34]
  reg [5:0] multiplierReg2_15; // @[bundled_block_division.scala 150:35]
  reg  signReg_15; // @[bundled_block_division.scala 152:28]
  wire [7:0] _multiplication_T_317 = multiplierReg_15[3:0] * multiplierReg2_15[3:0]; // @[bundled_block_division.scala 156:47]
  wire [3:0] _multiplication_T_319 = {2'h0,multiplierReg_15[5:4]}; // @[bundled_block_division.scala 156:83]
  wire [7:0] _multiplication_T_321 = _multiplication_T_319 * multiplierReg2_15[3:0]; // @[bundled_block_division.scala 156:106]
  wire [11:0] _GEN_96 = {_multiplication_T_321, 4'h0}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _multiplication_T_322 = {{3'd0}, _GEN_96}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _GEN_97 = {{7'd0}, _multiplication_T_317}; // @[bundled_block_division.scala 156:69]
  wire [15:0] _multiplication_T_323 = _GEN_97 + _multiplication_T_322; // @[bundled_block_division.scala 156:69]
  wire [3:0] _multiplication_T_326 = {2'h0,multiplierReg2_15[5:4]}; // @[bundled_block_division.scala 156:172]
  wire [7:0] _multiplication_T_327 = multiplierReg_15[3:0] * _multiplication_T_326; // @[bundled_block_division.scala 156:161]
  wire [11:0] _GEN_98 = {_multiplication_T_327, 4'h0}; // @[bundled_block_division.scala 156:197]
  wire [14:0] _multiplication_T_328 = {{3'd0}, _GEN_98}; // @[bundled_block_division.scala 156:197]
  wire [15:0] _GEN_99 = {{1'd0}, _multiplication_T_328}; // @[bundled_block_division.scala 156:137]
  wire [16:0] _multiplication_T_329 = _multiplication_T_323 + _GEN_99; // @[bundled_block_division.scala 156:137]
  wire [7:0] _multiplication_T_334 = _multiplication_T_319 * _multiplication_T_326; // @[bundled_block_division.scala 156:240]
  wire [15:0] _GEN_100 = {_multiplication_T_334, 8'h0}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _multiplication_T_335 = {{7'd0}, _GEN_100}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _GEN_101 = {{6'd0}, _multiplication_T_329}; // @[bundled_block_division.scala 156:205]
  wire [23:0] multiplication_15 = _GEN_101 + _multiplication_T_335; // @[bundled_block_division.scala 156:205]
  wire [12:0] _two_complement_3_T_22 = {1'h0,dotProductRegs_3_3}; // @[bundled_block_division.scala 159:55]
  wire [12:0] _two_complement_3_T_23 = ~_two_complement_3_T_22; // @[bundled_block_division.scala 159:49]
  wire [12:0] _two_complement_3_T_25 = _two_complement_3_T_23 + 13'h1; // @[bundled_block_division.scala 159:77]
  wire [13:0] _acc_3_T = $signed(two_complement_buffer_3_0) + $signed(two_complement_buffer_3_1); // @[bundled_block_division.scala 177:46]
  wire [13:0] _GEN_102 = {{1{two_complement_buffer_3_2[12]}},two_complement_buffer_3_2}; // @[bundled_block_division.scala 177:46]
  wire [14:0] _acc_3_T_1 = $signed(_acc_3_T) + $signed(_GEN_102); // @[bundled_block_division.scala 177:46]
  wire [14:0] _GEN_103 = {{2{two_complement_buffer_3_3[12]}},two_complement_buffer_3_3}; // @[bundled_block_division.scala 177:46]
  wire [15:0] _acc_3_T_2 = $signed(_acc_3_T_1) + $signed(_GEN_103); // @[bundled_block_division.scala 177:46]
  adderTree2 adderTreeInst ( // @[bundled_block_division.scala 180:29]
    .clock(adderTreeInst_clock),
    .reset(adderTreeInst_reset),
    .io_in_sign_man_0(adderTreeInst_io_in_sign_man_0),
    .io_in_sign_man_1(adderTreeInst_io_in_sign_man_1),
    .io_in_sign_man_2(adderTreeInst_io_in_sign_man_2),
    .io_in_sign_man_3(adderTreeInst_io_in_sign_man_3),
    .io_in_exps_0(adderTreeInst_io_in_exps_0),
    .io_in_exps_1(adderTreeInst_io_in_exps_1),
    .io_in_exps_2(adderTreeInst_io_in_exps_2),
    .io_in_exps_3(adderTreeInst_io_in_exps_3),
    .io_in_control_signal(adderTreeInst_io_in_control_signal),
    .io_in_control_signal2(adderTreeInst_io_in_control_signal2),
    .io_result_tree(adderTreeInst_io_result_tree)
  );
  assign io_result = adderTreeInst_io_result_tree; // @[bundled_block_division.scala 185:13]
  assign adderTreeInst_clock = clock;
  assign adderTreeInst_reset = reset;
  assign adderTreeInst_io_in_sign_man_0 = acc_0; // @[bundled_block_division.scala 181:{42,42}]
  assign adderTreeInst_io_in_sign_man_1 = acc_1; // @[bundled_block_division.scala 181:{42,42}]
  assign adderTreeInst_io_in_sign_man_2 = acc_2; // @[bundled_block_division.scala 181:{42,42}]
  assign adderTreeInst_io_in_sign_man_3 = acc_3; // @[bundled_block_division.scala 181:{42,42}]
  assign adderTreeInst_io_in_exps_0 = exp_output_0; // @[bundled_block_division.scala 182:{38,38}]
  assign adderTreeInst_io_in_exps_1 = exp_output_1; // @[bundled_block_division.scala 182:{38,38}]
  assign adderTreeInst_io_in_exps_2 = exp_output_2; // @[bundled_block_division.scala 182:{38,38}]
  assign adderTreeInst_io_in_exps_3 = exp_output_3; // @[bundled_block_division.scala 182:{38,38}]
  assign adderTreeInst_io_in_control_signal = io_in_control; // @[bundled_block_division.scala 183:38]
  assign adderTreeInst_io_in_control_signal2 = io_in_control2; // @[bundled_block_division.scala 184:39]
  always @(posedge clock) begin
    if (reset) begin // @[bundled_block_division.scala 138:60]
      exp_output_0 <= 9'h0; // @[bundled_block_division.scala 138:60]
    end else begin
      exp_output_0 <= _exp_output_0_T; // @[bundled_block_division.scala 142:19]
    end
    if (reset) begin // @[bundled_block_division.scala 138:60]
      exp_output_1 <= 9'h0; // @[bundled_block_division.scala 138:60]
    end else begin
      exp_output_1 <= _exp_output_1_T; // @[bundled_block_division.scala 142:19]
    end
    if (reset) begin // @[bundled_block_division.scala 138:60]
      exp_output_2 <= 9'h0; // @[bundled_block_division.scala 138:60]
    end else begin
      exp_output_2 <= _exp_output_2_T; // @[bundled_block_division.scala 142:19]
    end
    if (reset) begin // @[bundled_block_division.scala 138:60]
      exp_output_3 <= 9'h0; // @[bundled_block_division.scala 138:60]
    end else begin
      exp_output_3 <= _exp_output_3_T; // @[bundled_block_division.scala 142:19]
    end
    if (reset) begin // @[bundled_block_division.scala 139:53]
      acc_0 <= 16'sh0; // @[bundled_block_division.scala 139:53]
    end else begin
      acc_0 <= _acc_0_T_2; // @[bundled_block_division.scala 177:12]
    end
    if (reset) begin // @[bundled_block_division.scala 139:53]
      acc_1 <= 16'sh0; // @[bundled_block_division.scala 139:53]
    end else begin
      acc_1 <= _acc_1_T_2; // @[bundled_block_division.scala 177:12]
    end
    if (reset) begin // @[bundled_block_division.scala 139:53]
      acc_2 <= 16'sh0; // @[bundled_block_division.scala 139:53]
    end else begin
      acc_2 <= _acc_2_T_2; // @[bundled_block_division.scala 177:12]
    end
    if (reset) begin // @[bundled_block_division.scala 139:53]
      acc_3 <= 16'sh0; // @[bundled_block_division.scala 139:53]
    end else begin
      acc_3 <= _acc_3_T_2; // @[bundled_block_division.scala 177:12]
    end
    dotProductRegs__0 <= multiplication[11:0]; // @[bundled_block_division.scala 157:42]
    dotProductRegs__1 <= multiplication_1[11:0]; // @[bundled_block_division.scala 157:42]
    dotProductRegs__2 <= multiplication_2[11:0]; // @[bundled_block_division.scala 157:42]
    dotProductRegs__3 <= multiplication_3[11:0]; // @[bundled_block_division.scala 157:42]
    signs__0 <= signReg ^ io_in_b_sign_0; // @[bundled_block_division.scala 158:27]
    signs__1 <= signReg_1 ^ io_in_b_sign_1; // @[bundled_block_division.scala 158:27]
    signs__2 <= signReg_2 ^ io_in_b_sign_2; // @[bundled_block_division.scala 158:27]
    signs__3 <= signReg_3 ^ io_in_b_sign_3; // @[bundled_block_division.scala 158:27]
    if (signs__0) begin // @[bundled_block_division.scala 159:31]
      two_complement__0 <= _two_complement_0_T_4;
    end else begin
      two_complement__0 <= _two_complement_0_T_1;
    end
    if (signs__1) begin // @[bundled_block_division.scala 159:31]
      two_complement__1 <= _two_complement_1_T_4;
    end else begin
      two_complement__1 <= _two_complement_1_T_1;
    end
    if (signs__2) begin // @[bundled_block_division.scala 159:31]
      two_complement__2 <= _two_complement_2_T_4;
    end else begin
      two_complement__2 <= _two_complement_2_T_1;
    end
    if (signs__3) begin // @[bundled_block_division.scala 159:31]
      two_complement__3 <= _two_complement_3_T_4;
    end else begin
      two_complement__3 <= _two_complement_3_T_1;
    end
    two_complement_buffer__0 <= two_complement__0; // @[bundled_block_division.scala 160:53]
    two_complement_buffer__1 <= two_complement__1; // @[bundled_block_division.scala 160:53]
    two_complement_buffer__2 <= two_complement__2; // @[bundled_block_division.scala 160:53]
    two_complement_buffer__3 <= two_complement__3; // @[bundled_block_division.scala 160:53]
    if (reset) begin // @[bundled_block_division.scala 149:34]
      multiplierReg <= 6'h0; // @[bundled_block_division.scala 149:34]
    end else begin
      multiplierReg <= io_in_a_man_0; // @[bundled_block_division.scala 154:21]
    end
    if (reset) begin // @[bundled_block_division.scala 150:35]
      multiplierReg2 <= 6'h0; // @[bundled_block_division.scala 150:35]
    end else begin
      multiplierReg2 <= io_in_b_man_0; // @[bundled_block_division.scala 155:22]
    end
    if (reset) begin // @[bundled_block_division.scala 152:28]
      signReg <= 1'h0; // @[bundled_block_division.scala 152:28]
    end else begin
      signReg <= io_in_a_sign_0; // @[bundled_block_division.scala 153:15]
    end
    if (reset) begin // @[bundled_block_division.scala 149:34]
      multiplierReg_1 <= 6'h0; // @[bundled_block_division.scala 149:34]
    end else begin
      multiplierReg_1 <= io_in_a_man_1; // @[bundled_block_division.scala 154:21]
    end
    if (reset) begin // @[bundled_block_division.scala 150:35]
      multiplierReg2_1 <= 6'h0; // @[bundled_block_division.scala 150:35]
    end else begin
      multiplierReg2_1 <= io_in_b_man_1; // @[bundled_block_division.scala 155:22]
    end
    if (reset) begin // @[bundled_block_division.scala 152:28]
      signReg_1 <= 1'h0; // @[bundled_block_division.scala 152:28]
    end else begin
      signReg_1 <= io_in_a_sign_1; // @[bundled_block_division.scala 153:15]
    end
    if (reset) begin // @[bundled_block_division.scala 149:34]
      multiplierReg_2 <= 6'h0; // @[bundled_block_division.scala 149:34]
    end else begin
      multiplierReg_2 <= io_in_a_man_2; // @[bundled_block_division.scala 154:21]
    end
    if (reset) begin // @[bundled_block_division.scala 150:35]
      multiplierReg2_2 <= 6'h0; // @[bundled_block_division.scala 150:35]
    end else begin
      multiplierReg2_2 <= io_in_b_man_2; // @[bundled_block_division.scala 155:22]
    end
    if (reset) begin // @[bundled_block_division.scala 152:28]
      signReg_2 <= 1'h0; // @[bundled_block_division.scala 152:28]
    end else begin
      signReg_2 <= io_in_a_sign_2; // @[bundled_block_division.scala 153:15]
    end
    if (reset) begin // @[bundled_block_division.scala 149:34]
      multiplierReg_3 <= 6'h0; // @[bundled_block_division.scala 149:34]
    end else begin
      multiplierReg_3 <= io_in_a_man_3; // @[bundled_block_division.scala 154:21]
    end
    if (reset) begin // @[bundled_block_division.scala 150:35]
      multiplierReg2_3 <= 6'h0; // @[bundled_block_division.scala 150:35]
    end else begin
      multiplierReg2_3 <= io_in_b_man_3; // @[bundled_block_division.scala 155:22]
    end
    if (reset) begin // @[bundled_block_division.scala 152:28]
      signReg_3 <= 1'h0; // @[bundled_block_division.scala 152:28]
    end else begin
      signReg_3 <= io_in_a_sign_3; // @[bundled_block_division.scala 153:15]
    end
    dotProductRegs_1_0 <= multiplication_4[11:0]; // @[bundled_block_division.scala 157:42]
    dotProductRegs_1_1 <= multiplication_5[11:0]; // @[bundled_block_division.scala 157:42]
    dotProductRegs_1_2 <= multiplication_6[11:0]; // @[bundled_block_division.scala 157:42]
    dotProductRegs_1_3 <= multiplication_7[11:0]; // @[bundled_block_division.scala 157:42]
    signs_1_0 <= signReg_4 ^ io_in_b_sign_4; // @[bundled_block_division.scala 158:27]
    signs_1_1 <= signReg_5 ^ io_in_b_sign_5; // @[bundled_block_division.scala 158:27]
    signs_1_2 <= signReg_6 ^ io_in_b_sign_6; // @[bundled_block_division.scala 158:27]
    signs_1_3 <= signReg_7 ^ io_in_b_sign_7; // @[bundled_block_division.scala 158:27]
    if (signs_1_0) begin // @[bundled_block_division.scala 159:31]
      two_complement_1_0 <= _two_complement_0_T_11;
    end else begin
      two_complement_1_0 <= _two_complement_0_T_8;
    end
    if (signs_1_1) begin // @[bundled_block_division.scala 159:31]
      two_complement_1_1 <= _two_complement_1_T_11;
    end else begin
      two_complement_1_1 <= _two_complement_1_T_8;
    end
    if (signs_1_2) begin // @[bundled_block_division.scala 159:31]
      two_complement_1_2 <= _two_complement_2_T_11;
    end else begin
      two_complement_1_2 <= _two_complement_2_T_8;
    end
    if (signs_1_3) begin // @[bundled_block_division.scala 159:31]
      two_complement_1_3 <= _two_complement_3_T_11;
    end else begin
      two_complement_1_3 <= _two_complement_3_T_8;
    end
    two_complement_buffer_1_0 <= two_complement_1_0; // @[bundled_block_division.scala 160:53]
    two_complement_buffer_1_1 <= two_complement_1_1; // @[bundled_block_division.scala 160:53]
    two_complement_buffer_1_2 <= two_complement_1_2; // @[bundled_block_division.scala 160:53]
    two_complement_buffer_1_3 <= two_complement_1_3; // @[bundled_block_division.scala 160:53]
    if (reset) begin // @[bundled_block_division.scala 149:34]
      multiplierReg_4 <= 6'h0; // @[bundled_block_division.scala 149:34]
    end else begin
      multiplierReg_4 <= io_in_a_man_4; // @[bundled_block_division.scala 154:21]
    end
    if (reset) begin // @[bundled_block_division.scala 150:35]
      multiplierReg2_4 <= 6'h0; // @[bundled_block_division.scala 150:35]
    end else begin
      multiplierReg2_4 <= io_in_b_man_4; // @[bundled_block_division.scala 155:22]
    end
    if (reset) begin // @[bundled_block_division.scala 152:28]
      signReg_4 <= 1'h0; // @[bundled_block_division.scala 152:28]
    end else begin
      signReg_4 <= io_in_a_sign_4; // @[bundled_block_division.scala 153:15]
    end
    if (reset) begin // @[bundled_block_division.scala 149:34]
      multiplierReg_5 <= 6'h0; // @[bundled_block_division.scala 149:34]
    end else begin
      multiplierReg_5 <= io_in_a_man_5; // @[bundled_block_division.scala 154:21]
    end
    if (reset) begin // @[bundled_block_division.scala 150:35]
      multiplierReg2_5 <= 6'h0; // @[bundled_block_division.scala 150:35]
    end else begin
      multiplierReg2_5 <= io_in_b_man_5; // @[bundled_block_division.scala 155:22]
    end
    if (reset) begin // @[bundled_block_division.scala 152:28]
      signReg_5 <= 1'h0; // @[bundled_block_division.scala 152:28]
    end else begin
      signReg_5 <= io_in_a_sign_5; // @[bundled_block_division.scala 153:15]
    end
    if (reset) begin // @[bundled_block_division.scala 149:34]
      multiplierReg_6 <= 6'h0; // @[bundled_block_division.scala 149:34]
    end else begin
      multiplierReg_6 <= io_in_a_man_6; // @[bundled_block_division.scala 154:21]
    end
    if (reset) begin // @[bundled_block_division.scala 150:35]
      multiplierReg2_6 <= 6'h0; // @[bundled_block_division.scala 150:35]
    end else begin
      multiplierReg2_6 <= io_in_b_man_6; // @[bundled_block_division.scala 155:22]
    end
    if (reset) begin // @[bundled_block_division.scala 152:28]
      signReg_6 <= 1'h0; // @[bundled_block_division.scala 152:28]
    end else begin
      signReg_6 <= io_in_a_sign_6; // @[bundled_block_division.scala 153:15]
    end
    if (reset) begin // @[bundled_block_division.scala 149:34]
      multiplierReg_7 <= 6'h0; // @[bundled_block_division.scala 149:34]
    end else begin
      multiplierReg_7 <= io_in_a_man_7; // @[bundled_block_division.scala 154:21]
    end
    if (reset) begin // @[bundled_block_division.scala 150:35]
      multiplierReg2_7 <= 6'h0; // @[bundled_block_division.scala 150:35]
    end else begin
      multiplierReg2_7 <= io_in_b_man_7; // @[bundled_block_division.scala 155:22]
    end
    if (reset) begin // @[bundled_block_division.scala 152:28]
      signReg_7 <= 1'h0; // @[bundled_block_division.scala 152:28]
    end else begin
      signReg_7 <= io_in_a_sign_7; // @[bundled_block_division.scala 153:15]
    end
    dotProductRegs_2_0 <= multiplication_8[11:0]; // @[bundled_block_division.scala 157:42]
    dotProductRegs_2_1 <= multiplication_9[11:0]; // @[bundled_block_division.scala 157:42]
    dotProductRegs_2_2 <= multiplication_10[11:0]; // @[bundled_block_division.scala 157:42]
    dotProductRegs_2_3 <= multiplication_11[11:0]; // @[bundled_block_division.scala 157:42]
    signs_2_0 <= signReg_8 ^ io_in_b_sign_8; // @[bundled_block_division.scala 158:27]
    signs_2_1 <= signReg_9 ^ io_in_b_sign_9; // @[bundled_block_division.scala 158:27]
    signs_2_2 <= signReg_10 ^ io_in_b_sign_10; // @[bundled_block_division.scala 158:27]
    signs_2_3 <= signReg_11 ^ io_in_b_sign_11; // @[bundled_block_division.scala 158:27]
    if (signs_2_0) begin // @[bundled_block_division.scala 159:31]
      two_complement_2_0 <= _two_complement_0_T_18;
    end else begin
      two_complement_2_0 <= _two_complement_0_T_15;
    end
    if (signs_2_1) begin // @[bundled_block_division.scala 159:31]
      two_complement_2_1 <= _two_complement_1_T_18;
    end else begin
      two_complement_2_1 <= _two_complement_1_T_15;
    end
    if (signs_2_2) begin // @[bundled_block_division.scala 159:31]
      two_complement_2_2 <= _two_complement_2_T_18;
    end else begin
      two_complement_2_2 <= _two_complement_2_T_15;
    end
    if (signs_2_3) begin // @[bundled_block_division.scala 159:31]
      two_complement_2_3 <= _two_complement_3_T_18;
    end else begin
      two_complement_2_3 <= _two_complement_3_T_15;
    end
    two_complement_buffer_2_0 <= two_complement_2_0; // @[bundled_block_division.scala 160:53]
    two_complement_buffer_2_1 <= two_complement_2_1; // @[bundled_block_division.scala 160:53]
    two_complement_buffer_2_2 <= two_complement_2_2; // @[bundled_block_division.scala 160:53]
    two_complement_buffer_2_3 <= two_complement_2_3; // @[bundled_block_division.scala 160:53]
    if (reset) begin // @[bundled_block_division.scala 149:34]
      multiplierReg_8 <= 6'h0; // @[bundled_block_division.scala 149:34]
    end else begin
      multiplierReg_8 <= io_in_a_man_8; // @[bundled_block_division.scala 154:21]
    end
    if (reset) begin // @[bundled_block_division.scala 150:35]
      multiplierReg2_8 <= 6'h0; // @[bundled_block_division.scala 150:35]
    end else begin
      multiplierReg2_8 <= io_in_b_man_8; // @[bundled_block_division.scala 155:22]
    end
    if (reset) begin // @[bundled_block_division.scala 152:28]
      signReg_8 <= 1'h0; // @[bundled_block_division.scala 152:28]
    end else begin
      signReg_8 <= io_in_a_sign_8; // @[bundled_block_division.scala 153:15]
    end
    if (reset) begin // @[bundled_block_division.scala 149:34]
      multiplierReg_9 <= 6'h0; // @[bundled_block_division.scala 149:34]
    end else begin
      multiplierReg_9 <= io_in_a_man_9; // @[bundled_block_division.scala 154:21]
    end
    if (reset) begin // @[bundled_block_division.scala 150:35]
      multiplierReg2_9 <= 6'h0; // @[bundled_block_division.scala 150:35]
    end else begin
      multiplierReg2_9 <= io_in_b_man_9; // @[bundled_block_division.scala 155:22]
    end
    if (reset) begin // @[bundled_block_division.scala 152:28]
      signReg_9 <= 1'h0; // @[bundled_block_division.scala 152:28]
    end else begin
      signReg_9 <= io_in_a_sign_9; // @[bundled_block_division.scala 153:15]
    end
    if (reset) begin // @[bundled_block_division.scala 149:34]
      multiplierReg_10 <= 6'h0; // @[bundled_block_division.scala 149:34]
    end else begin
      multiplierReg_10 <= io_in_a_man_10; // @[bundled_block_division.scala 154:21]
    end
    if (reset) begin // @[bundled_block_division.scala 150:35]
      multiplierReg2_10 <= 6'h0; // @[bundled_block_division.scala 150:35]
    end else begin
      multiplierReg2_10 <= io_in_b_man_10; // @[bundled_block_division.scala 155:22]
    end
    if (reset) begin // @[bundled_block_division.scala 152:28]
      signReg_10 <= 1'h0; // @[bundled_block_division.scala 152:28]
    end else begin
      signReg_10 <= io_in_a_sign_10; // @[bundled_block_division.scala 153:15]
    end
    if (reset) begin // @[bundled_block_division.scala 149:34]
      multiplierReg_11 <= 6'h0; // @[bundled_block_division.scala 149:34]
    end else begin
      multiplierReg_11 <= io_in_a_man_11; // @[bundled_block_division.scala 154:21]
    end
    if (reset) begin // @[bundled_block_division.scala 150:35]
      multiplierReg2_11 <= 6'h0; // @[bundled_block_division.scala 150:35]
    end else begin
      multiplierReg2_11 <= io_in_b_man_11; // @[bundled_block_division.scala 155:22]
    end
    if (reset) begin // @[bundled_block_division.scala 152:28]
      signReg_11 <= 1'h0; // @[bundled_block_division.scala 152:28]
    end else begin
      signReg_11 <= io_in_a_sign_11; // @[bundled_block_division.scala 153:15]
    end
    dotProductRegs_3_0 <= multiplication_12[11:0]; // @[bundled_block_division.scala 157:42]
    dotProductRegs_3_1 <= multiplication_13[11:0]; // @[bundled_block_division.scala 157:42]
    dotProductRegs_3_2 <= multiplication_14[11:0]; // @[bundled_block_division.scala 157:42]
    dotProductRegs_3_3 <= multiplication_15[11:0]; // @[bundled_block_division.scala 157:42]
    signs_3_0 <= signReg_12 ^ io_in_b_sign_12; // @[bundled_block_division.scala 158:27]
    signs_3_1 <= signReg_13 ^ io_in_b_sign_13; // @[bundled_block_division.scala 158:27]
    signs_3_2 <= signReg_14 ^ io_in_b_sign_14; // @[bundled_block_division.scala 158:27]
    signs_3_3 <= signReg_15 ^ io_in_b_sign_15; // @[bundled_block_division.scala 158:27]
    if (signs_3_0) begin // @[bundled_block_division.scala 159:31]
      two_complement_3_0 <= _two_complement_0_T_25;
    end else begin
      two_complement_3_0 <= _two_complement_0_T_22;
    end
    if (signs_3_1) begin // @[bundled_block_division.scala 159:31]
      two_complement_3_1 <= _two_complement_1_T_25;
    end else begin
      two_complement_3_1 <= _two_complement_1_T_22;
    end
    if (signs_3_2) begin // @[bundled_block_division.scala 159:31]
      two_complement_3_2 <= _two_complement_2_T_25;
    end else begin
      two_complement_3_2 <= _two_complement_2_T_22;
    end
    if (signs_3_3) begin // @[bundled_block_division.scala 159:31]
      two_complement_3_3 <= _two_complement_3_T_25;
    end else begin
      two_complement_3_3 <= _two_complement_3_T_22;
    end
    two_complement_buffer_3_0 <= two_complement_3_0; // @[bundled_block_division.scala 160:53]
    two_complement_buffer_3_1 <= two_complement_3_1; // @[bundled_block_division.scala 160:53]
    two_complement_buffer_3_2 <= two_complement_3_2; // @[bundled_block_division.scala 160:53]
    two_complement_buffer_3_3 <= two_complement_3_3; // @[bundled_block_division.scala 160:53]
    if (reset) begin // @[bundled_block_division.scala 149:34]
      multiplierReg_12 <= 6'h0; // @[bundled_block_division.scala 149:34]
    end else begin
      multiplierReg_12 <= io_in_a_man_12; // @[bundled_block_division.scala 154:21]
    end
    if (reset) begin // @[bundled_block_division.scala 150:35]
      multiplierReg2_12 <= 6'h0; // @[bundled_block_division.scala 150:35]
    end else begin
      multiplierReg2_12 <= io_in_b_man_12; // @[bundled_block_division.scala 155:22]
    end
    if (reset) begin // @[bundled_block_division.scala 152:28]
      signReg_12 <= 1'h0; // @[bundled_block_division.scala 152:28]
    end else begin
      signReg_12 <= io_in_a_sign_12; // @[bundled_block_division.scala 153:15]
    end
    if (reset) begin // @[bundled_block_division.scala 149:34]
      multiplierReg_13 <= 6'h0; // @[bundled_block_division.scala 149:34]
    end else begin
      multiplierReg_13 <= io_in_a_man_13; // @[bundled_block_division.scala 154:21]
    end
    if (reset) begin // @[bundled_block_division.scala 150:35]
      multiplierReg2_13 <= 6'h0; // @[bundled_block_division.scala 150:35]
    end else begin
      multiplierReg2_13 <= io_in_b_man_13; // @[bundled_block_division.scala 155:22]
    end
    if (reset) begin // @[bundled_block_division.scala 152:28]
      signReg_13 <= 1'h0; // @[bundled_block_division.scala 152:28]
    end else begin
      signReg_13 <= io_in_a_sign_13; // @[bundled_block_division.scala 153:15]
    end
    if (reset) begin // @[bundled_block_division.scala 149:34]
      multiplierReg_14 <= 6'h0; // @[bundled_block_division.scala 149:34]
    end else begin
      multiplierReg_14 <= io_in_a_man_14; // @[bundled_block_division.scala 154:21]
    end
    if (reset) begin // @[bundled_block_division.scala 150:35]
      multiplierReg2_14 <= 6'h0; // @[bundled_block_division.scala 150:35]
    end else begin
      multiplierReg2_14 <= io_in_b_man_14; // @[bundled_block_division.scala 155:22]
    end
    if (reset) begin // @[bundled_block_division.scala 152:28]
      signReg_14 <= 1'h0; // @[bundled_block_division.scala 152:28]
    end else begin
      signReg_14 <= io_in_a_sign_14; // @[bundled_block_division.scala 153:15]
    end
    if (reset) begin // @[bundled_block_division.scala 149:34]
      multiplierReg_15 <= 6'h0; // @[bundled_block_division.scala 149:34]
    end else begin
      multiplierReg_15 <= io_in_a_man_15; // @[bundled_block_division.scala 154:21]
    end
    if (reset) begin // @[bundled_block_division.scala 150:35]
      multiplierReg2_15 <= 6'h0; // @[bundled_block_division.scala 150:35]
    end else begin
      multiplierReg2_15 <= io_in_b_man_15; // @[bundled_block_division.scala 155:22]
    end
    if (reset) begin // @[bundled_block_division.scala 152:28]
      signReg_15 <= 1'h0; // @[bundled_block_division.scala 152:28]
    end else begin
      signReg_15 <= io_in_a_sign_15; // @[bundled_block_division.scala 153:15]
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
  exp_output_0 = _RAND_0[8:0];
  _RAND_1 = {1{`RANDOM}};
  exp_output_1 = _RAND_1[8:0];
  _RAND_2 = {1{`RANDOM}};
  exp_output_2 = _RAND_2[8:0];
  _RAND_3 = {1{`RANDOM}};
  exp_output_3 = _RAND_3[8:0];
  _RAND_4 = {1{`RANDOM}};
  acc_0 = _RAND_4[15:0];
  _RAND_5 = {1{`RANDOM}};
  acc_1 = _RAND_5[15:0];
  _RAND_6 = {1{`RANDOM}};
  acc_2 = _RAND_6[15:0];
  _RAND_7 = {1{`RANDOM}};
  acc_3 = _RAND_7[15:0];
  _RAND_8 = {1{`RANDOM}};
  dotProductRegs__0 = _RAND_8[11:0];
  _RAND_9 = {1{`RANDOM}};
  dotProductRegs__1 = _RAND_9[11:0];
  _RAND_10 = {1{`RANDOM}};
  dotProductRegs__2 = _RAND_10[11:0];
  _RAND_11 = {1{`RANDOM}};
  dotProductRegs__3 = _RAND_11[11:0];
  _RAND_12 = {1{`RANDOM}};
  signs__0 = _RAND_12[0:0];
  _RAND_13 = {1{`RANDOM}};
  signs__1 = _RAND_13[0:0];
  _RAND_14 = {1{`RANDOM}};
  signs__2 = _RAND_14[0:0];
  _RAND_15 = {1{`RANDOM}};
  signs__3 = _RAND_15[0:0];
  _RAND_16 = {1{`RANDOM}};
  two_complement__0 = _RAND_16[12:0];
  _RAND_17 = {1{`RANDOM}};
  two_complement__1 = _RAND_17[12:0];
  _RAND_18 = {1{`RANDOM}};
  two_complement__2 = _RAND_18[12:0];
  _RAND_19 = {1{`RANDOM}};
  two_complement__3 = _RAND_19[12:0];
  _RAND_20 = {1{`RANDOM}};
  two_complement_buffer__0 = _RAND_20[12:0];
  _RAND_21 = {1{`RANDOM}};
  two_complement_buffer__1 = _RAND_21[12:0];
  _RAND_22 = {1{`RANDOM}};
  two_complement_buffer__2 = _RAND_22[12:0];
  _RAND_23 = {1{`RANDOM}};
  two_complement_buffer__3 = _RAND_23[12:0];
  _RAND_24 = {1{`RANDOM}};
  multiplierReg = _RAND_24[5:0];
  _RAND_25 = {1{`RANDOM}};
  multiplierReg2 = _RAND_25[5:0];
  _RAND_26 = {1{`RANDOM}};
  signReg = _RAND_26[0:0];
  _RAND_27 = {1{`RANDOM}};
  multiplierReg_1 = _RAND_27[5:0];
  _RAND_28 = {1{`RANDOM}};
  multiplierReg2_1 = _RAND_28[5:0];
  _RAND_29 = {1{`RANDOM}};
  signReg_1 = _RAND_29[0:0];
  _RAND_30 = {1{`RANDOM}};
  multiplierReg_2 = _RAND_30[5:0];
  _RAND_31 = {1{`RANDOM}};
  multiplierReg2_2 = _RAND_31[5:0];
  _RAND_32 = {1{`RANDOM}};
  signReg_2 = _RAND_32[0:0];
  _RAND_33 = {1{`RANDOM}};
  multiplierReg_3 = _RAND_33[5:0];
  _RAND_34 = {1{`RANDOM}};
  multiplierReg2_3 = _RAND_34[5:0];
  _RAND_35 = {1{`RANDOM}};
  signReg_3 = _RAND_35[0:0];
  _RAND_36 = {1{`RANDOM}};
  dotProductRegs_1_0 = _RAND_36[11:0];
  _RAND_37 = {1{`RANDOM}};
  dotProductRegs_1_1 = _RAND_37[11:0];
  _RAND_38 = {1{`RANDOM}};
  dotProductRegs_1_2 = _RAND_38[11:0];
  _RAND_39 = {1{`RANDOM}};
  dotProductRegs_1_3 = _RAND_39[11:0];
  _RAND_40 = {1{`RANDOM}};
  signs_1_0 = _RAND_40[0:0];
  _RAND_41 = {1{`RANDOM}};
  signs_1_1 = _RAND_41[0:0];
  _RAND_42 = {1{`RANDOM}};
  signs_1_2 = _RAND_42[0:0];
  _RAND_43 = {1{`RANDOM}};
  signs_1_3 = _RAND_43[0:0];
  _RAND_44 = {1{`RANDOM}};
  two_complement_1_0 = _RAND_44[12:0];
  _RAND_45 = {1{`RANDOM}};
  two_complement_1_1 = _RAND_45[12:0];
  _RAND_46 = {1{`RANDOM}};
  two_complement_1_2 = _RAND_46[12:0];
  _RAND_47 = {1{`RANDOM}};
  two_complement_1_3 = _RAND_47[12:0];
  _RAND_48 = {1{`RANDOM}};
  two_complement_buffer_1_0 = _RAND_48[12:0];
  _RAND_49 = {1{`RANDOM}};
  two_complement_buffer_1_1 = _RAND_49[12:0];
  _RAND_50 = {1{`RANDOM}};
  two_complement_buffer_1_2 = _RAND_50[12:0];
  _RAND_51 = {1{`RANDOM}};
  two_complement_buffer_1_3 = _RAND_51[12:0];
  _RAND_52 = {1{`RANDOM}};
  multiplierReg_4 = _RAND_52[5:0];
  _RAND_53 = {1{`RANDOM}};
  multiplierReg2_4 = _RAND_53[5:0];
  _RAND_54 = {1{`RANDOM}};
  signReg_4 = _RAND_54[0:0];
  _RAND_55 = {1{`RANDOM}};
  multiplierReg_5 = _RAND_55[5:0];
  _RAND_56 = {1{`RANDOM}};
  multiplierReg2_5 = _RAND_56[5:0];
  _RAND_57 = {1{`RANDOM}};
  signReg_5 = _RAND_57[0:0];
  _RAND_58 = {1{`RANDOM}};
  multiplierReg_6 = _RAND_58[5:0];
  _RAND_59 = {1{`RANDOM}};
  multiplierReg2_6 = _RAND_59[5:0];
  _RAND_60 = {1{`RANDOM}};
  signReg_6 = _RAND_60[0:0];
  _RAND_61 = {1{`RANDOM}};
  multiplierReg_7 = _RAND_61[5:0];
  _RAND_62 = {1{`RANDOM}};
  multiplierReg2_7 = _RAND_62[5:0];
  _RAND_63 = {1{`RANDOM}};
  signReg_7 = _RAND_63[0:0];
  _RAND_64 = {1{`RANDOM}};
  dotProductRegs_2_0 = _RAND_64[11:0];
  _RAND_65 = {1{`RANDOM}};
  dotProductRegs_2_1 = _RAND_65[11:0];
  _RAND_66 = {1{`RANDOM}};
  dotProductRegs_2_2 = _RAND_66[11:0];
  _RAND_67 = {1{`RANDOM}};
  dotProductRegs_2_3 = _RAND_67[11:0];
  _RAND_68 = {1{`RANDOM}};
  signs_2_0 = _RAND_68[0:0];
  _RAND_69 = {1{`RANDOM}};
  signs_2_1 = _RAND_69[0:0];
  _RAND_70 = {1{`RANDOM}};
  signs_2_2 = _RAND_70[0:0];
  _RAND_71 = {1{`RANDOM}};
  signs_2_3 = _RAND_71[0:0];
  _RAND_72 = {1{`RANDOM}};
  two_complement_2_0 = _RAND_72[12:0];
  _RAND_73 = {1{`RANDOM}};
  two_complement_2_1 = _RAND_73[12:0];
  _RAND_74 = {1{`RANDOM}};
  two_complement_2_2 = _RAND_74[12:0];
  _RAND_75 = {1{`RANDOM}};
  two_complement_2_3 = _RAND_75[12:0];
  _RAND_76 = {1{`RANDOM}};
  two_complement_buffer_2_0 = _RAND_76[12:0];
  _RAND_77 = {1{`RANDOM}};
  two_complement_buffer_2_1 = _RAND_77[12:0];
  _RAND_78 = {1{`RANDOM}};
  two_complement_buffer_2_2 = _RAND_78[12:0];
  _RAND_79 = {1{`RANDOM}};
  two_complement_buffer_2_3 = _RAND_79[12:0];
  _RAND_80 = {1{`RANDOM}};
  multiplierReg_8 = _RAND_80[5:0];
  _RAND_81 = {1{`RANDOM}};
  multiplierReg2_8 = _RAND_81[5:0];
  _RAND_82 = {1{`RANDOM}};
  signReg_8 = _RAND_82[0:0];
  _RAND_83 = {1{`RANDOM}};
  multiplierReg_9 = _RAND_83[5:0];
  _RAND_84 = {1{`RANDOM}};
  multiplierReg2_9 = _RAND_84[5:0];
  _RAND_85 = {1{`RANDOM}};
  signReg_9 = _RAND_85[0:0];
  _RAND_86 = {1{`RANDOM}};
  multiplierReg_10 = _RAND_86[5:0];
  _RAND_87 = {1{`RANDOM}};
  multiplierReg2_10 = _RAND_87[5:0];
  _RAND_88 = {1{`RANDOM}};
  signReg_10 = _RAND_88[0:0];
  _RAND_89 = {1{`RANDOM}};
  multiplierReg_11 = _RAND_89[5:0];
  _RAND_90 = {1{`RANDOM}};
  multiplierReg2_11 = _RAND_90[5:0];
  _RAND_91 = {1{`RANDOM}};
  signReg_11 = _RAND_91[0:0];
  _RAND_92 = {1{`RANDOM}};
  dotProductRegs_3_0 = _RAND_92[11:0];
  _RAND_93 = {1{`RANDOM}};
  dotProductRegs_3_1 = _RAND_93[11:0];
  _RAND_94 = {1{`RANDOM}};
  dotProductRegs_3_2 = _RAND_94[11:0];
  _RAND_95 = {1{`RANDOM}};
  dotProductRegs_3_3 = _RAND_95[11:0];
  _RAND_96 = {1{`RANDOM}};
  signs_3_0 = _RAND_96[0:0];
  _RAND_97 = {1{`RANDOM}};
  signs_3_1 = _RAND_97[0:0];
  _RAND_98 = {1{`RANDOM}};
  signs_3_2 = _RAND_98[0:0];
  _RAND_99 = {1{`RANDOM}};
  signs_3_3 = _RAND_99[0:0];
  _RAND_100 = {1{`RANDOM}};
  two_complement_3_0 = _RAND_100[12:0];
  _RAND_101 = {1{`RANDOM}};
  two_complement_3_1 = _RAND_101[12:0];
  _RAND_102 = {1{`RANDOM}};
  two_complement_3_2 = _RAND_102[12:0];
  _RAND_103 = {1{`RANDOM}};
  two_complement_3_3 = _RAND_103[12:0];
  _RAND_104 = {1{`RANDOM}};
  two_complement_buffer_3_0 = _RAND_104[12:0];
  _RAND_105 = {1{`RANDOM}};
  two_complement_buffer_3_1 = _RAND_105[12:0];
  _RAND_106 = {1{`RANDOM}};
  two_complement_buffer_3_2 = _RAND_106[12:0];
  _RAND_107 = {1{`RANDOM}};
  two_complement_buffer_3_3 = _RAND_107[12:0];
  _RAND_108 = {1{`RANDOM}};
  multiplierReg_12 = _RAND_108[5:0];
  _RAND_109 = {1{`RANDOM}};
  multiplierReg2_12 = _RAND_109[5:0];
  _RAND_110 = {1{`RANDOM}};
  signReg_12 = _RAND_110[0:0];
  _RAND_111 = {1{`RANDOM}};
  multiplierReg_13 = _RAND_111[5:0];
  _RAND_112 = {1{`RANDOM}};
  multiplierReg2_13 = _RAND_112[5:0];
  _RAND_113 = {1{`RANDOM}};
  signReg_13 = _RAND_113[0:0];
  _RAND_114 = {1{`RANDOM}};
  multiplierReg_14 = _RAND_114[5:0];
  _RAND_115 = {1{`RANDOM}};
  multiplierReg2_14 = _RAND_115[5:0];
  _RAND_116 = {1{`RANDOM}};
  signReg_14 = _RAND_116[0:0];
  _RAND_117 = {1{`RANDOM}};
  multiplierReg_15 = _RAND_117[5:0];
  _RAND_118 = {1{`RANDOM}};
  multiplierReg2_15 = _RAND_118[5:0];
  _RAND_119 = {1{`RANDOM}};
  signReg_15 = _RAND_119[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
