module adderTree(
  input         clock,
  input         reset,
  input         io_signs_0,
  input         io_signs_1,
  input         io_signs_2,
  input         io_signs_3,
  input  [24:0] io_mans_0,
  input  [24:0] io_mans_1,
  input  [24:0] io_mans_2,
  input  [24:0] io_mans_3,
  input  [7:0]  io_exps_0,
  input  [7:0]  io_exps_1,
  input  [7:0]  io_exps_2,
  input  [7:0]  io_exps_3,
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
`endif // RANDOMIZE_REG_INIT
  reg [7:0] exp_buffer_0; // @[adderTree.scala 13:60]
  reg [7:0] exp_buffer_1; // @[adderTree.scala 13:60]
  reg [7:0] exp_buffer_2; // @[adderTree.scala 13:60]
  reg [7:0] exp_buffer_3; // @[adderTree.scala 13:60]
  reg [27:0] man_buffer_0; // @[adderTree.scala 15:60]
  reg [27:0] man_buffer_1; // @[adderTree.scala 15:60]
  reg [27:0] man_buffer_2; // @[adderTree.scala 15:60]
  reg [27:0] man_buffer_3; // @[adderTree.scala 15:60]
  reg [28:0] man_buffer_two_complement_0; // @[adderTree.scala 16:75]
  reg [28:0] man_buffer_two_complement_1; // @[adderTree.scala 16:75]
  reg [28:0] man_buffer_two_complement_2; // @[adderTree.scala 16:75]
  reg [28:0] man_buffer_two_complement_3; // @[adderTree.scala 16:75]
  reg [9:0] counter; // @[adderTree.scala 17:26]
  wire  _man_buffer_two_complement_0_T = io_signs_0; // @[adderTree.scala 23:57]
  wire [1:0] _GEN_4 = {2{_man_buffer_two_complement_0_T}}; // @[adderTree.scala 23:63]
  wire [28:0] _man_buffer_two_complement_0_T_2 = {1'h0,man_buffer_0}; // @[adderTree.scala 23:78]
  wire [28:0] _man_buffer_two_complement_0_T_3 = ~_man_buffer_two_complement_0_T_2; // @[adderTree.scala 23:72]
  wire [28:0] _man_buffer_two_complement_0_T_6 = _man_buffer_two_complement_0_T_3 + 29'h1; // @[adderTree.scala 23:103]
  wire [28:0] _man_buffer_two_complement_0_T_8 = {1'h0,man_buffer_0}; // @[adderTree.scala 23:134]
  wire [9:0] _counter_T_1 = counter + 10'h1; // @[adderTree.scala 24:28]
  wire  _man_buffer_two_complement_1_T = io_signs_1; // @[adderTree.scala 23:57]
  wire [1:0] _GEN_5 = {2{_man_buffer_two_complement_1_T}}; // @[adderTree.scala 23:63]
  wire [28:0] _man_buffer_two_complement_1_T_2 = {1'h0,man_buffer_1}; // @[adderTree.scala 23:78]
  wire [28:0] _man_buffer_two_complement_1_T_3 = ~_man_buffer_two_complement_1_T_2; // @[adderTree.scala 23:72]
  wire [28:0] _man_buffer_two_complement_1_T_6 = _man_buffer_two_complement_1_T_3 + 29'h1; // @[adderTree.scala 23:103]
  wire [28:0] _man_buffer_two_complement_1_T_8 = {1'h0,man_buffer_1}; // @[adderTree.scala 23:134]
  wire  _man_buffer_two_complement_2_T = io_signs_2; // @[adderTree.scala 23:57]
  wire [1:0] _GEN_6 = {2{_man_buffer_two_complement_2_T}}; // @[adderTree.scala 23:63]
  wire [28:0] _man_buffer_two_complement_2_T_2 = {1'h0,man_buffer_2}; // @[adderTree.scala 23:78]
  wire [28:0] _man_buffer_two_complement_2_T_3 = ~_man_buffer_two_complement_2_T_2; // @[adderTree.scala 23:72]
  wire [28:0] _man_buffer_two_complement_2_T_6 = _man_buffer_two_complement_2_T_3 + 29'h1; // @[adderTree.scala 23:103]
  wire [28:0] _man_buffer_two_complement_2_T_8 = {1'h0,man_buffer_2}; // @[adderTree.scala 23:134]
  wire  _man_buffer_two_complement_3_T = io_signs_3; // @[adderTree.scala 23:57]
  wire [1:0] _GEN_7 = {2{_man_buffer_two_complement_3_T}}; // @[adderTree.scala 23:63]
  wire [28:0] _man_buffer_two_complement_3_T_2 = {1'h0,man_buffer_3}; // @[adderTree.scala 23:78]
  wire [28:0] _man_buffer_two_complement_3_T_3 = ~_man_buffer_two_complement_3_T_2; // @[adderTree.scala 23:72]
  wire [28:0] _man_buffer_two_complement_3_T_6 = _man_buffer_two_complement_3_T_3 + 29'h1; // @[adderTree.scala 23:103]
  wire [28:0] _man_buffer_two_complement_3_T_8 = {1'h0,man_buffer_3}; // @[adderTree.scala 23:134]
  wire  _exp_buffer_0_T = exp_buffer_0 > exp_buffer_1; // @[adderTree.scala 31:57]
  wire [7:0] _exp_difference_T_2 = exp_buffer_0 - exp_buffer_1; // @[adderTree.scala 32:97]
  wire [7:0] _exp_difference_T_4 = exp_buffer_1 - exp_buffer_0; // @[adderTree.scala 32:136]
  wire [7:0] exp_difference = _exp_buffer_0_T ? _exp_difference_T_2 : _exp_difference_T_4; // @[adderTree.scala 32:45]
  wire [28:0] _man_buffer_two_complement_0_T_11 = $signed(man_buffer_two_complement_1) >>> exp_difference; // @[adderTree.scala 33:158]
  wire [28:0] _man_buffer_two_complement_0_T_14 = $signed(man_buffer_two_complement_0) + $signed(
    _man_buffer_two_complement_0_T_11); // @[adderTree.scala 33:123]
  wire [28:0] _man_buffer_two_complement_0_T_15 = $signed(man_buffer_two_complement_0) >>> exp_difference; // @[adderTree.scala 33:243]
  wire [28:0] _man_buffer_two_complement_0_T_18 = $signed(man_buffer_two_complement_1) + $signed(
    _man_buffer_two_complement_0_T_15); // @[adderTree.scala 33:210]
  wire  _exp_buffer_1_T = exp_buffer_2 > exp_buffer_3; // @[adderTree.scala 31:57]
  wire [7:0] _exp_difference_T_7 = exp_buffer_2 - exp_buffer_3; // @[adderTree.scala 32:97]
  wire [7:0] _exp_difference_T_9 = exp_buffer_3 - exp_buffer_2; // @[adderTree.scala 32:136]
  wire [7:0] exp_difference_1 = _exp_buffer_1_T ? _exp_difference_T_7 : _exp_difference_T_9; // @[adderTree.scala 32:45]
  wire [28:0] _man_buffer_two_complement_1_T_11 = $signed(man_buffer_two_complement_3) >>> exp_difference_1; // @[adderTree.scala 33:158]
  wire [28:0] _man_buffer_two_complement_1_T_14 = $signed(man_buffer_two_complement_2) + $signed(
    _man_buffer_two_complement_1_T_11); // @[adderTree.scala 33:123]
  wire [28:0] _man_buffer_two_complement_1_T_15 = $signed(man_buffer_two_complement_2) >>> exp_difference_1; // @[adderTree.scala 33:243]
  wire [28:0] _man_buffer_two_complement_1_T_18 = $signed(man_buffer_two_complement_3) + $signed(
    _man_buffer_two_complement_1_T_15); // @[adderTree.scala 33:210]
  reg [28:0] concatenated_output; // @[adderTree.scala 43:38]
  wire [28:0] _concatenated_output_T_3 = {1'h0,man_buffer_two_complement_0[27:0]}; // @[adderTree.scala 44:121]
  wire [28:0] _concatenated_output_T_4 = ~_concatenated_output_T_3; // @[adderTree.scala 44:115]
  wire [28:0] _concatenated_output_T_6 = _concatenated_output_T_4 + 29'h1; // @[adderTree.scala 44:206]
  reg [7:0] right_shift; // @[adderTree.scala 46:30]
  reg [7:0] actual_shift; // @[adderTree.scala 47:31]
  wire [15:0] _GEN_8 = {{8'd0}, concatenated_output[20:13]}; // @[Bitwise.scala 108:31]
  wire [15:0] _buf_T_5 = _GEN_8 & 16'hff; // @[Bitwise.scala 108:31]
  wire [15:0] _buf_T_7 = {concatenated_output[12:5], 8'h0}; // @[Bitwise.scala 108:70]
  wire [15:0] _buf_T_9 = _buf_T_7 & 16'hff00; // @[Bitwise.scala 108:80]
  wire [15:0] _buf_T_10 = _buf_T_5 | _buf_T_9; // @[Bitwise.scala 108:39]
  wire [15:0] _GEN_9 = {{4'd0}, _buf_T_10[15:4]}; // @[Bitwise.scala 108:31]
  wire [15:0] _buf_T_15 = _GEN_9 & 16'hf0f; // @[Bitwise.scala 108:31]
  wire [15:0] _buf_T_17 = {_buf_T_10[11:0], 4'h0}; // @[Bitwise.scala 108:70]
  wire [15:0] _buf_T_19 = _buf_T_17 & 16'hf0f0; // @[Bitwise.scala 108:80]
  wire [15:0] _buf_T_20 = _buf_T_15 | _buf_T_19; // @[Bitwise.scala 108:39]
  wire [15:0] _GEN_10 = {{2'd0}, _buf_T_20[15:2]}; // @[Bitwise.scala 108:31]
  wire [15:0] _buf_T_25 = _GEN_10 & 16'h3333; // @[Bitwise.scala 108:31]
  wire [15:0] _buf_T_27 = {_buf_T_20[13:0], 2'h0}; // @[Bitwise.scala 108:70]
  wire [15:0] _buf_T_29 = _buf_T_27 & 16'hcccc; // @[Bitwise.scala 108:80]
  wire [15:0] _buf_T_30 = _buf_T_25 | _buf_T_29; // @[Bitwise.scala 108:39]
  wire [15:0] _GEN_11 = {{1'd0}, _buf_T_30[15:1]}; // @[Bitwise.scala 108:31]
  wire [15:0] _buf_T_35 = _GEN_11 & 16'h5555; // @[Bitwise.scala 108:31]
  wire [15:0] _buf_T_37 = {_buf_T_30[14:0], 1'h0}; // @[Bitwise.scala 108:70]
  wire [15:0] _buf_T_39 = _buf_T_37 & 16'haaaa; // @[Bitwise.scala 108:80]
  wire [15:0] _buf_T_40 = _buf_T_35 | _buf_T_39; // @[Bitwise.scala 108:39]
  wire [22:0] buf_ = {_buf_T_40,concatenated_output[21],concatenated_output[22],concatenated_output[23],
    concatenated_output[24],concatenated_output[25],concatenated_output[26],concatenated_output[27]}; // @[Cat.scala 33:92]
  wire [4:0] _right_shift_T_23 = buf_[21] ? 5'h15 : 5'h16; // @[Mux.scala 47:70]
  wire [4:0] _right_shift_T_24 = buf_[20] ? 5'h14 : _right_shift_T_23; // @[Mux.scala 47:70]
  wire [4:0] _right_shift_T_25 = buf_[19] ? 5'h13 : _right_shift_T_24; // @[Mux.scala 47:70]
  wire [4:0] _right_shift_T_26 = buf_[18] ? 5'h12 : _right_shift_T_25; // @[Mux.scala 47:70]
  wire [4:0] _right_shift_T_27 = buf_[17] ? 5'h11 : _right_shift_T_26; // @[Mux.scala 47:70]
  wire [4:0] _right_shift_T_28 = buf_[16] ? 5'h10 : _right_shift_T_27; // @[Mux.scala 47:70]
  wire [4:0] _right_shift_T_29 = buf_[15] ? 5'hf : _right_shift_T_28; // @[Mux.scala 47:70]
  wire [4:0] _right_shift_T_30 = buf_[14] ? 5'he : _right_shift_T_29; // @[Mux.scala 47:70]
  wire [4:0] _right_shift_T_31 = buf_[13] ? 5'hd : _right_shift_T_30; // @[Mux.scala 47:70]
  wire [4:0] _right_shift_T_32 = buf_[12] ? 5'hc : _right_shift_T_31; // @[Mux.scala 47:70]
  wire [4:0] _right_shift_T_33 = buf_[11] ? 5'hb : _right_shift_T_32; // @[Mux.scala 47:70]
  wire [4:0] _right_shift_T_34 = buf_[10] ? 5'ha : _right_shift_T_33; // @[Mux.scala 47:70]
  wire [4:0] _right_shift_T_35 = buf_[9] ? 5'h9 : _right_shift_T_34; // @[Mux.scala 47:70]
  wire [4:0] _right_shift_T_36 = buf_[8] ? 5'h8 : _right_shift_T_35; // @[Mux.scala 47:70]
  wire [4:0] _right_shift_T_37 = buf_[7] ? 5'h7 : _right_shift_T_36; // @[Mux.scala 47:70]
  wire [4:0] _right_shift_T_38 = buf_[6] ? 5'h6 : _right_shift_T_37; // @[Mux.scala 47:70]
  wire [4:0] _right_shift_T_39 = buf_[5] ? 5'h5 : _right_shift_T_38; // @[Mux.scala 47:70]
  wire [4:0] _right_shift_T_40 = buf_[4] ? 5'h4 : _right_shift_T_39; // @[Mux.scala 47:70]
  wire [4:0] _right_shift_T_41 = buf_[3] ? 5'h3 : _right_shift_T_40; // @[Mux.scala 47:70]
  wire [4:0] _right_shift_T_42 = buf_[2] ? 5'h2 : _right_shift_T_41; // @[Mux.scala 47:70]
  wire [4:0] _right_shift_T_43 = buf_[1] ? 5'h1 : _right_shift_T_42; // @[Mux.scala 47:70]
  wire [4:0] _right_shift_T_44 = buf_[0] ? 5'h0 : _right_shift_T_43; // @[Mux.scala 47:70]
  wire [7:0] _actual_shift_T_1 = 8'h16 - right_shift; // @[adderTree.scala 52:67]
  wire [28:0] man_out_shifted = concatenated_output >> actual_shift; // @[adderTree.scala 55:47]
  wire [7:0] _io_result_T_2 = exp_buffer_0 + actual_shift; // @[adderTree.scala 57:95]
  wire [8:0] _io_result_T_3 = {concatenated_output[28],_io_result_T_2}; // @[adderTree.scala 57:78]
  assign io_result = {_io_result_T_3,man_out_shifted[4:0]}; // @[adderTree.scala 57:110]
  always @(posedge clock) begin
    if (reset) begin // @[adderTree.scala 13:60]
      exp_buffer_0 <= 8'h0; // @[adderTree.scala 13:60]
    end else if (counter == 10'h4) begin // @[adderTree.scala 27:47]
      if (!(exp_buffer_0 > exp_buffer_1)) begin // @[adderTree.scala 31:41]
        exp_buffer_0 <= exp_buffer_1;
      end
    end else begin
      exp_buffer_0 <= io_exps_0; // @[adderTree.scala 20:23]
    end
    if (reset) begin // @[adderTree.scala 13:60]
      exp_buffer_1 <= 8'h0; // @[adderTree.scala 13:60]
    end else if (counter == 10'h4) begin // @[adderTree.scala 27:47]
      if (exp_buffer_2 > exp_buffer_3) begin // @[adderTree.scala 31:41]
        exp_buffer_1 <= exp_buffer_2;
      end else begin
        exp_buffer_1 <= exp_buffer_3;
      end
    end else begin
      exp_buffer_1 <= io_exps_1; // @[adderTree.scala 20:23]
    end
    if (reset) begin // @[adderTree.scala 13:60]
      exp_buffer_2 <= 8'h0; // @[adderTree.scala 13:60]
    end else begin
      exp_buffer_2 <= io_exps_2; // @[adderTree.scala 20:23]
    end
    if (reset) begin // @[adderTree.scala 13:60]
      exp_buffer_3 <= 8'h0; // @[adderTree.scala 13:60]
    end else begin
      exp_buffer_3 <= io_exps_3; // @[adderTree.scala 20:23]
    end
    if (reset) begin // @[adderTree.scala 15:60]
      man_buffer_0 <= 28'h0; // @[adderTree.scala 15:60]
    end else begin
      man_buffer_0 <= {{3'd0}, io_mans_0}; // @[adderTree.scala 21:23]
    end
    if (reset) begin // @[adderTree.scala 15:60]
      man_buffer_1 <= 28'h0; // @[adderTree.scala 15:60]
    end else begin
      man_buffer_1 <= {{3'd0}, io_mans_1}; // @[adderTree.scala 21:23]
    end
    if (reset) begin // @[adderTree.scala 15:60]
      man_buffer_2 <= 28'h0; // @[adderTree.scala 15:60]
    end else begin
      man_buffer_2 <= {{3'd0}, io_mans_2}; // @[adderTree.scala 21:23]
    end
    if (reset) begin // @[adderTree.scala 15:60]
      man_buffer_3 <= 28'h0; // @[adderTree.scala 15:60]
    end else begin
      man_buffer_3 <= {{3'd0}, io_mans_3}; // @[adderTree.scala 21:23]
    end
    if (reset) begin // @[adderTree.scala 16:75]
      man_buffer_two_complement_0 <= 29'sh0; // @[adderTree.scala 16:75]
    end else if (counter == 10'h4) begin // @[adderTree.scala 27:47]
      if (_exp_buffer_0_T) begin // @[adderTree.scala 33:56]
        man_buffer_two_complement_0 <= _man_buffer_two_complement_0_T_14;
      end else begin
        man_buffer_two_complement_0 <= _man_buffer_two_complement_0_T_18;
      end
    end else if ($signed(_GEN_4) == 2'sh1) begin // @[adderTree.scala 23:44]
      man_buffer_two_complement_0 <= _man_buffer_two_complement_0_T_6;
    end else begin
      man_buffer_two_complement_0 <= _man_buffer_two_complement_0_T_8;
    end
    if (reset) begin // @[adderTree.scala 16:75]
      man_buffer_two_complement_1 <= 29'sh0; // @[adderTree.scala 16:75]
    end else if (counter == 10'h4) begin // @[adderTree.scala 27:47]
      if (_exp_buffer_1_T) begin // @[adderTree.scala 33:56]
        man_buffer_two_complement_1 <= _man_buffer_two_complement_1_T_14;
      end else begin
        man_buffer_two_complement_1 <= _man_buffer_two_complement_1_T_18;
      end
    end else if ($signed(_GEN_5) == 2'sh1) begin // @[adderTree.scala 23:44]
      man_buffer_two_complement_1 <= _man_buffer_two_complement_1_T_6;
    end else begin
      man_buffer_two_complement_1 <= _man_buffer_two_complement_1_T_8;
    end
    if (reset) begin // @[adderTree.scala 16:75]
      man_buffer_two_complement_2 <= 29'sh0; // @[adderTree.scala 16:75]
    end else if ($signed(_GEN_6) == 2'sh1) begin // @[adderTree.scala 23:44]
      man_buffer_two_complement_2 <= _man_buffer_two_complement_2_T_6;
    end else begin
      man_buffer_two_complement_2 <= _man_buffer_two_complement_2_T_8;
    end
    if (reset) begin // @[adderTree.scala 16:75]
      man_buffer_two_complement_3 <= 29'sh0; // @[adderTree.scala 16:75]
    end else if ($signed(_GEN_7) == 2'sh1) begin // @[adderTree.scala 23:44]
      man_buffer_two_complement_3 <= _man_buffer_two_complement_3_T_6;
    end else begin
      man_buffer_two_complement_3 <= _man_buffer_two_complement_3_T_8;
    end
    if (reset) begin // @[adderTree.scala 17:26]
      counter <= 10'h0; // @[adderTree.scala 17:26]
    end else begin
      counter <= _counter_T_1; // @[adderTree.scala 24:17]
    end
    if (reset) begin // @[adderTree.scala 43:38]
      concatenated_output <= 29'h0; // @[adderTree.scala 43:38]
    end else if (man_buffer_two_complement_0[28]) begin // @[adderTree.scala 44:31]
      concatenated_output <= _concatenated_output_T_6;
    end else begin
      concatenated_output <= man_buffer_two_complement_0;
    end
    if (reset) begin // @[adderTree.scala 46:30]
      right_shift <= 8'h0; // @[adderTree.scala 46:30]
    end else begin
      right_shift <= {{3'd0}, _right_shift_T_44}; // @[adderTree.scala 50:17]
    end
    if (reset) begin // @[adderTree.scala 47:31]
      actual_shift <= 8'h0; // @[adderTree.scala 47:31]
    end else begin
      actual_shift <= _actual_shift_T_1; // @[adderTree.scala 52:18]
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
  exp_buffer_0 = _RAND_0[7:0];
  _RAND_1 = {1{`RANDOM}};
  exp_buffer_1 = _RAND_1[7:0];
  _RAND_2 = {1{`RANDOM}};
  exp_buffer_2 = _RAND_2[7:0];
  _RAND_3 = {1{`RANDOM}};
  exp_buffer_3 = _RAND_3[7:0];
  _RAND_4 = {1{`RANDOM}};
  man_buffer_0 = _RAND_4[27:0];
  _RAND_5 = {1{`RANDOM}};
  man_buffer_1 = _RAND_5[27:0];
  _RAND_6 = {1{`RANDOM}};
  man_buffer_2 = _RAND_6[27:0];
  _RAND_7 = {1{`RANDOM}};
  man_buffer_3 = _RAND_7[27:0];
  _RAND_8 = {1{`RANDOM}};
  man_buffer_two_complement_0 = _RAND_8[28:0];
  _RAND_9 = {1{`RANDOM}};
  man_buffer_two_complement_1 = _RAND_9[28:0];
  _RAND_10 = {1{`RANDOM}};
  man_buffer_two_complement_2 = _RAND_10[28:0];
  _RAND_11 = {1{`RANDOM}};
  man_buffer_two_complement_3 = _RAND_11[28:0];
  _RAND_12 = {1{`RANDOM}};
  counter = _RAND_12[9:0];
  _RAND_13 = {1{`RANDOM}};
  concatenated_output = _RAND_13[28:0];
  _RAND_14 = {1{`RANDOM}};
  right_shift = _RAND_14[7:0];
  _RAND_15 = {1{`RANDOM}};
  actual_shift = _RAND_15[7:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
