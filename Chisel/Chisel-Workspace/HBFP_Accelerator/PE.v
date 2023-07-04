module FPMult(
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
  wire [11:0] _io_out_result_man_T = io_in_a_man * io_in_b_man; // @[MatMul.scala 58:36]
  assign io_out_result_sign = io_in_a_sign ^ io_in_b_sign; // @[MatMul.scala 56:38]
  assign io_out_result_man = _io_out_result_man_T[5:0]; // @[MatMul.scala 58:21]
  assign io_out_result_exp = io_in_a_exp + io_in_b_exp; // @[MatMul.scala 57:36]
endmodule
module FPAdder(
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
  wire  _exp_diff_T = io_in_a_exp > io_in_b_exp; // @[MatMul.scala 72:34]
  wire [7:0] _exp_diff_T_2 = io_in_a_exp - io_in_b_exp; // @[MatMul.scala 72:61]
  wire [7:0] _exp_diff_T_4 = io_in_b_exp - io_in_a_exp; // @[MatMul.scala 72:88]
  wire [7:0] exp_diff = io_in_a_exp > io_in_b_exp ? _exp_diff_T_2 : _exp_diff_T_4; // @[MatMul.scala 72:21]
  wire [5:0] _io_out_result_man_T_1 = io_in_b_man >> exp_diff; // @[MatMul.scala 76:82]
  wire [5:0] _io_out_result_man_T_3 = io_in_a_man + _io_out_result_man_T_1; // @[MatMul.scala 76:67]
  wire [5:0] _io_out_result_man_T_4 = io_in_a_man >> exp_diff; // @[MatMul.scala 76:109]
  wire [5:0] _io_out_result_man_T_6 = _io_out_result_man_T_4 + io_in_b_man; // @[MatMul.scala 76:122]
  assign io_out_result_sign = _exp_diff_T ? io_in_a_sign : io_in_b_sign; // @[MatMul.scala 74:28]
  assign io_out_result_man = _exp_diff_T ? _io_out_result_man_T_3 : _io_out_result_man_T_6; // @[MatMul.scala 76:27]
  assign io_out_result_exp = _exp_diff_T ? io_in_a_exp : io_in_b_exp; // @[MatMul.scala 75:27]
endmodule
module PE(
  input        clock,
  input        reset,
  input        io_in_hor_sign,
  input  [5:0] io_in_hor_man,
  input  [7:0] io_in_hor_exp,
  input        io_in_ver_sign,
  input  [5:0] io_in_ver_man,
  input  [7:0] io_in_ver_exp,
  output       io_out_hor_sign,
  output [5:0] io_out_hor_man,
  output [7:0] io_out_hor_exp,
  output       io_out_ver_sign,
  output [5:0] io_out_ver_man,
  output [7:0] io_out_ver_exp,
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
`endif // RANDOMIZE_REG_INIT
  wire  fpmult_io_in_a_sign; // @[MatMul.scala 30:24]
  wire [5:0] fpmult_io_in_a_man; // @[MatMul.scala 30:24]
  wire [7:0] fpmult_io_in_a_exp; // @[MatMul.scala 30:24]
  wire  fpmult_io_in_b_sign; // @[MatMul.scala 30:24]
  wire [5:0] fpmult_io_in_b_man; // @[MatMul.scala 30:24]
  wire [7:0] fpmult_io_in_b_exp; // @[MatMul.scala 30:24]
  wire  fpmult_io_out_result_sign; // @[MatMul.scala 30:24]
  wire [5:0] fpmult_io_out_result_man; // @[MatMul.scala 30:24]
  wire [7:0] fpmult_io_out_result_exp; // @[MatMul.scala 30:24]
  wire  fpadder_io_in_a_sign; // @[MatMul.scala 34:25]
  wire [5:0] fpadder_io_in_a_man; // @[MatMul.scala 34:25]
  wire [7:0] fpadder_io_in_a_exp; // @[MatMul.scala 34:25]
  wire  fpadder_io_in_b_sign; // @[MatMul.scala 34:25]
  wire [5:0] fpadder_io_in_b_man; // @[MatMul.scala 34:25]
  wire [7:0] fpadder_io_in_b_exp; // @[MatMul.scala 34:25]
  wire  fpadder_io_out_result_sign; // @[MatMul.scala 34:25]
  wire [5:0] fpadder_io_out_result_man; // @[MatMul.scala 34:25]
  wire [7:0] fpadder_io_out_result_exp; // @[MatMul.scala 34:25]
  reg  result_buffer_sign; // @[MatMul.scala 27:28]
  reg [5:0] result_buffer_man; // @[MatMul.scala 27:28]
  reg [7:0] result_buffer_exp; // @[MatMul.scala 27:28]
  reg  io_out_hor_REG_sign; // @[MatMul.scala 39:26]
  reg [5:0] io_out_hor_REG_man; // @[MatMul.scala 39:26]
  reg [7:0] io_out_hor_REG_exp; // @[MatMul.scala 39:26]
  reg  io_out_ver_REG_sign; // @[MatMul.scala 40:26]
  reg [5:0] io_out_ver_REG_man; // @[MatMul.scala 40:26]
  reg [7:0] io_out_ver_REG_exp; // @[MatMul.scala 40:26]
  FPMult fpmult ( // @[MatMul.scala 30:24]
    .io_in_a_sign(fpmult_io_in_a_sign),
    .io_in_a_man(fpmult_io_in_a_man),
    .io_in_a_exp(fpmult_io_in_a_exp),
    .io_in_b_sign(fpmult_io_in_b_sign),
    .io_in_b_man(fpmult_io_in_b_man),
    .io_in_b_exp(fpmult_io_in_b_exp),
    .io_out_result_sign(fpmult_io_out_result_sign),
    .io_out_result_man(fpmult_io_out_result_man),
    .io_out_result_exp(fpmult_io_out_result_exp)
  );
  FPAdder fpadder ( // @[MatMul.scala 34:25]
    .io_in_a_sign(fpadder_io_in_a_sign),
    .io_in_a_man(fpadder_io_in_a_man),
    .io_in_a_exp(fpadder_io_in_a_exp),
    .io_in_b_sign(fpadder_io_in_b_sign),
    .io_in_b_man(fpadder_io_in_b_man),
    .io_in_b_exp(fpadder_io_in_b_exp),
    .io_out_result_sign(fpadder_io_out_result_sign),
    .io_out_result_man(fpadder_io_out_result_man),
    .io_out_result_exp(fpadder_io_out_result_exp)
  );
  assign io_out_hor_sign = io_out_hor_REG_sign; // @[MatMul.scala 39:16]
  assign io_out_hor_man = io_out_hor_REG_man; // @[MatMul.scala 39:16]
  assign io_out_hor_exp = io_out_hor_REG_exp; // @[MatMul.scala 39:16]
  assign io_out_ver_sign = io_out_ver_REG_sign; // @[MatMul.scala 40:16]
  assign io_out_ver_man = io_out_ver_REG_man; // @[MatMul.scala 40:16]
  assign io_out_ver_exp = io_out_ver_REG_exp; // @[MatMul.scala 40:16]
  assign io_out_result_sign = result_buffer_sign; // @[MatMul.scala 41:19]
  assign io_out_result_man = result_buffer_man; // @[MatMul.scala 41:19]
  assign io_out_result_exp = result_buffer_exp; // @[MatMul.scala 41:19]
  assign fpmult_io_in_a_sign = io_in_hor_sign; // @[MatMul.scala 31:20]
  assign fpmult_io_in_a_man = io_in_hor_man; // @[MatMul.scala 31:20]
  assign fpmult_io_in_a_exp = io_in_hor_exp; // @[MatMul.scala 31:20]
  assign fpmult_io_in_b_sign = io_in_ver_sign; // @[MatMul.scala 32:20]
  assign fpmult_io_in_b_man = io_in_ver_man; // @[MatMul.scala 32:20]
  assign fpmult_io_in_b_exp = io_in_ver_exp; // @[MatMul.scala 32:20]
  assign fpadder_io_in_a_sign = fpmult_io_out_result_sign; // @[MatMul.scala 35:21]
  assign fpadder_io_in_a_man = fpmult_io_out_result_man; // @[MatMul.scala 35:21]
  assign fpadder_io_in_a_exp = fpmult_io_out_result_exp; // @[MatMul.scala 35:21]
  assign fpadder_io_in_b_sign = result_buffer_sign; // @[MatMul.scala 36:21]
  assign fpadder_io_in_b_man = result_buffer_man; // @[MatMul.scala 36:21]
  assign fpadder_io_in_b_exp = result_buffer_exp; // @[MatMul.scala 36:21]
  always @(posedge clock) begin
    result_buffer_sign <= fpadder_io_out_result_sign; // @[MatMul.scala 37:19]
    result_buffer_man <= fpadder_io_out_result_man; // @[MatMul.scala 37:19]
    result_buffer_exp <= fpadder_io_out_result_exp; // @[MatMul.scala 37:19]
    io_out_hor_REG_sign <= io_in_hor_sign; // @[MatMul.scala 39:26]
    io_out_hor_REG_man <= io_in_hor_man; // @[MatMul.scala 39:26]
    io_out_hor_REG_exp <= io_in_hor_exp; // @[MatMul.scala 39:26]
    io_out_ver_REG_sign <= io_in_ver_sign; // @[MatMul.scala 40:26]
    io_out_ver_REG_man <= io_in_ver_man; // @[MatMul.scala 40:26]
    io_out_ver_REG_exp <= io_in_ver_exp; // @[MatMul.scala 40:26]
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
  _RAND_3 = {1{`RANDOM}};
  io_out_hor_REG_sign = _RAND_3[0:0];
  _RAND_4 = {1{`RANDOM}};
  io_out_hor_REG_man = _RAND_4[5:0];
  _RAND_5 = {1{`RANDOM}};
  io_out_hor_REG_exp = _RAND_5[7:0];
  _RAND_6 = {1{`RANDOM}};
  io_out_ver_REG_sign = _RAND_6[0:0];
  _RAND_7 = {1{`RANDOM}};
  io_out_ver_REG_man = _RAND_7[5:0];
  _RAND_8 = {1{`RANDOM}};
  io_out_ver_REG_exp = _RAND_8[7:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
