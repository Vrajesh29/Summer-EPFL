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
  wire [8:0] exp_addition = io_in_a_exp + io_in_b_exp; // @[MatMul.scala 345:34]
  wire [8:0] _io_out_result_exp_T_1 = 9'h100 - 9'h1; // @[MatMul.scala 346:57]
  wire [8:0] _io_out_result_exp_T_5 = exp_addition > _io_out_result_exp_T_1 ? _io_out_result_exp_T_1 : exp_addition; // @[MatMul.scala 346:27]
  wire [11:0] _io_out_result_man_T = io_in_a_man * io_in_b_man; // @[MatMul.scala 347:39]
  wire [6:0] _io_out_result_man_T_2 = 7'h40 - 7'h1; // @[MatMul.scala 347:68]
  wire [11:0] _GEN_0 = {{5'd0}, _io_out_result_man_T_2}; // @[MatMul.scala 347:52]
  wire [11:0] _io_out_result_man_T_7 = _io_out_result_man_T > _GEN_0 ? {{5'd0}, _io_out_result_man_T_2} :
    _io_out_result_man_T; // @[MatMul.scala 347:27]
  assign io_out_result_sign = io_in_a_sign ^ io_in_b_sign; // @[MatMul.scala 344:38]
  assign io_out_result_man = _io_out_result_man_T_7[5:0]; // @[MatMul.scala 347:21]
  assign io_out_result_exp = _io_out_result_exp_T_5[7:0]; // @[MatMul.scala 346:21]
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
  wire  _exp_diff_T = io_in_a_exp > io_in_b_exp; // @[MatMul.scala 361:34]
  wire [7:0] _exp_diff_T_2 = io_in_a_exp - io_in_b_exp; // @[MatMul.scala 361:61]
  wire [7:0] _exp_diff_T_4 = io_in_b_exp - io_in_a_exp; // @[MatMul.scala 361:88]
  wire [7:0] exp_diff = io_in_a_exp > io_in_b_exp ? _exp_diff_T_2 : _exp_diff_T_4; // @[MatMul.scala 361:21]
  wire [5:0] _io_out_result_sign_T_1 = io_in_b_man >> exp_diff; // @[MatMul.scala 363:87]
  wire  _io_out_result_sign_T_2 = io_in_a_man > _io_out_result_sign_T_1; // @[MatMul.scala 363:72]
  wire  _io_out_result_sign_T_3 = io_in_a_man > _io_out_result_sign_T_1 ? io_in_a_sign : io_in_b_sign; // @[MatMul.scala 363:59]
  wire [5:0] _io_out_result_sign_T_4 = io_in_a_man >> exp_diff; // @[MatMul.scala 363:147]
  wire  _io_out_result_sign_T_6 = _io_out_result_sign_T_4 > io_in_b_man ? io_in_a_sign : io_in_b_sign; // @[MatMul.scala 363:133]
  wire [6:0] _addition_T_3 = io_in_a_man + _io_out_result_sign_T_1; // @[MatMul.scala 365:96]
  wire [5:0] _addition_T_8 = io_in_a_man - _io_out_result_sign_T_1; // @[MatMul.scala 365:183]
  wire [5:0] _addition_T_11 = _io_out_result_sign_T_1 - io_in_a_man; // @[MatMul.scala 365:236]
  wire [5:0] _addition_T_12 = _io_out_result_sign_T_2 ? _addition_T_8 : _addition_T_11; // @[MatMul.scala 365:129]
  wire [6:0] _addition_T_13 = io_in_a_sign == io_in_b_sign ? _addition_T_3 : {{1'd0}, _addition_T_12}; // @[MatMul.scala 365:52]
  wire [6:0] _addition_T_16 = io_in_b_man + _io_out_result_sign_T_4; // @[MatMul.scala 365:301]
  wire [5:0] _addition_T_21 = io_in_b_man - _io_out_result_sign_T_4; // @[MatMul.scala 365:388]
  wire [5:0] _addition_T_24 = _io_out_result_sign_T_4 - io_in_b_man; // @[MatMul.scala 365:441]
  wire [5:0] _addition_T_25 = io_in_b_man > _io_out_result_sign_T_4 ? _addition_T_21 : _addition_T_24; // @[MatMul.scala 365:334]
  wire [6:0] _addition_T_26 = io_in_a_sign == io_in_b_sign ? _addition_T_16 : {{1'd0}, _addition_T_25}; // @[MatMul.scala 365:257]
  wire [6:0] addition = _exp_diff_T ? _addition_T_13 : _addition_T_26; // @[MatMul.scala 365:21]
  wire [6:0] _io_out_result_man_T_1 = 7'h40 - 7'h1; // @[MatMul.scala 366:53]
  wire [6:0] _io_out_result_man_T_5 = addition > _io_out_result_man_T_1 ? _io_out_result_man_T_1 : addition; // @[MatMul.scala 366:27]
  assign io_out_result_sign = _exp_diff_T ? _io_out_result_sign_T_3 : _io_out_result_sign_T_6; // @[MatMul.scala 363:28]
  assign io_out_result_man = _io_out_result_man_T_5[5:0]; // @[MatMul.scala 366:21]
  assign io_out_result_exp = _exp_diff_T ? io_in_a_exp : io_in_b_exp; // @[MatMul.scala 364:27]
endmodule
module PE(
  input        clock,
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
`endif // RANDOMIZE_REG_INIT
  wire  fpmult_io_in_a_sign; // @[MatMul.scala 388:24]
  wire [5:0] fpmult_io_in_a_man; // @[MatMul.scala 388:24]
  wire [7:0] fpmult_io_in_a_exp; // @[MatMul.scala 388:24]
  wire  fpmult_io_in_b_sign; // @[MatMul.scala 388:24]
  wire [5:0] fpmult_io_in_b_man; // @[MatMul.scala 388:24]
  wire [7:0] fpmult_io_in_b_exp; // @[MatMul.scala 388:24]
  wire  fpmult_io_out_result_sign; // @[MatMul.scala 388:24]
  wire [5:0] fpmult_io_out_result_man; // @[MatMul.scala 388:24]
  wire [7:0] fpmult_io_out_result_exp; // @[MatMul.scala 388:24]
  wire  fpadder_io_in_a_sign; // @[MatMul.scala 392:25]
  wire [5:0] fpadder_io_in_a_man; // @[MatMul.scala 392:25]
  wire [7:0] fpadder_io_in_a_exp; // @[MatMul.scala 392:25]
  wire  fpadder_io_in_b_sign; // @[MatMul.scala 392:25]
  wire [5:0] fpadder_io_in_b_man; // @[MatMul.scala 392:25]
  wire [7:0] fpadder_io_in_b_exp; // @[MatMul.scala 392:25]
  wire  fpadder_io_out_result_sign; // @[MatMul.scala 392:25]
  wire [5:0] fpadder_io_out_result_man; // @[MatMul.scala 392:25]
  wire [7:0] fpadder_io_out_result_exp; // @[MatMul.scala 392:25]
  reg  result_buffer_sign; // @[MatMul.scala 385:28]
  reg [5:0] result_buffer_man; // @[MatMul.scala 385:28]
  reg [7:0] result_buffer_exp; // @[MatMul.scala 385:28]
  FPMult fpmult ( // @[MatMul.scala 388:24]
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
  FPAdder fpadder ( // @[MatMul.scala 392:25]
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
  assign io_out_hor_sign = io_in_hor_sign; // @[MatMul.scala 397:16]
  assign io_out_hor_man = io_in_hor_man; // @[MatMul.scala 397:16]
  assign io_out_hor_exp = io_in_hor_exp; // @[MatMul.scala 397:16]
  assign io_out_ver_sign = io_in_ver_sign; // @[MatMul.scala 398:16]
  assign io_out_ver_man = io_in_ver_man; // @[MatMul.scala 398:16]
  assign io_out_ver_exp = io_in_ver_exp; // @[MatMul.scala 398:16]
  assign io_out_result_sign = result_buffer_sign; // @[MatMul.scala 399:19]
  assign io_out_result_man = result_buffer_man; // @[MatMul.scala 399:19]
  assign io_out_result_exp = result_buffer_exp; // @[MatMul.scala 399:19]
  assign fpmult_io_in_a_sign = io_in_hor_sign; // @[MatMul.scala 389:20]
  assign fpmult_io_in_a_man = io_in_hor_man; // @[MatMul.scala 389:20]
  assign fpmult_io_in_a_exp = io_in_hor_exp; // @[MatMul.scala 389:20]
  assign fpmult_io_in_b_sign = io_in_ver_sign; // @[MatMul.scala 390:20]
  assign fpmult_io_in_b_man = io_in_ver_man; // @[MatMul.scala 390:20]
  assign fpmult_io_in_b_exp = io_in_ver_exp; // @[MatMul.scala 390:20]
  assign fpadder_io_in_a_sign = fpmult_io_out_result_sign; // @[MatMul.scala 393:21]
  assign fpadder_io_in_a_man = fpmult_io_out_result_man; // @[MatMul.scala 393:21]
  assign fpadder_io_in_a_exp = fpmult_io_out_result_exp; // @[MatMul.scala 393:21]
  assign fpadder_io_in_b_sign = result_buffer_sign; // @[MatMul.scala 394:21]
  assign fpadder_io_in_b_man = result_buffer_man; // @[MatMul.scala 394:21]
  assign fpadder_io_in_b_exp = result_buffer_exp; // @[MatMul.scala 394:21]
  always @(posedge clock) begin
    result_buffer_sign <= fpadder_io_out_result_sign; // @[MatMul.scala 395:19]
    result_buffer_man <= fpadder_io_out_result_man; // @[MatMul.scala 395:19]
    result_buffer_exp <= fpadder_io_out_result_exp; // @[MatMul.scala 395:19]
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
module PE_3(
  input        clock,
  input        io_in_hor_sign,
  input  [5:0] io_in_hor_man,
  input  [7:0] io_in_hor_exp,
  input        io_in_ver_sign,
  input  [5:0] io_in_ver_man,
  input  [7:0] io_in_ver_exp,
  output       io_out_result_sign,
  output [5:0] io_out_result_man,
  output [7:0] io_out_result_exp
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
`endif // RANDOMIZE_REG_INIT
  wire  fpmult_io_in_a_sign; // @[MatMul.scala 388:24]
  wire [5:0] fpmult_io_in_a_man; // @[MatMul.scala 388:24]
  wire [7:0] fpmult_io_in_a_exp; // @[MatMul.scala 388:24]
  wire  fpmult_io_in_b_sign; // @[MatMul.scala 388:24]
  wire [5:0] fpmult_io_in_b_man; // @[MatMul.scala 388:24]
  wire [7:0] fpmult_io_in_b_exp; // @[MatMul.scala 388:24]
  wire  fpmult_io_out_result_sign; // @[MatMul.scala 388:24]
  wire [5:0] fpmult_io_out_result_man; // @[MatMul.scala 388:24]
  wire [7:0] fpmult_io_out_result_exp; // @[MatMul.scala 388:24]
  wire  fpadder_io_in_a_sign; // @[MatMul.scala 392:25]
  wire [5:0] fpadder_io_in_a_man; // @[MatMul.scala 392:25]
  wire [7:0] fpadder_io_in_a_exp; // @[MatMul.scala 392:25]
  wire  fpadder_io_in_b_sign; // @[MatMul.scala 392:25]
  wire [5:0] fpadder_io_in_b_man; // @[MatMul.scala 392:25]
  wire [7:0] fpadder_io_in_b_exp; // @[MatMul.scala 392:25]
  wire  fpadder_io_out_result_sign; // @[MatMul.scala 392:25]
  wire [5:0] fpadder_io_out_result_man; // @[MatMul.scala 392:25]
  wire [7:0] fpadder_io_out_result_exp; // @[MatMul.scala 392:25]
  reg  result_buffer_sign; // @[MatMul.scala 385:28]
  reg [5:0] result_buffer_man; // @[MatMul.scala 385:28]
  reg [7:0] result_buffer_exp; // @[MatMul.scala 385:28]
  FPMult fpmult ( // @[MatMul.scala 388:24]
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
  FPAdder fpadder ( // @[MatMul.scala 392:25]
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
  assign io_out_result_sign = result_buffer_sign; // @[MatMul.scala 399:19]
  assign io_out_result_man = result_buffer_man; // @[MatMul.scala 399:19]
  assign io_out_result_exp = result_buffer_exp; // @[MatMul.scala 399:19]
  assign fpmult_io_in_a_sign = io_in_hor_sign; // @[MatMul.scala 389:20]
  assign fpmult_io_in_a_man = io_in_hor_man; // @[MatMul.scala 389:20]
  assign fpmult_io_in_a_exp = io_in_hor_exp; // @[MatMul.scala 389:20]
  assign fpmult_io_in_b_sign = io_in_ver_sign; // @[MatMul.scala 390:20]
  assign fpmult_io_in_b_man = io_in_ver_man; // @[MatMul.scala 390:20]
  assign fpmult_io_in_b_exp = io_in_ver_exp; // @[MatMul.scala 390:20]
  assign fpadder_io_in_a_sign = fpmult_io_out_result_sign; // @[MatMul.scala 393:21]
  assign fpadder_io_in_a_man = fpmult_io_out_result_man; // @[MatMul.scala 393:21]
  assign fpadder_io_in_a_exp = fpmult_io_out_result_exp; // @[MatMul.scala 393:21]
  assign fpadder_io_in_b_sign = result_buffer_sign; // @[MatMul.scala 394:21]
  assign fpadder_io_in_b_man = result_buffer_man; // @[MatMul.scala 394:21]
  assign fpadder_io_in_b_exp = result_buffer_exp; // @[MatMul.scala 394:21]
  always @(posedge clock) begin
    result_buffer_sign <= fpadder_io_out_result_sign; // @[MatMul.scala 395:19]
    result_buffer_man <= fpadder_io_out_result_man; // @[MatMul.scala 395:19]
    result_buffer_exp <= fpadder_io_out_result_exp; // @[MatMul.scala 395:19]
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
  input        io_enq_bits_sign,
  input  [5:0] io_enq_bits_man,
  input  [7:0] io_enq_bits_exp,
  input        io_deq_ready,
  output       io_deq_valid,
  output       io_deq_bits_sign,
  output [5:0] io_deq_bits_man,
  output [7:0] io_deq_bits_exp
);
`ifdef RANDOMIZE_MEM_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
`endif // RANDOMIZE_REG_INIT
  reg  ram_sign [0:1]; // @[Decoupled.scala 273:95]
  wire  ram_sign_io_deq_bits_MPORT_en; // @[Decoupled.scala 273:95]
  wire  ram_sign_io_deq_bits_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_sign_io_deq_bits_MPORT_data; // @[Decoupled.scala 273:95]
  wire  ram_sign_MPORT_data; // @[Decoupled.scala 273:95]
  wire  ram_sign_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_sign_MPORT_mask; // @[Decoupled.scala 273:95]
  wire  ram_sign_MPORT_en; // @[Decoupled.scala 273:95]
  reg [5:0] ram_man [0:1]; // @[Decoupled.scala 273:95]
  wire  ram_man_io_deq_bits_MPORT_en; // @[Decoupled.scala 273:95]
  wire  ram_man_io_deq_bits_MPORT_addr; // @[Decoupled.scala 273:95]
  wire [5:0] ram_man_io_deq_bits_MPORT_data; // @[Decoupled.scala 273:95]
  wire [5:0] ram_man_MPORT_data; // @[Decoupled.scala 273:95]
  wire  ram_man_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_man_MPORT_mask; // @[Decoupled.scala 273:95]
  wire  ram_man_MPORT_en; // @[Decoupled.scala 273:95]
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
  assign ram_sign_io_deq_bits_MPORT_en = 1'h1;
  assign ram_sign_io_deq_bits_MPORT_addr = deq_ptr_value;
  assign ram_sign_io_deq_bits_MPORT_data = ram_sign[ram_sign_io_deq_bits_MPORT_addr]; // @[Decoupled.scala 273:95]
  assign ram_sign_MPORT_data = io_enq_bits_sign;
  assign ram_sign_MPORT_addr = enq_ptr_value;
  assign ram_sign_MPORT_mask = 1'h1;
  assign ram_sign_MPORT_en = io_enq_ready;
  assign ram_man_io_deq_bits_MPORT_en = 1'h1;
  assign ram_man_io_deq_bits_MPORT_addr = deq_ptr_value;
  assign ram_man_io_deq_bits_MPORT_data = ram_man[ram_man_io_deq_bits_MPORT_addr]; // @[Decoupled.scala 273:95]
  assign ram_man_MPORT_data = io_enq_bits_man;
  assign ram_man_MPORT_addr = enq_ptr_value;
  assign ram_man_MPORT_mask = 1'h1;
  assign ram_man_MPORT_en = io_enq_ready;
  assign ram_exp_io_deq_bits_MPORT_en = 1'h1;
  assign ram_exp_io_deq_bits_MPORT_addr = deq_ptr_value;
  assign ram_exp_io_deq_bits_MPORT_data = ram_exp[ram_exp_io_deq_bits_MPORT_addr]; // @[Decoupled.scala 273:95]
  assign ram_exp_MPORT_data = io_enq_bits_exp;
  assign ram_exp_MPORT_addr = enq_ptr_value;
  assign ram_exp_MPORT_mask = 1'h1;
  assign ram_exp_MPORT_en = io_enq_ready;
  assign io_enq_ready = ~full; // @[Decoupled.scala 303:19]
  assign io_deq_valid = ~empty; // @[Decoupled.scala 302:19]
  assign io_deq_bits_sign = ram_sign_io_deq_bits_MPORT_data; // @[Decoupled.scala 310:17]
  assign io_deq_bits_man = ram_man_io_deq_bits_MPORT_data; // @[Decoupled.scala 310:17]
  assign io_deq_bits_exp = ram_exp_io_deq_bits_MPORT_data; // @[Decoupled.scala 310:17]
  always @(posedge clock) begin
    if (ram_sign_MPORT_en & ram_sign_MPORT_mask) begin
      ram_sign[ram_sign_MPORT_addr] <= ram_sign_MPORT_data; // @[Decoupled.scala 273:95]
    end
    if (ram_man_MPORT_en & ram_man_MPORT_mask) begin
      ram_man[ram_man_MPORT_addr] <= ram_man_MPORT_data; // @[Decoupled.scala 273:95]
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
    ram_sign[initvar] = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  for (initvar = 0; initvar < 2; initvar = initvar+1)
    ram_man[initvar] = _RAND_1[5:0];
  _RAND_2 = {1{`RANDOM}};
  for (initvar = 0; initvar < 2; initvar = initvar+1)
    ram_exp[initvar] = _RAND_2[7:0];
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  _RAND_3 = {1{`RANDOM}};
  enq_ptr_value = _RAND_3[0:0];
  _RAND_4 = {1{`RANDOM}};
  deq_ptr_value = _RAND_4[0:0];
  _RAND_5 = {1{`RANDOM}};
  maybe_full = _RAND_5[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module Queue_4(
  input        clock,
  input        reset,
  output       io_enq_ready,
  input        io_enq_bits_sign,
  input  [5:0] io_enq_bits_man,
  input  [7:0] io_enq_bits_exp,
  input        io_deq_ready,
  output       io_deq_valid,
  output       io_deq_bits_sign,
  output [5:0] io_deq_bits_man,
  output [7:0] io_deq_bits_exp
);
`ifdef RANDOMIZE_MEM_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
`endif // RANDOMIZE_REG_INIT
  reg  ram_sign [0:1]; // @[Decoupled.scala 273:95]
  wire  ram_sign_io_deq_bits_MPORT_en; // @[Decoupled.scala 273:95]
  wire  ram_sign_io_deq_bits_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_sign_io_deq_bits_MPORT_data; // @[Decoupled.scala 273:95]
  wire  ram_sign_MPORT_data; // @[Decoupled.scala 273:95]
  wire  ram_sign_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_sign_MPORT_mask; // @[Decoupled.scala 273:95]
  wire  ram_sign_MPORT_en; // @[Decoupled.scala 273:95]
  reg [5:0] ram_man [0:1]; // @[Decoupled.scala 273:95]
  wire  ram_man_io_deq_bits_MPORT_en; // @[Decoupled.scala 273:95]
  wire  ram_man_io_deq_bits_MPORT_addr; // @[Decoupled.scala 273:95]
  wire [5:0] ram_man_io_deq_bits_MPORT_data; // @[Decoupled.scala 273:95]
  wire [5:0] ram_man_MPORT_data; // @[Decoupled.scala 273:95]
  wire  ram_man_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_man_MPORT_mask; // @[Decoupled.scala 273:95]
  wire  ram_man_MPORT_en; // @[Decoupled.scala 273:95]
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
  assign ram_sign_io_deq_bits_MPORT_en = 1'h1;
  assign ram_sign_io_deq_bits_MPORT_addr = deq_ptr_value;
  assign ram_sign_io_deq_bits_MPORT_data = ram_sign[ram_sign_io_deq_bits_MPORT_addr]; // @[Decoupled.scala 273:95]
  assign ram_sign_MPORT_data = io_enq_bits_sign;
  assign ram_sign_MPORT_addr = enq_ptr_value;
  assign ram_sign_MPORT_mask = 1'h1;
  assign ram_sign_MPORT_en = io_enq_ready;
  assign ram_man_io_deq_bits_MPORT_en = 1'h1;
  assign ram_man_io_deq_bits_MPORT_addr = deq_ptr_value;
  assign ram_man_io_deq_bits_MPORT_data = ram_man[ram_man_io_deq_bits_MPORT_addr]; // @[Decoupled.scala 273:95]
  assign ram_man_MPORT_data = io_enq_bits_man;
  assign ram_man_MPORT_addr = enq_ptr_value;
  assign ram_man_MPORT_mask = 1'h1;
  assign ram_man_MPORT_en = io_enq_ready;
  assign ram_exp_io_deq_bits_MPORT_en = 1'h1;
  assign ram_exp_io_deq_bits_MPORT_addr = deq_ptr_value;
  assign ram_exp_io_deq_bits_MPORT_data = ram_exp[ram_exp_io_deq_bits_MPORT_addr]; // @[Decoupled.scala 273:95]
  assign ram_exp_MPORT_data = io_enq_bits_exp;
  assign ram_exp_MPORT_addr = enq_ptr_value;
  assign ram_exp_MPORT_mask = 1'h1;
  assign ram_exp_MPORT_en = io_enq_ready;
  assign io_enq_ready = ~full; // @[Decoupled.scala 303:19]
  assign io_deq_valid = ~empty; // @[Decoupled.scala 302:19]
  assign io_deq_bits_sign = ram_sign_io_deq_bits_MPORT_data; // @[Decoupled.scala 310:17]
  assign io_deq_bits_man = ram_man_io_deq_bits_MPORT_data; // @[Decoupled.scala 310:17]
  assign io_deq_bits_exp = ram_exp_io_deq_bits_MPORT_data; // @[Decoupled.scala 310:17]
  always @(posedge clock) begin
    if (ram_sign_MPORT_en & ram_sign_MPORT_mask) begin
      ram_sign[ram_sign_MPORT_addr] <= ram_sign_MPORT_data; // @[Decoupled.scala 273:95]
    end
    if (ram_man_MPORT_en & ram_man_MPORT_mask) begin
      ram_man[ram_man_MPORT_addr] <= ram_man_MPORT_data; // @[Decoupled.scala 273:95]
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
    ram_sign[initvar] = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  for (initvar = 0; initvar < 2; initvar = initvar+1)
    ram_man[initvar] = _RAND_1[5:0];
  _RAND_2 = {1{`RANDOM}};
  for (initvar = 0; initvar < 2; initvar = initvar+1)
    ram_exp[initvar] = _RAND_2[7:0];
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  _RAND_3 = {1{`RANDOM}};
  enq_ptr_value = _RAND_3[0:0];
  _RAND_4 = {1{`RANDOM}};
  deq_ptr_value = _RAND_4[0:0];
  _RAND_5 = {1{`RANDOM}};
  maybe_full = _RAND_5[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module SystolicArray_HBFP(
  input        clock,
  input        reset,
  input        io_in_hor_0_ready,
  input        io_in_hor_0_valid,
  input        io_in_hor_0_bits_sign,
  input  [5:0] io_in_hor_0_bits_man,
  input  [7:0] io_in_hor_0_bits_exp,
  input        io_in_hor_1_ready,
  input        io_in_hor_1_valid,
  input        io_in_hor_1_bits_sign,
  input  [5:0] io_in_hor_1_bits_man,
  input  [7:0] io_in_hor_1_bits_exp,
  input        io_in_ver_0_ready,
  input        io_in_ver_0_valid,
  input        io_in_ver_0_bits_sign,
  input  [5:0] io_in_ver_0_bits_man,
  input  [7:0] io_in_ver_0_bits_exp,
  input        io_in_ver_1_ready,
  input        io_in_ver_1_valid,
  input        io_in_ver_1_bits_sign,
  input  [5:0] io_in_ver_1_bits_man,
  input  [7:0] io_in_ver_1_bits_exp,
  output       io_out_result_0_ready,
  output       io_out_result_0_valid,
  output       io_out_result_0_bits_sign,
  output [5:0] io_out_result_0_bits_man,
  output [7:0] io_out_result_0_bits_exp,
  output       io_out_result_1_ready,
  output       io_out_result_1_valid,
  output       io_out_result_1_bits_sign,
  output [5:0] io_out_result_1_bits_man,
  output [7:0] io_out_result_1_bits_exp
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
`endif // RANDOMIZE_REG_INIT
  wire  pes_0_0_clock; // @[HBFP_GEMM.scala 122:34]
  wire  pes_0_0_io_in_hor_sign; // @[HBFP_GEMM.scala 122:34]
  wire [5:0] pes_0_0_io_in_hor_man; // @[HBFP_GEMM.scala 122:34]
  wire [7:0] pes_0_0_io_in_hor_exp; // @[HBFP_GEMM.scala 122:34]
  wire  pes_0_0_io_in_ver_sign; // @[HBFP_GEMM.scala 122:34]
  wire [5:0] pes_0_0_io_in_ver_man; // @[HBFP_GEMM.scala 122:34]
  wire [7:0] pes_0_0_io_in_ver_exp; // @[HBFP_GEMM.scala 122:34]
  wire  pes_0_0_io_out_hor_sign; // @[HBFP_GEMM.scala 122:34]
  wire [5:0] pes_0_0_io_out_hor_man; // @[HBFP_GEMM.scala 122:34]
  wire [7:0] pes_0_0_io_out_hor_exp; // @[HBFP_GEMM.scala 122:34]
  wire  pes_0_0_io_out_ver_sign; // @[HBFP_GEMM.scala 122:34]
  wire [5:0] pes_0_0_io_out_ver_man; // @[HBFP_GEMM.scala 122:34]
  wire [7:0] pes_0_0_io_out_ver_exp; // @[HBFP_GEMM.scala 122:34]
  wire  pes_0_0_io_out_result_sign; // @[HBFP_GEMM.scala 122:34]
  wire [5:0] pes_0_0_io_out_result_man; // @[HBFP_GEMM.scala 122:34]
  wire [7:0] pes_0_0_io_out_result_exp; // @[HBFP_GEMM.scala 122:34]
  wire  pes_0_1_clock; // @[HBFP_GEMM.scala 122:34]
  wire  pes_0_1_io_in_hor_sign; // @[HBFP_GEMM.scala 122:34]
  wire [5:0] pes_0_1_io_in_hor_man; // @[HBFP_GEMM.scala 122:34]
  wire [7:0] pes_0_1_io_in_hor_exp; // @[HBFP_GEMM.scala 122:34]
  wire  pes_0_1_io_in_ver_sign; // @[HBFP_GEMM.scala 122:34]
  wire [5:0] pes_0_1_io_in_ver_man; // @[HBFP_GEMM.scala 122:34]
  wire [7:0] pes_0_1_io_in_ver_exp; // @[HBFP_GEMM.scala 122:34]
  wire  pes_0_1_io_out_hor_sign; // @[HBFP_GEMM.scala 122:34]
  wire [5:0] pes_0_1_io_out_hor_man; // @[HBFP_GEMM.scala 122:34]
  wire [7:0] pes_0_1_io_out_hor_exp; // @[HBFP_GEMM.scala 122:34]
  wire  pes_0_1_io_out_ver_sign; // @[HBFP_GEMM.scala 122:34]
  wire [5:0] pes_0_1_io_out_ver_man; // @[HBFP_GEMM.scala 122:34]
  wire [7:0] pes_0_1_io_out_ver_exp; // @[HBFP_GEMM.scala 122:34]
  wire  pes_0_1_io_out_result_sign; // @[HBFP_GEMM.scala 122:34]
  wire [5:0] pes_0_1_io_out_result_man; // @[HBFP_GEMM.scala 122:34]
  wire [7:0] pes_0_1_io_out_result_exp; // @[HBFP_GEMM.scala 122:34]
  wire  pes_1_0_clock; // @[HBFP_GEMM.scala 122:34]
  wire  pes_1_0_io_in_hor_sign; // @[HBFP_GEMM.scala 122:34]
  wire [5:0] pes_1_0_io_in_hor_man; // @[HBFP_GEMM.scala 122:34]
  wire [7:0] pes_1_0_io_in_hor_exp; // @[HBFP_GEMM.scala 122:34]
  wire  pes_1_0_io_in_ver_sign; // @[HBFP_GEMM.scala 122:34]
  wire [5:0] pes_1_0_io_in_ver_man; // @[HBFP_GEMM.scala 122:34]
  wire [7:0] pes_1_0_io_in_ver_exp; // @[HBFP_GEMM.scala 122:34]
  wire  pes_1_0_io_out_hor_sign; // @[HBFP_GEMM.scala 122:34]
  wire [5:0] pes_1_0_io_out_hor_man; // @[HBFP_GEMM.scala 122:34]
  wire [7:0] pes_1_0_io_out_hor_exp; // @[HBFP_GEMM.scala 122:34]
  wire  pes_1_0_io_out_ver_sign; // @[HBFP_GEMM.scala 122:34]
  wire [5:0] pes_1_0_io_out_ver_man; // @[HBFP_GEMM.scala 122:34]
  wire [7:0] pes_1_0_io_out_ver_exp; // @[HBFP_GEMM.scala 122:34]
  wire  pes_1_0_io_out_result_sign; // @[HBFP_GEMM.scala 122:34]
  wire [5:0] pes_1_0_io_out_result_man; // @[HBFP_GEMM.scala 122:34]
  wire [7:0] pes_1_0_io_out_result_exp; // @[HBFP_GEMM.scala 122:34]
  wire  pes_1_1_clock; // @[HBFP_GEMM.scala 122:34]
  wire  pes_1_1_io_in_hor_sign; // @[HBFP_GEMM.scala 122:34]
  wire [5:0] pes_1_1_io_in_hor_man; // @[HBFP_GEMM.scala 122:34]
  wire [7:0] pes_1_1_io_in_hor_exp; // @[HBFP_GEMM.scala 122:34]
  wire  pes_1_1_io_in_ver_sign; // @[HBFP_GEMM.scala 122:34]
  wire [5:0] pes_1_1_io_in_ver_man; // @[HBFP_GEMM.scala 122:34]
  wire [7:0] pes_1_1_io_in_ver_exp; // @[HBFP_GEMM.scala 122:34]
  wire  pes_1_1_io_out_result_sign; // @[HBFP_GEMM.scala 122:34]
  wire [5:0] pes_1_1_io_out_result_man; // @[HBFP_GEMM.scala 122:34]
  wire [7:0] pes_1_1_io_out_result_exp; // @[HBFP_GEMM.scala 122:34]
  wire  myinputQ_hor_0_clock; // @[HBFP_GEMM.scala 124:40]
  wire  myinputQ_hor_0_reset; // @[HBFP_GEMM.scala 124:40]
  wire  myinputQ_hor_0_io_enq_ready; // @[HBFP_GEMM.scala 124:40]
  wire  myinputQ_hor_0_io_enq_bits_sign; // @[HBFP_GEMM.scala 124:40]
  wire [5:0] myinputQ_hor_0_io_enq_bits_man; // @[HBFP_GEMM.scala 124:40]
  wire [7:0] myinputQ_hor_0_io_enq_bits_exp; // @[HBFP_GEMM.scala 124:40]
  wire  myinputQ_hor_0_io_deq_ready; // @[HBFP_GEMM.scala 124:40]
  wire  myinputQ_hor_0_io_deq_valid; // @[HBFP_GEMM.scala 124:40]
  wire  myinputQ_hor_0_io_deq_bits_sign; // @[HBFP_GEMM.scala 124:40]
  wire [5:0] myinputQ_hor_0_io_deq_bits_man; // @[HBFP_GEMM.scala 124:40]
  wire [7:0] myinputQ_hor_0_io_deq_bits_exp; // @[HBFP_GEMM.scala 124:40]
  wire  myinputQ_hor_1_clock; // @[HBFP_GEMM.scala 124:40]
  wire  myinputQ_hor_1_reset; // @[HBFP_GEMM.scala 124:40]
  wire  myinputQ_hor_1_io_enq_ready; // @[HBFP_GEMM.scala 124:40]
  wire  myinputQ_hor_1_io_enq_bits_sign; // @[HBFP_GEMM.scala 124:40]
  wire [5:0] myinputQ_hor_1_io_enq_bits_man; // @[HBFP_GEMM.scala 124:40]
  wire [7:0] myinputQ_hor_1_io_enq_bits_exp; // @[HBFP_GEMM.scala 124:40]
  wire  myinputQ_hor_1_io_deq_ready; // @[HBFP_GEMM.scala 124:40]
  wire  myinputQ_hor_1_io_deq_valid; // @[HBFP_GEMM.scala 124:40]
  wire  myinputQ_hor_1_io_deq_bits_sign; // @[HBFP_GEMM.scala 124:40]
  wire [5:0] myinputQ_hor_1_io_deq_bits_man; // @[HBFP_GEMM.scala 124:40]
  wire [7:0] myinputQ_hor_1_io_deq_bits_exp; // @[HBFP_GEMM.scala 124:40]
  wire  myinputQ_ver_0_clock; // @[HBFP_GEMM.scala 125:40]
  wire  myinputQ_ver_0_reset; // @[HBFP_GEMM.scala 125:40]
  wire  myinputQ_ver_0_io_enq_ready; // @[HBFP_GEMM.scala 125:40]
  wire  myinputQ_ver_0_io_enq_bits_sign; // @[HBFP_GEMM.scala 125:40]
  wire [5:0] myinputQ_ver_0_io_enq_bits_man; // @[HBFP_GEMM.scala 125:40]
  wire [7:0] myinputQ_ver_0_io_enq_bits_exp; // @[HBFP_GEMM.scala 125:40]
  wire  myinputQ_ver_0_io_deq_ready; // @[HBFP_GEMM.scala 125:40]
  wire  myinputQ_ver_0_io_deq_valid; // @[HBFP_GEMM.scala 125:40]
  wire  myinputQ_ver_0_io_deq_bits_sign; // @[HBFP_GEMM.scala 125:40]
  wire [5:0] myinputQ_ver_0_io_deq_bits_man; // @[HBFP_GEMM.scala 125:40]
  wire [7:0] myinputQ_ver_0_io_deq_bits_exp; // @[HBFP_GEMM.scala 125:40]
  wire  myinputQ_ver_1_clock; // @[HBFP_GEMM.scala 125:40]
  wire  myinputQ_ver_1_reset; // @[HBFP_GEMM.scala 125:40]
  wire  myinputQ_ver_1_io_enq_ready; // @[HBFP_GEMM.scala 125:40]
  wire  myinputQ_ver_1_io_enq_bits_sign; // @[HBFP_GEMM.scala 125:40]
  wire [5:0] myinputQ_ver_1_io_enq_bits_man; // @[HBFP_GEMM.scala 125:40]
  wire [7:0] myinputQ_ver_1_io_enq_bits_exp; // @[HBFP_GEMM.scala 125:40]
  wire  myinputQ_ver_1_io_deq_ready; // @[HBFP_GEMM.scala 125:40]
  wire  myinputQ_ver_1_io_deq_valid; // @[HBFP_GEMM.scala 125:40]
  wire  myinputQ_ver_1_io_deq_bits_sign; // @[HBFP_GEMM.scala 125:40]
  wire [5:0] myinputQ_ver_1_io_deq_bits_man; // @[HBFP_GEMM.scala 125:40]
  wire [7:0] myinputQ_ver_1_io_deq_bits_exp; // @[HBFP_GEMM.scala 125:40]
  wire  myoutputQ_0_clock; // @[HBFP_GEMM.scala 126:37]
  wire  myoutputQ_0_reset; // @[HBFP_GEMM.scala 126:37]
  wire  myoutputQ_0_io_enq_ready; // @[HBFP_GEMM.scala 126:37]
  wire  myoutputQ_0_io_enq_bits_sign; // @[HBFP_GEMM.scala 126:37]
  wire [5:0] myoutputQ_0_io_enq_bits_man; // @[HBFP_GEMM.scala 126:37]
  wire [7:0] myoutputQ_0_io_enq_bits_exp; // @[HBFP_GEMM.scala 126:37]
  wire  myoutputQ_0_io_deq_ready; // @[HBFP_GEMM.scala 126:37]
  wire  myoutputQ_0_io_deq_valid; // @[HBFP_GEMM.scala 126:37]
  wire  myoutputQ_0_io_deq_bits_sign; // @[HBFP_GEMM.scala 126:37]
  wire [5:0] myoutputQ_0_io_deq_bits_man; // @[HBFP_GEMM.scala 126:37]
  wire [7:0] myoutputQ_0_io_deq_bits_exp; // @[HBFP_GEMM.scala 126:37]
  wire  myoutputQ_1_clock; // @[HBFP_GEMM.scala 126:37]
  wire  myoutputQ_1_reset; // @[HBFP_GEMM.scala 126:37]
  wire  myoutputQ_1_io_enq_ready; // @[HBFP_GEMM.scala 126:37]
  wire  myoutputQ_1_io_enq_bits_sign; // @[HBFP_GEMM.scala 126:37]
  wire [5:0] myoutputQ_1_io_enq_bits_man; // @[HBFP_GEMM.scala 126:37]
  wire [7:0] myoutputQ_1_io_enq_bits_exp; // @[HBFP_GEMM.scala 126:37]
  wire  myoutputQ_1_io_deq_ready; // @[HBFP_GEMM.scala 126:37]
  wire  myoutputQ_1_io_deq_valid; // @[HBFP_GEMM.scala 126:37]
  wire  myoutputQ_1_io_deq_bits_sign; // @[HBFP_GEMM.scala 126:37]
  wire [5:0] myoutputQ_1_io_deq_bits_man; // @[HBFP_GEMM.scala 126:37]
  wire [7:0] myoutputQ_1_io_deq_bits_exp; // @[HBFP_GEMM.scala 126:37]
  wire  _pes_0_0_io_in_hor_T = myinputQ_hor_0_io_deq_ready & myinputQ_hor_0_io_deq_valid; // @[Decoupled.scala 51:35]
  wire  _pes_0_0_io_in_ver_T = myinputQ_ver_0_io_deq_ready & myinputQ_ver_0_io_deq_valid; // @[Decoupled.scala 51:35]
  reg  myinputQ_hor_1_io_deq_ready_r; // @[Reg.scala 19:16]
  reg  myinputQ_ver_1_io_deq_ready_r; // @[Reg.scala 19:16]
  wire  _pes_1_0_io_in_hor_T = myinputQ_hor_1_io_deq_ready & myinputQ_hor_1_io_deq_valid; // @[Decoupled.scala 51:35]
  wire  _pes_0_1_io_in_ver_T = myinputQ_ver_1_io_deq_ready & myinputQ_ver_1_io_deq_valid; // @[Decoupled.scala 51:35]
  reg  pes_0_1_io_in_hor_r_sign; // @[Reg.scala 19:16]
  reg [5:0] pes_0_1_io_in_hor_r_man; // @[Reg.scala 19:16]
  reg [7:0] pes_0_1_io_in_hor_r_exp; // @[Reg.scala 19:16]
  reg  pes_1_1_io_in_hor_r_sign; // @[Reg.scala 19:16]
  reg [5:0] pes_1_1_io_in_hor_r_man; // @[Reg.scala 19:16]
  reg [7:0] pes_1_1_io_in_hor_r_exp; // @[Reg.scala 19:16]
  reg  pes_1_0_io_in_ver_r_sign; // @[Reg.scala 19:16]
  reg [5:0] pes_1_0_io_in_ver_r_man; // @[Reg.scala 19:16]
  reg [7:0] pes_1_0_io_in_ver_r_exp; // @[Reg.scala 19:16]
  reg  pes_1_1_io_in_ver_r_sign; // @[Reg.scala 19:16]
  reg [5:0] pes_1_1_io_in_ver_r_man; // @[Reg.scala 19:16]
  reg [7:0] pes_1_1_io_in_ver_r_exp; // @[Reg.scala 19:16]
  PE pes_0_0 ( // @[HBFP_GEMM.scala 122:34]
    .clock(pes_0_0_clock),
    .io_in_hor_sign(pes_0_0_io_in_hor_sign),
    .io_in_hor_man(pes_0_0_io_in_hor_man),
    .io_in_hor_exp(pes_0_0_io_in_hor_exp),
    .io_in_ver_sign(pes_0_0_io_in_ver_sign),
    .io_in_ver_man(pes_0_0_io_in_ver_man),
    .io_in_ver_exp(pes_0_0_io_in_ver_exp),
    .io_out_hor_sign(pes_0_0_io_out_hor_sign),
    .io_out_hor_man(pes_0_0_io_out_hor_man),
    .io_out_hor_exp(pes_0_0_io_out_hor_exp),
    .io_out_ver_sign(pes_0_0_io_out_ver_sign),
    .io_out_ver_man(pes_0_0_io_out_ver_man),
    .io_out_ver_exp(pes_0_0_io_out_ver_exp),
    .io_out_result_sign(pes_0_0_io_out_result_sign),
    .io_out_result_man(pes_0_0_io_out_result_man),
    .io_out_result_exp(pes_0_0_io_out_result_exp)
  );
  PE pes_0_1 ( // @[HBFP_GEMM.scala 122:34]
    .clock(pes_0_1_clock),
    .io_in_hor_sign(pes_0_1_io_in_hor_sign),
    .io_in_hor_man(pes_0_1_io_in_hor_man),
    .io_in_hor_exp(pes_0_1_io_in_hor_exp),
    .io_in_ver_sign(pes_0_1_io_in_ver_sign),
    .io_in_ver_man(pes_0_1_io_in_ver_man),
    .io_in_ver_exp(pes_0_1_io_in_ver_exp),
    .io_out_hor_sign(pes_0_1_io_out_hor_sign),
    .io_out_hor_man(pes_0_1_io_out_hor_man),
    .io_out_hor_exp(pes_0_1_io_out_hor_exp),
    .io_out_ver_sign(pes_0_1_io_out_ver_sign),
    .io_out_ver_man(pes_0_1_io_out_ver_man),
    .io_out_ver_exp(pes_0_1_io_out_ver_exp),
    .io_out_result_sign(pes_0_1_io_out_result_sign),
    .io_out_result_man(pes_0_1_io_out_result_man),
    .io_out_result_exp(pes_0_1_io_out_result_exp)
  );
  PE pes_1_0 ( // @[HBFP_GEMM.scala 122:34]
    .clock(pes_1_0_clock),
    .io_in_hor_sign(pes_1_0_io_in_hor_sign),
    .io_in_hor_man(pes_1_0_io_in_hor_man),
    .io_in_hor_exp(pes_1_0_io_in_hor_exp),
    .io_in_ver_sign(pes_1_0_io_in_ver_sign),
    .io_in_ver_man(pes_1_0_io_in_ver_man),
    .io_in_ver_exp(pes_1_0_io_in_ver_exp),
    .io_out_hor_sign(pes_1_0_io_out_hor_sign),
    .io_out_hor_man(pes_1_0_io_out_hor_man),
    .io_out_hor_exp(pes_1_0_io_out_hor_exp),
    .io_out_ver_sign(pes_1_0_io_out_ver_sign),
    .io_out_ver_man(pes_1_0_io_out_ver_man),
    .io_out_ver_exp(pes_1_0_io_out_ver_exp),
    .io_out_result_sign(pes_1_0_io_out_result_sign),
    .io_out_result_man(pes_1_0_io_out_result_man),
    .io_out_result_exp(pes_1_0_io_out_result_exp)
  );
  PE_3 pes_1_1 ( // @[HBFP_GEMM.scala 122:34]
    .clock(pes_1_1_clock),
    .io_in_hor_sign(pes_1_1_io_in_hor_sign),
    .io_in_hor_man(pes_1_1_io_in_hor_man),
    .io_in_hor_exp(pes_1_1_io_in_hor_exp),
    .io_in_ver_sign(pes_1_1_io_in_ver_sign),
    .io_in_ver_man(pes_1_1_io_in_ver_man),
    .io_in_ver_exp(pes_1_1_io_in_ver_exp),
    .io_out_result_sign(pes_1_1_io_out_result_sign),
    .io_out_result_man(pes_1_1_io_out_result_man),
    .io_out_result_exp(pes_1_1_io_out_result_exp)
  );
  Queue myinputQ_hor_0 ( // @[HBFP_GEMM.scala 124:40]
    .clock(myinputQ_hor_0_clock),
    .reset(myinputQ_hor_0_reset),
    .io_enq_ready(myinputQ_hor_0_io_enq_ready),
    .io_enq_bits_sign(myinputQ_hor_0_io_enq_bits_sign),
    .io_enq_bits_man(myinputQ_hor_0_io_enq_bits_man),
    .io_enq_bits_exp(myinputQ_hor_0_io_enq_bits_exp),
    .io_deq_ready(myinputQ_hor_0_io_deq_ready),
    .io_deq_valid(myinputQ_hor_0_io_deq_valid),
    .io_deq_bits_sign(myinputQ_hor_0_io_deq_bits_sign),
    .io_deq_bits_man(myinputQ_hor_0_io_deq_bits_man),
    .io_deq_bits_exp(myinputQ_hor_0_io_deq_bits_exp)
  );
  Queue myinputQ_hor_1 ( // @[HBFP_GEMM.scala 124:40]
    .clock(myinputQ_hor_1_clock),
    .reset(myinputQ_hor_1_reset),
    .io_enq_ready(myinputQ_hor_1_io_enq_ready),
    .io_enq_bits_sign(myinputQ_hor_1_io_enq_bits_sign),
    .io_enq_bits_man(myinputQ_hor_1_io_enq_bits_man),
    .io_enq_bits_exp(myinputQ_hor_1_io_enq_bits_exp),
    .io_deq_ready(myinputQ_hor_1_io_deq_ready),
    .io_deq_valid(myinputQ_hor_1_io_deq_valid),
    .io_deq_bits_sign(myinputQ_hor_1_io_deq_bits_sign),
    .io_deq_bits_man(myinputQ_hor_1_io_deq_bits_man),
    .io_deq_bits_exp(myinputQ_hor_1_io_deq_bits_exp)
  );
  Queue myinputQ_ver_0 ( // @[HBFP_GEMM.scala 125:40]
    .clock(myinputQ_ver_0_clock),
    .reset(myinputQ_ver_0_reset),
    .io_enq_ready(myinputQ_ver_0_io_enq_ready),
    .io_enq_bits_sign(myinputQ_ver_0_io_enq_bits_sign),
    .io_enq_bits_man(myinputQ_ver_0_io_enq_bits_man),
    .io_enq_bits_exp(myinputQ_ver_0_io_enq_bits_exp),
    .io_deq_ready(myinputQ_ver_0_io_deq_ready),
    .io_deq_valid(myinputQ_ver_0_io_deq_valid),
    .io_deq_bits_sign(myinputQ_ver_0_io_deq_bits_sign),
    .io_deq_bits_man(myinputQ_ver_0_io_deq_bits_man),
    .io_deq_bits_exp(myinputQ_ver_0_io_deq_bits_exp)
  );
  Queue myinputQ_ver_1 ( // @[HBFP_GEMM.scala 125:40]
    .clock(myinputQ_ver_1_clock),
    .reset(myinputQ_ver_1_reset),
    .io_enq_ready(myinputQ_ver_1_io_enq_ready),
    .io_enq_bits_sign(myinputQ_ver_1_io_enq_bits_sign),
    .io_enq_bits_man(myinputQ_ver_1_io_enq_bits_man),
    .io_enq_bits_exp(myinputQ_ver_1_io_enq_bits_exp),
    .io_deq_ready(myinputQ_ver_1_io_deq_ready),
    .io_deq_valid(myinputQ_ver_1_io_deq_valid),
    .io_deq_bits_sign(myinputQ_ver_1_io_deq_bits_sign),
    .io_deq_bits_man(myinputQ_ver_1_io_deq_bits_man),
    .io_deq_bits_exp(myinputQ_ver_1_io_deq_bits_exp)
  );
  Queue_4 myoutputQ_0 ( // @[HBFP_GEMM.scala 126:37]
    .clock(myoutputQ_0_clock),
    .reset(myoutputQ_0_reset),
    .io_enq_ready(myoutputQ_0_io_enq_ready),
    .io_enq_bits_sign(myoutputQ_0_io_enq_bits_sign),
    .io_enq_bits_man(myoutputQ_0_io_enq_bits_man),
    .io_enq_bits_exp(myoutputQ_0_io_enq_bits_exp),
    .io_deq_ready(myoutputQ_0_io_deq_ready),
    .io_deq_valid(myoutputQ_0_io_deq_valid),
    .io_deq_bits_sign(myoutputQ_0_io_deq_bits_sign),
    .io_deq_bits_man(myoutputQ_0_io_deq_bits_man),
    .io_deq_bits_exp(myoutputQ_0_io_deq_bits_exp)
  );
  Queue_4 myoutputQ_1 ( // @[HBFP_GEMM.scala 126:37]
    .clock(myoutputQ_1_clock),
    .reset(myoutputQ_1_reset),
    .io_enq_ready(myoutputQ_1_io_enq_ready),
    .io_enq_bits_sign(myoutputQ_1_io_enq_bits_sign),
    .io_enq_bits_man(myoutputQ_1_io_enq_bits_man),
    .io_enq_bits_exp(myoutputQ_1_io_enq_bits_exp),
    .io_deq_ready(myoutputQ_1_io_deq_ready),
    .io_deq_valid(myoutputQ_1_io_deq_valid),
    .io_deq_bits_sign(myoutputQ_1_io_deq_bits_sign),
    .io_deq_bits_man(myoutputQ_1_io_deq_bits_man),
    .io_deq_bits_exp(myoutputQ_1_io_deq_bits_exp)
  );
  assign io_out_result_0_ready = 1'h1; // @[HBFP_GEMM.scala 169:28]
  assign io_out_result_0_valid = myoutputQ_0_io_deq_valid; // @[HBFP_GEMM.scala 168:28]
  assign io_out_result_0_bits_sign = myoutputQ_0_io_deq_bits_sign; // @[HBFP_GEMM.scala 170:27]
  assign io_out_result_0_bits_man = myoutputQ_0_io_deq_bits_man; // @[HBFP_GEMM.scala 170:27]
  assign io_out_result_0_bits_exp = myoutputQ_0_io_deq_bits_exp; // @[HBFP_GEMM.scala 170:27]
  assign io_out_result_1_ready = 1'h1; // @[HBFP_GEMM.scala 169:28]
  assign io_out_result_1_valid = myoutputQ_1_io_deq_valid; // @[HBFP_GEMM.scala 168:28]
  assign io_out_result_1_bits_sign = myoutputQ_1_io_deq_bits_sign; // @[HBFP_GEMM.scala 170:27]
  assign io_out_result_1_bits_man = myoutputQ_1_io_deq_bits_man; // @[HBFP_GEMM.scala 170:27]
  assign io_out_result_1_bits_exp = myoutputQ_1_io_deq_bits_exp; // @[HBFP_GEMM.scala 170:27]
  assign pes_0_0_clock = clock;
  assign pes_0_0_io_in_hor_sign = _pes_0_0_io_in_hor_T & myinputQ_hor_0_io_deq_bits_sign; // @[HBFP_GEMM.scala 140:31]
  assign pes_0_0_io_in_hor_man = _pes_0_0_io_in_hor_T ? myinputQ_hor_0_io_deq_bits_man : 6'h0; // @[HBFP_GEMM.scala 140:31]
  assign pes_0_0_io_in_hor_exp = _pes_0_0_io_in_hor_T ? myinputQ_hor_0_io_deq_bits_exp : 8'h0; // @[HBFP_GEMM.scala 140:31]
  assign pes_0_0_io_in_ver_sign = _pes_0_0_io_in_ver_T & myinputQ_ver_0_io_deq_bits_sign; // @[HBFP_GEMM.scala 141:31]
  assign pes_0_0_io_in_ver_man = _pes_0_0_io_in_ver_T ? myinputQ_ver_0_io_deq_bits_man : 6'h0; // @[HBFP_GEMM.scala 141:31]
  assign pes_0_0_io_in_ver_exp = _pes_0_0_io_in_ver_T ? myinputQ_ver_0_io_deq_bits_exp : 8'h0; // @[HBFP_GEMM.scala 141:31]
  assign pes_0_1_clock = clock;
  assign pes_0_1_io_in_hor_sign = pes_0_1_io_in_hor_r_sign; // @[HBFP_GEMM.scala 148:27]
  assign pes_0_1_io_in_hor_man = pes_0_1_io_in_hor_r_man; // @[HBFP_GEMM.scala 148:27]
  assign pes_0_1_io_in_hor_exp = pes_0_1_io_in_hor_r_exp; // @[HBFP_GEMM.scala 148:27]
  assign pes_0_1_io_in_ver_sign = _pes_0_1_io_in_ver_T & myinputQ_ver_1_io_deq_bits_sign; // @[HBFP_GEMM.scala 141:31]
  assign pes_0_1_io_in_ver_man = _pes_0_1_io_in_ver_T ? myinputQ_ver_1_io_deq_bits_man : 6'h0; // @[HBFP_GEMM.scala 141:31]
  assign pes_0_1_io_in_ver_exp = _pes_0_1_io_in_ver_T ? myinputQ_ver_1_io_deq_bits_exp : 8'h0; // @[HBFP_GEMM.scala 141:31]
  assign pes_1_0_clock = clock;
  assign pes_1_0_io_in_hor_sign = _pes_1_0_io_in_hor_T & myinputQ_hor_1_io_deq_bits_sign; // @[HBFP_GEMM.scala 140:31]
  assign pes_1_0_io_in_hor_man = _pes_1_0_io_in_hor_T ? myinputQ_hor_1_io_deq_bits_man : 6'h0; // @[HBFP_GEMM.scala 140:31]
  assign pes_1_0_io_in_hor_exp = _pes_1_0_io_in_hor_T ? myinputQ_hor_1_io_deq_bits_exp : 8'h0; // @[HBFP_GEMM.scala 140:31]
  assign pes_1_0_io_in_ver_sign = pes_1_0_io_in_ver_r_sign; // @[HBFP_GEMM.scala 155:27]
  assign pes_1_0_io_in_ver_man = pes_1_0_io_in_ver_r_man; // @[HBFP_GEMM.scala 155:27]
  assign pes_1_0_io_in_ver_exp = pes_1_0_io_in_ver_r_exp; // @[HBFP_GEMM.scala 155:27]
  assign pes_1_1_clock = clock;
  assign pes_1_1_io_in_hor_sign = pes_1_1_io_in_hor_r_sign; // @[HBFP_GEMM.scala 148:27]
  assign pes_1_1_io_in_hor_man = pes_1_1_io_in_hor_r_man; // @[HBFP_GEMM.scala 148:27]
  assign pes_1_1_io_in_hor_exp = pes_1_1_io_in_hor_r_exp; // @[HBFP_GEMM.scala 148:27]
  assign pes_1_1_io_in_ver_sign = pes_1_1_io_in_ver_r_sign; // @[HBFP_GEMM.scala 155:27]
  assign pes_1_1_io_in_ver_man = pes_1_1_io_in_ver_r_man; // @[HBFP_GEMM.scala 155:27]
  assign pes_1_1_io_in_ver_exp = pes_1_1_io_in_ver_r_exp; // @[HBFP_GEMM.scala 155:27]
  assign myinputQ_hor_0_clock = clock;
  assign myinputQ_hor_0_reset = reset;
  assign myinputQ_hor_0_io_enq_bits_sign = io_in_hor_0_bits_sign; // @[HBFP_GEMM.scala 130:33]
  assign myinputQ_hor_0_io_enq_bits_man = io_in_hor_0_bits_man; // @[HBFP_GEMM.scala 130:33]
  assign myinputQ_hor_0_io_enq_bits_exp = io_in_hor_0_bits_exp; // @[HBFP_GEMM.scala 130:33]
  assign myinputQ_hor_0_io_deq_ready = myinputQ_hor_0_io_deq_valid; // @[HBFP_GEMM.scala 138:34]
  assign myinputQ_hor_1_clock = clock;
  assign myinputQ_hor_1_reset = reset;
  assign myinputQ_hor_1_io_enq_bits_sign = io_in_hor_1_bits_sign; // @[HBFP_GEMM.scala 130:33]
  assign myinputQ_hor_1_io_enq_bits_man = io_in_hor_1_bits_man; // @[HBFP_GEMM.scala 130:33]
  assign myinputQ_hor_1_io_enq_bits_exp = io_in_hor_1_bits_exp; // @[HBFP_GEMM.scala 130:33]
  assign myinputQ_hor_1_io_deq_ready = myinputQ_hor_1_io_deq_ready_r; // @[HBFP_GEMM.scala 138:34]
  assign myinputQ_ver_0_clock = clock;
  assign myinputQ_ver_0_reset = reset;
  assign myinputQ_ver_0_io_enq_bits_sign = io_in_ver_0_bits_sign; // @[HBFP_GEMM.scala 133:33]
  assign myinputQ_ver_0_io_enq_bits_man = io_in_ver_0_bits_man; // @[HBFP_GEMM.scala 133:33]
  assign myinputQ_ver_0_io_enq_bits_exp = io_in_ver_0_bits_exp; // @[HBFP_GEMM.scala 133:33]
  assign myinputQ_ver_0_io_deq_ready = myinputQ_ver_0_io_deq_valid; // @[HBFP_GEMM.scala 139:34]
  assign myinputQ_ver_1_clock = clock;
  assign myinputQ_ver_1_reset = reset;
  assign myinputQ_ver_1_io_enq_bits_sign = io_in_ver_1_bits_sign; // @[HBFP_GEMM.scala 133:33]
  assign myinputQ_ver_1_io_enq_bits_man = io_in_ver_1_bits_man; // @[HBFP_GEMM.scala 133:33]
  assign myinputQ_ver_1_io_enq_bits_exp = io_in_ver_1_bits_exp; // @[HBFP_GEMM.scala 133:33]
  assign myinputQ_ver_1_io_deq_ready = myinputQ_ver_1_io_deq_ready_r; // @[HBFP_GEMM.scala 139:34]
  assign myoutputQ_0_clock = clock;
  assign myoutputQ_0_reset = reset;
  assign myoutputQ_0_io_enq_bits_sign = pes_0_1_io_out_result_sign; // @[HBFP_GEMM.scala 163:32]
  assign myoutputQ_0_io_enq_bits_man = pes_0_1_io_out_result_man; // @[HBFP_GEMM.scala 163:32]
  assign myoutputQ_0_io_enq_bits_exp = pes_0_1_io_out_result_exp; // @[HBFP_GEMM.scala 163:32]
  assign myoutputQ_0_io_deq_ready = io_out_result_0_ready; // @[HBFP_GEMM.scala 171:31]
  assign myoutputQ_1_clock = clock;
  assign myoutputQ_1_reset = reset;
  assign myoutputQ_1_io_enq_bits_sign = pes_1_1_io_out_result_sign; // @[HBFP_GEMM.scala 163:32]
  assign myoutputQ_1_io_enq_bits_man = pes_1_1_io_out_result_man; // @[HBFP_GEMM.scala 163:32]
  assign myoutputQ_1_io_enq_bits_exp = pes_1_1_io_out_result_exp; // @[HBFP_GEMM.scala 163:32]
  assign myoutputQ_1_io_deq_ready = io_out_result_1_ready; // @[HBFP_GEMM.scala 171:31]
  always @(posedge clock) begin
    myinputQ_hor_1_io_deq_ready_r <= myinputQ_hor_1_io_deq_valid; // @[Reg.scala 19:16 20:{18,22}]
    myinputQ_ver_1_io_deq_ready_r <= myinputQ_ver_1_io_deq_valid; // @[Reg.scala 19:16 20:{18,22}]
    pes_0_1_io_in_hor_r_sign <= pes_0_0_io_out_hor_sign; // @[Reg.scala 19:16 20:{18,22}]
    pes_0_1_io_in_hor_r_man <= pes_0_0_io_out_hor_man; // @[Reg.scala 19:16 20:{18,22}]
    pes_0_1_io_in_hor_r_exp <= pes_0_0_io_out_hor_exp; // @[Reg.scala 19:16 20:{18,22}]
    pes_1_1_io_in_hor_r_sign <= pes_1_0_io_out_hor_sign; // @[Reg.scala 19:16 20:{18,22}]
    pes_1_1_io_in_hor_r_man <= pes_1_0_io_out_hor_man; // @[Reg.scala 19:16 20:{18,22}]
    pes_1_1_io_in_hor_r_exp <= pes_1_0_io_out_hor_exp; // @[Reg.scala 19:16 20:{18,22}]
    pes_1_0_io_in_ver_r_sign <= pes_0_0_io_out_ver_sign; // @[Reg.scala 19:16 20:{18,22}]
    pes_1_0_io_in_ver_r_man <= pes_0_0_io_out_ver_man; // @[Reg.scala 19:16 20:{18,22}]
    pes_1_0_io_in_ver_r_exp <= pes_0_0_io_out_ver_exp; // @[Reg.scala 19:16 20:{18,22}]
    pes_1_1_io_in_ver_r_sign <= pes_0_1_io_out_ver_sign; // @[Reg.scala 19:16 20:{18,22}]
    pes_1_1_io_in_ver_r_man <= pes_0_1_io_out_ver_man; // @[Reg.scala 19:16 20:{18,22}]
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
  pes_0_1_io_in_hor_r_sign = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  pes_0_1_io_in_hor_r_man = _RAND_3[5:0];
  _RAND_4 = {1{`RANDOM}};
  pes_0_1_io_in_hor_r_exp = _RAND_4[7:0];
  _RAND_5 = {1{`RANDOM}};
  pes_1_1_io_in_hor_r_sign = _RAND_5[0:0];
  _RAND_6 = {1{`RANDOM}};
  pes_1_1_io_in_hor_r_man = _RAND_6[5:0];
  _RAND_7 = {1{`RANDOM}};
  pes_1_1_io_in_hor_r_exp = _RAND_7[7:0];
  _RAND_8 = {1{`RANDOM}};
  pes_1_0_io_in_ver_r_sign = _RAND_8[0:0];
  _RAND_9 = {1{`RANDOM}};
  pes_1_0_io_in_ver_r_man = _RAND_9[5:0];
  _RAND_10 = {1{`RANDOM}};
  pes_1_0_io_in_ver_r_exp = _RAND_10[7:0];
  _RAND_11 = {1{`RANDOM}};
  pes_1_1_io_in_ver_r_sign = _RAND_11[0:0];
  _RAND_12 = {1{`RANDOM}};
  pes_1_1_io_in_ver_r_man = _RAND_12[5:0];
  _RAND_13 = {1{`RANDOM}};
  pes_1_1_io_in_ver_r_exp = _RAND_13[7:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
