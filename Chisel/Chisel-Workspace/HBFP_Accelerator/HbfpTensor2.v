module adderTree3(
  input         clock,
  input         reset,
  input  [17:0] io_sign_man_0,
  input  [17:0] io_sign_man_1,
  input  [7:0]  io_exps_0,
  input  [7:0]  io_exps_1,
  output [13:0] io_result_tree
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
`endif // RANDOMIZE_REG_INIT
  reg [7:0] exponent; // @[shit.scala 66:23]
  reg [18:0] sign_mantissa; // @[shit.scala 67:28]
  reg [7:0] exp_buffer_0; // @[shit.scala 82:27]
  reg [18:0] man_buffer_two_complement_0; // @[shit.scala 83:42]
  wire  _exp_buffer_0_T = io_exps_0 > io_exps_1; // @[shit.scala 88:28]
  wire [7:0] _exp_difference_T_2 = io_exps_0 - io_exps_1; // @[shit.scala 94:28]
  wire [7:0] _exp_difference_T_4 = io_exps_1 - io_exps_0; // @[shit.scala 95:32]
  wire [7:0] exp_difference = _exp_buffer_0_T ? _exp_difference_T_2 : _exp_difference_T_4; // @[shit.scala 92:35]
  wire [17:0] _man_buffer_two_complement_0_T_1 = $signed(io_sign_man_1) >>> exp_difference; // @[shit.scala 101:15]
  wire [17:0] _man_buffer_two_complement_0_T_4 = $signed(io_sign_man_0) + $signed(_man_buffer_two_complement_0_T_1); // @[shit.scala 99:32]
  wire [17:0] _man_buffer_two_complement_0_T_5 = $signed(io_sign_man_0) >>> exp_difference; // @[shit.scala 104:15]
  wire [17:0] _man_buffer_two_complement_0_T_8 = $signed(io_sign_man_1) + $signed(_man_buffer_two_complement_0_T_5); // @[shit.scala 102:36]
  wire [17:0] _man_buffer_two_complement_0_T_9 = _exp_buffer_0_T ? $signed(_man_buffer_two_complement_0_T_4) : $signed(
    _man_buffer_two_complement_0_T_8); // @[shit.scala 97:46]
  reg [18:0] sign_man_hbfp; // @[shit.scala 147:30]
  wire [18:0] _sign_man_hbfp_T_3 = {1'h0,sign_mantissa[17:0]}; // @[shit.scala 154:11]
  wire [18:0] _sign_man_hbfp_T_4 = ~_sign_man_hbfp_T_3; // @[shit.scala 154:5]
  wire [18:0] _sign_man_hbfp_T_6 = _sign_man_hbfp_T_4 + 19'h1; // @[shit.scala 157:16]
  reg [7:0] right_shift; // @[shit.scala 161:28]
  reg [7:0] actual_shift; // @[shit.scala 162:29]
  wire [7:0] _GEN_0 = {{4'd0}, sign_man_hbfp[12:9]}; // @[Bitwise.scala 108:31]
  wire [7:0] _buf_T_5 = _GEN_0 & 8'hf; // @[Bitwise.scala 108:31]
  wire [7:0] _buf_T_7 = {sign_man_hbfp[8:5], 4'h0}; // @[Bitwise.scala 108:70]
  wire [7:0] _buf_T_9 = _buf_T_7 & 8'hf0; // @[Bitwise.scala 108:80]
  wire [7:0] _buf_T_10 = _buf_T_5 | _buf_T_9; // @[Bitwise.scala 108:39]
  wire [7:0] _GEN_1 = {{2'd0}, _buf_T_10[7:2]}; // @[Bitwise.scala 108:31]
  wire [7:0] _buf_T_15 = _GEN_1 & 8'h33; // @[Bitwise.scala 108:31]
  wire [7:0] _buf_T_17 = {_buf_T_10[5:0], 2'h0}; // @[Bitwise.scala 108:70]
  wire [7:0] _buf_T_19 = _buf_T_17 & 8'hcc; // @[Bitwise.scala 108:80]
  wire [7:0] _buf_T_20 = _buf_T_15 | _buf_T_19; // @[Bitwise.scala 108:39]
  wire [7:0] _GEN_2 = {{1'd0}, _buf_T_20[7:1]}; // @[Bitwise.scala 108:31]
  wire [7:0] _buf_T_25 = _GEN_2 & 8'h55; // @[Bitwise.scala 108:31]
  wire [7:0] _buf_T_27 = {_buf_T_20[6:0], 1'h0}; // @[Bitwise.scala 108:70]
  wire [7:0] _buf_T_29 = _buf_T_27 & 8'haa; // @[Bitwise.scala 108:80]
  wire [7:0] _buf_T_30 = _buf_T_25 | _buf_T_29; // @[Bitwise.scala 108:39]
  wire [12:0] buf_ = {_buf_T_30,sign_man_hbfp[13],sign_man_hbfp[14],sign_man_hbfp[15],sign_man_hbfp[16],sign_man_hbfp[17
    ]}; // @[Cat.scala 33:92]
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
  wire [7:0] _actual_shift_T_1 = 8'hc - right_shift; // @[shit.scala 169:73]
  wire [18:0] man_out_shifted = sign_man_hbfp >> actual_shift; // @[shit.scala 171:39]
  wire [7:0] _io_result_tree_T_2 = exponent + actual_shift; // @[shit.scala 175:18]
  wire [8:0] _io_result_tree_T_3 = {sign_man_hbfp[18],_io_result_tree_T_2}; // @[shit.scala 175:5]
  assign io_result_tree = {_io_result_tree_T_3,man_out_shifted[4:0]}; // @[shit.scala 175:34]
  always @(posedge clock) begin
    if (reset) begin // @[shit.scala 66:23]
      exponent <= 8'h0; // @[shit.scala 66:23]
    end else begin
      exponent <= exp_buffer_0; // @[shit.scala 141:14]
    end
    if (reset) begin // @[shit.scala 67:28]
      sign_mantissa <= 19'sh0; // @[shit.scala 67:28]
    end else begin
      sign_mantissa <= man_buffer_two_complement_0; // @[shit.scala 142:19]
    end
    if (_exp_buffer_0_T) begin // @[shit.scala 87:31]
      exp_buffer_0 <= io_exps_0;
    end else begin
      exp_buffer_0 <= io_exps_1;
    end
    man_buffer_two_complement_0 <= {{1{_man_buffer_two_complement_0_T_9[17]}},_man_buffer_two_complement_0_T_9}; // @[shit.scala 97:40]
    if (reset) begin // @[shit.scala 147:30]
      sign_man_hbfp <= 19'h0; // @[shit.scala 147:30]
    end else if (sign_mantissa[18]) begin // @[shit.scala 150:23]
      sign_man_hbfp <= _sign_man_hbfp_T_6;
    end else begin
      sign_man_hbfp <= sign_mantissa;
    end
    if (reset) begin // @[shit.scala 161:28]
      right_shift <= 8'h0; // @[shit.scala 161:28]
    end else begin
      right_shift <= {{4'd0}, _right_shift_T_24}; // @[shit.scala 167:15]
    end
    if (reset) begin // @[shit.scala 162:29]
      actual_shift <= 8'h0; // @[shit.scala 162:29]
    end else begin
      actual_shift <= _actual_shift_T_1; // @[shit.scala 169:16]
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
  exponent = _RAND_0[7:0];
  _RAND_1 = {1{`RANDOM}};
  sign_mantissa = _RAND_1[18:0];
  _RAND_2 = {1{`RANDOM}};
  exp_buffer_0 = _RAND_2[7:0];
  _RAND_3 = {1{`RANDOM}};
  man_buffer_two_complement_0 = _RAND_3[18:0];
  _RAND_4 = {1{`RANDOM}};
  sign_man_hbfp = _RAND_4[18:0];
  _RAND_5 = {1{`RANDOM}};
  right_shift = _RAND_5[7:0];
  _RAND_6 = {1{`RANDOM}};
  actual_shift = _RAND_6[7:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module HbfpTensor2(
  input         clock,
  input         reset,
  input  [4:0]  io_man_a_0,
  input  [4:0]  io_man_a_1,
  input  [4:0]  io_man_a_2,
  input  [4:0]  io_man_a_3,
  input  [4:0]  io_man_a_4,
  input  [4:0]  io_man_a_5,
  input  [4:0]  io_man_a_6,
  input  [4:0]  io_man_a_7,
  input  [4:0]  io_man_a_8,
  input  [4:0]  io_man_a_9,
  input  [4:0]  io_man_a_10,
  input  [4:0]  io_man_a_11,
  input  [4:0]  io_man_a_12,
  input  [4:0]  io_man_a_13,
  input  [4:0]  io_man_a_14,
  input  [4:0]  io_man_a_15,
  input  [4:0]  io_man_b_0,
  input  [4:0]  io_man_b_1,
  input  [4:0]  io_man_b_2,
  input  [4:0]  io_man_b_3,
  input  [4:0]  io_man_b_4,
  input  [4:0]  io_man_b_5,
  input  [4:0]  io_man_b_6,
  input  [4:0]  io_man_b_7,
  input  [4:0]  io_man_b_8,
  input  [4:0]  io_man_b_9,
  input  [4:0]  io_man_b_10,
  input  [4:0]  io_man_b_11,
  input  [4:0]  io_man_b_12,
  input  [4:0]  io_man_b_13,
  input  [4:0]  io_man_b_14,
  input  [4:0]  io_man_b_15,
  input         io_sign_a_0,
  input         io_sign_a_1,
  input         io_sign_a_2,
  input         io_sign_a_3,
  input         io_sign_a_4,
  input         io_sign_a_5,
  input         io_sign_a_6,
  input         io_sign_a_7,
  input         io_sign_a_8,
  input         io_sign_a_9,
  input         io_sign_a_10,
  input         io_sign_a_11,
  input         io_sign_a_12,
  input         io_sign_a_13,
  input         io_sign_a_14,
  input         io_sign_a_15,
  input         io_sign_b_0,
  input         io_sign_b_1,
  input         io_sign_b_2,
  input         io_sign_b_3,
  input         io_sign_b_4,
  input         io_sign_b_5,
  input         io_sign_b_6,
  input         io_sign_b_7,
  input         io_sign_b_8,
  input         io_sign_b_9,
  input         io_sign_b_10,
  input         io_sign_b_11,
  input         io_sign_b_12,
  input         io_sign_b_13,
  input         io_sign_b_14,
  input         io_sign_b_15,
  input  [7:0]  io_exp_a_0,
  input  [7:0]  io_exp_a_1,
  input  [7:0]  io_exp_b_0,
  input  [7:0]  io_exp_b_1,
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
`endif // RANDOMIZE_REG_INIT
  wire  adderTreeInst_clock; // @[shit.scala 47:29]
  wire  adderTreeInst_reset; // @[shit.scala 47:29]
  wire [17:0] adderTreeInst_io_sign_man_0; // @[shit.scala 47:29]
  wire [17:0] adderTreeInst_io_sign_man_1; // @[shit.scala 47:29]
  wire [7:0] adderTreeInst_io_exps_0; // @[shit.scala 47:29]
  wire [7:0] adderTreeInst_io_exps_1; // @[shit.scala 47:29]
  wire [13:0] adderTreeInst_io_result_tree; // @[shit.scala 47:29]
  reg [7:0] exp_output_0; // @[shit.scala 17:60]
  reg [7:0] exp_output_1; // @[shit.scala 17:60]
  reg [17:0] acc_0; // @[shit.scala 22:53]
  reg [17:0] acc_1; // @[shit.scala 22:53]
  wire [7:0] _exp_output_0_T_1 = io_exp_a_0 + io_exp_b_0; // @[shit.scala 25:34]
  reg [9:0] dotProductRegs__0; // @[shit.scala 26:29]
  reg [9:0] dotProductRegs__1; // @[shit.scala 26:29]
  reg [9:0] dotProductRegs__2; // @[shit.scala 26:29]
  reg [9:0] dotProductRegs__3; // @[shit.scala 26:29]
  reg [9:0] dotProductRegs__4; // @[shit.scala 26:29]
  reg [9:0] dotProductRegs__5; // @[shit.scala 26:29]
  reg [9:0] dotProductRegs__6; // @[shit.scala 26:29]
  reg [9:0] dotProductRegs__7; // @[shit.scala 26:29]
  reg  signs__0; // @[shit.scala 27:20]
  reg  signs__1; // @[shit.scala 27:20]
  reg  signs__2; // @[shit.scala 27:20]
  reg  signs__3; // @[shit.scala 27:20]
  reg  signs__4; // @[shit.scala 27:20]
  reg  signs__5; // @[shit.scala 27:20]
  reg  signs__6; // @[shit.scala 27:20]
  reg  signs__7; // @[shit.scala 27:20]
  reg [10:0] two_complement__0; // @[shit.scala 28:29]
  reg [10:0] two_complement__1; // @[shit.scala 28:29]
  reg [10:0] two_complement__2; // @[shit.scala 28:29]
  reg [10:0] two_complement__3; // @[shit.scala 28:29]
  reg [10:0] two_complement__4; // @[shit.scala 28:29]
  reg [10:0] two_complement__5; // @[shit.scala 28:29]
  reg [10:0] two_complement__6; // @[shit.scala 28:29]
  reg [10:0] two_complement__7; // @[shit.scala 28:29]
  reg [10:0] two_complement_buffer__0; // @[shit.scala 29:36]
  reg [10:0] two_complement_buffer__1; // @[shit.scala 29:36]
  reg [10:0] two_complement_buffer__2; // @[shit.scala 29:36]
  reg [10:0] two_complement_buffer__3; // @[shit.scala 29:36]
  reg [10:0] two_complement_buffer__4; // @[shit.scala 29:36]
  reg [10:0] two_complement_buffer__5; // @[shit.scala 29:36]
  reg [10:0] two_complement_buffer__6; // @[shit.scala 29:36]
  reg [10:0] two_complement_buffer__7; // @[shit.scala 29:36]
  reg [4:0] multiplierReg; // @[shit.scala 31:34]
  reg  signReg; // @[shit.scala 32:28]
  wire [10:0] _two_complement_0_T_1 = {1'h0,dotProductRegs__0}; // @[shit.scala 39:16]
  wire [10:0] _two_complement_0_T_2 = ~_two_complement_0_T_1; // @[shit.scala 39:10]
  wire [10:0] _two_complement_0_T_4 = _two_complement_0_T_2 + 11'h1; // @[shit.scala 39:38]
  reg [4:0] multiplierReg_1; // @[shit.scala 31:34]
  reg  signReg_1; // @[shit.scala 32:28]
  wire [10:0] _two_complement_1_T_1 = {1'h0,dotProductRegs__1}; // @[shit.scala 39:16]
  wire [10:0] _two_complement_1_T_2 = ~_two_complement_1_T_1; // @[shit.scala 39:10]
  wire [10:0] _two_complement_1_T_4 = _two_complement_1_T_2 + 11'h1; // @[shit.scala 39:38]
  reg [4:0] multiplierReg_2; // @[shit.scala 31:34]
  reg  signReg_2; // @[shit.scala 32:28]
  wire [10:0] _two_complement_2_T_1 = {1'h0,dotProductRegs__2}; // @[shit.scala 39:16]
  wire [10:0] _two_complement_2_T_2 = ~_two_complement_2_T_1; // @[shit.scala 39:10]
  wire [10:0] _two_complement_2_T_4 = _two_complement_2_T_2 + 11'h1; // @[shit.scala 39:38]
  reg [4:0] multiplierReg_3; // @[shit.scala 31:34]
  reg  signReg_3; // @[shit.scala 32:28]
  wire [10:0] _two_complement_3_T_1 = {1'h0,dotProductRegs__3}; // @[shit.scala 39:16]
  wire [10:0] _two_complement_3_T_2 = ~_two_complement_3_T_1; // @[shit.scala 39:10]
  wire [10:0] _two_complement_3_T_4 = _two_complement_3_T_2 + 11'h1; // @[shit.scala 39:38]
  reg [4:0] multiplierReg_4; // @[shit.scala 31:34]
  reg  signReg_4; // @[shit.scala 32:28]
  wire [10:0] _two_complement_4_T_1 = {1'h0,dotProductRegs__4}; // @[shit.scala 39:16]
  wire [10:0] _two_complement_4_T_2 = ~_two_complement_4_T_1; // @[shit.scala 39:10]
  wire [10:0] _two_complement_4_T_4 = _two_complement_4_T_2 + 11'h1; // @[shit.scala 39:38]
  reg [4:0] multiplierReg_5; // @[shit.scala 31:34]
  reg  signReg_5; // @[shit.scala 32:28]
  wire [10:0] _two_complement_5_T_1 = {1'h0,dotProductRegs__5}; // @[shit.scala 39:16]
  wire [10:0] _two_complement_5_T_2 = ~_two_complement_5_T_1; // @[shit.scala 39:10]
  wire [10:0] _two_complement_5_T_4 = _two_complement_5_T_2 + 11'h1; // @[shit.scala 39:38]
  reg [4:0] multiplierReg_6; // @[shit.scala 31:34]
  reg  signReg_6; // @[shit.scala 32:28]
  wire [10:0] _two_complement_6_T_1 = {1'h0,dotProductRegs__6}; // @[shit.scala 39:16]
  wire [10:0] _two_complement_6_T_2 = ~_two_complement_6_T_1; // @[shit.scala 39:10]
  wire [10:0] _two_complement_6_T_4 = _two_complement_6_T_2 + 11'h1; // @[shit.scala 39:38]
  reg [4:0] multiplierReg_7; // @[shit.scala 31:34]
  reg  signReg_7; // @[shit.scala 32:28]
  wire [10:0] _two_complement_7_T_1 = {1'h0,dotProductRegs__7}; // @[shit.scala 39:16]
  wire [10:0] _two_complement_7_T_2 = ~_two_complement_7_T_1; // @[shit.scala 39:10]
  wire [10:0] _two_complement_7_T_4 = _two_complement_7_T_2 + 11'h1; // @[shit.scala 39:38]
  wire [10:0] _acc_0_T_2 = $signed(two_complement_buffer__0) + $signed(two_complement_buffer__1); // @[shit.scala 44:46]
  wire [10:0] _acc_0_T_5 = $signed(_acc_0_T_2) + $signed(two_complement_buffer__2); // @[shit.scala 44:46]
  wire [10:0] _acc_0_T_8 = $signed(_acc_0_T_5) + $signed(two_complement_buffer__3); // @[shit.scala 44:46]
  wire [10:0] _acc_0_T_11 = $signed(_acc_0_T_8) + $signed(two_complement_buffer__4); // @[shit.scala 44:46]
  wire [10:0] _acc_0_T_14 = $signed(_acc_0_T_11) + $signed(two_complement_buffer__5); // @[shit.scala 44:46]
  wire [10:0] _acc_0_T_17 = $signed(_acc_0_T_14) + $signed(two_complement_buffer__6); // @[shit.scala 44:46]
  wire [10:0] _acc_0_T_20 = $signed(_acc_0_T_17) + $signed(two_complement_buffer__7); // @[shit.scala 44:46]
  wire [7:0] _exp_output_1_T_1 = io_exp_a_1 + io_exp_b_1; // @[shit.scala 25:34]
  reg [9:0] dotProductRegs_1_0; // @[shit.scala 26:29]
  reg [9:0] dotProductRegs_1_1; // @[shit.scala 26:29]
  reg [9:0] dotProductRegs_1_2; // @[shit.scala 26:29]
  reg [9:0] dotProductRegs_1_3; // @[shit.scala 26:29]
  reg [9:0] dotProductRegs_1_4; // @[shit.scala 26:29]
  reg [9:0] dotProductRegs_1_5; // @[shit.scala 26:29]
  reg [9:0] dotProductRegs_1_6; // @[shit.scala 26:29]
  reg [9:0] dotProductRegs_1_7; // @[shit.scala 26:29]
  reg  signs_1_0; // @[shit.scala 27:20]
  reg  signs_1_1; // @[shit.scala 27:20]
  reg  signs_1_2; // @[shit.scala 27:20]
  reg  signs_1_3; // @[shit.scala 27:20]
  reg  signs_1_4; // @[shit.scala 27:20]
  reg  signs_1_5; // @[shit.scala 27:20]
  reg  signs_1_6; // @[shit.scala 27:20]
  reg  signs_1_7; // @[shit.scala 27:20]
  reg [10:0] two_complement_1_0; // @[shit.scala 28:29]
  reg [10:0] two_complement_1_1; // @[shit.scala 28:29]
  reg [10:0] two_complement_1_2; // @[shit.scala 28:29]
  reg [10:0] two_complement_1_3; // @[shit.scala 28:29]
  reg [10:0] two_complement_1_4; // @[shit.scala 28:29]
  reg [10:0] two_complement_1_5; // @[shit.scala 28:29]
  reg [10:0] two_complement_1_6; // @[shit.scala 28:29]
  reg [10:0] two_complement_1_7; // @[shit.scala 28:29]
  reg [10:0] two_complement_buffer_1_0; // @[shit.scala 29:36]
  reg [10:0] two_complement_buffer_1_1; // @[shit.scala 29:36]
  reg [10:0] two_complement_buffer_1_2; // @[shit.scala 29:36]
  reg [10:0] two_complement_buffer_1_3; // @[shit.scala 29:36]
  reg [10:0] two_complement_buffer_1_4; // @[shit.scala 29:36]
  reg [10:0] two_complement_buffer_1_5; // @[shit.scala 29:36]
  reg [10:0] two_complement_buffer_1_6; // @[shit.scala 29:36]
  reg [10:0] two_complement_buffer_1_7; // @[shit.scala 29:36]
  reg [4:0] multiplierReg_8; // @[shit.scala 31:34]
  reg  signReg_8; // @[shit.scala 32:28]
  wire [10:0] _two_complement_0_T_8 = {1'h0,dotProductRegs_1_0}; // @[shit.scala 39:16]
  wire [10:0] _two_complement_0_T_9 = ~_two_complement_0_T_8; // @[shit.scala 39:10]
  wire [10:0] _two_complement_0_T_11 = _two_complement_0_T_9 + 11'h1; // @[shit.scala 39:38]
  reg [4:0] multiplierReg_9; // @[shit.scala 31:34]
  reg  signReg_9; // @[shit.scala 32:28]
  wire [10:0] _two_complement_1_T_8 = {1'h0,dotProductRegs_1_1}; // @[shit.scala 39:16]
  wire [10:0] _two_complement_1_T_9 = ~_two_complement_1_T_8; // @[shit.scala 39:10]
  wire [10:0] _two_complement_1_T_11 = _two_complement_1_T_9 + 11'h1; // @[shit.scala 39:38]
  reg [4:0] multiplierReg_10; // @[shit.scala 31:34]
  reg  signReg_10; // @[shit.scala 32:28]
  wire [10:0] _two_complement_2_T_8 = {1'h0,dotProductRegs_1_2}; // @[shit.scala 39:16]
  wire [10:0] _two_complement_2_T_9 = ~_two_complement_2_T_8; // @[shit.scala 39:10]
  wire [10:0] _two_complement_2_T_11 = _two_complement_2_T_9 + 11'h1; // @[shit.scala 39:38]
  reg [4:0] multiplierReg_11; // @[shit.scala 31:34]
  reg  signReg_11; // @[shit.scala 32:28]
  wire [10:0] _two_complement_3_T_8 = {1'h0,dotProductRegs_1_3}; // @[shit.scala 39:16]
  wire [10:0] _two_complement_3_T_9 = ~_two_complement_3_T_8; // @[shit.scala 39:10]
  wire [10:0] _two_complement_3_T_11 = _two_complement_3_T_9 + 11'h1; // @[shit.scala 39:38]
  reg [4:0] multiplierReg_12; // @[shit.scala 31:34]
  reg  signReg_12; // @[shit.scala 32:28]
  wire [10:0] _two_complement_4_T_8 = {1'h0,dotProductRegs_1_4}; // @[shit.scala 39:16]
  wire [10:0] _two_complement_4_T_9 = ~_two_complement_4_T_8; // @[shit.scala 39:10]
  wire [10:0] _two_complement_4_T_11 = _two_complement_4_T_9 + 11'h1; // @[shit.scala 39:38]
  reg [4:0] multiplierReg_13; // @[shit.scala 31:34]
  reg  signReg_13; // @[shit.scala 32:28]
  wire [10:0] _two_complement_5_T_8 = {1'h0,dotProductRegs_1_5}; // @[shit.scala 39:16]
  wire [10:0] _two_complement_5_T_9 = ~_two_complement_5_T_8; // @[shit.scala 39:10]
  wire [10:0] _two_complement_5_T_11 = _two_complement_5_T_9 + 11'h1; // @[shit.scala 39:38]
  reg [4:0] multiplierReg_14; // @[shit.scala 31:34]
  reg  signReg_14; // @[shit.scala 32:28]
  wire [10:0] _two_complement_6_T_8 = {1'h0,dotProductRegs_1_6}; // @[shit.scala 39:16]
  wire [10:0] _two_complement_6_T_9 = ~_two_complement_6_T_8; // @[shit.scala 39:10]
  wire [10:0] _two_complement_6_T_11 = _two_complement_6_T_9 + 11'h1; // @[shit.scala 39:38]
  reg [4:0] multiplierReg_15; // @[shit.scala 31:34]
  reg  signReg_15; // @[shit.scala 32:28]
  wire [10:0] _two_complement_7_T_8 = {1'h0,dotProductRegs_1_7}; // @[shit.scala 39:16]
  wire [10:0] _two_complement_7_T_9 = ~_two_complement_7_T_8; // @[shit.scala 39:10]
  wire [10:0] _two_complement_7_T_11 = _two_complement_7_T_9 + 11'h1; // @[shit.scala 39:38]
  wire [10:0] _acc_1_T_2 = $signed(two_complement_buffer_1_0) + $signed(two_complement_buffer_1_1); // @[shit.scala 44:46]
  wire [10:0] _acc_1_T_5 = $signed(_acc_1_T_2) + $signed(two_complement_buffer_1_2); // @[shit.scala 44:46]
  wire [10:0] _acc_1_T_8 = $signed(_acc_1_T_5) + $signed(two_complement_buffer_1_3); // @[shit.scala 44:46]
  wire [10:0] _acc_1_T_11 = $signed(_acc_1_T_8) + $signed(two_complement_buffer_1_4); // @[shit.scala 44:46]
  wire [10:0] _acc_1_T_14 = $signed(_acc_1_T_11) + $signed(two_complement_buffer_1_5); // @[shit.scala 44:46]
  wire [10:0] _acc_1_T_17 = $signed(_acc_1_T_14) + $signed(two_complement_buffer_1_6); // @[shit.scala 44:46]
  wire [10:0] _acc_1_T_20 = $signed(_acc_1_T_17) + $signed(two_complement_buffer_1_7); // @[shit.scala 44:46]
  adderTree3 adderTreeInst ( // @[shit.scala 47:29]
    .clock(adderTreeInst_clock),
    .reset(adderTreeInst_reset),
    .io_sign_man_0(adderTreeInst_io_sign_man_0),
    .io_sign_man_1(adderTreeInst_io_sign_man_1),
    .io_exps_0(adderTreeInst_io_exps_0),
    .io_exps_1(adderTreeInst_io_exps_1),
    .io_result_tree(adderTreeInst_io_result_tree)
  );
  assign io_result = adderTreeInst_io_result_tree; // @[shit.scala 50:13]
  assign adderTreeInst_clock = clock;
  assign adderTreeInst_reset = reset;
  assign adderTreeInst_io_sign_man_0 = acc_0; // @[shit.scala 48:{39,39}]
  assign adderTreeInst_io_sign_man_1 = acc_1; // @[shit.scala 48:{39,39}]
  assign adderTreeInst_io_exps_0 = exp_output_0; // @[shit.scala 49:{35,35}]
  assign adderTreeInst_io_exps_1 = exp_output_1; // @[shit.scala 49:{35,35}]
  always @(posedge clock) begin
    if (reset) begin // @[shit.scala 17:60]
      exp_output_0 <= 8'h0; // @[shit.scala 17:60]
    end else begin
      exp_output_0 <= _exp_output_0_T_1; // @[shit.scala 25:19]
    end
    if (reset) begin // @[shit.scala 17:60]
      exp_output_1 <= 8'h0; // @[shit.scala 17:60]
    end else begin
      exp_output_1 <= _exp_output_1_T_1; // @[shit.scala 25:19]
    end
    if (reset) begin // @[shit.scala 22:53]
      acc_0 <= 18'sh0; // @[shit.scala 22:53]
    end else begin
      acc_0 <= {{7{_acc_0_T_20[10]}},_acc_0_T_20}; // @[shit.scala 44:12]
    end
    if (reset) begin // @[shit.scala 22:53]
      acc_1 <= 18'sh0; // @[shit.scala 22:53]
    end else begin
      acc_1 <= {{7{_acc_1_T_20[10]}},_acc_1_T_20}; // @[shit.scala 44:12]
    end
    dotProductRegs__0 <= multiplierReg * io_man_b_0; // @[shit.scala 35:42]
    dotProductRegs__1 <= multiplierReg_1 * io_man_b_1; // @[shit.scala 35:42]
    dotProductRegs__2 <= multiplierReg_2 * io_man_b_2; // @[shit.scala 35:42]
    dotProductRegs__3 <= multiplierReg_3 * io_man_b_3; // @[shit.scala 35:42]
    dotProductRegs__4 <= multiplierReg_4 * io_man_b_4; // @[shit.scala 35:42]
    dotProductRegs__5 <= multiplierReg_5 * io_man_b_5; // @[shit.scala 35:42]
    dotProductRegs__6 <= multiplierReg_6 * io_man_b_6; // @[shit.scala 35:42]
    dotProductRegs__7 <= multiplierReg_7 * io_man_b_7; // @[shit.scala 35:42]
    signs__0 <= signReg ^ io_sign_b_0; // @[shit.scala 36:27]
    signs__1 <= signReg_1 ^ io_sign_b_1; // @[shit.scala 36:27]
    signs__2 <= signReg_2 ^ io_sign_b_2; // @[shit.scala 36:27]
    signs__3 <= signReg_3 ^ io_sign_b_3; // @[shit.scala 36:27]
    signs__4 <= signReg_4 ^ io_sign_b_4; // @[shit.scala 36:27]
    signs__5 <= signReg_5 ^ io_sign_b_5; // @[shit.scala 36:27]
    signs__6 <= signReg_6 ^ io_sign_b_6; // @[shit.scala 36:27]
    signs__7 <= signReg_7 ^ io_sign_b_7; // @[shit.scala 36:27]
    if (signs__0) begin // @[shit.scala 37:31]
      two_complement__0 <= _two_complement_0_T_4;
    end else begin
      two_complement__0 <= _two_complement_0_T_1;
    end
    if (signs__1) begin // @[shit.scala 37:31]
      two_complement__1 <= _two_complement_1_T_4;
    end else begin
      two_complement__1 <= _two_complement_1_T_1;
    end
    if (signs__2) begin // @[shit.scala 37:31]
      two_complement__2 <= _two_complement_2_T_4;
    end else begin
      two_complement__2 <= _two_complement_2_T_1;
    end
    if (signs__3) begin // @[shit.scala 37:31]
      two_complement__3 <= _two_complement_3_T_4;
    end else begin
      two_complement__3 <= _two_complement_3_T_1;
    end
    if (signs__4) begin // @[shit.scala 37:31]
      two_complement__4 <= _two_complement_4_T_4;
    end else begin
      two_complement__4 <= _two_complement_4_T_1;
    end
    if (signs__5) begin // @[shit.scala 37:31]
      two_complement__5 <= _two_complement_5_T_4;
    end else begin
      two_complement__5 <= _two_complement_5_T_1;
    end
    if (signs__6) begin // @[shit.scala 37:31]
      two_complement__6 <= _two_complement_6_T_4;
    end else begin
      two_complement__6 <= _two_complement_6_T_1;
    end
    if (signs__7) begin // @[shit.scala 37:31]
      two_complement__7 <= _two_complement_7_T_4;
    end else begin
      two_complement__7 <= _two_complement_7_T_1;
    end
    two_complement_buffer__0 <= two_complement__0; // @[shit.scala 42:53]
    two_complement_buffer__1 <= two_complement__1; // @[shit.scala 42:53]
    two_complement_buffer__2 <= two_complement__2; // @[shit.scala 42:53]
    two_complement_buffer__3 <= two_complement__3; // @[shit.scala 42:53]
    two_complement_buffer__4 <= two_complement__4; // @[shit.scala 42:53]
    two_complement_buffer__5 <= two_complement__5; // @[shit.scala 42:53]
    two_complement_buffer__6 <= two_complement__6; // @[shit.scala 42:53]
    two_complement_buffer__7 <= two_complement__7; // @[shit.scala 42:53]
    if (reset) begin // @[shit.scala 31:34]
      multiplierReg <= 5'h0; // @[shit.scala 31:34]
    end else begin
      multiplierReg <= io_man_a_0; // @[shit.scala 34:21]
    end
    if (reset) begin // @[shit.scala 32:28]
      signReg <= 1'h0; // @[shit.scala 32:28]
    end else begin
      signReg <= io_sign_a_0; // @[shit.scala 33:15]
    end
    if (reset) begin // @[shit.scala 31:34]
      multiplierReg_1 <= 5'h0; // @[shit.scala 31:34]
    end else begin
      multiplierReg_1 <= io_man_a_1; // @[shit.scala 34:21]
    end
    if (reset) begin // @[shit.scala 32:28]
      signReg_1 <= 1'h0; // @[shit.scala 32:28]
    end else begin
      signReg_1 <= io_sign_a_1; // @[shit.scala 33:15]
    end
    if (reset) begin // @[shit.scala 31:34]
      multiplierReg_2 <= 5'h0; // @[shit.scala 31:34]
    end else begin
      multiplierReg_2 <= io_man_a_2; // @[shit.scala 34:21]
    end
    if (reset) begin // @[shit.scala 32:28]
      signReg_2 <= 1'h0; // @[shit.scala 32:28]
    end else begin
      signReg_2 <= io_sign_a_2; // @[shit.scala 33:15]
    end
    if (reset) begin // @[shit.scala 31:34]
      multiplierReg_3 <= 5'h0; // @[shit.scala 31:34]
    end else begin
      multiplierReg_3 <= io_man_a_3; // @[shit.scala 34:21]
    end
    if (reset) begin // @[shit.scala 32:28]
      signReg_3 <= 1'h0; // @[shit.scala 32:28]
    end else begin
      signReg_3 <= io_sign_a_3; // @[shit.scala 33:15]
    end
    if (reset) begin // @[shit.scala 31:34]
      multiplierReg_4 <= 5'h0; // @[shit.scala 31:34]
    end else begin
      multiplierReg_4 <= io_man_a_4; // @[shit.scala 34:21]
    end
    if (reset) begin // @[shit.scala 32:28]
      signReg_4 <= 1'h0; // @[shit.scala 32:28]
    end else begin
      signReg_4 <= io_sign_a_4; // @[shit.scala 33:15]
    end
    if (reset) begin // @[shit.scala 31:34]
      multiplierReg_5 <= 5'h0; // @[shit.scala 31:34]
    end else begin
      multiplierReg_5 <= io_man_a_5; // @[shit.scala 34:21]
    end
    if (reset) begin // @[shit.scala 32:28]
      signReg_5 <= 1'h0; // @[shit.scala 32:28]
    end else begin
      signReg_5 <= io_sign_a_5; // @[shit.scala 33:15]
    end
    if (reset) begin // @[shit.scala 31:34]
      multiplierReg_6 <= 5'h0; // @[shit.scala 31:34]
    end else begin
      multiplierReg_6 <= io_man_a_6; // @[shit.scala 34:21]
    end
    if (reset) begin // @[shit.scala 32:28]
      signReg_6 <= 1'h0; // @[shit.scala 32:28]
    end else begin
      signReg_6 <= io_sign_a_6; // @[shit.scala 33:15]
    end
    if (reset) begin // @[shit.scala 31:34]
      multiplierReg_7 <= 5'h0; // @[shit.scala 31:34]
    end else begin
      multiplierReg_7 <= io_man_a_7; // @[shit.scala 34:21]
    end
    if (reset) begin // @[shit.scala 32:28]
      signReg_7 <= 1'h0; // @[shit.scala 32:28]
    end else begin
      signReg_7 <= io_sign_a_7; // @[shit.scala 33:15]
    end
    dotProductRegs_1_0 <= multiplierReg_8 * io_man_b_8; // @[shit.scala 35:42]
    dotProductRegs_1_1 <= multiplierReg_9 * io_man_b_9; // @[shit.scala 35:42]
    dotProductRegs_1_2 <= multiplierReg_10 * io_man_b_10; // @[shit.scala 35:42]
    dotProductRegs_1_3 <= multiplierReg_11 * io_man_b_11; // @[shit.scala 35:42]
    dotProductRegs_1_4 <= multiplierReg_12 * io_man_b_12; // @[shit.scala 35:42]
    dotProductRegs_1_5 <= multiplierReg_13 * io_man_b_13; // @[shit.scala 35:42]
    dotProductRegs_1_6 <= multiplierReg_14 * io_man_b_14; // @[shit.scala 35:42]
    dotProductRegs_1_7 <= multiplierReg_15 * io_man_b_15; // @[shit.scala 35:42]
    signs_1_0 <= signReg_8 ^ io_sign_b_8; // @[shit.scala 36:27]
    signs_1_1 <= signReg_9 ^ io_sign_b_9; // @[shit.scala 36:27]
    signs_1_2 <= signReg_10 ^ io_sign_b_10; // @[shit.scala 36:27]
    signs_1_3 <= signReg_11 ^ io_sign_b_11; // @[shit.scala 36:27]
    signs_1_4 <= signReg_12 ^ io_sign_b_12; // @[shit.scala 36:27]
    signs_1_5 <= signReg_13 ^ io_sign_b_13; // @[shit.scala 36:27]
    signs_1_6 <= signReg_14 ^ io_sign_b_14; // @[shit.scala 36:27]
    signs_1_7 <= signReg_15 ^ io_sign_b_15; // @[shit.scala 36:27]
    if (signs_1_0) begin // @[shit.scala 37:31]
      two_complement_1_0 <= _two_complement_0_T_11;
    end else begin
      two_complement_1_0 <= _two_complement_0_T_8;
    end
    if (signs_1_1) begin // @[shit.scala 37:31]
      two_complement_1_1 <= _two_complement_1_T_11;
    end else begin
      two_complement_1_1 <= _two_complement_1_T_8;
    end
    if (signs_1_2) begin // @[shit.scala 37:31]
      two_complement_1_2 <= _two_complement_2_T_11;
    end else begin
      two_complement_1_2 <= _two_complement_2_T_8;
    end
    if (signs_1_3) begin // @[shit.scala 37:31]
      two_complement_1_3 <= _two_complement_3_T_11;
    end else begin
      two_complement_1_3 <= _two_complement_3_T_8;
    end
    if (signs_1_4) begin // @[shit.scala 37:31]
      two_complement_1_4 <= _two_complement_4_T_11;
    end else begin
      two_complement_1_4 <= _two_complement_4_T_8;
    end
    if (signs_1_5) begin // @[shit.scala 37:31]
      two_complement_1_5 <= _two_complement_5_T_11;
    end else begin
      two_complement_1_5 <= _two_complement_5_T_8;
    end
    if (signs_1_6) begin // @[shit.scala 37:31]
      two_complement_1_6 <= _two_complement_6_T_11;
    end else begin
      two_complement_1_6 <= _two_complement_6_T_8;
    end
    if (signs_1_7) begin // @[shit.scala 37:31]
      two_complement_1_7 <= _two_complement_7_T_11;
    end else begin
      two_complement_1_7 <= _two_complement_7_T_8;
    end
    two_complement_buffer_1_0 <= two_complement_1_0; // @[shit.scala 42:53]
    two_complement_buffer_1_1 <= two_complement_1_1; // @[shit.scala 42:53]
    two_complement_buffer_1_2 <= two_complement_1_2; // @[shit.scala 42:53]
    two_complement_buffer_1_3 <= two_complement_1_3; // @[shit.scala 42:53]
    two_complement_buffer_1_4 <= two_complement_1_4; // @[shit.scala 42:53]
    two_complement_buffer_1_5 <= two_complement_1_5; // @[shit.scala 42:53]
    two_complement_buffer_1_6 <= two_complement_1_6; // @[shit.scala 42:53]
    two_complement_buffer_1_7 <= two_complement_1_7; // @[shit.scala 42:53]
    if (reset) begin // @[shit.scala 31:34]
      multiplierReg_8 <= 5'h0; // @[shit.scala 31:34]
    end else begin
      multiplierReg_8 <= io_man_a_8; // @[shit.scala 34:21]
    end
    if (reset) begin // @[shit.scala 32:28]
      signReg_8 <= 1'h0; // @[shit.scala 32:28]
    end else begin
      signReg_8 <= io_sign_a_8; // @[shit.scala 33:15]
    end
    if (reset) begin // @[shit.scala 31:34]
      multiplierReg_9 <= 5'h0; // @[shit.scala 31:34]
    end else begin
      multiplierReg_9 <= io_man_a_9; // @[shit.scala 34:21]
    end
    if (reset) begin // @[shit.scala 32:28]
      signReg_9 <= 1'h0; // @[shit.scala 32:28]
    end else begin
      signReg_9 <= io_sign_a_9; // @[shit.scala 33:15]
    end
    if (reset) begin // @[shit.scala 31:34]
      multiplierReg_10 <= 5'h0; // @[shit.scala 31:34]
    end else begin
      multiplierReg_10 <= io_man_a_10; // @[shit.scala 34:21]
    end
    if (reset) begin // @[shit.scala 32:28]
      signReg_10 <= 1'h0; // @[shit.scala 32:28]
    end else begin
      signReg_10 <= io_sign_a_10; // @[shit.scala 33:15]
    end
    if (reset) begin // @[shit.scala 31:34]
      multiplierReg_11 <= 5'h0; // @[shit.scala 31:34]
    end else begin
      multiplierReg_11 <= io_man_a_11; // @[shit.scala 34:21]
    end
    if (reset) begin // @[shit.scala 32:28]
      signReg_11 <= 1'h0; // @[shit.scala 32:28]
    end else begin
      signReg_11 <= io_sign_a_11; // @[shit.scala 33:15]
    end
    if (reset) begin // @[shit.scala 31:34]
      multiplierReg_12 <= 5'h0; // @[shit.scala 31:34]
    end else begin
      multiplierReg_12 <= io_man_a_12; // @[shit.scala 34:21]
    end
    if (reset) begin // @[shit.scala 32:28]
      signReg_12 <= 1'h0; // @[shit.scala 32:28]
    end else begin
      signReg_12 <= io_sign_a_12; // @[shit.scala 33:15]
    end
    if (reset) begin // @[shit.scala 31:34]
      multiplierReg_13 <= 5'h0; // @[shit.scala 31:34]
    end else begin
      multiplierReg_13 <= io_man_a_13; // @[shit.scala 34:21]
    end
    if (reset) begin // @[shit.scala 32:28]
      signReg_13 <= 1'h0; // @[shit.scala 32:28]
    end else begin
      signReg_13 <= io_sign_a_13; // @[shit.scala 33:15]
    end
    if (reset) begin // @[shit.scala 31:34]
      multiplierReg_14 <= 5'h0; // @[shit.scala 31:34]
    end else begin
      multiplierReg_14 <= io_man_a_14; // @[shit.scala 34:21]
    end
    if (reset) begin // @[shit.scala 32:28]
      signReg_14 <= 1'h0; // @[shit.scala 32:28]
    end else begin
      signReg_14 <= io_sign_a_14; // @[shit.scala 33:15]
    end
    if (reset) begin // @[shit.scala 31:34]
      multiplierReg_15 <= 5'h0; // @[shit.scala 31:34]
    end else begin
      multiplierReg_15 <= io_man_a_15; // @[shit.scala 34:21]
    end
    if (reset) begin // @[shit.scala 32:28]
      signReg_15 <= 1'h0; // @[shit.scala 32:28]
    end else begin
      signReg_15 <= io_sign_a_15; // @[shit.scala 33:15]
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
  exp_output_0 = _RAND_0[7:0];
  _RAND_1 = {1{`RANDOM}};
  exp_output_1 = _RAND_1[7:0];
  _RAND_2 = {1{`RANDOM}};
  acc_0 = _RAND_2[17:0];
  _RAND_3 = {1{`RANDOM}};
  acc_1 = _RAND_3[17:0];
  _RAND_4 = {1{`RANDOM}};
  dotProductRegs__0 = _RAND_4[9:0];
  _RAND_5 = {1{`RANDOM}};
  dotProductRegs__1 = _RAND_5[9:0];
  _RAND_6 = {1{`RANDOM}};
  dotProductRegs__2 = _RAND_6[9:0];
  _RAND_7 = {1{`RANDOM}};
  dotProductRegs__3 = _RAND_7[9:0];
  _RAND_8 = {1{`RANDOM}};
  dotProductRegs__4 = _RAND_8[9:0];
  _RAND_9 = {1{`RANDOM}};
  dotProductRegs__5 = _RAND_9[9:0];
  _RAND_10 = {1{`RANDOM}};
  dotProductRegs__6 = _RAND_10[9:0];
  _RAND_11 = {1{`RANDOM}};
  dotProductRegs__7 = _RAND_11[9:0];
  _RAND_12 = {1{`RANDOM}};
  signs__0 = _RAND_12[0:0];
  _RAND_13 = {1{`RANDOM}};
  signs__1 = _RAND_13[0:0];
  _RAND_14 = {1{`RANDOM}};
  signs__2 = _RAND_14[0:0];
  _RAND_15 = {1{`RANDOM}};
  signs__3 = _RAND_15[0:0];
  _RAND_16 = {1{`RANDOM}};
  signs__4 = _RAND_16[0:0];
  _RAND_17 = {1{`RANDOM}};
  signs__5 = _RAND_17[0:0];
  _RAND_18 = {1{`RANDOM}};
  signs__6 = _RAND_18[0:0];
  _RAND_19 = {1{`RANDOM}};
  signs__7 = _RAND_19[0:0];
  _RAND_20 = {1{`RANDOM}};
  two_complement__0 = _RAND_20[10:0];
  _RAND_21 = {1{`RANDOM}};
  two_complement__1 = _RAND_21[10:0];
  _RAND_22 = {1{`RANDOM}};
  two_complement__2 = _RAND_22[10:0];
  _RAND_23 = {1{`RANDOM}};
  two_complement__3 = _RAND_23[10:0];
  _RAND_24 = {1{`RANDOM}};
  two_complement__4 = _RAND_24[10:0];
  _RAND_25 = {1{`RANDOM}};
  two_complement__5 = _RAND_25[10:0];
  _RAND_26 = {1{`RANDOM}};
  two_complement__6 = _RAND_26[10:0];
  _RAND_27 = {1{`RANDOM}};
  two_complement__7 = _RAND_27[10:0];
  _RAND_28 = {1{`RANDOM}};
  two_complement_buffer__0 = _RAND_28[10:0];
  _RAND_29 = {1{`RANDOM}};
  two_complement_buffer__1 = _RAND_29[10:0];
  _RAND_30 = {1{`RANDOM}};
  two_complement_buffer__2 = _RAND_30[10:0];
  _RAND_31 = {1{`RANDOM}};
  two_complement_buffer__3 = _RAND_31[10:0];
  _RAND_32 = {1{`RANDOM}};
  two_complement_buffer__4 = _RAND_32[10:0];
  _RAND_33 = {1{`RANDOM}};
  two_complement_buffer__5 = _RAND_33[10:0];
  _RAND_34 = {1{`RANDOM}};
  two_complement_buffer__6 = _RAND_34[10:0];
  _RAND_35 = {1{`RANDOM}};
  two_complement_buffer__7 = _RAND_35[10:0];
  _RAND_36 = {1{`RANDOM}};
  multiplierReg = _RAND_36[4:0];
  _RAND_37 = {1{`RANDOM}};
  signReg = _RAND_37[0:0];
  _RAND_38 = {1{`RANDOM}};
  multiplierReg_1 = _RAND_38[4:0];
  _RAND_39 = {1{`RANDOM}};
  signReg_1 = _RAND_39[0:0];
  _RAND_40 = {1{`RANDOM}};
  multiplierReg_2 = _RAND_40[4:0];
  _RAND_41 = {1{`RANDOM}};
  signReg_2 = _RAND_41[0:0];
  _RAND_42 = {1{`RANDOM}};
  multiplierReg_3 = _RAND_42[4:0];
  _RAND_43 = {1{`RANDOM}};
  signReg_3 = _RAND_43[0:0];
  _RAND_44 = {1{`RANDOM}};
  multiplierReg_4 = _RAND_44[4:0];
  _RAND_45 = {1{`RANDOM}};
  signReg_4 = _RAND_45[0:0];
  _RAND_46 = {1{`RANDOM}};
  multiplierReg_5 = _RAND_46[4:0];
  _RAND_47 = {1{`RANDOM}};
  signReg_5 = _RAND_47[0:0];
  _RAND_48 = {1{`RANDOM}};
  multiplierReg_6 = _RAND_48[4:0];
  _RAND_49 = {1{`RANDOM}};
  signReg_6 = _RAND_49[0:0];
  _RAND_50 = {1{`RANDOM}};
  multiplierReg_7 = _RAND_50[4:0];
  _RAND_51 = {1{`RANDOM}};
  signReg_7 = _RAND_51[0:0];
  _RAND_52 = {1{`RANDOM}};
  dotProductRegs_1_0 = _RAND_52[9:0];
  _RAND_53 = {1{`RANDOM}};
  dotProductRegs_1_1 = _RAND_53[9:0];
  _RAND_54 = {1{`RANDOM}};
  dotProductRegs_1_2 = _RAND_54[9:0];
  _RAND_55 = {1{`RANDOM}};
  dotProductRegs_1_3 = _RAND_55[9:0];
  _RAND_56 = {1{`RANDOM}};
  dotProductRegs_1_4 = _RAND_56[9:0];
  _RAND_57 = {1{`RANDOM}};
  dotProductRegs_1_5 = _RAND_57[9:0];
  _RAND_58 = {1{`RANDOM}};
  dotProductRegs_1_6 = _RAND_58[9:0];
  _RAND_59 = {1{`RANDOM}};
  dotProductRegs_1_7 = _RAND_59[9:0];
  _RAND_60 = {1{`RANDOM}};
  signs_1_0 = _RAND_60[0:0];
  _RAND_61 = {1{`RANDOM}};
  signs_1_1 = _RAND_61[0:0];
  _RAND_62 = {1{`RANDOM}};
  signs_1_2 = _RAND_62[0:0];
  _RAND_63 = {1{`RANDOM}};
  signs_1_3 = _RAND_63[0:0];
  _RAND_64 = {1{`RANDOM}};
  signs_1_4 = _RAND_64[0:0];
  _RAND_65 = {1{`RANDOM}};
  signs_1_5 = _RAND_65[0:0];
  _RAND_66 = {1{`RANDOM}};
  signs_1_6 = _RAND_66[0:0];
  _RAND_67 = {1{`RANDOM}};
  signs_1_7 = _RAND_67[0:0];
  _RAND_68 = {1{`RANDOM}};
  two_complement_1_0 = _RAND_68[10:0];
  _RAND_69 = {1{`RANDOM}};
  two_complement_1_1 = _RAND_69[10:0];
  _RAND_70 = {1{`RANDOM}};
  two_complement_1_2 = _RAND_70[10:0];
  _RAND_71 = {1{`RANDOM}};
  two_complement_1_3 = _RAND_71[10:0];
  _RAND_72 = {1{`RANDOM}};
  two_complement_1_4 = _RAND_72[10:0];
  _RAND_73 = {1{`RANDOM}};
  two_complement_1_5 = _RAND_73[10:0];
  _RAND_74 = {1{`RANDOM}};
  two_complement_1_6 = _RAND_74[10:0];
  _RAND_75 = {1{`RANDOM}};
  two_complement_1_7 = _RAND_75[10:0];
  _RAND_76 = {1{`RANDOM}};
  two_complement_buffer_1_0 = _RAND_76[10:0];
  _RAND_77 = {1{`RANDOM}};
  two_complement_buffer_1_1 = _RAND_77[10:0];
  _RAND_78 = {1{`RANDOM}};
  two_complement_buffer_1_2 = _RAND_78[10:0];
  _RAND_79 = {1{`RANDOM}};
  two_complement_buffer_1_3 = _RAND_79[10:0];
  _RAND_80 = {1{`RANDOM}};
  two_complement_buffer_1_4 = _RAND_80[10:0];
  _RAND_81 = {1{`RANDOM}};
  two_complement_buffer_1_5 = _RAND_81[10:0];
  _RAND_82 = {1{`RANDOM}};
  two_complement_buffer_1_6 = _RAND_82[10:0];
  _RAND_83 = {1{`RANDOM}};
  two_complement_buffer_1_7 = _RAND_83[10:0];
  _RAND_84 = {1{`RANDOM}};
  multiplierReg_8 = _RAND_84[4:0];
  _RAND_85 = {1{`RANDOM}};
  signReg_8 = _RAND_85[0:0];
  _RAND_86 = {1{`RANDOM}};
  multiplierReg_9 = _RAND_86[4:0];
  _RAND_87 = {1{`RANDOM}};
  signReg_9 = _RAND_87[0:0];
  _RAND_88 = {1{`RANDOM}};
  multiplierReg_10 = _RAND_88[4:0];
  _RAND_89 = {1{`RANDOM}};
  signReg_10 = _RAND_89[0:0];
  _RAND_90 = {1{`RANDOM}};
  multiplierReg_11 = _RAND_90[4:0];
  _RAND_91 = {1{`RANDOM}};
  signReg_11 = _RAND_91[0:0];
  _RAND_92 = {1{`RANDOM}};
  multiplierReg_12 = _RAND_92[4:0];
  _RAND_93 = {1{`RANDOM}};
  signReg_12 = _RAND_93[0:0];
  _RAND_94 = {1{`RANDOM}};
  multiplierReg_13 = _RAND_94[4:0];
  _RAND_95 = {1{`RANDOM}};
  signReg_13 = _RAND_95[0:0];
  _RAND_96 = {1{`RANDOM}};
  multiplierReg_14 = _RAND_96[4:0];
  _RAND_97 = {1{`RANDOM}};
  signReg_14 = _RAND_97[0:0];
  _RAND_98 = {1{`RANDOM}};
  multiplierReg_15 = _RAND_98[4:0];
  _RAND_99 = {1{`RANDOM}};
  signReg_15 = _RAND_99[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
