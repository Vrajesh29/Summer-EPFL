module HBFP_MAC(
  input        clock,
  input        reset,
  input        io_in_a_sign_0,
  input        io_in_a_sign_1,
  input        io_in_a_sign_2,
  input        io_in_a_sign_3,
  input  [5:0] io_in_a_man_0,
  input  [5:0] io_in_a_man_1,
  input  [5:0] io_in_a_man_2,
  input  [5:0] io_in_a_man_3,
  input  [7:0] io_in_a_exp,
  input        io_in_b_sign_0,
  input        io_in_b_sign_1,
  input        io_in_b_sign_2,
  input        io_in_b_sign_3,
  input  [5:0] io_in_b_man_0,
  input  [5:0] io_in_b_man_1,
  input  [5:0] io_in_b_man_2,
  input  [5:0] io_in_b_man_3,
  input  [7:0] io_in_b_exp,
  output       io_out_result_sign,
  output [5:0] io_out_result_man,
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
`endif // RANDOMIZE_REG_INIT
  wire [8:0] exp_addition = io_in_a_exp + io_in_b_exp; // @[HBFP_GEMM.scala 34:36]
  wire [8:0] _io_out_result_exp_T_1 = 9'h100 - 9'h1; // @[HBFP_GEMM.scala 35:59]
  wire [8:0] _io_out_result_exp_T_5 = exp_addition > _io_out_result_exp_T_1 ? _io_out_result_exp_T_1 : exp_addition; // @[HBFP_GEMM.scala 35:29]
  reg [5:0] dotProductRegs_0; // @[HBFP_GEMM.scala 37:53]
  reg [5:0] dotProductRegs_1; // @[HBFP_GEMM.scala 37:53]
  reg [5:0] dotProductRegs_2; // @[HBFP_GEMM.scala 37:53]
  reg [5:0] dotProductRegs_3; // @[HBFP_GEMM.scala 37:53]
  reg [6:0] two_complement_buffer_0; // @[HBFP_GEMM.scala 38:60]
  reg [6:0] two_complement_buffer_1; // @[HBFP_GEMM.scala 38:60]
  reg [6:0] two_complement_buffer_2; // @[HBFP_GEMM.scala 38:60]
  reg [6:0] two_complement_buffer_3; // @[HBFP_GEMM.scala 38:60]
  reg  signs_0; // @[HBFP_GEMM.scala 39:44]
  reg  signs_1; // @[HBFP_GEMM.scala 39:44]
  reg  signs_2; // @[HBFP_GEMM.scala 39:44]
  reg  signs_3; // @[HBFP_GEMM.scala 39:44]
  wire [11:0] multiplication = io_in_a_man_0 * io_in_b_man_0; // @[HBFP_GEMM.scala 42:45]
  wire [6:0] _dotProductRegs_0_T_1 = 7'h40 - 7'h1; // @[HBFP_GEMM.scala 43:65]
  wire [11:0] _GEN_0 = {{5'd0}, _dotProductRegs_0_T_1}; // @[HBFP_GEMM.scala 43:49]
  wire [11:0] _dotProductRegs_0_T_5 = multiplication > _GEN_0 ? {{5'd0}, _dotProductRegs_0_T_1} : multiplication; // @[HBFP_GEMM.scala 43:33]
  wire [6:0] _two_complement_buffer_0_T_1 = {1'h0,dotProductRegs_0}; // @[HBFP_GEMM.scala 45:64]
  wire [6:0] _two_complement_buffer_0_T_2 = ~_two_complement_buffer_0_T_1; // @[HBFP_GEMM.scala 45:58]
  wire [6:0] _two_complement_buffer_0_T_4 = _two_complement_buffer_0_T_2 + 7'h1; // @[HBFP_GEMM.scala 45:86]
  wire [6:0] _two_complement_buffer_0_T_7 = signs_0 ? _two_complement_buffer_0_T_4 : _two_complement_buffer_0_T_1; // @[HBFP_GEMM.scala 45:122]
  wire [11:0] multiplication_1 = io_in_a_man_1 * io_in_b_man_1; // @[HBFP_GEMM.scala 42:45]
  wire [11:0] _dotProductRegs_1_T_5 = multiplication_1 > _GEN_0 ? {{5'd0}, _dotProductRegs_0_T_1} : multiplication_1; // @[HBFP_GEMM.scala 43:33]
  wire [6:0] _two_complement_buffer_1_T_1 = {1'h0,dotProductRegs_1}; // @[HBFP_GEMM.scala 45:64]
  wire [6:0] _two_complement_buffer_1_T_2 = ~_two_complement_buffer_1_T_1; // @[HBFP_GEMM.scala 45:58]
  wire [6:0] _two_complement_buffer_1_T_4 = _two_complement_buffer_1_T_2 + 7'h1; // @[HBFP_GEMM.scala 45:86]
  wire [6:0] _two_complement_buffer_1_T_7 = signs_1 ? _two_complement_buffer_1_T_4 : _two_complement_buffer_1_T_1; // @[HBFP_GEMM.scala 45:122]
  wire [11:0] multiplication_2 = io_in_a_man_2 * io_in_b_man_2; // @[HBFP_GEMM.scala 42:45]
  wire [11:0] _dotProductRegs_2_T_5 = multiplication_2 > _GEN_0 ? {{5'd0}, _dotProductRegs_0_T_1} : multiplication_2; // @[HBFP_GEMM.scala 43:33]
  wire [6:0] _two_complement_buffer_2_T_1 = {1'h0,dotProductRegs_2}; // @[HBFP_GEMM.scala 45:64]
  wire [6:0] _two_complement_buffer_2_T_2 = ~_two_complement_buffer_2_T_1; // @[HBFP_GEMM.scala 45:58]
  wire [6:0] _two_complement_buffer_2_T_4 = _two_complement_buffer_2_T_2 + 7'h1; // @[HBFP_GEMM.scala 45:86]
  wire [6:0] _two_complement_buffer_2_T_7 = signs_2 ? _two_complement_buffer_2_T_4 : _two_complement_buffer_2_T_1; // @[HBFP_GEMM.scala 45:122]
  wire [11:0] multiplication_3 = io_in_a_man_3 * io_in_b_man_3; // @[HBFP_GEMM.scala 42:45]
  wire [11:0] _dotProductRegs_3_T_5 = multiplication_3 > _GEN_0 ? {{5'd0}, _dotProductRegs_0_T_1} : multiplication_3; // @[HBFP_GEMM.scala 43:33]
  wire [6:0] _two_complement_buffer_3_T_1 = {1'h0,dotProductRegs_3}; // @[HBFP_GEMM.scala 45:64]
  wire [6:0] _two_complement_buffer_3_T_2 = ~_two_complement_buffer_3_T_1; // @[HBFP_GEMM.scala 45:58]
  wire [6:0] _two_complement_buffer_3_T_4 = _two_complement_buffer_3_T_2 + 7'h1; // @[HBFP_GEMM.scala 45:86]
  wire [6:0] _two_complement_buffer_3_T_7 = signs_3 ? _two_complement_buffer_3_T_4 : _two_complement_buffer_3_T_1; // @[HBFP_GEMM.scala 45:122]
  wire [7:0] _sum_T = $signed(two_complement_buffer_0) + $signed(two_complement_buffer_1); // @[HBFP_GEMM.scala 48:46]
  wire [7:0] _GEN_4 = {{1{two_complement_buffer_2[6]}},two_complement_buffer_2}; // @[HBFP_GEMM.scala 48:46]
  wire [8:0] _sum_T_1 = $signed(_sum_T) + $signed(_GEN_4); // @[HBFP_GEMM.scala 48:46]
  wire [8:0] _GEN_5 = {{2{two_complement_buffer_3[6]}},two_complement_buffer_3}; // @[HBFP_GEMM.scala 48:46]
  wire [9:0] sum = $signed(_sum_T_1) + $signed(_GEN_5); // @[HBFP_GEMM.scala 48:46]
  reg [6:0] acc_hbfp; // @[HBFP_GEMM.scala 50:27]
  wire [8:0] _acc_hbfp_T_3 = ~sum[8:0]; // @[HBFP_GEMM.scala 51:59]
  wire [8:0] _acc_hbfp_T_5 = _acc_hbfp_T_3 + 9'h1; // @[HBFP_GEMM.scala 51:88]
  wire [8:0] _GEN_6 = {{2'd0}, _dotProductRegs_0_T_1}; // @[HBFP_GEMM.scala 51:95]
  wire [7:0] _acc_hbfp_T_10 = 8'h80 - 8'h1; // @[HBFP_GEMM.scala 51:124]
  wire [9:0] _acc_hbfp_T_12 = {1'h0,sum[8:0]}; // @[HBFP_GEMM.scala 51:137]
  wire [9:0] _acc_hbfp_T_13 = ~_acc_hbfp_T_12; // @[HBFP_GEMM.scala 51:131]
  wire [9:0] _acc_hbfp_T_15 = _acc_hbfp_T_13 + 10'h1; // @[HBFP_GEMM.scala 51:170]
  wire [9:0] _acc_hbfp_T_16 = _acc_hbfp_T_5 > _GEN_6 ? {{2'd0}, _acc_hbfp_T_10} : _acc_hbfp_T_15; // @[HBFP_GEMM.scala 51:57]
  wire [9:0] _acc_hbfp_T_25 = sum[8:0] > _GEN_6 ? {{3'd0}, _dotProductRegs_0_T_1} : _acc_hbfp_T_12; // @[HBFP_GEMM.scala 52:12]
  wire [9:0] _acc_hbfp_T_26 = sum[9] ? _acc_hbfp_T_16 : _acc_hbfp_T_25; // @[HBFP_GEMM.scala 51:20]
  wire [11:0] _GEN_8 = reset ? 12'h0 : _dotProductRegs_0_T_5; // @[HBFP_GEMM.scala 37:{53,53} 43:27]
  wire [11:0] _GEN_9 = reset ? 12'h0 : _dotProductRegs_1_T_5; // @[HBFP_GEMM.scala 37:{53,53} 43:27]
  wire [11:0] _GEN_10 = reset ? 12'h0 : _dotProductRegs_2_T_5; // @[HBFP_GEMM.scala 37:{53,53} 43:27]
  wire [11:0] _GEN_11 = reset ? 12'h0 : _dotProductRegs_3_T_5; // @[HBFP_GEMM.scala 37:{53,53} 43:27]
  wire [9:0] _GEN_12 = reset ? 10'h0 : _acc_hbfp_T_26; // @[HBFP_GEMM.scala 50:{27,27} 51:14]
  assign io_out_result_sign = acc_hbfp[6]; // @[HBFP_GEMM.scala 54:35]
  assign io_out_result_man = acc_hbfp[5:0]; // @[HBFP_GEMM.scala 55:34]
  assign io_out_result_exp = _io_out_result_exp_T_5[7:0]; // @[HBFP_GEMM.scala 35:23]
  always @(posedge clock) begin
    dotProductRegs_0 <= _GEN_8[5:0]; // @[HBFP_GEMM.scala 37:{53,53} 43:27]
    dotProductRegs_1 <= _GEN_9[5:0]; // @[HBFP_GEMM.scala 37:{53,53} 43:27]
    dotProductRegs_2 <= _GEN_10[5:0]; // @[HBFP_GEMM.scala 37:{53,53} 43:27]
    dotProductRegs_3 <= _GEN_11[5:0]; // @[HBFP_GEMM.scala 37:{53,53} 43:27]
    if (reset) begin // @[HBFP_GEMM.scala 38:60]
      two_complement_buffer_0 <= 7'sh0; // @[HBFP_GEMM.scala 38:60]
    end else begin
      two_complement_buffer_0 <= _two_complement_buffer_0_T_7; // @[HBFP_GEMM.scala 45:34]
    end
    if (reset) begin // @[HBFP_GEMM.scala 38:60]
      two_complement_buffer_1 <= 7'sh0; // @[HBFP_GEMM.scala 38:60]
    end else begin
      two_complement_buffer_1 <= _two_complement_buffer_1_T_7; // @[HBFP_GEMM.scala 45:34]
    end
    if (reset) begin // @[HBFP_GEMM.scala 38:60]
      two_complement_buffer_2 <= 7'sh0; // @[HBFP_GEMM.scala 38:60]
    end else begin
      two_complement_buffer_2 <= _two_complement_buffer_2_T_7; // @[HBFP_GEMM.scala 45:34]
    end
    if (reset) begin // @[HBFP_GEMM.scala 38:60]
      two_complement_buffer_3 <= 7'sh0; // @[HBFP_GEMM.scala 38:60]
    end else begin
      two_complement_buffer_3 <= _two_complement_buffer_3_T_7; // @[HBFP_GEMM.scala 45:34]
    end
    if (reset) begin // @[HBFP_GEMM.scala 39:44]
      signs_0 <= 1'h0; // @[HBFP_GEMM.scala 39:44]
    end else begin
      signs_0 <= io_in_a_sign_0 ^ io_in_b_sign_0; // @[HBFP_GEMM.scala 44:18]
    end
    if (reset) begin // @[HBFP_GEMM.scala 39:44]
      signs_1 <= 1'h0; // @[HBFP_GEMM.scala 39:44]
    end else begin
      signs_1 <= io_in_a_sign_1 ^ io_in_b_sign_1; // @[HBFP_GEMM.scala 44:18]
    end
    if (reset) begin // @[HBFP_GEMM.scala 39:44]
      signs_2 <= 1'h0; // @[HBFP_GEMM.scala 39:44]
    end else begin
      signs_2 <= io_in_a_sign_2 ^ io_in_b_sign_2; // @[HBFP_GEMM.scala 44:18]
    end
    if (reset) begin // @[HBFP_GEMM.scala 39:44]
      signs_3 <= 1'h0; // @[HBFP_GEMM.scala 39:44]
    end else begin
      signs_3 <= io_in_a_sign_3 ^ io_in_b_sign_3; // @[HBFP_GEMM.scala 44:18]
    end
    acc_hbfp <= _GEN_12[6:0]; // @[HBFP_GEMM.scala 50:{27,27} 51:14]
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
  dotProductRegs_0 = _RAND_0[5:0];
  _RAND_1 = {1{`RANDOM}};
  dotProductRegs_1 = _RAND_1[5:0];
  _RAND_2 = {1{`RANDOM}};
  dotProductRegs_2 = _RAND_2[5:0];
  _RAND_3 = {1{`RANDOM}};
  dotProductRegs_3 = _RAND_3[5:0];
  _RAND_4 = {1{`RANDOM}};
  two_complement_buffer_0 = _RAND_4[6:0];
  _RAND_5 = {1{`RANDOM}};
  two_complement_buffer_1 = _RAND_5[6:0];
  _RAND_6 = {1{`RANDOM}};
  two_complement_buffer_2 = _RAND_6[6:0];
  _RAND_7 = {1{`RANDOM}};
  two_complement_buffer_3 = _RAND_7[6:0];
  _RAND_8 = {1{`RANDOM}};
  signs_0 = _RAND_8[0:0];
  _RAND_9 = {1{`RANDOM}};
  signs_1 = _RAND_9[0:0];
  _RAND_10 = {1{`RANDOM}};
  signs_2 = _RAND_10[0:0];
  _RAND_11 = {1{`RANDOM}};
  signs_3 = _RAND_11[0:0];
  _RAND_12 = {1{`RANDOM}};
  acc_hbfp = _RAND_12[6:0];
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
  input  [5:0] io_in_a_man,
  input  [7:0] io_in_a_exp,
  input        io_in_b_sign,
  input  [5:0] io_in_b_man,
  input  [7:0] io_in_b_exp,
  output       io_out_result_sign,
  output [5:0] io_out_result_man,
  output [7:0] io_out_result_exp
);
  wire  _exp_diff_T = io_in_a_exp > io_in_b_exp; // @[HBFP_GEMM.scala 70:34]
  wire [7:0] _exp_diff_T_2 = io_in_a_exp - io_in_b_exp; // @[HBFP_GEMM.scala 70:61]
  wire [7:0] _exp_diff_T_4 = io_in_b_exp - io_in_a_exp; // @[HBFP_GEMM.scala 70:88]
  wire [7:0] exp_diff = io_in_a_exp > io_in_b_exp ? _exp_diff_T_2 : _exp_diff_T_4; // @[HBFP_GEMM.scala 70:21]
  wire [5:0] _io_out_result_sign_T_1 = io_in_b_man >> exp_diff; // @[HBFP_GEMM.scala 72:87]
  wire  _io_out_result_sign_T_2 = io_in_a_man > _io_out_result_sign_T_1; // @[HBFP_GEMM.scala 72:72]
  wire  _io_out_result_sign_T_3 = io_in_a_man > _io_out_result_sign_T_1 ? io_in_a_sign : io_in_b_sign; // @[HBFP_GEMM.scala 72:59]
  wire [5:0] _io_out_result_sign_T_4 = io_in_a_man >> exp_diff; // @[HBFP_GEMM.scala 72:147]
  wire  _io_out_result_sign_T_6 = _io_out_result_sign_T_4 > io_in_b_man ? io_in_a_sign : io_in_b_sign; // @[HBFP_GEMM.scala 72:133]
  wire [6:0] _addition_T_3 = io_in_a_man + _io_out_result_sign_T_1; // @[HBFP_GEMM.scala 74:96]
  wire [5:0] _addition_T_8 = io_in_a_man - _io_out_result_sign_T_1; // @[HBFP_GEMM.scala 74:183]
  wire [5:0] _addition_T_11 = _io_out_result_sign_T_1 - io_in_a_man; // @[HBFP_GEMM.scala 74:236]
  wire [5:0] _addition_T_12 = _io_out_result_sign_T_2 ? _addition_T_8 : _addition_T_11; // @[HBFP_GEMM.scala 74:129]
  wire [6:0] _addition_T_13 = io_in_a_sign == io_in_b_sign ? _addition_T_3 : {{1'd0}, _addition_T_12}; // @[HBFP_GEMM.scala 74:52]
  wire [6:0] _addition_T_16 = io_in_b_man + _io_out_result_sign_T_4; // @[HBFP_GEMM.scala 74:301]
  wire [5:0] _addition_T_21 = io_in_b_man - _io_out_result_sign_T_4; // @[HBFP_GEMM.scala 74:388]
  wire [5:0] _addition_T_24 = _io_out_result_sign_T_4 - io_in_b_man; // @[HBFP_GEMM.scala 74:441]
  wire [5:0] _addition_T_25 = io_in_b_man > _io_out_result_sign_T_4 ? _addition_T_21 : _addition_T_24; // @[HBFP_GEMM.scala 74:334]
  wire [6:0] _addition_T_26 = io_in_a_sign == io_in_b_sign ? _addition_T_16 : {{1'd0}, _addition_T_25}; // @[HBFP_GEMM.scala 74:257]
  wire [6:0] addition = _exp_diff_T ? _addition_T_13 : _addition_T_26; // @[HBFP_GEMM.scala 74:21]
  wire [6:0] _io_out_result_man_T_1 = 7'h40 - 7'h1; // @[HBFP_GEMM.scala 75:53]
  wire [6:0] _io_out_result_man_T_5 = addition > _io_out_result_man_T_1 ? _io_out_result_man_T_1 : addition; // @[HBFP_GEMM.scala 75:27]
  assign io_out_result_sign = _exp_diff_T ? _io_out_result_sign_T_3 : _io_out_result_sign_T_6; // @[HBFP_GEMM.scala 72:28]
  assign io_out_result_man = _io_out_result_man_T_5[5:0]; // @[HBFP_GEMM.scala 75:21]
  assign io_out_result_exp = _exp_diff_T ? io_in_a_exp : io_in_b_exp; // @[HBFP_GEMM.scala 73:27]
endmodule
module HBFP_PE(
  input        clock,
  input        reset,
  input        io_in_hor_sign_0,
  input        io_in_hor_sign_1,
  input        io_in_hor_sign_2,
  input        io_in_hor_sign_3,
  input  [5:0] io_in_hor_man_0,
  input  [5:0] io_in_hor_man_1,
  input  [5:0] io_in_hor_man_2,
  input  [5:0] io_in_hor_man_3,
  input  [7:0] io_in_hor_exp,
  input        io_in_ver_sign_0,
  input        io_in_ver_sign_1,
  input        io_in_ver_sign_2,
  input        io_in_ver_sign_3,
  input  [5:0] io_in_ver_man_0,
  input  [5:0] io_in_ver_man_1,
  input  [5:0] io_in_ver_man_2,
  input  [5:0] io_in_ver_man_3,
  input  [7:0] io_in_ver_exp,
  output       io_out_hor_sign_0,
  output       io_out_hor_sign_1,
  output       io_out_hor_sign_2,
  output       io_out_hor_sign_3,
  output [5:0] io_out_hor_man_0,
  output [5:0] io_out_hor_man_1,
  output [5:0] io_out_hor_man_2,
  output [5:0] io_out_hor_man_3,
  output [7:0] io_out_hor_exp,
  output       io_out_ver_sign_0,
  output       io_out_ver_sign_1,
  output       io_out_ver_sign_2,
  output       io_out_ver_sign_3,
  output [5:0] io_out_ver_man_0,
  output [5:0] io_out_ver_man_1,
  output [5:0] io_out_ver_man_2,
  output [5:0] io_out_ver_man_3,
  output [7:0] io_out_ver_exp,
  output       io_out_result_sign,
  output [5:0] io_out_result_man,
  output [7:0] io_out_result_exp
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
`endif // RANDOMIZE_REG_INIT
  wire  mac_clock; // @[HBFP_GEMM.scala 95:21]
  wire  mac_reset; // @[HBFP_GEMM.scala 95:21]
  wire  mac_io_in_a_sign_0; // @[HBFP_GEMM.scala 95:21]
  wire  mac_io_in_a_sign_1; // @[HBFP_GEMM.scala 95:21]
  wire  mac_io_in_a_sign_2; // @[HBFP_GEMM.scala 95:21]
  wire  mac_io_in_a_sign_3; // @[HBFP_GEMM.scala 95:21]
  wire [5:0] mac_io_in_a_man_0; // @[HBFP_GEMM.scala 95:21]
  wire [5:0] mac_io_in_a_man_1; // @[HBFP_GEMM.scala 95:21]
  wire [5:0] mac_io_in_a_man_2; // @[HBFP_GEMM.scala 95:21]
  wire [5:0] mac_io_in_a_man_3; // @[HBFP_GEMM.scala 95:21]
  wire [7:0] mac_io_in_a_exp; // @[HBFP_GEMM.scala 95:21]
  wire  mac_io_in_b_sign_0; // @[HBFP_GEMM.scala 95:21]
  wire  mac_io_in_b_sign_1; // @[HBFP_GEMM.scala 95:21]
  wire  mac_io_in_b_sign_2; // @[HBFP_GEMM.scala 95:21]
  wire  mac_io_in_b_sign_3; // @[HBFP_GEMM.scala 95:21]
  wire [5:0] mac_io_in_b_man_0; // @[HBFP_GEMM.scala 95:21]
  wire [5:0] mac_io_in_b_man_1; // @[HBFP_GEMM.scala 95:21]
  wire [5:0] mac_io_in_b_man_2; // @[HBFP_GEMM.scala 95:21]
  wire [5:0] mac_io_in_b_man_3; // @[HBFP_GEMM.scala 95:21]
  wire [7:0] mac_io_in_b_exp; // @[HBFP_GEMM.scala 95:21]
  wire  mac_io_out_result_sign; // @[HBFP_GEMM.scala 95:21]
  wire [5:0] mac_io_out_result_man; // @[HBFP_GEMM.scala 95:21]
  wire [7:0] mac_io_out_result_exp; // @[HBFP_GEMM.scala 95:21]
  wire  adder_io_in_a_sign; // @[HBFP_GEMM.scala 99:23]
  wire [5:0] adder_io_in_a_man; // @[HBFP_GEMM.scala 99:23]
  wire [7:0] adder_io_in_a_exp; // @[HBFP_GEMM.scala 99:23]
  wire  adder_io_in_b_sign; // @[HBFP_GEMM.scala 99:23]
  wire [5:0] adder_io_in_b_man; // @[HBFP_GEMM.scala 99:23]
  wire [7:0] adder_io_in_b_exp; // @[HBFP_GEMM.scala 99:23]
  wire  adder_io_out_result_sign; // @[HBFP_GEMM.scala 99:23]
  wire [5:0] adder_io_out_result_man; // @[HBFP_GEMM.scala 99:23]
  wire [7:0] adder_io_out_result_exp; // @[HBFP_GEMM.scala 99:23]
  reg  result_buffer_sign; // @[HBFP_GEMM.scala 93:28]
  reg [5:0] result_buffer_man; // @[HBFP_GEMM.scala 93:28]
  reg [7:0] result_buffer_exp; // @[HBFP_GEMM.scala 93:28]
  HBFP_MAC mac ( // @[HBFP_GEMM.scala 95:21]
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
    .io_out_result_sign(mac_io_out_result_sign),
    .io_out_result_man(mac_io_out_result_man),
    .io_out_result_exp(mac_io_out_result_exp)
  );
  HBFP_Adder adder ( // @[HBFP_GEMM.scala 99:23]
    .io_in_a_sign(adder_io_in_a_sign),
    .io_in_a_man(adder_io_in_a_man),
    .io_in_a_exp(adder_io_in_a_exp),
    .io_in_b_sign(adder_io_in_b_sign),
    .io_in_b_man(adder_io_in_b_man),
    .io_in_b_exp(adder_io_in_b_exp),
    .io_out_result_sign(adder_io_out_result_sign),
    .io_out_result_man(adder_io_out_result_man),
    .io_out_result_exp(adder_io_out_result_exp)
  );
  assign io_out_hor_sign_0 = io_in_hor_sign_0; // @[HBFP_GEMM.scala 104:16]
  assign io_out_hor_sign_1 = io_in_hor_sign_1; // @[HBFP_GEMM.scala 104:16]
  assign io_out_hor_sign_2 = io_in_hor_sign_2; // @[HBFP_GEMM.scala 104:16]
  assign io_out_hor_sign_3 = io_in_hor_sign_3; // @[HBFP_GEMM.scala 104:16]
  assign io_out_hor_man_0 = io_in_hor_man_0; // @[HBFP_GEMM.scala 104:16]
  assign io_out_hor_man_1 = io_in_hor_man_1; // @[HBFP_GEMM.scala 104:16]
  assign io_out_hor_man_2 = io_in_hor_man_2; // @[HBFP_GEMM.scala 104:16]
  assign io_out_hor_man_3 = io_in_hor_man_3; // @[HBFP_GEMM.scala 104:16]
  assign io_out_hor_exp = io_in_hor_exp; // @[HBFP_GEMM.scala 104:16]
  assign io_out_ver_sign_0 = io_in_ver_sign_0; // @[HBFP_GEMM.scala 105:16]
  assign io_out_ver_sign_1 = io_in_ver_sign_1; // @[HBFP_GEMM.scala 105:16]
  assign io_out_ver_sign_2 = io_in_ver_sign_2; // @[HBFP_GEMM.scala 105:16]
  assign io_out_ver_sign_3 = io_in_ver_sign_3; // @[HBFP_GEMM.scala 105:16]
  assign io_out_ver_man_0 = io_in_ver_man_0; // @[HBFP_GEMM.scala 105:16]
  assign io_out_ver_man_1 = io_in_ver_man_1; // @[HBFP_GEMM.scala 105:16]
  assign io_out_ver_man_2 = io_in_ver_man_2; // @[HBFP_GEMM.scala 105:16]
  assign io_out_ver_man_3 = io_in_ver_man_3; // @[HBFP_GEMM.scala 105:16]
  assign io_out_ver_exp = io_in_ver_exp; // @[HBFP_GEMM.scala 105:16]
  assign io_out_result_sign = result_buffer_sign; // @[HBFP_GEMM.scala 106:19]
  assign io_out_result_man = result_buffer_man; // @[HBFP_GEMM.scala 106:19]
  assign io_out_result_exp = result_buffer_exp; // @[HBFP_GEMM.scala 106:19]
  assign mac_clock = clock;
  assign mac_reset = reset;
  assign mac_io_in_a_sign_0 = io_in_hor_sign_0; // @[HBFP_GEMM.scala 96:17]
  assign mac_io_in_a_sign_1 = io_in_hor_sign_1; // @[HBFP_GEMM.scala 96:17]
  assign mac_io_in_a_sign_2 = io_in_hor_sign_2; // @[HBFP_GEMM.scala 96:17]
  assign mac_io_in_a_sign_3 = io_in_hor_sign_3; // @[HBFP_GEMM.scala 96:17]
  assign mac_io_in_a_man_0 = io_in_hor_man_0; // @[HBFP_GEMM.scala 96:17]
  assign mac_io_in_a_man_1 = io_in_hor_man_1; // @[HBFP_GEMM.scala 96:17]
  assign mac_io_in_a_man_2 = io_in_hor_man_2; // @[HBFP_GEMM.scala 96:17]
  assign mac_io_in_a_man_3 = io_in_hor_man_3; // @[HBFP_GEMM.scala 96:17]
  assign mac_io_in_a_exp = io_in_hor_exp; // @[HBFP_GEMM.scala 96:17]
  assign mac_io_in_b_sign_0 = io_in_ver_sign_0; // @[HBFP_GEMM.scala 97:17]
  assign mac_io_in_b_sign_1 = io_in_ver_sign_1; // @[HBFP_GEMM.scala 97:17]
  assign mac_io_in_b_sign_2 = io_in_ver_sign_2; // @[HBFP_GEMM.scala 97:17]
  assign mac_io_in_b_sign_3 = io_in_ver_sign_3; // @[HBFP_GEMM.scala 97:17]
  assign mac_io_in_b_man_0 = io_in_ver_man_0; // @[HBFP_GEMM.scala 97:17]
  assign mac_io_in_b_man_1 = io_in_ver_man_1; // @[HBFP_GEMM.scala 97:17]
  assign mac_io_in_b_man_2 = io_in_ver_man_2; // @[HBFP_GEMM.scala 97:17]
  assign mac_io_in_b_man_3 = io_in_ver_man_3; // @[HBFP_GEMM.scala 97:17]
  assign mac_io_in_b_exp = io_in_ver_exp; // @[HBFP_GEMM.scala 97:17]
  assign adder_io_in_a_sign = mac_io_out_result_sign; // @[HBFP_GEMM.scala 100:19]
  assign adder_io_in_a_man = mac_io_out_result_man; // @[HBFP_GEMM.scala 100:19]
  assign adder_io_in_a_exp = mac_io_out_result_exp; // @[HBFP_GEMM.scala 100:19]
  assign adder_io_in_b_sign = result_buffer_sign; // @[HBFP_GEMM.scala 101:19]
  assign adder_io_in_b_man = result_buffer_man; // @[HBFP_GEMM.scala 101:19]
  assign adder_io_in_b_exp = result_buffer_exp; // @[HBFP_GEMM.scala 101:19]
  always @(posedge clock) begin
    result_buffer_sign <= adder_io_out_result_sign; // @[HBFP_GEMM.scala 102:19]
    result_buffer_man <= adder_io_out_result_man; // @[HBFP_GEMM.scala 102:19]
    result_buffer_exp <= adder_io_out_result_exp; // @[HBFP_GEMM.scala 102:19]
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
  result_buffer_man = _RAND_1[5:0];
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
  input        io_enq_bits_sign_0,
  input        io_enq_bits_sign_1,
  input        io_enq_bits_sign_2,
  input        io_enq_bits_sign_3,
  input  [5:0] io_enq_bits_man_0,
  input  [5:0] io_enq_bits_man_1,
  input  [5:0] io_enq_bits_man_2,
  input  [5:0] io_enq_bits_man_3,
  input  [7:0] io_enq_bits_exp,
  input        io_deq_ready,
  output       io_deq_valid,
  output       io_deq_bits_sign_0,
  output       io_deq_bits_sign_1,
  output       io_deq_bits_sign_2,
  output       io_deq_bits_sign_3,
  output [5:0] io_deq_bits_man_0,
  output [5:0] io_deq_bits_man_1,
  output [5:0] io_deq_bits_man_2,
  output [5:0] io_deq_bits_man_3,
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
  reg  ram_sign_0 [0:1]; // @[Decoupled.scala 273:95]
  wire  ram_sign_0_io_deq_bits_MPORT_en; // @[Decoupled.scala 273:95]
  wire  ram_sign_0_io_deq_bits_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_sign_0_io_deq_bits_MPORT_data; // @[Decoupled.scala 273:95]
  wire  ram_sign_0_MPORT_data; // @[Decoupled.scala 273:95]
  wire  ram_sign_0_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_sign_0_MPORT_mask; // @[Decoupled.scala 273:95]
  wire  ram_sign_0_MPORT_en; // @[Decoupled.scala 273:95]
  reg  ram_sign_1 [0:1]; // @[Decoupled.scala 273:95]
  wire  ram_sign_1_io_deq_bits_MPORT_en; // @[Decoupled.scala 273:95]
  wire  ram_sign_1_io_deq_bits_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_sign_1_io_deq_bits_MPORT_data; // @[Decoupled.scala 273:95]
  wire  ram_sign_1_MPORT_data; // @[Decoupled.scala 273:95]
  wire  ram_sign_1_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_sign_1_MPORT_mask; // @[Decoupled.scala 273:95]
  wire  ram_sign_1_MPORT_en; // @[Decoupled.scala 273:95]
  reg  ram_sign_2 [0:1]; // @[Decoupled.scala 273:95]
  wire  ram_sign_2_io_deq_bits_MPORT_en; // @[Decoupled.scala 273:95]
  wire  ram_sign_2_io_deq_bits_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_sign_2_io_deq_bits_MPORT_data; // @[Decoupled.scala 273:95]
  wire  ram_sign_2_MPORT_data; // @[Decoupled.scala 273:95]
  wire  ram_sign_2_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_sign_2_MPORT_mask; // @[Decoupled.scala 273:95]
  wire  ram_sign_2_MPORT_en; // @[Decoupled.scala 273:95]
  reg  ram_sign_3 [0:1]; // @[Decoupled.scala 273:95]
  wire  ram_sign_3_io_deq_bits_MPORT_en; // @[Decoupled.scala 273:95]
  wire  ram_sign_3_io_deq_bits_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_sign_3_io_deq_bits_MPORT_data; // @[Decoupled.scala 273:95]
  wire  ram_sign_3_MPORT_data; // @[Decoupled.scala 273:95]
  wire  ram_sign_3_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_sign_3_MPORT_mask; // @[Decoupled.scala 273:95]
  wire  ram_sign_3_MPORT_en; // @[Decoupled.scala 273:95]
  reg [5:0] ram_man_0 [0:1]; // @[Decoupled.scala 273:95]
  wire  ram_man_0_io_deq_bits_MPORT_en; // @[Decoupled.scala 273:95]
  wire  ram_man_0_io_deq_bits_MPORT_addr; // @[Decoupled.scala 273:95]
  wire [5:0] ram_man_0_io_deq_bits_MPORT_data; // @[Decoupled.scala 273:95]
  wire [5:0] ram_man_0_MPORT_data; // @[Decoupled.scala 273:95]
  wire  ram_man_0_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_man_0_MPORT_mask; // @[Decoupled.scala 273:95]
  wire  ram_man_0_MPORT_en; // @[Decoupled.scala 273:95]
  reg [5:0] ram_man_1 [0:1]; // @[Decoupled.scala 273:95]
  wire  ram_man_1_io_deq_bits_MPORT_en; // @[Decoupled.scala 273:95]
  wire  ram_man_1_io_deq_bits_MPORT_addr; // @[Decoupled.scala 273:95]
  wire [5:0] ram_man_1_io_deq_bits_MPORT_data; // @[Decoupled.scala 273:95]
  wire [5:0] ram_man_1_MPORT_data; // @[Decoupled.scala 273:95]
  wire  ram_man_1_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_man_1_MPORT_mask; // @[Decoupled.scala 273:95]
  wire  ram_man_1_MPORT_en; // @[Decoupled.scala 273:95]
  reg [5:0] ram_man_2 [0:1]; // @[Decoupled.scala 273:95]
  wire  ram_man_2_io_deq_bits_MPORT_en; // @[Decoupled.scala 273:95]
  wire  ram_man_2_io_deq_bits_MPORT_addr; // @[Decoupled.scala 273:95]
  wire [5:0] ram_man_2_io_deq_bits_MPORT_data; // @[Decoupled.scala 273:95]
  wire [5:0] ram_man_2_MPORT_data; // @[Decoupled.scala 273:95]
  wire  ram_man_2_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_man_2_MPORT_mask; // @[Decoupled.scala 273:95]
  wire  ram_man_2_MPORT_en; // @[Decoupled.scala 273:95]
  reg [5:0] ram_man_3 [0:1]; // @[Decoupled.scala 273:95]
  wire  ram_man_3_io_deq_bits_MPORT_en; // @[Decoupled.scala 273:95]
  wire  ram_man_3_io_deq_bits_MPORT_addr; // @[Decoupled.scala 273:95]
  wire [5:0] ram_man_3_io_deq_bits_MPORT_data; // @[Decoupled.scala 273:95]
  wire [5:0] ram_man_3_MPORT_data; // @[Decoupled.scala 273:95]
  wire  ram_man_3_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_man_3_MPORT_mask; // @[Decoupled.scala 273:95]
  wire  ram_man_3_MPORT_en; // @[Decoupled.scala 273:95]
  reg [7:0] ram_exp [0:1]; // @[Decoupled.scala 273:95]
  wire  ram_exp_io_deq_bits_MPORT_en; // @[Decoupled.scala 273:95]
  wire  ram_exp_io_deq_bits_MPORT_addr; // @[Decoupled.scala 273:95]
  wire [7:0] ram_exp_io_deq_bits_MPORT_data; // @[Decoupled.scala 273:95]
  wire [7:0] ram_exp_MPORT_data; // @[Decoupled.scala 273:95]
  wire  ram_exp_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_exp_MPORT_mask; // @[Decoupled.scala 273:95]
  wire  ram_exp_MPORT_en; // @[Decoupled.scala 273:95]
  reg  enq_ptr_value; // @[Counter.scala 61:40]
  reg  deq_ptr_value; // @[Counter.scala 61:40]
  reg  maybe_full; // @[Decoupled.scala 276:27]
  wire  ptr_match = enq_ptr_value == deq_ptr_value; // @[Decoupled.scala 277:33]
  wire  empty = ptr_match & ~maybe_full; // @[Decoupled.scala 278:25]
  wire  full = ptr_match & maybe_full; // @[Decoupled.scala 279:24]
  wire  do_deq = io_deq_ready & io_deq_valid; // @[Decoupled.scala 51:35]
  assign ram_sign_0_io_deq_bits_MPORT_en = 1'h1;
  assign ram_sign_0_io_deq_bits_MPORT_addr = deq_ptr_value;
  assign ram_sign_0_io_deq_bits_MPORT_data = ram_sign_0[ram_sign_0_io_deq_bits_MPORT_addr]; // @[Decoupled.scala 273:95]
  assign ram_sign_0_MPORT_data = io_enq_bits_sign_0;
  assign ram_sign_0_MPORT_addr = enq_ptr_value;
  assign ram_sign_0_MPORT_mask = 1'h1;
  assign ram_sign_0_MPORT_en = io_enq_ready;
  assign ram_sign_1_io_deq_bits_MPORT_en = 1'h1;
  assign ram_sign_1_io_deq_bits_MPORT_addr = deq_ptr_value;
  assign ram_sign_1_io_deq_bits_MPORT_data = ram_sign_1[ram_sign_1_io_deq_bits_MPORT_addr]; // @[Decoupled.scala 273:95]
  assign ram_sign_1_MPORT_data = io_enq_bits_sign_1;
  assign ram_sign_1_MPORT_addr = enq_ptr_value;
  assign ram_sign_1_MPORT_mask = 1'h1;
  assign ram_sign_1_MPORT_en = io_enq_ready;
  assign ram_sign_2_io_deq_bits_MPORT_en = 1'h1;
  assign ram_sign_2_io_deq_bits_MPORT_addr = deq_ptr_value;
  assign ram_sign_2_io_deq_bits_MPORT_data = ram_sign_2[ram_sign_2_io_deq_bits_MPORT_addr]; // @[Decoupled.scala 273:95]
  assign ram_sign_2_MPORT_data = io_enq_bits_sign_2;
  assign ram_sign_2_MPORT_addr = enq_ptr_value;
  assign ram_sign_2_MPORT_mask = 1'h1;
  assign ram_sign_2_MPORT_en = io_enq_ready;
  assign ram_sign_3_io_deq_bits_MPORT_en = 1'h1;
  assign ram_sign_3_io_deq_bits_MPORT_addr = deq_ptr_value;
  assign ram_sign_3_io_deq_bits_MPORT_data = ram_sign_3[ram_sign_3_io_deq_bits_MPORT_addr]; // @[Decoupled.scala 273:95]
  assign ram_sign_3_MPORT_data = io_enq_bits_sign_3;
  assign ram_sign_3_MPORT_addr = enq_ptr_value;
  assign ram_sign_3_MPORT_mask = 1'h1;
  assign ram_sign_3_MPORT_en = io_enq_ready;
  assign ram_man_0_io_deq_bits_MPORT_en = 1'h1;
  assign ram_man_0_io_deq_bits_MPORT_addr = deq_ptr_value;
  assign ram_man_0_io_deq_bits_MPORT_data = ram_man_0[ram_man_0_io_deq_bits_MPORT_addr]; // @[Decoupled.scala 273:95]
  assign ram_man_0_MPORT_data = io_enq_bits_man_0;
  assign ram_man_0_MPORT_addr = enq_ptr_value;
  assign ram_man_0_MPORT_mask = 1'h1;
  assign ram_man_0_MPORT_en = io_enq_ready;
  assign ram_man_1_io_deq_bits_MPORT_en = 1'h1;
  assign ram_man_1_io_deq_bits_MPORT_addr = deq_ptr_value;
  assign ram_man_1_io_deq_bits_MPORT_data = ram_man_1[ram_man_1_io_deq_bits_MPORT_addr]; // @[Decoupled.scala 273:95]
  assign ram_man_1_MPORT_data = io_enq_bits_man_1;
  assign ram_man_1_MPORT_addr = enq_ptr_value;
  assign ram_man_1_MPORT_mask = 1'h1;
  assign ram_man_1_MPORT_en = io_enq_ready;
  assign ram_man_2_io_deq_bits_MPORT_en = 1'h1;
  assign ram_man_2_io_deq_bits_MPORT_addr = deq_ptr_value;
  assign ram_man_2_io_deq_bits_MPORT_data = ram_man_2[ram_man_2_io_deq_bits_MPORT_addr]; // @[Decoupled.scala 273:95]
  assign ram_man_2_MPORT_data = io_enq_bits_man_2;
  assign ram_man_2_MPORT_addr = enq_ptr_value;
  assign ram_man_2_MPORT_mask = 1'h1;
  assign ram_man_2_MPORT_en = io_enq_ready;
  assign ram_man_3_io_deq_bits_MPORT_en = 1'h1;
  assign ram_man_3_io_deq_bits_MPORT_addr = deq_ptr_value;
  assign ram_man_3_io_deq_bits_MPORT_data = ram_man_3[ram_man_3_io_deq_bits_MPORT_addr]; // @[Decoupled.scala 273:95]
  assign ram_man_3_MPORT_data = io_enq_bits_man_3;
  assign ram_man_3_MPORT_addr = enq_ptr_value;
  assign ram_man_3_MPORT_mask = 1'h1;
  assign ram_man_3_MPORT_en = io_enq_ready;
  assign ram_exp_io_deq_bits_MPORT_en = 1'h1;
  assign ram_exp_io_deq_bits_MPORT_addr = deq_ptr_value;
  assign ram_exp_io_deq_bits_MPORT_data = ram_exp[ram_exp_io_deq_bits_MPORT_addr]; // @[Decoupled.scala 273:95]
  assign ram_exp_MPORT_data = io_enq_bits_exp;
  assign ram_exp_MPORT_addr = enq_ptr_value;
  assign ram_exp_MPORT_mask = 1'h1;
  assign ram_exp_MPORT_en = io_enq_ready;
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
      enq_ptr_value <= 1'h0; // @[Counter.scala 61:40]
    end else if (io_enq_ready) begin // @[Decoupled.scala 286:16]
      enq_ptr_value <= enq_ptr_value + 1'h1; // @[Counter.scala 77:15]
    end
    if (reset) begin // @[Counter.scala 61:40]
      deq_ptr_value <= 1'h0; // @[Counter.scala 61:40]
    end else if (do_deq) begin // @[Decoupled.scala 290:16]
      deq_ptr_value <= deq_ptr_value + 1'h1; // @[Counter.scala 77:15]
    end
    if (reset) begin // @[Decoupled.scala 276:27]
      maybe_full <= 1'h0; // @[Decoupled.scala 276:27]
    end else if (io_enq_ready != do_deq) begin // @[Decoupled.scala 293:27]
      maybe_full <= io_enq_ready; // @[Decoupled.scala 294:16]
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
  for (initvar = 0; initvar < 2; initvar = initvar+1)
    ram_sign_0[initvar] = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  for (initvar = 0; initvar < 2; initvar = initvar+1)
    ram_sign_1[initvar] = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  for (initvar = 0; initvar < 2; initvar = initvar+1)
    ram_sign_2[initvar] = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  for (initvar = 0; initvar < 2; initvar = initvar+1)
    ram_sign_3[initvar] = _RAND_3[0:0];
  _RAND_4 = {1{`RANDOM}};
  for (initvar = 0; initvar < 2; initvar = initvar+1)
    ram_man_0[initvar] = _RAND_4[5:0];
  _RAND_5 = {1{`RANDOM}};
  for (initvar = 0; initvar < 2; initvar = initvar+1)
    ram_man_1[initvar] = _RAND_5[5:0];
  _RAND_6 = {1{`RANDOM}};
  for (initvar = 0; initvar < 2; initvar = initvar+1)
    ram_man_2[initvar] = _RAND_6[5:0];
  _RAND_7 = {1{`RANDOM}};
  for (initvar = 0; initvar < 2; initvar = initvar+1)
    ram_man_3[initvar] = _RAND_7[5:0];
  _RAND_8 = {1{`RANDOM}};
  for (initvar = 0; initvar < 2; initvar = initvar+1)
    ram_exp[initvar] = _RAND_8[7:0];
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  _RAND_9 = {1{`RANDOM}};
  enq_ptr_value = _RAND_9[0:0];
  _RAND_10 = {1{`RANDOM}};
  deq_ptr_value = _RAND_10[0:0];
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
  input        io_in_hor_0_ready,
  input        io_in_hor_0_valid,
  input        io_in_hor_0_bits_sign_0,
  input        io_in_hor_0_bits_sign_1,
  input        io_in_hor_0_bits_sign_2,
  input        io_in_hor_0_bits_sign_3,
  input  [5:0] io_in_hor_0_bits_man_0,
  input  [5:0] io_in_hor_0_bits_man_1,
  input  [5:0] io_in_hor_0_bits_man_2,
  input  [5:0] io_in_hor_0_bits_man_3,
  input  [7:0] io_in_hor_0_bits_exp,
  input        io_in_hor_1_ready,
  input        io_in_hor_1_valid,
  input        io_in_hor_1_bits_sign_0,
  input        io_in_hor_1_bits_sign_1,
  input        io_in_hor_1_bits_sign_2,
  input        io_in_hor_1_bits_sign_3,
  input  [5:0] io_in_hor_1_bits_man_0,
  input  [5:0] io_in_hor_1_bits_man_1,
  input  [5:0] io_in_hor_1_bits_man_2,
  input  [5:0] io_in_hor_1_bits_man_3,
  input  [7:0] io_in_hor_1_bits_exp,
  input        io_in_ver_0_ready,
  input        io_in_ver_0_valid,
  input        io_in_ver_0_bits_sign_0,
  input        io_in_ver_0_bits_sign_1,
  input        io_in_ver_0_bits_sign_2,
  input        io_in_ver_0_bits_sign_3,
  input  [5:0] io_in_ver_0_bits_man_0,
  input  [5:0] io_in_ver_0_bits_man_1,
  input  [5:0] io_in_ver_0_bits_man_2,
  input  [5:0] io_in_ver_0_bits_man_3,
  input  [7:0] io_in_ver_0_bits_exp,
  input        io_in_ver_1_ready,
  input        io_in_ver_1_valid,
  input        io_in_ver_1_bits_sign_0,
  input        io_in_ver_1_bits_sign_1,
  input        io_in_ver_1_bits_sign_2,
  input        io_in_ver_1_bits_sign_3,
  input  [5:0] io_in_ver_1_bits_man_0,
  input  [5:0] io_in_ver_1_bits_man_1,
  input  [5:0] io_in_ver_1_bits_man_2,
  input  [5:0] io_in_ver_1_bits_man_3,
  input  [7:0] io_in_ver_1_bits_exp,
  output       io_out_0_0_result_sign,
  output [5:0] io_out_0_0_result_man,
  output [7:0] io_out_0_0_result_exp,
  output       io_out_0_1_result_sign,
  output [5:0] io_out_0_1_result_man,
  output [7:0] io_out_0_1_result_exp,
  output       io_out_1_0_result_sign,
  output [5:0] io_out_1_0_result_man,
  output [7:0] io_out_1_0_result_exp,
  output       io_out_1_1_result_sign,
  output [5:0] io_out_1_1_result_man,
  output [7:0] io_out_1_1_result_exp
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
`endif // RANDOMIZE_REG_INIT
  wire  pes_0_0_clock; // @[HBFP_GEMM.scala 122:34]
  wire  pes_0_0_reset; // @[HBFP_GEMM.scala 122:34]
  wire  pes_0_0_io_in_hor_sign_0; // @[HBFP_GEMM.scala 122:34]
  wire  pes_0_0_io_in_hor_sign_1; // @[HBFP_GEMM.scala 122:34]
  wire  pes_0_0_io_in_hor_sign_2; // @[HBFP_GEMM.scala 122:34]
  wire  pes_0_0_io_in_hor_sign_3; // @[HBFP_GEMM.scala 122:34]
  wire [5:0] pes_0_0_io_in_hor_man_0; // @[HBFP_GEMM.scala 122:34]
  wire [5:0] pes_0_0_io_in_hor_man_1; // @[HBFP_GEMM.scala 122:34]
  wire [5:0] pes_0_0_io_in_hor_man_2; // @[HBFP_GEMM.scala 122:34]
  wire [5:0] pes_0_0_io_in_hor_man_3; // @[HBFP_GEMM.scala 122:34]
  wire [7:0] pes_0_0_io_in_hor_exp; // @[HBFP_GEMM.scala 122:34]
  wire  pes_0_0_io_in_ver_sign_0; // @[HBFP_GEMM.scala 122:34]
  wire  pes_0_0_io_in_ver_sign_1; // @[HBFP_GEMM.scala 122:34]
  wire  pes_0_0_io_in_ver_sign_2; // @[HBFP_GEMM.scala 122:34]
  wire  pes_0_0_io_in_ver_sign_3; // @[HBFP_GEMM.scala 122:34]
  wire [5:0] pes_0_0_io_in_ver_man_0; // @[HBFP_GEMM.scala 122:34]
  wire [5:0] pes_0_0_io_in_ver_man_1; // @[HBFP_GEMM.scala 122:34]
  wire [5:0] pes_0_0_io_in_ver_man_2; // @[HBFP_GEMM.scala 122:34]
  wire [5:0] pes_0_0_io_in_ver_man_3; // @[HBFP_GEMM.scala 122:34]
  wire [7:0] pes_0_0_io_in_ver_exp; // @[HBFP_GEMM.scala 122:34]
  wire  pes_0_0_io_out_hor_sign_0; // @[HBFP_GEMM.scala 122:34]
  wire  pes_0_0_io_out_hor_sign_1; // @[HBFP_GEMM.scala 122:34]
  wire  pes_0_0_io_out_hor_sign_2; // @[HBFP_GEMM.scala 122:34]
  wire  pes_0_0_io_out_hor_sign_3; // @[HBFP_GEMM.scala 122:34]
  wire [5:0] pes_0_0_io_out_hor_man_0; // @[HBFP_GEMM.scala 122:34]
  wire [5:0] pes_0_0_io_out_hor_man_1; // @[HBFP_GEMM.scala 122:34]
  wire [5:0] pes_0_0_io_out_hor_man_2; // @[HBFP_GEMM.scala 122:34]
  wire [5:0] pes_0_0_io_out_hor_man_3; // @[HBFP_GEMM.scala 122:34]
  wire [7:0] pes_0_0_io_out_hor_exp; // @[HBFP_GEMM.scala 122:34]
  wire  pes_0_0_io_out_ver_sign_0; // @[HBFP_GEMM.scala 122:34]
  wire  pes_0_0_io_out_ver_sign_1; // @[HBFP_GEMM.scala 122:34]
  wire  pes_0_0_io_out_ver_sign_2; // @[HBFP_GEMM.scala 122:34]
  wire  pes_0_0_io_out_ver_sign_3; // @[HBFP_GEMM.scala 122:34]
  wire [5:0] pes_0_0_io_out_ver_man_0; // @[HBFP_GEMM.scala 122:34]
  wire [5:0] pes_0_0_io_out_ver_man_1; // @[HBFP_GEMM.scala 122:34]
  wire [5:0] pes_0_0_io_out_ver_man_2; // @[HBFP_GEMM.scala 122:34]
  wire [5:0] pes_0_0_io_out_ver_man_3; // @[HBFP_GEMM.scala 122:34]
  wire [7:0] pes_0_0_io_out_ver_exp; // @[HBFP_GEMM.scala 122:34]
  wire  pes_0_0_io_out_result_sign; // @[HBFP_GEMM.scala 122:34]
  wire [5:0] pes_0_0_io_out_result_man; // @[HBFP_GEMM.scala 122:34]
  wire [7:0] pes_0_0_io_out_result_exp; // @[HBFP_GEMM.scala 122:34]
  wire  pes_0_1_clock; // @[HBFP_GEMM.scala 122:34]
  wire  pes_0_1_reset; // @[HBFP_GEMM.scala 122:34]
  wire  pes_0_1_io_in_hor_sign_0; // @[HBFP_GEMM.scala 122:34]
  wire  pes_0_1_io_in_hor_sign_1; // @[HBFP_GEMM.scala 122:34]
  wire  pes_0_1_io_in_hor_sign_2; // @[HBFP_GEMM.scala 122:34]
  wire  pes_0_1_io_in_hor_sign_3; // @[HBFP_GEMM.scala 122:34]
  wire [5:0] pes_0_1_io_in_hor_man_0; // @[HBFP_GEMM.scala 122:34]
  wire [5:0] pes_0_1_io_in_hor_man_1; // @[HBFP_GEMM.scala 122:34]
  wire [5:0] pes_0_1_io_in_hor_man_2; // @[HBFP_GEMM.scala 122:34]
  wire [5:0] pes_0_1_io_in_hor_man_3; // @[HBFP_GEMM.scala 122:34]
  wire [7:0] pes_0_1_io_in_hor_exp; // @[HBFP_GEMM.scala 122:34]
  wire  pes_0_1_io_in_ver_sign_0; // @[HBFP_GEMM.scala 122:34]
  wire  pes_0_1_io_in_ver_sign_1; // @[HBFP_GEMM.scala 122:34]
  wire  pes_0_1_io_in_ver_sign_2; // @[HBFP_GEMM.scala 122:34]
  wire  pes_0_1_io_in_ver_sign_3; // @[HBFP_GEMM.scala 122:34]
  wire [5:0] pes_0_1_io_in_ver_man_0; // @[HBFP_GEMM.scala 122:34]
  wire [5:0] pes_0_1_io_in_ver_man_1; // @[HBFP_GEMM.scala 122:34]
  wire [5:0] pes_0_1_io_in_ver_man_2; // @[HBFP_GEMM.scala 122:34]
  wire [5:0] pes_0_1_io_in_ver_man_3; // @[HBFP_GEMM.scala 122:34]
  wire [7:0] pes_0_1_io_in_ver_exp; // @[HBFP_GEMM.scala 122:34]
  wire  pes_0_1_io_out_hor_sign_0; // @[HBFP_GEMM.scala 122:34]
  wire  pes_0_1_io_out_hor_sign_1; // @[HBFP_GEMM.scala 122:34]
  wire  pes_0_1_io_out_hor_sign_2; // @[HBFP_GEMM.scala 122:34]
  wire  pes_0_1_io_out_hor_sign_3; // @[HBFP_GEMM.scala 122:34]
  wire [5:0] pes_0_1_io_out_hor_man_0; // @[HBFP_GEMM.scala 122:34]
  wire [5:0] pes_0_1_io_out_hor_man_1; // @[HBFP_GEMM.scala 122:34]
  wire [5:0] pes_0_1_io_out_hor_man_2; // @[HBFP_GEMM.scala 122:34]
  wire [5:0] pes_0_1_io_out_hor_man_3; // @[HBFP_GEMM.scala 122:34]
  wire [7:0] pes_0_1_io_out_hor_exp; // @[HBFP_GEMM.scala 122:34]
  wire  pes_0_1_io_out_ver_sign_0; // @[HBFP_GEMM.scala 122:34]
  wire  pes_0_1_io_out_ver_sign_1; // @[HBFP_GEMM.scala 122:34]
  wire  pes_0_1_io_out_ver_sign_2; // @[HBFP_GEMM.scala 122:34]
  wire  pes_0_1_io_out_ver_sign_3; // @[HBFP_GEMM.scala 122:34]
  wire [5:0] pes_0_1_io_out_ver_man_0; // @[HBFP_GEMM.scala 122:34]
  wire [5:0] pes_0_1_io_out_ver_man_1; // @[HBFP_GEMM.scala 122:34]
  wire [5:0] pes_0_1_io_out_ver_man_2; // @[HBFP_GEMM.scala 122:34]
  wire [5:0] pes_0_1_io_out_ver_man_3; // @[HBFP_GEMM.scala 122:34]
  wire [7:0] pes_0_1_io_out_ver_exp; // @[HBFP_GEMM.scala 122:34]
  wire  pes_0_1_io_out_result_sign; // @[HBFP_GEMM.scala 122:34]
  wire [5:0] pes_0_1_io_out_result_man; // @[HBFP_GEMM.scala 122:34]
  wire [7:0] pes_0_1_io_out_result_exp; // @[HBFP_GEMM.scala 122:34]
  wire  pes_1_0_clock; // @[HBFP_GEMM.scala 122:34]
  wire  pes_1_0_reset; // @[HBFP_GEMM.scala 122:34]
  wire  pes_1_0_io_in_hor_sign_0; // @[HBFP_GEMM.scala 122:34]
  wire  pes_1_0_io_in_hor_sign_1; // @[HBFP_GEMM.scala 122:34]
  wire  pes_1_0_io_in_hor_sign_2; // @[HBFP_GEMM.scala 122:34]
  wire  pes_1_0_io_in_hor_sign_3; // @[HBFP_GEMM.scala 122:34]
  wire [5:0] pes_1_0_io_in_hor_man_0; // @[HBFP_GEMM.scala 122:34]
  wire [5:0] pes_1_0_io_in_hor_man_1; // @[HBFP_GEMM.scala 122:34]
  wire [5:0] pes_1_0_io_in_hor_man_2; // @[HBFP_GEMM.scala 122:34]
  wire [5:0] pes_1_0_io_in_hor_man_3; // @[HBFP_GEMM.scala 122:34]
  wire [7:0] pes_1_0_io_in_hor_exp; // @[HBFP_GEMM.scala 122:34]
  wire  pes_1_0_io_in_ver_sign_0; // @[HBFP_GEMM.scala 122:34]
  wire  pes_1_0_io_in_ver_sign_1; // @[HBFP_GEMM.scala 122:34]
  wire  pes_1_0_io_in_ver_sign_2; // @[HBFP_GEMM.scala 122:34]
  wire  pes_1_0_io_in_ver_sign_3; // @[HBFP_GEMM.scala 122:34]
  wire [5:0] pes_1_0_io_in_ver_man_0; // @[HBFP_GEMM.scala 122:34]
  wire [5:0] pes_1_0_io_in_ver_man_1; // @[HBFP_GEMM.scala 122:34]
  wire [5:0] pes_1_0_io_in_ver_man_2; // @[HBFP_GEMM.scala 122:34]
  wire [5:0] pes_1_0_io_in_ver_man_3; // @[HBFP_GEMM.scala 122:34]
  wire [7:0] pes_1_0_io_in_ver_exp; // @[HBFP_GEMM.scala 122:34]
  wire  pes_1_0_io_out_hor_sign_0; // @[HBFP_GEMM.scala 122:34]
  wire  pes_1_0_io_out_hor_sign_1; // @[HBFP_GEMM.scala 122:34]
  wire  pes_1_0_io_out_hor_sign_2; // @[HBFP_GEMM.scala 122:34]
  wire  pes_1_0_io_out_hor_sign_3; // @[HBFP_GEMM.scala 122:34]
  wire [5:0] pes_1_0_io_out_hor_man_0; // @[HBFP_GEMM.scala 122:34]
  wire [5:0] pes_1_0_io_out_hor_man_1; // @[HBFP_GEMM.scala 122:34]
  wire [5:0] pes_1_0_io_out_hor_man_2; // @[HBFP_GEMM.scala 122:34]
  wire [5:0] pes_1_0_io_out_hor_man_3; // @[HBFP_GEMM.scala 122:34]
  wire [7:0] pes_1_0_io_out_hor_exp; // @[HBFP_GEMM.scala 122:34]
  wire  pes_1_0_io_out_ver_sign_0; // @[HBFP_GEMM.scala 122:34]
  wire  pes_1_0_io_out_ver_sign_1; // @[HBFP_GEMM.scala 122:34]
  wire  pes_1_0_io_out_ver_sign_2; // @[HBFP_GEMM.scala 122:34]
  wire  pes_1_0_io_out_ver_sign_3; // @[HBFP_GEMM.scala 122:34]
  wire [5:0] pes_1_0_io_out_ver_man_0; // @[HBFP_GEMM.scala 122:34]
  wire [5:0] pes_1_0_io_out_ver_man_1; // @[HBFP_GEMM.scala 122:34]
  wire [5:0] pes_1_0_io_out_ver_man_2; // @[HBFP_GEMM.scala 122:34]
  wire [5:0] pes_1_0_io_out_ver_man_3; // @[HBFP_GEMM.scala 122:34]
  wire [7:0] pes_1_0_io_out_ver_exp; // @[HBFP_GEMM.scala 122:34]
  wire  pes_1_0_io_out_result_sign; // @[HBFP_GEMM.scala 122:34]
  wire [5:0] pes_1_0_io_out_result_man; // @[HBFP_GEMM.scala 122:34]
  wire [7:0] pes_1_0_io_out_result_exp; // @[HBFP_GEMM.scala 122:34]
  wire  pes_1_1_clock; // @[HBFP_GEMM.scala 122:34]
  wire  pes_1_1_reset; // @[HBFP_GEMM.scala 122:34]
  wire  pes_1_1_io_in_hor_sign_0; // @[HBFP_GEMM.scala 122:34]
  wire  pes_1_1_io_in_hor_sign_1; // @[HBFP_GEMM.scala 122:34]
  wire  pes_1_1_io_in_hor_sign_2; // @[HBFP_GEMM.scala 122:34]
  wire  pes_1_1_io_in_hor_sign_3; // @[HBFP_GEMM.scala 122:34]
  wire [5:0] pes_1_1_io_in_hor_man_0; // @[HBFP_GEMM.scala 122:34]
  wire [5:0] pes_1_1_io_in_hor_man_1; // @[HBFP_GEMM.scala 122:34]
  wire [5:0] pes_1_1_io_in_hor_man_2; // @[HBFP_GEMM.scala 122:34]
  wire [5:0] pes_1_1_io_in_hor_man_3; // @[HBFP_GEMM.scala 122:34]
  wire [7:0] pes_1_1_io_in_hor_exp; // @[HBFP_GEMM.scala 122:34]
  wire  pes_1_1_io_in_ver_sign_0; // @[HBFP_GEMM.scala 122:34]
  wire  pes_1_1_io_in_ver_sign_1; // @[HBFP_GEMM.scala 122:34]
  wire  pes_1_1_io_in_ver_sign_2; // @[HBFP_GEMM.scala 122:34]
  wire  pes_1_1_io_in_ver_sign_3; // @[HBFP_GEMM.scala 122:34]
  wire [5:0] pes_1_1_io_in_ver_man_0; // @[HBFP_GEMM.scala 122:34]
  wire [5:0] pes_1_1_io_in_ver_man_1; // @[HBFP_GEMM.scala 122:34]
  wire [5:0] pes_1_1_io_in_ver_man_2; // @[HBFP_GEMM.scala 122:34]
  wire [5:0] pes_1_1_io_in_ver_man_3; // @[HBFP_GEMM.scala 122:34]
  wire [7:0] pes_1_1_io_in_ver_exp; // @[HBFP_GEMM.scala 122:34]
  wire  pes_1_1_io_out_hor_sign_0; // @[HBFP_GEMM.scala 122:34]
  wire  pes_1_1_io_out_hor_sign_1; // @[HBFP_GEMM.scala 122:34]
  wire  pes_1_1_io_out_hor_sign_2; // @[HBFP_GEMM.scala 122:34]
  wire  pes_1_1_io_out_hor_sign_3; // @[HBFP_GEMM.scala 122:34]
  wire [5:0] pes_1_1_io_out_hor_man_0; // @[HBFP_GEMM.scala 122:34]
  wire [5:0] pes_1_1_io_out_hor_man_1; // @[HBFP_GEMM.scala 122:34]
  wire [5:0] pes_1_1_io_out_hor_man_2; // @[HBFP_GEMM.scala 122:34]
  wire [5:0] pes_1_1_io_out_hor_man_3; // @[HBFP_GEMM.scala 122:34]
  wire [7:0] pes_1_1_io_out_hor_exp; // @[HBFP_GEMM.scala 122:34]
  wire  pes_1_1_io_out_ver_sign_0; // @[HBFP_GEMM.scala 122:34]
  wire  pes_1_1_io_out_ver_sign_1; // @[HBFP_GEMM.scala 122:34]
  wire  pes_1_1_io_out_ver_sign_2; // @[HBFP_GEMM.scala 122:34]
  wire  pes_1_1_io_out_ver_sign_3; // @[HBFP_GEMM.scala 122:34]
  wire [5:0] pes_1_1_io_out_ver_man_0; // @[HBFP_GEMM.scala 122:34]
  wire [5:0] pes_1_1_io_out_ver_man_1; // @[HBFP_GEMM.scala 122:34]
  wire [5:0] pes_1_1_io_out_ver_man_2; // @[HBFP_GEMM.scala 122:34]
  wire [5:0] pes_1_1_io_out_ver_man_3; // @[HBFP_GEMM.scala 122:34]
  wire [7:0] pes_1_1_io_out_ver_exp; // @[HBFP_GEMM.scala 122:34]
  wire  pes_1_1_io_out_result_sign; // @[HBFP_GEMM.scala 122:34]
  wire [5:0] pes_1_1_io_out_result_man; // @[HBFP_GEMM.scala 122:34]
  wire [7:0] pes_1_1_io_out_result_exp; // @[HBFP_GEMM.scala 122:34]
  wire  myinputQ_hor_0_clock; // @[HBFP_GEMM.scala 124:40]
  wire  myinputQ_hor_0_reset; // @[HBFP_GEMM.scala 124:40]
  wire  myinputQ_hor_0_io_enq_ready; // @[HBFP_GEMM.scala 124:40]
  wire  myinputQ_hor_0_io_enq_bits_sign_0; // @[HBFP_GEMM.scala 124:40]
  wire  myinputQ_hor_0_io_enq_bits_sign_1; // @[HBFP_GEMM.scala 124:40]
  wire  myinputQ_hor_0_io_enq_bits_sign_2; // @[HBFP_GEMM.scala 124:40]
  wire  myinputQ_hor_0_io_enq_bits_sign_3; // @[HBFP_GEMM.scala 124:40]
  wire [5:0] myinputQ_hor_0_io_enq_bits_man_0; // @[HBFP_GEMM.scala 124:40]
  wire [5:0] myinputQ_hor_0_io_enq_bits_man_1; // @[HBFP_GEMM.scala 124:40]
  wire [5:0] myinputQ_hor_0_io_enq_bits_man_2; // @[HBFP_GEMM.scala 124:40]
  wire [5:0] myinputQ_hor_0_io_enq_bits_man_3; // @[HBFP_GEMM.scala 124:40]
  wire [7:0] myinputQ_hor_0_io_enq_bits_exp; // @[HBFP_GEMM.scala 124:40]
  wire  myinputQ_hor_0_io_deq_ready; // @[HBFP_GEMM.scala 124:40]
  wire  myinputQ_hor_0_io_deq_valid; // @[HBFP_GEMM.scala 124:40]
  wire  myinputQ_hor_0_io_deq_bits_sign_0; // @[HBFP_GEMM.scala 124:40]
  wire  myinputQ_hor_0_io_deq_bits_sign_1; // @[HBFP_GEMM.scala 124:40]
  wire  myinputQ_hor_0_io_deq_bits_sign_2; // @[HBFP_GEMM.scala 124:40]
  wire  myinputQ_hor_0_io_deq_bits_sign_3; // @[HBFP_GEMM.scala 124:40]
  wire [5:0] myinputQ_hor_0_io_deq_bits_man_0; // @[HBFP_GEMM.scala 124:40]
  wire [5:0] myinputQ_hor_0_io_deq_bits_man_1; // @[HBFP_GEMM.scala 124:40]
  wire [5:0] myinputQ_hor_0_io_deq_bits_man_2; // @[HBFP_GEMM.scala 124:40]
  wire [5:0] myinputQ_hor_0_io_deq_bits_man_3; // @[HBFP_GEMM.scala 124:40]
  wire [7:0] myinputQ_hor_0_io_deq_bits_exp; // @[HBFP_GEMM.scala 124:40]
  wire  myinputQ_hor_1_clock; // @[HBFP_GEMM.scala 124:40]
  wire  myinputQ_hor_1_reset; // @[HBFP_GEMM.scala 124:40]
  wire  myinputQ_hor_1_io_enq_ready; // @[HBFP_GEMM.scala 124:40]
  wire  myinputQ_hor_1_io_enq_bits_sign_0; // @[HBFP_GEMM.scala 124:40]
  wire  myinputQ_hor_1_io_enq_bits_sign_1; // @[HBFP_GEMM.scala 124:40]
  wire  myinputQ_hor_1_io_enq_bits_sign_2; // @[HBFP_GEMM.scala 124:40]
  wire  myinputQ_hor_1_io_enq_bits_sign_3; // @[HBFP_GEMM.scala 124:40]
  wire [5:0] myinputQ_hor_1_io_enq_bits_man_0; // @[HBFP_GEMM.scala 124:40]
  wire [5:0] myinputQ_hor_1_io_enq_bits_man_1; // @[HBFP_GEMM.scala 124:40]
  wire [5:0] myinputQ_hor_1_io_enq_bits_man_2; // @[HBFP_GEMM.scala 124:40]
  wire [5:0] myinputQ_hor_1_io_enq_bits_man_3; // @[HBFP_GEMM.scala 124:40]
  wire [7:0] myinputQ_hor_1_io_enq_bits_exp; // @[HBFP_GEMM.scala 124:40]
  wire  myinputQ_hor_1_io_deq_ready; // @[HBFP_GEMM.scala 124:40]
  wire  myinputQ_hor_1_io_deq_valid; // @[HBFP_GEMM.scala 124:40]
  wire  myinputQ_hor_1_io_deq_bits_sign_0; // @[HBFP_GEMM.scala 124:40]
  wire  myinputQ_hor_1_io_deq_bits_sign_1; // @[HBFP_GEMM.scala 124:40]
  wire  myinputQ_hor_1_io_deq_bits_sign_2; // @[HBFP_GEMM.scala 124:40]
  wire  myinputQ_hor_1_io_deq_bits_sign_3; // @[HBFP_GEMM.scala 124:40]
  wire [5:0] myinputQ_hor_1_io_deq_bits_man_0; // @[HBFP_GEMM.scala 124:40]
  wire [5:0] myinputQ_hor_1_io_deq_bits_man_1; // @[HBFP_GEMM.scala 124:40]
  wire [5:0] myinputQ_hor_1_io_deq_bits_man_2; // @[HBFP_GEMM.scala 124:40]
  wire [5:0] myinputQ_hor_1_io_deq_bits_man_3; // @[HBFP_GEMM.scala 124:40]
  wire [7:0] myinputQ_hor_1_io_deq_bits_exp; // @[HBFP_GEMM.scala 124:40]
  wire  myinputQ_ver_0_clock; // @[HBFP_GEMM.scala 125:40]
  wire  myinputQ_ver_0_reset; // @[HBFP_GEMM.scala 125:40]
  wire  myinputQ_ver_0_io_enq_ready; // @[HBFP_GEMM.scala 125:40]
  wire  myinputQ_ver_0_io_enq_bits_sign_0; // @[HBFP_GEMM.scala 125:40]
  wire  myinputQ_ver_0_io_enq_bits_sign_1; // @[HBFP_GEMM.scala 125:40]
  wire  myinputQ_ver_0_io_enq_bits_sign_2; // @[HBFP_GEMM.scala 125:40]
  wire  myinputQ_ver_0_io_enq_bits_sign_3; // @[HBFP_GEMM.scala 125:40]
  wire [5:0] myinputQ_ver_0_io_enq_bits_man_0; // @[HBFP_GEMM.scala 125:40]
  wire [5:0] myinputQ_ver_0_io_enq_bits_man_1; // @[HBFP_GEMM.scala 125:40]
  wire [5:0] myinputQ_ver_0_io_enq_bits_man_2; // @[HBFP_GEMM.scala 125:40]
  wire [5:0] myinputQ_ver_0_io_enq_bits_man_3; // @[HBFP_GEMM.scala 125:40]
  wire [7:0] myinputQ_ver_0_io_enq_bits_exp; // @[HBFP_GEMM.scala 125:40]
  wire  myinputQ_ver_0_io_deq_ready; // @[HBFP_GEMM.scala 125:40]
  wire  myinputQ_ver_0_io_deq_valid; // @[HBFP_GEMM.scala 125:40]
  wire  myinputQ_ver_0_io_deq_bits_sign_0; // @[HBFP_GEMM.scala 125:40]
  wire  myinputQ_ver_0_io_deq_bits_sign_1; // @[HBFP_GEMM.scala 125:40]
  wire  myinputQ_ver_0_io_deq_bits_sign_2; // @[HBFP_GEMM.scala 125:40]
  wire  myinputQ_ver_0_io_deq_bits_sign_3; // @[HBFP_GEMM.scala 125:40]
  wire [5:0] myinputQ_ver_0_io_deq_bits_man_0; // @[HBFP_GEMM.scala 125:40]
  wire [5:0] myinputQ_ver_0_io_deq_bits_man_1; // @[HBFP_GEMM.scala 125:40]
  wire [5:0] myinputQ_ver_0_io_deq_bits_man_2; // @[HBFP_GEMM.scala 125:40]
  wire [5:0] myinputQ_ver_0_io_deq_bits_man_3; // @[HBFP_GEMM.scala 125:40]
  wire [7:0] myinputQ_ver_0_io_deq_bits_exp; // @[HBFP_GEMM.scala 125:40]
  wire  myinputQ_ver_1_clock; // @[HBFP_GEMM.scala 125:40]
  wire  myinputQ_ver_1_reset; // @[HBFP_GEMM.scala 125:40]
  wire  myinputQ_ver_1_io_enq_ready; // @[HBFP_GEMM.scala 125:40]
  wire  myinputQ_ver_1_io_enq_bits_sign_0; // @[HBFP_GEMM.scala 125:40]
  wire  myinputQ_ver_1_io_enq_bits_sign_1; // @[HBFP_GEMM.scala 125:40]
  wire  myinputQ_ver_1_io_enq_bits_sign_2; // @[HBFP_GEMM.scala 125:40]
  wire  myinputQ_ver_1_io_enq_bits_sign_3; // @[HBFP_GEMM.scala 125:40]
  wire [5:0] myinputQ_ver_1_io_enq_bits_man_0; // @[HBFP_GEMM.scala 125:40]
  wire [5:0] myinputQ_ver_1_io_enq_bits_man_1; // @[HBFP_GEMM.scala 125:40]
  wire [5:0] myinputQ_ver_1_io_enq_bits_man_2; // @[HBFP_GEMM.scala 125:40]
  wire [5:0] myinputQ_ver_1_io_enq_bits_man_3; // @[HBFP_GEMM.scala 125:40]
  wire [7:0] myinputQ_ver_1_io_enq_bits_exp; // @[HBFP_GEMM.scala 125:40]
  wire  myinputQ_ver_1_io_deq_ready; // @[HBFP_GEMM.scala 125:40]
  wire  myinputQ_ver_1_io_deq_valid; // @[HBFP_GEMM.scala 125:40]
  wire  myinputQ_ver_1_io_deq_bits_sign_0; // @[HBFP_GEMM.scala 125:40]
  wire  myinputQ_ver_1_io_deq_bits_sign_1; // @[HBFP_GEMM.scala 125:40]
  wire  myinputQ_ver_1_io_deq_bits_sign_2; // @[HBFP_GEMM.scala 125:40]
  wire  myinputQ_ver_1_io_deq_bits_sign_3; // @[HBFP_GEMM.scala 125:40]
  wire [5:0] myinputQ_ver_1_io_deq_bits_man_0; // @[HBFP_GEMM.scala 125:40]
  wire [5:0] myinputQ_ver_1_io_deq_bits_man_1; // @[HBFP_GEMM.scala 125:40]
  wire [5:0] myinputQ_ver_1_io_deq_bits_man_2; // @[HBFP_GEMM.scala 125:40]
  wire [5:0] myinputQ_ver_1_io_deq_bits_man_3; // @[HBFP_GEMM.scala 125:40]
  wire [7:0] myinputQ_ver_1_io_deq_bits_exp; // @[HBFP_GEMM.scala 125:40]
  wire  _pes_0_0_io_in_hor_T = myinputQ_hor_0_io_deq_ready & myinputQ_hor_0_io_deq_valid; // @[Decoupled.scala 51:35]
  wire  _pes_0_0_io_in_ver_T = myinputQ_ver_0_io_deq_ready & myinputQ_ver_0_io_deq_valid; // @[Decoupled.scala 51:35]
  reg  myinputQ_hor_1_io_deq_ready_r; // @[Reg.scala 19:16]
  reg  myinputQ_ver_1_io_deq_ready_r; // @[Reg.scala 19:16]
  wire  _pes_1_0_io_in_hor_T = myinputQ_hor_1_io_deq_ready & myinputQ_hor_1_io_deq_valid; // @[Decoupled.scala 51:35]
  wire  _pes_0_1_io_in_ver_T = myinputQ_ver_1_io_deq_ready & myinputQ_ver_1_io_deq_valid; // @[Decoupled.scala 51:35]
  reg  pes_0_1_io_in_hor_r_sign_0; // @[Reg.scala 19:16]
  reg  pes_0_1_io_in_hor_r_sign_1; // @[Reg.scala 19:16]
  reg  pes_0_1_io_in_hor_r_sign_2; // @[Reg.scala 19:16]
  reg  pes_0_1_io_in_hor_r_sign_3; // @[Reg.scala 19:16]
  reg [5:0] pes_0_1_io_in_hor_r_man_0; // @[Reg.scala 19:16]
  reg [5:0] pes_0_1_io_in_hor_r_man_1; // @[Reg.scala 19:16]
  reg [5:0] pes_0_1_io_in_hor_r_man_2; // @[Reg.scala 19:16]
  reg [5:0] pes_0_1_io_in_hor_r_man_3; // @[Reg.scala 19:16]
  reg [7:0] pes_0_1_io_in_hor_r_exp; // @[Reg.scala 19:16]
  reg  pes_1_1_io_in_hor_r_sign_0; // @[Reg.scala 19:16]
  reg  pes_1_1_io_in_hor_r_sign_1; // @[Reg.scala 19:16]
  reg  pes_1_1_io_in_hor_r_sign_2; // @[Reg.scala 19:16]
  reg  pes_1_1_io_in_hor_r_sign_3; // @[Reg.scala 19:16]
  reg [5:0] pes_1_1_io_in_hor_r_man_0; // @[Reg.scala 19:16]
  reg [5:0] pes_1_1_io_in_hor_r_man_1; // @[Reg.scala 19:16]
  reg [5:0] pes_1_1_io_in_hor_r_man_2; // @[Reg.scala 19:16]
  reg [5:0] pes_1_1_io_in_hor_r_man_3; // @[Reg.scala 19:16]
  reg [7:0] pes_1_1_io_in_hor_r_exp; // @[Reg.scala 19:16]
  reg  pes_1_0_io_in_ver_r_sign_0; // @[Reg.scala 19:16]
  reg  pes_1_0_io_in_ver_r_sign_1; // @[Reg.scala 19:16]
  reg  pes_1_0_io_in_ver_r_sign_2; // @[Reg.scala 19:16]
  reg  pes_1_0_io_in_ver_r_sign_3; // @[Reg.scala 19:16]
  reg [5:0] pes_1_0_io_in_ver_r_man_0; // @[Reg.scala 19:16]
  reg [5:0] pes_1_0_io_in_ver_r_man_1; // @[Reg.scala 19:16]
  reg [5:0] pes_1_0_io_in_ver_r_man_2; // @[Reg.scala 19:16]
  reg [5:0] pes_1_0_io_in_ver_r_man_3; // @[Reg.scala 19:16]
  reg [7:0] pes_1_0_io_in_ver_r_exp; // @[Reg.scala 19:16]
  reg  pes_1_1_io_in_ver_r_sign_0; // @[Reg.scala 19:16]
  reg  pes_1_1_io_in_ver_r_sign_1; // @[Reg.scala 19:16]
  reg  pes_1_1_io_in_ver_r_sign_2; // @[Reg.scala 19:16]
  reg  pes_1_1_io_in_ver_r_sign_3; // @[Reg.scala 19:16]
  reg [5:0] pes_1_1_io_in_ver_r_man_0; // @[Reg.scala 19:16]
  reg [5:0] pes_1_1_io_in_ver_r_man_1; // @[Reg.scala 19:16]
  reg [5:0] pes_1_1_io_in_ver_r_man_2; // @[Reg.scala 19:16]
  reg [5:0] pes_1_1_io_in_ver_r_man_3; // @[Reg.scala 19:16]
  reg [7:0] pes_1_1_io_in_ver_r_exp; // @[Reg.scala 19:16]
  HBFP_PE pes_0_0 ( // @[HBFP_GEMM.scala 122:34]
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
  HBFP_PE pes_0_1 ( // @[HBFP_GEMM.scala 122:34]
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
  HBFP_PE pes_1_0 ( // @[HBFP_GEMM.scala 122:34]
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
  HBFP_PE pes_1_1 ( // @[HBFP_GEMM.scala 122:34]
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
  Queue myinputQ_hor_0 ( // @[HBFP_GEMM.scala 124:40]
    .clock(myinputQ_hor_0_clock),
    .reset(myinputQ_hor_0_reset),
    .io_enq_ready(myinputQ_hor_0_io_enq_ready),
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
  Queue myinputQ_hor_1 ( // @[HBFP_GEMM.scala 124:40]
    .clock(myinputQ_hor_1_clock),
    .reset(myinputQ_hor_1_reset),
    .io_enq_ready(myinputQ_hor_1_io_enq_ready),
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
  Queue myinputQ_ver_0 ( // @[HBFP_GEMM.scala 125:40]
    .clock(myinputQ_ver_0_clock),
    .reset(myinputQ_ver_0_reset),
    .io_enq_ready(myinputQ_ver_0_io_enq_ready),
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
  Queue myinputQ_ver_1 ( // @[HBFP_GEMM.scala 125:40]
    .clock(myinputQ_ver_1_clock),
    .reset(myinputQ_ver_1_reset),
    .io_enq_ready(myinputQ_ver_1_io_enq_ready),
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
  assign io_out_0_0_result_sign = pes_0_0_io_out_result_sign; // @[HBFP_GEMM.scala 161:27]
  assign io_out_0_0_result_man = pes_0_0_io_out_result_man; // @[HBFP_GEMM.scala 161:27]
  assign io_out_0_0_result_exp = pes_0_0_io_out_result_exp; // @[HBFP_GEMM.scala 161:27]
  assign io_out_0_1_result_sign = pes_0_1_io_out_result_sign; // @[HBFP_GEMM.scala 161:27]
  assign io_out_0_1_result_man = pes_0_1_io_out_result_man; // @[HBFP_GEMM.scala 161:27]
  assign io_out_0_1_result_exp = pes_0_1_io_out_result_exp; // @[HBFP_GEMM.scala 161:27]
  assign io_out_1_0_result_sign = pes_1_0_io_out_result_sign; // @[HBFP_GEMM.scala 161:27]
  assign io_out_1_0_result_man = pes_1_0_io_out_result_man; // @[HBFP_GEMM.scala 161:27]
  assign io_out_1_0_result_exp = pes_1_0_io_out_result_exp; // @[HBFP_GEMM.scala 161:27]
  assign io_out_1_1_result_sign = pes_1_1_io_out_result_sign; // @[HBFP_GEMM.scala 161:27]
  assign io_out_1_1_result_man = pes_1_1_io_out_result_man; // @[HBFP_GEMM.scala 161:27]
  assign io_out_1_1_result_exp = pes_1_1_io_out_result_exp; // @[HBFP_GEMM.scala 161:27]
  assign pes_0_0_clock = clock;
  assign pes_0_0_reset = reset;
  assign pes_0_0_io_in_hor_sign_0 = _pes_0_0_io_in_hor_T & myinputQ_hor_0_io_deq_bits_sign_0; // @[HBFP_GEMM.scala 140:31]
  assign pes_0_0_io_in_hor_sign_1 = _pes_0_0_io_in_hor_T & myinputQ_hor_0_io_deq_bits_sign_1; // @[HBFP_GEMM.scala 140:31]
  assign pes_0_0_io_in_hor_sign_2 = _pes_0_0_io_in_hor_T & myinputQ_hor_0_io_deq_bits_sign_2; // @[HBFP_GEMM.scala 140:31]
  assign pes_0_0_io_in_hor_sign_3 = _pes_0_0_io_in_hor_T & myinputQ_hor_0_io_deq_bits_sign_3; // @[HBFP_GEMM.scala 140:31]
  assign pes_0_0_io_in_hor_man_0 = _pes_0_0_io_in_hor_T ? myinputQ_hor_0_io_deq_bits_man_0 : 6'h0; // @[HBFP_GEMM.scala 140:31]
  assign pes_0_0_io_in_hor_man_1 = _pes_0_0_io_in_hor_T ? myinputQ_hor_0_io_deq_bits_man_1 : 6'h0; // @[HBFP_GEMM.scala 140:31]
  assign pes_0_0_io_in_hor_man_2 = _pes_0_0_io_in_hor_T ? myinputQ_hor_0_io_deq_bits_man_2 : 6'h0; // @[HBFP_GEMM.scala 140:31]
  assign pes_0_0_io_in_hor_man_3 = _pes_0_0_io_in_hor_T ? myinputQ_hor_0_io_deq_bits_man_3 : 6'h0; // @[HBFP_GEMM.scala 140:31]
  assign pes_0_0_io_in_hor_exp = _pes_0_0_io_in_hor_T ? myinputQ_hor_0_io_deq_bits_exp : 8'h0; // @[HBFP_GEMM.scala 140:31]
  assign pes_0_0_io_in_ver_sign_0 = _pes_0_0_io_in_ver_T & myinputQ_ver_0_io_deq_bits_sign_0; // @[HBFP_GEMM.scala 141:31]
  assign pes_0_0_io_in_ver_sign_1 = _pes_0_0_io_in_ver_T & myinputQ_ver_0_io_deq_bits_sign_1; // @[HBFP_GEMM.scala 141:31]
  assign pes_0_0_io_in_ver_sign_2 = _pes_0_0_io_in_ver_T & myinputQ_ver_0_io_deq_bits_sign_2; // @[HBFP_GEMM.scala 141:31]
  assign pes_0_0_io_in_ver_sign_3 = _pes_0_0_io_in_ver_T & myinputQ_ver_0_io_deq_bits_sign_3; // @[HBFP_GEMM.scala 141:31]
  assign pes_0_0_io_in_ver_man_0 = _pes_0_0_io_in_ver_T ? myinputQ_ver_0_io_deq_bits_man_0 : 6'h0; // @[HBFP_GEMM.scala 141:31]
  assign pes_0_0_io_in_ver_man_1 = _pes_0_0_io_in_ver_T ? myinputQ_ver_0_io_deq_bits_man_1 : 6'h0; // @[HBFP_GEMM.scala 141:31]
  assign pes_0_0_io_in_ver_man_2 = _pes_0_0_io_in_ver_T ? myinputQ_ver_0_io_deq_bits_man_2 : 6'h0; // @[HBFP_GEMM.scala 141:31]
  assign pes_0_0_io_in_ver_man_3 = _pes_0_0_io_in_ver_T ? myinputQ_ver_0_io_deq_bits_man_3 : 6'h0; // @[HBFP_GEMM.scala 141:31]
  assign pes_0_0_io_in_ver_exp = _pes_0_0_io_in_ver_T ? myinputQ_ver_0_io_deq_bits_exp : 8'h0; // @[HBFP_GEMM.scala 141:31]
  assign pes_0_1_clock = clock;
  assign pes_0_1_reset = reset;
  assign pes_0_1_io_in_hor_sign_0 = pes_0_1_io_in_hor_r_sign_0; // @[HBFP_GEMM.scala 148:27]
  assign pes_0_1_io_in_hor_sign_1 = pes_0_1_io_in_hor_r_sign_1; // @[HBFP_GEMM.scala 148:27]
  assign pes_0_1_io_in_hor_sign_2 = pes_0_1_io_in_hor_r_sign_2; // @[HBFP_GEMM.scala 148:27]
  assign pes_0_1_io_in_hor_sign_3 = pes_0_1_io_in_hor_r_sign_3; // @[HBFP_GEMM.scala 148:27]
  assign pes_0_1_io_in_hor_man_0 = pes_0_1_io_in_hor_r_man_0; // @[HBFP_GEMM.scala 148:27]
  assign pes_0_1_io_in_hor_man_1 = pes_0_1_io_in_hor_r_man_1; // @[HBFP_GEMM.scala 148:27]
  assign pes_0_1_io_in_hor_man_2 = pes_0_1_io_in_hor_r_man_2; // @[HBFP_GEMM.scala 148:27]
  assign pes_0_1_io_in_hor_man_3 = pes_0_1_io_in_hor_r_man_3; // @[HBFP_GEMM.scala 148:27]
  assign pes_0_1_io_in_hor_exp = pes_0_1_io_in_hor_r_exp; // @[HBFP_GEMM.scala 148:27]
  assign pes_0_1_io_in_ver_sign_0 = _pes_0_1_io_in_ver_T & myinputQ_ver_1_io_deq_bits_sign_0; // @[HBFP_GEMM.scala 141:31]
  assign pes_0_1_io_in_ver_sign_1 = _pes_0_1_io_in_ver_T & myinputQ_ver_1_io_deq_bits_sign_1; // @[HBFP_GEMM.scala 141:31]
  assign pes_0_1_io_in_ver_sign_2 = _pes_0_1_io_in_ver_T & myinputQ_ver_1_io_deq_bits_sign_2; // @[HBFP_GEMM.scala 141:31]
  assign pes_0_1_io_in_ver_sign_3 = _pes_0_1_io_in_ver_T & myinputQ_ver_1_io_deq_bits_sign_3; // @[HBFP_GEMM.scala 141:31]
  assign pes_0_1_io_in_ver_man_0 = _pes_0_1_io_in_ver_T ? myinputQ_ver_1_io_deq_bits_man_0 : 6'h0; // @[HBFP_GEMM.scala 141:31]
  assign pes_0_1_io_in_ver_man_1 = _pes_0_1_io_in_ver_T ? myinputQ_ver_1_io_deq_bits_man_1 : 6'h0; // @[HBFP_GEMM.scala 141:31]
  assign pes_0_1_io_in_ver_man_2 = _pes_0_1_io_in_ver_T ? myinputQ_ver_1_io_deq_bits_man_2 : 6'h0; // @[HBFP_GEMM.scala 141:31]
  assign pes_0_1_io_in_ver_man_3 = _pes_0_1_io_in_ver_T ? myinputQ_ver_1_io_deq_bits_man_3 : 6'h0; // @[HBFP_GEMM.scala 141:31]
  assign pes_0_1_io_in_ver_exp = _pes_0_1_io_in_ver_T ? myinputQ_ver_1_io_deq_bits_exp : 8'h0; // @[HBFP_GEMM.scala 141:31]
  assign pes_1_0_clock = clock;
  assign pes_1_0_reset = reset;
  assign pes_1_0_io_in_hor_sign_0 = _pes_1_0_io_in_hor_T & myinputQ_hor_1_io_deq_bits_sign_0; // @[HBFP_GEMM.scala 140:31]
  assign pes_1_0_io_in_hor_sign_1 = _pes_1_0_io_in_hor_T & myinputQ_hor_1_io_deq_bits_sign_1; // @[HBFP_GEMM.scala 140:31]
  assign pes_1_0_io_in_hor_sign_2 = _pes_1_0_io_in_hor_T & myinputQ_hor_1_io_deq_bits_sign_2; // @[HBFP_GEMM.scala 140:31]
  assign pes_1_0_io_in_hor_sign_3 = _pes_1_0_io_in_hor_T & myinputQ_hor_1_io_deq_bits_sign_3; // @[HBFP_GEMM.scala 140:31]
  assign pes_1_0_io_in_hor_man_0 = _pes_1_0_io_in_hor_T ? myinputQ_hor_1_io_deq_bits_man_0 : 6'h0; // @[HBFP_GEMM.scala 140:31]
  assign pes_1_0_io_in_hor_man_1 = _pes_1_0_io_in_hor_T ? myinputQ_hor_1_io_deq_bits_man_1 : 6'h0; // @[HBFP_GEMM.scala 140:31]
  assign pes_1_0_io_in_hor_man_2 = _pes_1_0_io_in_hor_T ? myinputQ_hor_1_io_deq_bits_man_2 : 6'h0; // @[HBFP_GEMM.scala 140:31]
  assign pes_1_0_io_in_hor_man_3 = _pes_1_0_io_in_hor_T ? myinputQ_hor_1_io_deq_bits_man_3 : 6'h0; // @[HBFP_GEMM.scala 140:31]
  assign pes_1_0_io_in_hor_exp = _pes_1_0_io_in_hor_T ? myinputQ_hor_1_io_deq_bits_exp : 8'h0; // @[HBFP_GEMM.scala 140:31]
  assign pes_1_0_io_in_ver_sign_0 = pes_1_0_io_in_ver_r_sign_0; // @[HBFP_GEMM.scala 155:27]
  assign pes_1_0_io_in_ver_sign_1 = pes_1_0_io_in_ver_r_sign_1; // @[HBFP_GEMM.scala 155:27]
  assign pes_1_0_io_in_ver_sign_2 = pes_1_0_io_in_ver_r_sign_2; // @[HBFP_GEMM.scala 155:27]
  assign pes_1_0_io_in_ver_sign_3 = pes_1_0_io_in_ver_r_sign_3; // @[HBFP_GEMM.scala 155:27]
  assign pes_1_0_io_in_ver_man_0 = pes_1_0_io_in_ver_r_man_0; // @[HBFP_GEMM.scala 155:27]
  assign pes_1_0_io_in_ver_man_1 = pes_1_0_io_in_ver_r_man_1; // @[HBFP_GEMM.scala 155:27]
  assign pes_1_0_io_in_ver_man_2 = pes_1_0_io_in_ver_r_man_2; // @[HBFP_GEMM.scala 155:27]
  assign pes_1_0_io_in_ver_man_3 = pes_1_0_io_in_ver_r_man_3; // @[HBFP_GEMM.scala 155:27]
  assign pes_1_0_io_in_ver_exp = pes_1_0_io_in_ver_r_exp; // @[HBFP_GEMM.scala 155:27]
  assign pes_1_1_clock = clock;
  assign pes_1_1_reset = reset;
  assign pes_1_1_io_in_hor_sign_0 = pes_1_1_io_in_hor_r_sign_0; // @[HBFP_GEMM.scala 148:27]
  assign pes_1_1_io_in_hor_sign_1 = pes_1_1_io_in_hor_r_sign_1; // @[HBFP_GEMM.scala 148:27]
  assign pes_1_1_io_in_hor_sign_2 = pes_1_1_io_in_hor_r_sign_2; // @[HBFP_GEMM.scala 148:27]
  assign pes_1_1_io_in_hor_sign_3 = pes_1_1_io_in_hor_r_sign_3; // @[HBFP_GEMM.scala 148:27]
  assign pes_1_1_io_in_hor_man_0 = pes_1_1_io_in_hor_r_man_0; // @[HBFP_GEMM.scala 148:27]
  assign pes_1_1_io_in_hor_man_1 = pes_1_1_io_in_hor_r_man_1; // @[HBFP_GEMM.scala 148:27]
  assign pes_1_1_io_in_hor_man_2 = pes_1_1_io_in_hor_r_man_2; // @[HBFP_GEMM.scala 148:27]
  assign pes_1_1_io_in_hor_man_3 = pes_1_1_io_in_hor_r_man_3; // @[HBFP_GEMM.scala 148:27]
  assign pes_1_1_io_in_hor_exp = pes_1_1_io_in_hor_r_exp; // @[HBFP_GEMM.scala 148:27]
  assign pes_1_1_io_in_ver_sign_0 = pes_1_1_io_in_ver_r_sign_0; // @[HBFP_GEMM.scala 155:27]
  assign pes_1_1_io_in_ver_sign_1 = pes_1_1_io_in_ver_r_sign_1; // @[HBFP_GEMM.scala 155:27]
  assign pes_1_1_io_in_ver_sign_2 = pes_1_1_io_in_ver_r_sign_2; // @[HBFP_GEMM.scala 155:27]
  assign pes_1_1_io_in_ver_sign_3 = pes_1_1_io_in_ver_r_sign_3; // @[HBFP_GEMM.scala 155:27]
  assign pes_1_1_io_in_ver_man_0 = pes_1_1_io_in_ver_r_man_0; // @[HBFP_GEMM.scala 155:27]
  assign pes_1_1_io_in_ver_man_1 = pes_1_1_io_in_ver_r_man_1; // @[HBFP_GEMM.scala 155:27]
  assign pes_1_1_io_in_ver_man_2 = pes_1_1_io_in_ver_r_man_2; // @[HBFP_GEMM.scala 155:27]
  assign pes_1_1_io_in_ver_man_3 = pes_1_1_io_in_ver_r_man_3; // @[HBFP_GEMM.scala 155:27]
  assign pes_1_1_io_in_ver_exp = pes_1_1_io_in_ver_r_exp; // @[HBFP_GEMM.scala 155:27]
  assign myinputQ_hor_0_clock = clock;
  assign myinputQ_hor_0_reset = reset;
  assign myinputQ_hor_0_io_enq_bits_sign_0 = io_in_hor_0_bits_sign_0; // @[HBFP_GEMM.scala 130:33]
  assign myinputQ_hor_0_io_enq_bits_sign_1 = io_in_hor_0_bits_sign_1; // @[HBFP_GEMM.scala 130:33]
  assign myinputQ_hor_0_io_enq_bits_sign_2 = io_in_hor_0_bits_sign_2; // @[HBFP_GEMM.scala 130:33]
  assign myinputQ_hor_0_io_enq_bits_sign_3 = io_in_hor_0_bits_sign_3; // @[HBFP_GEMM.scala 130:33]
  assign myinputQ_hor_0_io_enq_bits_man_0 = io_in_hor_0_bits_man_0; // @[HBFP_GEMM.scala 130:33]
  assign myinputQ_hor_0_io_enq_bits_man_1 = io_in_hor_0_bits_man_1; // @[HBFP_GEMM.scala 130:33]
  assign myinputQ_hor_0_io_enq_bits_man_2 = io_in_hor_0_bits_man_2; // @[HBFP_GEMM.scala 130:33]
  assign myinputQ_hor_0_io_enq_bits_man_3 = io_in_hor_0_bits_man_3; // @[HBFP_GEMM.scala 130:33]
  assign myinputQ_hor_0_io_enq_bits_exp = io_in_hor_0_bits_exp; // @[HBFP_GEMM.scala 130:33]
  assign myinputQ_hor_0_io_deq_ready = myinputQ_hor_0_io_deq_valid; // @[HBFP_GEMM.scala 138:34]
  assign myinputQ_hor_1_clock = clock;
  assign myinputQ_hor_1_reset = reset;
  assign myinputQ_hor_1_io_enq_bits_sign_0 = io_in_hor_1_bits_sign_0; // @[HBFP_GEMM.scala 130:33]
  assign myinputQ_hor_1_io_enq_bits_sign_1 = io_in_hor_1_bits_sign_1; // @[HBFP_GEMM.scala 130:33]
  assign myinputQ_hor_1_io_enq_bits_sign_2 = io_in_hor_1_bits_sign_2; // @[HBFP_GEMM.scala 130:33]
  assign myinputQ_hor_1_io_enq_bits_sign_3 = io_in_hor_1_bits_sign_3; // @[HBFP_GEMM.scala 130:33]
  assign myinputQ_hor_1_io_enq_bits_man_0 = io_in_hor_1_bits_man_0; // @[HBFP_GEMM.scala 130:33]
  assign myinputQ_hor_1_io_enq_bits_man_1 = io_in_hor_1_bits_man_1; // @[HBFP_GEMM.scala 130:33]
  assign myinputQ_hor_1_io_enq_bits_man_2 = io_in_hor_1_bits_man_2; // @[HBFP_GEMM.scala 130:33]
  assign myinputQ_hor_1_io_enq_bits_man_3 = io_in_hor_1_bits_man_3; // @[HBFP_GEMM.scala 130:33]
  assign myinputQ_hor_1_io_enq_bits_exp = io_in_hor_1_bits_exp; // @[HBFP_GEMM.scala 130:33]
  assign myinputQ_hor_1_io_deq_ready = myinputQ_hor_1_io_deq_ready_r; // @[HBFP_GEMM.scala 138:34]
  assign myinputQ_ver_0_clock = clock;
  assign myinputQ_ver_0_reset = reset;
  assign myinputQ_ver_0_io_enq_bits_sign_0 = io_in_ver_0_bits_sign_0; // @[HBFP_GEMM.scala 133:33]
  assign myinputQ_ver_0_io_enq_bits_sign_1 = io_in_ver_0_bits_sign_1; // @[HBFP_GEMM.scala 133:33]
  assign myinputQ_ver_0_io_enq_bits_sign_2 = io_in_ver_0_bits_sign_2; // @[HBFP_GEMM.scala 133:33]
  assign myinputQ_ver_0_io_enq_bits_sign_3 = io_in_ver_0_bits_sign_3; // @[HBFP_GEMM.scala 133:33]
  assign myinputQ_ver_0_io_enq_bits_man_0 = io_in_ver_0_bits_man_0; // @[HBFP_GEMM.scala 133:33]
  assign myinputQ_ver_0_io_enq_bits_man_1 = io_in_ver_0_bits_man_1; // @[HBFP_GEMM.scala 133:33]
  assign myinputQ_ver_0_io_enq_bits_man_2 = io_in_ver_0_bits_man_2; // @[HBFP_GEMM.scala 133:33]
  assign myinputQ_ver_0_io_enq_bits_man_3 = io_in_ver_0_bits_man_3; // @[HBFP_GEMM.scala 133:33]
  assign myinputQ_ver_0_io_enq_bits_exp = io_in_ver_0_bits_exp; // @[HBFP_GEMM.scala 133:33]
  assign myinputQ_ver_0_io_deq_ready = myinputQ_ver_0_io_deq_valid; // @[HBFP_GEMM.scala 139:34]
  assign myinputQ_ver_1_clock = clock;
  assign myinputQ_ver_1_reset = reset;
  assign myinputQ_ver_1_io_enq_bits_sign_0 = io_in_ver_1_bits_sign_0; // @[HBFP_GEMM.scala 133:33]
  assign myinputQ_ver_1_io_enq_bits_sign_1 = io_in_ver_1_bits_sign_1; // @[HBFP_GEMM.scala 133:33]
  assign myinputQ_ver_1_io_enq_bits_sign_2 = io_in_ver_1_bits_sign_2; // @[HBFP_GEMM.scala 133:33]
  assign myinputQ_ver_1_io_enq_bits_sign_3 = io_in_ver_1_bits_sign_3; // @[HBFP_GEMM.scala 133:33]
  assign myinputQ_ver_1_io_enq_bits_man_0 = io_in_ver_1_bits_man_0; // @[HBFP_GEMM.scala 133:33]
  assign myinputQ_ver_1_io_enq_bits_man_1 = io_in_ver_1_bits_man_1; // @[HBFP_GEMM.scala 133:33]
  assign myinputQ_ver_1_io_enq_bits_man_2 = io_in_ver_1_bits_man_2; // @[HBFP_GEMM.scala 133:33]
  assign myinputQ_ver_1_io_enq_bits_man_3 = io_in_ver_1_bits_man_3; // @[HBFP_GEMM.scala 133:33]
  assign myinputQ_ver_1_io_enq_bits_exp = io_in_ver_1_bits_exp; // @[HBFP_GEMM.scala 133:33]
  assign myinputQ_ver_1_io_deq_ready = myinputQ_ver_1_io_deq_ready_r; // @[HBFP_GEMM.scala 139:34]
  always @(posedge clock) begin
    myinputQ_hor_1_io_deq_ready_r <= myinputQ_hor_1_io_deq_valid; // @[Reg.scala 19:16 20:{18,22}]
    myinputQ_ver_1_io_deq_ready_r <= myinputQ_ver_1_io_deq_valid; // @[Reg.scala 19:16 20:{18,22}]
    pes_0_1_io_in_hor_r_sign_0 <= pes_0_0_io_out_hor_sign_0; // @[Reg.scala 19:16 20:{18,22}]
    pes_0_1_io_in_hor_r_sign_1 <= pes_0_0_io_out_hor_sign_1; // @[Reg.scala 19:16 20:{18,22}]
    pes_0_1_io_in_hor_r_sign_2 <= pes_0_0_io_out_hor_sign_2; // @[Reg.scala 19:16 20:{18,22}]
    pes_0_1_io_in_hor_r_sign_3 <= pes_0_0_io_out_hor_sign_3; // @[Reg.scala 19:16 20:{18,22}]
    pes_0_1_io_in_hor_r_man_0 <= pes_0_0_io_out_hor_man_0; // @[Reg.scala 19:16 20:{18,22}]
    pes_0_1_io_in_hor_r_man_1 <= pes_0_0_io_out_hor_man_1; // @[Reg.scala 19:16 20:{18,22}]
    pes_0_1_io_in_hor_r_man_2 <= pes_0_0_io_out_hor_man_2; // @[Reg.scala 19:16 20:{18,22}]
    pes_0_1_io_in_hor_r_man_3 <= pes_0_0_io_out_hor_man_3; // @[Reg.scala 19:16 20:{18,22}]
    pes_0_1_io_in_hor_r_exp <= pes_0_0_io_out_hor_exp; // @[Reg.scala 19:16 20:{18,22}]
    pes_1_1_io_in_hor_r_sign_0 <= pes_1_0_io_out_hor_sign_0; // @[Reg.scala 19:16 20:{18,22}]
    pes_1_1_io_in_hor_r_sign_1 <= pes_1_0_io_out_hor_sign_1; // @[Reg.scala 19:16 20:{18,22}]
    pes_1_1_io_in_hor_r_sign_2 <= pes_1_0_io_out_hor_sign_2; // @[Reg.scala 19:16 20:{18,22}]
    pes_1_1_io_in_hor_r_sign_3 <= pes_1_0_io_out_hor_sign_3; // @[Reg.scala 19:16 20:{18,22}]
    pes_1_1_io_in_hor_r_man_0 <= pes_1_0_io_out_hor_man_0; // @[Reg.scala 19:16 20:{18,22}]
    pes_1_1_io_in_hor_r_man_1 <= pes_1_0_io_out_hor_man_1; // @[Reg.scala 19:16 20:{18,22}]
    pes_1_1_io_in_hor_r_man_2 <= pes_1_0_io_out_hor_man_2; // @[Reg.scala 19:16 20:{18,22}]
    pes_1_1_io_in_hor_r_man_3 <= pes_1_0_io_out_hor_man_3; // @[Reg.scala 19:16 20:{18,22}]
    pes_1_1_io_in_hor_r_exp <= pes_1_0_io_out_hor_exp; // @[Reg.scala 19:16 20:{18,22}]
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
  pes_0_1_io_in_hor_r_sign_0 = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  pes_0_1_io_in_hor_r_sign_1 = _RAND_3[0:0];
  _RAND_4 = {1{`RANDOM}};
  pes_0_1_io_in_hor_r_sign_2 = _RAND_4[0:0];
  _RAND_5 = {1{`RANDOM}};
  pes_0_1_io_in_hor_r_sign_3 = _RAND_5[0:0];
  _RAND_6 = {1{`RANDOM}};
  pes_0_1_io_in_hor_r_man_0 = _RAND_6[5:0];
  _RAND_7 = {1{`RANDOM}};
  pes_0_1_io_in_hor_r_man_1 = _RAND_7[5:0];
  _RAND_8 = {1{`RANDOM}};
  pes_0_1_io_in_hor_r_man_2 = _RAND_8[5:0];
  _RAND_9 = {1{`RANDOM}};
  pes_0_1_io_in_hor_r_man_3 = _RAND_9[5:0];
  _RAND_10 = {1{`RANDOM}};
  pes_0_1_io_in_hor_r_exp = _RAND_10[7:0];
  _RAND_11 = {1{`RANDOM}};
  pes_1_1_io_in_hor_r_sign_0 = _RAND_11[0:0];
  _RAND_12 = {1{`RANDOM}};
  pes_1_1_io_in_hor_r_sign_1 = _RAND_12[0:0];
  _RAND_13 = {1{`RANDOM}};
  pes_1_1_io_in_hor_r_sign_2 = _RAND_13[0:0];
  _RAND_14 = {1{`RANDOM}};
  pes_1_1_io_in_hor_r_sign_3 = _RAND_14[0:0];
  _RAND_15 = {1{`RANDOM}};
  pes_1_1_io_in_hor_r_man_0 = _RAND_15[5:0];
  _RAND_16 = {1{`RANDOM}};
  pes_1_1_io_in_hor_r_man_1 = _RAND_16[5:0];
  _RAND_17 = {1{`RANDOM}};
  pes_1_1_io_in_hor_r_man_2 = _RAND_17[5:0];
  _RAND_18 = {1{`RANDOM}};
  pes_1_1_io_in_hor_r_man_3 = _RAND_18[5:0];
  _RAND_19 = {1{`RANDOM}};
  pes_1_1_io_in_hor_r_exp = _RAND_19[7:0];
  _RAND_20 = {1{`RANDOM}};
  pes_1_0_io_in_ver_r_sign_0 = _RAND_20[0:0];
  _RAND_21 = {1{`RANDOM}};
  pes_1_0_io_in_ver_r_sign_1 = _RAND_21[0:0];
  _RAND_22 = {1{`RANDOM}};
  pes_1_0_io_in_ver_r_sign_2 = _RAND_22[0:0];
  _RAND_23 = {1{`RANDOM}};
  pes_1_0_io_in_ver_r_sign_3 = _RAND_23[0:0];
  _RAND_24 = {1{`RANDOM}};
  pes_1_0_io_in_ver_r_man_0 = _RAND_24[5:0];
  _RAND_25 = {1{`RANDOM}};
  pes_1_0_io_in_ver_r_man_1 = _RAND_25[5:0];
  _RAND_26 = {1{`RANDOM}};
  pes_1_0_io_in_ver_r_man_2 = _RAND_26[5:0];
  _RAND_27 = {1{`RANDOM}};
  pes_1_0_io_in_ver_r_man_3 = _RAND_27[5:0];
  _RAND_28 = {1{`RANDOM}};
  pes_1_0_io_in_ver_r_exp = _RAND_28[7:0];
  _RAND_29 = {1{`RANDOM}};
  pes_1_1_io_in_ver_r_sign_0 = _RAND_29[0:0];
  _RAND_30 = {1{`RANDOM}};
  pes_1_1_io_in_ver_r_sign_1 = _RAND_30[0:0];
  _RAND_31 = {1{`RANDOM}};
  pes_1_1_io_in_ver_r_sign_2 = _RAND_31[0:0];
  _RAND_32 = {1{`RANDOM}};
  pes_1_1_io_in_ver_r_sign_3 = _RAND_32[0:0];
  _RAND_33 = {1{`RANDOM}};
  pes_1_1_io_in_ver_r_man_0 = _RAND_33[5:0];
  _RAND_34 = {1{`RANDOM}};
  pes_1_1_io_in_ver_r_man_1 = _RAND_34[5:0];
  _RAND_35 = {1{`RANDOM}};
  pes_1_1_io_in_ver_r_man_2 = _RAND_35[5:0];
  _RAND_36 = {1{`RANDOM}};
  pes_1_1_io_in_ver_r_man_3 = _RAND_36[5:0];
  _RAND_37 = {1{`RANDOM}};
  pes_1_1_io_in_ver_r_exp = _RAND_37[7:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
