module ProcElem(
  input         clock,
  input         reset,
  input  [7:0]  io_in_h,
  input  [7:0]  io_in_v,
  output [15:0] io_out_h,
  output [15:0] io_out_v,
  output [15:0] io_out
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
`endif // RANDOMIZE_REG_INIT
  reg [15:0] res; // @[MatMul.scala 20:21]
  reg [7:0] hreg; // @[MatMul.scala 21:21]
  reg [7:0] vreg; // @[MatMul.scala 22:21]
  wire [15:0] _res_T = io_in_h * io_in_v; // @[MatMul.scala 25:25]
  wire [15:0] _res_T_2 = res + _res_T; // @[MatMul.scala 25:14]
  assign io_out_h = {{8'd0}, hreg}; // @[MatMul.scala 31:12]
  assign io_out_v = {{8'd0}, vreg}; // @[MatMul.scala 32:12]
  assign io_out = res; // @[MatMul.scala 33:10]
  always @(posedge clock) begin
    if (reset) begin // @[MatMul.scala 20:21]
      res <= 16'h0; // @[MatMul.scala 20:21]
    end else begin
      res <= _res_T_2; // @[MatMul.scala 25:7]
    end
    if (reset) begin // @[MatMul.scala 21:21]
      hreg <= 8'h0; // @[MatMul.scala 21:21]
    end else begin
      hreg <= io_in_h; // @[MatMul.scala 28:8]
    end
    if (reset) begin // @[MatMul.scala 22:21]
      vreg <= 8'h0; // @[MatMul.scala 22:21]
    end else begin
      vreg <= io_in_v; // @[MatMul.scala 29:8]
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
  res = _RAND_0[15:0];
  _RAND_1 = {1{`RANDOM}};
  hreg = _RAND_1[7:0];
  _RAND_2 = {1{`RANDOM}};
  vreg = _RAND_2[7:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module SMatMul(
  input         clock,
  input         reset,
  input  [7:0]  io_in_a_0,
  input  [7:0]  io_in_a_1,
  input  [7:0]  io_in_a_2,
  input  [7:0]  io_in_a_3,
  input  [7:0]  io_in_b_0,
  input  [7:0]  io_in_b_1,
  input  [7:0]  io_in_b_2,
  input  [7:0]  io_in_b_3,
  output [15:0] io_out_0,
  output [15:0] io_out_1,
  output [15:0] io_out_2,
  output [15:0] io_out_3,
  output [15:0] io_out_4,
  output [15:0] io_out_5,
  output [15:0] io_out_6,
  output [15:0] io_out_7,
  output [15:0] io_out_8,
  output [15:0] io_out_9,
  output [15:0] io_out_10,
  output [15:0] io_out_11,
  output [15:0] io_out_12,
  output [15:0] io_out_13,
  output [15:0] io_out_14,
  output [15:0] io_out_15
);
  wire  ProcElem_clock; // @[MatMul.scala 43:47]
  wire  ProcElem_reset; // @[MatMul.scala 43:47]
  wire [7:0] ProcElem_io_in_h; // @[MatMul.scala 43:47]
  wire [7:0] ProcElem_io_in_v; // @[MatMul.scala 43:47]
  wire [15:0] ProcElem_io_out_h; // @[MatMul.scala 43:47]
  wire [15:0] ProcElem_io_out_v; // @[MatMul.scala 43:47]
  wire [15:0] ProcElem_io_out; // @[MatMul.scala 43:47]
  wire  ProcElem_1_clock; // @[MatMul.scala 43:47]
  wire  ProcElem_1_reset; // @[MatMul.scala 43:47]
  wire [7:0] ProcElem_1_io_in_h; // @[MatMul.scala 43:47]
  wire [7:0] ProcElem_1_io_in_v; // @[MatMul.scala 43:47]
  wire [15:0] ProcElem_1_io_out_h; // @[MatMul.scala 43:47]
  wire [15:0] ProcElem_1_io_out_v; // @[MatMul.scala 43:47]
  wire [15:0] ProcElem_1_io_out; // @[MatMul.scala 43:47]
  wire  ProcElem_2_clock; // @[MatMul.scala 43:47]
  wire  ProcElem_2_reset; // @[MatMul.scala 43:47]
  wire [7:0] ProcElem_2_io_in_h; // @[MatMul.scala 43:47]
  wire [7:0] ProcElem_2_io_in_v; // @[MatMul.scala 43:47]
  wire [15:0] ProcElem_2_io_out_h; // @[MatMul.scala 43:47]
  wire [15:0] ProcElem_2_io_out_v; // @[MatMul.scala 43:47]
  wire [15:0] ProcElem_2_io_out; // @[MatMul.scala 43:47]
  wire  ProcElem_3_clock; // @[MatMul.scala 43:47]
  wire  ProcElem_3_reset; // @[MatMul.scala 43:47]
  wire [7:0] ProcElem_3_io_in_h; // @[MatMul.scala 43:47]
  wire [7:0] ProcElem_3_io_in_v; // @[MatMul.scala 43:47]
  wire [15:0] ProcElem_3_io_out_h; // @[MatMul.scala 43:47]
  wire [15:0] ProcElem_3_io_out_v; // @[MatMul.scala 43:47]
  wire [15:0] ProcElem_3_io_out; // @[MatMul.scala 43:47]
  wire  ProcElem_4_clock; // @[MatMul.scala 43:47]
  wire  ProcElem_4_reset; // @[MatMul.scala 43:47]
  wire [7:0] ProcElem_4_io_in_h; // @[MatMul.scala 43:47]
  wire [7:0] ProcElem_4_io_in_v; // @[MatMul.scala 43:47]
  wire [15:0] ProcElem_4_io_out_h; // @[MatMul.scala 43:47]
  wire [15:0] ProcElem_4_io_out_v; // @[MatMul.scala 43:47]
  wire [15:0] ProcElem_4_io_out; // @[MatMul.scala 43:47]
  wire  ProcElem_5_clock; // @[MatMul.scala 43:47]
  wire  ProcElem_5_reset; // @[MatMul.scala 43:47]
  wire [7:0] ProcElem_5_io_in_h; // @[MatMul.scala 43:47]
  wire [7:0] ProcElem_5_io_in_v; // @[MatMul.scala 43:47]
  wire [15:0] ProcElem_5_io_out_h; // @[MatMul.scala 43:47]
  wire [15:0] ProcElem_5_io_out_v; // @[MatMul.scala 43:47]
  wire [15:0] ProcElem_5_io_out; // @[MatMul.scala 43:47]
  wire  ProcElem_6_clock; // @[MatMul.scala 43:47]
  wire  ProcElem_6_reset; // @[MatMul.scala 43:47]
  wire [7:0] ProcElem_6_io_in_h; // @[MatMul.scala 43:47]
  wire [7:0] ProcElem_6_io_in_v; // @[MatMul.scala 43:47]
  wire [15:0] ProcElem_6_io_out_h; // @[MatMul.scala 43:47]
  wire [15:0] ProcElem_6_io_out_v; // @[MatMul.scala 43:47]
  wire [15:0] ProcElem_6_io_out; // @[MatMul.scala 43:47]
  wire  ProcElem_7_clock; // @[MatMul.scala 43:47]
  wire  ProcElem_7_reset; // @[MatMul.scala 43:47]
  wire [7:0] ProcElem_7_io_in_h; // @[MatMul.scala 43:47]
  wire [7:0] ProcElem_7_io_in_v; // @[MatMul.scala 43:47]
  wire [15:0] ProcElem_7_io_out_h; // @[MatMul.scala 43:47]
  wire [15:0] ProcElem_7_io_out_v; // @[MatMul.scala 43:47]
  wire [15:0] ProcElem_7_io_out; // @[MatMul.scala 43:47]
  wire  ProcElem_8_clock; // @[MatMul.scala 43:47]
  wire  ProcElem_8_reset; // @[MatMul.scala 43:47]
  wire [7:0] ProcElem_8_io_in_h; // @[MatMul.scala 43:47]
  wire [7:0] ProcElem_8_io_in_v; // @[MatMul.scala 43:47]
  wire [15:0] ProcElem_8_io_out_h; // @[MatMul.scala 43:47]
  wire [15:0] ProcElem_8_io_out_v; // @[MatMul.scala 43:47]
  wire [15:0] ProcElem_8_io_out; // @[MatMul.scala 43:47]
  wire  ProcElem_9_clock; // @[MatMul.scala 43:47]
  wire  ProcElem_9_reset; // @[MatMul.scala 43:47]
  wire [7:0] ProcElem_9_io_in_h; // @[MatMul.scala 43:47]
  wire [7:0] ProcElem_9_io_in_v; // @[MatMul.scala 43:47]
  wire [15:0] ProcElem_9_io_out_h; // @[MatMul.scala 43:47]
  wire [15:0] ProcElem_9_io_out_v; // @[MatMul.scala 43:47]
  wire [15:0] ProcElem_9_io_out; // @[MatMul.scala 43:47]
  wire  ProcElem_10_clock; // @[MatMul.scala 43:47]
  wire  ProcElem_10_reset; // @[MatMul.scala 43:47]
  wire [7:0] ProcElem_10_io_in_h; // @[MatMul.scala 43:47]
  wire [7:0] ProcElem_10_io_in_v; // @[MatMul.scala 43:47]
  wire [15:0] ProcElem_10_io_out_h; // @[MatMul.scala 43:47]
  wire [15:0] ProcElem_10_io_out_v; // @[MatMul.scala 43:47]
  wire [15:0] ProcElem_10_io_out; // @[MatMul.scala 43:47]
  wire  ProcElem_11_clock; // @[MatMul.scala 43:47]
  wire  ProcElem_11_reset; // @[MatMul.scala 43:47]
  wire [7:0] ProcElem_11_io_in_h; // @[MatMul.scala 43:47]
  wire [7:0] ProcElem_11_io_in_v; // @[MatMul.scala 43:47]
  wire [15:0] ProcElem_11_io_out_h; // @[MatMul.scala 43:47]
  wire [15:0] ProcElem_11_io_out_v; // @[MatMul.scala 43:47]
  wire [15:0] ProcElem_11_io_out; // @[MatMul.scala 43:47]
  wire  ProcElem_12_clock; // @[MatMul.scala 43:47]
  wire  ProcElem_12_reset; // @[MatMul.scala 43:47]
  wire [7:0] ProcElem_12_io_in_h; // @[MatMul.scala 43:47]
  wire [7:0] ProcElem_12_io_in_v; // @[MatMul.scala 43:47]
  wire [15:0] ProcElem_12_io_out_h; // @[MatMul.scala 43:47]
  wire [15:0] ProcElem_12_io_out_v; // @[MatMul.scala 43:47]
  wire [15:0] ProcElem_12_io_out; // @[MatMul.scala 43:47]
  wire  ProcElem_13_clock; // @[MatMul.scala 43:47]
  wire  ProcElem_13_reset; // @[MatMul.scala 43:47]
  wire [7:0] ProcElem_13_io_in_h; // @[MatMul.scala 43:47]
  wire [7:0] ProcElem_13_io_in_v; // @[MatMul.scala 43:47]
  wire [15:0] ProcElem_13_io_out_h; // @[MatMul.scala 43:47]
  wire [15:0] ProcElem_13_io_out_v; // @[MatMul.scala 43:47]
  wire [15:0] ProcElem_13_io_out; // @[MatMul.scala 43:47]
  wire  ProcElem_14_clock; // @[MatMul.scala 43:47]
  wire  ProcElem_14_reset; // @[MatMul.scala 43:47]
  wire [7:0] ProcElem_14_io_in_h; // @[MatMul.scala 43:47]
  wire [7:0] ProcElem_14_io_in_v; // @[MatMul.scala 43:47]
  wire [15:0] ProcElem_14_io_out_h; // @[MatMul.scala 43:47]
  wire [15:0] ProcElem_14_io_out_v; // @[MatMul.scala 43:47]
  wire [15:0] ProcElem_14_io_out; // @[MatMul.scala 43:47]
  wire  ProcElem_15_clock; // @[MatMul.scala 43:47]
  wire  ProcElem_15_reset; // @[MatMul.scala 43:47]
  wire [7:0] ProcElem_15_io_in_h; // @[MatMul.scala 43:47]
  wire [7:0] ProcElem_15_io_in_v; // @[MatMul.scala 43:47]
  wire [15:0] ProcElem_15_io_out_h; // @[MatMul.scala 43:47]
  wire [15:0] ProcElem_15_io_out_v; // @[MatMul.scala 43:47]
  wire [15:0] ProcElem_15_io_out; // @[MatMul.scala 43:47]
  wire [15:0] p_elems_0_out_h = ProcElem_io_out_h; // @[MatMul.scala 43:{24,24}]
  wire [15:0] p_elems_0_out_v = ProcElem_io_out_v; // @[MatMul.scala 43:{24,24}]
  wire [15:0] p_elems_1_out_h = ProcElem_1_io_out_h; // @[MatMul.scala 43:{24,24}]
  wire [15:0] p_elems_1_out_v = ProcElem_1_io_out_v; // @[MatMul.scala 43:{24,24}]
  wire [15:0] p_elems_2_out_h = ProcElem_2_io_out_h; // @[MatMul.scala 43:{24,24}]
  wire [15:0] p_elems_2_out_v = ProcElem_2_io_out_v; // @[MatMul.scala 43:{24,24}]
  wire [15:0] p_elems_3_out_v = ProcElem_3_io_out_v; // @[MatMul.scala 43:{24,24}]
  wire [15:0] p_elems_4_out_h = ProcElem_4_io_out_h; // @[MatMul.scala 43:{24,24}]
  wire [15:0] p_elems_4_out_v = ProcElem_4_io_out_v; // @[MatMul.scala 43:{24,24}]
  wire [15:0] p_elems_5_out_h = ProcElem_5_io_out_h; // @[MatMul.scala 43:{24,24}]
  wire [15:0] p_elems_5_out_v = ProcElem_5_io_out_v; // @[MatMul.scala 43:{24,24}]
  wire [15:0] p_elems_6_out_h = ProcElem_6_io_out_h; // @[MatMul.scala 43:{24,24}]
  wire [15:0] p_elems_6_out_v = ProcElem_6_io_out_v; // @[MatMul.scala 43:{24,24}]
  wire [15:0] p_elems_7_out_v = ProcElem_7_io_out_v; // @[MatMul.scala 43:{24,24}]
  wire [15:0] p_elems_8_out_h = ProcElem_8_io_out_h; // @[MatMul.scala 43:{24,24}]
  wire [15:0] p_elems_8_out_v = ProcElem_8_io_out_v; // @[MatMul.scala 43:{24,24}]
  wire [15:0] p_elems_9_out_h = ProcElem_9_io_out_h; // @[MatMul.scala 43:{24,24}]
  wire [15:0] p_elems_9_out_v = ProcElem_9_io_out_v; // @[MatMul.scala 43:{24,24}]
  wire [15:0] p_elems_10_out_h = ProcElem_10_io_out_h; // @[MatMul.scala 43:{24,24}]
  wire [15:0] p_elems_10_out_v = ProcElem_10_io_out_v; // @[MatMul.scala 43:{24,24}]
  wire [15:0] p_elems_11_out_v = ProcElem_11_io_out_v; // @[MatMul.scala 43:{24,24}]
  wire [15:0] p_elems_12_out_h = ProcElem_12_io_out_h; // @[MatMul.scala 43:{24,24}]
  wire [15:0] p_elems_13_out_h = ProcElem_13_io_out_h; // @[MatMul.scala 43:{24,24}]
  wire [15:0] p_elems_14_out_h = ProcElem_14_io_out_h; // @[MatMul.scala 43:{24,24}]
  ProcElem ProcElem ( // @[MatMul.scala 43:47]
    .clock(ProcElem_clock),
    .reset(ProcElem_reset),
    .io_in_h(ProcElem_io_in_h),
    .io_in_v(ProcElem_io_in_v),
    .io_out_h(ProcElem_io_out_h),
    .io_out_v(ProcElem_io_out_v),
    .io_out(ProcElem_io_out)
  );
  ProcElem ProcElem_1 ( // @[MatMul.scala 43:47]
    .clock(ProcElem_1_clock),
    .reset(ProcElem_1_reset),
    .io_in_h(ProcElem_1_io_in_h),
    .io_in_v(ProcElem_1_io_in_v),
    .io_out_h(ProcElem_1_io_out_h),
    .io_out_v(ProcElem_1_io_out_v),
    .io_out(ProcElem_1_io_out)
  );
  ProcElem ProcElem_2 ( // @[MatMul.scala 43:47]
    .clock(ProcElem_2_clock),
    .reset(ProcElem_2_reset),
    .io_in_h(ProcElem_2_io_in_h),
    .io_in_v(ProcElem_2_io_in_v),
    .io_out_h(ProcElem_2_io_out_h),
    .io_out_v(ProcElem_2_io_out_v),
    .io_out(ProcElem_2_io_out)
  );
  ProcElem ProcElem_3 ( // @[MatMul.scala 43:47]
    .clock(ProcElem_3_clock),
    .reset(ProcElem_3_reset),
    .io_in_h(ProcElem_3_io_in_h),
    .io_in_v(ProcElem_3_io_in_v),
    .io_out_h(ProcElem_3_io_out_h),
    .io_out_v(ProcElem_3_io_out_v),
    .io_out(ProcElem_3_io_out)
  );
  ProcElem ProcElem_4 ( // @[MatMul.scala 43:47]
    .clock(ProcElem_4_clock),
    .reset(ProcElem_4_reset),
    .io_in_h(ProcElem_4_io_in_h),
    .io_in_v(ProcElem_4_io_in_v),
    .io_out_h(ProcElem_4_io_out_h),
    .io_out_v(ProcElem_4_io_out_v),
    .io_out(ProcElem_4_io_out)
  );
  ProcElem ProcElem_5 ( // @[MatMul.scala 43:47]
    .clock(ProcElem_5_clock),
    .reset(ProcElem_5_reset),
    .io_in_h(ProcElem_5_io_in_h),
    .io_in_v(ProcElem_5_io_in_v),
    .io_out_h(ProcElem_5_io_out_h),
    .io_out_v(ProcElem_5_io_out_v),
    .io_out(ProcElem_5_io_out)
  );
  ProcElem ProcElem_6 ( // @[MatMul.scala 43:47]
    .clock(ProcElem_6_clock),
    .reset(ProcElem_6_reset),
    .io_in_h(ProcElem_6_io_in_h),
    .io_in_v(ProcElem_6_io_in_v),
    .io_out_h(ProcElem_6_io_out_h),
    .io_out_v(ProcElem_6_io_out_v),
    .io_out(ProcElem_6_io_out)
  );
  ProcElem ProcElem_7 ( // @[MatMul.scala 43:47]
    .clock(ProcElem_7_clock),
    .reset(ProcElem_7_reset),
    .io_in_h(ProcElem_7_io_in_h),
    .io_in_v(ProcElem_7_io_in_v),
    .io_out_h(ProcElem_7_io_out_h),
    .io_out_v(ProcElem_7_io_out_v),
    .io_out(ProcElem_7_io_out)
  );
  ProcElem ProcElem_8 ( // @[MatMul.scala 43:47]
    .clock(ProcElem_8_clock),
    .reset(ProcElem_8_reset),
    .io_in_h(ProcElem_8_io_in_h),
    .io_in_v(ProcElem_8_io_in_v),
    .io_out_h(ProcElem_8_io_out_h),
    .io_out_v(ProcElem_8_io_out_v),
    .io_out(ProcElem_8_io_out)
  );
  ProcElem ProcElem_9 ( // @[MatMul.scala 43:47]
    .clock(ProcElem_9_clock),
    .reset(ProcElem_9_reset),
    .io_in_h(ProcElem_9_io_in_h),
    .io_in_v(ProcElem_9_io_in_v),
    .io_out_h(ProcElem_9_io_out_h),
    .io_out_v(ProcElem_9_io_out_v),
    .io_out(ProcElem_9_io_out)
  );
  ProcElem ProcElem_10 ( // @[MatMul.scala 43:47]
    .clock(ProcElem_10_clock),
    .reset(ProcElem_10_reset),
    .io_in_h(ProcElem_10_io_in_h),
    .io_in_v(ProcElem_10_io_in_v),
    .io_out_h(ProcElem_10_io_out_h),
    .io_out_v(ProcElem_10_io_out_v),
    .io_out(ProcElem_10_io_out)
  );
  ProcElem ProcElem_11 ( // @[MatMul.scala 43:47]
    .clock(ProcElem_11_clock),
    .reset(ProcElem_11_reset),
    .io_in_h(ProcElem_11_io_in_h),
    .io_in_v(ProcElem_11_io_in_v),
    .io_out_h(ProcElem_11_io_out_h),
    .io_out_v(ProcElem_11_io_out_v),
    .io_out(ProcElem_11_io_out)
  );
  ProcElem ProcElem_12 ( // @[MatMul.scala 43:47]
    .clock(ProcElem_12_clock),
    .reset(ProcElem_12_reset),
    .io_in_h(ProcElem_12_io_in_h),
    .io_in_v(ProcElem_12_io_in_v),
    .io_out_h(ProcElem_12_io_out_h),
    .io_out_v(ProcElem_12_io_out_v),
    .io_out(ProcElem_12_io_out)
  );
  ProcElem ProcElem_13 ( // @[MatMul.scala 43:47]
    .clock(ProcElem_13_clock),
    .reset(ProcElem_13_reset),
    .io_in_h(ProcElem_13_io_in_h),
    .io_in_v(ProcElem_13_io_in_v),
    .io_out_h(ProcElem_13_io_out_h),
    .io_out_v(ProcElem_13_io_out_v),
    .io_out(ProcElem_13_io_out)
  );
  ProcElem ProcElem_14 ( // @[MatMul.scala 43:47]
    .clock(ProcElem_14_clock),
    .reset(ProcElem_14_reset),
    .io_in_h(ProcElem_14_io_in_h),
    .io_in_v(ProcElem_14_io_in_v),
    .io_out_h(ProcElem_14_io_out_h),
    .io_out_v(ProcElem_14_io_out_v),
    .io_out(ProcElem_14_io_out)
  );
  ProcElem ProcElem_15 ( // @[MatMul.scala 43:47]
    .clock(ProcElem_15_clock),
    .reset(ProcElem_15_reset),
    .io_in_h(ProcElem_15_io_in_h),
    .io_in_v(ProcElem_15_io_in_v),
    .io_out_h(ProcElem_15_io_out_h),
    .io_out_v(ProcElem_15_io_out_v),
    .io_out(ProcElem_15_io_out)
  );
  assign io_out_0 = ProcElem_io_out; // @[MatMul.scala 43:{24,24}]
  assign io_out_1 = ProcElem_1_io_out; // @[MatMul.scala 43:{24,24}]
  assign io_out_2 = ProcElem_2_io_out; // @[MatMul.scala 43:{24,24}]
  assign io_out_3 = ProcElem_3_io_out; // @[MatMul.scala 43:{24,24}]
  assign io_out_4 = ProcElem_4_io_out; // @[MatMul.scala 43:{24,24}]
  assign io_out_5 = ProcElem_5_io_out; // @[MatMul.scala 43:{24,24}]
  assign io_out_6 = ProcElem_6_io_out; // @[MatMul.scala 43:{24,24}]
  assign io_out_7 = ProcElem_7_io_out; // @[MatMul.scala 43:{24,24}]
  assign io_out_8 = ProcElem_8_io_out; // @[MatMul.scala 43:{24,24}]
  assign io_out_9 = ProcElem_9_io_out; // @[MatMul.scala 43:{24,24}]
  assign io_out_10 = ProcElem_10_io_out; // @[MatMul.scala 43:{24,24}]
  assign io_out_11 = ProcElem_11_io_out; // @[MatMul.scala 43:{24,24}]
  assign io_out_12 = ProcElem_12_io_out; // @[MatMul.scala 43:{24,24}]
  assign io_out_13 = ProcElem_13_io_out; // @[MatMul.scala 43:{24,24}]
  assign io_out_14 = ProcElem_14_io_out; // @[MatMul.scala 43:{24,24}]
  assign io_out_15 = ProcElem_15_io_out; // @[MatMul.scala 43:{24,24}]
  assign ProcElem_clock = clock;
  assign ProcElem_reset = reset;
  assign ProcElem_io_in_h = io_in_a_0; // @[MatMul.scala 43:24 58:42]
  assign ProcElem_io_in_v = io_in_b_0; // @[MatMul.scala 43:24 63:42]
  assign ProcElem_1_clock = clock;
  assign ProcElem_1_reset = reset;
  assign ProcElem_1_io_in_h = p_elems_0_out_h[7:0]; // @[MatMul.scala 44:21 61:49]
  assign ProcElem_1_io_in_v = io_in_b_1; // @[MatMul.scala 43:24 63:42]
  assign ProcElem_2_clock = clock;
  assign ProcElem_2_reset = reset;
  assign ProcElem_2_io_in_h = p_elems_1_out_h[7:0]; // @[MatMul.scala 44:21 61:49]
  assign ProcElem_2_io_in_v = io_in_b_2; // @[MatMul.scala 43:24 63:42]
  assign ProcElem_3_clock = clock;
  assign ProcElem_3_reset = reset;
  assign ProcElem_3_io_in_h = p_elems_2_out_h[7:0]; // @[MatMul.scala 44:21 61:49]
  assign ProcElem_3_io_in_v = io_in_b_3; // @[MatMul.scala 43:24 63:42]
  assign ProcElem_4_clock = clock;
  assign ProcElem_4_reset = reset;
  assign ProcElem_4_io_in_h = io_in_a_1; // @[MatMul.scala 43:24 58:42]
  assign ProcElem_4_io_in_v = p_elems_0_out_v[7:0]; // @[MatMul.scala 45:21 66:49]
  assign ProcElem_5_clock = clock;
  assign ProcElem_5_reset = reset;
  assign ProcElem_5_io_in_h = p_elems_4_out_h[7:0]; // @[MatMul.scala 44:21 61:49]
  assign ProcElem_5_io_in_v = p_elems_1_out_v[7:0]; // @[MatMul.scala 45:21 66:49]
  assign ProcElem_6_clock = clock;
  assign ProcElem_6_reset = reset;
  assign ProcElem_6_io_in_h = p_elems_5_out_h[7:0]; // @[MatMul.scala 44:21 61:49]
  assign ProcElem_6_io_in_v = p_elems_2_out_v[7:0]; // @[MatMul.scala 45:21 66:49]
  assign ProcElem_7_clock = clock;
  assign ProcElem_7_reset = reset;
  assign ProcElem_7_io_in_h = p_elems_6_out_h[7:0]; // @[MatMul.scala 44:21 61:49]
  assign ProcElem_7_io_in_v = p_elems_3_out_v[7:0]; // @[MatMul.scala 45:21 66:49]
  assign ProcElem_8_clock = clock;
  assign ProcElem_8_reset = reset;
  assign ProcElem_8_io_in_h = io_in_a_2; // @[MatMul.scala 43:24 58:42]
  assign ProcElem_8_io_in_v = p_elems_4_out_v[7:0]; // @[MatMul.scala 45:21 66:49]
  assign ProcElem_9_clock = clock;
  assign ProcElem_9_reset = reset;
  assign ProcElem_9_io_in_h = p_elems_8_out_h[7:0]; // @[MatMul.scala 44:21 61:49]
  assign ProcElem_9_io_in_v = p_elems_5_out_v[7:0]; // @[MatMul.scala 45:21 66:49]
  assign ProcElem_10_clock = clock;
  assign ProcElem_10_reset = reset;
  assign ProcElem_10_io_in_h = p_elems_9_out_h[7:0]; // @[MatMul.scala 44:21 61:49]
  assign ProcElem_10_io_in_v = p_elems_6_out_v[7:0]; // @[MatMul.scala 45:21 66:49]
  assign ProcElem_11_clock = clock;
  assign ProcElem_11_reset = reset;
  assign ProcElem_11_io_in_h = p_elems_10_out_h[7:0]; // @[MatMul.scala 44:21 61:49]
  assign ProcElem_11_io_in_v = p_elems_7_out_v[7:0]; // @[MatMul.scala 45:21 66:49]
  assign ProcElem_12_clock = clock;
  assign ProcElem_12_reset = reset;
  assign ProcElem_12_io_in_h = io_in_a_3; // @[MatMul.scala 43:24 58:42]
  assign ProcElem_12_io_in_v = p_elems_8_out_v[7:0]; // @[MatMul.scala 45:21 66:49]
  assign ProcElem_13_clock = clock;
  assign ProcElem_13_reset = reset;
  assign ProcElem_13_io_in_h = p_elems_12_out_h[7:0]; // @[MatMul.scala 44:21 61:49]
  assign ProcElem_13_io_in_v = p_elems_9_out_v[7:0]; // @[MatMul.scala 45:21 66:49]
  assign ProcElem_14_clock = clock;
  assign ProcElem_14_reset = reset;
  assign ProcElem_14_io_in_h = p_elems_13_out_h[7:0]; // @[MatMul.scala 44:21 61:49]
  assign ProcElem_14_io_in_v = p_elems_10_out_v[7:0]; // @[MatMul.scala 45:21 66:49]
  assign ProcElem_15_clock = clock;
  assign ProcElem_15_reset = reset;
  assign ProcElem_15_io_in_h = p_elems_14_out_h[7:0]; // @[MatMul.scala 44:21 61:49]
  assign ProcElem_15_io_in_v = p_elems_11_out_v[7:0]; // @[MatMul.scala 45:21 66:49]
endmodule
