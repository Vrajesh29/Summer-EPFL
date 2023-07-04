module HBFP(
  input         clock,
  input         reset,
  input  [4:0]  io_man_0,
  input  [4:0]  io_man_1,
  input  [4:0]  io_man_2,
  input  [4:0]  io_man_3,
  input  [7:0]  io_exp_0,
  input  [7:0]  io_exp_1,
  input         io_signs_0,
  input         io_signs_1,
  input         io_signs_2,
  input         io_signs_3,
  output [13:0] io_result
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  reg [7:0] exp_output; // @[mult.scala 14:23]
  wire [9:0] _mant_total2_T = io_man_0 * io_man_2; // @[mult.scala 24:34]
  wire  si = io_signs_0 ^ io_signs_2; // @[mult.scala 26:28]
  wire  sa = io_signs_1 ^ io_signs_3; // @[mult.scala 29:34]
  wire [9:0] ma1 = io_man_1 * io_man_3; // @[mult.scala 30:33]
  wire [11:0] mant_total_0 = {{2'd0}, _mant_total2_T}; // @[mult.scala 20:24 25:17]
  wire [11:0] _GEN_0 = {{2'd0}, ma1}; // @[mult.scala 35:51]
  wire [11:0] _mant_total2_T_3 = mant_total_0 + _GEN_0; // @[mult.scala 35:51]
  wire  _mant_total2_T_4 = _GEN_0 > mant_total_0; // @[mult.scala 35:66]
  wire [11:0] _mant_total2_T_6 = _GEN_0 - mant_total_0; // @[mult.scala 35:89]
  wire [11:0] _mant_total2_T_8 = mant_total_0 - _GEN_0; // @[mult.scala 35:124]
  wire [11:0] _mant_total2_T_9 = _GEN_0 > mant_total_0 ? _mant_total2_T_6 : _mant_total2_T_8; // @[mult.scala 35:61]
  wire [11:0] mant_total2 = sa == si ? _mant_total2_T_3 : _mant_total2_T_9; // @[mult.scala 35:23]
  wire  sign_final = _mant_total2_T_4 ? sa : si; // @[mult.scala 45:22]
  wire [8:0] _io_result_T = {sign_final,exp_output}; // @[mult.scala 51:27]
  assign io_result = {_io_result_T,mant_total2[4:0]}; // @[mult.scala 51:41]
  always @(posedge clock) begin
    exp_output <= io_exp_0 + io_exp_1; // @[mult.scala 15:24]
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
  exp_output = _RAND_0[7:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
