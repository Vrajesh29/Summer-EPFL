module FPMult(
  input        io_in_a_sign,
  input  [4:0] io_in_a_man,
  input  [7:0] io_in_a_exp,
  input        io_in_b_sign,
  input  [4:0] io_in_b_man,
  input  [7:0] io_in_b_exp,
  output       io_out_result_sign,
  output [4:0] io_out_result_man,
  output [7:0] io_out_result_exp
);
  wire [9:0] _io_out_result_man_T = io_in_a_man * io_in_b_man; // @[FP_GEMM.scala 31:36]
  assign io_out_result_sign = io_in_a_sign ^ io_in_b_sign; // @[FP_GEMM.scala 29:38]
  assign io_out_result_man = _io_out_result_man_T[4:0]; // @[FP_GEMM.scala 31:21]
  assign io_out_result_exp = io_in_a_exp + io_in_b_exp; // @[FP_GEMM.scala 30:36]
endmodule
module FPAdder(
  input        io_in_a_sign,
  input  [4:0] io_in_a_man,
  input  [7:0] io_in_a_exp,
  input        io_in_b_sign,
  input  [4:0] io_in_b_man,
  input  [7:0] io_in_b_exp,
  output       io_out_result_sign,
  output [4:0] io_out_result_man,
  output [7:0] io_out_result_exp
);
  wire  _exp_diff_T = io_in_a_exp > io_in_b_exp; // @[FP_GEMM.scala 45:34]
  wire [7:0] _exp_diff_T_2 = io_in_a_exp - io_in_b_exp; // @[FP_GEMM.scala 45:61]
  wire [7:0] _exp_diff_T_4 = io_in_b_exp - io_in_a_exp; // @[FP_GEMM.scala 45:88]
  wire [7:0] exp_diff = io_in_a_exp > io_in_b_exp ? _exp_diff_T_2 : _exp_diff_T_4; // @[FP_GEMM.scala 45:21]
  wire [4:0] _io_out_result_man_T_1 = io_in_b_man >> exp_diff; // @[FP_GEMM.scala 49:82]
  wire [4:0] _io_out_result_man_T_3 = io_in_a_man + _io_out_result_man_T_1; // @[FP_GEMM.scala 49:67]
  wire [4:0] _io_out_result_man_T_4 = io_in_a_man >> exp_diff; // @[FP_GEMM.scala 49:109]
  wire [4:0] _io_out_result_man_T_6 = _io_out_result_man_T_4 + io_in_b_man; // @[FP_GEMM.scala 49:122]
  assign io_out_result_sign = _exp_diff_T ? io_in_a_sign : io_in_b_sign; // @[FP_GEMM.scala 47:28]
  assign io_out_result_man = _exp_diff_T ? _io_out_result_man_T_3 : _io_out_result_man_T_6; // @[FP_GEMM.scala 49:27]
  assign io_out_result_exp = _exp_diff_T ? io_in_a_exp : io_in_b_exp; // @[FP_GEMM.scala 48:27]
