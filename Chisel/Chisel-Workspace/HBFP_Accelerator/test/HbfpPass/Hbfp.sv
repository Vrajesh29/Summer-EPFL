module Hbfp(
  input         clock,
  input         reset,
  input  [4:0]  io_man_a_0,
  input  [4:0]  io_man_a_1,
  input  [4:0]  io_man_a_2,
  input  [4:0]  io_man_a_3,
  input  [4:0]  io_man_b_0,
  input  [4:0]  io_man_b_1,
  input  [4:0]  io_man_b_2,
  input  [4:0]  io_man_b_3,
  input         io_sign_a_0,
  input         io_sign_a_1,
  input         io_sign_a_2,
  input         io_sign_a_3,
  input         io_sign_b_0,
  input         io_sign_b_1,
  input         io_sign_b_2,
  input         io_sign_b_3,
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
`endif // RANDOMIZE_REG_INIT
  wire [8:0] exp_output = io_exp_a + io_exp_b; // @[hbfp.scala 190:23]
  reg [9:0] dotProductRegs_0; // @[hbfp.scala 192:51]
  reg [9:0] dotProductRegs_1; // @[hbfp.scala 192:51]
  reg [9:0] dotProductRegs_2; // @[hbfp.scala 192:51]
  reg [9:0] dotProductRegs_3; // @[hbfp.scala 192:51]
  reg [10:0] two_complement_buffer_0; // @[hbfp.scala 193:58]
  reg [10:0] two_complement_buffer_1; // @[hbfp.scala 193:58]
  reg [10:0] two_complement_buffer_2; // @[hbfp.scala 193:58]
  reg [10:0] two_complement_buffer_3; // @[hbfp.scala 193:58]
  reg [10:0] two_complement_0; // @[hbfp.scala 194:51]
  reg [10:0] two_complement_1; // @[hbfp.scala 194:51]
  reg [10:0] two_complement_2; // @[hbfp.scala 194:51]
  reg [10:0] two_complement_3; // @[hbfp.scala 194:51]
  reg  signs_0; // @[hbfp.scala 195:42]
  reg  signs_1; // @[hbfp.scala 195:42]
  reg  signs_2; // @[hbfp.scala 195:42]
  reg  signs_3; // @[hbfp.scala 195:42]
  reg [13:0] acc; // @[hbfp.scala 196:20]
  reg [13:0] acc_hbfp; // @[hbfp.scala 197:25]
  reg [13:0] acc_buf; // @[hbfp.scala 198:24]
  reg [4:0] multiplierReg; // @[hbfp.scala 202:32]
  reg  signReg; // @[hbfp.scala 203:26]
  wire [9:0] _dotProductRegs_0_T = multiplierReg * io_man_b_0; // @[hbfp.scala 206:40]
  wire [10:0] _two_complement_0_T_1 = {1'h0,dotProductRegs_0}; // @[hbfp.scala 208:53]
  wire [10:0] _two_complement_0_T_2 = ~_two_complement_0_T_1; // @[hbfp.scala 208:47]
  wire [10:0] _two_complement_0_T_4 = _two_complement_0_T_2 + 11'h1; // @[hbfp.scala 208:75]
  reg [4:0] multiplierReg_1; // @[hbfp.scala 202:32]
  reg  signReg_1; // @[hbfp.scala 203:26]
  wire [9:0] _dotProductRegs_1_T = multiplierReg_1 * io_man_b_1; // @[hbfp.scala 206:40]
  wire [10:0] _two_complement_1_T_1 = {1'h0,dotProductRegs_1}; // @[hbfp.scala 208:53]
  wire [10:0] _two_complement_1_T_2 = ~_two_complement_1_T_1; // @[hbfp.scala 208:47]
  wire [10:0] _two_complement_1_T_4 = _two_complement_1_T_2 + 11'h1; // @[hbfp.scala 208:75]
  reg [4:0] multiplierReg_2; // @[hbfp.scala 202:32]
  reg  signReg_2; // @[hbfp.scala 203:26]
  wire [9:0] _dotProductRegs_2_T = multiplierReg_2 * io_man_b_2; // @[hbfp.scala 206:40]
  wire [10:0] _two_complement_2_T_1 = {1'h0,dotProductRegs_2}; // @[hbfp.scala 208:53]
  wire [10:0] _two_complement_2_T_2 = ~_two_complement_2_T_1; // @[hbfp.scala 208:47]
  wire [10:0] _two_complement_2_T_4 = _two_complement_2_T_2 + 11'h1; // @[hbfp.scala 208:75]
  reg [4:0] multiplierReg_3; // @[hbfp.scala 202:32]
  reg  signReg_3; // @[hbfp.scala 203:26]
  wire [9:0] _dotProductRegs_3_T = multiplierReg_3 * io_man_b_3; // @[hbfp.scala 206:40]
  wire [10:0] _two_complement_3_T_1 = {1'h0,dotProductRegs_3}; // @[hbfp.scala 208:53]
  wire [10:0] _two_complement_3_T_2 = ~_two_complement_3_T_1; // @[hbfp.scala 208:47]
  wire [10:0] _two_complement_3_T_4 = _two_complement_3_T_2 + 11'h1; // @[hbfp.scala 208:75]
  wire [11:0] _acc_T = $signed(two_complement_buffer_0) + $signed(two_complement_buffer_1); // @[hbfp.scala 212:40]
  wire [11:0] _GEN_0 = {{1{two_complement_buffer_2[10]}},two_complement_buffer_2}; // @[hbfp.scala 212:40]
  wire [12:0] _acc_T_1 = $signed(_acc_T) + $signed(_GEN_0); // @[hbfp.scala 212:40]
  wire [12:0] _GEN_1 = {{2{two_complement_buffer_3[10]}},two_complement_buffer_3}; // @[hbfp.scala 212:40]
  wire [13:0] _acc_T_2 = $signed(_acc_T_1) + $signed(_GEN_1); // @[hbfp.scala 212:40]
  wire [13:0] _acc_hbfp_T_3 = {1'h0,acc_buf[12:0]}; // @[hbfp.scala 216:60]
  wire [13:0] _acc_hbfp_T_4 = ~_acc_hbfp_T_3; // @[hbfp.scala 216:54]
  wire [13:0] _acc_hbfp_T_6 = _acc_hbfp_T_4 + 14'h1; // @[hbfp.scala 216:92]
  reg [7:0] right_shift; // @[hbfp.scala 217:28]
  reg [7:0] actual_shift; // @[hbfp.scala 218:29]
  wire [7:0] _GEN_2 = {{4'd0}, acc_hbfp[12:9]}; // @[Bitwise.scala 108:31]
  wire [7:0] _buf_T_4 = _GEN_2 & 8'hf; // @[Bitwise.scala 108:31]
  wire [7:0] _buf_T_6 = {acc_hbfp[8:5], 4'h0}; // @[Bitwise.scala 108:70]
  wire [7:0] _buf_T_8 = _buf_T_6 & 8'hf0; // @[Bitwise.scala 108:80]
  wire [7:0] _buf_T_9 = _buf_T_4 | _buf_T_8; // @[Bitwise.scala 108:39]
  wire [7:0] _GEN_3 = {{2'd0}, _buf_T_9[7:2]}; // @[Bitwise.scala 108:31]
  wire [7:0] _buf_T_14 = _GEN_3 & 8'h33; // @[Bitwise.scala 108:31]
  wire [7:0] _buf_T_16 = {_buf_T_9[5:0], 2'h0}; // @[Bitwise.scala 108:70]
  wire [7:0] _buf_T_18 = _buf_T_16 & 8'hcc; // @[Bitwise.scala 108:80]
  wire [7:0] _buf_T_19 = _buf_T_14 | _buf_T_18; // @[Bitwise.scala 108:39]
  wire [7:0] _GEN_4 = {{1'd0}, _buf_T_19[7:1]}; // @[Bitwise.scala 108:31]
  wire [7:0] _buf_T_24 = _GEN_4 & 8'h55; // @[Bitwise.scala 108:31]
  wire [7:0] _buf_T_26 = {_buf_T_19[6:0], 1'h0}; // @[Bitwise.scala 108:70]
  wire [7:0] _buf_T_28 = _buf_T_26 & 8'haa; // @[Bitwise.scala 108:80]
  wire [7:0] _buf_T_29 = _buf_T_24 | _buf_T_28; // @[Bitwise.scala 108:39]
  wire [8:0] buf_ = {1'h0,_buf_T_29}; // @[hbfp.scala 219:17]
  wire [3:0] _right_shift_T_9 = buf_[7] ? 4'h7 : 4'h8; // @[Mux.scala 47:70]
  wire [3:0] _right_shift_T_10 = buf_[6] ? 4'h6 : _right_shift_T_9; // @[Mux.scala 47:70]
  wire [3:0] _right_shift_T_11 = buf_[5] ? 4'h5 : _right_shift_T_10; // @[Mux.scala 47:70]
  wire [3:0] _right_shift_T_12 = buf_[4] ? 4'h4 : _right_shift_T_11; // @[Mux.scala 47:70]
  wire [3:0] _right_shift_T_13 = buf_[3] ? 4'h3 : _right_shift_T_12; // @[Mux.scala 47:70]
  wire [3:0] _right_shift_T_14 = buf_[2] ? 4'h2 : _right_shift_T_13; // @[Mux.scala 47:70]
  wire [3:0] _right_shift_T_15 = buf_[1] ? 4'h1 : _right_shift_T_14; // @[Mux.scala 47:70]
  wire [3:0] _right_shift_T_16 = buf_[0] ? 4'h0 : _right_shift_T_15; // @[Mux.scala 47:70]
  wire [7:0] _actual_shift_T_1 = 8'hc - right_shift; // @[hbfp.scala 223:45]
  wire [7:0] _actual_shift_T_3 = _actual_shift_T_1 - 8'h4; // @[hbfp.scala 223:60]
  wire [13:0] man_out_shifted = acc_hbfp >> actual_shift; // @[hbfp.scala 225:34]
  wire [8:0] _GEN_5 = {{1'd0}, actual_shift}; // @[hbfp.scala 227:28]
  wire [9:0] exp_actual = exp_output + _GEN_5; // @[hbfp.scala 227:28]
  wire [8:0] _io_result_T_2 = {acc[13],exp_actual[9:2]}; // @[hbfp.scala 229:44]
  assign io_result = {_io_result_T_2,man_out_shifted[4:0]}; // @[hbfp.scala 229:66]
  always @(posedge clock) begin
    if (reset) begin // @[hbfp.scala 192:51]
      dotProductRegs_0 <= 10'h0; // @[hbfp.scala 192:51]
    end else begin
      dotProductRegs_0 <= _dotProductRegs_0_T; // @[hbfp.scala 206:23]
    end
    if (reset) begin // @[hbfp.scala 192:51]
      dotProductRegs_1 <= 10'h0; // @[hbfp.scala 192:51]
    end else begin
      dotProductRegs_1 <= _dotProductRegs_1_T; // @[hbfp.scala 206:23]
    end
    if (reset) begin // @[hbfp.scala 192:51]
      dotProductRegs_2 <= 10'h0; // @[hbfp.scala 192:51]
    end else begin
      dotProductRegs_2 <= _dotProductRegs_2_T; // @[hbfp.scala 206:23]
    end
    if (reset) begin // @[hbfp.scala 192:51]
      dotProductRegs_3 <= 10'h0; // @[hbfp.scala 192:51]
    end else begin
      dotProductRegs_3 <= _dotProductRegs_3_T; // @[hbfp.scala 206:23]
    end
    if (reset) begin // @[hbfp.scala 193:58]
      two_complement_buffer_0 <= 11'sh0; // @[hbfp.scala 193:58]
    end else begin
      two_complement_buffer_0 <= two_complement_0; // @[hbfp.scala 209:30]
    end
    if (reset) begin // @[hbfp.scala 193:58]
      two_complement_buffer_1 <= 11'sh0; // @[hbfp.scala 193:58]
    end else begin
      two_complement_buffer_1 <= two_complement_1; // @[hbfp.scala 209:30]
    end
    if (reset) begin // @[hbfp.scala 193:58]
      two_complement_buffer_2 <= 11'sh0; // @[hbfp.scala 193:58]
    end else begin
      two_complement_buffer_2 <= two_complement_2; // @[hbfp.scala 209:30]
    end
    if (reset) begin // @[hbfp.scala 193:58]
      two_complement_buffer_3 <= 11'sh0; // @[hbfp.scala 193:58]
    end else begin
      two_complement_buffer_3 <= two_complement_3; // @[hbfp.scala 209:30]
    end
    if (reset) begin // @[hbfp.scala 194:51]
      two_complement_0 <= 11'h0; // @[hbfp.scala 194:51]
    end else if (signs_0) begin // @[hbfp.scala 208:29]
      two_complement_0 <= _two_complement_0_T_4;
    end else begin
      two_complement_0 <= _two_complement_0_T_1;
    end
    if (reset) begin // @[hbfp.scala 194:51]
      two_complement_1 <= 11'h0; // @[hbfp.scala 194:51]
    end else if (signs_1) begin // @[hbfp.scala 208:29]
      two_complement_1 <= _two_complement_1_T_4;
    end else begin
      two_complement_1 <= _two_complement_1_T_1;
    end
    if (reset) begin // @[hbfp.scala 194:51]
      two_complement_2 <= 11'h0; // @[hbfp.scala 194:51]
    end else if (signs_2) begin // @[hbfp.scala 208:29]
      two_complement_2 <= _two_complement_2_T_4;
    end else begin
      two_complement_2 <= _two_complement_2_T_1;
    end
    if (reset) begin // @[hbfp.scala 194:51]
      two_complement_3 <= 11'h0; // @[hbfp.scala 194:51]
    end else if (signs_3) begin // @[hbfp.scala 208:29]
      two_complement_3 <= _two_complement_3_T_4;
    end else begin
      two_complement_3 <= _two_complement_3_T_1;
    end
    if (reset) begin // @[hbfp.scala 195:42]
      signs_0 <= 1'h0; // @[hbfp.scala 195:42]
    end else begin
      signs_0 <= signReg ^ io_sign_b_0; // @[hbfp.scala 207:14]
    end
    if (reset) begin // @[hbfp.scala 195:42]
      signs_1 <= 1'h0; // @[hbfp.scala 195:42]
    end else begin
      signs_1 <= signReg_1 ^ io_sign_b_1; // @[hbfp.scala 207:14]
    end
    if (reset) begin // @[hbfp.scala 195:42]
      signs_2 <= 1'h0; // @[hbfp.scala 195:42]
    end else begin
      signs_2 <= signReg_2 ^ io_sign_b_2; // @[hbfp.scala 207:14]
    end
    if (reset) begin // @[hbfp.scala 195:42]
      signs_3 <= 1'h0; // @[hbfp.scala 195:42]
    end else begin
      signs_3 <= signReg_3 ^ io_sign_b_3; // @[hbfp.scala 207:14]
    end
    if (reset) begin // @[hbfp.scala 196:20]
      acc <= 14'sh0; // @[hbfp.scala 196:20]
    end else begin
      acc <= _acc_T_2; // @[hbfp.scala 212:7]
    end
    if (reset) begin // @[hbfp.scala 197:25]
      acc_hbfp <= 14'h0; // @[hbfp.scala 197:25]
    end else if (acc[13]) begin // @[hbfp.scala 216:18]
      acc_hbfp <= _acc_hbfp_T_6;
    end else begin
      acc_hbfp <= acc_buf;
    end
    if (reset) begin // @[hbfp.scala 198:24]
      acc_buf <= 14'h0; // @[hbfp.scala 198:24]
    end else begin
      acc_buf <= acc; // @[hbfp.scala 213:11]
    end
    if (reset) begin // @[hbfp.scala 202:32]
      multiplierReg <= 5'h0; // @[hbfp.scala 202:32]
    end else begin
      multiplierReg <= io_man_a_0; // @[hbfp.scala 205:19]
    end
    if (reset) begin // @[hbfp.scala 203:26]
      signReg <= 1'h0; // @[hbfp.scala 203:26]
    end else begin
      signReg <= io_sign_a_0; // @[hbfp.scala 204:13]
    end
    if (reset) begin // @[hbfp.scala 202:32]
      multiplierReg_1 <= 5'h0; // @[hbfp.scala 202:32]
    end else begin
      multiplierReg_1 <= io_man_a_1; // @[hbfp.scala 205:19]
    end
    if (reset) begin // @[hbfp.scala 203:26]
      signReg_1 <= 1'h0; // @[hbfp.scala 203:26]
    end else begin
      signReg_1 <= io_sign_a_1; // @[hbfp.scala 204:13]
    end
    if (reset) begin // @[hbfp.scala 202:32]
      multiplierReg_2 <= 5'h0; // @[hbfp.scala 202:32]
    end else begin
      multiplierReg_2 <= io_man_a_2; // @[hbfp.scala 205:19]
    end
    if (reset) begin // @[hbfp.scala 203:26]
      signReg_2 <= 1'h0; // @[hbfp.scala 203:26]
    end else begin
      signReg_2 <= io_sign_a_2; // @[hbfp.scala 204:13]
    end
    if (reset) begin // @[hbfp.scala 202:32]
      multiplierReg_3 <= 5'h0; // @[hbfp.scala 202:32]
    end else begin
      multiplierReg_3 <= io_man_a_3; // @[hbfp.scala 205:19]
    end
    if (reset) begin // @[hbfp.scala 203:26]
      signReg_3 <= 1'h0; // @[hbfp.scala 203:26]
    end else begin
      signReg_3 <= io_sign_a_3; // @[hbfp.scala 204:13]
    end
    if (reset) begin // @[hbfp.scala 217:28]
      right_shift <= 8'h0; // @[hbfp.scala 217:28]
    end else begin
      right_shift <= {{4'd0}, _right_shift_T_16}; // @[hbfp.scala 221:15]
    end
    if (reset) begin // @[hbfp.scala 218:29]
      actual_shift <= 8'h0; // @[hbfp.scala 218:29]
    end else begin
      actual_shift <= _actual_shift_T_3; // @[hbfp.scala 223:16]
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
  dotProductRegs_0 = _RAND_0[9:0];
  _RAND_1 = {1{`RANDOM}};
  dotProductRegs_1 = _RAND_1[9:0];
  _RAND_2 = {1{`RANDOM}};
  dotProductRegs_2 = _RAND_2[9:0];
  _RAND_3 = {1{`RANDOM}};
  dotProductRegs_3 = _RAND_3[9:0];
  _RAND_4 = {1{`RANDOM}};
  two_complement_buffer_0 = _RAND_4[10:0];
  _RAND_5 = {1{`RANDOM}};
  two_complement_buffer_1 = _RAND_5[10:0];
  _RAND_6 = {1{`RANDOM}};
  two_complement_buffer_2 = _RAND_6[10:0];
  _RAND_7 = {1{`RANDOM}};
  two_complement_buffer_3 = _RAND_7[10:0];
  _RAND_8 = {1{`RANDOM}};
  two_complement_0 = _RAND_8[10:0];
  _RAND_9 = {1{`RANDOM}};
  two_complement_1 = _RAND_9[10:0];
  _RAND_10 = {1{`RANDOM}};
  two_complement_2 = _RAND_10[10:0];
  _RAND_11 = {1{`RANDOM}};
  two_complement_3 = _RAND_11[10:0];
  _RAND_12 = {1{`RANDOM}};
  signs_0 = _RAND_12[0:0];
  _RAND_13 = {1{`RANDOM}};
  signs_1 = _RAND_13[0:0];
  _RAND_14 = {1{`RANDOM}};
  signs_2 = _RAND_14[0:0];
  _RAND_15 = {1{`RANDOM}};
  signs_3 = _RAND_15[0:0];
  _RAND_16 = {1{`RANDOM}};
  acc = _RAND_16[13:0];
  _RAND_17 = {1{`RANDOM}};
  acc_hbfp = _RAND_17[13:0];
  _RAND_18 = {1{`RANDOM}};
  acc_buf = _RAND_18[13:0];
  _RAND_19 = {1{`RANDOM}};
  multiplierReg = _RAND_19[4:0];
  _RAND_20 = {1{`RANDOM}};
  signReg = _RAND_20[0:0];
  _RAND_21 = {1{`RANDOM}};
  multiplierReg_1 = _RAND_21[4:0];
  _RAND_22 = {1{`RANDOM}};
  signReg_1 = _RAND_22[0:0];
  _RAND_23 = {1{`RANDOM}};
  multiplierReg_2 = _RAND_23[4:0];
  _RAND_24 = {1{`RANDOM}};
  signReg_2 = _RAND_24[0:0];
  _RAND_25 = {1{`RANDOM}};
  multiplierReg_3 = _RAND_25[4:0];
  _RAND_26 = {1{`RANDOM}};
  signReg_3 = _RAND_26[0:0];
  _RAND_27 = {1{`RANDOM}};
  right_shift = _RAND_27[7:0];
  _RAND_28 = {1{`RANDOM}};
  actual_shift = _RAND_28[7:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