endmodule
module PE(
  input        clock,
  input        io_in_hor_sign,
  input  [4:0] io_in_hor_man,
  input  [7:0] io_in_hor_exp,
  input        io_in_ver_sign,
  input  [4:0] io_in_ver_man,
  input  [7:0] io_in_ver_exp,
  output       io_out_hor_sign,
  output [4:0] io_out_hor_man,
  output [7:0] io_out_hor_exp,
  output       io_out_ver_sign,
  output [4:0] io_out_ver_man,
  output [7:0] io_out_ver_exp,
  output       io_out_result_sign,
  output [4:0] io_out_result_man,
  output [7:0] io_out_result_exp
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
`endif // RANDOMIZE_REG_INIT
  wire  fpmult_io_in_a_sign; // @[FP_GEMM.scala 71:24]
  wire [4:0] fpmult_io_in_a_man; // @[FP_GEMM.scala 71:24]
  wire [7:0] fpmult_io_in_a_exp; // @[FP_GEMM.scala 71:24]
  wire  fpmult_io_in_b_sign; // @[FP_GEMM.scala 71:24]
  wire [4:0] fpmult_io_in_b_man; // @[FP_GEMM.scala 71:24]
  wire [7:0] fpmult_io_in_b_exp; // @[FP_GEMM.scala 71:24]
  wire  fpmult_io_out_result_sign; // @[FP_GEMM.scala 71:24]
  wire [4:0] fpmult_io_out_result_man; // @[FP_GEMM.scala 71:24]
  wire [7:0] fpmult_io_out_result_exp; // @[FP_GEMM.scala 71:24]
  wire  fpadder_io_in_a_sign; // @[FP_GEMM.scala 75:25]
  wire [4:0] fpadder_io_in_a_man; // @[FP_GEMM.scala 75:25]
  wire [7:0] fpadder_io_in_a_exp; // @[FP_GEMM.scala 75:25]
  wire  fpadder_io_in_b_sign; // @[FP_GEMM.scala 75:25]
  wire [4:0] fpadder_io_in_b_man; // @[FP_GEMM.scala 75:25]
  wire [7:0] fpadder_io_in_b_exp; // @[FP_GEMM.scala 75:25]
  wire  fpadder_io_out_result_sign; // @[FP_GEMM.scala 75:25]
  wire [4:0] fpadder_io_out_result_man; // @[FP_GEMM.scala 75:25]
  wire [7:0] fpadder_io_out_result_exp; // @[FP_GEMM.scala 75:25]
  reg  result_buffer_sign; // @[FP_GEMM.scala 68:28]
  reg [4:0] result_buffer_man; // @[FP_GEMM.scala 68:28]
  reg [7:0] result_buffer_exp; // @[FP_GEMM.scala 68:28]
  FPMult fpmult ( // @[FP_GEMM.scala 71:24]
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
  FPAdder fpadder ( // @[FP_GEMM.scala 75:25]
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
  assign io_out_hor_sign = io_in_hor_sign; // @[FP_GEMM.scala 80:16]
  assign io_out_hor_man = io_in_hor_man; // @[FP_GEMM.scala 80:16]
  assign io_out_hor_exp = io_in_hor_exp; // @[FP_GEMM.scala 80:16]
  assign io_out_ver_sign = io_in_ver_sign; // @[FP_GEMM.scala 81:16]
  assign io_out_ver_man = io_in_ver_man; // @[FP_GEMM.scala 81:16]
  assign io_out_ver_exp = io_in_ver_exp; // @[FP_GEMM.scala 81:16]
  assign io_out_result_sign = result_buffer_sign; // @[FP_GEMM.scala 82:19]
  assign io_out_result_man = result_buffer_man; // @[FP_GEMM.scala 82:19]
  assign io_out_result_exp = result_buffer_exp; // @[FP_GEMM.scala 82:19]
  assign fpmult_io_in_a_sign = io_in_hor_sign; // @[FP_GEMM.scala 72:20]
  assign fpmult_io_in_a_man = io_in_hor_man; // @[FP_GEMM.scala 72:20]
  assign fpmult_io_in_a_exp = io_in_hor_exp; // @[FP_GEMM.scala 72:20]
  assign fpmult_io_in_b_sign = io_in_ver_sign; // @[FP_GEMM.scala 73:20]
  assign fpmult_io_in_b_man = io_in_ver_man; // @[FP_GEMM.scala 73:20]
  assign fpmult_io_in_b_exp = io_in_ver_exp; // @[FP_GEMM.scala 73:20]
  assign fpadder_io_in_a_sign = fpmult_io_out_result_sign; // @[FP_GEMM.scala 76:21]
  assign fpadder_io_in_a_man = fpmult_io_out_result_man; // @[FP_GEMM.scala 76:21]
  assign fpadder_io_in_a_exp = fpmult_io_out_result_exp; // @[FP_GEMM.scala 76:21]
  assign fpadder_io_in_b_sign = result_buffer_sign; // @[FP_GEMM.scala 77:21]
  assign fpadder_io_in_b_man = result_buffer_man; // @[FP_GEMM.scala 77:21]
  assign fpadder_io_in_b_exp = result_buffer_exp; // @[FP_GEMM.scala 77:21]
  always @(posedge clock) begin
    result_buffer_sign <= fpadder_io_out_result_sign; // @[FP_GEMM.scala 78:19]
    result_buffer_man <= fpadder_io_out_result_man; // @[FP_GEMM.scala 78:19]
    result_buffer_exp <= fpadder_io_out_result_exp; // @[FP_GEMM.scala 78:19]
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
  result_buffer_man = _RAND_1[4:0];
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
  input        io_enq_bits_0_0_hor_sign,
  input  [4:0] io_enq_bits_0_0_hor_man,
  input  [7:0] io_enq_bits_0_0_hor_exp,
  input        io_enq_bits_0_0_ver_sign,
  input  [4:0] io_enq_bits_0_0_ver_man,
  input  [7:0] io_enq_bits_0_0_ver_exp,
  input        io_enq_bits_0_1_hor_sign,
  input  [4:0] io_enq_bits_0_1_hor_man,
  input  [7:0] io_enq_bits_0_1_hor_exp,
  input        io_enq_bits_0_1_ver_sign,
  input  [4:0] io_enq_bits_0_1_ver_man,
  input  [7:0] io_enq_bits_0_1_ver_exp,
  input        io_enq_bits_1_0_hor_sign,
  input  [4:0] io_enq_bits_1_0_hor_man,
  input  [7:0] io_enq_bits_1_0_hor_exp,
  input        io_enq_bits_1_0_ver_sign,
  input  [4:0] io_enq_bits_1_0_ver_man,
  input  [7:0] io_enq_bits_1_0_ver_exp,
  input        io_enq_bits_1_1_hor_sign,
  input  [4:0] io_enq_bits_1_1_hor_man,
  input  [7:0] io_enq_bits_1_1_hor_exp,
  input        io_enq_bits_1_1_ver_sign,
  input  [4:0] io_enq_bits_1_1_ver_man,
  input  [7:0] io_enq_bits_1_1_ver_exp,
  input        io_deq_ready,
  output       io_deq_valid,
  output       io_deq_bits_0_0_hor_sign,
  output [4:0] io_deq_bits_0_0_hor_man,
  output [7:0] io_deq_bits_0_0_hor_exp,
  output       io_deq_bits_0_0_ver_sign,
  output [4:0] io_deq_bits_0_0_ver_man,
  output [7:0] io_deq_bits_0_0_ver_exp,
  output       io_deq_bits_0_1_hor_sign,
  output [4:0] io_deq_bits_0_1_hor_man,
  output [7:0] io_deq_bits_0_1_hor_exp,
  output       io_deq_bits_0_1_ver_sign,
  output [4:0] io_deq_bits_0_1_ver_man,
  output [7:0] io_deq_bits_0_1_ver_exp,
  output       io_deq_bits_1_0_hor_sign,
  output [4:0] io_deq_bits_1_0_hor_man,
  output [7:0] io_deq_bits_1_0_hor_exp,
  output       io_deq_bits_1_0_ver_sign,
  output [4:0] io_deq_bits_1_0_ver_man,
  output [7:0] io_deq_bits_1_0_ver_exp,
  output       io_deq_bits_1_1_hor_sign,
  output [4:0] io_deq_bits_1_1_hor_man,
  output [7:0] io_deq_bits_1_1_hor_exp,
  output       io_deq_bits_1_1_ver_sign,
  output [4:0] io_deq_bits_1_1_ver_man,
  output [7:0] io_deq_bits_1_1_ver_exp
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
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_24;
  reg [31:0] _RAND_25;
  reg [31:0] _RAND_26;
`endif // RANDOMIZE_REG_INIT
  reg  ram_0_0_hor_sign [0:1]; // @[Decoupled.scala 273:95]
  wire  ram_0_0_hor_sign_io_deq_bits_MPORT_en; // @[Decoupled.scala 273:95]
  wire  ram_0_0_hor_sign_io_deq_bits_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_0_0_hor_sign_io_deq_bits_MPORT_data; // @[Decoupled.scala 273:95]
  wire  ram_0_0_hor_sign_MPORT_data; // @[Decoupled.scala 273:95]
  wire  ram_0_0_hor_sign_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_0_0_hor_sign_MPORT_mask; // @[Decoupled.scala 273:95]
  wire  ram_0_0_hor_sign_MPORT_en; // @[Decoupled.scala 273:95]
  reg [4:0] ram_0_0_hor_man [0:1]; // @[Decoupled.scala 273:95]
  wire  ram_0_0_hor_man_io_deq_bits_MPORT_en; // @[Decoupled.scala 273:95]
  wire  ram_0_0_hor_man_io_deq_bits_MPORT_addr; // @[Decoupled.scala 273:95]
  wire [4:0] ram_0_0_hor_man_io_deq_bits_MPORT_data; // @[Decoupled.scala 273:95]
  wire [4:0] ram_0_0_hor_man_MPORT_data; // @[Decoupled.scala 273:95]
  wire  ram_0_0_hor_man_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_0_0_hor_man_MPORT_mask; // @[Decoupled.scala 273:95]
  wire  ram_0_0_hor_man_MPORT_en; // @[Decoupled.scala 273:95]
  reg [7:0] ram_0_0_hor_exp [0:1]; // @[Decoupled.scala 273:95]
  wire  ram_0_0_hor_exp_io_deq_bits_MPORT_en; // @[Decoupled.scala 273:95]
  wire  ram_0_0_hor_exp_io_deq_bits_MPORT_addr; // @[Decoupled.scala 273:95]
  wire [7:0] ram_0_0_hor_exp_io_deq_bits_MPORT_data; // @[Decoupled.scala 273:95]
  wire [7:0] ram_0_0_hor_exp_MPORT_data; // @[Decoupled.scala 273:95]
  wire  ram_0_0_hor_exp_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_0_0_hor_exp_MPORT_mask; // @[Decoupled.scala 273:95]
  wire  ram_0_0_hor_exp_MPORT_en; // @[Decoupled.scala 273:95]
  reg  ram_0_0_ver_sign [0:1]; // @[Decoupled.scala 273:95]
  wire  ram_0_0_ver_sign_io_deq_bits_MPORT_en; // @[Decoupled.scala 273:95]
  wire  ram_0_0_ver_sign_io_deq_bits_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_0_0_ver_sign_io_deq_bits_MPORT_data; // @[Decoupled.scala 273:95]
  wire  ram_0_0_ver_sign_MPORT_data; // @[Decoupled.scala 273:95]
  wire  ram_0_0_ver_sign_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_0_0_ver_sign_MPORT_mask; // @[Decoupled.scala 273:95]
  wire  ram_0_0_ver_sign_MPORT_en; // @[Decoupled.scala 273:95]
  reg [4:0] ram_0_0_ver_man [0:1]; // @[Decoupled.scala 273:95]
  wire  ram_0_0_ver_man_io_deq_bits_MPORT_en; // @[Decoupled.scala 273:95]
  wire  ram_0_0_ver_man_io_deq_bits_MPORT_addr; // @[Decoupled.scala 273:95]
  wire [4:0] ram_0_0_ver_man_io_deq_bits_MPORT_data; // @[Decoupled.scala 273:95]
  wire [4:0] ram_0_0_ver_man_MPORT_data; // @[Decoupled.scala 273:95]
  wire  ram_0_0_ver_man_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_0_0_ver_man_MPORT_mask; // @[Decoupled.scala 273:95]
  wire  ram_0_0_ver_man_MPORT_en; // @[Decoupled.scala 273:95]
  reg [7:0] ram_0_0_ver_exp [0:1]; // @[Decoupled.scala 273:95]
  wire  ram_0_0_ver_exp_io_deq_bits_MPORT_en; // @[Decoupled.scala 273:95]
  wire  ram_0_0_ver_exp_io_deq_bits_MPORT_addr; // @[Decoupled.scala 273:95]
  wire [7:0] ram_0_0_ver_exp_io_deq_bits_MPORT_data; // @[Decoupled.scala 273:95]
  wire [7:0] ram_0_0_ver_exp_MPORT_data; // @[Decoupled.scala 273:95]
  wire  ram_0_0_ver_exp_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_0_0_ver_exp_MPORT_mask; // @[Decoupled.scala 273:95]
  wire  ram_0_0_ver_exp_MPORT_en; // @[Decoupled.scala 273:95]
  reg  ram_0_1_hor_sign [0:1]; // @[Decoupled.scala 273:95]
  wire  ram_0_1_hor_sign_io_deq_bits_MPORT_en; // @[Decoupled.scala 273:95]
  wire  ram_0_1_hor_sign_io_deq_bits_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_0_1_hor_sign_io_deq_bits_MPORT_data; // @[Decoupled.scala 273:95]
  wire  ram_0_1_hor_sign_MPORT_data; // @[Decoupled.scala 273:95]
  wire  ram_0_1_hor_sign_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_0_1_hor_sign_MPORT_mask; // @[Decoupled.scala 273:95]
  wire  ram_0_1_hor_sign_MPORT_en; // @[Decoupled.scala 273:95]
  reg [4:0] ram_0_1_hor_man [0:1]; // @[Decoupled.scala 273:95]
  wire  ram_0_1_hor_man_io_deq_bits_MPORT_en; // @[Decoupled.scala 273:95]
  wire  ram_0_1_hor_man_io_deq_bits_MPORT_addr; // @[Decoupled.scala 273:95]
  wire [4:0] ram_0_1_hor_man_io_deq_bits_MPORT_data; // @[Decoupled.scala 273:95]
  wire [4:0] ram_0_1_hor_man_MPORT_data; // @[Decoupled.scala 273:95]
  wire  ram_0_1_hor_man_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_0_1_hor_man_MPORT_mask; // @[Decoupled.scala 273:95]
  wire  ram_0_1_hor_man_MPORT_en; // @[Decoupled.scala 273:95]
  reg [7:0] ram_0_1_hor_exp [0:1]; // @[Decoupled.scala 273:95]
  wire  ram_0_1_hor_exp_io_deq_bits_MPORT_en; // @[Decoupled.scala 273:95]
  wire  ram_0_1_hor_exp_io_deq_bits_MPORT_addr; // @[Decoupled.scala 273:95]
  wire [7:0] ram_0_1_hor_exp_io_deq_bits_MPORT_data; // @[Decoupled.scala 273:95]
  wire [7:0] ram_0_1_hor_exp_MPORT_data; // @[Decoupled.scala 273:95]
  wire  ram_0_1_hor_exp_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_0_1_hor_exp_MPORT_mask; // @[Decoupled.scala 273:95]
  wire  ram_0_1_hor_exp_MPORT_en; // @[Decoupled.scala 273:95]
  reg  ram_0_1_ver_sign [0:1]; // @[Decoupled.scala 273:95]
  wire  ram_0_1_ver_sign_io_deq_bits_MPORT_en; // @[Decoupled.scala 273:95]
  wire  ram_0_1_ver_sign_io_deq_bits_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_0_1_ver_sign_io_deq_bits_MPORT_data; // @[Decoupled.scala 273:95]
  wire  ram_0_1_ver_sign_MPORT_data; // @[Decoupled.scala 273:95]
  wire  ram_0_1_ver_sign_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_0_1_ver_sign_MPORT_mask; // @[Decoupled.scala 273:95]
  wire  ram_0_1_ver_sign_MPORT_en; // @[Decoupled.scala 273:95]
  reg [4:0] ram_0_1_ver_man [0:1]; // @[Decoupled.scala 273:95]
  wire  ram_0_1_ver_man_io_deq_bits_MPORT_en; // @[Decoupled.scala 273:95]
  wire  ram_0_1_ver_man_io_deq_bits_MPORT_addr; // @[Decoupled.scala 273:95]
  wire [4:0] ram_0_1_ver_man_io_deq_bits_MPORT_data; // @[Decoupled.scala 273:95]
  wire [4:0] ram_0_1_ver_man_MPORT_data; // @[Decoupled.scala 273:95]
  wire  ram_0_1_ver_man_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_0_1_ver_man_MPORT_mask; // @[Decoupled.scala 273:95]
  wire  ram_0_1_ver_man_MPORT_en; // @[Decoupled.scala 273:95]
  reg [7:0] ram_0_1_ver_exp [0:1]; // @[Decoupled.scala 273:95]
  wire  ram_0_1_ver_exp_io_deq_bits_MPORT_en; // @[Decoupled.scala 273:95]
  wire  ram_0_1_ver_exp_io_deq_bits_MPORT_addr; // @[Decoupled.scala 273:95]
  wire [7:0] ram_0_1_ver_exp_io_deq_bits_MPORT_data; // @[Decoupled.scala 273:95]
  wire [7:0] ram_0_1_ver_exp_MPORT_data; // @[Decoupled.scala 273:95]
  wire  ram_0_1_ver_exp_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_0_1_ver_exp_MPORT_mask; // @[Decoupled.scala 273:95]
  wire  ram_0_1_ver_exp_MPORT_en; // @[Decoupled.scala 273:95]
  reg  ram_1_0_hor_sign [0:1]; // @[Decoupled.scala 273:95]
  wire  ram_1_0_hor_sign_io_deq_bits_MPORT_en; // @[Decoupled.scala 273:95]
  wire  ram_1_0_hor_sign_io_deq_bits_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_1_0_hor_sign_io_deq_bits_MPORT_data; // @[Decoupled.scala 273:95]
  wire  ram_1_0_hor_sign_MPORT_data; // @[Decoupled.scala 273:95]
  wire  ram_1_0_hor_sign_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_1_0_hor_sign_MPORT_mask; // @[Decoupled.scala 273:95]
  wire  ram_1_0_hor_sign_MPORT_en; // @[Decoupled.scala 273:95]
  reg [4:0] ram_1_0_hor_man [0:1]; // @[Decoupled.scala 273:95]
  wire  ram_1_0_hor_man_io_deq_bits_MPORT_en; // @[Decoupled.scala 273:95]
  wire  ram_1_0_hor_man_io_deq_bits_MPORT_addr; // @[Decoupled.scala 273:95]
  wire [4:0] ram_1_0_hor_man_io_deq_bits_MPORT_data; // @[Decoupled.scala 273:95]
  wire [4:0] ram_1_0_hor_man_MPORT_data; // @[Decoupled.scala 273:95]
  wire  ram_1_0_hor_man_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_1_0_hor_man_MPORT_mask; // @[Decoupled.scala 273:95]
  wire  ram_1_0_hor_man_MPORT_en; // @[Decoupled.scala 273:95]
  reg [7:0] ram_1_0_hor_exp [0:1]; // @[Decoupled.scala 273:95]
  wire  ram_1_0_hor_exp_io_deq_bits_MPORT_en; // @[Decoupled.scala 273:95]
  wire  ram_1_0_hor_exp_io_deq_bits_MPORT_addr; // @[Decoupled.scala 273:95]
  wire [7:0] ram_1_0_hor_exp_io_deq_bits_MPORT_data; // @[Decoupled.scala 273:95]
  wire [7:0] ram_1_0_hor_exp_MPORT_data; // @[Decoupled.scala 273:95]
  wire  ram_1_0_hor_exp_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_1_0_hor_exp_MPORT_mask; // @[Decoupled.scala 273:95]
  wire  ram_1_0_hor_exp_MPORT_en; // @[Decoupled.scala 273:95]
  reg  ram_1_0_ver_sign [0:1]; // @[Decoupled.scala 273:95]
  wire  ram_1_0_ver_sign_io_deq_bits_MPORT_en; // @[Decoupled.scala 273:95]
  wire  ram_1_0_ver_sign_io_deq_bits_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_1_0_ver_sign_io_deq_bits_MPORT_data; // @[Decoupled.scala 273:95]
  wire  ram_1_0_ver_sign_MPORT_data; // @[Decoupled.scala 273:95]
  wire  ram_1_0_ver_sign_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_1_0_ver_sign_MPORT_mask; // @[Decoupled.scala 273:95]
  wire  ram_1_0_ver_sign_MPORT_en; // @[Decoupled.scala 273:95]
  reg [4:0] ram_1_0_ver_man [0:1]; // @[Decoupled.scala 273:95]
  wire  ram_1_0_ver_man_io_deq_bits_MPORT_en; // @[Decoupled.scala 273:95]
  wire  ram_1_0_ver_man_io_deq_bits_MPORT_addr; // @[Decoupled.scala 273:95]
  wire [4:0] ram_1_0_ver_man_io_deq_bits_MPORT_data; // @[Decoupled.scala 273:95]
  wire [4:0] ram_1_0_ver_man_MPORT_data; // @[Decoupled.scala 273:95]
  wire  ram_1_0_ver_man_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_1_0_ver_man_MPORT_mask; // @[Decoupled.scala 273:95]
  wire  ram_1_0_ver_man_MPORT_en; // @[Decoupled.scala 273:95]
  reg [7:0] ram_1_0_ver_exp [0:1]; // @[Decoupled.scala 273:95]
  wire  ram_1_0_ver_exp_io_deq_bits_MPORT_en; // @[Decoupled.scala 273:95]
  wire  ram_1_0_ver_exp_io_deq_bits_MPORT_addr; // @[Decoupled.scala 273:95]
  wire [7:0] ram_1_0_ver_exp_io_deq_bits_MPORT_data; // @[Decoupled.scala 273:95]
  wire [7:0] ram_1_0_ver_exp_MPORT_data; // @[Decoupled.scala 273:95]
  wire  ram_1_0_ver_exp_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_1_0_ver_exp_MPORT_mask; // @[Decoupled.scala 273:95]
  wire  ram_1_0_ver_exp_MPORT_en; // @[Decoupled.scala 273:95]
  reg  ram_1_1_hor_sign [0:1]; // @[Decoupled.scala 273:95]
  wire  ram_1_1_hor_sign_io_deq_bits_MPORT_en; // @[Decoupled.scala 273:95]
  wire  ram_1_1_hor_sign_io_deq_bits_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_1_1_hor_sign_io_deq_bits_MPORT_data; // @[Decoupled.scala 273:95]
  wire  ram_1_1_hor_sign_MPORT_data; // @[Decoupled.scala 273:95]
  wire  ram_1_1_hor_sign_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_1_1_hor_sign_MPORT_mask; // @[Decoupled.scala 273:95]
  wire  ram_1_1_hor_sign_MPORT_en; // @[Decoupled.scala 273:95]
  reg [4:0] ram_1_1_hor_man [0:1]; // @[Decoupled.scala 273:95]
  wire  ram_1_1_hor_man_io_deq_bits_MPORT_en; // @[Decoupled.scala 273:95]
  wire  ram_1_1_hor_man_io_deq_bits_MPORT_addr; // @[Decoupled.scala 273:95]
  wire [4:0] ram_1_1_hor_man_io_deq_bits_MPORT_data; // @[Decoupled.scala 273:95]
  wire [4:0] ram_1_1_hor_man_MPORT_data; // @[Decoupled.scala 273:95]
  wire  ram_1_1_hor_man_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_1_1_hor_man_MPORT_mask; // @[Decoupled.scala 273:95]
  wire  ram_1_1_hor_man_MPORT_en; // @[Decoupled.scala 273:95]
  reg [7:0] ram_1_1_hor_exp [0:1]; // @[Decoupled.scala 273:95]
  wire  ram_1_1_hor_exp_io_deq_bits_MPORT_en; // @[Decoupled.scala 273:95]
  wire  ram_1_1_hor_exp_io_deq_bits_MPORT_addr; // @[Decoupled.scala 273:95]
  wire [7:0] ram_1_1_hor_exp_io_deq_bits_MPORT_data; // @[Decoupled.scala 273:95]
  wire [7:0] ram_1_1_hor_exp_MPORT_data; // @[Decoupled.scala 273:95]
  wire  ram_1_1_hor_exp_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_1_1_hor_exp_MPORT_mask; // @[Decoupled.scala 273:95]
  wire  ram_1_1_hor_exp_MPORT_en; // @[Decoupled.scala 273:95]
  reg  ram_1_1_ver_sign [0:1]; // @[Decoupled.scala 273:95]
  wire  ram_1_1_ver_sign_io_deq_bits_MPORT_en; // @[Decoupled.scala 273:95]
  wire  ram_1_1_ver_sign_io_deq_bits_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_1_1_ver_sign_io_deq_bits_MPORT_data; // @[Decoupled.scala 273:95]
  wire  ram_1_1_ver_sign_MPORT_data; // @[Decoupled.scala 273:95]
  wire  ram_1_1_ver_sign_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_1_1_ver_sign_MPORT_mask; // @[Decoupled.scala 273:95]
  wire  ram_1_1_ver_sign_MPORT_en; // @[Decoupled.scala 273:95]
  reg [4:0] ram_1_1_ver_man [0:1]; // @[Decoupled.scala 273:95]
  wire  ram_1_1_ver_man_io_deq_bits_MPORT_en; // @[Decoupled.scala 273:95]
  wire  ram_1_1_ver_man_io_deq_bits_MPORT_addr; // @[Decoupled.scala 273:95]
  wire [4:0] ram_1_1_ver_man_io_deq_bits_MPORT_data; // @[Decoupled.scala 273:95]
  wire [4:0] ram_1_1_ver_man_MPORT_data; // @[Decoupled.scala 273:95]
  wire  ram_1_1_ver_man_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_1_1_ver_man_MPORT_mask; // @[Decoupled.scala 273:95]
  wire  ram_1_1_ver_man_MPORT_en; // @[Decoupled.scala 273:95]
  reg [7:0] ram_1_1_ver_exp [0:1]; // @[Decoupled.scala 273:95]
  wire  ram_1_1_ver_exp_io_deq_bits_MPORT_en; // @[Decoupled.scala 273:95]
  wire  ram_1_1_ver_exp_io_deq_bits_MPORT_addr; // @[Decoupled.scala 273:95]
  wire [7:0] ram_1_1_ver_exp_io_deq_bits_MPORT_data; // @[Decoupled.scala 273:95]
  wire [7:0] ram_1_1_ver_exp_MPORT_data; // @[Decoupled.scala 273:95]
  wire  ram_1_1_ver_exp_MPORT_addr; // @[Decoupled.scala 273:95]
  wire  ram_1_1_ver_exp_MPORT_mask; // @[Decoupled.scala 273:95]
  wire  ram_1_1_ver_exp_MPORT_en; // @[Decoupled.scala 273:95]
  reg  enq_ptr_value; // @[Counter.scala 61:40]
  reg  deq_ptr_value; // @[Counter.scala 61:40]
  reg  maybe_full; // @[Decoupled.scala 276:27]
  wire  ptr_match = enq_ptr_value == deq_ptr_value; // @[Decoupled.scala 277:33]
  wire  empty = ptr_match & ~maybe_full; // @[Decoupled.scala 278:25]
  wire  full = ptr_match & maybe_full; // @[Decoupled.scala 279:24]
  wire  do_enq = io_enq_ready & io_enq_valid; // @[Decoupled.scala 51:35]
  assign ram_0_0_hor_sign_io_deq_bits_MPORT_en = 1'h1;
  assign ram_0_0_hor_sign_io_deq_bits_MPORT_addr = deq_ptr_value;
  assign ram_0_0_hor_sign_io_deq_bits_MPORT_data = ram_0_0_hor_sign[ram_0_0_hor_sign_io_deq_bits_MPORT_addr]; // @[Decoupled.scala 273:95]
  assign ram_0_0_hor_sign_MPORT_data = io_enq_bits_0_0_hor_sign;
  assign ram_0_0_hor_sign_MPORT_addr = enq_ptr_value;
  assign ram_0_0_hor_sign_MPORT_mask = 1'h1;
  assign ram_0_0_hor_sign_MPORT_en = io_enq_ready & io_enq_valid;
  assign ram_0_0_hor_man_io_deq_bits_MPORT_en = 1'h1;
  assign ram_0_0_hor_man_io_deq_bits_MPORT_addr = deq_ptr_value;
  assign ram_0_0_hor_man_io_deq_bits_MPORT_data = ram_0_0_hor_man[ram_0_0_hor_man_io_deq_bits_MPORT_addr]; // @[Decoupled.scala 273:95]
  assign ram_0_0_hor_man_MPORT_data = io_enq_bits_0_0_hor_man;
  assign ram_0_0_hor_man_MPORT_addr = enq_ptr_value;
  assign ram_0_0_hor_man_MPORT_mask = 1'h1;
  assign ram_0_0_hor_man_MPORT_en = io_enq_ready & io_enq_valid;
  assign ram_0_0_hor_exp_io_deq_bits_MPORT_en = 1'h1;
  assign ram_0_0_hor_exp_io_deq_bits_MPORT_addr = deq_ptr_value;
  assign ram_0_0_hor_exp_io_deq_bits_MPORT_data = ram_0_0_hor_exp[ram_0_0_hor_exp_io_deq_bits_MPORT_addr]; // @[Decoupled.scala 273:95]
  assign ram_0_0_hor_exp_MPORT_data = io_enq_bits_0_0_hor_exp;
  assign ram_0_0_hor_exp_MPORT_addr = enq_ptr_value;
  assign ram_0_0_hor_exp_MPORT_mask = 1'h1;
  assign ram_0_0_hor_exp_MPORT_en = io_enq_ready & io_enq_valid;
  assign ram_0_0_ver_sign_io_deq_bits_MPORT_en = 1'h1;
  assign ram_0_0_ver_sign_io_deq_bits_MPORT_addr = deq_ptr_value;
  assign ram_0_0_ver_sign_io_deq_bits_MPORT_data = ram_0_0_ver_sign[ram_0_0_ver_sign_io_deq_bits_MPORT_addr]; // @[Decoupled.scala 273:95]
  assign ram_0_0_ver_sign_MPORT_data = io_enq_bits_0_0_ver_sign;
  assign ram_0_0_ver_sign_MPORT_addr = enq_ptr_value;
  assign ram_0_0_ver_sign_MPORT_mask = 1'h1;
  assign ram_0_0_ver_sign_MPORT_en = io_enq_ready & io_enq_valid;
  assign ram_0_0_ver_man_io_deq_bits_MPORT_en = 1'h1;
  assign ram_0_0_ver_man_io_deq_bits_MPORT_addr = deq_ptr_value;
  assign ram_0_0_ver_man_io_deq_bits_MPORT_data = ram_0_0_ver_man[ram_0_0_ver_man_io_deq_bits_MPORT_addr]; // @[Decoupled.scala 273:95]
  assign ram_0_0_ver_man_MPORT_data = io_enq_bits_0_0_ver_man;
  assign ram_0_0_ver_man_MPORT_addr = enq_ptr_value;
  assign ram_0_0_ver_man_MPORT_mask = 1'h1;
  assign ram_0_0_ver_man_MPORT_en = io_enq_ready & io_enq_valid;
  assign ram_0_0_ver_exp_io_deq_bits_MPORT_en = 1'h1;
  assign ram_0_0_ver_exp_io_deq_bits_MPORT_addr = deq_ptr_value;
  assign ram_0_0_ver_exp_io_deq_bits_MPORT_data = ram_0_0_ver_exp[ram_0_0_ver_exp_io_deq_bits_MPORT_addr]; // @[Decoupled.scala 273:95]
  assign ram_0_0_ver_exp_MPORT_data = io_enq_bits_0_0_ver_exp;
  assign ram_0_0_ver_exp_MPORT_addr = enq_ptr_value;
  assign ram_0_0_ver_exp_MPORT_mask = 1'h1;
  assign ram_0_0_ver_exp_MPORT_en = io_enq_ready & io_enq_valid;
  assign ram_0_1_hor_sign_io_deq_bits_MPORT_en = 1'h1;
  assign ram_0_1_hor_sign_io_deq_bits_MPORT_addr = deq_ptr_value;
  assign ram_0_1_hor_sign_io_deq_bits_MPORT_data = ram_0_1_hor_sign[ram_0_1_hor_sign_io_deq_bits_MPORT_addr]; // @[Decoupled.scala 273:95]
  assign ram_0_1_hor_sign_MPORT_data = io_enq_bits_0_1_hor_sign;
  assign ram_0_1_hor_sign_MPORT_addr = enq_ptr_value;
  assign ram_0_1_hor_sign_MPORT_mask = 1'h1;
  assign ram_0_1_hor_sign_MPORT_en = io_enq_ready & io_enq_valid;
  assign ram_0_1_hor_man_io_deq_bits_MPORT_en = 1'h1;
  assign ram_0_1_hor_man_io_deq_bits_MPORT_addr = deq_ptr_value;
  assign ram_0_1_hor_man_io_deq_bits_MPORT_data = ram_0_1_hor_man[ram_0_1_hor_man_io_deq_bits_MPORT_addr]; // @[Decoupled.scala 273:95]
  assign ram_0_1_hor_man_MPORT_data = io_enq_bits_0_1_hor_man;
  assign ram_0_1_hor_man_MPORT_addr = enq_ptr_value;
  assign ram_0_1_hor_man_MPORT_mask = 1'h1;
  assign ram_0_1_hor_man_MPORT_en = io_enq_ready & io_enq_valid;
  assign ram_0_1_hor_exp_io_deq_bits_MPORT_en = 1'h1;
  assign ram_0_1_hor_exp_io_deq_bits_MPORT_addr = deq_ptr_value;
  assign ram_0_1_hor_exp_io_deq_bits_MPORT_data = ram_0_1_hor_exp[ram_0_1_hor_exp_io_deq_bits_MPORT_addr]; // @[Decoupled.scala 273:95]
  assign ram_0_1_hor_exp_MPORT_data = io_enq_bits_0_1_hor_exp;
  assign ram_0_1_hor_exp_MPORT_addr = enq_ptr_value;
  assign ram_0_1_hor_exp_MPORT_mask = 1'h1;
  assign ram_0_1_hor_exp_MPORT_en = io_enq_ready & io_enq_valid;
  assign ram_0_1_ver_sign_io_deq_bits_MPORT_en = 1'h1;
  assign ram_0_1_ver_sign_io_deq_bits_MPORT_addr = deq_ptr_value;
  assign ram_0_1_ver_sign_io_deq_bits_MPORT_data = ram_0_1_ver_sign[ram_0_1_ver_sign_io_deq_bits_MPORT_addr]; // @[Decoupled.scala 273:95]
  assign ram_0_1_ver_sign_MPORT_data = io_enq_bits_0_1_ver_sign;
  assign ram_0_1_ver_sign_MPORT_addr = enq_ptr_value;
  assign ram_0_1_ver_sign_MPORT_mask = 1'h1;
  assign ram_0_1_ver_sign_MPORT_en = io_enq_ready & io_enq_valid;
  assign ram_0_1_ver_man_io_deq_bits_MPORT_en = 1'h1;
  assign ram_0_1_ver_man_io_deq_bits_MPORT_addr = deq_ptr_value;
  assign ram_0_1_ver_man_io_deq_bits_MPORT_data = ram_0_1_ver_man[ram_0_1_ver_man_io_deq_bits_MPORT_addr]; // @[Decoupled.scala 273:95]
  assign ram_0_1_ver_man_MPORT_data = io_enq_bits_0_1_ver_man;
  assign ram_0_1_ver_man_MPORT_addr = enq_ptr_value;
  assign ram_0_1_ver_man_MPORT_mask = 1'h1;
  assign ram_0_1_ver_man_MPORT_en = io_enq_ready & io_enq_valid;
  assign ram_0_1_ver_exp_io_deq_bits_MPORT_en = 1'h1;
  assign ram_0_1_ver_exp_io_deq_bits_MPORT_addr = deq_ptr_value;
  assign ram_0_1_ver_exp_io_deq_bits_MPORT_data = ram_0_1_ver_exp[ram_0_1_ver_exp_io_deq_bits_MPORT_addr]; // @[Decoupled.scala 273:95]
  assign ram_0_1_ver_exp_MPORT_data = io_enq_bits_0_1_ver_exp;
  assign ram_0_1_ver_exp_MPORT_addr = enq_ptr_value;
  assign ram_0_1_ver_exp_MPORT_mask = 1'h1;
  assign ram_0_1_ver_exp_MPORT_en = io_enq_ready & io_enq_valid;
  assign ram_1_0_hor_sign_io_deq_bits_MPORT_en = 1'h1;
  assign ram_1_0_hor_sign_io_deq_bits_MPORT_addr = deq_ptr_value;
  assign ram_1_0_hor_sign_io_deq_bits_MPORT_data = ram_1_0_hor_sign[ram_1_0_hor_sign_io_deq_bits_MPORT_addr]; // @[Decoupled.scala 273:95]
  assign ram_1_0_hor_sign_MPORT_data = io_enq_bits_1_0_hor_sign;
  assign ram_1_0_hor_sign_MPORT_addr = enq_ptr_value;
  assign ram_1_0_hor_sign_MPORT_mask = 1'h1;
  assign ram_1_0_hor_sign_MPORT_en = io_enq_ready & io_enq_valid;
  assign ram_1_0_hor_man_io_deq_bits_MPORT_en = 1'h1;
  assign ram_1_0_hor_man_io_deq_bits_MPORT_addr = deq_ptr_value;
  assign ram_1_0_hor_man_io_deq_bits_MPORT_data = ram_1_0_hor_man[ram_1_0_hor_man_io_deq_bits_MPORT_addr]; // @[Decoupled.scala 273:95]
  assign ram_1_0_hor_man_MPORT_data = io_enq_bits_1_0_hor_man;
  assign ram_1_0_hor_man_MPORT_addr = enq_ptr_value;
  assign ram_1_0_hor_man_MPORT_mask = 1'h1;
  assign ram_1_0_hor_man_MPORT_en = io_enq_ready & io_enq_valid;
  assign ram_1_0_hor_exp_io_deq_bits_MPORT_en = 1'h1;
  assign ram_1_0_hor_exp_io_deq_bits_MPORT_addr = deq_ptr_value;
  assign ram_1_0_hor_exp_io_deq_bits_MPORT_data = ram_1_0_hor_exp[ram_1_0_hor_exp_io_deq_bits_MPORT_addr]; // @[Decoupled.scala 273:95]
  assign ram_1_0_hor_exp_MPORT_data = io_enq_bits_1_0_hor_exp;
  assign ram_1_0_hor_exp_MPORT_addr = enq_ptr_value;
  assign ram_1_0_hor_exp_MPORT_mask = 1'h1;
  assign ram_1_0_hor_exp_MPORT_en = io_enq_ready & io_enq_valid;
  assign ram_1_0_ver_sign_io_deq_bits_MPORT_en = 1'h1;
  assign ram_1_0_ver_sign_io_deq_bits_MPORT_addr = deq_ptr_value;
  assign ram_1_0_ver_sign_io_deq_bits_MPORT_data = ram_1_0_ver_sign[ram_1_0_ver_sign_io_deq_bits_MPORT_addr]; // @[Decoupled.scala 273:95]
  assign ram_1_0_ver_sign_MPORT_data = io_enq_bits_1_0_ver_sign;
  assign ram_1_0_ver_sign_MPORT_addr = enq_ptr_value;
  assign ram_1_0_ver_sign_MPORT_mask = 1'h1;
  assign ram_1_0_ver_sign_MPORT_en = io_enq_ready & io_enq_valid;
  assign ram_1_0_ver_man_io_deq_bits_MPORT_en = 1'h1;
  assign ram_1_0_ver_man_io_deq_bits_MPORT_addr = deq_ptr_value;
  assign ram_1_0_ver_man_io_deq_bits_MPORT_data = ram_1_0_ver_man[ram_1_0_ver_man_io_deq_bits_MPORT_addr]; // @[Decoupled.scala 273:95]
  assign ram_1_0_ver_man_MPORT_data = io_enq_bits_1_0_ver_man;
  assign ram_1_0_ver_man_MPORT_addr = enq_ptr_value;
  assign ram_1_0_ver_man_MPORT_mask = 1'h1;
  assign ram_1_0_ver_man_MPORT_en = io_enq_ready & io_enq_valid;
  assign ram_1_0_ver_exp_io_deq_bits_MPORT_en = 1'h1;
  assign ram_1_0_ver_exp_io_deq_bits_MPORT_addr = deq_ptr_value;
  assign ram_1_0_ver_exp_io_deq_bits_MPORT_data = ram_1_0_ver_exp[ram_1_0_ver_exp_io_deq_bits_MPORT_addr]; // @[Decoupled.scala 273:95]
  assign ram_1_0_ver_exp_MPORT_data = io_enq_bits_1_0_ver_exp;
  assign ram_1_0_ver_exp_MPORT_addr = enq_ptr_value;
  assign ram_1_0_ver_exp_MPORT_mask = 1'h1;
  assign ram_1_0_ver_exp_MPORT_en = io_enq_ready & io_enq_valid;
  assign ram_1_1_hor_sign_io_deq_bits_MPORT_en = 1'h1;
  assign ram_1_1_hor_sign_io_deq_bits_MPORT_addr = deq_ptr_value;
  assign ram_1_1_hor_sign_io_deq_bits_MPORT_data = ram_1_1_hor_sign[ram_1_1_hor_sign_io_deq_bits_MPORT_addr]; // @[Decoupled.scala 273:95]
  assign ram_1_1_hor_sign_MPORT_data = io_enq_bits_1_1_hor_sign;
  assign ram_1_1_hor_sign_MPORT_addr = enq_ptr_value;
  assign ram_1_1_hor_sign_MPORT_mask = 1'h1;
  assign ram_1_1_hor_sign_MPORT_en = io_enq_ready & io_enq_valid;
  assign ram_1_1_hor_man_io_deq_bits_MPORT_en = 1'h1;
  assign ram_1_1_hor_man_io_deq_bits_MPORT_addr = deq_ptr_value;
  assign ram_1_1_hor_man_io_deq_bits_MPORT_data = ram_1_1_hor_man[ram_1_1_hor_man_io_deq_bits_MPORT_addr]; // @[Decoupled.scala 273:95]
  assign ram_1_1_hor_man_MPORT_data = io_enq_bits_1_1_hor_man;
  assign ram_1_1_hor_man_MPORT_addr = enq_ptr_value;
  assign ram_1_1_hor_man_MPORT_mask = 1'h1;
  assign ram_1_1_hor_man_MPORT_en = io_enq_ready & io_enq_valid;
  assign ram_1_1_hor_exp_io_deq_bits_MPORT_en = 1'h1;
  assign ram_1_1_hor_exp_io_deq_bits_MPORT_addr = deq_ptr_value;
  assign ram_1_1_hor_exp_io_deq_bits_MPORT_data = ram_1_1_hor_exp[ram_1_1_hor_exp_io_deq_bits_MPORT_addr]; // @[Decoupled.scala 273:95]
  assign ram_1_1_hor_exp_MPORT_data = io_enq_bits_1_1_hor_exp;
  assign ram_1_1_hor_exp_MPORT_addr = enq_ptr_value;
  assign ram_1_1_hor_exp_MPORT_mask = 1'h1;
  assign ram_1_1_hor_exp_MPORT_en = io_enq_ready & io_enq_valid;
  assign ram_1_1_ver_sign_io_deq_bits_MPORT_en = 1'h1;
  assign ram_1_1_ver_sign_io_deq_bits_MPORT_addr = deq_ptr_value;
  assign ram_1_1_ver_sign_io_deq_bits_MPORT_data = ram_1_1_ver_sign[ram_1_1_ver_sign_io_deq_bits_MPORT_addr]; // @[Decoupled.scala 273:95]
  assign ram_1_1_ver_sign_MPORT_data = io_enq_bits_1_1_ver_sign;
  assign ram_1_1_ver_sign_MPORT_addr = enq_ptr_value;
  assign ram_1_1_ver_sign_MPORT_mask = 1'h1;
  assign ram_1_1_ver_sign_MPORT_en = io_enq_ready & io_enq_valid;
  assign ram_1_1_ver_man_io_deq_bits_MPORT_en = 1'h1;
  assign ram_1_1_ver_man_io_deq_bits_MPORT_addr = deq_ptr_value;
  assign ram_1_1_ver_man_io_deq_bits_MPORT_data = ram_1_1_ver_man[ram_1_1_ver_man_io_deq_bits_MPORT_addr]; // @[Decoupled.scala 273:95]
  assign ram_1_1_ver_man_MPORT_data = io_enq_bits_1_1_ver_man;
  assign ram_1_1_ver_man_MPORT_addr = enq_ptr_value;
  assign ram_1_1_ver_man_MPORT_mask = 1'h1;
  assign ram_1_1_ver_man_MPORT_en = io_enq_ready & io_enq_valid;
  assign ram_1_1_ver_exp_io_deq_bits_MPORT_en = 1'h1;
  assign ram_1_1_ver_exp_io_deq_bits_MPORT_addr = deq_ptr_value;
  assign ram_1_1_ver_exp_io_deq_bits_MPORT_data = ram_1_1_ver_exp[ram_1_1_ver_exp_io_deq_bits_MPORT_addr]; // @[Decoupled.scala 273:95]
  assign ram_1_1_ver_exp_MPORT_data = io_enq_bits_1_1_ver_exp;
  assign ram_1_1_ver_exp_MPORT_addr = enq_ptr_value;
  assign ram_1_1_ver_exp_MPORT_mask = 1'h1;
  assign ram_1_1_ver_exp_MPORT_en = io_enq_ready & io_enq_valid;
  assign io_enq_ready = ~full; // @[Decoupled.scala 303:19]
  assign io_deq_valid = ~empty; // @[Decoupled.scala 302:19]
  assign io_deq_bits_0_0_hor_sign = ram_0_0_hor_sign_io_deq_bits_MPORT_data; // @[Decoupled.scala 310:17]
  assign io_deq_bits_0_0_hor_man = ram_0_0_hor_man_io_deq_bits_MPORT_data; // @[Decoupled.scala 310:17]
  assign io_deq_bits_0_0_hor_exp = ram_0_0_hor_exp_io_deq_bits_MPORT_data; // @[Decoupled.scala 310:17]
  assign io_deq_bits_0_0_ver_sign = ram_0_0_ver_sign_io_deq_bits_MPORT_data; // @[Decoupled.scala 310:17]
  assign io_deq_bits_0_0_ver_man = ram_0_0_ver_man_io_deq_bits_MPORT_data; // @[Decoupled.scala 310:17]
  assign io_deq_bits_0_0_ver_exp = ram_0_0_ver_exp_io_deq_bits_MPORT_data; // @[Decoupled.scala 310:17]
  assign io_deq_bits_0_1_hor_sign = ram_0_1_hor_sign_io_deq_bits_MPORT_data; // @[Decoupled.scala 310:17]
  assign io_deq_bits_0_1_hor_man = ram_0_1_hor_man_io_deq_bits_MPORT_data; // @[Decoupled.scala 310:17]
  assign io_deq_bits_0_1_hor_exp = ram_0_1_hor_exp_io_deq_bits_MPORT_data; // @[Decoupled.scala 310:17]
  assign io_deq_bits_0_1_ver_sign = ram_0_1_ver_sign_io_deq_bits_MPORT_data; // @[Decoupled.scala 310:17]
  assign io_deq_bits_0_1_ver_man = ram_0_1_ver_man_io_deq_bits_MPORT_data; // @[Decoupled.scala 310:17]
  assign io_deq_bits_0_1_ver_exp = ram_0_1_ver_exp_io_deq_bits_MPORT_data; // @[Decoupled.scala 310:17]
  assign io_deq_bits_1_0_hor_sign = ram_1_0_hor_sign_io_deq_bits_MPORT_data; // @[Decoupled.scala 310:17]
  assign io_deq_bits_1_0_hor_man = ram_1_0_hor_man_io_deq_bits_MPORT_data; // @[Decoupled.scala 310:17]
  assign io_deq_bits_1_0_hor_exp = ram_1_0_hor_exp_io_deq_bits_MPORT_data; // @[Decoupled.scala 310:17]
  assign io_deq_bits_1_0_ver_sign = ram_1_0_ver_sign_io_deq_bits_MPORT_data; // @[Decoupled.scala 310:17]
  assign io_deq_bits_1_0_ver_man = ram_1_0_ver_man_io_deq_bits_MPORT_data; // @[Decoupled.scala 310:17]
  assign io_deq_bits_1_0_ver_exp = ram_1_0_ver_exp_io_deq_bits_MPORT_data; // @[Decoupled.scala 310:17]
  assign io_deq_bits_1_1_hor_sign = ram_1_1_hor_sign_io_deq_bits_MPORT_data; // @[Decoupled.scala 310:17]
  assign io_deq_bits_1_1_hor_man = ram_1_1_hor_man_io_deq_bits_MPORT_data; // @[Decoupled.scala 310:17]
  assign io_deq_bits_1_1_hor_exp = ram_1_1_hor_exp_io_deq_bits_MPORT_data; // @[Decoupled.scala 310:17]
  assign io_deq_bits_1_1_ver_sign = ram_1_1_ver_sign_io_deq_bits_MPORT_data; // @[Decoupled.scala 310:17]
  assign io_deq_bits_1_1_ver_man = ram_1_1_ver_man_io_deq_bits_MPORT_data; // @[Decoupled.scala 310:17]
  assign io_deq_bits_1_1_ver_exp = ram_1_1_ver_exp_io_deq_bits_MPORT_data; // @[Decoupled.scala 310:17]
  always @(posedge clock) begin
    if (ram_0_0_hor_sign_MPORT_en & ram_0_0_hor_sign_MPORT_mask) begin
      ram_0_0_hor_sign[ram_0_0_hor_sign_MPORT_addr] <= ram_0_0_hor_sign_MPORT_data; // @[Decoupled.scala 273:95]
    end
    if (ram_0_0_hor_man_MPORT_en & ram_0_0_hor_man_MPORT_mask) begin
      ram_0_0_hor_man[ram_0_0_hor_man_MPORT_addr] <= ram_0_0_hor_man_MPORT_data; // @[Decoupled.scala 273:95]
    end
    if (ram_0_0_hor_exp_MPORT_en & ram_0_0_hor_exp_MPORT_mask) begin
      ram_0_0_hor_exp[ram_0_0_hor_exp_MPORT_addr] <= ram_0_0_hor_exp_MPORT_data; // @[Decoupled.scala 273:95]
    end
    if (ram_0_0_ver_sign_MPORT_en & ram_0_0_ver_sign_MPORT_mask) begin
      ram_0_0_ver_sign[ram_0_0_ver_sign_MPORT_addr] <= ram_0_0_ver_sign_MPORT_data; // @[Decoupled.scala 273:95]
    end
    if (ram_0_0_ver_man_MPORT_en & ram_0_0_ver_man_MPORT_mask) begin
      ram_0_0_ver_man[ram_0_0_ver_man_MPORT_addr] <= ram_0_0_ver_man_MPORT_data; // @[Decoupled.scala 273:95]
    end
    if (ram_0_0_ver_exp_MPORT_en & ram_0_0_ver_exp_MPORT_mask) begin
      ram_0_0_ver_exp[ram_0_0_ver_exp_MPORT_addr] <= ram_0_0_ver_exp_MPORT_data; // @[Decoupled.scala 273:95]
    end
    if (ram_0_1_hor_sign_MPORT_en & ram_0_1_hor_sign_MPORT_mask) begin
      ram_0_1_hor_sign[ram_0_1_hor_sign_MPORT_addr] <= ram_0_1_hor_sign_MPORT_data; // @[Decoupled.scala 273:95]
    end
    if (ram_0_1_hor_man_MPORT_en & ram_0_1_hor_man_MPORT_mask) begin
      ram_0_1_hor_man[ram_0_1_hor_man_MPORT_addr] <= ram_0_1_hor_man_MPORT_data; // @[Decoupled.scala 273:95]
    end
    if (ram_0_1_hor_exp_MPORT_en & ram_0_1_hor_exp_MPORT_mask) begin
      ram_0_1_hor_exp[ram_0_1_hor_exp_MPORT_addr] <= ram_0_1_hor_exp_MPORT_data; // @[Decoupled.scala 273:95]
    end
    if (ram_0_1_ver_sign_MPORT_en & ram_0_1_ver_sign_MPORT_mask) begin
      ram_0_1_ver_sign[ram_0_1_ver_sign_MPORT_addr] <= ram_0_1_ver_sign_MPORT_data; // @[Decoupled.scala 273:95]
    end
    if (ram_0_1_ver_man_MPORT_en & ram_0_1_ver_man_MPORT_mask) begin
      ram_0_1_ver_man[ram_0_1_ver_man_MPORT_addr] <= ram_0_1_ver_man_MPORT_data; // @[Decoupled.scala 273:95]
    end
    if (ram_0_1_ver_exp_MPORT_en & ram_0_1_ver_exp_MPORT_mask) begin
      ram_0_1_ver_exp[ram_0_1_ver_exp_MPORT_addr] <= ram_0_1_ver_exp_MPORT_data; // @[Decoupled.scala 273:95]
    end
    if (ram_1_0_hor_sign_MPORT_en & ram_1_0_hor_sign_MPORT_mask) begin
      ram_1_0_hor_sign[ram_1_0_hor_sign_MPORT_addr] <= ram_1_0_hor_sign_MPORT_data; // @[Decoupled.scala 273:95]
    end
    if (ram_1_0_hor_man_MPORT_en & ram_1_0_hor_man_MPORT_mask) begin
      ram_1_0_hor_man[ram_1_0_hor_man_MPORT_addr] <= ram_1_0_hor_man_MPORT_data; // @[Decoupled.scala 273:95]
    end
    if (ram_1_0_hor_exp_MPORT_en & ram_1_0_hor_exp_MPORT_mask) begin
      ram_1_0_hor_exp[ram_1_0_hor_exp_MPORT_addr] <= ram_1_0_hor_exp_MPORT_data; // @[Decoupled.scala 273:95]
    end
    if (ram_1_0_ver_sign_MPORT_en & ram_1_0_ver_sign_MPORT_mask) begin
      ram_1_0_ver_sign[ram_1_0_ver_sign_MPORT_addr] <= ram_1_0_ver_sign_MPORT_data; // @[Decoupled.scala 273:95]
    end
    if (ram_1_0_ver_man_MPORT_en & ram_1_0_ver_man_MPORT_mask) begin
      ram_1_0_ver_man[ram_1_0_ver_man_MPORT_addr] <= ram_1_0_ver_man_MPORT_data; // @[Decoupled.scala 273:95]
    end
    if (ram_1_0_ver_exp_MPORT_en & ram_1_0_ver_exp_MPORT_mask) begin
      ram_1_0_ver_exp[ram_1_0_ver_exp_MPORT_addr] <= ram_1_0_ver_exp_MPORT_data; // @[Decoupled.scala 273:95]
    end
    if (ram_1_1_hor_sign_MPORT_en & ram_1_1_hor_sign_MPORT_mask) begin
      ram_1_1_hor_sign[ram_1_1_hor_sign_MPORT_addr] <= ram_1_1_hor_sign_MPORT_data; // @[Decoupled.scala 273:95]
    end
    if (ram_1_1_hor_man_MPORT_en & ram_1_1_hor_man_MPORT_mask) begin
      ram_1_1_hor_man[ram_1_1_hor_man_MPORT_addr] <= ram_1_1_hor_man_MPORT_data; // @[Decoupled.scala 273:95]
    end
    if (ram_1_1_hor_exp_MPORT_en & ram_1_1_hor_exp_MPORT_mask) begin
      ram_1_1_hor_exp[ram_1_1_hor_exp_MPORT_addr] <= ram_1_1_hor_exp_MPORT_data; // @[Decoupled.scala 273:95]
    end
    if (ram_1_1_ver_sign_MPORT_en & ram_1_1_ver_sign_MPORT_mask) begin
      ram_1_1_ver_sign[ram_1_1_ver_sign_MPORT_addr] <= ram_1_1_ver_sign_MPORT_data; // @[Decoupled.scala 273:95]
    end
    if (ram_1_1_ver_man_MPORT_en & ram_1_1_ver_man_MPORT_mask) begin
      ram_1_1_ver_man[ram_1_1_ver_man_MPORT_addr] <= ram_1_1_ver_man_MPORT_data; // @[Decoupled.scala 273:95]
    end
    if (ram_1_1_ver_exp_MPORT_en & ram_1_1_ver_exp_MPORT_mask) begin
      ram_1_1_ver_exp[ram_1_1_ver_exp_MPORT_addr] <= ram_1_1_ver_exp_MPORT_data; // @[Decoupled.scala 273:95]
    end
    if (reset) begin // @[Counter.scala 61:40]
      enq_ptr_value <= 1'h0; // @[Counter.scala 61:40]
    end else if (do_enq) begin // @[Decoupled.scala 286:16]
      enq_ptr_value <= enq_ptr_value + 1'h1; // @[Counter.scala 77:15]
    end
    if (reset) begin // @[Counter.scala 61:40]
      deq_ptr_value <= 1'h0; // @[Counter.scala 61:40]
    end else if (io_deq_valid) begin // @[Decoupled.scala 290:16]
      deq_ptr_value <= deq_ptr_value + 1'h1; // @[Counter.scala 77:15]
    end
    if (reset) begin // @[Decoupled.scala 276:27]
      maybe_full <= 1'h0; // @[Decoupled.scala 276:27]
    end else if (do_enq != io_deq_valid) begin // @[Decoupled.scala 293:27]
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
  for (initvar = 0; initvar < 2; initvar = initvar+1)
    ram_0_0_hor_sign[initvar] = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  for (initvar = 0; initvar < 2; initvar = initvar+1)
    ram_0_0_hor_man[initvar] = _RAND_1[4:0];
  _RAND_2 = {1{`RANDOM}};
  for (initvar = 0; initvar < 2; initvar = initvar+1)
    ram_0_0_hor_exp[initvar] = _RAND_2[7:0];
  _RAND_3 = {1{`RANDOM}};
  for (initvar = 0; initvar < 2; initvar = initvar+1)
    ram_0_0_ver_sign[initvar] = _RAND_3[0:0];
  _RAND_4 = {1{`RANDOM}};
  for (initvar = 0; initvar < 2; initvar = initvar+1)
    ram_0_0_ver_man[initvar] = _RAND_4[4:0];
  _RAND_5 = {1{`RANDOM}};
  for (initvar = 0; initvar < 2; initvar = initvar+1)
    ram_0_0_ver_exp[initvar] = _RAND_5[7:0];
  _RAND_6 = {1{`RANDOM}};
  for (initvar = 0; initvar < 2; initvar = initvar+1)
    ram_0_1_hor_sign[initvar] = _RAND_6[0:0];
  _RAND_7 = {1{`RANDOM}};
  for (initvar = 0; initvar < 2; initvar = initvar+1)
    ram_0_1_hor_man[initvar] = _RAND_7[4:0];
  _RAND_8 = {1{`RANDOM}};
  for (initvar = 0; initvar < 2; initvar = initvar+1)
    ram_0_1_hor_exp[initvar] = _RAND_8[7:0];
  _RAND_9 = {1{`RANDOM}};
  for (initvar = 0; initvar < 2; initvar = initvar+1)
    ram_0_1_ver_sign[initvar] = _RAND_9[0:0];
  _RAND_10 = {1{`RANDOM}};
  for (initvar = 0; initvar < 2; initvar = initvar+1)
    ram_0_1_ver_man[initvar] = _RAND_10[4:0];
  _RAND_11 = {1{`RANDOM}};
  for (initvar = 0; initvar < 2; initvar = initvar+1)
    ram_0_1_ver_exp[initvar] = _RAND_11[7:0];
  _RAND_12 = {1{`RANDOM}};
  for (initvar = 0; initvar < 2; initvar = initvar+1)
    ram_1_0_hor_sign[initvar] = _RAND_12[0:0];
  _RAND_13 = {1{`RANDOM}};
  for (initvar = 0; initvar < 2; initvar = initvar+1)
    ram_1_0_hor_man[initvar] = _RAND_13[4:0];
  _RAND_14 = {1{`RANDOM}};
  for (initvar = 0; initvar < 2; initvar = initvar+1)
    ram_1_0_hor_exp[initvar] = _RAND_14[7:0];
  _RAND_15 = {1{`RANDOM}};
  for (initvar = 0; initvar < 2; initvar = initvar+1)
    ram_1_0_ver_sign[initvar] = _RAND_15[0:0];
  _RAND_16 = {1{`RANDOM}};
  for (initvar = 0; initvar < 2; initvar = initvar+1)
    ram_1_0_ver_man[initvar] = _RAND_16[4:0];
  _RAND_17 = {1{`RANDOM}};
  for (initvar = 0; initvar < 2; initvar = initvar+1)
    ram_1_0_ver_exp[initvar] = _RAND_17[7:0];
  _RAND_18 = {1{`RANDOM}};
  for (initvar = 0; initvar < 2; initvar = initvar+1)
    ram_1_1_hor_sign[initvar] = _RAND_18[0:0];
  _RAND_19 = {1{`RANDOM}};
  for (initvar = 0; initvar < 2; initvar = initvar+1)
    ram_1_1_hor_man[initvar] = _RAND_19[4:0];
  _RAND_20 = {1{`RANDOM}};
  for (initvar = 0; initvar < 2; initvar = initvar+1)
    ram_1_1_hor_exp[initvar] = _RAND_20[7:0];
  _RAND_21 = {1{`RANDOM}};
  for (initvar = 0; initvar < 2; initvar = initvar+1)
    ram_1_1_ver_sign[initvar] = _RAND_21[0:0];
  _RAND_22 = {1{`RANDOM}};
  for (initvar = 0; initvar < 2; initvar = initvar+1)
    ram_1_1_ver_man[initvar] = _RAND_22[4:0];
  _RAND_23 = {1{`RANDOM}};
  for (initvar = 0; initvar < 2; initvar = initvar+1)
    ram_1_1_ver_exp[initvar] = _RAND_23[7:0];
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  _RAND_24 = {1{`RANDOM}};
  enq_ptr_value = _RAND_24[0:0];
  _RAND_25 = {1{`RANDOM}};
  deq_ptr_value = _RAND_25[0:0];
  _RAND_26 = {1{`RANDOM}};
  maybe_full = _RAND_26[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module SystolicArray(
  input        clock,
  input        reset,
  output       io_in_ready,
  input        io_in_valid,
  input        io_in_bits_0_0_hor_sign,
  input  [4:0] io_in_bits_0_0_hor_man,
  input  [7:0] io_in_bits_0_0_hor_exp,
  input        io_in_bits_0_0_ver_sign,
  input  [4:0] io_in_bits_0_0_ver_man,
  input  [7:0] io_in_bits_0_0_ver_exp,
  input        io_in_bits_0_1_hor_sign,
  input  [4:0] io_in_bits_0_1_hor_man,
  input  [7:0] io_in_bits_0_1_hor_exp,
  input        io_in_bits_0_1_ver_sign,
  input  [4:0] io_in_bits_0_1_ver_man,
  input  [7:0] io_in_bits_0_1_ver_exp,
  input        io_in_bits_1_0_hor_sign,
  input  [4:0] io_in_bits_1_0_hor_man,
  input  [7:0] io_in_bits_1_0_hor_exp,
  input        io_in_bits_1_0_ver_sign,
  input  [4:0] io_in_bits_1_0_ver_man,
  input  [7:0] io_in_bits_1_0_ver_exp,
  input        io_in_bits_1_1_hor_sign,
  input  [4:0] io_in_bits_1_1_hor_man,
  input  [7:0] io_in_bits_1_1_hor_exp,
  input        io_in_bits_1_1_ver_sign,
  input  [4:0] io_in_bits_1_1_ver_man,
  input  [7:0] io_in_bits_1_1_ver_exp,
  output       io_out_0_0_hor_sign,
  output [4:0] io_out_0_0_hor_man,
  output [7:0] io_out_0_0_hor_exp,
  output       io_out_0_0_ver_sign,
  output [4:0] io_out_0_0_ver_man,
  output [7:0] io_out_0_0_ver_exp,
  output       io_out_0_0_result_sign,
  output [4:0] io_out_0_0_result_man,
  output [7:0] io_out_0_0_result_exp,
  output       io_out_0_1_hor_sign,
  output [4:0] io_out_0_1_hor_man,
  output [7:0] io_out_0_1_hor_exp,
  output       io_out_0_1_ver_sign,
  output [4:0] io_out_0_1_ver_man,
  output [7:0] io_out_0_1_ver_exp,
  output       io_out_0_1_result_sign,
  output [4:0] io_out_0_1_result_man,
  output [7:0] io_out_0_1_result_exp,
  output       io_out_1_0_hor_sign,
  output [4:0] io_out_1_0_hor_man,
  output [7:0] io_out_1_0_hor_exp,
  output       io_out_1_0_ver_sign,
  output [4:0] io_out_1_0_ver_man,
  output [7:0] io_out_1_0_ver_exp,
  output       io_out_1_0_result_sign,
  output [4:0] io_out_1_0_result_man,
  output [7:0] io_out_1_0_result_exp,
  output       io_out_1_1_hor_sign,
  output [4:0] io_out_1_1_hor_man,
  output [7:0] io_out_1_1_hor_exp,
  output       io_out_1_1_ver_sign,
  output [4:0] io_out_1_1_ver_man,
  output [7:0] io_out_1_1_ver_exp,
  output       io_out_1_1_result_sign,
  output [4:0] io_out_1_1_result_man,
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
`endif // RANDOMIZE_REG_INIT
  wire  pes_0_0_clock; // @[FP_GEMM.scala 101:34]
  wire  pes_0_0_io_in_hor_sign; // @[FP_GEMM.scala 101:34]
  wire [4:0] pes_0_0_io_in_hor_man; // @[FP_GEMM.scala 101:34]
  wire [7:0] pes_0_0_io_in_hor_exp; // @[FP_GEMM.scala 101:34]
  wire  pes_0_0_io_in_ver_sign; // @[FP_GEMM.scala 101:34]
  wire [4:0] pes_0_0_io_in_ver_man; // @[FP_GEMM.scala 101:34]
  wire [7:0] pes_0_0_io_in_ver_exp; // @[FP_GEMM.scala 101:34]
  wire  pes_0_0_io_out_hor_sign; // @[FP_GEMM.scala 101:34]
  wire [4:0] pes_0_0_io_out_hor_man; // @[FP_GEMM.scala 101:34]
  wire [7:0] pes_0_0_io_out_hor_exp; // @[FP_GEMM.scala 101:34]
  wire  pes_0_0_io_out_ver_sign; // @[FP_GEMM.scala 101:34]
  wire [4:0] pes_0_0_io_out_ver_man; // @[FP_GEMM.scala 101:34]
  wire [7:0] pes_0_0_io_out_ver_exp; // @[FP_GEMM.scala 101:34]
  wire  pes_0_0_io_out_result_sign; // @[FP_GEMM.scala 101:34]
  wire [4:0] pes_0_0_io_out_result_man; // @[FP_GEMM.scala 101:34]
  wire [7:0] pes_0_0_io_out_result_exp; // @[FP_GEMM.scala 101:34]
  wire  pes_0_1_clock; // @[FP_GEMM.scala 101:34]
  wire  pes_0_1_io_in_hor_sign; // @[FP_GEMM.scala 101:34]
  wire [4:0] pes_0_1_io_in_hor_man; // @[FP_GEMM.scala 101:34]
  wire [7:0] pes_0_1_io_in_hor_exp; // @[FP_GEMM.scala 101:34]
  wire  pes_0_1_io_in_ver_sign; // @[FP_GEMM.scala 101:34]
  wire [4:0] pes_0_1_io_in_ver_man; // @[FP_GEMM.scala 101:34]
  wire [7:0] pes_0_1_io_in_ver_exp; // @[FP_GEMM.scala 101:34]
  wire  pes_0_1_io_out_hor_sign; // @[FP_GEMM.scala 101:34]
  wire [4:0] pes_0_1_io_out_hor_man; // @[FP_GEMM.scala 101:34]
  wire [7:0] pes_0_1_io_out_hor_exp; // @[FP_GEMM.scala 101:34]
  wire  pes_0_1_io_out_ver_sign; // @[FP_GEMM.scala 101:34]
  wire [4:0] pes_0_1_io_out_ver_man; // @[FP_GEMM.scala 101:34]
  wire [7:0] pes_0_1_io_out_ver_exp; // @[FP_GEMM.scala 101:34]
  wire  pes_0_1_io_out_result_sign; // @[FP_GEMM.scala 101:34]
  wire [4:0] pes_0_1_io_out_result_man; // @[FP_GEMM.scala 101:34]
  wire [7:0] pes_0_1_io_out_result_exp; // @[FP_GEMM.scala 101:34]
  wire  pes_1_0_clock; // @[FP_GEMM.scala 101:34]
  wire  pes_1_0_io_in_hor_sign; // @[FP_GEMM.scala 101:34]
  wire [4:0] pes_1_0_io_in_hor_man; // @[FP_GEMM.scala 101:34]
  wire [7:0] pes_1_0_io_in_hor_exp; // @[FP_GEMM.scala 101:34]
  wire  pes_1_0_io_in_ver_sign; // @[FP_GEMM.scala 101:34]
  wire [4:0] pes_1_0_io_in_ver_man; // @[FP_GEMM.scala 101:34]
  wire [7:0] pes_1_0_io_in_ver_exp; // @[FP_GEMM.scala 101:34]
  wire  pes_1_0_io_out_hor_sign; // @[FP_GEMM.scala 101:34]
  wire [4:0] pes_1_0_io_out_hor_man; // @[FP_GEMM.scala 101:34]
  wire [7:0] pes_1_0_io_out_hor_exp; // @[FP_GEMM.scala 101:34]
  wire  pes_1_0_io_out_ver_sign; // @[FP_GEMM.scala 101:34]
  wire [4:0] pes_1_0_io_out_ver_man; // @[FP_GEMM.scala 101:34]
  wire [7:0] pes_1_0_io_out_ver_exp; // @[FP_GEMM.scala 101:34]
  wire  pes_1_0_io_out_result_sign; // @[FP_GEMM.scala 101:34]
  wire [4:0] pes_1_0_io_out_result_man; // @[FP_GEMM.scala 101:34]
  wire [7:0] pes_1_0_io_out_result_exp; // @[FP_GEMM.scala 101:34]
  wire  pes_1_1_clock; // @[FP_GEMM.scala 101:34]
  wire  pes_1_1_io_in_hor_sign; // @[FP_GEMM.scala 101:34]
  wire [4:0] pes_1_1_io_in_hor_man; // @[FP_GEMM.scala 101:34]
  wire [7:0] pes_1_1_io_in_hor_exp; // @[FP_GEMM.scala 101:34]
  wire  pes_1_1_io_in_ver_sign; // @[FP_GEMM.scala 101:34]
  wire [4:0] pes_1_1_io_in_ver_man; // @[FP_GEMM.scala 101:34]
  wire [7:0] pes_1_1_io_in_ver_exp; // @[FP_GEMM.scala 101:34]
  wire  pes_1_1_io_out_hor_sign; // @[FP_GEMM.scala 101:34]
  wire [4:0] pes_1_1_io_out_hor_man; // @[FP_GEMM.scala 101:34]
  wire [7:0] pes_1_1_io_out_hor_exp; // @[FP_GEMM.scala 101:34]
  wire  pes_1_1_io_out_ver_sign; // @[FP_GEMM.scala 101:34]
  wire [4:0] pes_1_1_io_out_ver_man; // @[FP_GEMM.scala 101:34]
  wire [7:0] pes_1_1_io_out_ver_exp; // @[FP_GEMM.scala 101:34]
  wire  pes_1_1_io_out_result_sign; // @[FP_GEMM.scala 101:34]
  wire [4:0] pes_1_1_io_out_result_man; // @[FP_GEMM.scala 101:34]
  wire [7:0] pes_1_1_io_out_result_exp; // @[FP_GEMM.scala 101:34]
  wire  inputQueue_clock; // @[FP_GEMM.scala 102:26]
  wire  inputQueue_reset; // @[FP_GEMM.scala 102:26]
  wire  inputQueue_io_enq_ready; // @[FP_GEMM.scala 102:26]
  wire  inputQueue_io_enq_valid; // @[FP_GEMM.scala 102:26]
  wire  inputQueue_io_enq_bits_0_0_hor_sign; // @[FP_GEMM.scala 102:26]
  wire [4:0] inputQueue_io_enq_bits_0_0_hor_man; // @[FP_GEMM.scala 102:26]
  wire [7:0] inputQueue_io_enq_bits_0_0_hor_exp; // @[FP_GEMM.scala 102:26]
  wire  inputQueue_io_enq_bits_0_0_ver_sign; // @[FP_GEMM.scala 102:26]
  wire [4:0] inputQueue_io_enq_bits_0_0_ver_man; // @[FP_GEMM.scala 102:26]
  wire [7:0] inputQueue_io_enq_bits_0_0_ver_exp; // @[FP_GEMM.scala 102:26]
  wire  inputQueue_io_enq_bits_0_1_hor_sign; // @[FP_GEMM.scala 102:26]
  wire [4:0] inputQueue_io_enq_bits_0_1_hor_man; // @[FP_GEMM.scala 102:26]
  wire [7:0] inputQueue_io_enq_bits_0_1_hor_exp; // @[FP_GEMM.scala 102:26]
  wire  inputQueue_io_enq_bits_0_1_ver_sign; // @[FP_GEMM.scala 102:26]
  wire [4:0] inputQueue_io_enq_bits_0_1_ver_man; // @[FP_GEMM.scala 102:26]
  wire [7:0] inputQueue_io_enq_bits_0_1_ver_exp; // @[FP_GEMM.scala 102:26]
  wire  inputQueue_io_enq_bits_1_0_hor_sign; // @[FP_GEMM.scala 102:26]
  wire [4:0] inputQueue_io_enq_bits_1_0_hor_man; // @[FP_GEMM.scala 102:26]
  wire [7:0] inputQueue_io_enq_bits_1_0_hor_exp; // @[FP_GEMM.scala 102:26]
  wire  inputQueue_io_enq_bits_1_0_ver_sign; // @[FP_GEMM.scala 102:26]
  wire [4:0] inputQueue_io_enq_bits_1_0_ver_man; // @[FP_GEMM.scala 102:26]
  wire [7:0] inputQueue_io_enq_bits_1_0_ver_exp; // @[FP_GEMM.scala 102:26]
  wire  inputQueue_io_enq_bits_1_1_hor_sign; // @[FP_GEMM.scala 102:26]
  wire [4:0] inputQueue_io_enq_bits_1_1_hor_man; // @[FP_GEMM.scala 102:26]
  wire [7:0] inputQueue_io_enq_bits_1_1_hor_exp; // @[FP_GEMM.scala 102:26]
  wire  inputQueue_io_enq_bits_1_1_ver_sign; // @[FP_GEMM.scala 102:26]
  wire [4:0] inputQueue_io_enq_bits_1_1_ver_man; // @[FP_GEMM.scala 102:26]
  wire [7:0] inputQueue_io_enq_bits_1_1_ver_exp; // @[FP_GEMM.scala 102:26]
  wire  inputQueue_io_deq_ready; // @[FP_GEMM.scala 102:26]
  wire  inputQueue_io_deq_valid; // @[FP_GEMM.scala 102:26]
  wire  inputQueue_io_deq_bits_0_0_hor_sign; // @[FP_GEMM.scala 102:26]
  wire [4:0] inputQueue_io_deq_bits_0_0_hor_man; // @[FP_GEMM.scala 102:26]
  wire [7:0] inputQueue_io_deq_bits_0_0_hor_exp; // @[FP_GEMM.scala 102:26]
  wire  inputQueue_io_deq_bits_0_0_ver_sign; // @[FP_GEMM.scala 102:26]
  wire [4:0] inputQueue_io_deq_bits_0_0_ver_man; // @[FP_GEMM.scala 102:26]
  wire [7:0] inputQueue_io_deq_bits_0_0_ver_exp; // @[FP_GEMM.scala 102:26]
  wire  inputQueue_io_deq_bits_0_1_hor_sign; // @[FP_GEMM.scala 102:26]
  wire [4:0] inputQueue_io_deq_bits_0_1_hor_man; // @[FP_GEMM.scala 102:26]
  wire [7:0] inputQueue_io_deq_bits_0_1_hor_exp; // @[FP_GEMM.scala 102:26]
  wire  inputQueue_io_deq_bits_0_1_ver_sign; // @[FP_GEMM.scala 102:26]
  wire [4:0] inputQueue_io_deq_bits_0_1_ver_man; // @[FP_GEMM.scala 102:26]
  wire [7:0] inputQueue_io_deq_bits_0_1_ver_exp; // @[FP_GEMM.scala 102:26]
  wire  inputQueue_io_deq_bits_1_0_hor_sign; // @[FP_GEMM.scala 102:26]
  wire [4:0] inputQueue_io_deq_bits_1_0_hor_man; // @[FP_GEMM.scala 102:26]
  wire [7:0] inputQueue_io_deq_bits_1_0_hor_exp; // @[FP_GEMM.scala 102:26]
  wire  inputQueue_io_deq_bits_1_0_ver_sign; // @[FP_GEMM.scala 102:26]
  wire [4:0] inputQueue_io_deq_bits_1_0_ver_man; // @[FP_GEMM.scala 102:26]
  wire [7:0] inputQueue_io_deq_bits_1_0_ver_exp; // @[FP_GEMM.scala 102:26]
  wire  inputQueue_io_deq_bits_1_1_hor_sign; // @[FP_GEMM.scala 102:26]
  wire [4:0] inputQueue_io_deq_bits_1_1_hor_man; // @[FP_GEMM.scala 102:26]
  wire [7:0] inputQueue_io_deq_bits_1_1_hor_exp; // @[FP_GEMM.scala 102:26]
  wire  inputQueue_io_deq_bits_1_1_ver_sign; // @[FP_GEMM.scala 102:26]
  wire [4:0] inputQueue_io_deq_bits_1_1_ver_man; // @[FP_GEMM.scala 102:26]
  wire [7:0] inputQueue_io_deq_bits_1_1_ver_exp; // @[FP_GEMM.scala 102:26]
  reg  counter; // @[FP_GEMM.scala 111:24]
  wire [4:0] _GEN_1 = inputQueue_io_deq_bits_0_0_hor_man; // @[FP_GEMM.scala 115:{31,31}]
  wire [7:0] _GEN_2 = inputQueue_io_deq_bits_0_0_hor_exp; // @[FP_GEMM.scala 115:{31,31}]
  wire  _GEN_3 = counter ? inputQueue_io_deq_bits_0_1_hor_sign : inputQueue_io_deq_bits_0_0_hor_sign; // @[FP_GEMM.scala 115:{31,31}]
  wire [4:0] _GEN_4 = counter ? inputQueue_io_deq_bits_0_1_hor_man : _GEN_1; // @[FP_GEMM.scala 115:{31,31}]
  wire [7:0] _GEN_5 = counter ? inputQueue_io_deq_bits_0_1_hor_exp : _GEN_2; // @[FP_GEMM.scala 115:{31,31}]
  wire [4:0] _GEN_7 = inputQueue_io_deq_bits_0_0_ver_man; // @[FP_GEMM.scala 116:{31,31}]
  wire [7:0] _GEN_8 = inputQueue_io_deq_bits_0_0_ver_exp; // @[FP_GEMM.scala 116:{31,31}]
  wire  _GEN_9 = counter ? inputQueue_io_deq_bits_1_0_ver_sign : inputQueue_io_deq_bits_0_0_ver_sign; // @[FP_GEMM.scala 116:{31,31}]
  wire [4:0] _GEN_10 = counter ? inputQueue_io_deq_bits_1_0_ver_man : _GEN_7; // @[FP_GEMM.scala 116:{31,31}]
  wire [7:0] _GEN_11 = counter ? inputQueue_io_deq_bits_1_0_ver_exp : _GEN_8; // @[FP_GEMM.scala 116:{31,31}]
  reg  pes_1_0_io_in_hor_r; // @[Reg.scala 19:16]
  reg  pes_1_0_io_in_hor_r_1_sign; // @[Reg.scala 19:16]
  reg [4:0] pes_1_0_io_in_hor_r_1_man; // @[Reg.scala 19:16]
  reg [7:0] pes_1_0_io_in_hor_r_1_exp; // @[Reg.scala 19:16]
  wire [4:0] _GEN_15 = inputQueue_io_deq_bits_1_0_hor_man; // @[Reg.scala 20:{22,22}]
  wire [7:0] _GEN_17 = inputQueue_io_deq_bits_1_0_hor_exp; // @[Reg.scala 20:{22,22}]
  reg  pes_0_1_io_in_ver_r; // @[Reg.scala 19:16]
  reg  pes_0_1_io_in_ver_r_1_sign; // @[Reg.scala 19:16]
  reg [4:0] pes_0_1_io_in_ver_r_1_man; // @[Reg.scala 19:16]
  reg [7:0] pes_0_1_io_in_ver_r_1_exp; // @[Reg.scala 19:16]
  wire [4:0] _GEN_28 = inputQueue_io_deq_bits_0_1_ver_man; // @[Reg.scala 20:{22,22}]
  wire [7:0] _GEN_30 = inputQueue_io_deq_bits_0_1_ver_exp; // @[Reg.scala 20:{22,22}]
  reg  pes_0_1_io_in_hor_r_sign; // @[Reg.scala 19:16]
  reg [4:0] pes_0_1_io_in_hor_r_man; // @[Reg.scala 19:16]
  reg [7:0] pes_0_1_io_in_hor_r_exp; // @[Reg.scala 19:16]
  reg  pes_1_1_io_in_hor_r_sign; // @[Reg.scala 19:16]
  reg [4:0] pes_1_1_io_in_hor_r_man; // @[Reg.scala 19:16]
  reg [7:0] pes_1_1_io_in_hor_r_exp; // @[Reg.scala 19:16]
  reg  pes_1_0_io_in_ver_r_sign; // @[Reg.scala 19:16]
  reg [4:0] pes_1_0_io_in_ver_r_man; // @[Reg.scala 19:16]
  reg [7:0] pes_1_0_io_in_ver_r_exp; // @[Reg.scala 19:16]
  reg  pes_1_1_io_in_ver_r_sign; // @[Reg.scala 19:16]
  reg [4:0] pes_1_1_io_in_ver_r_man; // @[Reg.scala 19:16]
  reg [7:0] pes_1_1_io_in_ver_r_exp; // @[Reg.scala 19:16]
  PE pes_0_0 ( // @[FP_GEMM.scala 101:34]
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
  PE pes_0_1 ( // @[FP_GEMM.scala 101:34]
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
  PE pes_1_0 ( // @[FP_GEMM.scala 101:34]
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
  PE pes_1_1 ( // @[FP_GEMM.scala 101:34]
    .clock(pes_1_1_clock),
    .io_in_hor_sign(pes_1_1_io_in_hor_sign),
    .io_in_hor_man(pes_1_1_io_in_hor_man),
    .io_in_hor_exp(pes_1_1_io_in_hor_exp),
    .io_in_ver_sign(pes_1_1_io_in_ver_sign),
    .io_in_ver_man(pes_1_1_io_in_ver_man),
    .io_in_ver_exp(pes_1_1_io_in_ver_exp),
    .io_out_hor_sign(pes_1_1_io_out_hor_sign),
    .io_out_hor_man(pes_1_1_io_out_hor_man),
    .io_out_hor_exp(pes_1_1_io_out_hor_exp),
    .io_out_ver_sign(pes_1_1_io_out_ver_sign),
    .io_out_ver_man(pes_1_1_io_out_ver_man),
    .io_out_ver_exp(pes_1_1_io_out_ver_exp),
    .io_out_result_sign(pes_1_1_io_out_result_sign),
    .io_out_result_man(pes_1_1_io_out_result_man),
    .io_out_result_exp(pes_1_1_io_out_result_exp)
  );
  Queue inputQueue ( // @[FP_GEMM.scala 102:26]
    .clock(inputQueue_clock),
    .reset(inputQueue_reset),
    .io_enq_ready(inputQueue_io_enq_ready),
    .io_enq_valid(inputQueue_io_enq_valid),
    .io_enq_bits_0_0_hor_sign(inputQueue_io_enq_bits_0_0_hor_sign),
    .io_enq_bits_0_0_hor_man(inputQueue_io_enq_bits_0_0_hor_man),
    .io_enq_bits_0_0_hor_exp(inputQueue_io_enq_bits_0_0_hor_exp),
    .io_enq_bits_0_0_ver_sign(inputQueue_io_enq_bits_0_0_ver_sign),
    .io_enq_bits_0_0_ver_man(inputQueue_io_enq_bits_0_0_ver_man),
    .io_enq_bits_0_0_ver_exp(inputQueue_io_enq_bits_0_0_ver_exp),
    .io_enq_bits_0_1_hor_sign(inputQueue_io_enq_bits_0_1_hor_sign),
    .io_enq_bits_0_1_hor_man(inputQueue_io_enq_bits_0_1_hor_man),
    .io_enq_bits_0_1_hor_exp(inputQueue_io_enq_bits_0_1_hor_exp),
    .io_enq_bits_0_1_ver_sign(inputQueue_io_enq_bits_0_1_ver_sign),
    .io_enq_bits_0_1_ver_man(inputQueue_io_enq_bits_0_1_ver_man),
    .io_enq_bits_0_1_ver_exp(inputQueue_io_enq_bits_0_1_ver_exp),
    .io_enq_bits_1_0_hor_sign(inputQueue_io_enq_bits_1_0_hor_sign),
    .io_enq_bits_1_0_hor_man(inputQueue_io_enq_bits_1_0_hor_man),
    .io_enq_bits_1_0_hor_exp(inputQueue_io_enq_bits_1_0_hor_exp),
    .io_enq_bits_1_0_ver_sign(inputQueue_io_enq_bits_1_0_ver_sign),
    .io_enq_bits_1_0_ver_man(inputQueue_io_enq_bits_1_0_ver_man),
    .io_enq_bits_1_0_ver_exp(inputQueue_io_enq_bits_1_0_ver_exp),
    .io_enq_bits_1_1_hor_sign(inputQueue_io_enq_bits_1_1_hor_sign),
    .io_enq_bits_1_1_hor_man(inputQueue_io_enq_bits_1_1_hor_man),
    .io_enq_bits_1_1_hor_exp(inputQueue_io_enq_bits_1_1_hor_exp),
    .io_enq_bits_1_1_ver_sign(inputQueue_io_enq_bits_1_1_ver_sign),
    .io_enq_bits_1_1_ver_man(inputQueue_io_enq_bits_1_1_ver_man),
    .io_enq_bits_1_1_ver_exp(inputQueue_io_enq_bits_1_1_ver_exp),
    .io_deq_ready(inputQueue_io_deq_ready),
    .io_deq_valid(inputQueue_io_deq_valid),
    .io_deq_bits_0_0_hor_sign(inputQueue_io_deq_bits_0_0_hor_sign),
    .io_deq_bits_0_0_hor_man(inputQueue_io_deq_bits_0_0_hor_man),
    .io_deq_bits_0_0_hor_exp(inputQueue_io_deq_bits_0_0_hor_exp),
    .io_deq_bits_0_0_ver_sign(inputQueue_io_deq_bits_0_0_ver_sign),
    .io_deq_bits_0_0_ver_man(inputQueue_io_deq_bits_0_0_ver_man),
    .io_deq_bits_0_0_ver_exp(inputQueue_io_deq_bits_0_0_ver_exp),
    .io_deq_bits_0_1_hor_sign(inputQueue_io_deq_bits_0_1_hor_sign),
    .io_deq_bits_0_1_hor_man(inputQueue_io_deq_bits_0_1_hor_man),
    .io_deq_bits_0_1_hor_exp(inputQueue_io_deq_bits_0_1_hor_exp),
    .io_deq_bits_0_1_ver_sign(inputQueue_io_deq_bits_0_1_ver_sign),
    .io_deq_bits_0_1_ver_man(inputQueue_io_deq_bits_0_1_ver_man),
    .io_deq_bits_0_1_ver_exp(inputQueue_io_deq_bits_0_1_ver_exp),
    .io_deq_bits_1_0_hor_sign(inputQueue_io_deq_bits_1_0_hor_sign),
    .io_deq_bits_1_0_hor_man(inputQueue_io_deq_bits_1_0_hor_man),
    .io_deq_bits_1_0_hor_exp(inputQueue_io_deq_bits_1_0_hor_exp),
    .io_deq_bits_1_0_ver_sign(inputQueue_io_deq_bits_1_0_ver_sign),
    .io_deq_bits_1_0_ver_man(inputQueue_io_deq_bits_1_0_ver_man),
    .io_deq_bits_1_0_ver_exp(inputQueue_io_deq_bits_1_0_ver_exp),
    .io_deq_bits_1_1_hor_sign(inputQueue_io_deq_bits_1_1_hor_sign),
    .io_deq_bits_1_1_hor_man(inputQueue_io_deq_bits_1_1_hor_man),
    .io_deq_bits_1_1_hor_exp(inputQueue_io_deq_bits_1_1_hor_exp),
    .io_deq_bits_1_1_ver_sign(inputQueue_io_deq_bits_1_1_ver_sign),
    .io_deq_bits_1_1_ver_man(inputQueue_io_deq_bits_1_1_ver_man),
    .io_deq_bits_1_1_ver_exp(inputQueue_io_deq_bits_1_1_ver_exp)
  );
  assign io_in_ready = inputQueue_io_enq_ready; // @[FP_GEMM.scala 109:21]
  assign io_out_0_0_hor_sign = pes_0_0_io_out_hor_sign; // @[FP_GEMM.scala 140:24]
  assign io_out_0_0_hor_man = pes_0_0_io_out_hor_man; // @[FP_GEMM.scala 140:24]
  assign io_out_0_0_hor_exp = pes_0_0_io_out_hor_exp; // @[FP_GEMM.scala 140:24]
  assign io_out_0_0_ver_sign = pes_0_0_io_out_ver_sign; // @[FP_GEMM.scala 141:24]
  assign io_out_0_0_ver_man = pes_0_0_io_out_ver_man; // @[FP_GEMM.scala 141:24]
  assign io_out_0_0_ver_exp = pes_0_0_io_out_ver_exp; // @[FP_GEMM.scala 141:24]
  assign io_out_0_0_result_sign = pes_0_0_io_out_result_sign; // @[FP_GEMM.scala 142:27]
  assign io_out_0_0_result_man = pes_0_0_io_out_result_man; // @[FP_GEMM.scala 142:27]
  assign io_out_0_0_result_exp = pes_0_0_io_out_result_exp; // @[FP_GEMM.scala 142:27]
  assign io_out_0_1_hor_sign = pes_0_1_io_out_hor_sign; // @[FP_GEMM.scala 140:24]
  assign io_out_0_1_hor_man = pes_0_1_io_out_hor_man; // @[FP_GEMM.scala 140:24]
  assign io_out_0_1_hor_exp = pes_0_1_io_out_hor_exp; // @[FP_GEMM.scala 140:24]
  assign io_out_0_1_ver_sign = pes_0_1_io_out_ver_sign; // @[FP_GEMM.scala 141:24]
  assign io_out_0_1_ver_man = pes_0_1_io_out_ver_man; // @[FP_GEMM.scala 141:24]
  assign io_out_0_1_ver_exp = pes_0_1_io_out_ver_exp; // @[FP_GEMM.scala 141:24]
  assign io_out_0_1_result_sign = pes_0_1_io_out_result_sign; // @[FP_GEMM.scala 142:27]
  assign io_out_0_1_result_man = pes_0_1_io_out_result_man; // @[FP_GEMM.scala 142:27]
  assign io_out_0_1_result_exp = pes_0_1_io_out_result_exp; // @[FP_GEMM.scala 142:27]
  assign io_out_1_0_hor_sign = pes_1_0_io_out_hor_sign; // @[FP_GEMM.scala 140:24]
  assign io_out_1_0_hor_man = pes_1_0_io_out_hor_man; // @[FP_GEMM.scala 140:24]
  assign io_out_1_0_hor_exp = pes_1_0_io_out_hor_exp; // @[FP_GEMM.scala 140:24]
  assign io_out_1_0_ver_sign = pes_1_0_io_out_ver_sign; // @[FP_GEMM.scala 141:24]
  assign io_out_1_0_ver_man = pes_1_0_io_out_ver_man; // @[FP_GEMM.scala 141:24]
  assign io_out_1_0_ver_exp = pes_1_0_io_out_ver_exp; // @[FP_GEMM.scala 141:24]
  assign io_out_1_0_result_sign = pes_1_0_io_out_result_sign; // @[FP_GEMM.scala 142:27]
  assign io_out_1_0_result_man = pes_1_0_io_out_result_man; // @[FP_GEMM.scala 142:27]
  assign io_out_1_0_result_exp = pes_1_0_io_out_result_exp; // @[FP_GEMM.scala 142:27]
  assign io_out_1_1_hor_sign = pes_1_1_io_out_hor_sign; // @[FP_GEMM.scala 140:24]
  assign io_out_1_1_hor_man = pes_1_1_io_out_hor_man; // @[FP_GEMM.scala 140:24]
  assign io_out_1_1_hor_exp = pes_1_1_io_out_hor_exp; // @[FP_GEMM.scala 140:24]
  assign io_out_1_1_ver_sign = pes_1_1_io_out_ver_sign; // @[FP_GEMM.scala 141:24]
  assign io_out_1_1_ver_man = pes_1_1_io_out_ver_man; // @[FP_GEMM.scala 141:24]
  assign io_out_1_1_ver_exp = pes_1_1_io_out_ver_exp; // @[FP_GEMM.scala 141:24]
  assign io_out_1_1_result_sign = pes_1_1_io_out_result_sign; // @[FP_GEMM.scala 142:27]
  assign io_out_1_1_result_man = pes_1_1_io_out_result_man; // @[FP_GEMM.scala 142:27]
  assign io_out_1_1_result_exp = pes_1_1_io_out_result_exp; // @[FP_GEMM.scala 142:27]
  assign pes_0_0_clock = clock;
  assign pes_0_0_io_in_hor_sign = inputQueue_io_deq_valid & _GEN_3; // @[FP_GEMM.scala 115:31]
  assign pes_0_0_io_in_hor_man = inputQueue_io_deq_valid ? _GEN_4 : 5'h0; // @[FP_GEMM.scala 115:31]
  assign pes_0_0_io_in_hor_exp = inputQueue_io_deq_valid ? _GEN_5 : 8'h0; // @[FP_GEMM.scala 115:31]
  assign pes_0_0_io_in_ver_sign = inputQueue_io_deq_valid & _GEN_9; // @[FP_GEMM.scala 116:31]
  assign pes_0_0_io_in_ver_man = inputQueue_io_deq_valid ? _GEN_10 : 5'h0; // @[FP_GEMM.scala 116:31]
  assign pes_0_0_io_in_ver_exp = inputQueue_io_deq_valid ? _GEN_11 : 8'h0; // @[FP_GEMM.scala 116:31]
  assign pes_0_1_clock = clock;
  assign pes_0_1_io_in_hor_sign = pes_0_1_io_in_hor_r_sign; // @[FP_GEMM.scala 126:27]
  assign pes_0_1_io_in_hor_man = pes_0_1_io_in_hor_r_man; // @[FP_GEMM.scala 126:27]
  assign pes_0_1_io_in_hor_exp = pes_0_1_io_in_hor_r_exp; // @[FP_GEMM.scala 126:27]
  assign pes_0_1_io_in_ver_sign = pes_0_1_io_in_ver_r & pes_0_1_io_in_ver_r_1_sign; // @[FP_GEMM.scala 116:31]
  assign pes_0_1_io_in_ver_man = pes_0_1_io_in_ver_r ? pes_0_1_io_in_ver_r_1_man : 5'h0; // @[FP_GEMM.scala 116:31]
  assign pes_0_1_io_in_ver_exp = pes_0_1_io_in_ver_r ? pes_0_1_io_in_ver_r_1_exp : 8'h0; // @[FP_GEMM.scala 116:31]
  assign pes_1_0_clock = clock;
  assign pes_1_0_io_in_hor_sign = pes_1_0_io_in_hor_r & pes_1_0_io_in_hor_r_1_sign; // @[FP_GEMM.scala 115:31]
  assign pes_1_0_io_in_hor_man = pes_1_0_io_in_hor_r ? pes_1_0_io_in_hor_r_1_man : 5'h0; // @[FP_GEMM.scala 115:31]
  assign pes_1_0_io_in_hor_exp = pes_1_0_io_in_hor_r ? pes_1_0_io_in_hor_r_1_exp : 8'h0; // @[FP_GEMM.scala 115:31]
  assign pes_1_0_io_in_ver_sign = pes_1_0_io_in_ver_r_sign; // @[FP_GEMM.scala 133:27]
  assign pes_1_0_io_in_ver_man = pes_1_0_io_in_ver_r_man; // @[FP_GEMM.scala 133:27]
  assign pes_1_0_io_in_ver_exp = pes_1_0_io_in_ver_r_exp; // @[FP_GEMM.scala 133:27]
  assign pes_1_1_clock = clock;
  assign pes_1_1_io_in_hor_sign = pes_1_1_io_in_hor_r_sign; // @[FP_GEMM.scala 126:27]
  assign pes_1_1_io_in_hor_man = pes_1_1_io_in_hor_r_man; // @[FP_GEMM.scala 126:27]
  assign pes_1_1_io_in_hor_exp = pes_1_1_io_in_hor_r_exp; // @[FP_GEMM.scala 126:27]
  assign pes_1_1_io_in_ver_sign = pes_1_1_io_in_ver_r_sign; // @[FP_GEMM.scala 133:27]
  assign pes_1_1_io_in_ver_man = pes_1_1_io_in_ver_r_man; // @[FP_GEMM.scala 133:27]
  assign pes_1_1_io_in_ver_exp = pes_1_1_io_in_ver_r_exp; // @[FP_GEMM.scala 133:27]
  assign inputQueue_clock = clock;
  assign inputQueue_reset = reset;
  assign inputQueue_io_enq_valid = io_in_valid; // @[FP_GEMM.scala 109:21]
  assign inputQueue_io_enq_bits_0_0_hor_sign = io_in_bits_0_0_hor_sign; // @[FP_GEMM.scala 109:21]
  assign inputQueue_io_enq_bits_0_0_hor_man = io_in_bits_0_0_hor_man; // @[FP_GEMM.scala 109:21]
  assign inputQueue_io_enq_bits_0_0_hor_exp = io_in_bits_0_0_hor_exp; // @[FP_GEMM.scala 109:21]
  assign inputQueue_io_enq_bits_0_0_ver_sign = io_in_bits_0_0_ver_sign; // @[FP_GEMM.scala 109:21]
  assign inputQueue_io_enq_bits_0_0_ver_man = io_in_bits_0_0_ver_man; // @[FP_GEMM.scala 109:21]
  assign inputQueue_io_enq_bits_0_0_ver_exp = io_in_bits_0_0_ver_exp; // @[FP_GEMM.scala 109:21]
  assign inputQueue_io_enq_bits_0_1_hor_sign = io_in_bits_0_1_hor_sign; // @[FP_GEMM.scala 109:21]
  assign inputQueue_io_enq_bits_0_1_hor_man = io_in_bits_0_1_hor_man; // @[FP_GEMM.scala 109:21]
  assign inputQueue_io_enq_bits_0_1_hor_exp = io_in_bits_0_1_hor_exp; // @[FP_GEMM.scala 109:21]
  assign inputQueue_io_enq_bits_0_1_ver_sign = io_in_bits_0_1_ver_sign; // @[FP_GEMM.scala 109:21]
  assign inputQueue_io_enq_bits_0_1_ver_man = io_in_bits_0_1_ver_man; // @[FP_GEMM.scala 109:21]
  assign inputQueue_io_enq_bits_0_1_ver_exp = io_in_bits_0_1_ver_exp; // @[FP_GEMM.scala 109:21]
  assign inputQueue_io_enq_bits_1_0_hor_sign = io_in_bits_1_0_hor_sign; // @[FP_GEMM.scala 109:21]
  assign inputQueue_io_enq_bits_1_0_hor_man = io_in_bits_1_0_hor_man; // @[FP_GEMM.scala 109:21]
  assign inputQueue_io_enq_bits_1_0_hor_exp = io_in_bits_1_0_hor_exp; // @[FP_GEMM.scala 109:21]
  assign inputQueue_io_enq_bits_1_0_ver_sign = io_in_bits_1_0_ver_sign; // @[FP_GEMM.scala 109:21]
  assign inputQueue_io_enq_bits_1_0_ver_man = io_in_bits_1_0_ver_man; // @[FP_GEMM.scala 109:21]
  assign inputQueue_io_enq_bits_1_0_ver_exp = io_in_bits_1_0_ver_exp; // @[FP_GEMM.scala 109:21]
  assign inputQueue_io_enq_bits_1_1_hor_sign = io_in_bits_1_1_hor_sign; // @[FP_GEMM.scala 109:21]
  assign inputQueue_io_enq_bits_1_1_hor_man = io_in_bits_1_1_hor_man; // @[FP_GEMM.scala 109:21]
  assign inputQueue_io_enq_bits_1_1_hor_exp = io_in_bits_1_1_hor_exp; // @[FP_GEMM.scala 109:21]
  assign inputQueue_io_enq_bits_1_1_ver_sign = io_in_bits_1_1_ver_sign; // @[FP_GEMM.scala 109:21]
  assign inputQueue_io_enq_bits_1_1_ver_man = io_in_bits_1_1_ver_man; // @[FP_GEMM.scala 109:21]
  assign inputQueue_io_enq_bits_1_1_ver_exp = io_in_bits_1_1_ver_exp; // @[FP_GEMM.scala 109:21]
  assign inputQueue_io_deq_ready = 1'h1; // @[FP_GEMM.scala 107:27]
  always @(posedge clock) begin
    if (reset) begin // @[FP_GEMM.scala 111:24]
      counter <= 1'h0; // @[FP_GEMM.scala 111:24]
    end else if (inputQueue_io_deq_valid & inputQueue_io_deq_ready) begin // @[FP_GEMM.scala 119:60]
      counter <= counter + 1'h1; // @[FP_GEMM.scala 120:13]
    end
    pes_1_0_io_in_hor_r <= inputQueue_io_deq_valid; // @[Reg.scala 19:16 20:{18,22}]
    if (counter) begin // @[Reg.scala 20:22]
      pes_1_0_io_in_hor_r_1_sign <= inputQueue_io_deq_bits_1_1_hor_sign; // @[Reg.scala 20:22]
    end else begin
      pes_1_0_io_in_hor_r_1_sign <= inputQueue_io_deq_bits_1_0_hor_sign;
    end
    if (counter) begin // @[Reg.scala 20:22]
      pes_1_0_io_in_hor_r_1_man <= inputQueue_io_deq_bits_1_1_hor_man; // @[Reg.scala 20:22]
    end else begin
      pes_1_0_io_in_hor_r_1_man <= _GEN_15;
    end
    if (counter) begin // @[Reg.scala 20:22]
      pes_1_0_io_in_hor_r_1_exp <= inputQueue_io_deq_bits_1_1_hor_exp; // @[Reg.scala 20:22]
    end else begin
      pes_1_0_io_in_hor_r_1_exp <= _GEN_17;
    end
    pes_0_1_io_in_ver_r <= inputQueue_io_deq_valid; // @[Reg.scala 19:16 20:{18,22}]
    if (counter) begin // @[Reg.scala 20:22]
      pes_0_1_io_in_ver_r_1_sign <= inputQueue_io_deq_bits_1_1_ver_sign; // @[Reg.scala 20:22]
    end else begin
      pes_0_1_io_in_ver_r_1_sign <= inputQueue_io_deq_bits_0_1_ver_sign;
    end
    if (counter) begin // @[Reg.scala 20:22]
      pes_0_1_io_in_ver_r_1_man <= inputQueue_io_deq_bits_1_1_ver_man; // @[Reg.scala 20:22]
    end else begin
      pes_0_1_io_in_ver_r_1_man <= _GEN_28;
    end
    if (counter) begin // @[Reg.scala 20:22]
      pes_0_1_io_in_ver_r_1_exp <= inputQueue_io_deq_bits_1_1_ver_exp; // @[Reg.scala 20:22]
    end else begin
      pes_0_1_io_in_ver_r_1_exp <= _GEN_30;
    end
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
  counter = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  pes_1_0_io_in_hor_r = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  pes_1_0_io_in_hor_r_1_sign = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  pes_1_0_io_in_hor_r_1_man = _RAND_3[4:0];
  _RAND_4 = {1{`RANDOM}};
  pes_1_0_io_in_hor_r_1_exp = _RAND_4[7:0];
  _RAND_5 = {1{`RANDOM}};
  pes_0_1_io_in_ver_r = _RAND_5[0:0];
  _RAND_6 = {1{`RANDOM}};
  pes_0_1_io_in_ver_r_1_sign = _RAND_6[0:0];
  _RAND_7 = {1{`RANDOM}};
  pes_0_1_io_in_ver_r_1_man = _RAND_7[4:0];
  _RAND_8 = {1{`RANDOM}};
  pes_0_1_io_in_ver_r_1_exp = _RAND_8[7:0];
  _RAND_9 = {1{`RANDOM}};
  pes_0_1_io_in_hor_r_sign = _RAND_9[0:0];
  _RAND_10 = {1{`RANDOM}};
  pes_0_1_io_in_hor_r_man = _RAND_10[4:0];
  _RAND_11 = {1{`RANDOM}};
  pes_0_1_io_in_hor_r_exp = _RAND_11[7:0];
  _RAND_12 = {1{`RANDOM}};
  pes_1_1_io_in_hor_r_sign = _RAND_12[0:0];
  _RAND_13 = {1{`RANDOM}};
  pes_1_1_io_in_hor_r_man = _RAND_13[4:0];
  _RAND_14 = {1{`RANDOM}};
  pes_1_1_io_in_hor_r_exp = _RAND_14[7:0];
  _RAND_15 = {1{`RANDOM}};
  pes_1_0_io_in_ver_r_sign = _RAND_15[0:0];
  _RAND_16 = {1{`RANDOM}};
  pes_1_0_io_in_ver_r_man = _RAND_16[4:0];
  _RAND_17 = {1{`RANDOM}};
  pes_1_0_io_in_ver_r_exp = _RAND_17[7:0];
  _RAND_18 = {1{`RANDOM}};
  pes_1_1_io_in_ver_r_sign = _RAND_18[0:0];
  _RAND_19 = {1{`RANDOM}};
  pes_1_1_io_in_ver_r_man = _RAND_19[4:0];
  _RAND_20 = {1{`RANDOM}};
  pes_1_1_io_in_ver_r_exp = _RAND_20[7:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
