module adderTree2(
  input         clock,
  input         reset,
  input  [27:0] io_in_sign_man_0,
  input  [27:0] io_in_sign_man_1,
  input  [27:0] io_in_sign_man_2,
  input  [27:0] io_in_sign_man_3,
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
  reg [30:0] man_buffer_two_complement_0; // @[bundled_block_division.scala 28:12]
  reg [30:0] man_buffer_two_complement_1; // @[bundled_block_division.scala 28:12]
  reg [30:0] man_buffer_two_complement_2; // @[bundled_block_division.scala 28:12]
  reg [30:0] man_buffer_two_complement_3; // @[bundled_block_division.scala 28:12]
  reg [9:0] v; // @[bundled_block_division.scala 42:18]
  reg  enable; // @[bundled_block_division.scala 43:19]
  wire  _GEN_8 = io_in_control_signal2 | enable; // @[bundled_block_division.scala 44:39 45:12 43:19]
  wire [9:0] _v_T_1 = v + 10'h1; // @[bundled_block_division.scala 53:16]
  wire  _exp_buffer_0_T = exp_buffer_0 > exp_buffer_1; // @[bundled_block_division.scala 57:31]
  wire [8:0] _exp_difference_T_2 = exp_buffer_0 - exp_buffer_1; // @[bundled_block_division.scala 63:31]
  wire [8:0] _exp_difference_T_4 = exp_buffer_1 - exp_buffer_0; // @[bundled_block_division.scala 64:35]
  wire [8:0] exp_difference = _exp_buffer_0_T ? _exp_difference_T_2 : _exp_difference_T_4; // @[bundled_block_division.scala 61:35]
  wire [30:0] _man_buffer_two_complement_0_T_4 = ~man_buffer_two_complement_1; // @[bundled_block_division.scala 69:21]
  wire [30:0] _man_buffer_two_complement_0_T_7 = $signed(_man_buffer_two_complement_0_T_4) + 31'sh1; // @[bundled_block_division.scala 69:61]
  wire [30:0] _man_buffer_two_complement_0_T_8 = $signed(_man_buffer_two_complement_0_T_7) >>> exp_difference; // @[bundled_block_division.scala 69:68]
  wire [30:0] _man_buffer_two_complement_0_T_11 = 31'sh0 - $signed(_man_buffer_two_complement_0_T_8); // @[bundled_block_division.scala 69:17]
  wire [30:0] _man_buffer_two_complement_0_T_12 = $signed(man_buffer_two_complement_1) >>> exp_difference; // @[bundled_block_division.scala 70:51]
  wire [30:0] _man_buffer_two_complement_0_T_13 = man_buffer_two_complement_1[30] ? $signed(
    _man_buffer_two_complement_0_T_11) : $signed(_man_buffer_two_complement_0_T_12); // @[bundled_block_division.scala 68:51]
  wire [30:0] _man_buffer_two_complement_0_T_16 = $signed(man_buffer_two_complement_0) + $signed(
    _man_buffer_two_complement_0_T_13); // @[bundled_block_division.scala 68:46]
  wire [30:0] _man_buffer_two_complement_0_T_20 = ~man_buffer_two_complement_0; // @[bundled_block_division.scala 73:21]
  wire [30:0] _man_buffer_two_complement_0_T_23 = $signed(_man_buffer_two_complement_0_T_20) + 31'sh1; // @[bundled_block_division.scala 73:57]
  wire [30:0] _man_buffer_two_complement_0_T_24 = $signed(_man_buffer_two_complement_0_T_23) >>> exp_difference; // @[bundled_block_division.scala 73:64]
  wire [30:0] _man_buffer_two_complement_0_T_27 = 31'sh0 - $signed(_man_buffer_two_complement_0_T_24); // @[bundled_block_division.scala 73:17]
  wire [30:0] _man_buffer_two_complement_0_T_28 = $signed(man_buffer_two_complement_0) >>> exp_difference; // @[bundled_block_division.scala 74:47]
  wire [30:0] _man_buffer_two_complement_0_T_29 = man_buffer_two_complement_0[30] ? $signed(
    _man_buffer_two_complement_0_T_27) : $signed(_man_buffer_two_complement_0_T_28); // @[bundled_block_division.scala 72:55]
  wire [30:0] _man_buffer_two_complement_0_T_32 = $signed(man_buffer_two_complement_1) + $signed(
    _man_buffer_two_complement_0_T_29); // @[bundled_block_division.scala 72:50]
  wire  _exp_buffer_1_T = exp_buffer_2 > exp_buffer_3; // @[bundled_block_division.scala 57:31]
  wire [8:0] _exp_difference_T_7 = exp_buffer_2 - exp_buffer_3; // @[bundled_block_division.scala 63:31]
  wire [8:0] _exp_difference_T_9 = exp_buffer_3 - exp_buffer_2; // @[bundled_block_division.scala 64:35]
  wire [8:0] exp_difference_1 = _exp_buffer_1_T ? _exp_difference_T_7 : _exp_difference_T_9; // @[bundled_block_division.scala 61:35]
  wire [30:0] _man_buffer_two_complement_1_T_4 = ~man_buffer_two_complement_3; // @[bundled_block_division.scala 69:21]
  wire [30:0] _man_buffer_two_complement_1_T_7 = $signed(_man_buffer_two_complement_1_T_4) + 31'sh1; // @[bundled_block_division.scala 69:61]
  wire [30:0] _man_buffer_two_complement_1_T_8 = $signed(_man_buffer_two_complement_1_T_7) >>> exp_difference_1; // @[bundled_block_division.scala 69:68]
  wire [30:0] _man_buffer_two_complement_1_T_11 = 31'sh0 - $signed(_man_buffer_two_complement_1_T_8); // @[bundled_block_division.scala 69:17]
  wire [30:0] _man_buffer_two_complement_1_T_12 = $signed(man_buffer_two_complement_3) >>> exp_difference_1; // @[bundled_block_division.scala 70:51]
  wire [30:0] _man_buffer_two_complement_1_T_13 = man_buffer_two_complement_3[30] ? $signed(
    _man_buffer_two_complement_1_T_11) : $signed(_man_buffer_two_complement_1_T_12); // @[bundled_block_division.scala 68:51]
  wire [30:0] _man_buffer_two_complement_1_T_16 = $signed(man_buffer_two_complement_2) + $signed(
    _man_buffer_two_complement_1_T_13); // @[bundled_block_division.scala 68:46]
  wire [30:0] _man_buffer_two_complement_1_T_20 = ~man_buffer_two_complement_2; // @[bundled_block_division.scala 73:21]
  wire [30:0] _man_buffer_two_complement_1_T_23 = $signed(_man_buffer_two_complement_1_T_20) + 31'sh1; // @[bundled_block_division.scala 73:57]
  wire [30:0] _man_buffer_two_complement_1_T_24 = $signed(_man_buffer_two_complement_1_T_23) >>> exp_difference_1; // @[bundled_block_division.scala 73:64]
  wire [30:0] _man_buffer_two_complement_1_T_27 = 31'sh0 - $signed(_man_buffer_two_complement_1_T_24); // @[bundled_block_division.scala 73:17]
  wire [30:0] _man_buffer_two_complement_1_T_28 = $signed(man_buffer_two_complement_2) >>> exp_difference_1; // @[bundled_block_division.scala 74:47]
  wire [30:0] _man_buffer_two_complement_1_T_29 = man_buffer_two_complement_2[30] ? $signed(
    _man_buffer_two_complement_1_T_27) : $signed(_man_buffer_two_complement_1_T_28); // @[bundled_block_division.scala 72:55]
  wire [30:0] _man_buffer_two_complement_1_T_32 = $signed(man_buffer_two_complement_3) + $signed(
    _man_buffer_two_complement_1_T_29); // @[bundled_block_division.scala 72:50]
  reg [30:0] sign_man_hbfp; // @[bundled_block_division.scala 88:30]
  wire [30:0] _sign_man_hbfp_T_3 = {1'h0,man_buffer_two_complement_0[29:0]}; // @[bundled_block_division.scala 95:11]
  wire [30:0] _sign_man_hbfp_T_4 = ~_sign_man_hbfp_T_3; // @[bundled_block_division.scala 95:5]
  wire [30:0] _sign_man_hbfp_T_6 = _sign_man_hbfp_T_4 + 31'h1; // @[bundled_block_division.scala 98:16]
  reg [7:0] right_shift; // @[bundled_block_division.scala 102:28]
  reg [7:0] actual_shift; // @[bundled_block_division.scala 103:29]
  wire [15:0] _GEN_17 = {{8'd0}, sign_man_hbfp[21:14]}; // @[Bitwise.scala 108:31]
  wire [15:0] _buf_T_5 = _GEN_17 & 16'hff; // @[Bitwise.scala 108:31]
  wire [15:0] _buf_T_7 = {sign_man_hbfp[13:6], 8'h0}; // @[Bitwise.scala 108:70]
  wire [15:0] _buf_T_9 = _buf_T_7 & 16'hff00; // @[Bitwise.scala 108:80]
  wire [15:0] _buf_T_10 = _buf_T_5 | _buf_T_9; // @[Bitwise.scala 108:39]
  wire [15:0] _GEN_18 = {{4'd0}, _buf_T_10[15:4]}; // @[Bitwise.scala 108:31]
  wire [15:0] _buf_T_15 = _GEN_18 & 16'hf0f; // @[Bitwise.scala 108:31]
  wire [15:0] _buf_T_17 = {_buf_T_10[11:0], 4'h0}; // @[Bitwise.scala 108:70]
  wire [15:0] _buf_T_19 = _buf_T_17 & 16'hf0f0; // @[Bitwise.scala 108:80]
  wire [15:0] _buf_T_20 = _buf_T_15 | _buf_T_19; // @[Bitwise.scala 108:39]
  wire [15:0] _GEN_19 = {{2'd0}, _buf_T_20[15:2]}; // @[Bitwise.scala 108:31]
  wire [15:0] _buf_T_25 = _GEN_19 & 16'h3333; // @[Bitwise.scala 108:31]
  wire [15:0] _buf_T_27 = {_buf_T_20[13:0], 2'h0}; // @[Bitwise.scala 108:70]
  wire [15:0] _buf_T_29 = _buf_T_27 & 16'hcccc; // @[Bitwise.scala 108:80]
  wire [15:0] _buf_T_30 = _buf_T_25 | _buf_T_29; // @[Bitwise.scala 108:39]
  wire [15:0] _GEN_20 = {{1'd0}, _buf_T_30[15:1]}; // @[Bitwise.scala 108:31]
  wire [15:0] _buf_T_35 = _GEN_20 & 16'h5555; // @[Bitwise.scala 108:31]
  wire [15:0] _buf_T_37 = {_buf_T_30[14:0], 1'h0}; // @[Bitwise.scala 108:70]
  wire [15:0] _buf_T_39 = _buf_T_37 & 16'haaaa; // @[Bitwise.scala 108:80]
  wire [15:0] _buf_T_40 = _buf_T_35 | _buf_T_39; // @[Bitwise.scala 108:39]
  wire [7:0] _GEN_21 = {{4'd0}, sign_man_hbfp[29:26]}; // @[Bitwise.scala 108:31]
  wire [7:0] _buf_T_45 = _GEN_21 & 8'hf; // @[Bitwise.scala 108:31]
  wire [7:0] _buf_T_47 = {sign_man_hbfp[25:22], 4'h0}; // @[Bitwise.scala 108:70]
  wire [7:0] _buf_T_49 = _buf_T_47 & 8'hf0; // @[Bitwise.scala 108:80]
  wire [7:0] _buf_T_50 = _buf_T_45 | _buf_T_49; // @[Bitwise.scala 108:39]
  wire [7:0] _GEN_22 = {{2'd0}, _buf_T_50[7:2]}; // @[Bitwise.scala 108:31]
  wire [7:0] _buf_T_55 = _GEN_22 & 8'h33; // @[Bitwise.scala 108:31]
  wire [7:0] _buf_T_57 = {_buf_T_50[5:0], 2'h0}; // @[Bitwise.scala 108:70]
  wire [7:0] _buf_T_59 = _buf_T_57 & 8'hcc; // @[Bitwise.scala 108:80]
  wire [7:0] _buf_T_60 = _buf_T_55 | _buf_T_59; // @[Bitwise.scala 108:39]
  wire [7:0] _GEN_23 = {{1'd0}, _buf_T_60[7:1]}; // @[Bitwise.scala 108:31]
  wire [7:0] _buf_T_65 = _GEN_23 & 8'h55; // @[Bitwise.scala 108:31]
  wire [7:0] _buf_T_67 = {_buf_T_60[6:0], 1'h0}; // @[Bitwise.scala 108:70]
  wire [7:0] _buf_T_69 = _buf_T_67 & 8'haa; // @[Bitwise.scala 108:80]
  wire [7:0] _buf_T_70 = _buf_T_65 | _buf_T_69; // @[Bitwise.scala 108:39]
  wire [24:0] buf_ = {1'h0,_buf_T_40,_buf_T_70}; // @[bundled_block_division.scala 104:17]
  wire [4:0] _right_shift_T_25 = buf_[23] ? 5'h17 : 5'h18; // @[Mux.scala 47:70]
  wire [4:0] _right_shift_T_26 = buf_[22] ? 5'h16 : _right_shift_T_25; // @[Mux.scala 47:70]
  wire [4:0] _right_shift_T_27 = buf_[21] ? 5'h15 : _right_shift_T_26; // @[Mux.scala 47:70]
  wire [4:0] _right_shift_T_28 = buf_[20] ? 5'h14 : _right_shift_T_27; // @[Mux.scala 47:70]
  wire [4:0] _right_shift_T_29 = buf_[19] ? 5'h13 : _right_shift_T_28; // @[Mux.scala 47:70]
  wire [4:0] _right_shift_T_30 = buf_[18] ? 5'h12 : _right_shift_T_29; // @[Mux.scala 47:70]
  wire [4:0] _right_shift_T_31 = buf_[17] ? 5'h11 : _right_shift_T_30; // @[Mux.scala 47:70]
  wire [4:0] _right_shift_T_32 = buf_[16] ? 5'h10 : _right_shift_T_31; // @[Mux.scala 47:70]
  wire [4:0] _right_shift_T_33 = buf_[15] ? 5'hf : _right_shift_T_32; // @[Mux.scala 47:70]
  wire [4:0] _right_shift_T_34 = buf_[14] ? 5'he : _right_shift_T_33; // @[Mux.scala 47:70]
  wire [4:0] _right_shift_T_35 = buf_[13] ? 5'hd : _right_shift_T_34; // @[Mux.scala 47:70]
  wire [4:0] _right_shift_T_36 = buf_[12] ? 5'hc : _right_shift_T_35; // @[Mux.scala 47:70]
  wire [4:0] _right_shift_T_37 = buf_[11] ? 5'hb : _right_shift_T_36; // @[Mux.scala 47:70]
  wire [4:0] _right_shift_T_38 = buf_[10] ? 5'ha : _right_shift_T_37; // @[Mux.scala 47:70]
  wire [4:0] _right_shift_T_39 = buf_[9] ? 5'h9 : _right_shift_T_38; // @[Mux.scala 47:70]
  wire [4:0] _right_shift_T_40 = buf_[8] ? 5'h8 : _right_shift_T_39; // @[Mux.scala 47:70]
  wire [4:0] _right_shift_T_41 = buf_[7] ? 5'h7 : _right_shift_T_40; // @[Mux.scala 47:70]
  wire [4:0] _right_shift_T_42 = buf_[6] ? 5'h6 : _right_shift_T_41; // @[Mux.scala 47:70]
  wire [4:0] _right_shift_T_43 = buf_[5] ? 5'h5 : _right_shift_T_42; // @[Mux.scala 47:70]
  wire [4:0] _right_shift_T_44 = buf_[4] ? 5'h4 : _right_shift_T_43; // @[Mux.scala 47:70]
  wire [4:0] _right_shift_T_45 = buf_[3] ? 5'h3 : _right_shift_T_44; // @[Mux.scala 47:70]
  wire [4:0] _right_shift_T_46 = buf_[2] ? 5'h2 : _right_shift_T_45; // @[Mux.scala 47:70]
  wire [4:0] _right_shift_T_47 = buf_[1] ? 5'h1 : _right_shift_T_46; // @[Mux.scala 47:70]
  wire [4:0] _right_shift_T_48 = buf_[0] ? 5'h0 : _right_shift_T_47; // @[Mux.scala 47:70]
  wire [7:0] _actual_shift_T_1 = 8'h1d - right_shift; // @[bundled_block_division.scala 110:75]
  wire [7:0] _actual_shift_T_3 = _actual_shift_T_1 - 8'h5; // @[bundled_block_division.scala 110:89]
  wire [30:0] man_out_shifted = sign_man_hbfp >> actual_shift; // @[bundled_block_division.scala 112:39]
  wire [8:0] _GEN_24 = {{1'd0}, actual_shift}; // @[bundled_block_division.scala 114:31]
  wire [9:0] exp_actual = exp_buffer_0 + _GEN_24; // @[bundled_block_division.scala 114:31]
  wire [8:0] _io_result_tree_T_2 = {man_buffer_two_complement_0[30],exp_actual[9:2]}; // @[bundled_block_division.scala 118:5]
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
      man_buffer_two_complement_0 <= 31'sh0; // @[bundled_block_division.scala 28:12]
    end else if (io_in_control_signal & enable) begin // @[bundled_block_division.scala 49:50]
      if (_exp_buffer_0_T) begin // @[bundled_block_division.scala 66:46]
        man_buffer_two_complement_0 <= _man_buffer_two_complement_0_T_16;
      end else begin
        man_buffer_two_complement_0 <= _man_buffer_two_complement_0_T_32;
      end
    end else if (~io_in_control_signal) begin // @[bundled_block_division.scala 33:37]
      man_buffer_two_complement_0 <= {{3{io_in_sign_man_0[27]}},io_in_sign_man_0}; // @[bundled_block_division.scala 38:36]
    end
    if (reset) begin // @[bundled_block_division.scala 28:12]
      man_buffer_two_complement_1 <= 31'sh0; // @[bundled_block_division.scala 28:12]
    end else if (io_in_control_signal & enable) begin // @[bundled_block_division.scala 49:50]
      if (_exp_buffer_1_T) begin // @[bundled_block_division.scala 66:46]
        man_buffer_two_complement_1 <= _man_buffer_two_complement_1_T_16;
      end else begin
        man_buffer_two_complement_1 <= _man_buffer_two_complement_1_T_32;
      end
    end else if (~io_in_control_signal) begin // @[bundled_block_division.scala 33:37]
      man_buffer_two_complement_1 <= {{3{io_in_sign_man_1[27]}},io_in_sign_man_1}; // @[bundled_block_division.scala 38:36]
    end
    if (reset) begin // @[bundled_block_division.scala 28:12]
      man_buffer_two_complement_2 <= 31'sh0; // @[bundled_block_division.scala 28:12]
    end else if (~io_in_control_signal) begin // @[bundled_block_division.scala 33:37]
      man_buffer_two_complement_2 <= {{3{io_in_sign_man_2[27]}},io_in_sign_man_2}; // @[bundled_block_division.scala 38:36]
    end
    if (reset) begin // @[bundled_block_division.scala 28:12]
      man_buffer_two_complement_3 <= 31'sh0; // @[bundled_block_division.scala 28:12]
    end else if (~io_in_control_signal) begin // @[bundled_block_division.scala 33:37]
      man_buffer_two_complement_3 <= {{3{io_in_sign_man_3[27]}},io_in_sign_man_3}; // @[bundled_block_division.scala 38:36]
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
      sign_man_hbfp <= 31'h0; // @[bundled_block_division.scala 88:30]
    end else if (man_buffer_two_complement_0[30]) begin // @[bundled_block_division.scala 91:23]
      sign_man_hbfp <= _sign_man_hbfp_T_6;
    end else begin
      sign_man_hbfp <= man_buffer_two_complement_0;
    end
    if (reset) begin // @[bundled_block_division.scala 102:28]
      right_shift <= 8'h0; // @[bundled_block_division.scala 102:28]
    end else begin
      right_shift <= {{3'd0}, _right_shift_T_48}; // @[bundled_block_division.scala 108:15]
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
  man_buffer_two_complement_0 = _RAND_4[30:0];
  _RAND_5 = {1{`RANDOM}};
  man_buffer_two_complement_1 = _RAND_5[30:0];
  _RAND_6 = {1{`RANDOM}};
  man_buffer_two_complement_2 = _RAND_6[30:0];
  _RAND_7 = {1{`RANDOM}};
  man_buffer_two_complement_3 = _RAND_7[30:0];
  _RAND_8 = {1{`RANDOM}};
  v = _RAND_8[9:0];
  _RAND_9 = {1{`RANDOM}};
  enable = _RAND_9[0:0];
  _RAND_10 = {1{`RANDOM}};
  sign_man_hbfp = _RAND_10[30:0];
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
  input  [5:0]  io_in_a_man_16,
  input  [5:0]  io_in_a_man_17,
  input  [5:0]  io_in_a_man_18,
  input  [5:0]  io_in_a_man_19,
  input  [5:0]  io_in_a_man_20,
  input  [5:0]  io_in_a_man_21,
  input  [5:0]  io_in_a_man_22,
  input  [5:0]  io_in_a_man_23,
  input  [5:0]  io_in_a_man_24,
  input  [5:0]  io_in_a_man_25,
  input  [5:0]  io_in_a_man_26,
  input  [5:0]  io_in_a_man_27,
  input  [5:0]  io_in_a_man_28,
  input  [5:0]  io_in_a_man_29,
  input  [5:0]  io_in_a_man_30,
  input  [5:0]  io_in_a_man_31,
  input  [5:0]  io_in_a_man_32,
  input  [5:0]  io_in_a_man_33,
  input  [5:0]  io_in_a_man_34,
  input  [5:0]  io_in_a_man_35,
  input  [5:0]  io_in_a_man_36,
  input  [5:0]  io_in_a_man_37,
  input  [5:0]  io_in_a_man_38,
  input  [5:0]  io_in_a_man_39,
  input  [5:0]  io_in_a_man_40,
  input  [5:0]  io_in_a_man_41,
  input  [5:0]  io_in_a_man_42,
  input  [5:0]  io_in_a_man_43,
  input  [5:0]  io_in_a_man_44,
  input  [5:0]  io_in_a_man_45,
  input  [5:0]  io_in_a_man_46,
  input  [5:0]  io_in_a_man_47,
  input  [5:0]  io_in_a_man_48,
  input  [5:0]  io_in_a_man_49,
  input  [5:0]  io_in_a_man_50,
  input  [5:0]  io_in_a_man_51,
  input  [5:0]  io_in_a_man_52,
  input  [5:0]  io_in_a_man_53,
  input  [5:0]  io_in_a_man_54,
  input  [5:0]  io_in_a_man_55,
  input  [5:0]  io_in_a_man_56,
  input  [5:0]  io_in_a_man_57,
  input  [5:0]  io_in_a_man_58,
  input  [5:0]  io_in_a_man_59,
  input  [5:0]  io_in_a_man_60,
  input  [5:0]  io_in_a_man_61,
  input  [5:0]  io_in_a_man_62,
  input  [5:0]  io_in_a_man_63,
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
  input         io_in_a_sign_16,
  input         io_in_a_sign_17,
  input         io_in_a_sign_18,
  input         io_in_a_sign_19,
  input         io_in_a_sign_20,
  input         io_in_a_sign_21,
  input         io_in_a_sign_22,
  input         io_in_a_sign_23,
  input         io_in_a_sign_24,
  input         io_in_a_sign_25,
  input         io_in_a_sign_26,
  input         io_in_a_sign_27,
  input         io_in_a_sign_28,
  input         io_in_a_sign_29,
  input         io_in_a_sign_30,
  input         io_in_a_sign_31,
  input         io_in_a_sign_32,
  input         io_in_a_sign_33,
  input         io_in_a_sign_34,
  input         io_in_a_sign_35,
  input         io_in_a_sign_36,
  input         io_in_a_sign_37,
  input         io_in_a_sign_38,
  input         io_in_a_sign_39,
  input         io_in_a_sign_40,
  input         io_in_a_sign_41,
  input         io_in_a_sign_42,
  input         io_in_a_sign_43,
  input         io_in_a_sign_44,
  input         io_in_a_sign_45,
  input         io_in_a_sign_46,
  input         io_in_a_sign_47,
  input         io_in_a_sign_48,
  input         io_in_a_sign_49,
  input         io_in_a_sign_50,
  input         io_in_a_sign_51,
  input         io_in_a_sign_52,
  input         io_in_a_sign_53,
  input         io_in_a_sign_54,
  input         io_in_a_sign_55,
  input         io_in_a_sign_56,
  input         io_in_a_sign_57,
  input         io_in_a_sign_58,
  input         io_in_a_sign_59,
  input         io_in_a_sign_60,
  input         io_in_a_sign_61,
  input         io_in_a_sign_62,
  input         io_in_a_sign_63,
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
  input  [5:0]  io_in_b_man_16,
  input  [5:0]  io_in_b_man_17,
  input  [5:0]  io_in_b_man_18,
  input  [5:0]  io_in_b_man_19,
  input  [5:0]  io_in_b_man_20,
  input  [5:0]  io_in_b_man_21,
  input  [5:0]  io_in_b_man_22,
  input  [5:0]  io_in_b_man_23,
  input  [5:0]  io_in_b_man_24,
  input  [5:0]  io_in_b_man_25,
  input  [5:0]  io_in_b_man_26,
  input  [5:0]  io_in_b_man_27,
  input  [5:0]  io_in_b_man_28,
  input  [5:0]  io_in_b_man_29,
  input  [5:0]  io_in_b_man_30,
  input  [5:0]  io_in_b_man_31,
  input  [5:0]  io_in_b_man_32,
  input  [5:0]  io_in_b_man_33,
  input  [5:0]  io_in_b_man_34,
  input  [5:0]  io_in_b_man_35,
  input  [5:0]  io_in_b_man_36,
  input  [5:0]  io_in_b_man_37,
  input  [5:0]  io_in_b_man_38,
  input  [5:0]  io_in_b_man_39,
  input  [5:0]  io_in_b_man_40,
  input  [5:0]  io_in_b_man_41,
  input  [5:0]  io_in_b_man_42,
  input  [5:0]  io_in_b_man_43,
  input  [5:0]  io_in_b_man_44,
  input  [5:0]  io_in_b_man_45,
  input  [5:0]  io_in_b_man_46,
  input  [5:0]  io_in_b_man_47,
  input  [5:0]  io_in_b_man_48,
  input  [5:0]  io_in_b_man_49,
  input  [5:0]  io_in_b_man_50,
  input  [5:0]  io_in_b_man_51,
  input  [5:0]  io_in_b_man_52,
  input  [5:0]  io_in_b_man_53,
  input  [5:0]  io_in_b_man_54,
  input  [5:0]  io_in_b_man_55,
  input  [5:0]  io_in_b_man_56,
  input  [5:0]  io_in_b_man_57,
  input  [5:0]  io_in_b_man_58,
  input  [5:0]  io_in_b_man_59,
  input  [5:0]  io_in_b_man_60,
  input  [5:0]  io_in_b_man_61,
  input  [5:0]  io_in_b_man_62,
  input  [5:0]  io_in_b_man_63,
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
  input         io_in_b_sign_16,
  input         io_in_b_sign_17,
  input         io_in_b_sign_18,
  input         io_in_b_sign_19,
  input         io_in_b_sign_20,
  input         io_in_b_sign_21,
  input         io_in_b_sign_22,
  input         io_in_b_sign_23,
  input         io_in_b_sign_24,
  input         io_in_b_sign_25,
  input         io_in_b_sign_26,
  input         io_in_b_sign_27,
  input         io_in_b_sign_28,
  input         io_in_b_sign_29,
  input         io_in_b_sign_30,
  input         io_in_b_sign_31,
  input         io_in_b_sign_32,
  input         io_in_b_sign_33,
  input         io_in_b_sign_34,
  input         io_in_b_sign_35,
  input         io_in_b_sign_36,
  input         io_in_b_sign_37,
  input         io_in_b_sign_38,
  input         io_in_b_sign_39,
  input         io_in_b_sign_40,
  input         io_in_b_sign_41,
  input         io_in_b_sign_42,
  input         io_in_b_sign_43,
  input         io_in_b_sign_44,
  input         io_in_b_sign_45,
  input         io_in_b_sign_46,
  input         io_in_b_sign_47,
  input         io_in_b_sign_48,
  input         io_in_b_sign_49,
  input         io_in_b_sign_50,
  input         io_in_b_sign_51,
  input         io_in_b_sign_52,
  input         io_in_b_sign_53,
  input         io_in_b_sign_54,
  input         io_in_b_sign_55,
  input         io_in_b_sign_56,
  input         io_in_b_sign_57,
  input         io_in_b_sign_58,
  input         io_in_b_sign_59,
  input         io_in_b_sign_60,
  input         io_in_b_sign_61,
  input         io_in_b_sign_62,
  input         io_in_b_sign_63,
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
  reg [31:0] _RAND_120;
  reg [31:0] _RAND_121;
  reg [31:0] _RAND_122;
  reg [31:0] _RAND_123;
  reg [31:0] _RAND_124;
  reg [31:0] _RAND_125;
  reg [31:0] _RAND_126;
  reg [31:0] _RAND_127;
  reg [31:0] _RAND_128;
  reg [31:0] _RAND_129;
  reg [31:0] _RAND_130;
  reg [31:0] _RAND_131;
  reg [31:0] _RAND_132;
  reg [31:0] _RAND_133;
  reg [31:0] _RAND_134;
  reg [31:0] _RAND_135;
  reg [31:0] _RAND_136;
  reg [31:0] _RAND_137;
  reg [31:0] _RAND_138;
  reg [31:0] _RAND_139;
  reg [31:0] _RAND_140;
  reg [31:0] _RAND_141;
  reg [31:0] _RAND_142;
  reg [31:0] _RAND_143;
  reg [31:0] _RAND_144;
  reg [31:0] _RAND_145;
  reg [31:0] _RAND_146;
  reg [31:0] _RAND_147;
  reg [31:0] _RAND_148;
  reg [31:0] _RAND_149;
  reg [31:0] _RAND_150;
  reg [31:0] _RAND_151;
  reg [31:0] _RAND_152;
  reg [31:0] _RAND_153;
  reg [31:0] _RAND_154;
  reg [31:0] _RAND_155;
  reg [31:0] _RAND_156;
  reg [31:0] _RAND_157;
  reg [31:0] _RAND_158;
  reg [31:0] _RAND_159;
  reg [31:0] _RAND_160;
  reg [31:0] _RAND_161;
  reg [31:0] _RAND_162;
  reg [31:0] _RAND_163;
  reg [31:0] _RAND_164;
  reg [31:0] _RAND_165;
  reg [31:0] _RAND_166;
  reg [31:0] _RAND_167;
  reg [31:0] _RAND_168;
  reg [31:0] _RAND_169;
  reg [31:0] _RAND_170;
  reg [31:0] _RAND_171;
  reg [31:0] _RAND_172;
  reg [31:0] _RAND_173;
  reg [31:0] _RAND_174;
  reg [31:0] _RAND_175;
  reg [31:0] _RAND_176;
  reg [31:0] _RAND_177;
  reg [31:0] _RAND_178;
  reg [31:0] _RAND_179;
  reg [31:0] _RAND_180;
  reg [31:0] _RAND_181;
  reg [31:0] _RAND_182;
  reg [31:0] _RAND_183;
  reg [31:0] _RAND_184;
  reg [31:0] _RAND_185;
  reg [31:0] _RAND_186;
  reg [31:0] _RAND_187;
  reg [31:0] _RAND_188;
  reg [31:0] _RAND_189;
  reg [31:0] _RAND_190;
  reg [31:0] _RAND_191;
  reg [31:0] _RAND_192;
  reg [31:0] _RAND_193;
  reg [31:0] _RAND_194;
  reg [31:0] _RAND_195;
  reg [31:0] _RAND_196;
  reg [31:0] _RAND_197;
  reg [31:0] _RAND_198;
  reg [31:0] _RAND_199;
  reg [31:0] _RAND_200;
  reg [31:0] _RAND_201;
  reg [31:0] _RAND_202;
  reg [31:0] _RAND_203;
  reg [31:0] _RAND_204;
  reg [31:0] _RAND_205;
  reg [31:0] _RAND_206;
  reg [31:0] _RAND_207;
  reg [31:0] _RAND_208;
  reg [31:0] _RAND_209;
  reg [31:0] _RAND_210;
  reg [31:0] _RAND_211;
  reg [31:0] _RAND_212;
  reg [31:0] _RAND_213;
  reg [31:0] _RAND_214;
  reg [31:0] _RAND_215;
  reg [31:0] _RAND_216;
  reg [31:0] _RAND_217;
  reg [31:0] _RAND_218;
  reg [31:0] _RAND_219;
  reg [31:0] _RAND_220;
  reg [31:0] _RAND_221;
  reg [31:0] _RAND_222;
  reg [31:0] _RAND_223;
  reg [31:0] _RAND_224;
  reg [31:0] _RAND_225;
  reg [31:0] _RAND_226;
  reg [31:0] _RAND_227;
  reg [31:0] _RAND_228;
  reg [31:0] _RAND_229;
  reg [31:0] _RAND_230;
  reg [31:0] _RAND_231;
  reg [31:0] _RAND_232;
  reg [31:0] _RAND_233;
  reg [31:0] _RAND_234;
  reg [31:0] _RAND_235;
  reg [31:0] _RAND_236;
  reg [31:0] _RAND_237;
  reg [31:0] _RAND_238;
  reg [31:0] _RAND_239;
  reg [31:0] _RAND_240;
  reg [31:0] _RAND_241;
  reg [31:0] _RAND_242;
  reg [31:0] _RAND_243;
  reg [31:0] _RAND_244;
  reg [31:0] _RAND_245;
  reg [31:0] _RAND_246;
  reg [31:0] _RAND_247;
  reg [31:0] _RAND_248;
  reg [31:0] _RAND_249;
  reg [31:0] _RAND_250;
  reg [31:0] _RAND_251;
  reg [31:0] _RAND_252;
  reg [31:0] _RAND_253;
  reg [31:0] _RAND_254;
  reg [31:0] _RAND_255;
  reg [31:0] _RAND_256;
  reg [31:0] _RAND_257;
  reg [31:0] _RAND_258;
  reg [31:0] _RAND_259;
  reg [31:0] _RAND_260;
  reg [31:0] _RAND_261;
  reg [31:0] _RAND_262;
  reg [31:0] _RAND_263;
  reg [31:0] _RAND_264;
  reg [31:0] _RAND_265;
  reg [31:0] _RAND_266;
  reg [31:0] _RAND_267;
  reg [31:0] _RAND_268;
  reg [31:0] _RAND_269;
  reg [31:0] _RAND_270;
  reg [31:0] _RAND_271;
  reg [31:0] _RAND_272;
  reg [31:0] _RAND_273;
  reg [31:0] _RAND_274;
  reg [31:0] _RAND_275;
  reg [31:0] _RAND_276;
  reg [31:0] _RAND_277;
  reg [31:0] _RAND_278;
  reg [31:0] _RAND_279;
  reg [31:0] _RAND_280;
  reg [31:0] _RAND_281;
  reg [31:0] _RAND_282;
  reg [31:0] _RAND_283;
  reg [31:0] _RAND_284;
  reg [31:0] _RAND_285;
  reg [31:0] _RAND_286;
  reg [31:0] _RAND_287;
  reg [31:0] _RAND_288;
  reg [31:0] _RAND_289;
  reg [31:0] _RAND_290;
  reg [31:0] _RAND_291;
  reg [31:0] _RAND_292;
  reg [31:0] _RAND_293;
  reg [31:0] _RAND_294;
  reg [31:0] _RAND_295;
  reg [31:0] _RAND_296;
  reg [31:0] _RAND_297;
  reg [31:0] _RAND_298;
  reg [31:0] _RAND_299;
  reg [31:0] _RAND_300;
  reg [31:0] _RAND_301;
  reg [31:0] _RAND_302;
  reg [31:0] _RAND_303;
  reg [31:0] _RAND_304;
  reg [31:0] _RAND_305;
  reg [31:0] _RAND_306;
  reg [31:0] _RAND_307;
  reg [31:0] _RAND_308;
  reg [31:0] _RAND_309;
  reg [31:0] _RAND_310;
  reg [31:0] _RAND_311;
  reg [31:0] _RAND_312;
  reg [31:0] _RAND_313;
  reg [31:0] _RAND_314;
  reg [31:0] _RAND_315;
  reg [31:0] _RAND_316;
  reg [31:0] _RAND_317;
  reg [31:0] _RAND_318;
  reg [31:0] _RAND_319;
  reg [31:0] _RAND_320;
  reg [31:0] _RAND_321;
  reg [31:0] _RAND_322;
  reg [31:0] _RAND_323;
  reg [31:0] _RAND_324;
  reg [31:0] _RAND_325;
  reg [31:0] _RAND_326;
  reg [31:0] _RAND_327;
  reg [31:0] _RAND_328;
  reg [31:0] _RAND_329;
  reg [31:0] _RAND_330;
  reg [31:0] _RAND_331;
  reg [31:0] _RAND_332;
  reg [31:0] _RAND_333;
  reg [31:0] _RAND_334;
  reg [31:0] _RAND_335;
  reg [31:0] _RAND_336;
  reg [31:0] _RAND_337;
  reg [31:0] _RAND_338;
  reg [31:0] _RAND_339;
  reg [31:0] _RAND_340;
  reg [31:0] _RAND_341;
  reg [31:0] _RAND_342;
  reg [31:0] _RAND_343;
  reg [31:0] _RAND_344;
  reg [31:0] _RAND_345;
  reg [31:0] _RAND_346;
  reg [31:0] _RAND_347;
  reg [31:0] _RAND_348;
  reg [31:0] _RAND_349;
  reg [31:0] _RAND_350;
  reg [31:0] _RAND_351;
  reg [31:0] _RAND_352;
  reg [31:0] _RAND_353;
  reg [31:0] _RAND_354;
  reg [31:0] _RAND_355;
  reg [31:0] _RAND_356;
  reg [31:0] _RAND_357;
  reg [31:0] _RAND_358;
  reg [31:0] _RAND_359;
  reg [31:0] _RAND_360;
  reg [31:0] _RAND_361;
  reg [31:0] _RAND_362;
  reg [31:0] _RAND_363;
  reg [31:0] _RAND_364;
  reg [31:0] _RAND_365;
  reg [31:0] _RAND_366;
  reg [31:0] _RAND_367;
  reg [31:0] _RAND_368;
  reg [31:0] _RAND_369;
  reg [31:0] _RAND_370;
  reg [31:0] _RAND_371;
  reg [31:0] _RAND_372;
  reg [31:0] _RAND_373;
  reg [31:0] _RAND_374;
  reg [31:0] _RAND_375;
  reg [31:0] _RAND_376;
  reg [31:0] _RAND_377;
  reg [31:0] _RAND_378;
  reg [31:0] _RAND_379;
  reg [31:0] _RAND_380;
  reg [31:0] _RAND_381;
  reg [31:0] _RAND_382;
  reg [31:0] _RAND_383;
  reg [31:0] _RAND_384;
  reg [31:0] _RAND_385;
  reg [31:0] _RAND_386;
  reg [31:0] _RAND_387;
  reg [31:0] _RAND_388;
  reg [31:0] _RAND_389;
  reg [31:0] _RAND_390;
  reg [31:0] _RAND_391;
  reg [31:0] _RAND_392;
  reg [31:0] _RAND_393;
  reg [31:0] _RAND_394;
  reg [31:0] _RAND_395;
  reg [31:0] _RAND_396;
  reg [31:0] _RAND_397;
  reg [31:0] _RAND_398;
  reg [31:0] _RAND_399;
  reg [31:0] _RAND_400;
  reg [31:0] _RAND_401;
  reg [31:0] _RAND_402;
  reg [31:0] _RAND_403;
  reg [31:0] _RAND_404;
  reg [31:0] _RAND_405;
  reg [31:0] _RAND_406;
  reg [31:0] _RAND_407;
  reg [31:0] _RAND_408;
  reg [31:0] _RAND_409;
  reg [31:0] _RAND_410;
  reg [31:0] _RAND_411;
  reg [31:0] _RAND_412;
  reg [31:0] _RAND_413;
  reg [31:0] _RAND_414;
  reg [31:0] _RAND_415;
  reg [31:0] _RAND_416;
  reg [31:0] _RAND_417;
  reg [31:0] _RAND_418;
  reg [31:0] _RAND_419;
  reg [31:0] _RAND_420;
  reg [31:0] _RAND_421;
  reg [31:0] _RAND_422;
  reg [31:0] _RAND_423;
  reg [31:0] _RAND_424;
  reg [31:0] _RAND_425;
  reg [31:0] _RAND_426;
  reg [31:0] _RAND_427;
  reg [31:0] _RAND_428;
  reg [31:0] _RAND_429;
  reg [31:0] _RAND_430;
  reg [31:0] _RAND_431;
  reg [31:0] _RAND_432;
  reg [31:0] _RAND_433;
  reg [31:0] _RAND_434;
  reg [31:0] _RAND_435;
  reg [31:0] _RAND_436;
  reg [31:0] _RAND_437;
  reg [31:0] _RAND_438;
  reg [31:0] _RAND_439;
  reg [31:0] _RAND_440;
  reg [31:0] _RAND_441;
  reg [31:0] _RAND_442;
  reg [31:0] _RAND_443;
  reg [31:0] _RAND_444;
  reg [31:0] _RAND_445;
  reg [31:0] _RAND_446;
  reg [31:0] _RAND_447;
  reg [31:0] _RAND_448;
  reg [31:0] _RAND_449;
  reg [31:0] _RAND_450;
  reg [31:0] _RAND_451;
  reg [31:0] _RAND_452;
  reg [31:0] _RAND_453;
  reg [31:0] _RAND_454;
  reg [31:0] _RAND_455;
`endif // RANDOMIZE_REG_INIT
  wire  adderTreeInst_clock; // @[bundled_block_division.scala 180:29]
  wire  adderTreeInst_reset; // @[bundled_block_division.scala 180:29]
  wire [27:0] adderTreeInst_io_in_sign_man_0; // @[bundled_block_division.scala 180:29]
  wire [27:0] adderTreeInst_io_in_sign_man_1; // @[bundled_block_division.scala 180:29]
  wire [27:0] adderTreeInst_io_in_sign_man_2; // @[bundled_block_division.scala 180:29]
  wire [27:0] adderTreeInst_io_in_sign_man_3; // @[bundled_block_division.scala 180:29]
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
  reg [27:0] acc_0; // @[bundled_block_division.scala 139:53]
  reg [27:0] acc_1; // @[bundled_block_division.scala 139:53]
  reg [27:0] acc_2; // @[bundled_block_division.scala 139:53]
  reg [27:0] acc_3; // @[bundled_block_division.scala 139:53]
  wire [8:0] _exp_output_0_T = io_in_a_exp_0 + io_in_b_exp_0; // @[bundled_block_division.scala 142:37]
  reg [11:0] dotProductRegs__0; // @[bundled_block_division.scala 143:29]
  reg [11:0] dotProductRegs__1; // @[bundled_block_division.scala 143:29]
  reg [11:0] dotProductRegs__2; // @[bundled_block_division.scala 143:29]
  reg [11:0] dotProductRegs__3; // @[bundled_block_division.scala 143:29]
  reg [11:0] dotProductRegs__4; // @[bundled_block_division.scala 143:29]
  reg [11:0] dotProductRegs__5; // @[bundled_block_division.scala 143:29]
  reg [11:0] dotProductRegs__6; // @[bundled_block_division.scala 143:29]
  reg [11:0] dotProductRegs__7; // @[bundled_block_division.scala 143:29]
  reg [11:0] dotProductRegs__8; // @[bundled_block_division.scala 143:29]
  reg [11:0] dotProductRegs__9; // @[bundled_block_division.scala 143:29]
  reg [11:0] dotProductRegs__10; // @[bundled_block_division.scala 143:29]
  reg [11:0] dotProductRegs__11; // @[bundled_block_division.scala 143:29]
  reg [11:0] dotProductRegs__12; // @[bundled_block_division.scala 143:29]
  reg [11:0] dotProductRegs__13; // @[bundled_block_division.scala 143:29]
  reg [11:0] dotProductRegs__14; // @[bundled_block_division.scala 143:29]
  reg [11:0] dotProductRegs__15; // @[bundled_block_division.scala 143:29]
  reg  signs__0; // @[bundled_block_division.scala 144:20]
  reg  signs__1; // @[bundled_block_division.scala 144:20]
  reg  signs__2; // @[bundled_block_division.scala 144:20]
  reg  signs__3; // @[bundled_block_division.scala 144:20]
  reg  signs__4; // @[bundled_block_division.scala 144:20]
  reg  signs__5; // @[bundled_block_division.scala 144:20]
  reg  signs__6; // @[bundled_block_division.scala 144:20]
  reg  signs__7; // @[bundled_block_division.scala 144:20]
  reg  signs__8; // @[bundled_block_division.scala 144:20]
  reg  signs__9; // @[bundled_block_division.scala 144:20]
  reg  signs__10; // @[bundled_block_division.scala 144:20]
  reg  signs__11; // @[bundled_block_division.scala 144:20]
  reg  signs__12; // @[bundled_block_division.scala 144:20]
  reg  signs__13; // @[bundled_block_division.scala 144:20]
  reg  signs__14; // @[bundled_block_division.scala 144:20]
  reg  signs__15; // @[bundled_block_division.scala 144:20]
  reg [12:0] two_complement__0; // @[bundled_block_division.scala 145:29]
  reg [12:0] two_complement__1; // @[bundled_block_division.scala 145:29]
  reg [12:0] two_complement__2; // @[bundled_block_division.scala 145:29]
  reg [12:0] two_complement__3; // @[bundled_block_division.scala 145:29]
  reg [12:0] two_complement__4; // @[bundled_block_division.scala 145:29]
  reg [12:0] two_complement__5; // @[bundled_block_division.scala 145:29]
  reg [12:0] two_complement__6; // @[bundled_block_division.scala 145:29]
  reg [12:0] two_complement__7; // @[bundled_block_division.scala 145:29]
  reg [12:0] two_complement__8; // @[bundled_block_division.scala 145:29]
  reg [12:0] two_complement__9; // @[bundled_block_division.scala 145:29]
  reg [12:0] two_complement__10; // @[bundled_block_division.scala 145:29]
  reg [12:0] two_complement__11; // @[bundled_block_division.scala 145:29]
  reg [12:0] two_complement__12; // @[bundled_block_division.scala 145:29]
  reg [12:0] two_complement__13; // @[bundled_block_division.scala 145:29]
  reg [12:0] two_complement__14; // @[bundled_block_division.scala 145:29]
  reg [12:0] two_complement__15; // @[bundled_block_division.scala 145:29]
  reg [12:0] two_complement_buffer__0; // @[bundled_block_division.scala 146:36]
  reg [12:0] two_complement_buffer__1; // @[bundled_block_division.scala 146:36]
  reg [12:0] two_complement_buffer__2; // @[bundled_block_division.scala 146:36]
  reg [12:0] two_complement_buffer__3; // @[bundled_block_division.scala 146:36]
  reg [12:0] two_complement_buffer__4; // @[bundled_block_division.scala 146:36]
  reg [12:0] two_complement_buffer__5; // @[bundled_block_division.scala 146:36]
  reg [12:0] two_complement_buffer__6; // @[bundled_block_division.scala 146:36]
  reg [12:0] two_complement_buffer__7; // @[bundled_block_division.scala 146:36]
  reg [12:0] two_complement_buffer__8; // @[bundled_block_division.scala 146:36]
  reg [12:0] two_complement_buffer__9; // @[bundled_block_division.scala 146:36]
  reg [12:0] two_complement_buffer__10; // @[bundled_block_division.scala 146:36]
  reg [12:0] two_complement_buffer__11; // @[bundled_block_division.scala 146:36]
  reg [12:0] two_complement_buffer__12; // @[bundled_block_division.scala 146:36]
  reg [12:0] two_complement_buffer__13; // @[bundled_block_division.scala 146:36]
  reg [12:0] two_complement_buffer__14; // @[bundled_block_division.scala 146:36]
  reg [12:0] two_complement_buffer__15; // @[bundled_block_division.scala 146:36]
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
  reg [5:0] multiplierReg_4; // @[bundled_block_division.scala 149:34]
  reg [5:0] multiplierReg2_4; // @[bundled_block_division.scala 150:35]
  reg  signReg_4; // @[bundled_block_division.scala 152:28]
  wire [7:0] _multiplication_T_86 = multiplierReg_4[3:0] * multiplierReg2_4[3:0]; // @[bundled_block_division.scala 156:47]
  wire [3:0] _multiplication_T_88 = {2'h0,multiplierReg_4[5:4]}; // @[bundled_block_division.scala 156:83]
  wire [7:0] _multiplication_T_90 = _multiplication_T_88 * multiplierReg2_4[3:0]; // @[bundled_block_division.scala 156:106]
  wire [11:0] _GEN_24 = {_multiplication_T_90, 4'h0}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _multiplication_T_91 = {{3'd0}, _GEN_24}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _GEN_25 = {{7'd0}, _multiplication_T_86}; // @[bundled_block_division.scala 156:69]
  wire [15:0] _multiplication_T_92 = _GEN_25 + _multiplication_T_91; // @[bundled_block_division.scala 156:69]
  wire [3:0] _multiplication_T_95 = {2'h0,multiplierReg2_4[5:4]}; // @[bundled_block_division.scala 156:172]
  wire [7:0] _multiplication_T_96 = multiplierReg_4[3:0] * _multiplication_T_95; // @[bundled_block_division.scala 156:161]
  wire [11:0] _GEN_26 = {_multiplication_T_96, 4'h0}; // @[bundled_block_division.scala 156:197]
  wire [14:0] _multiplication_T_97 = {{3'd0}, _GEN_26}; // @[bundled_block_division.scala 156:197]
  wire [15:0] _GEN_27 = {{1'd0}, _multiplication_T_97}; // @[bundled_block_division.scala 156:137]
  wire [16:0] _multiplication_T_98 = _multiplication_T_92 + _GEN_27; // @[bundled_block_division.scala 156:137]
  wire [7:0] _multiplication_T_103 = _multiplication_T_88 * _multiplication_T_95; // @[bundled_block_division.scala 156:240]
  wire [15:0] _GEN_28 = {_multiplication_T_103, 8'h0}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _multiplication_T_104 = {{7'd0}, _GEN_28}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _GEN_29 = {{6'd0}, _multiplication_T_98}; // @[bundled_block_division.scala 156:205]
  wire [23:0] multiplication_4 = _GEN_29 + _multiplication_T_104; // @[bundled_block_division.scala 156:205]
  wire [12:0] _two_complement_4_T_1 = {1'h0,dotProductRegs__4}; // @[bundled_block_division.scala 159:55]
  wire [12:0] _two_complement_4_T_2 = ~_two_complement_4_T_1; // @[bundled_block_division.scala 159:49]
  wire [12:0] _two_complement_4_T_4 = _two_complement_4_T_2 + 13'h1; // @[bundled_block_division.scala 159:77]
  reg [5:0] multiplierReg_5; // @[bundled_block_division.scala 149:34]
  reg [5:0] multiplierReg2_5; // @[bundled_block_division.scala 150:35]
  reg  signReg_5; // @[bundled_block_division.scala 152:28]
  wire [7:0] _multiplication_T_107 = multiplierReg_5[3:0] * multiplierReg2_5[3:0]; // @[bundled_block_division.scala 156:47]
  wire [3:0] _multiplication_T_109 = {2'h0,multiplierReg_5[5:4]}; // @[bundled_block_division.scala 156:83]
  wire [7:0] _multiplication_T_111 = _multiplication_T_109 * multiplierReg2_5[3:0]; // @[bundled_block_division.scala 156:106]
  wire [11:0] _GEN_30 = {_multiplication_T_111, 4'h0}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _multiplication_T_112 = {{3'd0}, _GEN_30}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _GEN_31 = {{7'd0}, _multiplication_T_107}; // @[bundled_block_division.scala 156:69]
  wire [15:0] _multiplication_T_113 = _GEN_31 + _multiplication_T_112; // @[bundled_block_division.scala 156:69]
  wire [3:0] _multiplication_T_116 = {2'h0,multiplierReg2_5[5:4]}; // @[bundled_block_division.scala 156:172]
  wire [7:0] _multiplication_T_117 = multiplierReg_5[3:0] * _multiplication_T_116; // @[bundled_block_division.scala 156:161]
  wire [11:0] _GEN_32 = {_multiplication_T_117, 4'h0}; // @[bundled_block_division.scala 156:197]
  wire [14:0] _multiplication_T_118 = {{3'd0}, _GEN_32}; // @[bundled_block_division.scala 156:197]
  wire [15:0] _GEN_33 = {{1'd0}, _multiplication_T_118}; // @[bundled_block_division.scala 156:137]
  wire [16:0] _multiplication_T_119 = _multiplication_T_113 + _GEN_33; // @[bundled_block_division.scala 156:137]
  wire [7:0] _multiplication_T_124 = _multiplication_T_109 * _multiplication_T_116; // @[bundled_block_division.scala 156:240]
  wire [15:0] _GEN_34 = {_multiplication_T_124, 8'h0}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _multiplication_T_125 = {{7'd0}, _GEN_34}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _GEN_35 = {{6'd0}, _multiplication_T_119}; // @[bundled_block_division.scala 156:205]
  wire [23:0] multiplication_5 = _GEN_35 + _multiplication_T_125; // @[bundled_block_division.scala 156:205]
  wire [12:0] _two_complement_5_T_1 = {1'h0,dotProductRegs__5}; // @[bundled_block_division.scala 159:55]
  wire [12:0] _two_complement_5_T_2 = ~_two_complement_5_T_1; // @[bundled_block_division.scala 159:49]
  wire [12:0] _two_complement_5_T_4 = _two_complement_5_T_2 + 13'h1; // @[bundled_block_division.scala 159:77]
  reg [5:0] multiplierReg_6; // @[bundled_block_division.scala 149:34]
  reg [5:0] multiplierReg2_6; // @[bundled_block_division.scala 150:35]
  reg  signReg_6; // @[bundled_block_division.scala 152:28]
  wire [7:0] _multiplication_T_128 = multiplierReg_6[3:0] * multiplierReg2_6[3:0]; // @[bundled_block_division.scala 156:47]
  wire [3:0] _multiplication_T_130 = {2'h0,multiplierReg_6[5:4]}; // @[bundled_block_division.scala 156:83]
  wire [7:0] _multiplication_T_132 = _multiplication_T_130 * multiplierReg2_6[3:0]; // @[bundled_block_division.scala 156:106]
  wire [11:0] _GEN_36 = {_multiplication_T_132, 4'h0}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _multiplication_T_133 = {{3'd0}, _GEN_36}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _GEN_37 = {{7'd0}, _multiplication_T_128}; // @[bundled_block_division.scala 156:69]
  wire [15:0] _multiplication_T_134 = _GEN_37 + _multiplication_T_133; // @[bundled_block_division.scala 156:69]
  wire [3:0] _multiplication_T_137 = {2'h0,multiplierReg2_6[5:4]}; // @[bundled_block_division.scala 156:172]
  wire [7:0] _multiplication_T_138 = multiplierReg_6[3:0] * _multiplication_T_137; // @[bundled_block_division.scala 156:161]
  wire [11:0] _GEN_38 = {_multiplication_T_138, 4'h0}; // @[bundled_block_division.scala 156:197]
  wire [14:0] _multiplication_T_139 = {{3'd0}, _GEN_38}; // @[bundled_block_division.scala 156:197]
  wire [15:0] _GEN_39 = {{1'd0}, _multiplication_T_139}; // @[bundled_block_division.scala 156:137]
  wire [16:0] _multiplication_T_140 = _multiplication_T_134 + _GEN_39; // @[bundled_block_division.scala 156:137]
  wire [7:0] _multiplication_T_145 = _multiplication_T_130 * _multiplication_T_137; // @[bundled_block_division.scala 156:240]
  wire [15:0] _GEN_40 = {_multiplication_T_145, 8'h0}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _multiplication_T_146 = {{7'd0}, _GEN_40}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _GEN_41 = {{6'd0}, _multiplication_T_140}; // @[bundled_block_division.scala 156:205]
  wire [23:0] multiplication_6 = _GEN_41 + _multiplication_T_146; // @[bundled_block_division.scala 156:205]
  wire [12:0] _two_complement_6_T_1 = {1'h0,dotProductRegs__6}; // @[bundled_block_division.scala 159:55]
  wire [12:0] _two_complement_6_T_2 = ~_two_complement_6_T_1; // @[bundled_block_division.scala 159:49]
  wire [12:0] _two_complement_6_T_4 = _two_complement_6_T_2 + 13'h1; // @[bundled_block_division.scala 159:77]
  reg [5:0] multiplierReg_7; // @[bundled_block_division.scala 149:34]
  reg [5:0] multiplierReg2_7; // @[bundled_block_division.scala 150:35]
  reg  signReg_7; // @[bundled_block_division.scala 152:28]
  wire [7:0] _multiplication_T_149 = multiplierReg_7[3:0] * multiplierReg2_7[3:0]; // @[bundled_block_division.scala 156:47]
  wire [3:0] _multiplication_T_151 = {2'h0,multiplierReg_7[5:4]}; // @[bundled_block_division.scala 156:83]
  wire [7:0] _multiplication_T_153 = _multiplication_T_151 * multiplierReg2_7[3:0]; // @[bundled_block_division.scala 156:106]
  wire [11:0] _GEN_42 = {_multiplication_T_153, 4'h0}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _multiplication_T_154 = {{3'd0}, _GEN_42}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _GEN_43 = {{7'd0}, _multiplication_T_149}; // @[bundled_block_division.scala 156:69]
  wire [15:0] _multiplication_T_155 = _GEN_43 + _multiplication_T_154; // @[bundled_block_division.scala 156:69]
  wire [3:0] _multiplication_T_158 = {2'h0,multiplierReg2_7[5:4]}; // @[bundled_block_division.scala 156:172]
  wire [7:0] _multiplication_T_159 = multiplierReg_7[3:0] * _multiplication_T_158; // @[bundled_block_division.scala 156:161]
  wire [11:0] _GEN_44 = {_multiplication_T_159, 4'h0}; // @[bundled_block_division.scala 156:197]
  wire [14:0] _multiplication_T_160 = {{3'd0}, _GEN_44}; // @[bundled_block_division.scala 156:197]
  wire [15:0] _GEN_45 = {{1'd0}, _multiplication_T_160}; // @[bundled_block_division.scala 156:137]
  wire [16:0] _multiplication_T_161 = _multiplication_T_155 + _GEN_45; // @[bundled_block_division.scala 156:137]
  wire [7:0] _multiplication_T_166 = _multiplication_T_151 * _multiplication_T_158; // @[bundled_block_division.scala 156:240]
  wire [15:0] _GEN_46 = {_multiplication_T_166, 8'h0}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _multiplication_T_167 = {{7'd0}, _GEN_46}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _GEN_47 = {{6'd0}, _multiplication_T_161}; // @[bundled_block_division.scala 156:205]
  wire [23:0] multiplication_7 = _GEN_47 + _multiplication_T_167; // @[bundled_block_division.scala 156:205]
  wire [12:0] _two_complement_7_T_1 = {1'h0,dotProductRegs__7}; // @[bundled_block_division.scala 159:55]
  wire [12:0] _two_complement_7_T_2 = ~_two_complement_7_T_1; // @[bundled_block_division.scala 159:49]
  wire [12:0] _two_complement_7_T_4 = _two_complement_7_T_2 + 13'h1; // @[bundled_block_division.scala 159:77]
  reg [5:0] multiplierReg_8; // @[bundled_block_division.scala 149:34]
  reg [5:0] multiplierReg2_8; // @[bundled_block_division.scala 150:35]
  reg  signReg_8; // @[bundled_block_division.scala 152:28]
  wire [7:0] _multiplication_T_170 = multiplierReg_8[3:0] * multiplierReg2_8[3:0]; // @[bundled_block_division.scala 156:47]
  wire [3:0] _multiplication_T_172 = {2'h0,multiplierReg_8[5:4]}; // @[bundled_block_division.scala 156:83]
  wire [7:0] _multiplication_T_174 = _multiplication_T_172 * multiplierReg2_8[3:0]; // @[bundled_block_division.scala 156:106]
  wire [11:0] _GEN_48 = {_multiplication_T_174, 4'h0}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _multiplication_T_175 = {{3'd0}, _GEN_48}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _GEN_49 = {{7'd0}, _multiplication_T_170}; // @[bundled_block_division.scala 156:69]
  wire [15:0] _multiplication_T_176 = _GEN_49 + _multiplication_T_175; // @[bundled_block_division.scala 156:69]
  wire [3:0] _multiplication_T_179 = {2'h0,multiplierReg2_8[5:4]}; // @[bundled_block_division.scala 156:172]
  wire [7:0] _multiplication_T_180 = multiplierReg_8[3:0] * _multiplication_T_179; // @[bundled_block_division.scala 156:161]
  wire [11:0] _GEN_50 = {_multiplication_T_180, 4'h0}; // @[bundled_block_division.scala 156:197]
  wire [14:0] _multiplication_T_181 = {{3'd0}, _GEN_50}; // @[bundled_block_division.scala 156:197]
  wire [15:0] _GEN_51 = {{1'd0}, _multiplication_T_181}; // @[bundled_block_division.scala 156:137]
  wire [16:0] _multiplication_T_182 = _multiplication_T_176 + _GEN_51; // @[bundled_block_division.scala 156:137]
  wire [7:0] _multiplication_T_187 = _multiplication_T_172 * _multiplication_T_179; // @[bundled_block_division.scala 156:240]
  wire [15:0] _GEN_52 = {_multiplication_T_187, 8'h0}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _multiplication_T_188 = {{7'd0}, _GEN_52}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _GEN_53 = {{6'd0}, _multiplication_T_182}; // @[bundled_block_division.scala 156:205]
  wire [23:0] multiplication_8 = _GEN_53 + _multiplication_T_188; // @[bundled_block_division.scala 156:205]
  wire [12:0] _two_complement_8_T_1 = {1'h0,dotProductRegs__8}; // @[bundled_block_division.scala 159:55]
  wire [12:0] _two_complement_8_T_2 = ~_two_complement_8_T_1; // @[bundled_block_division.scala 159:49]
  wire [12:0] _two_complement_8_T_4 = _two_complement_8_T_2 + 13'h1; // @[bundled_block_division.scala 159:77]
  reg [5:0] multiplierReg_9; // @[bundled_block_division.scala 149:34]
  reg [5:0] multiplierReg2_9; // @[bundled_block_division.scala 150:35]
  reg  signReg_9; // @[bundled_block_division.scala 152:28]
  wire [7:0] _multiplication_T_191 = multiplierReg_9[3:0] * multiplierReg2_9[3:0]; // @[bundled_block_division.scala 156:47]
  wire [3:0] _multiplication_T_193 = {2'h0,multiplierReg_9[5:4]}; // @[bundled_block_division.scala 156:83]
  wire [7:0] _multiplication_T_195 = _multiplication_T_193 * multiplierReg2_9[3:0]; // @[bundled_block_division.scala 156:106]
  wire [11:0] _GEN_54 = {_multiplication_T_195, 4'h0}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _multiplication_T_196 = {{3'd0}, _GEN_54}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _GEN_55 = {{7'd0}, _multiplication_T_191}; // @[bundled_block_division.scala 156:69]
  wire [15:0] _multiplication_T_197 = _GEN_55 + _multiplication_T_196; // @[bundled_block_division.scala 156:69]
  wire [3:0] _multiplication_T_200 = {2'h0,multiplierReg2_9[5:4]}; // @[bundled_block_division.scala 156:172]
  wire [7:0] _multiplication_T_201 = multiplierReg_9[3:0] * _multiplication_T_200; // @[bundled_block_division.scala 156:161]
  wire [11:0] _GEN_56 = {_multiplication_T_201, 4'h0}; // @[bundled_block_division.scala 156:197]
  wire [14:0] _multiplication_T_202 = {{3'd0}, _GEN_56}; // @[bundled_block_division.scala 156:197]
  wire [15:0] _GEN_57 = {{1'd0}, _multiplication_T_202}; // @[bundled_block_division.scala 156:137]
  wire [16:0] _multiplication_T_203 = _multiplication_T_197 + _GEN_57; // @[bundled_block_division.scala 156:137]
  wire [7:0] _multiplication_T_208 = _multiplication_T_193 * _multiplication_T_200; // @[bundled_block_division.scala 156:240]
  wire [15:0] _GEN_58 = {_multiplication_T_208, 8'h0}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _multiplication_T_209 = {{7'd0}, _GEN_58}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _GEN_59 = {{6'd0}, _multiplication_T_203}; // @[bundled_block_division.scala 156:205]
  wire [23:0] multiplication_9 = _GEN_59 + _multiplication_T_209; // @[bundled_block_division.scala 156:205]
  wire [12:0] _two_complement_9_T_1 = {1'h0,dotProductRegs__9}; // @[bundled_block_division.scala 159:55]
  wire [12:0] _two_complement_9_T_2 = ~_two_complement_9_T_1; // @[bundled_block_division.scala 159:49]
  wire [12:0] _two_complement_9_T_4 = _two_complement_9_T_2 + 13'h1; // @[bundled_block_division.scala 159:77]
  reg [5:0] multiplierReg_10; // @[bundled_block_division.scala 149:34]
  reg [5:0] multiplierReg2_10; // @[bundled_block_division.scala 150:35]
  reg  signReg_10; // @[bundled_block_division.scala 152:28]
  wire [7:0] _multiplication_T_212 = multiplierReg_10[3:0] * multiplierReg2_10[3:0]; // @[bundled_block_division.scala 156:47]
  wire [3:0] _multiplication_T_214 = {2'h0,multiplierReg_10[5:4]}; // @[bundled_block_division.scala 156:83]
  wire [7:0] _multiplication_T_216 = _multiplication_T_214 * multiplierReg2_10[3:0]; // @[bundled_block_division.scala 156:106]
  wire [11:0] _GEN_60 = {_multiplication_T_216, 4'h0}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _multiplication_T_217 = {{3'd0}, _GEN_60}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _GEN_61 = {{7'd0}, _multiplication_T_212}; // @[bundled_block_division.scala 156:69]
  wire [15:0] _multiplication_T_218 = _GEN_61 + _multiplication_T_217; // @[bundled_block_division.scala 156:69]
  wire [3:0] _multiplication_T_221 = {2'h0,multiplierReg2_10[5:4]}; // @[bundled_block_division.scala 156:172]
  wire [7:0] _multiplication_T_222 = multiplierReg_10[3:0] * _multiplication_T_221; // @[bundled_block_division.scala 156:161]
  wire [11:0] _GEN_62 = {_multiplication_T_222, 4'h0}; // @[bundled_block_division.scala 156:197]
  wire [14:0] _multiplication_T_223 = {{3'd0}, _GEN_62}; // @[bundled_block_division.scala 156:197]
  wire [15:0] _GEN_63 = {{1'd0}, _multiplication_T_223}; // @[bundled_block_division.scala 156:137]
  wire [16:0] _multiplication_T_224 = _multiplication_T_218 + _GEN_63; // @[bundled_block_division.scala 156:137]
  wire [7:0] _multiplication_T_229 = _multiplication_T_214 * _multiplication_T_221; // @[bundled_block_division.scala 156:240]
  wire [15:0] _GEN_64 = {_multiplication_T_229, 8'h0}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _multiplication_T_230 = {{7'd0}, _GEN_64}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _GEN_65 = {{6'd0}, _multiplication_T_224}; // @[bundled_block_division.scala 156:205]
  wire [23:0] multiplication_10 = _GEN_65 + _multiplication_T_230; // @[bundled_block_division.scala 156:205]
  wire [12:0] _two_complement_10_T_1 = {1'h0,dotProductRegs__10}; // @[bundled_block_division.scala 159:55]
  wire [12:0] _two_complement_10_T_2 = ~_two_complement_10_T_1; // @[bundled_block_division.scala 159:49]
  wire [12:0] _two_complement_10_T_4 = _two_complement_10_T_2 + 13'h1; // @[bundled_block_division.scala 159:77]
  reg [5:0] multiplierReg_11; // @[bundled_block_division.scala 149:34]
  reg [5:0] multiplierReg2_11; // @[bundled_block_division.scala 150:35]
  reg  signReg_11; // @[bundled_block_division.scala 152:28]
  wire [7:0] _multiplication_T_233 = multiplierReg_11[3:0] * multiplierReg2_11[3:0]; // @[bundled_block_division.scala 156:47]
  wire [3:0] _multiplication_T_235 = {2'h0,multiplierReg_11[5:4]}; // @[bundled_block_division.scala 156:83]
  wire [7:0] _multiplication_T_237 = _multiplication_T_235 * multiplierReg2_11[3:0]; // @[bundled_block_division.scala 156:106]
  wire [11:0] _GEN_66 = {_multiplication_T_237, 4'h0}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _multiplication_T_238 = {{3'd0}, _GEN_66}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _GEN_67 = {{7'd0}, _multiplication_T_233}; // @[bundled_block_division.scala 156:69]
  wire [15:0] _multiplication_T_239 = _GEN_67 + _multiplication_T_238; // @[bundled_block_division.scala 156:69]
  wire [3:0] _multiplication_T_242 = {2'h0,multiplierReg2_11[5:4]}; // @[bundled_block_division.scala 156:172]
  wire [7:0] _multiplication_T_243 = multiplierReg_11[3:0] * _multiplication_T_242; // @[bundled_block_division.scala 156:161]
  wire [11:0] _GEN_68 = {_multiplication_T_243, 4'h0}; // @[bundled_block_division.scala 156:197]
  wire [14:0] _multiplication_T_244 = {{3'd0}, _GEN_68}; // @[bundled_block_division.scala 156:197]
  wire [15:0] _GEN_69 = {{1'd0}, _multiplication_T_244}; // @[bundled_block_division.scala 156:137]
  wire [16:0] _multiplication_T_245 = _multiplication_T_239 + _GEN_69; // @[bundled_block_division.scala 156:137]
  wire [7:0] _multiplication_T_250 = _multiplication_T_235 * _multiplication_T_242; // @[bundled_block_division.scala 156:240]
  wire [15:0] _GEN_70 = {_multiplication_T_250, 8'h0}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _multiplication_T_251 = {{7'd0}, _GEN_70}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _GEN_71 = {{6'd0}, _multiplication_T_245}; // @[bundled_block_division.scala 156:205]
  wire [23:0] multiplication_11 = _GEN_71 + _multiplication_T_251; // @[bundled_block_division.scala 156:205]
  wire [12:0] _two_complement_11_T_1 = {1'h0,dotProductRegs__11}; // @[bundled_block_division.scala 159:55]
  wire [12:0] _two_complement_11_T_2 = ~_two_complement_11_T_1; // @[bundled_block_division.scala 159:49]
  wire [12:0] _two_complement_11_T_4 = _two_complement_11_T_2 + 13'h1; // @[bundled_block_division.scala 159:77]
  reg [5:0] multiplierReg_12; // @[bundled_block_division.scala 149:34]
  reg [5:0] multiplierReg2_12; // @[bundled_block_division.scala 150:35]
  reg  signReg_12; // @[bundled_block_division.scala 152:28]
  wire [7:0] _multiplication_T_254 = multiplierReg_12[3:0] * multiplierReg2_12[3:0]; // @[bundled_block_division.scala 156:47]
  wire [3:0] _multiplication_T_256 = {2'h0,multiplierReg_12[5:4]}; // @[bundled_block_division.scala 156:83]
  wire [7:0] _multiplication_T_258 = _multiplication_T_256 * multiplierReg2_12[3:0]; // @[bundled_block_division.scala 156:106]
  wire [11:0] _GEN_72 = {_multiplication_T_258, 4'h0}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _multiplication_T_259 = {{3'd0}, _GEN_72}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _GEN_73 = {{7'd0}, _multiplication_T_254}; // @[bundled_block_division.scala 156:69]
  wire [15:0] _multiplication_T_260 = _GEN_73 + _multiplication_T_259; // @[bundled_block_division.scala 156:69]
  wire [3:0] _multiplication_T_263 = {2'h0,multiplierReg2_12[5:4]}; // @[bundled_block_division.scala 156:172]
  wire [7:0] _multiplication_T_264 = multiplierReg_12[3:0] * _multiplication_T_263; // @[bundled_block_division.scala 156:161]
  wire [11:0] _GEN_74 = {_multiplication_T_264, 4'h0}; // @[bundled_block_division.scala 156:197]
  wire [14:0] _multiplication_T_265 = {{3'd0}, _GEN_74}; // @[bundled_block_division.scala 156:197]
  wire [15:0] _GEN_75 = {{1'd0}, _multiplication_T_265}; // @[bundled_block_division.scala 156:137]
  wire [16:0] _multiplication_T_266 = _multiplication_T_260 + _GEN_75; // @[bundled_block_division.scala 156:137]
  wire [7:0] _multiplication_T_271 = _multiplication_T_256 * _multiplication_T_263; // @[bundled_block_division.scala 156:240]
  wire [15:0] _GEN_76 = {_multiplication_T_271, 8'h0}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _multiplication_T_272 = {{7'd0}, _GEN_76}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _GEN_77 = {{6'd0}, _multiplication_T_266}; // @[bundled_block_division.scala 156:205]
  wire [23:0] multiplication_12 = _GEN_77 + _multiplication_T_272; // @[bundled_block_division.scala 156:205]
  wire [12:0] _two_complement_12_T_1 = {1'h0,dotProductRegs__12}; // @[bundled_block_division.scala 159:55]
  wire [12:0] _two_complement_12_T_2 = ~_two_complement_12_T_1; // @[bundled_block_division.scala 159:49]
  wire [12:0] _two_complement_12_T_4 = _two_complement_12_T_2 + 13'h1; // @[bundled_block_division.scala 159:77]
  reg [5:0] multiplierReg_13; // @[bundled_block_division.scala 149:34]
  reg [5:0] multiplierReg2_13; // @[bundled_block_division.scala 150:35]
  reg  signReg_13; // @[bundled_block_division.scala 152:28]
  wire [7:0] _multiplication_T_275 = multiplierReg_13[3:0] * multiplierReg2_13[3:0]; // @[bundled_block_division.scala 156:47]
  wire [3:0] _multiplication_T_277 = {2'h0,multiplierReg_13[5:4]}; // @[bundled_block_division.scala 156:83]
  wire [7:0] _multiplication_T_279 = _multiplication_T_277 * multiplierReg2_13[3:0]; // @[bundled_block_division.scala 156:106]
  wire [11:0] _GEN_78 = {_multiplication_T_279, 4'h0}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _multiplication_T_280 = {{3'd0}, _GEN_78}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _GEN_79 = {{7'd0}, _multiplication_T_275}; // @[bundled_block_division.scala 156:69]
  wire [15:0] _multiplication_T_281 = _GEN_79 + _multiplication_T_280; // @[bundled_block_division.scala 156:69]
  wire [3:0] _multiplication_T_284 = {2'h0,multiplierReg2_13[5:4]}; // @[bundled_block_division.scala 156:172]
  wire [7:0] _multiplication_T_285 = multiplierReg_13[3:0] * _multiplication_T_284; // @[bundled_block_division.scala 156:161]
  wire [11:0] _GEN_80 = {_multiplication_T_285, 4'h0}; // @[bundled_block_division.scala 156:197]
  wire [14:0] _multiplication_T_286 = {{3'd0}, _GEN_80}; // @[bundled_block_division.scala 156:197]
  wire [15:0] _GEN_81 = {{1'd0}, _multiplication_T_286}; // @[bundled_block_division.scala 156:137]
  wire [16:0] _multiplication_T_287 = _multiplication_T_281 + _GEN_81; // @[bundled_block_division.scala 156:137]
  wire [7:0] _multiplication_T_292 = _multiplication_T_277 * _multiplication_T_284; // @[bundled_block_division.scala 156:240]
  wire [15:0] _GEN_82 = {_multiplication_T_292, 8'h0}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _multiplication_T_293 = {{7'd0}, _GEN_82}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _GEN_83 = {{6'd0}, _multiplication_T_287}; // @[bundled_block_division.scala 156:205]
  wire [23:0] multiplication_13 = _GEN_83 + _multiplication_T_293; // @[bundled_block_division.scala 156:205]
  wire [12:0] _two_complement_13_T_1 = {1'h0,dotProductRegs__13}; // @[bundled_block_division.scala 159:55]
  wire [12:0] _two_complement_13_T_2 = ~_two_complement_13_T_1; // @[bundled_block_division.scala 159:49]
  wire [12:0] _two_complement_13_T_4 = _two_complement_13_T_2 + 13'h1; // @[bundled_block_division.scala 159:77]
  reg [5:0] multiplierReg_14; // @[bundled_block_division.scala 149:34]
  reg [5:0] multiplierReg2_14; // @[bundled_block_division.scala 150:35]
  reg  signReg_14; // @[bundled_block_division.scala 152:28]
  wire [7:0] _multiplication_T_296 = multiplierReg_14[3:0] * multiplierReg2_14[3:0]; // @[bundled_block_division.scala 156:47]
  wire [3:0] _multiplication_T_298 = {2'h0,multiplierReg_14[5:4]}; // @[bundled_block_division.scala 156:83]
  wire [7:0] _multiplication_T_300 = _multiplication_T_298 * multiplierReg2_14[3:0]; // @[bundled_block_division.scala 156:106]
  wire [11:0] _GEN_84 = {_multiplication_T_300, 4'h0}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _multiplication_T_301 = {{3'd0}, _GEN_84}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _GEN_85 = {{7'd0}, _multiplication_T_296}; // @[bundled_block_division.scala 156:69]
  wire [15:0] _multiplication_T_302 = _GEN_85 + _multiplication_T_301; // @[bundled_block_division.scala 156:69]
  wire [3:0] _multiplication_T_305 = {2'h0,multiplierReg2_14[5:4]}; // @[bundled_block_division.scala 156:172]
  wire [7:0] _multiplication_T_306 = multiplierReg_14[3:0] * _multiplication_T_305; // @[bundled_block_division.scala 156:161]
  wire [11:0] _GEN_86 = {_multiplication_T_306, 4'h0}; // @[bundled_block_division.scala 156:197]
  wire [14:0] _multiplication_T_307 = {{3'd0}, _GEN_86}; // @[bundled_block_division.scala 156:197]
  wire [15:0] _GEN_87 = {{1'd0}, _multiplication_T_307}; // @[bundled_block_division.scala 156:137]
  wire [16:0] _multiplication_T_308 = _multiplication_T_302 + _GEN_87; // @[bundled_block_division.scala 156:137]
  wire [7:0] _multiplication_T_313 = _multiplication_T_298 * _multiplication_T_305; // @[bundled_block_division.scala 156:240]
  wire [15:0] _GEN_88 = {_multiplication_T_313, 8'h0}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _multiplication_T_314 = {{7'd0}, _GEN_88}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _GEN_89 = {{6'd0}, _multiplication_T_308}; // @[bundled_block_division.scala 156:205]
  wire [23:0] multiplication_14 = _GEN_89 + _multiplication_T_314; // @[bundled_block_division.scala 156:205]
  wire [12:0] _two_complement_14_T_1 = {1'h0,dotProductRegs__14}; // @[bundled_block_division.scala 159:55]
  wire [12:0] _two_complement_14_T_2 = ~_two_complement_14_T_1; // @[bundled_block_division.scala 159:49]
  wire [12:0] _two_complement_14_T_4 = _two_complement_14_T_2 + 13'h1; // @[bundled_block_division.scala 159:77]
  reg [5:0] multiplierReg_15; // @[bundled_block_division.scala 149:34]
  reg [5:0] multiplierReg2_15; // @[bundled_block_division.scala 150:35]
  reg  signReg_15; // @[bundled_block_division.scala 152:28]
  wire [7:0] _multiplication_T_317 = multiplierReg_15[3:0] * multiplierReg2_15[3:0]; // @[bundled_block_division.scala 156:47]
  wire [3:0] _multiplication_T_319 = {2'h0,multiplierReg_15[5:4]}; // @[bundled_block_division.scala 156:83]
  wire [7:0] _multiplication_T_321 = _multiplication_T_319 * multiplierReg2_15[3:0]; // @[bundled_block_division.scala 156:106]
  wire [11:0] _GEN_90 = {_multiplication_T_321, 4'h0}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _multiplication_T_322 = {{3'd0}, _GEN_90}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _GEN_91 = {{7'd0}, _multiplication_T_317}; // @[bundled_block_division.scala 156:69]
  wire [15:0] _multiplication_T_323 = _GEN_91 + _multiplication_T_322; // @[bundled_block_division.scala 156:69]
  wire [3:0] _multiplication_T_326 = {2'h0,multiplierReg2_15[5:4]}; // @[bundled_block_division.scala 156:172]
  wire [7:0] _multiplication_T_327 = multiplierReg_15[3:0] * _multiplication_T_326; // @[bundled_block_division.scala 156:161]
  wire [11:0] _GEN_92 = {_multiplication_T_327, 4'h0}; // @[bundled_block_division.scala 156:197]
  wire [14:0] _multiplication_T_328 = {{3'd0}, _GEN_92}; // @[bundled_block_division.scala 156:197]
  wire [15:0] _GEN_93 = {{1'd0}, _multiplication_T_328}; // @[bundled_block_division.scala 156:137]
  wire [16:0] _multiplication_T_329 = _multiplication_T_323 + _GEN_93; // @[bundled_block_division.scala 156:137]
  wire [7:0] _multiplication_T_334 = _multiplication_T_319 * _multiplication_T_326; // @[bundled_block_division.scala 156:240]
  wire [15:0] _GEN_94 = {_multiplication_T_334, 8'h0}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _multiplication_T_335 = {{7'd0}, _GEN_94}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _GEN_95 = {{6'd0}, _multiplication_T_329}; // @[bundled_block_division.scala 156:205]
  wire [23:0] multiplication_15 = _GEN_95 + _multiplication_T_335; // @[bundled_block_division.scala 156:205]
  wire [12:0] _two_complement_15_T_1 = {1'h0,dotProductRegs__15}; // @[bundled_block_division.scala 159:55]
  wire [12:0] _two_complement_15_T_2 = ~_two_complement_15_T_1; // @[bundled_block_division.scala 159:49]
  wire [12:0] _two_complement_15_T_4 = _two_complement_15_T_2 + 13'h1; // @[bundled_block_division.scala 159:77]
  wire [13:0] _acc_0_T = $signed(two_complement_buffer__0) + $signed(two_complement_buffer__1); // @[bundled_block_division.scala 177:46]
  wire [13:0] _GEN_96 = {{1{two_complement_buffer__2[12]}},two_complement_buffer__2}; // @[bundled_block_division.scala 177:46]
  wire [14:0] _acc_0_T_1 = $signed(_acc_0_T) + $signed(_GEN_96); // @[bundled_block_division.scala 177:46]
  wire [14:0] _GEN_97 = {{2{two_complement_buffer__3[12]}},two_complement_buffer__3}; // @[bundled_block_division.scala 177:46]
  wire [15:0] _acc_0_T_2 = $signed(_acc_0_T_1) + $signed(_GEN_97); // @[bundled_block_division.scala 177:46]
  wire [15:0] _GEN_98 = {{3{two_complement_buffer__4[12]}},two_complement_buffer__4}; // @[bundled_block_division.scala 177:46]
  wire [16:0] _acc_0_T_3 = $signed(_acc_0_T_2) + $signed(_GEN_98); // @[bundled_block_division.scala 177:46]
  wire [16:0] _GEN_99 = {{4{two_complement_buffer__5[12]}},two_complement_buffer__5}; // @[bundled_block_division.scala 177:46]
  wire [17:0] _acc_0_T_4 = $signed(_acc_0_T_3) + $signed(_GEN_99); // @[bundled_block_division.scala 177:46]
  wire [17:0] _GEN_100 = {{5{two_complement_buffer__6[12]}},two_complement_buffer__6}; // @[bundled_block_division.scala 177:46]
  wire [18:0] _acc_0_T_5 = $signed(_acc_0_T_4) + $signed(_GEN_100); // @[bundled_block_division.scala 177:46]
  wire [18:0] _GEN_101 = {{6{two_complement_buffer__7[12]}},two_complement_buffer__7}; // @[bundled_block_division.scala 177:46]
  wire [19:0] _acc_0_T_6 = $signed(_acc_0_T_5) + $signed(_GEN_101); // @[bundled_block_division.scala 177:46]
  wire [19:0] _GEN_102 = {{7{two_complement_buffer__8[12]}},two_complement_buffer__8}; // @[bundled_block_division.scala 177:46]
  wire [20:0] _acc_0_T_7 = $signed(_acc_0_T_6) + $signed(_GEN_102); // @[bundled_block_division.scala 177:46]
  wire [20:0] _GEN_103 = {{8{two_complement_buffer__9[12]}},two_complement_buffer__9}; // @[bundled_block_division.scala 177:46]
  wire [21:0] _acc_0_T_8 = $signed(_acc_0_T_7) + $signed(_GEN_103); // @[bundled_block_division.scala 177:46]
  wire [21:0] _GEN_104 = {{9{two_complement_buffer__10[12]}},two_complement_buffer__10}; // @[bundled_block_division.scala 177:46]
  wire [22:0] _acc_0_T_9 = $signed(_acc_0_T_8) + $signed(_GEN_104); // @[bundled_block_division.scala 177:46]
  wire [22:0] _GEN_105 = {{10{two_complement_buffer__11[12]}},two_complement_buffer__11}; // @[bundled_block_division.scala 177:46]
  wire [23:0] _acc_0_T_10 = $signed(_acc_0_T_9) + $signed(_GEN_105); // @[bundled_block_division.scala 177:46]
  wire [23:0] _GEN_106 = {{11{two_complement_buffer__12[12]}},two_complement_buffer__12}; // @[bundled_block_division.scala 177:46]
  wire [24:0] _acc_0_T_11 = $signed(_acc_0_T_10) + $signed(_GEN_106); // @[bundled_block_division.scala 177:46]
  wire [24:0] _GEN_107 = {{12{two_complement_buffer__13[12]}},two_complement_buffer__13}; // @[bundled_block_division.scala 177:46]
  wire [25:0] _acc_0_T_12 = $signed(_acc_0_T_11) + $signed(_GEN_107); // @[bundled_block_division.scala 177:46]
  wire [25:0] _GEN_108 = {{13{two_complement_buffer__14[12]}},two_complement_buffer__14}; // @[bundled_block_division.scala 177:46]
  wire [26:0] _acc_0_T_13 = $signed(_acc_0_T_12) + $signed(_GEN_108); // @[bundled_block_division.scala 177:46]
  wire [26:0] _GEN_109 = {{14{two_complement_buffer__15[12]}},two_complement_buffer__15}; // @[bundled_block_division.scala 177:46]
  wire [27:0] _acc_0_T_14 = $signed(_acc_0_T_13) + $signed(_GEN_109); // @[bundled_block_division.scala 177:46]
  wire [8:0] _exp_output_1_T = io_in_a_exp_1 + io_in_b_exp_1; // @[bundled_block_division.scala 142:37]
  reg [11:0] dotProductRegs_1_0; // @[bundled_block_division.scala 143:29]
  reg [11:0] dotProductRegs_1_1; // @[bundled_block_division.scala 143:29]
  reg [11:0] dotProductRegs_1_2; // @[bundled_block_division.scala 143:29]
  reg [11:0] dotProductRegs_1_3; // @[bundled_block_division.scala 143:29]
  reg [11:0] dotProductRegs_1_4; // @[bundled_block_division.scala 143:29]
  reg [11:0] dotProductRegs_1_5; // @[bundled_block_division.scala 143:29]
  reg [11:0] dotProductRegs_1_6; // @[bundled_block_division.scala 143:29]
  reg [11:0] dotProductRegs_1_7; // @[bundled_block_division.scala 143:29]
  reg [11:0] dotProductRegs_1_8; // @[bundled_block_division.scala 143:29]
  reg [11:0] dotProductRegs_1_9; // @[bundled_block_division.scala 143:29]
  reg [11:0] dotProductRegs_1_10; // @[bundled_block_division.scala 143:29]
  reg [11:0] dotProductRegs_1_11; // @[bundled_block_division.scala 143:29]
  reg [11:0] dotProductRegs_1_12; // @[bundled_block_division.scala 143:29]
  reg [11:0] dotProductRegs_1_13; // @[bundled_block_division.scala 143:29]
  reg [11:0] dotProductRegs_1_14; // @[bundled_block_division.scala 143:29]
  reg [11:0] dotProductRegs_1_15; // @[bundled_block_division.scala 143:29]
  reg  signs_1_0; // @[bundled_block_division.scala 144:20]
  reg  signs_1_1; // @[bundled_block_division.scala 144:20]
  reg  signs_1_2; // @[bundled_block_division.scala 144:20]
  reg  signs_1_3; // @[bundled_block_division.scala 144:20]
  reg  signs_1_4; // @[bundled_block_division.scala 144:20]
  reg  signs_1_5; // @[bundled_block_division.scala 144:20]
  reg  signs_1_6; // @[bundled_block_division.scala 144:20]
  reg  signs_1_7; // @[bundled_block_division.scala 144:20]
  reg  signs_1_8; // @[bundled_block_division.scala 144:20]
  reg  signs_1_9; // @[bundled_block_division.scala 144:20]
  reg  signs_1_10; // @[bundled_block_division.scala 144:20]
  reg  signs_1_11; // @[bundled_block_division.scala 144:20]
  reg  signs_1_12; // @[bundled_block_division.scala 144:20]
  reg  signs_1_13; // @[bundled_block_division.scala 144:20]
  reg  signs_1_14; // @[bundled_block_division.scala 144:20]
  reg  signs_1_15; // @[bundled_block_division.scala 144:20]
  reg [12:0] two_complement_1_0; // @[bundled_block_division.scala 145:29]
  reg [12:0] two_complement_1_1; // @[bundled_block_division.scala 145:29]
  reg [12:0] two_complement_1_2; // @[bundled_block_division.scala 145:29]
  reg [12:0] two_complement_1_3; // @[bundled_block_division.scala 145:29]
  reg [12:0] two_complement_1_4; // @[bundled_block_division.scala 145:29]
  reg [12:0] two_complement_1_5; // @[bundled_block_division.scala 145:29]
  reg [12:0] two_complement_1_6; // @[bundled_block_division.scala 145:29]
  reg [12:0] two_complement_1_7; // @[bundled_block_division.scala 145:29]
  reg [12:0] two_complement_1_8; // @[bundled_block_division.scala 145:29]
  reg [12:0] two_complement_1_9; // @[bundled_block_division.scala 145:29]
  reg [12:0] two_complement_1_10; // @[bundled_block_division.scala 145:29]
  reg [12:0] two_complement_1_11; // @[bundled_block_division.scala 145:29]
  reg [12:0] two_complement_1_12; // @[bundled_block_division.scala 145:29]
  reg [12:0] two_complement_1_13; // @[bundled_block_division.scala 145:29]
  reg [12:0] two_complement_1_14; // @[bundled_block_division.scala 145:29]
  reg [12:0] two_complement_1_15; // @[bundled_block_division.scala 145:29]
  reg [12:0] two_complement_buffer_1_0; // @[bundled_block_division.scala 146:36]
  reg [12:0] two_complement_buffer_1_1; // @[bundled_block_division.scala 146:36]
  reg [12:0] two_complement_buffer_1_2; // @[bundled_block_division.scala 146:36]
  reg [12:0] two_complement_buffer_1_3; // @[bundled_block_division.scala 146:36]
  reg [12:0] two_complement_buffer_1_4; // @[bundled_block_division.scala 146:36]
  reg [12:0] two_complement_buffer_1_5; // @[bundled_block_division.scala 146:36]
  reg [12:0] two_complement_buffer_1_6; // @[bundled_block_division.scala 146:36]
  reg [12:0] two_complement_buffer_1_7; // @[bundled_block_division.scala 146:36]
  reg [12:0] two_complement_buffer_1_8; // @[bundled_block_division.scala 146:36]
  reg [12:0] two_complement_buffer_1_9; // @[bundled_block_division.scala 146:36]
  reg [12:0] two_complement_buffer_1_10; // @[bundled_block_division.scala 146:36]
  reg [12:0] two_complement_buffer_1_11; // @[bundled_block_division.scala 146:36]
  reg [12:0] two_complement_buffer_1_12; // @[bundled_block_division.scala 146:36]
  reg [12:0] two_complement_buffer_1_13; // @[bundled_block_division.scala 146:36]
  reg [12:0] two_complement_buffer_1_14; // @[bundled_block_division.scala 146:36]
  reg [12:0] two_complement_buffer_1_15; // @[bundled_block_division.scala 146:36]
  reg [5:0] multiplierReg_16; // @[bundled_block_division.scala 149:34]
  reg [5:0] multiplierReg2_16; // @[bundled_block_division.scala 150:35]
  reg  signReg_16; // @[bundled_block_division.scala 152:28]
  wire [7:0] _multiplication_T_338 = multiplierReg_16[3:0] * multiplierReg2_16[3:0]; // @[bundled_block_division.scala 156:47]
  wire [3:0] _multiplication_T_340 = {2'h0,multiplierReg_16[5:4]}; // @[bundled_block_division.scala 156:83]
  wire [7:0] _multiplication_T_342 = _multiplication_T_340 * multiplierReg2_16[3:0]; // @[bundled_block_division.scala 156:106]
  wire [11:0] _GEN_110 = {_multiplication_T_342, 4'h0}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _multiplication_T_343 = {{3'd0}, _GEN_110}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _GEN_111 = {{7'd0}, _multiplication_T_338}; // @[bundled_block_division.scala 156:69]
  wire [15:0] _multiplication_T_344 = _GEN_111 + _multiplication_T_343; // @[bundled_block_division.scala 156:69]
  wire [3:0] _multiplication_T_347 = {2'h0,multiplierReg2_16[5:4]}; // @[bundled_block_division.scala 156:172]
  wire [7:0] _multiplication_T_348 = multiplierReg_16[3:0] * _multiplication_T_347; // @[bundled_block_division.scala 156:161]
  wire [11:0] _GEN_112 = {_multiplication_T_348, 4'h0}; // @[bundled_block_division.scala 156:197]
  wire [14:0] _multiplication_T_349 = {{3'd0}, _GEN_112}; // @[bundled_block_division.scala 156:197]
  wire [15:0] _GEN_113 = {{1'd0}, _multiplication_T_349}; // @[bundled_block_division.scala 156:137]
  wire [16:0] _multiplication_T_350 = _multiplication_T_344 + _GEN_113; // @[bundled_block_division.scala 156:137]
  wire [7:0] _multiplication_T_355 = _multiplication_T_340 * _multiplication_T_347; // @[bundled_block_division.scala 156:240]
  wire [15:0] _GEN_114 = {_multiplication_T_355, 8'h0}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _multiplication_T_356 = {{7'd0}, _GEN_114}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _GEN_115 = {{6'd0}, _multiplication_T_350}; // @[bundled_block_division.scala 156:205]
  wire [23:0] multiplication_16 = _GEN_115 + _multiplication_T_356; // @[bundled_block_division.scala 156:205]
  wire [12:0] _two_complement_0_T_8 = {1'h0,dotProductRegs_1_0}; // @[bundled_block_division.scala 159:55]
  wire [12:0] _two_complement_0_T_9 = ~_two_complement_0_T_8; // @[bundled_block_division.scala 159:49]
  wire [12:0] _two_complement_0_T_11 = _two_complement_0_T_9 + 13'h1; // @[bundled_block_division.scala 159:77]
  reg [5:0] multiplierReg_17; // @[bundled_block_division.scala 149:34]
  reg [5:0] multiplierReg2_17; // @[bundled_block_division.scala 150:35]
  reg  signReg_17; // @[bundled_block_division.scala 152:28]
  wire [7:0] _multiplication_T_359 = multiplierReg_17[3:0] * multiplierReg2_17[3:0]; // @[bundled_block_division.scala 156:47]
  wire [3:0] _multiplication_T_361 = {2'h0,multiplierReg_17[5:4]}; // @[bundled_block_division.scala 156:83]
  wire [7:0] _multiplication_T_363 = _multiplication_T_361 * multiplierReg2_17[3:0]; // @[bundled_block_division.scala 156:106]
  wire [11:0] _GEN_116 = {_multiplication_T_363, 4'h0}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _multiplication_T_364 = {{3'd0}, _GEN_116}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _GEN_117 = {{7'd0}, _multiplication_T_359}; // @[bundled_block_division.scala 156:69]
  wire [15:0] _multiplication_T_365 = _GEN_117 + _multiplication_T_364; // @[bundled_block_division.scala 156:69]
  wire [3:0] _multiplication_T_368 = {2'h0,multiplierReg2_17[5:4]}; // @[bundled_block_division.scala 156:172]
  wire [7:0] _multiplication_T_369 = multiplierReg_17[3:0] * _multiplication_T_368; // @[bundled_block_division.scala 156:161]
  wire [11:0] _GEN_118 = {_multiplication_T_369, 4'h0}; // @[bundled_block_division.scala 156:197]
  wire [14:0] _multiplication_T_370 = {{3'd0}, _GEN_118}; // @[bundled_block_division.scala 156:197]
  wire [15:0] _GEN_119 = {{1'd0}, _multiplication_T_370}; // @[bundled_block_division.scala 156:137]
  wire [16:0] _multiplication_T_371 = _multiplication_T_365 + _GEN_119; // @[bundled_block_division.scala 156:137]
  wire [7:0] _multiplication_T_376 = _multiplication_T_361 * _multiplication_T_368; // @[bundled_block_division.scala 156:240]
  wire [15:0] _GEN_120 = {_multiplication_T_376, 8'h0}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _multiplication_T_377 = {{7'd0}, _GEN_120}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _GEN_121 = {{6'd0}, _multiplication_T_371}; // @[bundled_block_division.scala 156:205]
  wire [23:0] multiplication_17 = _GEN_121 + _multiplication_T_377; // @[bundled_block_division.scala 156:205]
  wire [12:0] _two_complement_1_T_8 = {1'h0,dotProductRegs_1_1}; // @[bundled_block_division.scala 159:55]
  wire [12:0] _two_complement_1_T_9 = ~_two_complement_1_T_8; // @[bundled_block_division.scala 159:49]
  wire [12:0] _two_complement_1_T_11 = _two_complement_1_T_9 + 13'h1; // @[bundled_block_division.scala 159:77]
  reg [5:0] multiplierReg_18; // @[bundled_block_division.scala 149:34]
  reg [5:0] multiplierReg2_18; // @[bundled_block_division.scala 150:35]
  reg  signReg_18; // @[bundled_block_division.scala 152:28]
  wire [7:0] _multiplication_T_380 = multiplierReg_18[3:0] * multiplierReg2_18[3:0]; // @[bundled_block_division.scala 156:47]
  wire [3:0] _multiplication_T_382 = {2'h0,multiplierReg_18[5:4]}; // @[bundled_block_division.scala 156:83]
  wire [7:0] _multiplication_T_384 = _multiplication_T_382 * multiplierReg2_18[3:0]; // @[bundled_block_division.scala 156:106]
  wire [11:0] _GEN_122 = {_multiplication_T_384, 4'h0}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _multiplication_T_385 = {{3'd0}, _GEN_122}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _GEN_123 = {{7'd0}, _multiplication_T_380}; // @[bundled_block_division.scala 156:69]
  wire [15:0] _multiplication_T_386 = _GEN_123 + _multiplication_T_385; // @[bundled_block_division.scala 156:69]
  wire [3:0] _multiplication_T_389 = {2'h0,multiplierReg2_18[5:4]}; // @[bundled_block_division.scala 156:172]
  wire [7:0] _multiplication_T_390 = multiplierReg_18[3:0] * _multiplication_T_389; // @[bundled_block_division.scala 156:161]
  wire [11:0] _GEN_124 = {_multiplication_T_390, 4'h0}; // @[bundled_block_division.scala 156:197]
  wire [14:0] _multiplication_T_391 = {{3'd0}, _GEN_124}; // @[bundled_block_division.scala 156:197]
  wire [15:0] _GEN_125 = {{1'd0}, _multiplication_T_391}; // @[bundled_block_division.scala 156:137]
  wire [16:0] _multiplication_T_392 = _multiplication_T_386 + _GEN_125; // @[bundled_block_division.scala 156:137]
  wire [7:0] _multiplication_T_397 = _multiplication_T_382 * _multiplication_T_389; // @[bundled_block_division.scala 156:240]
  wire [15:0] _GEN_126 = {_multiplication_T_397, 8'h0}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _multiplication_T_398 = {{7'd0}, _GEN_126}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _GEN_127 = {{6'd0}, _multiplication_T_392}; // @[bundled_block_division.scala 156:205]
  wire [23:0] multiplication_18 = _GEN_127 + _multiplication_T_398; // @[bundled_block_division.scala 156:205]
  wire [12:0] _two_complement_2_T_8 = {1'h0,dotProductRegs_1_2}; // @[bundled_block_division.scala 159:55]
  wire [12:0] _two_complement_2_T_9 = ~_two_complement_2_T_8; // @[bundled_block_division.scala 159:49]
  wire [12:0] _two_complement_2_T_11 = _two_complement_2_T_9 + 13'h1; // @[bundled_block_division.scala 159:77]
  reg [5:0] multiplierReg_19; // @[bundled_block_division.scala 149:34]
  reg [5:0] multiplierReg2_19; // @[bundled_block_division.scala 150:35]
  reg  signReg_19; // @[bundled_block_division.scala 152:28]
  wire [7:0] _multiplication_T_401 = multiplierReg_19[3:0] * multiplierReg2_19[3:0]; // @[bundled_block_division.scala 156:47]
  wire [3:0] _multiplication_T_403 = {2'h0,multiplierReg_19[5:4]}; // @[bundled_block_division.scala 156:83]
  wire [7:0] _multiplication_T_405 = _multiplication_T_403 * multiplierReg2_19[3:0]; // @[bundled_block_division.scala 156:106]
  wire [11:0] _GEN_128 = {_multiplication_T_405, 4'h0}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _multiplication_T_406 = {{3'd0}, _GEN_128}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _GEN_129 = {{7'd0}, _multiplication_T_401}; // @[bundled_block_division.scala 156:69]
  wire [15:0] _multiplication_T_407 = _GEN_129 + _multiplication_T_406; // @[bundled_block_division.scala 156:69]
  wire [3:0] _multiplication_T_410 = {2'h0,multiplierReg2_19[5:4]}; // @[bundled_block_division.scala 156:172]
  wire [7:0] _multiplication_T_411 = multiplierReg_19[3:0] * _multiplication_T_410; // @[bundled_block_division.scala 156:161]
  wire [11:0] _GEN_130 = {_multiplication_T_411, 4'h0}; // @[bundled_block_division.scala 156:197]
  wire [14:0] _multiplication_T_412 = {{3'd0}, _GEN_130}; // @[bundled_block_division.scala 156:197]
  wire [15:0] _GEN_131 = {{1'd0}, _multiplication_T_412}; // @[bundled_block_division.scala 156:137]
  wire [16:0] _multiplication_T_413 = _multiplication_T_407 + _GEN_131; // @[bundled_block_division.scala 156:137]
  wire [7:0] _multiplication_T_418 = _multiplication_T_403 * _multiplication_T_410; // @[bundled_block_division.scala 156:240]
  wire [15:0] _GEN_132 = {_multiplication_T_418, 8'h0}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _multiplication_T_419 = {{7'd0}, _GEN_132}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _GEN_133 = {{6'd0}, _multiplication_T_413}; // @[bundled_block_division.scala 156:205]
  wire [23:0] multiplication_19 = _GEN_133 + _multiplication_T_419; // @[bundled_block_division.scala 156:205]
  wire [12:0] _two_complement_3_T_8 = {1'h0,dotProductRegs_1_3}; // @[bundled_block_division.scala 159:55]
  wire [12:0] _two_complement_3_T_9 = ~_two_complement_3_T_8; // @[bundled_block_division.scala 159:49]
  wire [12:0] _two_complement_3_T_11 = _two_complement_3_T_9 + 13'h1; // @[bundled_block_division.scala 159:77]
  reg [5:0] multiplierReg_20; // @[bundled_block_division.scala 149:34]
  reg [5:0] multiplierReg2_20; // @[bundled_block_division.scala 150:35]
  reg  signReg_20; // @[bundled_block_division.scala 152:28]
  wire [7:0] _multiplication_T_422 = multiplierReg_20[3:0] * multiplierReg2_20[3:0]; // @[bundled_block_division.scala 156:47]
  wire [3:0] _multiplication_T_424 = {2'h0,multiplierReg_20[5:4]}; // @[bundled_block_division.scala 156:83]
  wire [7:0] _multiplication_T_426 = _multiplication_T_424 * multiplierReg2_20[3:0]; // @[bundled_block_division.scala 156:106]
  wire [11:0] _GEN_134 = {_multiplication_T_426, 4'h0}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _multiplication_T_427 = {{3'd0}, _GEN_134}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _GEN_135 = {{7'd0}, _multiplication_T_422}; // @[bundled_block_division.scala 156:69]
  wire [15:0] _multiplication_T_428 = _GEN_135 + _multiplication_T_427; // @[bundled_block_division.scala 156:69]
  wire [3:0] _multiplication_T_431 = {2'h0,multiplierReg2_20[5:4]}; // @[bundled_block_division.scala 156:172]
  wire [7:0] _multiplication_T_432 = multiplierReg_20[3:0] * _multiplication_T_431; // @[bundled_block_division.scala 156:161]
  wire [11:0] _GEN_136 = {_multiplication_T_432, 4'h0}; // @[bundled_block_division.scala 156:197]
  wire [14:0] _multiplication_T_433 = {{3'd0}, _GEN_136}; // @[bundled_block_division.scala 156:197]
  wire [15:0] _GEN_137 = {{1'd0}, _multiplication_T_433}; // @[bundled_block_division.scala 156:137]
  wire [16:0] _multiplication_T_434 = _multiplication_T_428 + _GEN_137; // @[bundled_block_division.scala 156:137]
  wire [7:0] _multiplication_T_439 = _multiplication_T_424 * _multiplication_T_431; // @[bundled_block_division.scala 156:240]
  wire [15:0] _GEN_138 = {_multiplication_T_439, 8'h0}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _multiplication_T_440 = {{7'd0}, _GEN_138}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _GEN_139 = {{6'd0}, _multiplication_T_434}; // @[bundled_block_division.scala 156:205]
  wire [23:0] multiplication_20 = _GEN_139 + _multiplication_T_440; // @[bundled_block_division.scala 156:205]
  wire [12:0] _two_complement_4_T_8 = {1'h0,dotProductRegs_1_4}; // @[bundled_block_division.scala 159:55]
  wire [12:0] _two_complement_4_T_9 = ~_two_complement_4_T_8; // @[bundled_block_division.scala 159:49]
  wire [12:0] _two_complement_4_T_11 = _two_complement_4_T_9 + 13'h1; // @[bundled_block_division.scala 159:77]
  reg [5:0] multiplierReg_21; // @[bundled_block_division.scala 149:34]
  reg [5:0] multiplierReg2_21; // @[bundled_block_division.scala 150:35]
  reg  signReg_21; // @[bundled_block_division.scala 152:28]
  wire [7:0] _multiplication_T_443 = multiplierReg_21[3:0] * multiplierReg2_21[3:0]; // @[bundled_block_division.scala 156:47]
  wire [3:0] _multiplication_T_445 = {2'h0,multiplierReg_21[5:4]}; // @[bundled_block_division.scala 156:83]
  wire [7:0] _multiplication_T_447 = _multiplication_T_445 * multiplierReg2_21[3:0]; // @[bundled_block_division.scala 156:106]
  wire [11:0] _GEN_140 = {_multiplication_T_447, 4'h0}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _multiplication_T_448 = {{3'd0}, _GEN_140}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _GEN_141 = {{7'd0}, _multiplication_T_443}; // @[bundled_block_division.scala 156:69]
  wire [15:0] _multiplication_T_449 = _GEN_141 + _multiplication_T_448; // @[bundled_block_division.scala 156:69]
  wire [3:0] _multiplication_T_452 = {2'h0,multiplierReg2_21[5:4]}; // @[bundled_block_division.scala 156:172]
  wire [7:0] _multiplication_T_453 = multiplierReg_21[3:0] * _multiplication_T_452; // @[bundled_block_division.scala 156:161]
  wire [11:0] _GEN_142 = {_multiplication_T_453, 4'h0}; // @[bundled_block_division.scala 156:197]
  wire [14:0] _multiplication_T_454 = {{3'd0}, _GEN_142}; // @[bundled_block_division.scala 156:197]
  wire [15:0] _GEN_143 = {{1'd0}, _multiplication_T_454}; // @[bundled_block_division.scala 156:137]
  wire [16:0] _multiplication_T_455 = _multiplication_T_449 + _GEN_143; // @[bundled_block_division.scala 156:137]
  wire [7:0] _multiplication_T_460 = _multiplication_T_445 * _multiplication_T_452; // @[bundled_block_division.scala 156:240]
  wire [15:0] _GEN_144 = {_multiplication_T_460, 8'h0}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _multiplication_T_461 = {{7'd0}, _GEN_144}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _GEN_145 = {{6'd0}, _multiplication_T_455}; // @[bundled_block_division.scala 156:205]
  wire [23:0] multiplication_21 = _GEN_145 + _multiplication_T_461; // @[bundled_block_division.scala 156:205]
  wire [12:0] _two_complement_5_T_8 = {1'h0,dotProductRegs_1_5}; // @[bundled_block_division.scala 159:55]
  wire [12:0] _two_complement_5_T_9 = ~_two_complement_5_T_8; // @[bundled_block_division.scala 159:49]
  wire [12:0] _two_complement_5_T_11 = _two_complement_5_T_9 + 13'h1; // @[bundled_block_division.scala 159:77]
  reg [5:0] multiplierReg_22; // @[bundled_block_division.scala 149:34]
  reg [5:0] multiplierReg2_22; // @[bundled_block_division.scala 150:35]
  reg  signReg_22; // @[bundled_block_division.scala 152:28]
  wire [7:0] _multiplication_T_464 = multiplierReg_22[3:0] * multiplierReg2_22[3:0]; // @[bundled_block_division.scala 156:47]
  wire [3:0] _multiplication_T_466 = {2'h0,multiplierReg_22[5:4]}; // @[bundled_block_division.scala 156:83]
  wire [7:0] _multiplication_T_468 = _multiplication_T_466 * multiplierReg2_22[3:0]; // @[bundled_block_division.scala 156:106]
  wire [11:0] _GEN_146 = {_multiplication_T_468, 4'h0}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _multiplication_T_469 = {{3'd0}, _GEN_146}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _GEN_147 = {{7'd0}, _multiplication_T_464}; // @[bundled_block_division.scala 156:69]
  wire [15:0] _multiplication_T_470 = _GEN_147 + _multiplication_T_469; // @[bundled_block_division.scala 156:69]
  wire [3:0] _multiplication_T_473 = {2'h0,multiplierReg2_22[5:4]}; // @[bundled_block_division.scala 156:172]
  wire [7:0] _multiplication_T_474 = multiplierReg_22[3:0] * _multiplication_T_473; // @[bundled_block_division.scala 156:161]
  wire [11:0] _GEN_148 = {_multiplication_T_474, 4'h0}; // @[bundled_block_division.scala 156:197]
  wire [14:0] _multiplication_T_475 = {{3'd0}, _GEN_148}; // @[bundled_block_division.scala 156:197]
  wire [15:0] _GEN_149 = {{1'd0}, _multiplication_T_475}; // @[bundled_block_division.scala 156:137]
  wire [16:0] _multiplication_T_476 = _multiplication_T_470 + _GEN_149; // @[bundled_block_division.scala 156:137]
  wire [7:0] _multiplication_T_481 = _multiplication_T_466 * _multiplication_T_473; // @[bundled_block_division.scala 156:240]
  wire [15:0] _GEN_150 = {_multiplication_T_481, 8'h0}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _multiplication_T_482 = {{7'd0}, _GEN_150}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _GEN_151 = {{6'd0}, _multiplication_T_476}; // @[bundled_block_division.scala 156:205]
  wire [23:0] multiplication_22 = _GEN_151 + _multiplication_T_482; // @[bundled_block_division.scala 156:205]
  wire [12:0] _two_complement_6_T_8 = {1'h0,dotProductRegs_1_6}; // @[bundled_block_division.scala 159:55]
  wire [12:0] _two_complement_6_T_9 = ~_two_complement_6_T_8; // @[bundled_block_division.scala 159:49]
  wire [12:0] _two_complement_6_T_11 = _two_complement_6_T_9 + 13'h1; // @[bundled_block_division.scala 159:77]
  reg [5:0] multiplierReg_23; // @[bundled_block_division.scala 149:34]
  reg [5:0] multiplierReg2_23; // @[bundled_block_division.scala 150:35]
  reg  signReg_23; // @[bundled_block_division.scala 152:28]
  wire [7:0] _multiplication_T_485 = multiplierReg_23[3:0] * multiplierReg2_23[3:0]; // @[bundled_block_division.scala 156:47]
  wire [3:0] _multiplication_T_487 = {2'h0,multiplierReg_23[5:4]}; // @[bundled_block_division.scala 156:83]
  wire [7:0] _multiplication_T_489 = _multiplication_T_487 * multiplierReg2_23[3:0]; // @[bundled_block_division.scala 156:106]
  wire [11:0] _GEN_152 = {_multiplication_T_489, 4'h0}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _multiplication_T_490 = {{3'd0}, _GEN_152}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _GEN_153 = {{7'd0}, _multiplication_T_485}; // @[bundled_block_division.scala 156:69]
  wire [15:0] _multiplication_T_491 = _GEN_153 + _multiplication_T_490; // @[bundled_block_division.scala 156:69]
  wire [3:0] _multiplication_T_494 = {2'h0,multiplierReg2_23[5:4]}; // @[bundled_block_division.scala 156:172]
  wire [7:0] _multiplication_T_495 = multiplierReg_23[3:0] * _multiplication_T_494; // @[bundled_block_division.scala 156:161]
  wire [11:0] _GEN_154 = {_multiplication_T_495, 4'h0}; // @[bundled_block_division.scala 156:197]
  wire [14:0] _multiplication_T_496 = {{3'd0}, _GEN_154}; // @[bundled_block_division.scala 156:197]
  wire [15:0] _GEN_155 = {{1'd0}, _multiplication_T_496}; // @[bundled_block_division.scala 156:137]
  wire [16:0] _multiplication_T_497 = _multiplication_T_491 + _GEN_155; // @[bundled_block_division.scala 156:137]
  wire [7:0] _multiplication_T_502 = _multiplication_T_487 * _multiplication_T_494; // @[bundled_block_division.scala 156:240]
  wire [15:0] _GEN_156 = {_multiplication_T_502, 8'h0}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _multiplication_T_503 = {{7'd0}, _GEN_156}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _GEN_157 = {{6'd0}, _multiplication_T_497}; // @[bundled_block_division.scala 156:205]
  wire [23:0] multiplication_23 = _GEN_157 + _multiplication_T_503; // @[bundled_block_division.scala 156:205]
  wire [12:0] _two_complement_7_T_8 = {1'h0,dotProductRegs_1_7}; // @[bundled_block_division.scala 159:55]
  wire [12:0] _two_complement_7_T_9 = ~_two_complement_7_T_8; // @[bundled_block_division.scala 159:49]
  wire [12:0] _two_complement_7_T_11 = _two_complement_7_T_9 + 13'h1; // @[bundled_block_division.scala 159:77]
  reg [5:0] multiplierReg_24; // @[bundled_block_division.scala 149:34]
  reg [5:0] multiplierReg2_24; // @[bundled_block_division.scala 150:35]
  reg  signReg_24; // @[bundled_block_division.scala 152:28]
  wire [7:0] _multiplication_T_506 = multiplierReg_24[3:0] * multiplierReg2_24[3:0]; // @[bundled_block_division.scala 156:47]
  wire [3:0] _multiplication_T_508 = {2'h0,multiplierReg_24[5:4]}; // @[bundled_block_division.scala 156:83]
  wire [7:0] _multiplication_T_510 = _multiplication_T_508 * multiplierReg2_24[3:0]; // @[bundled_block_division.scala 156:106]
  wire [11:0] _GEN_158 = {_multiplication_T_510, 4'h0}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _multiplication_T_511 = {{3'd0}, _GEN_158}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _GEN_159 = {{7'd0}, _multiplication_T_506}; // @[bundled_block_division.scala 156:69]
  wire [15:0] _multiplication_T_512 = _GEN_159 + _multiplication_T_511; // @[bundled_block_division.scala 156:69]
  wire [3:0] _multiplication_T_515 = {2'h0,multiplierReg2_24[5:4]}; // @[bundled_block_division.scala 156:172]
  wire [7:0] _multiplication_T_516 = multiplierReg_24[3:0] * _multiplication_T_515; // @[bundled_block_division.scala 156:161]
  wire [11:0] _GEN_160 = {_multiplication_T_516, 4'h0}; // @[bundled_block_division.scala 156:197]
  wire [14:0] _multiplication_T_517 = {{3'd0}, _GEN_160}; // @[bundled_block_division.scala 156:197]
  wire [15:0] _GEN_161 = {{1'd0}, _multiplication_T_517}; // @[bundled_block_division.scala 156:137]
  wire [16:0] _multiplication_T_518 = _multiplication_T_512 + _GEN_161; // @[bundled_block_division.scala 156:137]
  wire [7:0] _multiplication_T_523 = _multiplication_T_508 * _multiplication_T_515; // @[bundled_block_division.scala 156:240]
  wire [15:0] _GEN_162 = {_multiplication_T_523, 8'h0}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _multiplication_T_524 = {{7'd0}, _GEN_162}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _GEN_163 = {{6'd0}, _multiplication_T_518}; // @[bundled_block_division.scala 156:205]
  wire [23:0] multiplication_24 = _GEN_163 + _multiplication_T_524; // @[bundled_block_division.scala 156:205]
  wire [12:0] _two_complement_8_T_8 = {1'h0,dotProductRegs_1_8}; // @[bundled_block_division.scala 159:55]
  wire [12:0] _two_complement_8_T_9 = ~_two_complement_8_T_8; // @[bundled_block_division.scala 159:49]
  wire [12:0] _two_complement_8_T_11 = _two_complement_8_T_9 + 13'h1; // @[bundled_block_division.scala 159:77]
  reg [5:0] multiplierReg_25; // @[bundled_block_division.scala 149:34]
  reg [5:0] multiplierReg2_25; // @[bundled_block_division.scala 150:35]
  reg  signReg_25; // @[bundled_block_division.scala 152:28]
  wire [7:0] _multiplication_T_527 = multiplierReg_25[3:0] * multiplierReg2_25[3:0]; // @[bundled_block_division.scala 156:47]
  wire [3:0] _multiplication_T_529 = {2'h0,multiplierReg_25[5:4]}; // @[bundled_block_division.scala 156:83]
  wire [7:0] _multiplication_T_531 = _multiplication_T_529 * multiplierReg2_25[3:0]; // @[bundled_block_division.scala 156:106]
  wire [11:0] _GEN_164 = {_multiplication_T_531, 4'h0}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _multiplication_T_532 = {{3'd0}, _GEN_164}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _GEN_165 = {{7'd0}, _multiplication_T_527}; // @[bundled_block_division.scala 156:69]
  wire [15:0] _multiplication_T_533 = _GEN_165 + _multiplication_T_532; // @[bundled_block_division.scala 156:69]
  wire [3:0] _multiplication_T_536 = {2'h0,multiplierReg2_25[5:4]}; // @[bundled_block_division.scala 156:172]
  wire [7:0] _multiplication_T_537 = multiplierReg_25[3:0] * _multiplication_T_536; // @[bundled_block_division.scala 156:161]
  wire [11:0] _GEN_166 = {_multiplication_T_537, 4'h0}; // @[bundled_block_division.scala 156:197]
  wire [14:0] _multiplication_T_538 = {{3'd0}, _GEN_166}; // @[bundled_block_division.scala 156:197]
  wire [15:0] _GEN_167 = {{1'd0}, _multiplication_T_538}; // @[bundled_block_division.scala 156:137]
  wire [16:0] _multiplication_T_539 = _multiplication_T_533 + _GEN_167; // @[bundled_block_division.scala 156:137]
  wire [7:0] _multiplication_T_544 = _multiplication_T_529 * _multiplication_T_536; // @[bundled_block_division.scala 156:240]
  wire [15:0] _GEN_168 = {_multiplication_T_544, 8'h0}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _multiplication_T_545 = {{7'd0}, _GEN_168}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _GEN_169 = {{6'd0}, _multiplication_T_539}; // @[bundled_block_division.scala 156:205]
  wire [23:0] multiplication_25 = _GEN_169 + _multiplication_T_545; // @[bundled_block_division.scala 156:205]
  wire [12:0] _two_complement_9_T_8 = {1'h0,dotProductRegs_1_9}; // @[bundled_block_division.scala 159:55]
  wire [12:0] _two_complement_9_T_9 = ~_two_complement_9_T_8; // @[bundled_block_division.scala 159:49]
  wire [12:0] _two_complement_9_T_11 = _two_complement_9_T_9 + 13'h1; // @[bundled_block_division.scala 159:77]
  reg [5:0] multiplierReg_26; // @[bundled_block_division.scala 149:34]
  reg [5:0] multiplierReg2_26; // @[bundled_block_division.scala 150:35]
  reg  signReg_26; // @[bundled_block_division.scala 152:28]
  wire [7:0] _multiplication_T_548 = multiplierReg_26[3:0] * multiplierReg2_26[3:0]; // @[bundled_block_division.scala 156:47]
  wire [3:0] _multiplication_T_550 = {2'h0,multiplierReg_26[5:4]}; // @[bundled_block_division.scala 156:83]
  wire [7:0] _multiplication_T_552 = _multiplication_T_550 * multiplierReg2_26[3:0]; // @[bundled_block_division.scala 156:106]
  wire [11:0] _GEN_170 = {_multiplication_T_552, 4'h0}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _multiplication_T_553 = {{3'd0}, _GEN_170}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _GEN_171 = {{7'd0}, _multiplication_T_548}; // @[bundled_block_division.scala 156:69]
  wire [15:0] _multiplication_T_554 = _GEN_171 + _multiplication_T_553; // @[bundled_block_division.scala 156:69]
  wire [3:0] _multiplication_T_557 = {2'h0,multiplierReg2_26[5:4]}; // @[bundled_block_division.scala 156:172]
  wire [7:0] _multiplication_T_558 = multiplierReg_26[3:0] * _multiplication_T_557; // @[bundled_block_division.scala 156:161]
  wire [11:0] _GEN_172 = {_multiplication_T_558, 4'h0}; // @[bundled_block_division.scala 156:197]
  wire [14:0] _multiplication_T_559 = {{3'd0}, _GEN_172}; // @[bundled_block_division.scala 156:197]
  wire [15:0] _GEN_173 = {{1'd0}, _multiplication_T_559}; // @[bundled_block_division.scala 156:137]
  wire [16:0] _multiplication_T_560 = _multiplication_T_554 + _GEN_173; // @[bundled_block_division.scala 156:137]
  wire [7:0] _multiplication_T_565 = _multiplication_T_550 * _multiplication_T_557; // @[bundled_block_division.scala 156:240]
  wire [15:0] _GEN_174 = {_multiplication_T_565, 8'h0}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _multiplication_T_566 = {{7'd0}, _GEN_174}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _GEN_175 = {{6'd0}, _multiplication_T_560}; // @[bundled_block_division.scala 156:205]
  wire [23:0] multiplication_26 = _GEN_175 + _multiplication_T_566; // @[bundled_block_division.scala 156:205]
  wire [12:0] _two_complement_10_T_8 = {1'h0,dotProductRegs_1_10}; // @[bundled_block_division.scala 159:55]
  wire [12:0] _two_complement_10_T_9 = ~_two_complement_10_T_8; // @[bundled_block_division.scala 159:49]
  wire [12:0] _two_complement_10_T_11 = _two_complement_10_T_9 + 13'h1; // @[bundled_block_division.scala 159:77]
  reg [5:0] multiplierReg_27; // @[bundled_block_division.scala 149:34]
  reg [5:0] multiplierReg2_27; // @[bundled_block_division.scala 150:35]
  reg  signReg_27; // @[bundled_block_division.scala 152:28]
  wire [7:0] _multiplication_T_569 = multiplierReg_27[3:0] * multiplierReg2_27[3:0]; // @[bundled_block_division.scala 156:47]
  wire [3:0] _multiplication_T_571 = {2'h0,multiplierReg_27[5:4]}; // @[bundled_block_division.scala 156:83]
  wire [7:0] _multiplication_T_573 = _multiplication_T_571 * multiplierReg2_27[3:0]; // @[bundled_block_division.scala 156:106]
  wire [11:0] _GEN_176 = {_multiplication_T_573, 4'h0}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _multiplication_T_574 = {{3'd0}, _GEN_176}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _GEN_177 = {{7'd0}, _multiplication_T_569}; // @[bundled_block_division.scala 156:69]
  wire [15:0] _multiplication_T_575 = _GEN_177 + _multiplication_T_574; // @[bundled_block_division.scala 156:69]
  wire [3:0] _multiplication_T_578 = {2'h0,multiplierReg2_27[5:4]}; // @[bundled_block_division.scala 156:172]
  wire [7:0] _multiplication_T_579 = multiplierReg_27[3:0] * _multiplication_T_578; // @[bundled_block_division.scala 156:161]
  wire [11:0] _GEN_178 = {_multiplication_T_579, 4'h0}; // @[bundled_block_division.scala 156:197]
  wire [14:0] _multiplication_T_580 = {{3'd0}, _GEN_178}; // @[bundled_block_division.scala 156:197]
  wire [15:0] _GEN_179 = {{1'd0}, _multiplication_T_580}; // @[bundled_block_division.scala 156:137]
  wire [16:0] _multiplication_T_581 = _multiplication_T_575 + _GEN_179; // @[bundled_block_division.scala 156:137]
  wire [7:0] _multiplication_T_586 = _multiplication_T_571 * _multiplication_T_578; // @[bundled_block_division.scala 156:240]
  wire [15:0] _GEN_180 = {_multiplication_T_586, 8'h0}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _multiplication_T_587 = {{7'd0}, _GEN_180}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _GEN_181 = {{6'd0}, _multiplication_T_581}; // @[bundled_block_division.scala 156:205]
  wire [23:0] multiplication_27 = _GEN_181 + _multiplication_T_587; // @[bundled_block_division.scala 156:205]
  wire [12:0] _two_complement_11_T_8 = {1'h0,dotProductRegs_1_11}; // @[bundled_block_division.scala 159:55]
  wire [12:0] _two_complement_11_T_9 = ~_two_complement_11_T_8; // @[bundled_block_division.scala 159:49]
  wire [12:0] _two_complement_11_T_11 = _two_complement_11_T_9 + 13'h1; // @[bundled_block_division.scala 159:77]
  reg [5:0] multiplierReg_28; // @[bundled_block_division.scala 149:34]
  reg [5:0] multiplierReg2_28; // @[bundled_block_division.scala 150:35]
  reg  signReg_28; // @[bundled_block_division.scala 152:28]
  wire [7:0] _multiplication_T_590 = multiplierReg_28[3:0] * multiplierReg2_28[3:0]; // @[bundled_block_division.scala 156:47]
  wire [3:0] _multiplication_T_592 = {2'h0,multiplierReg_28[5:4]}; // @[bundled_block_division.scala 156:83]
  wire [7:0] _multiplication_T_594 = _multiplication_T_592 * multiplierReg2_28[3:0]; // @[bundled_block_division.scala 156:106]
  wire [11:0] _GEN_182 = {_multiplication_T_594, 4'h0}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _multiplication_T_595 = {{3'd0}, _GEN_182}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _GEN_183 = {{7'd0}, _multiplication_T_590}; // @[bundled_block_division.scala 156:69]
  wire [15:0] _multiplication_T_596 = _GEN_183 + _multiplication_T_595; // @[bundled_block_division.scala 156:69]
  wire [3:0] _multiplication_T_599 = {2'h0,multiplierReg2_28[5:4]}; // @[bundled_block_division.scala 156:172]
  wire [7:0] _multiplication_T_600 = multiplierReg_28[3:0] * _multiplication_T_599; // @[bundled_block_division.scala 156:161]
  wire [11:0] _GEN_184 = {_multiplication_T_600, 4'h0}; // @[bundled_block_division.scala 156:197]
  wire [14:0] _multiplication_T_601 = {{3'd0}, _GEN_184}; // @[bundled_block_division.scala 156:197]
  wire [15:0] _GEN_185 = {{1'd0}, _multiplication_T_601}; // @[bundled_block_division.scala 156:137]
  wire [16:0] _multiplication_T_602 = _multiplication_T_596 + _GEN_185; // @[bundled_block_division.scala 156:137]
  wire [7:0] _multiplication_T_607 = _multiplication_T_592 * _multiplication_T_599; // @[bundled_block_division.scala 156:240]
  wire [15:0] _GEN_186 = {_multiplication_T_607, 8'h0}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _multiplication_T_608 = {{7'd0}, _GEN_186}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _GEN_187 = {{6'd0}, _multiplication_T_602}; // @[bundled_block_division.scala 156:205]
  wire [23:0] multiplication_28 = _GEN_187 + _multiplication_T_608; // @[bundled_block_division.scala 156:205]
  wire [12:0] _two_complement_12_T_8 = {1'h0,dotProductRegs_1_12}; // @[bundled_block_division.scala 159:55]
  wire [12:0] _two_complement_12_T_9 = ~_two_complement_12_T_8; // @[bundled_block_division.scala 159:49]
  wire [12:0] _two_complement_12_T_11 = _two_complement_12_T_9 + 13'h1; // @[bundled_block_division.scala 159:77]
  reg [5:0] multiplierReg_29; // @[bundled_block_division.scala 149:34]
  reg [5:0] multiplierReg2_29; // @[bundled_block_division.scala 150:35]
  reg  signReg_29; // @[bundled_block_division.scala 152:28]
  wire [7:0] _multiplication_T_611 = multiplierReg_29[3:0] * multiplierReg2_29[3:0]; // @[bundled_block_division.scala 156:47]
  wire [3:0] _multiplication_T_613 = {2'h0,multiplierReg_29[5:4]}; // @[bundled_block_division.scala 156:83]
  wire [7:0] _multiplication_T_615 = _multiplication_T_613 * multiplierReg2_29[3:0]; // @[bundled_block_division.scala 156:106]
  wire [11:0] _GEN_188 = {_multiplication_T_615, 4'h0}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _multiplication_T_616 = {{3'd0}, _GEN_188}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _GEN_189 = {{7'd0}, _multiplication_T_611}; // @[bundled_block_division.scala 156:69]
  wire [15:0] _multiplication_T_617 = _GEN_189 + _multiplication_T_616; // @[bundled_block_division.scala 156:69]
  wire [3:0] _multiplication_T_620 = {2'h0,multiplierReg2_29[5:4]}; // @[bundled_block_division.scala 156:172]
  wire [7:0] _multiplication_T_621 = multiplierReg_29[3:0] * _multiplication_T_620; // @[bundled_block_division.scala 156:161]
  wire [11:0] _GEN_190 = {_multiplication_T_621, 4'h0}; // @[bundled_block_division.scala 156:197]
  wire [14:0] _multiplication_T_622 = {{3'd0}, _GEN_190}; // @[bundled_block_division.scala 156:197]
  wire [15:0] _GEN_191 = {{1'd0}, _multiplication_T_622}; // @[bundled_block_division.scala 156:137]
  wire [16:0] _multiplication_T_623 = _multiplication_T_617 + _GEN_191; // @[bundled_block_division.scala 156:137]
  wire [7:0] _multiplication_T_628 = _multiplication_T_613 * _multiplication_T_620; // @[bundled_block_division.scala 156:240]
  wire [15:0] _GEN_192 = {_multiplication_T_628, 8'h0}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _multiplication_T_629 = {{7'd0}, _GEN_192}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _GEN_193 = {{6'd0}, _multiplication_T_623}; // @[bundled_block_division.scala 156:205]
  wire [23:0] multiplication_29 = _GEN_193 + _multiplication_T_629; // @[bundled_block_division.scala 156:205]
  wire [12:0] _two_complement_13_T_8 = {1'h0,dotProductRegs_1_13}; // @[bundled_block_division.scala 159:55]
  wire [12:0] _two_complement_13_T_9 = ~_two_complement_13_T_8; // @[bundled_block_division.scala 159:49]
  wire [12:0] _two_complement_13_T_11 = _two_complement_13_T_9 + 13'h1; // @[bundled_block_division.scala 159:77]
  reg [5:0] multiplierReg_30; // @[bundled_block_division.scala 149:34]
  reg [5:0] multiplierReg2_30; // @[bundled_block_division.scala 150:35]
  reg  signReg_30; // @[bundled_block_division.scala 152:28]
  wire [7:0] _multiplication_T_632 = multiplierReg_30[3:0] * multiplierReg2_30[3:0]; // @[bundled_block_division.scala 156:47]
  wire [3:0] _multiplication_T_634 = {2'h0,multiplierReg_30[5:4]}; // @[bundled_block_division.scala 156:83]
  wire [7:0] _multiplication_T_636 = _multiplication_T_634 * multiplierReg2_30[3:0]; // @[bundled_block_division.scala 156:106]
  wire [11:0] _GEN_194 = {_multiplication_T_636, 4'h0}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _multiplication_T_637 = {{3'd0}, _GEN_194}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _GEN_195 = {{7'd0}, _multiplication_T_632}; // @[bundled_block_division.scala 156:69]
  wire [15:0] _multiplication_T_638 = _GEN_195 + _multiplication_T_637; // @[bundled_block_division.scala 156:69]
  wire [3:0] _multiplication_T_641 = {2'h0,multiplierReg2_30[5:4]}; // @[bundled_block_division.scala 156:172]
  wire [7:0] _multiplication_T_642 = multiplierReg_30[3:0] * _multiplication_T_641; // @[bundled_block_division.scala 156:161]
  wire [11:0] _GEN_196 = {_multiplication_T_642, 4'h0}; // @[bundled_block_division.scala 156:197]
  wire [14:0] _multiplication_T_643 = {{3'd0}, _GEN_196}; // @[bundled_block_division.scala 156:197]
  wire [15:0] _GEN_197 = {{1'd0}, _multiplication_T_643}; // @[bundled_block_division.scala 156:137]
  wire [16:0] _multiplication_T_644 = _multiplication_T_638 + _GEN_197; // @[bundled_block_division.scala 156:137]
  wire [7:0] _multiplication_T_649 = _multiplication_T_634 * _multiplication_T_641; // @[bundled_block_division.scala 156:240]
  wire [15:0] _GEN_198 = {_multiplication_T_649, 8'h0}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _multiplication_T_650 = {{7'd0}, _GEN_198}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _GEN_199 = {{6'd0}, _multiplication_T_644}; // @[bundled_block_division.scala 156:205]
  wire [23:0] multiplication_30 = _GEN_199 + _multiplication_T_650; // @[bundled_block_division.scala 156:205]
  wire [12:0] _two_complement_14_T_8 = {1'h0,dotProductRegs_1_14}; // @[bundled_block_division.scala 159:55]
  wire [12:0] _two_complement_14_T_9 = ~_two_complement_14_T_8; // @[bundled_block_division.scala 159:49]
  wire [12:0] _two_complement_14_T_11 = _two_complement_14_T_9 + 13'h1; // @[bundled_block_division.scala 159:77]
  reg [5:0] multiplierReg_31; // @[bundled_block_division.scala 149:34]
  reg [5:0] multiplierReg2_31; // @[bundled_block_division.scala 150:35]
  reg  signReg_31; // @[bundled_block_division.scala 152:28]
  wire [7:0] _multiplication_T_653 = multiplierReg_31[3:0] * multiplierReg2_31[3:0]; // @[bundled_block_division.scala 156:47]
  wire [3:0] _multiplication_T_655 = {2'h0,multiplierReg_31[5:4]}; // @[bundled_block_division.scala 156:83]
  wire [7:0] _multiplication_T_657 = _multiplication_T_655 * multiplierReg2_31[3:0]; // @[bundled_block_division.scala 156:106]
  wire [11:0] _GEN_200 = {_multiplication_T_657, 4'h0}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _multiplication_T_658 = {{3'd0}, _GEN_200}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _GEN_201 = {{7'd0}, _multiplication_T_653}; // @[bundled_block_division.scala 156:69]
  wire [15:0] _multiplication_T_659 = _GEN_201 + _multiplication_T_658; // @[bundled_block_division.scala 156:69]
  wire [3:0] _multiplication_T_662 = {2'h0,multiplierReg2_31[5:4]}; // @[bundled_block_division.scala 156:172]
  wire [7:0] _multiplication_T_663 = multiplierReg_31[3:0] * _multiplication_T_662; // @[bundled_block_division.scala 156:161]
  wire [11:0] _GEN_202 = {_multiplication_T_663, 4'h0}; // @[bundled_block_division.scala 156:197]
  wire [14:0] _multiplication_T_664 = {{3'd0}, _GEN_202}; // @[bundled_block_division.scala 156:197]
  wire [15:0] _GEN_203 = {{1'd0}, _multiplication_T_664}; // @[bundled_block_division.scala 156:137]
  wire [16:0] _multiplication_T_665 = _multiplication_T_659 + _GEN_203; // @[bundled_block_division.scala 156:137]
  wire [7:0] _multiplication_T_670 = _multiplication_T_655 * _multiplication_T_662; // @[bundled_block_division.scala 156:240]
  wire [15:0] _GEN_204 = {_multiplication_T_670, 8'h0}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _multiplication_T_671 = {{7'd0}, _GEN_204}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _GEN_205 = {{6'd0}, _multiplication_T_665}; // @[bundled_block_division.scala 156:205]
  wire [23:0] multiplication_31 = _GEN_205 + _multiplication_T_671; // @[bundled_block_division.scala 156:205]
  wire [12:0] _two_complement_15_T_8 = {1'h0,dotProductRegs_1_15}; // @[bundled_block_division.scala 159:55]
  wire [12:0] _two_complement_15_T_9 = ~_two_complement_15_T_8; // @[bundled_block_division.scala 159:49]
  wire [12:0] _two_complement_15_T_11 = _two_complement_15_T_9 + 13'h1; // @[bundled_block_division.scala 159:77]
  wire [13:0] _acc_1_T = $signed(two_complement_buffer_1_0) + $signed(two_complement_buffer_1_1); // @[bundled_block_division.scala 177:46]
  wire [13:0] _GEN_206 = {{1{two_complement_buffer_1_2[12]}},two_complement_buffer_1_2}; // @[bundled_block_division.scala 177:46]
  wire [14:0] _acc_1_T_1 = $signed(_acc_1_T) + $signed(_GEN_206); // @[bundled_block_division.scala 177:46]
  wire [14:0] _GEN_207 = {{2{two_complement_buffer_1_3[12]}},two_complement_buffer_1_3}; // @[bundled_block_division.scala 177:46]
  wire [15:0] _acc_1_T_2 = $signed(_acc_1_T_1) + $signed(_GEN_207); // @[bundled_block_division.scala 177:46]
  wire [15:0] _GEN_208 = {{3{two_complement_buffer_1_4[12]}},two_complement_buffer_1_4}; // @[bundled_block_division.scala 177:46]
  wire [16:0] _acc_1_T_3 = $signed(_acc_1_T_2) + $signed(_GEN_208); // @[bundled_block_division.scala 177:46]
  wire [16:0] _GEN_209 = {{4{two_complement_buffer_1_5[12]}},two_complement_buffer_1_5}; // @[bundled_block_division.scala 177:46]
  wire [17:0] _acc_1_T_4 = $signed(_acc_1_T_3) + $signed(_GEN_209); // @[bundled_block_division.scala 177:46]
  wire [17:0] _GEN_210 = {{5{two_complement_buffer_1_6[12]}},two_complement_buffer_1_6}; // @[bundled_block_division.scala 177:46]
  wire [18:0] _acc_1_T_5 = $signed(_acc_1_T_4) + $signed(_GEN_210); // @[bundled_block_division.scala 177:46]
  wire [18:0] _GEN_211 = {{6{two_complement_buffer_1_7[12]}},two_complement_buffer_1_7}; // @[bundled_block_division.scala 177:46]
  wire [19:0] _acc_1_T_6 = $signed(_acc_1_T_5) + $signed(_GEN_211); // @[bundled_block_division.scala 177:46]
  wire [19:0] _GEN_212 = {{7{two_complement_buffer_1_8[12]}},two_complement_buffer_1_8}; // @[bundled_block_division.scala 177:46]
  wire [20:0] _acc_1_T_7 = $signed(_acc_1_T_6) + $signed(_GEN_212); // @[bundled_block_division.scala 177:46]
  wire [20:0] _GEN_213 = {{8{two_complement_buffer_1_9[12]}},two_complement_buffer_1_9}; // @[bundled_block_division.scala 177:46]
  wire [21:0] _acc_1_T_8 = $signed(_acc_1_T_7) + $signed(_GEN_213); // @[bundled_block_division.scala 177:46]
  wire [21:0] _GEN_214 = {{9{two_complement_buffer_1_10[12]}},two_complement_buffer_1_10}; // @[bundled_block_division.scala 177:46]
  wire [22:0] _acc_1_T_9 = $signed(_acc_1_T_8) + $signed(_GEN_214); // @[bundled_block_division.scala 177:46]
  wire [22:0] _GEN_215 = {{10{two_complement_buffer_1_11[12]}},two_complement_buffer_1_11}; // @[bundled_block_division.scala 177:46]
  wire [23:0] _acc_1_T_10 = $signed(_acc_1_T_9) + $signed(_GEN_215); // @[bundled_block_division.scala 177:46]
  wire [23:0] _GEN_216 = {{11{two_complement_buffer_1_12[12]}},two_complement_buffer_1_12}; // @[bundled_block_division.scala 177:46]
  wire [24:0] _acc_1_T_11 = $signed(_acc_1_T_10) + $signed(_GEN_216); // @[bundled_block_division.scala 177:46]
  wire [24:0] _GEN_217 = {{12{two_complement_buffer_1_13[12]}},two_complement_buffer_1_13}; // @[bundled_block_division.scala 177:46]
  wire [25:0] _acc_1_T_12 = $signed(_acc_1_T_11) + $signed(_GEN_217); // @[bundled_block_division.scala 177:46]
  wire [25:0] _GEN_218 = {{13{two_complement_buffer_1_14[12]}},two_complement_buffer_1_14}; // @[bundled_block_division.scala 177:46]
  wire [26:0] _acc_1_T_13 = $signed(_acc_1_T_12) + $signed(_GEN_218); // @[bundled_block_division.scala 177:46]
  wire [26:0] _GEN_219 = {{14{two_complement_buffer_1_15[12]}},two_complement_buffer_1_15}; // @[bundled_block_division.scala 177:46]
  wire [27:0] _acc_1_T_14 = $signed(_acc_1_T_13) + $signed(_GEN_219); // @[bundled_block_division.scala 177:46]
  wire [8:0] _exp_output_2_T = io_in_a_exp_2 + io_in_b_exp_2; // @[bundled_block_division.scala 142:37]
  reg [11:0] dotProductRegs_2_0; // @[bundled_block_division.scala 143:29]
  reg [11:0] dotProductRegs_2_1; // @[bundled_block_division.scala 143:29]
  reg [11:0] dotProductRegs_2_2; // @[bundled_block_division.scala 143:29]
  reg [11:0] dotProductRegs_2_3; // @[bundled_block_division.scala 143:29]
  reg [11:0] dotProductRegs_2_4; // @[bundled_block_division.scala 143:29]
  reg [11:0] dotProductRegs_2_5; // @[bundled_block_division.scala 143:29]
  reg [11:0] dotProductRegs_2_6; // @[bundled_block_division.scala 143:29]
  reg [11:0] dotProductRegs_2_7; // @[bundled_block_division.scala 143:29]
  reg [11:0] dotProductRegs_2_8; // @[bundled_block_division.scala 143:29]
  reg [11:0] dotProductRegs_2_9; // @[bundled_block_division.scala 143:29]
  reg [11:0] dotProductRegs_2_10; // @[bundled_block_division.scala 143:29]
  reg [11:0] dotProductRegs_2_11; // @[bundled_block_division.scala 143:29]
  reg [11:0] dotProductRegs_2_12; // @[bundled_block_division.scala 143:29]
  reg [11:0] dotProductRegs_2_13; // @[bundled_block_division.scala 143:29]
  reg [11:0] dotProductRegs_2_14; // @[bundled_block_division.scala 143:29]
  reg [11:0] dotProductRegs_2_15; // @[bundled_block_division.scala 143:29]
  reg  signs_2_0; // @[bundled_block_division.scala 144:20]
  reg  signs_2_1; // @[bundled_block_division.scala 144:20]
  reg  signs_2_2; // @[bundled_block_division.scala 144:20]
  reg  signs_2_3; // @[bundled_block_division.scala 144:20]
  reg  signs_2_4; // @[bundled_block_division.scala 144:20]
  reg  signs_2_5; // @[bundled_block_division.scala 144:20]
  reg  signs_2_6; // @[bundled_block_division.scala 144:20]
  reg  signs_2_7; // @[bundled_block_division.scala 144:20]
  reg  signs_2_8; // @[bundled_block_division.scala 144:20]
  reg  signs_2_9; // @[bundled_block_division.scala 144:20]
  reg  signs_2_10; // @[bundled_block_division.scala 144:20]
  reg  signs_2_11; // @[bundled_block_division.scala 144:20]
  reg  signs_2_12; // @[bundled_block_division.scala 144:20]
  reg  signs_2_13; // @[bundled_block_division.scala 144:20]
  reg  signs_2_14; // @[bundled_block_division.scala 144:20]
  reg  signs_2_15; // @[bundled_block_division.scala 144:20]
  reg [12:0] two_complement_2_0; // @[bundled_block_division.scala 145:29]
  reg [12:0] two_complement_2_1; // @[bundled_block_division.scala 145:29]
  reg [12:0] two_complement_2_2; // @[bundled_block_division.scala 145:29]
  reg [12:0] two_complement_2_3; // @[bundled_block_division.scala 145:29]
  reg [12:0] two_complement_2_4; // @[bundled_block_division.scala 145:29]
  reg [12:0] two_complement_2_5; // @[bundled_block_division.scala 145:29]
  reg [12:0] two_complement_2_6; // @[bundled_block_division.scala 145:29]
  reg [12:0] two_complement_2_7; // @[bundled_block_division.scala 145:29]
  reg [12:0] two_complement_2_8; // @[bundled_block_division.scala 145:29]
  reg [12:0] two_complement_2_9; // @[bundled_block_division.scala 145:29]
  reg [12:0] two_complement_2_10; // @[bundled_block_division.scala 145:29]
  reg [12:0] two_complement_2_11; // @[bundled_block_division.scala 145:29]
  reg [12:0] two_complement_2_12; // @[bundled_block_division.scala 145:29]
  reg [12:0] two_complement_2_13; // @[bundled_block_division.scala 145:29]
  reg [12:0] two_complement_2_14; // @[bundled_block_division.scala 145:29]
  reg [12:0] two_complement_2_15; // @[bundled_block_division.scala 145:29]
  reg [12:0] two_complement_buffer_2_0; // @[bundled_block_division.scala 146:36]
  reg [12:0] two_complement_buffer_2_1; // @[bundled_block_division.scala 146:36]
  reg [12:0] two_complement_buffer_2_2; // @[bundled_block_division.scala 146:36]
  reg [12:0] two_complement_buffer_2_3; // @[bundled_block_division.scala 146:36]
  reg [12:0] two_complement_buffer_2_4; // @[bundled_block_division.scala 146:36]
  reg [12:0] two_complement_buffer_2_5; // @[bundled_block_division.scala 146:36]
  reg [12:0] two_complement_buffer_2_6; // @[bundled_block_division.scala 146:36]
  reg [12:0] two_complement_buffer_2_7; // @[bundled_block_division.scala 146:36]
  reg [12:0] two_complement_buffer_2_8; // @[bundled_block_division.scala 146:36]
  reg [12:0] two_complement_buffer_2_9; // @[bundled_block_division.scala 146:36]
  reg [12:0] two_complement_buffer_2_10; // @[bundled_block_division.scala 146:36]
  reg [12:0] two_complement_buffer_2_11; // @[bundled_block_division.scala 146:36]
  reg [12:0] two_complement_buffer_2_12; // @[bundled_block_division.scala 146:36]
  reg [12:0] two_complement_buffer_2_13; // @[bundled_block_division.scala 146:36]
  reg [12:0] two_complement_buffer_2_14; // @[bundled_block_division.scala 146:36]
  reg [12:0] two_complement_buffer_2_15; // @[bundled_block_division.scala 146:36]
  reg [5:0] multiplierReg_32; // @[bundled_block_division.scala 149:34]
  reg [5:0] multiplierReg2_32; // @[bundled_block_division.scala 150:35]
  reg  signReg_32; // @[bundled_block_division.scala 152:28]
  wire [7:0] _multiplication_T_674 = multiplierReg_32[3:0] * multiplierReg2_32[3:0]; // @[bundled_block_division.scala 156:47]
  wire [3:0] _multiplication_T_676 = {2'h0,multiplierReg_32[5:4]}; // @[bundled_block_division.scala 156:83]
  wire [7:0] _multiplication_T_678 = _multiplication_T_676 * multiplierReg2_32[3:0]; // @[bundled_block_division.scala 156:106]
  wire [11:0] _GEN_220 = {_multiplication_T_678, 4'h0}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _multiplication_T_679 = {{3'd0}, _GEN_220}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _GEN_221 = {{7'd0}, _multiplication_T_674}; // @[bundled_block_division.scala 156:69]
  wire [15:0] _multiplication_T_680 = _GEN_221 + _multiplication_T_679; // @[bundled_block_division.scala 156:69]
  wire [3:0] _multiplication_T_683 = {2'h0,multiplierReg2_32[5:4]}; // @[bundled_block_division.scala 156:172]
  wire [7:0] _multiplication_T_684 = multiplierReg_32[3:0] * _multiplication_T_683; // @[bundled_block_division.scala 156:161]
  wire [11:0] _GEN_222 = {_multiplication_T_684, 4'h0}; // @[bundled_block_division.scala 156:197]
  wire [14:0] _multiplication_T_685 = {{3'd0}, _GEN_222}; // @[bundled_block_division.scala 156:197]
  wire [15:0] _GEN_223 = {{1'd0}, _multiplication_T_685}; // @[bundled_block_division.scala 156:137]
  wire [16:0] _multiplication_T_686 = _multiplication_T_680 + _GEN_223; // @[bundled_block_division.scala 156:137]
  wire [7:0] _multiplication_T_691 = _multiplication_T_676 * _multiplication_T_683; // @[bundled_block_division.scala 156:240]
  wire [15:0] _GEN_224 = {_multiplication_T_691, 8'h0}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _multiplication_T_692 = {{7'd0}, _GEN_224}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _GEN_225 = {{6'd0}, _multiplication_T_686}; // @[bundled_block_division.scala 156:205]
  wire [23:0] multiplication_32 = _GEN_225 + _multiplication_T_692; // @[bundled_block_division.scala 156:205]
  wire [12:0] _two_complement_0_T_15 = {1'h0,dotProductRegs_2_0}; // @[bundled_block_division.scala 159:55]
  wire [12:0] _two_complement_0_T_16 = ~_two_complement_0_T_15; // @[bundled_block_division.scala 159:49]
  wire [12:0] _two_complement_0_T_18 = _two_complement_0_T_16 + 13'h1; // @[bundled_block_division.scala 159:77]
  reg [5:0] multiplierReg_33; // @[bundled_block_division.scala 149:34]
  reg [5:0] multiplierReg2_33; // @[bundled_block_division.scala 150:35]
  reg  signReg_33; // @[bundled_block_division.scala 152:28]
  wire [7:0] _multiplication_T_695 = multiplierReg_33[3:0] * multiplierReg2_33[3:0]; // @[bundled_block_division.scala 156:47]
  wire [3:0] _multiplication_T_697 = {2'h0,multiplierReg_33[5:4]}; // @[bundled_block_division.scala 156:83]
  wire [7:0] _multiplication_T_699 = _multiplication_T_697 * multiplierReg2_33[3:0]; // @[bundled_block_division.scala 156:106]
  wire [11:0] _GEN_226 = {_multiplication_T_699, 4'h0}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _multiplication_T_700 = {{3'd0}, _GEN_226}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _GEN_227 = {{7'd0}, _multiplication_T_695}; // @[bundled_block_division.scala 156:69]
  wire [15:0] _multiplication_T_701 = _GEN_227 + _multiplication_T_700; // @[bundled_block_division.scala 156:69]
  wire [3:0] _multiplication_T_704 = {2'h0,multiplierReg2_33[5:4]}; // @[bundled_block_division.scala 156:172]
  wire [7:0] _multiplication_T_705 = multiplierReg_33[3:0] * _multiplication_T_704; // @[bundled_block_division.scala 156:161]
  wire [11:0] _GEN_228 = {_multiplication_T_705, 4'h0}; // @[bundled_block_division.scala 156:197]
  wire [14:0] _multiplication_T_706 = {{3'd0}, _GEN_228}; // @[bundled_block_division.scala 156:197]
  wire [15:0] _GEN_229 = {{1'd0}, _multiplication_T_706}; // @[bundled_block_division.scala 156:137]
  wire [16:0] _multiplication_T_707 = _multiplication_T_701 + _GEN_229; // @[bundled_block_division.scala 156:137]
  wire [7:0] _multiplication_T_712 = _multiplication_T_697 * _multiplication_T_704; // @[bundled_block_division.scala 156:240]
  wire [15:0] _GEN_230 = {_multiplication_T_712, 8'h0}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _multiplication_T_713 = {{7'd0}, _GEN_230}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _GEN_231 = {{6'd0}, _multiplication_T_707}; // @[bundled_block_division.scala 156:205]
  wire [23:0] multiplication_33 = _GEN_231 + _multiplication_T_713; // @[bundled_block_division.scala 156:205]
  wire [12:0] _two_complement_1_T_15 = {1'h0,dotProductRegs_2_1}; // @[bundled_block_division.scala 159:55]
  wire [12:0] _two_complement_1_T_16 = ~_two_complement_1_T_15; // @[bundled_block_division.scala 159:49]
  wire [12:0] _two_complement_1_T_18 = _two_complement_1_T_16 + 13'h1; // @[bundled_block_division.scala 159:77]
  reg [5:0] multiplierReg_34; // @[bundled_block_division.scala 149:34]
  reg [5:0] multiplierReg2_34; // @[bundled_block_division.scala 150:35]
  reg  signReg_34; // @[bundled_block_division.scala 152:28]
  wire [7:0] _multiplication_T_716 = multiplierReg_34[3:0] * multiplierReg2_34[3:0]; // @[bundled_block_division.scala 156:47]
  wire [3:0] _multiplication_T_718 = {2'h0,multiplierReg_34[5:4]}; // @[bundled_block_division.scala 156:83]
  wire [7:0] _multiplication_T_720 = _multiplication_T_718 * multiplierReg2_34[3:0]; // @[bundled_block_division.scala 156:106]
  wire [11:0] _GEN_232 = {_multiplication_T_720, 4'h0}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _multiplication_T_721 = {{3'd0}, _GEN_232}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _GEN_233 = {{7'd0}, _multiplication_T_716}; // @[bundled_block_division.scala 156:69]
  wire [15:0] _multiplication_T_722 = _GEN_233 + _multiplication_T_721; // @[bundled_block_division.scala 156:69]
  wire [3:0] _multiplication_T_725 = {2'h0,multiplierReg2_34[5:4]}; // @[bundled_block_division.scala 156:172]
  wire [7:0] _multiplication_T_726 = multiplierReg_34[3:0] * _multiplication_T_725; // @[bundled_block_division.scala 156:161]
  wire [11:0] _GEN_234 = {_multiplication_T_726, 4'h0}; // @[bundled_block_division.scala 156:197]
  wire [14:0] _multiplication_T_727 = {{3'd0}, _GEN_234}; // @[bundled_block_division.scala 156:197]
  wire [15:0] _GEN_235 = {{1'd0}, _multiplication_T_727}; // @[bundled_block_division.scala 156:137]
  wire [16:0] _multiplication_T_728 = _multiplication_T_722 + _GEN_235; // @[bundled_block_division.scala 156:137]
  wire [7:0] _multiplication_T_733 = _multiplication_T_718 * _multiplication_T_725; // @[bundled_block_division.scala 156:240]
  wire [15:0] _GEN_236 = {_multiplication_T_733, 8'h0}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _multiplication_T_734 = {{7'd0}, _GEN_236}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _GEN_237 = {{6'd0}, _multiplication_T_728}; // @[bundled_block_division.scala 156:205]
  wire [23:0] multiplication_34 = _GEN_237 + _multiplication_T_734; // @[bundled_block_division.scala 156:205]
  wire [12:0] _two_complement_2_T_15 = {1'h0,dotProductRegs_2_2}; // @[bundled_block_division.scala 159:55]
  wire [12:0] _two_complement_2_T_16 = ~_two_complement_2_T_15; // @[bundled_block_division.scala 159:49]
  wire [12:0] _two_complement_2_T_18 = _two_complement_2_T_16 + 13'h1; // @[bundled_block_division.scala 159:77]
  reg [5:0] multiplierReg_35; // @[bundled_block_division.scala 149:34]
  reg [5:0] multiplierReg2_35; // @[bundled_block_division.scala 150:35]
  reg  signReg_35; // @[bundled_block_division.scala 152:28]
  wire [7:0] _multiplication_T_737 = multiplierReg_35[3:0] * multiplierReg2_35[3:0]; // @[bundled_block_division.scala 156:47]
  wire [3:0] _multiplication_T_739 = {2'h0,multiplierReg_35[5:4]}; // @[bundled_block_division.scala 156:83]
  wire [7:0] _multiplication_T_741 = _multiplication_T_739 * multiplierReg2_35[3:0]; // @[bundled_block_division.scala 156:106]
  wire [11:0] _GEN_238 = {_multiplication_T_741, 4'h0}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _multiplication_T_742 = {{3'd0}, _GEN_238}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _GEN_239 = {{7'd0}, _multiplication_T_737}; // @[bundled_block_division.scala 156:69]
  wire [15:0] _multiplication_T_743 = _GEN_239 + _multiplication_T_742; // @[bundled_block_division.scala 156:69]
  wire [3:0] _multiplication_T_746 = {2'h0,multiplierReg2_35[5:4]}; // @[bundled_block_division.scala 156:172]
  wire [7:0] _multiplication_T_747 = multiplierReg_35[3:0] * _multiplication_T_746; // @[bundled_block_division.scala 156:161]
  wire [11:0] _GEN_240 = {_multiplication_T_747, 4'h0}; // @[bundled_block_division.scala 156:197]
  wire [14:0] _multiplication_T_748 = {{3'd0}, _GEN_240}; // @[bundled_block_division.scala 156:197]
  wire [15:0] _GEN_241 = {{1'd0}, _multiplication_T_748}; // @[bundled_block_division.scala 156:137]
  wire [16:0] _multiplication_T_749 = _multiplication_T_743 + _GEN_241; // @[bundled_block_division.scala 156:137]
  wire [7:0] _multiplication_T_754 = _multiplication_T_739 * _multiplication_T_746; // @[bundled_block_division.scala 156:240]
  wire [15:0] _GEN_242 = {_multiplication_T_754, 8'h0}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _multiplication_T_755 = {{7'd0}, _GEN_242}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _GEN_243 = {{6'd0}, _multiplication_T_749}; // @[bundled_block_division.scala 156:205]
  wire [23:0] multiplication_35 = _GEN_243 + _multiplication_T_755; // @[bundled_block_division.scala 156:205]
  wire [12:0] _two_complement_3_T_15 = {1'h0,dotProductRegs_2_3}; // @[bundled_block_division.scala 159:55]
  wire [12:0] _two_complement_3_T_16 = ~_two_complement_3_T_15; // @[bundled_block_division.scala 159:49]
  wire [12:0] _two_complement_3_T_18 = _two_complement_3_T_16 + 13'h1; // @[bundled_block_division.scala 159:77]
  reg [5:0] multiplierReg_36; // @[bundled_block_division.scala 149:34]
  reg [5:0] multiplierReg2_36; // @[bundled_block_division.scala 150:35]
  reg  signReg_36; // @[bundled_block_division.scala 152:28]
  wire [7:0] _multiplication_T_758 = multiplierReg_36[3:0] * multiplierReg2_36[3:0]; // @[bundled_block_division.scala 156:47]
  wire [3:0] _multiplication_T_760 = {2'h0,multiplierReg_36[5:4]}; // @[bundled_block_division.scala 156:83]
  wire [7:0] _multiplication_T_762 = _multiplication_T_760 * multiplierReg2_36[3:0]; // @[bundled_block_division.scala 156:106]
  wire [11:0] _GEN_244 = {_multiplication_T_762, 4'h0}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _multiplication_T_763 = {{3'd0}, _GEN_244}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _GEN_245 = {{7'd0}, _multiplication_T_758}; // @[bundled_block_division.scala 156:69]
  wire [15:0] _multiplication_T_764 = _GEN_245 + _multiplication_T_763; // @[bundled_block_division.scala 156:69]
  wire [3:0] _multiplication_T_767 = {2'h0,multiplierReg2_36[5:4]}; // @[bundled_block_division.scala 156:172]
  wire [7:0] _multiplication_T_768 = multiplierReg_36[3:0] * _multiplication_T_767; // @[bundled_block_division.scala 156:161]
  wire [11:0] _GEN_246 = {_multiplication_T_768, 4'h0}; // @[bundled_block_division.scala 156:197]
  wire [14:0] _multiplication_T_769 = {{3'd0}, _GEN_246}; // @[bundled_block_division.scala 156:197]
  wire [15:0] _GEN_247 = {{1'd0}, _multiplication_T_769}; // @[bundled_block_division.scala 156:137]
  wire [16:0] _multiplication_T_770 = _multiplication_T_764 + _GEN_247; // @[bundled_block_division.scala 156:137]
  wire [7:0] _multiplication_T_775 = _multiplication_T_760 * _multiplication_T_767; // @[bundled_block_division.scala 156:240]
  wire [15:0] _GEN_248 = {_multiplication_T_775, 8'h0}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _multiplication_T_776 = {{7'd0}, _GEN_248}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _GEN_249 = {{6'd0}, _multiplication_T_770}; // @[bundled_block_division.scala 156:205]
  wire [23:0] multiplication_36 = _GEN_249 + _multiplication_T_776; // @[bundled_block_division.scala 156:205]
  wire [12:0] _two_complement_4_T_15 = {1'h0,dotProductRegs_2_4}; // @[bundled_block_division.scala 159:55]
  wire [12:0] _two_complement_4_T_16 = ~_two_complement_4_T_15; // @[bundled_block_division.scala 159:49]
  wire [12:0] _two_complement_4_T_18 = _two_complement_4_T_16 + 13'h1; // @[bundled_block_division.scala 159:77]
  reg [5:0] multiplierReg_37; // @[bundled_block_division.scala 149:34]
  reg [5:0] multiplierReg2_37; // @[bundled_block_division.scala 150:35]
  reg  signReg_37; // @[bundled_block_division.scala 152:28]
  wire [7:0] _multiplication_T_779 = multiplierReg_37[3:0] * multiplierReg2_37[3:0]; // @[bundled_block_division.scala 156:47]
  wire [3:0] _multiplication_T_781 = {2'h0,multiplierReg_37[5:4]}; // @[bundled_block_division.scala 156:83]
  wire [7:0] _multiplication_T_783 = _multiplication_T_781 * multiplierReg2_37[3:0]; // @[bundled_block_division.scala 156:106]
  wire [11:0] _GEN_250 = {_multiplication_T_783, 4'h0}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _multiplication_T_784 = {{3'd0}, _GEN_250}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _GEN_251 = {{7'd0}, _multiplication_T_779}; // @[bundled_block_division.scala 156:69]
  wire [15:0] _multiplication_T_785 = _GEN_251 + _multiplication_T_784; // @[bundled_block_division.scala 156:69]
  wire [3:0] _multiplication_T_788 = {2'h0,multiplierReg2_37[5:4]}; // @[bundled_block_division.scala 156:172]
  wire [7:0] _multiplication_T_789 = multiplierReg_37[3:0] * _multiplication_T_788; // @[bundled_block_division.scala 156:161]
  wire [11:0] _GEN_252 = {_multiplication_T_789, 4'h0}; // @[bundled_block_division.scala 156:197]
  wire [14:0] _multiplication_T_790 = {{3'd0}, _GEN_252}; // @[bundled_block_division.scala 156:197]
  wire [15:0] _GEN_253 = {{1'd0}, _multiplication_T_790}; // @[bundled_block_division.scala 156:137]
  wire [16:0] _multiplication_T_791 = _multiplication_T_785 + _GEN_253; // @[bundled_block_division.scala 156:137]
  wire [7:0] _multiplication_T_796 = _multiplication_T_781 * _multiplication_T_788; // @[bundled_block_division.scala 156:240]
  wire [15:0] _GEN_254 = {_multiplication_T_796, 8'h0}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _multiplication_T_797 = {{7'd0}, _GEN_254}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _GEN_255 = {{6'd0}, _multiplication_T_791}; // @[bundled_block_division.scala 156:205]
  wire [23:0] multiplication_37 = _GEN_255 + _multiplication_T_797; // @[bundled_block_division.scala 156:205]
  wire [12:0] _two_complement_5_T_15 = {1'h0,dotProductRegs_2_5}; // @[bundled_block_division.scala 159:55]
  wire [12:0] _two_complement_5_T_16 = ~_two_complement_5_T_15; // @[bundled_block_division.scala 159:49]
  wire [12:0] _two_complement_5_T_18 = _two_complement_5_T_16 + 13'h1; // @[bundled_block_division.scala 159:77]
  reg [5:0] multiplierReg_38; // @[bundled_block_division.scala 149:34]
  reg [5:0] multiplierReg2_38; // @[bundled_block_division.scala 150:35]
  reg  signReg_38; // @[bundled_block_division.scala 152:28]
  wire [7:0] _multiplication_T_800 = multiplierReg_38[3:0] * multiplierReg2_38[3:0]; // @[bundled_block_division.scala 156:47]
  wire [3:0] _multiplication_T_802 = {2'h0,multiplierReg_38[5:4]}; // @[bundled_block_division.scala 156:83]
  wire [7:0] _multiplication_T_804 = _multiplication_T_802 * multiplierReg2_38[3:0]; // @[bundled_block_division.scala 156:106]
  wire [11:0] _GEN_256 = {_multiplication_T_804, 4'h0}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _multiplication_T_805 = {{3'd0}, _GEN_256}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _GEN_257 = {{7'd0}, _multiplication_T_800}; // @[bundled_block_division.scala 156:69]
  wire [15:0] _multiplication_T_806 = _GEN_257 + _multiplication_T_805; // @[bundled_block_division.scala 156:69]
  wire [3:0] _multiplication_T_809 = {2'h0,multiplierReg2_38[5:4]}; // @[bundled_block_division.scala 156:172]
  wire [7:0] _multiplication_T_810 = multiplierReg_38[3:0] * _multiplication_T_809; // @[bundled_block_division.scala 156:161]
  wire [11:0] _GEN_258 = {_multiplication_T_810, 4'h0}; // @[bundled_block_division.scala 156:197]
  wire [14:0] _multiplication_T_811 = {{3'd0}, _GEN_258}; // @[bundled_block_division.scala 156:197]
  wire [15:0] _GEN_259 = {{1'd0}, _multiplication_T_811}; // @[bundled_block_division.scala 156:137]
  wire [16:0] _multiplication_T_812 = _multiplication_T_806 + _GEN_259; // @[bundled_block_division.scala 156:137]
  wire [7:0] _multiplication_T_817 = _multiplication_T_802 * _multiplication_T_809; // @[bundled_block_division.scala 156:240]
  wire [15:0] _GEN_260 = {_multiplication_T_817, 8'h0}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _multiplication_T_818 = {{7'd0}, _GEN_260}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _GEN_261 = {{6'd0}, _multiplication_T_812}; // @[bundled_block_division.scala 156:205]
  wire [23:0] multiplication_38 = _GEN_261 + _multiplication_T_818; // @[bundled_block_division.scala 156:205]
  wire [12:0] _two_complement_6_T_15 = {1'h0,dotProductRegs_2_6}; // @[bundled_block_division.scala 159:55]
  wire [12:0] _two_complement_6_T_16 = ~_two_complement_6_T_15; // @[bundled_block_division.scala 159:49]
  wire [12:0] _two_complement_6_T_18 = _two_complement_6_T_16 + 13'h1; // @[bundled_block_division.scala 159:77]
  reg [5:0] multiplierReg_39; // @[bundled_block_division.scala 149:34]
  reg [5:0] multiplierReg2_39; // @[bundled_block_division.scala 150:35]
  reg  signReg_39; // @[bundled_block_division.scala 152:28]
  wire [7:0] _multiplication_T_821 = multiplierReg_39[3:0] * multiplierReg2_39[3:0]; // @[bundled_block_division.scala 156:47]
  wire [3:0] _multiplication_T_823 = {2'h0,multiplierReg_39[5:4]}; // @[bundled_block_division.scala 156:83]
  wire [7:0] _multiplication_T_825 = _multiplication_T_823 * multiplierReg2_39[3:0]; // @[bundled_block_division.scala 156:106]
  wire [11:0] _GEN_262 = {_multiplication_T_825, 4'h0}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _multiplication_T_826 = {{3'd0}, _GEN_262}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _GEN_263 = {{7'd0}, _multiplication_T_821}; // @[bundled_block_division.scala 156:69]
  wire [15:0] _multiplication_T_827 = _GEN_263 + _multiplication_T_826; // @[bundled_block_division.scala 156:69]
  wire [3:0] _multiplication_T_830 = {2'h0,multiplierReg2_39[5:4]}; // @[bundled_block_division.scala 156:172]
  wire [7:0] _multiplication_T_831 = multiplierReg_39[3:0] * _multiplication_T_830; // @[bundled_block_division.scala 156:161]
  wire [11:0] _GEN_264 = {_multiplication_T_831, 4'h0}; // @[bundled_block_division.scala 156:197]
  wire [14:0] _multiplication_T_832 = {{3'd0}, _GEN_264}; // @[bundled_block_division.scala 156:197]
  wire [15:0] _GEN_265 = {{1'd0}, _multiplication_T_832}; // @[bundled_block_division.scala 156:137]
  wire [16:0] _multiplication_T_833 = _multiplication_T_827 + _GEN_265; // @[bundled_block_division.scala 156:137]
  wire [7:0] _multiplication_T_838 = _multiplication_T_823 * _multiplication_T_830; // @[bundled_block_division.scala 156:240]
  wire [15:0] _GEN_266 = {_multiplication_T_838, 8'h0}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _multiplication_T_839 = {{7'd0}, _GEN_266}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _GEN_267 = {{6'd0}, _multiplication_T_833}; // @[bundled_block_division.scala 156:205]
  wire [23:0] multiplication_39 = _GEN_267 + _multiplication_T_839; // @[bundled_block_division.scala 156:205]
  wire [12:0] _two_complement_7_T_15 = {1'h0,dotProductRegs_2_7}; // @[bundled_block_division.scala 159:55]
  wire [12:0] _two_complement_7_T_16 = ~_two_complement_7_T_15; // @[bundled_block_division.scala 159:49]
  wire [12:0] _two_complement_7_T_18 = _two_complement_7_T_16 + 13'h1; // @[bundled_block_division.scala 159:77]
  reg [5:0] multiplierReg_40; // @[bundled_block_division.scala 149:34]
  reg [5:0] multiplierReg2_40; // @[bundled_block_division.scala 150:35]
  reg  signReg_40; // @[bundled_block_division.scala 152:28]
  wire [7:0] _multiplication_T_842 = multiplierReg_40[3:0] * multiplierReg2_40[3:0]; // @[bundled_block_division.scala 156:47]
  wire [3:0] _multiplication_T_844 = {2'h0,multiplierReg_40[5:4]}; // @[bundled_block_division.scala 156:83]
  wire [7:0] _multiplication_T_846 = _multiplication_T_844 * multiplierReg2_40[3:0]; // @[bundled_block_division.scala 156:106]
  wire [11:0] _GEN_268 = {_multiplication_T_846, 4'h0}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _multiplication_T_847 = {{3'd0}, _GEN_268}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _GEN_269 = {{7'd0}, _multiplication_T_842}; // @[bundled_block_division.scala 156:69]
  wire [15:0] _multiplication_T_848 = _GEN_269 + _multiplication_T_847; // @[bundled_block_division.scala 156:69]
  wire [3:0] _multiplication_T_851 = {2'h0,multiplierReg2_40[5:4]}; // @[bundled_block_division.scala 156:172]
  wire [7:0] _multiplication_T_852 = multiplierReg_40[3:0] * _multiplication_T_851; // @[bundled_block_division.scala 156:161]
  wire [11:0] _GEN_270 = {_multiplication_T_852, 4'h0}; // @[bundled_block_division.scala 156:197]
  wire [14:0] _multiplication_T_853 = {{3'd0}, _GEN_270}; // @[bundled_block_division.scala 156:197]
  wire [15:0] _GEN_271 = {{1'd0}, _multiplication_T_853}; // @[bundled_block_division.scala 156:137]
  wire [16:0] _multiplication_T_854 = _multiplication_T_848 + _GEN_271; // @[bundled_block_division.scala 156:137]
  wire [7:0] _multiplication_T_859 = _multiplication_T_844 * _multiplication_T_851; // @[bundled_block_division.scala 156:240]
  wire [15:0] _GEN_272 = {_multiplication_T_859, 8'h0}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _multiplication_T_860 = {{7'd0}, _GEN_272}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _GEN_273 = {{6'd0}, _multiplication_T_854}; // @[bundled_block_division.scala 156:205]
  wire [23:0] multiplication_40 = _GEN_273 + _multiplication_T_860; // @[bundled_block_division.scala 156:205]
  wire [12:0] _two_complement_8_T_15 = {1'h0,dotProductRegs_2_8}; // @[bundled_block_division.scala 159:55]
  wire [12:0] _two_complement_8_T_16 = ~_two_complement_8_T_15; // @[bundled_block_division.scala 159:49]
  wire [12:0] _two_complement_8_T_18 = _two_complement_8_T_16 + 13'h1; // @[bundled_block_division.scala 159:77]
  reg [5:0] multiplierReg_41; // @[bundled_block_division.scala 149:34]
  reg [5:0] multiplierReg2_41; // @[bundled_block_division.scala 150:35]
  reg  signReg_41; // @[bundled_block_division.scala 152:28]
  wire [7:0] _multiplication_T_863 = multiplierReg_41[3:0] * multiplierReg2_41[3:0]; // @[bundled_block_division.scala 156:47]
  wire [3:0] _multiplication_T_865 = {2'h0,multiplierReg_41[5:4]}; // @[bundled_block_division.scala 156:83]
  wire [7:0] _multiplication_T_867 = _multiplication_T_865 * multiplierReg2_41[3:0]; // @[bundled_block_division.scala 156:106]
  wire [11:0] _GEN_274 = {_multiplication_T_867, 4'h0}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _multiplication_T_868 = {{3'd0}, _GEN_274}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _GEN_275 = {{7'd0}, _multiplication_T_863}; // @[bundled_block_division.scala 156:69]
  wire [15:0] _multiplication_T_869 = _GEN_275 + _multiplication_T_868; // @[bundled_block_division.scala 156:69]
  wire [3:0] _multiplication_T_872 = {2'h0,multiplierReg2_41[5:4]}; // @[bundled_block_division.scala 156:172]
  wire [7:0] _multiplication_T_873 = multiplierReg_41[3:0] * _multiplication_T_872; // @[bundled_block_division.scala 156:161]
  wire [11:0] _GEN_276 = {_multiplication_T_873, 4'h0}; // @[bundled_block_division.scala 156:197]
  wire [14:0] _multiplication_T_874 = {{3'd0}, _GEN_276}; // @[bundled_block_division.scala 156:197]
  wire [15:0] _GEN_277 = {{1'd0}, _multiplication_T_874}; // @[bundled_block_division.scala 156:137]
  wire [16:0] _multiplication_T_875 = _multiplication_T_869 + _GEN_277; // @[bundled_block_division.scala 156:137]
  wire [7:0] _multiplication_T_880 = _multiplication_T_865 * _multiplication_T_872; // @[bundled_block_division.scala 156:240]
  wire [15:0] _GEN_278 = {_multiplication_T_880, 8'h0}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _multiplication_T_881 = {{7'd0}, _GEN_278}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _GEN_279 = {{6'd0}, _multiplication_T_875}; // @[bundled_block_division.scala 156:205]
  wire [23:0] multiplication_41 = _GEN_279 + _multiplication_T_881; // @[bundled_block_division.scala 156:205]
  wire [12:0] _two_complement_9_T_15 = {1'h0,dotProductRegs_2_9}; // @[bundled_block_division.scala 159:55]
  wire [12:0] _two_complement_9_T_16 = ~_two_complement_9_T_15; // @[bundled_block_division.scala 159:49]
  wire [12:0] _two_complement_9_T_18 = _two_complement_9_T_16 + 13'h1; // @[bundled_block_division.scala 159:77]
  reg [5:0] multiplierReg_42; // @[bundled_block_division.scala 149:34]
  reg [5:0] multiplierReg2_42; // @[bundled_block_division.scala 150:35]
  reg  signReg_42; // @[bundled_block_division.scala 152:28]
  wire [7:0] _multiplication_T_884 = multiplierReg_42[3:0] * multiplierReg2_42[3:0]; // @[bundled_block_division.scala 156:47]
  wire [3:0] _multiplication_T_886 = {2'h0,multiplierReg_42[5:4]}; // @[bundled_block_division.scala 156:83]
  wire [7:0] _multiplication_T_888 = _multiplication_T_886 * multiplierReg2_42[3:0]; // @[bundled_block_division.scala 156:106]
  wire [11:0] _GEN_280 = {_multiplication_T_888, 4'h0}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _multiplication_T_889 = {{3'd0}, _GEN_280}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _GEN_281 = {{7'd0}, _multiplication_T_884}; // @[bundled_block_division.scala 156:69]
  wire [15:0] _multiplication_T_890 = _GEN_281 + _multiplication_T_889; // @[bundled_block_division.scala 156:69]
  wire [3:0] _multiplication_T_893 = {2'h0,multiplierReg2_42[5:4]}; // @[bundled_block_division.scala 156:172]
  wire [7:0] _multiplication_T_894 = multiplierReg_42[3:0] * _multiplication_T_893; // @[bundled_block_division.scala 156:161]
  wire [11:0] _GEN_282 = {_multiplication_T_894, 4'h0}; // @[bundled_block_division.scala 156:197]
  wire [14:0] _multiplication_T_895 = {{3'd0}, _GEN_282}; // @[bundled_block_division.scala 156:197]
  wire [15:0] _GEN_283 = {{1'd0}, _multiplication_T_895}; // @[bundled_block_division.scala 156:137]
  wire [16:0] _multiplication_T_896 = _multiplication_T_890 + _GEN_283; // @[bundled_block_division.scala 156:137]
  wire [7:0] _multiplication_T_901 = _multiplication_T_886 * _multiplication_T_893; // @[bundled_block_division.scala 156:240]
  wire [15:0] _GEN_284 = {_multiplication_T_901, 8'h0}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _multiplication_T_902 = {{7'd0}, _GEN_284}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _GEN_285 = {{6'd0}, _multiplication_T_896}; // @[bundled_block_division.scala 156:205]
  wire [23:0] multiplication_42 = _GEN_285 + _multiplication_T_902; // @[bundled_block_division.scala 156:205]
  wire [12:0] _two_complement_10_T_15 = {1'h0,dotProductRegs_2_10}; // @[bundled_block_division.scala 159:55]
  wire [12:0] _two_complement_10_T_16 = ~_two_complement_10_T_15; // @[bundled_block_division.scala 159:49]
  wire [12:0] _two_complement_10_T_18 = _two_complement_10_T_16 + 13'h1; // @[bundled_block_division.scala 159:77]
  reg [5:0] multiplierReg_43; // @[bundled_block_division.scala 149:34]
  reg [5:0] multiplierReg2_43; // @[bundled_block_division.scala 150:35]
  reg  signReg_43; // @[bundled_block_division.scala 152:28]
  wire [7:0] _multiplication_T_905 = multiplierReg_43[3:0] * multiplierReg2_43[3:0]; // @[bundled_block_division.scala 156:47]
  wire [3:0] _multiplication_T_907 = {2'h0,multiplierReg_43[5:4]}; // @[bundled_block_division.scala 156:83]
  wire [7:0] _multiplication_T_909 = _multiplication_T_907 * multiplierReg2_43[3:0]; // @[bundled_block_division.scala 156:106]
  wire [11:0] _GEN_286 = {_multiplication_T_909, 4'h0}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _multiplication_T_910 = {{3'd0}, _GEN_286}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _GEN_287 = {{7'd0}, _multiplication_T_905}; // @[bundled_block_division.scala 156:69]
  wire [15:0] _multiplication_T_911 = _GEN_287 + _multiplication_T_910; // @[bundled_block_division.scala 156:69]
  wire [3:0] _multiplication_T_914 = {2'h0,multiplierReg2_43[5:4]}; // @[bundled_block_division.scala 156:172]
  wire [7:0] _multiplication_T_915 = multiplierReg_43[3:0] * _multiplication_T_914; // @[bundled_block_division.scala 156:161]
  wire [11:0] _GEN_288 = {_multiplication_T_915, 4'h0}; // @[bundled_block_division.scala 156:197]
  wire [14:0] _multiplication_T_916 = {{3'd0}, _GEN_288}; // @[bundled_block_division.scala 156:197]
  wire [15:0] _GEN_289 = {{1'd0}, _multiplication_T_916}; // @[bundled_block_division.scala 156:137]
  wire [16:0] _multiplication_T_917 = _multiplication_T_911 + _GEN_289; // @[bundled_block_division.scala 156:137]
  wire [7:0] _multiplication_T_922 = _multiplication_T_907 * _multiplication_T_914; // @[bundled_block_division.scala 156:240]
  wire [15:0] _GEN_290 = {_multiplication_T_922, 8'h0}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _multiplication_T_923 = {{7'd0}, _GEN_290}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _GEN_291 = {{6'd0}, _multiplication_T_917}; // @[bundled_block_division.scala 156:205]
  wire [23:0] multiplication_43 = _GEN_291 + _multiplication_T_923; // @[bundled_block_division.scala 156:205]
  wire [12:0] _two_complement_11_T_15 = {1'h0,dotProductRegs_2_11}; // @[bundled_block_division.scala 159:55]
  wire [12:0] _two_complement_11_T_16 = ~_two_complement_11_T_15; // @[bundled_block_division.scala 159:49]
  wire [12:0] _two_complement_11_T_18 = _two_complement_11_T_16 + 13'h1; // @[bundled_block_division.scala 159:77]
  reg [5:0] multiplierReg_44; // @[bundled_block_division.scala 149:34]
  reg [5:0] multiplierReg2_44; // @[bundled_block_division.scala 150:35]
  reg  signReg_44; // @[bundled_block_division.scala 152:28]
  wire [7:0] _multiplication_T_926 = multiplierReg_44[3:0] * multiplierReg2_44[3:0]; // @[bundled_block_division.scala 156:47]
  wire [3:0] _multiplication_T_928 = {2'h0,multiplierReg_44[5:4]}; // @[bundled_block_division.scala 156:83]
  wire [7:0] _multiplication_T_930 = _multiplication_T_928 * multiplierReg2_44[3:0]; // @[bundled_block_division.scala 156:106]
  wire [11:0] _GEN_292 = {_multiplication_T_930, 4'h0}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _multiplication_T_931 = {{3'd0}, _GEN_292}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _GEN_293 = {{7'd0}, _multiplication_T_926}; // @[bundled_block_division.scala 156:69]
  wire [15:0] _multiplication_T_932 = _GEN_293 + _multiplication_T_931; // @[bundled_block_division.scala 156:69]
  wire [3:0] _multiplication_T_935 = {2'h0,multiplierReg2_44[5:4]}; // @[bundled_block_division.scala 156:172]
  wire [7:0] _multiplication_T_936 = multiplierReg_44[3:0] * _multiplication_T_935; // @[bundled_block_division.scala 156:161]
  wire [11:0] _GEN_294 = {_multiplication_T_936, 4'h0}; // @[bundled_block_division.scala 156:197]
  wire [14:0] _multiplication_T_937 = {{3'd0}, _GEN_294}; // @[bundled_block_division.scala 156:197]
  wire [15:0] _GEN_295 = {{1'd0}, _multiplication_T_937}; // @[bundled_block_division.scala 156:137]
  wire [16:0] _multiplication_T_938 = _multiplication_T_932 + _GEN_295; // @[bundled_block_division.scala 156:137]
  wire [7:0] _multiplication_T_943 = _multiplication_T_928 * _multiplication_T_935; // @[bundled_block_division.scala 156:240]
  wire [15:0] _GEN_296 = {_multiplication_T_943, 8'h0}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _multiplication_T_944 = {{7'd0}, _GEN_296}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _GEN_297 = {{6'd0}, _multiplication_T_938}; // @[bundled_block_division.scala 156:205]
  wire [23:0] multiplication_44 = _GEN_297 + _multiplication_T_944; // @[bundled_block_division.scala 156:205]
  wire [12:0] _two_complement_12_T_15 = {1'h0,dotProductRegs_2_12}; // @[bundled_block_division.scala 159:55]
  wire [12:0] _two_complement_12_T_16 = ~_two_complement_12_T_15; // @[bundled_block_division.scala 159:49]
  wire [12:0] _two_complement_12_T_18 = _two_complement_12_T_16 + 13'h1; // @[bundled_block_division.scala 159:77]
  reg [5:0] multiplierReg_45; // @[bundled_block_division.scala 149:34]
  reg [5:0] multiplierReg2_45; // @[bundled_block_division.scala 150:35]
  reg  signReg_45; // @[bundled_block_division.scala 152:28]
  wire [7:0] _multiplication_T_947 = multiplierReg_45[3:0] * multiplierReg2_45[3:0]; // @[bundled_block_division.scala 156:47]
  wire [3:0] _multiplication_T_949 = {2'h0,multiplierReg_45[5:4]}; // @[bundled_block_division.scala 156:83]
  wire [7:0] _multiplication_T_951 = _multiplication_T_949 * multiplierReg2_45[3:0]; // @[bundled_block_division.scala 156:106]
  wire [11:0] _GEN_298 = {_multiplication_T_951, 4'h0}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _multiplication_T_952 = {{3'd0}, _GEN_298}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _GEN_299 = {{7'd0}, _multiplication_T_947}; // @[bundled_block_division.scala 156:69]
  wire [15:0] _multiplication_T_953 = _GEN_299 + _multiplication_T_952; // @[bundled_block_division.scala 156:69]
  wire [3:0] _multiplication_T_956 = {2'h0,multiplierReg2_45[5:4]}; // @[bundled_block_division.scala 156:172]
  wire [7:0] _multiplication_T_957 = multiplierReg_45[3:0] * _multiplication_T_956; // @[bundled_block_division.scala 156:161]
  wire [11:0] _GEN_300 = {_multiplication_T_957, 4'h0}; // @[bundled_block_division.scala 156:197]
  wire [14:0] _multiplication_T_958 = {{3'd0}, _GEN_300}; // @[bundled_block_division.scala 156:197]
  wire [15:0] _GEN_301 = {{1'd0}, _multiplication_T_958}; // @[bundled_block_division.scala 156:137]
  wire [16:0] _multiplication_T_959 = _multiplication_T_953 + _GEN_301; // @[bundled_block_division.scala 156:137]
  wire [7:0] _multiplication_T_964 = _multiplication_T_949 * _multiplication_T_956; // @[bundled_block_division.scala 156:240]
  wire [15:0] _GEN_302 = {_multiplication_T_964, 8'h0}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _multiplication_T_965 = {{7'd0}, _GEN_302}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _GEN_303 = {{6'd0}, _multiplication_T_959}; // @[bundled_block_division.scala 156:205]
  wire [23:0] multiplication_45 = _GEN_303 + _multiplication_T_965; // @[bundled_block_division.scala 156:205]
  wire [12:0] _two_complement_13_T_15 = {1'h0,dotProductRegs_2_13}; // @[bundled_block_division.scala 159:55]
  wire [12:0] _two_complement_13_T_16 = ~_two_complement_13_T_15; // @[bundled_block_division.scala 159:49]
  wire [12:0] _two_complement_13_T_18 = _two_complement_13_T_16 + 13'h1; // @[bundled_block_division.scala 159:77]
  reg [5:0] multiplierReg_46; // @[bundled_block_division.scala 149:34]
  reg [5:0] multiplierReg2_46; // @[bundled_block_division.scala 150:35]
  reg  signReg_46; // @[bundled_block_division.scala 152:28]
  wire [7:0] _multiplication_T_968 = multiplierReg_46[3:0] * multiplierReg2_46[3:0]; // @[bundled_block_division.scala 156:47]
  wire [3:0] _multiplication_T_970 = {2'h0,multiplierReg_46[5:4]}; // @[bundled_block_division.scala 156:83]
  wire [7:0] _multiplication_T_972 = _multiplication_T_970 * multiplierReg2_46[3:0]; // @[bundled_block_division.scala 156:106]
  wire [11:0] _GEN_304 = {_multiplication_T_972, 4'h0}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _multiplication_T_973 = {{3'd0}, _GEN_304}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _GEN_305 = {{7'd0}, _multiplication_T_968}; // @[bundled_block_division.scala 156:69]
  wire [15:0] _multiplication_T_974 = _GEN_305 + _multiplication_T_973; // @[bundled_block_division.scala 156:69]
  wire [3:0] _multiplication_T_977 = {2'h0,multiplierReg2_46[5:4]}; // @[bundled_block_division.scala 156:172]
  wire [7:0] _multiplication_T_978 = multiplierReg_46[3:0] * _multiplication_T_977; // @[bundled_block_division.scala 156:161]
  wire [11:0] _GEN_306 = {_multiplication_T_978, 4'h0}; // @[bundled_block_division.scala 156:197]
  wire [14:0] _multiplication_T_979 = {{3'd0}, _GEN_306}; // @[bundled_block_division.scala 156:197]
  wire [15:0] _GEN_307 = {{1'd0}, _multiplication_T_979}; // @[bundled_block_division.scala 156:137]
  wire [16:0] _multiplication_T_980 = _multiplication_T_974 + _GEN_307; // @[bundled_block_division.scala 156:137]
  wire [7:0] _multiplication_T_985 = _multiplication_T_970 * _multiplication_T_977; // @[bundled_block_division.scala 156:240]
  wire [15:0] _GEN_308 = {_multiplication_T_985, 8'h0}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _multiplication_T_986 = {{7'd0}, _GEN_308}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _GEN_309 = {{6'd0}, _multiplication_T_980}; // @[bundled_block_division.scala 156:205]
  wire [23:0] multiplication_46 = _GEN_309 + _multiplication_T_986; // @[bundled_block_division.scala 156:205]
  wire [12:0] _two_complement_14_T_15 = {1'h0,dotProductRegs_2_14}; // @[bundled_block_division.scala 159:55]
  wire [12:0] _two_complement_14_T_16 = ~_two_complement_14_T_15; // @[bundled_block_division.scala 159:49]
  wire [12:0] _two_complement_14_T_18 = _two_complement_14_T_16 + 13'h1; // @[bundled_block_division.scala 159:77]
  reg [5:0] multiplierReg_47; // @[bundled_block_division.scala 149:34]
  reg [5:0] multiplierReg2_47; // @[bundled_block_division.scala 150:35]
  reg  signReg_47; // @[bundled_block_division.scala 152:28]
  wire [7:0] _multiplication_T_989 = multiplierReg_47[3:0] * multiplierReg2_47[3:0]; // @[bundled_block_division.scala 156:47]
  wire [3:0] _multiplication_T_991 = {2'h0,multiplierReg_47[5:4]}; // @[bundled_block_division.scala 156:83]
  wire [7:0] _multiplication_T_993 = _multiplication_T_991 * multiplierReg2_47[3:0]; // @[bundled_block_division.scala 156:106]
  wire [11:0] _GEN_310 = {_multiplication_T_993, 4'h0}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _multiplication_T_994 = {{3'd0}, _GEN_310}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _GEN_311 = {{7'd0}, _multiplication_T_989}; // @[bundled_block_division.scala 156:69]
  wire [15:0] _multiplication_T_995 = _GEN_311 + _multiplication_T_994; // @[bundled_block_division.scala 156:69]
  wire [3:0] _multiplication_T_998 = {2'h0,multiplierReg2_47[5:4]}; // @[bundled_block_division.scala 156:172]
  wire [7:0] _multiplication_T_999 = multiplierReg_47[3:0] * _multiplication_T_998; // @[bundled_block_division.scala 156:161]
  wire [11:0] _GEN_312 = {_multiplication_T_999, 4'h0}; // @[bundled_block_division.scala 156:197]
  wire [14:0] _multiplication_T_1000 = {{3'd0}, _GEN_312}; // @[bundled_block_division.scala 156:197]
  wire [15:0] _GEN_313 = {{1'd0}, _multiplication_T_1000}; // @[bundled_block_division.scala 156:137]
  wire [16:0] _multiplication_T_1001 = _multiplication_T_995 + _GEN_313; // @[bundled_block_division.scala 156:137]
  wire [7:0] _multiplication_T_1006 = _multiplication_T_991 * _multiplication_T_998; // @[bundled_block_division.scala 156:240]
  wire [15:0] _GEN_314 = {_multiplication_T_1006, 8'h0}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _multiplication_T_1007 = {{7'd0}, _GEN_314}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _GEN_315 = {{6'd0}, _multiplication_T_1001}; // @[bundled_block_division.scala 156:205]
  wire [23:0] multiplication_47 = _GEN_315 + _multiplication_T_1007; // @[bundled_block_division.scala 156:205]
  wire [12:0] _two_complement_15_T_15 = {1'h0,dotProductRegs_2_15}; // @[bundled_block_division.scala 159:55]
  wire [12:0] _two_complement_15_T_16 = ~_two_complement_15_T_15; // @[bundled_block_division.scala 159:49]
  wire [12:0] _two_complement_15_T_18 = _two_complement_15_T_16 + 13'h1; // @[bundled_block_division.scala 159:77]
  wire [13:0] _acc_2_T = $signed(two_complement_buffer_2_0) + $signed(two_complement_buffer_2_1); // @[bundled_block_division.scala 177:46]
  wire [13:0] _GEN_316 = {{1{two_complement_buffer_2_2[12]}},two_complement_buffer_2_2}; // @[bundled_block_division.scala 177:46]
  wire [14:0] _acc_2_T_1 = $signed(_acc_2_T) + $signed(_GEN_316); // @[bundled_block_division.scala 177:46]
  wire [14:0] _GEN_317 = {{2{two_complement_buffer_2_3[12]}},two_complement_buffer_2_3}; // @[bundled_block_division.scala 177:46]
  wire [15:0] _acc_2_T_2 = $signed(_acc_2_T_1) + $signed(_GEN_317); // @[bundled_block_division.scala 177:46]
  wire [15:0] _GEN_318 = {{3{two_complement_buffer_2_4[12]}},two_complement_buffer_2_4}; // @[bundled_block_division.scala 177:46]
  wire [16:0] _acc_2_T_3 = $signed(_acc_2_T_2) + $signed(_GEN_318); // @[bundled_block_division.scala 177:46]
  wire [16:0] _GEN_319 = {{4{two_complement_buffer_2_5[12]}},two_complement_buffer_2_5}; // @[bundled_block_division.scala 177:46]
  wire [17:0] _acc_2_T_4 = $signed(_acc_2_T_3) + $signed(_GEN_319); // @[bundled_block_division.scala 177:46]
  wire [17:0] _GEN_320 = {{5{two_complement_buffer_2_6[12]}},two_complement_buffer_2_6}; // @[bundled_block_division.scala 177:46]
  wire [18:0] _acc_2_T_5 = $signed(_acc_2_T_4) + $signed(_GEN_320); // @[bundled_block_division.scala 177:46]
  wire [18:0] _GEN_321 = {{6{two_complement_buffer_2_7[12]}},two_complement_buffer_2_7}; // @[bundled_block_division.scala 177:46]
  wire [19:0] _acc_2_T_6 = $signed(_acc_2_T_5) + $signed(_GEN_321); // @[bundled_block_division.scala 177:46]
  wire [19:0] _GEN_322 = {{7{two_complement_buffer_2_8[12]}},two_complement_buffer_2_8}; // @[bundled_block_division.scala 177:46]
  wire [20:0] _acc_2_T_7 = $signed(_acc_2_T_6) + $signed(_GEN_322); // @[bundled_block_division.scala 177:46]
  wire [20:0] _GEN_323 = {{8{two_complement_buffer_2_9[12]}},two_complement_buffer_2_9}; // @[bundled_block_division.scala 177:46]
  wire [21:0] _acc_2_T_8 = $signed(_acc_2_T_7) + $signed(_GEN_323); // @[bundled_block_division.scala 177:46]
  wire [21:0] _GEN_324 = {{9{two_complement_buffer_2_10[12]}},two_complement_buffer_2_10}; // @[bundled_block_division.scala 177:46]
  wire [22:0] _acc_2_T_9 = $signed(_acc_2_T_8) + $signed(_GEN_324); // @[bundled_block_division.scala 177:46]
  wire [22:0] _GEN_325 = {{10{two_complement_buffer_2_11[12]}},two_complement_buffer_2_11}; // @[bundled_block_division.scala 177:46]
  wire [23:0] _acc_2_T_10 = $signed(_acc_2_T_9) + $signed(_GEN_325); // @[bundled_block_division.scala 177:46]
  wire [23:0] _GEN_326 = {{11{two_complement_buffer_2_12[12]}},two_complement_buffer_2_12}; // @[bundled_block_division.scala 177:46]
  wire [24:0] _acc_2_T_11 = $signed(_acc_2_T_10) + $signed(_GEN_326); // @[bundled_block_division.scala 177:46]
  wire [24:0] _GEN_327 = {{12{two_complement_buffer_2_13[12]}},two_complement_buffer_2_13}; // @[bundled_block_division.scala 177:46]
  wire [25:0] _acc_2_T_12 = $signed(_acc_2_T_11) + $signed(_GEN_327); // @[bundled_block_division.scala 177:46]
  wire [25:0] _GEN_328 = {{13{two_complement_buffer_2_14[12]}},two_complement_buffer_2_14}; // @[bundled_block_division.scala 177:46]
  wire [26:0] _acc_2_T_13 = $signed(_acc_2_T_12) + $signed(_GEN_328); // @[bundled_block_division.scala 177:46]
  wire [26:0] _GEN_329 = {{14{two_complement_buffer_2_15[12]}},two_complement_buffer_2_15}; // @[bundled_block_division.scala 177:46]
  wire [27:0] _acc_2_T_14 = $signed(_acc_2_T_13) + $signed(_GEN_329); // @[bundled_block_division.scala 177:46]
  wire [8:0] _exp_output_3_T = io_in_a_exp_3 + io_in_b_exp_3; // @[bundled_block_division.scala 142:37]
  reg [11:0] dotProductRegs_3_0; // @[bundled_block_division.scala 143:29]
  reg [11:0] dotProductRegs_3_1; // @[bundled_block_division.scala 143:29]
  reg [11:0] dotProductRegs_3_2; // @[bundled_block_division.scala 143:29]
  reg [11:0] dotProductRegs_3_3; // @[bundled_block_division.scala 143:29]
  reg [11:0] dotProductRegs_3_4; // @[bundled_block_division.scala 143:29]
  reg [11:0] dotProductRegs_3_5; // @[bundled_block_division.scala 143:29]
  reg [11:0] dotProductRegs_3_6; // @[bundled_block_division.scala 143:29]
  reg [11:0] dotProductRegs_3_7; // @[bundled_block_division.scala 143:29]
  reg [11:0] dotProductRegs_3_8; // @[bundled_block_division.scala 143:29]
  reg [11:0] dotProductRegs_3_9; // @[bundled_block_division.scala 143:29]
  reg [11:0] dotProductRegs_3_10; // @[bundled_block_division.scala 143:29]
  reg [11:0] dotProductRegs_3_11; // @[bundled_block_division.scala 143:29]
  reg [11:0] dotProductRegs_3_12; // @[bundled_block_division.scala 143:29]
  reg [11:0] dotProductRegs_3_13; // @[bundled_block_division.scala 143:29]
  reg [11:0] dotProductRegs_3_14; // @[bundled_block_division.scala 143:29]
  reg [11:0] dotProductRegs_3_15; // @[bundled_block_division.scala 143:29]
  reg  signs_3_0; // @[bundled_block_division.scala 144:20]
  reg  signs_3_1; // @[bundled_block_division.scala 144:20]
  reg  signs_3_2; // @[bundled_block_division.scala 144:20]
  reg  signs_3_3; // @[bundled_block_division.scala 144:20]
  reg  signs_3_4; // @[bundled_block_division.scala 144:20]
  reg  signs_3_5; // @[bundled_block_division.scala 144:20]
  reg  signs_3_6; // @[bundled_block_division.scala 144:20]
  reg  signs_3_7; // @[bundled_block_division.scala 144:20]
  reg  signs_3_8; // @[bundled_block_division.scala 144:20]
  reg  signs_3_9; // @[bundled_block_division.scala 144:20]
  reg  signs_3_10; // @[bundled_block_division.scala 144:20]
  reg  signs_3_11; // @[bundled_block_division.scala 144:20]
  reg  signs_3_12; // @[bundled_block_division.scala 144:20]
  reg  signs_3_13; // @[bundled_block_division.scala 144:20]
  reg  signs_3_14; // @[bundled_block_division.scala 144:20]
  reg  signs_3_15; // @[bundled_block_division.scala 144:20]
  reg [12:0] two_complement_3_0; // @[bundled_block_division.scala 145:29]
  reg [12:0] two_complement_3_1; // @[bundled_block_division.scala 145:29]
  reg [12:0] two_complement_3_2; // @[bundled_block_division.scala 145:29]
  reg [12:0] two_complement_3_3; // @[bundled_block_division.scala 145:29]
  reg [12:0] two_complement_3_4; // @[bundled_block_division.scala 145:29]
  reg [12:0] two_complement_3_5; // @[bundled_block_division.scala 145:29]
  reg [12:0] two_complement_3_6; // @[bundled_block_division.scala 145:29]
  reg [12:0] two_complement_3_7; // @[bundled_block_division.scala 145:29]
  reg [12:0] two_complement_3_8; // @[bundled_block_division.scala 145:29]
  reg [12:0] two_complement_3_9; // @[bundled_block_division.scala 145:29]
  reg [12:0] two_complement_3_10; // @[bundled_block_division.scala 145:29]
  reg [12:0] two_complement_3_11; // @[bundled_block_division.scala 145:29]
  reg [12:0] two_complement_3_12; // @[bundled_block_division.scala 145:29]
  reg [12:0] two_complement_3_13; // @[bundled_block_division.scala 145:29]
  reg [12:0] two_complement_3_14; // @[bundled_block_division.scala 145:29]
  reg [12:0] two_complement_3_15; // @[bundled_block_division.scala 145:29]
  reg [12:0] two_complement_buffer_3_0; // @[bundled_block_division.scala 146:36]
  reg [12:0] two_complement_buffer_3_1; // @[bundled_block_division.scala 146:36]
  reg [12:0] two_complement_buffer_3_2; // @[bundled_block_division.scala 146:36]
  reg [12:0] two_complement_buffer_3_3; // @[bundled_block_division.scala 146:36]
  reg [12:0] two_complement_buffer_3_4; // @[bundled_block_division.scala 146:36]
  reg [12:0] two_complement_buffer_3_5; // @[bundled_block_division.scala 146:36]
  reg [12:0] two_complement_buffer_3_6; // @[bundled_block_division.scala 146:36]
  reg [12:0] two_complement_buffer_3_7; // @[bundled_block_division.scala 146:36]
  reg [12:0] two_complement_buffer_3_8; // @[bundled_block_division.scala 146:36]
  reg [12:0] two_complement_buffer_3_9; // @[bundled_block_division.scala 146:36]
  reg [12:0] two_complement_buffer_3_10; // @[bundled_block_division.scala 146:36]
  reg [12:0] two_complement_buffer_3_11; // @[bundled_block_division.scala 146:36]
  reg [12:0] two_complement_buffer_3_12; // @[bundled_block_division.scala 146:36]
  reg [12:0] two_complement_buffer_3_13; // @[bundled_block_division.scala 146:36]
  reg [12:0] two_complement_buffer_3_14; // @[bundled_block_division.scala 146:36]
  reg [12:0] two_complement_buffer_3_15; // @[bundled_block_division.scala 146:36]
  reg [5:0] multiplierReg_48; // @[bundled_block_division.scala 149:34]
  reg [5:0] multiplierReg2_48; // @[bundled_block_division.scala 150:35]
  reg  signReg_48; // @[bundled_block_division.scala 152:28]
  wire [7:0] _multiplication_T_1010 = multiplierReg_48[3:0] * multiplierReg2_48[3:0]; // @[bundled_block_division.scala 156:47]
  wire [3:0] _multiplication_T_1012 = {2'h0,multiplierReg_48[5:4]}; // @[bundled_block_division.scala 156:83]
  wire [7:0] _multiplication_T_1014 = _multiplication_T_1012 * multiplierReg2_48[3:0]; // @[bundled_block_division.scala 156:106]
  wire [11:0] _GEN_330 = {_multiplication_T_1014, 4'h0}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _multiplication_T_1015 = {{3'd0}, _GEN_330}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _GEN_331 = {{7'd0}, _multiplication_T_1010}; // @[bundled_block_division.scala 156:69]
  wire [15:0] _multiplication_T_1016 = _GEN_331 + _multiplication_T_1015; // @[bundled_block_division.scala 156:69]
  wire [3:0] _multiplication_T_1019 = {2'h0,multiplierReg2_48[5:4]}; // @[bundled_block_division.scala 156:172]
  wire [7:0] _multiplication_T_1020 = multiplierReg_48[3:0] * _multiplication_T_1019; // @[bundled_block_division.scala 156:161]
  wire [11:0] _GEN_332 = {_multiplication_T_1020, 4'h0}; // @[bundled_block_division.scala 156:197]
  wire [14:0] _multiplication_T_1021 = {{3'd0}, _GEN_332}; // @[bundled_block_division.scala 156:197]
  wire [15:0] _GEN_333 = {{1'd0}, _multiplication_T_1021}; // @[bundled_block_division.scala 156:137]
  wire [16:0] _multiplication_T_1022 = _multiplication_T_1016 + _GEN_333; // @[bundled_block_division.scala 156:137]
  wire [7:0] _multiplication_T_1027 = _multiplication_T_1012 * _multiplication_T_1019; // @[bundled_block_division.scala 156:240]
  wire [15:0] _GEN_334 = {_multiplication_T_1027, 8'h0}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _multiplication_T_1028 = {{7'd0}, _GEN_334}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _GEN_335 = {{6'd0}, _multiplication_T_1022}; // @[bundled_block_division.scala 156:205]
  wire [23:0] multiplication_48 = _GEN_335 + _multiplication_T_1028; // @[bundled_block_division.scala 156:205]
  wire [12:0] _two_complement_0_T_22 = {1'h0,dotProductRegs_3_0}; // @[bundled_block_division.scala 159:55]
  wire [12:0] _two_complement_0_T_23 = ~_two_complement_0_T_22; // @[bundled_block_division.scala 159:49]
  wire [12:0] _two_complement_0_T_25 = _two_complement_0_T_23 + 13'h1; // @[bundled_block_division.scala 159:77]
  reg [5:0] multiplierReg_49; // @[bundled_block_division.scala 149:34]
  reg [5:0] multiplierReg2_49; // @[bundled_block_division.scala 150:35]
  reg  signReg_49; // @[bundled_block_division.scala 152:28]
  wire [7:0] _multiplication_T_1031 = multiplierReg_49[3:0] * multiplierReg2_49[3:0]; // @[bundled_block_division.scala 156:47]
  wire [3:0] _multiplication_T_1033 = {2'h0,multiplierReg_49[5:4]}; // @[bundled_block_division.scala 156:83]
  wire [7:0] _multiplication_T_1035 = _multiplication_T_1033 * multiplierReg2_49[3:0]; // @[bundled_block_division.scala 156:106]
  wire [11:0] _GEN_336 = {_multiplication_T_1035, 4'h0}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _multiplication_T_1036 = {{3'd0}, _GEN_336}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _GEN_337 = {{7'd0}, _multiplication_T_1031}; // @[bundled_block_division.scala 156:69]
  wire [15:0] _multiplication_T_1037 = _GEN_337 + _multiplication_T_1036; // @[bundled_block_division.scala 156:69]
  wire [3:0] _multiplication_T_1040 = {2'h0,multiplierReg2_49[5:4]}; // @[bundled_block_division.scala 156:172]
  wire [7:0] _multiplication_T_1041 = multiplierReg_49[3:0] * _multiplication_T_1040; // @[bundled_block_division.scala 156:161]
  wire [11:0] _GEN_338 = {_multiplication_T_1041, 4'h0}; // @[bundled_block_division.scala 156:197]
  wire [14:0] _multiplication_T_1042 = {{3'd0}, _GEN_338}; // @[bundled_block_division.scala 156:197]
  wire [15:0] _GEN_339 = {{1'd0}, _multiplication_T_1042}; // @[bundled_block_division.scala 156:137]
  wire [16:0] _multiplication_T_1043 = _multiplication_T_1037 + _GEN_339; // @[bundled_block_division.scala 156:137]
  wire [7:0] _multiplication_T_1048 = _multiplication_T_1033 * _multiplication_T_1040; // @[bundled_block_division.scala 156:240]
  wire [15:0] _GEN_340 = {_multiplication_T_1048, 8'h0}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _multiplication_T_1049 = {{7'd0}, _GEN_340}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _GEN_341 = {{6'd0}, _multiplication_T_1043}; // @[bundled_block_division.scala 156:205]
  wire [23:0] multiplication_49 = _GEN_341 + _multiplication_T_1049; // @[bundled_block_division.scala 156:205]
  wire [12:0] _two_complement_1_T_22 = {1'h0,dotProductRegs_3_1}; // @[bundled_block_division.scala 159:55]
  wire [12:0] _two_complement_1_T_23 = ~_two_complement_1_T_22; // @[bundled_block_division.scala 159:49]
  wire [12:0] _two_complement_1_T_25 = _two_complement_1_T_23 + 13'h1; // @[bundled_block_division.scala 159:77]
  reg [5:0] multiplierReg_50; // @[bundled_block_division.scala 149:34]
  reg [5:0] multiplierReg2_50; // @[bundled_block_division.scala 150:35]
  reg  signReg_50; // @[bundled_block_division.scala 152:28]
  wire [7:0] _multiplication_T_1052 = multiplierReg_50[3:0] * multiplierReg2_50[3:0]; // @[bundled_block_division.scala 156:47]
  wire [3:0] _multiplication_T_1054 = {2'h0,multiplierReg_50[5:4]}; // @[bundled_block_division.scala 156:83]
  wire [7:0] _multiplication_T_1056 = _multiplication_T_1054 * multiplierReg2_50[3:0]; // @[bundled_block_division.scala 156:106]
  wire [11:0] _GEN_342 = {_multiplication_T_1056, 4'h0}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _multiplication_T_1057 = {{3'd0}, _GEN_342}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _GEN_343 = {{7'd0}, _multiplication_T_1052}; // @[bundled_block_division.scala 156:69]
  wire [15:0] _multiplication_T_1058 = _GEN_343 + _multiplication_T_1057; // @[bundled_block_division.scala 156:69]
  wire [3:0] _multiplication_T_1061 = {2'h0,multiplierReg2_50[5:4]}; // @[bundled_block_division.scala 156:172]
  wire [7:0] _multiplication_T_1062 = multiplierReg_50[3:0] * _multiplication_T_1061; // @[bundled_block_division.scala 156:161]
  wire [11:0] _GEN_344 = {_multiplication_T_1062, 4'h0}; // @[bundled_block_division.scala 156:197]
  wire [14:0] _multiplication_T_1063 = {{3'd0}, _GEN_344}; // @[bundled_block_division.scala 156:197]
  wire [15:0] _GEN_345 = {{1'd0}, _multiplication_T_1063}; // @[bundled_block_division.scala 156:137]
  wire [16:0] _multiplication_T_1064 = _multiplication_T_1058 + _GEN_345; // @[bundled_block_division.scala 156:137]
  wire [7:0] _multiplication_T_1069 = _multiplication_T_1054 * _multiplication_T_1061; // @[bundled_block_division.scala 156:240]
  wire [15:0] _GEN_346 = {_multiplication_T_1069, 8'h0}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _multiplication_T_1070 = {{7'd0}, _GEN_346}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _GEN_347 = {{6'd0}, _multiplication_T_1064}; // @[bundled_block_division.scala 156:205]
  wire [23:0] multiplication_50 = _GEN_347 + _multiplication_T_1070; // @[bundled_block_division.scala 156:205]
  wire [12:0] _two_complement_2_T_22 = {1'h0,dotProductRegs_3_2}; // @[bundled_block_division.scala 159:55]
  wire [12:0] _two_complement_2_T_23 = ~_two_complement_2_T_22; // @[bundled_block_division.scala 159:49]
  wire [12:0] _two_complement_2_T_25 = _two_complement_2_T_23 + 13'h1; // @[bundled_block_division.scala 159:77]
  reg [5:0] multiplierReg_51; // @[bundled_block_division.scala 149:34]
  reg [5:0] multiplierReg2_51; // @[bundled_block_division.scala 150:35]
  reg  signReg_51; // @[bundled_block_division.scala 152:28]
  wire [7:0] _multiplication_T_1073 = multiplierReg_51[3:0] * multiplierReg2_51[3:0]; // @[bundled_block_division.scala 156:47]
  wire [3:0] _multiplication_T_1075 = {2'h0,multiplierReg_51[5:4]}; // @[bundled_block_division.scala 156:83]
  wire [7:0] _multiplication_T_1077 = _multiplication_T_1075 * multiplierReg2_51[3:0]; // @[bundled_block_division.scala 156:106]
  wire [11:0] _GEN_348 = {_multiplication_T_1077, 4'h0}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _multiplication_T_1078 = {{3'd0}, _GEN_348}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _GEN_349 = {{7'd0}, _multiplication_T_1073}; // @[bundled_block_division.scala 156:69]
  wire [15:0] _multiplication_T_1079 = _GEN_349 + _multiplication_T_1078; // @[bundled_block_division.scala 156:69]
  wire [3:0] _multiplication_T_1082 = {2'h0,multiplierReg2_51[5:4]}; // @[bundled_block_division.scala 156:172]
  wire [7:0] _multiplication_T_1083 = multiplierReg_51[3:0] * _multiplication_T_1082; // @[bundled_block_division.scala 156:161]
  wire [11:0] _GEN_350 = {_multiplication_T_1083, 4'h0}; // @[bundled_block_division.scala 156:197]
  wire [14:0] _multiplication_T_1084 = {{3'd0}, _GEN_350}; // @[bundled_block_division.scala 156:197]
  wire [15:0] _GEN_351 = {{1'd0}, _multiplication_T_1084}; // @[bundled_block_division.scala 156:137]
  wire [16:0] _multiplication_T_1085 = _multiplication_T_1079 + _GEN_351; // @[bundled_block_division.scala 156:137]
  wire [7:0] _multiplication_T_1090 = _multiplication_T_1075 * _multiplication_T_1082; // @[bundled_block_division.scala 156:240]
  wire [15:0] _GEN_352 = {_multiplication_T_1090, 8'h0}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _multiplication_T_1091 = {{7'd0}, _GEN_352}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _GEN_353 = {{6'd0}, _multiplication_T_1085}; // @[bundled_block_division.scala 156:205]
  wire [23:0] multiplication_51 = _GEN_353 + _multiplication_T_1091; // @[bundled_block_division.scala 156:205]
  wire [12:0] _two_complement_3_T_22 = {1'h0,dotProductRegs_3_3}; // @[bundled_block_division.scala 159:55]
  wire [12:0] _two_complement_3_T_23 = ~_two_complement_3_T_22; // @[bundled_block_division.scala 159:49]
  wire [12:0] _two_complement_3_T_25 = _two_complement_3_T_23 + 13'h1; // @[bundled_block_division.scala 159:77]
  reg [5:0] multiplierReg_52; // @[bundled_block_division.scala 149:34]
  reg [5:0] multiplierReg2_52; // @[bundled_block_division.scala 150:35]
  reg  signReg_52; // @[bundled_block_division.scala 152:28]
  wire [7:0] _multiplication_T_1094 = multiplierReg_52[3:0] * multiplierReg2_52[3:0]; // @[bundled_block_division.scala 156:47]
  wire [3:0] _multiplication_T_1096 = {2'h0,multiplierReg_52[5:4]}; // @[bundled_block_division.scala 156:83]
  wire [7:0] _multiplication_T_1098 = _multiplication_T_1096 * multiplierReg2_52[3:0]; // @[bundled_block_division.scala 156:106]
  wire [11:0] _GEN_354 = {_multiplication_T_1098, 4'h0}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _multiplication_T_1099 = {{3'd0}, _GEN_354}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _GEN_355 = {{7'd0}, _multiplication_T_1094}; // @[bundled_block_division.scala 156:69]
  wire [15:0] _multiplication_T_1100 = _GEN_355 + _multiplication_T_1099; // @[bundled_block_division.scala 156:69]
  wire [3:0] _multiplication_T_1103 = {2'h0,multiplierReg2_52[5:4]}; // @[bundled_block_division.scala 156:172]
  wire [7:0] _multiplication_T_1104 = multiplierReg_52[3:0] * _multiplication_T_1103; // @[bundled_block_division.scala 156:161]
  wire [11:0] _GEN_356 = {_multiplication_T_1104, 4'h0}; // @[bundled_block_division.scala 156:197]
  wire [14:0] _multiplication_T_1105 = {{3'd0}, _GEN_356}; // @[bundled_block_division.scala 156:197]
  wire [15:0] _GEN_357 = {{1'd0}, _multiplication_T_1105}; // @[bundled_block_division.scala 156:137]
  wire [16:0] _multiplication_T_1106 = _multiplication_T_1100 + _GEN_357; // @[bundled_block_division.scala 156:137]
  wire [7:0] _multiplication_T_1111 = _multiplication_T_1096 * _multiplication_T_1103; // @[bundled_block_division.scala 156:240]
  wire [15:0] _GEN_358 = {_multiplication_T_1111, 8'h0}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _multiplication_T_1112 = {{7'd0}, _GEN_358}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _GEN_359 = {{6'd0}, _multiplication_T_1106}; // @[bundled_block_division.scala 156:205]
  wire [23:0] multiplication_52 = _GEN_359 + _multiplication_T_1112; // @[bundled_block_division.scala 156:205]
  wire [12:0] _two_complement_4_T_22 = {1'h0,dotProductRegs_3_4}; // @[bundled_block_division.scala 159:55]
  wire [12:0] _two_complement_4_T_23 = ~_two_complement_4_T_22; // @[bundled_block_division.scala 159:49]
  wire [12:0] _two_complement_4_T_25 = _two_complement_4_T_23 + 13'h1; // @[bundled_block_division.scala 159:77]
  reg [5:0] multiplierReg_53; // @[bundled_block_division.scala 149:34]
  reg [5:0] multiplierReg2_53; // @[bundled_block_division.scala 150:35]
  reg  signReg_53; // @[bundled_block_division.scala 152:28]
  wire [7:0] _multiplication_T_1115 = multiplierReg_53[3:0] * multiplierReg2_53[3:0]; // @[bundled_block_division.scala 156:47]
  wire [3:0] _multiplication_T_1117 = {2'h0,multiplierReg_53[5:4]}; // @[bundled_block_division.scala 156:83]
  wire [7:0] _multiplication_T_1119 = _multiplication_T_1117 * multiplierReg2_53[3:0]; // @[bundled_block_division.scala 156:106]
  wire [11:0] _GEN_360 = {_multiplication_T_1119, 4'h0}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _multiplication_T_1120 = {{3'd0}, _GEN_360}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _GEN_361 = {{7'd0}, _multiplication_T_1115}; // @[bundled_block_division.scala 156:69]
  wire [15:0] _multiplication_T_1121 = _GEN_361 + _multiplication_T_1120; // @[bundled_block_division.scala 156:69]
  wire [3:0] _multiplication_T_1124 = {2'h0,multiplierReg2_53[5:4]}; // @[bundled_block_division.scala 156:172]
  wire [7:0] _multiplication_T_1125 = multiplierReg_53[3:0] * _multiplication_T_1124; // @[bundled_block_division.scala 156:161]
  wire [11:0] _GEN_362 = {_multiplication_T_1125, 4'h0}; // @[bundled_block_division.scala 156:197]
  wire [14:0] _multiplication_T_1126 = {{3'd0}, _GEN_362}; // @[bundled_block_division.scala 156:197]
  wire [15:0] _GEN_363 = {{1'd0}, _multiplication_T_1126}; // @[bundled_block_division.scala 156:137]
  wire [16:0] _multiplication_T_1127 = _multiplication_T_1121 + _GEN_363; // @[bundled_block_division.scala 156:137]
  wire [7:0] _multiplication_T_1132 = _multiplication_T_1117 * _multiplication_T_1124; // @[bundled_block_division.scala 156:240]
  wire [15:0] _GEN_364 = {_multiplication_T_1132, 8'h0}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _multiplication_T_1133 = {{7'd0}, _GEN_364}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _GEN_365 = {{6'd0}, _multiplication_T_1127}; // @[bundled_block_division.scala 156:205]
  wire [23:0] multiplication_53 = _GEN_365 + _multiplication_T_1133; // @[bundled_block_division.scala 156:205]
  wire [12:0] _two_complement_5_T_22 = {1'h0,dotProductRegs_3_5}; // @[bundled_block_division.scala 159:55]
  wire [12:0] _two_complement_5_T_23 = ~_two_complement_5_T_22; // @[bundled_block_division.scala 159:49]
  wire [12:0] _two_complement_5_T_25 = _two_complement_5_T_23 + 13'h1; // @[bundled_block_division.scala 159:77]
  reg [5:0] multiplierReg_54; // @[bundled_block_division.scala 149:34]
  reg [5:0] multiplierReg2_54; // @[bundled_block_division.scala 150:35]
  reg  signReg_54; // @[bundled_block_division.scala 152:28]
  wire [7:0] _multiplication_T_1136 = multiplierReg_54[3:0] * multiplierReg2_54[3:0]; // @[bundled_block_division.scala 156:47]
  wire [3:0] _multiplication_T_1138 = {2'h0,multiplierReg_54[5:4]}; // @[bundled_block_division.scala 156:83]
  wire [7:0] _multiplication_T_1140 = _multiplication_T_1138 * multiplierReg2_54[3:0]; // @[bundled_block_division.scala 156:106]
  wire [11:0] _GEN_366 = {_multiplication_T_1140, 4'h0}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _multiplication_T_1141 = {{3'd0}, _GEN_366}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _GEN_367 = {{7'd0}, _multiplication_T_1136}; // @[bundled_block_division.scala 156:69]
  wire [15:0] _multiplication_T_1142 = _GEN_367 + _multiplication_T_1141; // @[bundled_block_division.scala 156:69]
  wire [3:0] _multiplication_T_1145 = {2'h0,multiplierReg2_54[5:4]}; // @[bundled_block_division.scala 156:172]
  wire [7:0] _multiplication_T_1146 = multiplierReg_54[3:0] * _multiplication_T_1145; // @[bundled_block_division.scala 156:161]
  wire [11:0] _GEN_368 = {_multiplication_T_1146, 4'h0}; // @[bundled_block_division.scala 156:197]
  wire [14:0] _multiplication_T_1147 = {{3'd0}, _GEN_368}; // @[bundled_block_division.scala 156:197]
  wire [15:0] _GEN_369 = {{1'd0}, _multiplication_T_1147}; // @[bundled_block_division.scala 156:137]
  wire [16:0] _multiplication_T_1148 = _multiplication_T_1142 + _GEN_369; // @[bundled_block_division.scala 156:137]
  wire [7:0] _multiplication_T_1153 = _multiplication_T_1138 * _multiplication_T_1145; // @[bundled_block_division.scala 156:240]
  wire [15:0] _GEN_370 = {_multiplication_T_1153, 8'h0}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _multiplication_T_1154 = {{7'd0}, _GEN_370}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _GEN_371 = {{6'd0}, _multiplication_T_1148}; // @[bundled_block_division.scala 156:205]
  wire [23:0] multiplication_54 = _GEN_371 + _multiplication_T_1154; // @[bundled_block_division.scala 156:205]
  wire [12:0] _two_complement_6_T_22 = {1'h0,dotProductRegs_3_6}; // @[bundled_block_division.scala 159:55]
  wire [12:0] _two_complement_6_T_23 = ~_two_complement_6_T_22; // @[bundled_block_division.scala 159:49]
  wire [12:0] _two_complement_6_T_25 = _two_complement_6_T_23 + 13'h1; // @[bundled_block_division.scala 159:77]
  reg [5:0] multiplierReg_55; // @[bundled_block_division.scala 149:34]
  reg [5:0] multiplierReg2_55; // @[bundled_block_division.scala 150:35]
  reg  signReg_55; // @[bundled_block_division.scala 152:28]
  wire [7:0] _multiplication_T_1157 = multiplierReg_55[3:0] * multiplierReg2_55[3:0]; // @[bundled_block_division.scala 156:47]
  wire [3:0] _multiplication_T_1159 = {2'h0,multiplierReg_55[5:4]}; // @[bundled_block_division.scala 156:83]
  wire [7:0] _multiplication_T_1161 = _multiplication_T_1159 * multiplierReg2_55[3:0]; // @[bundled_block_division.scala 156:106]
  wire [11:0] _GEN_372 = {_multiplication_T_1161, 4'h0}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _multiplication_T_1162 = {{3'd0}, _GEN_372}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _GEN_373 = {{7'd0}, _multiplication_T_1157}; // @[bundled_block_division.scala 156:69]
  wire [15:0] _multiplication_T_1163 = _GEN_373 + _multiplication_T_1162; // @[bundled_block_division.scala 156:69]
  wire [3:0] _multiplication_T_1166 = {2'h0,multiplierReg2_55[5:4]}; // @[bundled_block_division.scala 156:172]
  wire [7:0] _multiplication_T_1167 = multiplierReg_55[3:0] * _multiplication_T_1166; // @[bundled_block_division.scala 156:161]
  wire [11:0] _GEN_374 = {_multiplication_T_1167, 4'h0}; // @[bundled_block_division.scala 156:197]
  wire [14:0] _multiplication_T_1168 = {{3'd0}, _GEN_374}; // @[bundled_block_division.scala 156:197]
  wire [15:0] _GEN_375 = {{1'd0}, _multiplication_T_1168}; // @[bundled_block_division.scala 156:137]
  wire [16:0] _multiplication_T_1169 = _multiplication_T_1163 + _GEN_375; // @[bundled_block_division.scala 156:137]
  wire [7:0] _multiplication_T_1174 = _multiplication_T_1159 * _multiplication_T_1166; // @[bundled_block_division.scala 156:240]
  wire [15:0] _GEN_376 = {_multiplication_T_1174, 8'h0}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _multiplication_T_1175 = {{7'd0}, _GEN_376}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _GEN_377 = {{6'd0}, _multiplication_T_1169}; // @[bundled_block_division.scala 156:205]
  wire [23:0] multiplication_55 = _GEN_377 + _multiplication_T_1175; // @[bundled_block_division.scala 156:205]
  wire [12:0] _two_complement_7_T_22 = {1'h0,dotProductRegs_3_7}; // @[bundled_block_division.scala 159:55]
  wire [12:0] _two_complement_7_T_23 = ~_two_complement_7_T_22; // @[bundled_block_division.scala 159:49]
  wire [12:0] _two_complement_7_T_25 = _two_complement_7_T_23 + 13'h1; // @[bundled_block_division.scala 159:77]
  reg [5:0] multiplierReg_56; // @[bundled_block_division.scala 149:34]
  reg [5:0] multiplierReg2_56; // @[bundled_block_division.scala 150:35]
  reg  signReg_56; // @[bundled_block_division.scala 152:28]
  wire [7:0] _multiplication_T_1178 = multiplierReg_56[3:0] * multiplierReg2_56[3:0]; // @[bundled_block_division.scala 156:47]
  wire [3:0] _multiplication_T_1180 = {2'h0,multiplierReg_56[5:4]}; // @[bundled_block_division.scala 156:83]
  wire [7:0] _multiplication_T_1182 = _multiplication_T_1180 * multiplierReg2_56[3:0]; // @[bundled_block_division.scala 156:106]
  wire [11:0] _GEN_378 = {_multiplication_T_1182, 4'h0}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _multiplication_T_1183 = {{3'd0}, _GEN_378}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _GEN_379 = {{7'd0}, _multiplication_T_1178}; // @[bundled_block_division.scala 156:69]
  wire [15:0] _multiplication_T_1184 = _GEN_379 + _multiplication_T_1183; // @[bundled_block_division.scala 156:69]
  wire [3:0] _multiplication_T_1187 = {2'h0,multiplierReg2_56[5:4]}; // @[bundled_block_division.scala 156:172]
  wire [7:0] _multiplication_T_1188 = multiplierReg_56[3:0] * _multiplication_T_1187; // @[bundled_block_division.scala 156:161]
  wire [11:0] _GEN_380 = {_multiplication_T_1188, 4'h0}; // @[bundled_block_division.scala 156:197]
  wire [14:0] _multiplication_T_1189 = {{3'd0}, _GEN_380}; // @[bundled_block_division.scala 156:197]
  wire [15:0] _GEN_381 = {{1'd0}, _multiplication_T_1189}; // @[bundled_block_division.scala 156:137]
  wire [16:0] _multiplication_T_1190 = _multiplication_T_1184 + _GEN_381; // @[bundled_block_division.scala 156:137]
  wire [7:0] _multiplication_T_1195 = _multiplication_T_1180 * _multiplication_T_1187; // @[bundled_block_division.scala 156:240]
  wire [15:0] _GEN_382 = {_multiplication_T_1195, 8'h0}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _multiplication_T_1196 = {{7'd0}, _GEN_382}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _GEN_383 = {{6'd0}, _multiplication_T_1190}; // @[bundled_block_division.scala 156:205]
  wire [23:0] multiplication_56 = _GEN_383 + _multiplication_T_1196; // @[bundled_block_division.scala 156:205]
  wire [12:0] _two_complement_8_T_22 = {1'h0,dotProductRegs_3_8}; // @[bundled_block_division.scala 159:55]
  wire [12:0] _two_complement_8_T_23 = ~_two_complement_8_T_22; // @[bundled_block_division.scala 159:49]
  wire [12:0] _two_complement_8_T_25 = _two_complement_8_T_23 + 13'h1; // @[bundled_block_division.scala 159:77]
  reg [5:0] multiplierReg_57; // @[bundled_block_division.scala 149:34]
  reg [5:0] multiplierReg2_57; // @[bundled_block_division.scala 150:35]
  reg  signReg_57; // @[bundled_block_division.scala 152:28]
  wire [7:0] _multiplication_T_1199 = multiplierReg_57[3:0] * multiplierReg2_57[3:0]; // @[bundled_block_division.scala 156:47]
  wire [3:0] _multiplication_T_1201 = {2'h0,multiplierReg_57[5:4]}; // @[bundled_block_division.scala 156:83]
  wire [7:0] _multiplication_T_1203 = _multiplication_T_1201 * multiplierReg2_57[3:0]; // @[bundled_block_division.scala 156:106]
  wire [11:0] _GEN_384 = {_multiplication_T_1203, 4'h0}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _multiplication_T_1204 = {{3'd0}, _GEN_384}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _GEN_385 = {{7'd0}, _multiplication_T_1199}; // @[bundled_block_division.scala 156:69]
  wire [15:0] _multiplication_T_1205 = _GEN_385 + _multiplication_T_1204; // @[bundled_block_division.scala 156:69]
  wire [3:0] _multiplication_T_1208 = {2'h0,multiplierReg2_57[5:4]}; // @[bundled_block_division.scala 156:172]
  wire [7:0] _multiplication_T_1209 = multiplierReg_57[3:0] * _multiplication_T_1208; // @[bundled_block_division.scala 156:161]
  wire [11:0] _GEN_386 = {_multiplication_T_1209, 4'h0}; // @[bundled_block_division.scala 156:197]
  wire [14:0] _multiplication_T_1210 = {{3'd0}, _GEN_386}; // @[bundled_block_division.scala 156:197]
  wire [15:0] _GEN_387 = {{1'd0}, _multiplication_T_1210}; // @[bundled_block_division.scala 156:137]
  wire [16:0] _multiplication_T_1211 = _multiplication_T_1205 + _GEN_387; // @[bundled_block_division.scala 156:137]
  wire [7:0] _multiplication_T_1216 = _multiplication_T_1201 * _multiplication_T_1208; // @[bundled_block_division.scala 156:240]
  wire [15:0] _GEN_388 = {_multiplication_T_1216, 8'h0}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _multiplication_T_1217 = {{7'd0}, _GEN_388}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _GEN_389 = {{6'd0}, _multiplication_T_1211}; // @[bundled_block_division.scala 156:205]
  wire [23:0] multiplication_57 = _GEN_389 + _multiplication_T_1217; // @[bundled_block_division.scala 156:205]
  wire [12:0] _two_complement_9_T_22 = {1'h0,dotProductRegs_3_9}; // @[bundled_block_division.scala 159:55]
  wire [12:0] _two_complement_9_T_23 = ~_two_complement_9_T_22; // @[bundled_block_division.scala 159:49]
  wire [12:0] _two_complement_9_T_25 = _two_complement_9_T_23 + 13'h1; // @[bundled_block_division.scala 159:77]
  reg [5:0] multiplierReg_58; // @[bundled_block_division.scala 149:34]
  reg [5:0] multiplierReg2_58; // @[bundled_block_division.scala 150:35]
  reg  signReg_58; // @[bundled_block_division.scala 152:28]
  wire [7:0] _multiplication_T_1220 = multiplierReg_58[3:0] * multiplierReg2_58[3:0]; // @[bundled_block_division.scala 156:47]
  wire [3:0] _multiplication_T_1222 = {2'h0,multiplierReg_58[5:4]}; // @[bundled_block_division.scala 156:83]
  wire [7:0] _multiplication_T_1224 = _multiplication_T_1222 * multiplierReg2_58[3:0]; // @[bundled_block_division.scala 156:106]
  wire [11:0] _GEN_390 = {_multiplication_T_1224, 4'h0}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _multiplication_T_1225 = {{3'd0}, _GEN_390}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _GEN_391 = {{7'd0}, _multiplication_T_1220}; // @[bundled_block_division.scala 156:69]
  wire [15:0] _multiplication_T_1226 = _GEN_391 + _multiplication_T_1225; // @[bundled_block_division.scala 156:69]
  wire [3:0] _multiplication_T_1229 = {2'h0,multiplierReg2_58[5:4]}; // @[bundled_block_division.scala 156:172]
  wire [7:0] _multiplication_T_1230 = multiplierReg_58[3:0] * _multiplication_T_1229; // @[bundled_block_division.scala 156:161]
  wire [11:0] _GEN_392 = {_multiplication_T_1230, 4'h0}; // @[bundled_block_division.scala 156:197]
  wire [14:0] _multiplication_T_1231 = {{3'd0}, _GEN_392}; // @[bundled_block_division.scala 156:197]
  wire [15:0] _GEN_393 = {{1'd0}, _multiplication_T_1231}; // @[bundled_block_division.scala 156:137]
  wire [16:0] _multiplication_T_1232 = _multiplication_T_1226 + _GEN_393; // @[bundled_block_division.scala 156:137]
  wire [7:0] _multiplication_T_1237 = _multiplication_T_1222 * _multiplication_T_1229; // @[bundled_block_division.scala 156:240]
  wire [15:0] _GEN_394 = {_multiplication_T_1237, 8'h0}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _multiplication_T_1238 = {{7'd0}, _GEN_394}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _GEN_395 = {{6'd0}, _multiplication_T_1232}; // @[bundled_block_division.scala 156:205]
  wire [23:0] multiplication_58 = _GEN_395 + _multiplication_T_1238; // @[bundled_block_division.scala 156:205]
  wire [12:0] _two_complement_10_T_22 = {1'h0,dotProductRegs_3_10}; // @[bundled_block_division.scala 159:55]
  wire [12:0] _two_complement_10_T_23 = ~_two_complement_10_T_22; // @[bundled_block_division.scala 159:49]
  wire [12:0] _two_complement_10_T_25 = _two_complement_10_T_23 + 13'h1; // @[bundled_block_division.scala 159:77]
  reg [5:0] multiplierReg_59; // @[bundled_block_division.scala 149:34]
  reg [5:0] multiplierReg2_59; // @[bundled_block_division.scala 150:35]
  reg  signReg_59; // @[bundled_block_division.scala 152:28]
  wire [7:0] _multiplication_T_1241 = multiplierReg_59[3:0] * multiplierReg2_59[3:0]; // @[bundled_block_division.scala 156:47]
  wire [3:0] _multiplication_T_1243 = {2'h0,multiplierReg_59[5:4]}; // @[bundled_block_division.scala 156:83]
  wire [7:0] _multiplication_T_1245 = _multiplication_T_1243 * multiplierReg2_59[3:0]; // @[bundled_block_division.scala 156:106]
  wire [11:0] _GEN_396 = {_multiplication_T_1245, 4'h0}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _multiplication_T_1246 = {{3'd0}, _GEN_396}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _GEN_397 = {{7'd0}, _multiplication_T_1241}; // @[bundled_block_division.scala 156:69]
  wire [15:0] _multiplication_T_1247 = _GEN_397 + _multiplication_T_1246; // @[bundled_block_division.scala 156:69]
  wire [3:0] _multiplication_T_1250 = {2'h0,multiplierReg2_59[5:4]}; // @[bundled_block_division.scala 156:172]
  wire [7:0] _multiplication_T_1251 = multiplierReg_59[3:0] * _multiplication_T_1250; // @[bundled_block_division.scala 156:161]
  wire [11:0] _GEN_398 = {_multiplication_T_1251, 4'h0}; // @[bundled_block_division.scala 156:197]
  wire [14:0] _multiplication_T_1252 = {{3'd0}, _GEN_398}; // @[bundled_block_division.scala 156:197]
  wire [15:0] _GEN_399 = {{1'd0}, _multiplication_T_1252}; // @[bundled_block_division.scala 156:137]
  wire [16:0] _multiplication_T_1253 = _multiplication_T_1247 + _GEN_399; // @[bundled_block_division.scala 156:137]
  wire [7:0] _multiplication_T_1258 = _multiplication_T_1243 * _multiplication_T_1250; // @[bundled_block_division.scala 156:240]
  wire [15:0] _GEN_400 = {_multiplication_T_1258, 8'h0}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _multiplication_T_1259 = {{7'd0}, _GEN_400}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _GEN_401 = {{6'd0}, _multiplication_T_1253}; // @[bundled_block_division.scala 156:205]
  wire [23:0] multiplication_59 = _GEN_401 + _multiplication_T_1259; // @[bundled_block_division.scala 156:205]
  wire [12:0] _two_complement_11_T_22 = {1'h0,dotProductRegs_3_11}; // @[bundled_block_division.scala 159:55]
  wire [12:0] _two_complement_11_T_23 = ~_two_complement_11_T_22; // @[bundled_block_division.scala 159:49]
  wire [12:0] _two_complement_11_T_25 = _two_complement_11_T_23 + 13'h1; // @[bundled_block_division.scala 159:77]
  reg [5:0] multiplierReg_60; // @[bundled_block_division.scala 149:34]
  reg [5:0] multiplierReg2_60; // @[bundled_block_division.scala 150:35]
  reg  signReg_60; // @[bundled_block_division.scala 152:28]
  wire [7:0] _multiplication_T_1262 = multiplierReg_60[3:0] * multiplierReg2_60[3:0]; // @[bundled_block_division.scala 156:47]
  wire [3:0] _multiplication_T_1264 = {2'h0,multiplierReg_60[5:4]}; // @[bundled_block_division.scala 156:83]
  wire [7:0] _multiplication_T_1266 = _multiplication_T_1264 * multiplierReg2_60[3:0]; // @[bundled_block_division.scala 156:106]
  wire [11:0] _GEN_402 = {_multiplication_T_1266, 4'h0}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _multiplication_T_1267 = {{3'd0}, _GEN_402}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _GEN_403 = {{7'd0}, _multiplication_T_1262}; // @[bundled_block_division.scala 156:69]
  wire [15:0] _multiplication_T_1268 = _GEN_403 + _multiplication_T_1267; // @[bundled_block_division.scala 156:69]
  wire [3:0] _multiplication_T_1271 = {2'h0,multiplierReg2_60[5:4]}; // @[bundled_block_division.scala 156:172]
  wire [7:0] _multiplication_T_1272 = multiplierReg_60[3:0] * _multiplication_T_1271; // @[bundled_block_division.scala 156:161]
  wire [11:0] _GEN_404 = {_multiplication_T_1272, 4'h0}; // @[bundled_block_division.scala 156:197]
  wire [14:0] _multiplication_T_1273 = {{3'd0}, _GEN_404}; // @[bundled_block_division.scala 156:197]
  wire [15:0] _GEN_405 = {{1'd0}, _multiplication_T_1273}; // @[bundled_block_division.scala 156:137]
  wire [16:0] _multiplication_T_1274 = _multiplication_T_1268 + _GEN_405; // @[bundled_block_division.scala 156:137]
  wire [7:0] _multiplication_T_1279 = _multiplication_T_1264 * _multiplication_T_1271; // @[bundled_block_division.scala 156:240]
  wire [15:0] _GEN_406 = {_multiplication_T_1279, 8'h0}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _multiplication_T_1280 = {{7'd0}, _GEN_406}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _GEN_407 = {{6'd0}, _multiplication_T_1274}; // @[bundled_block_division.scala 156:205]
  wire [23:0] multiplication_60 = _GEN_407 + _multiplication_T_1280; // @[bundled_block_division.scala 156:205]
  wire [12:0] _two_complement_12_T_22 = {1'h0,dotProductRegs_3_12}; // @[bundled_block_division.scala 159:55]
  wire [12:0] _two_complement_12_T_23 = ~_two_complement_12_T_22; // @[bundled_block_division.scala 159:49]
  wire [12:0] _two_complement_12_T_25 = _two_complement_12_T_23 + 13'h1; // @[bundled_block_division.scala 159:77]
  reg [5:0] multiplierReg_61; // @[bundled_block_division.scala 149:34]
  reg [5:0] multiplierReg2_61; // @[bundled_block_division.scala 150:35]
  reg  signReg_61; // @[bundled_block_division.scala 152:28]
  wire [7:0] _multiplication_T_1283 = multiplierReg_61[3:0] * multiplierReg2_61[3:0]; // @[bundled_block_division.scala 156:47]
  wire [3:0] _multiplication_T_1285 = {2'h0,multiplierReg_61[5:4]}; // @[bundled_block_division.scala 156:83]
  wire [7:0] _multiplication_T_1287 = _multiplication_T_1285 * multiplierReg2_61[3:0]; // @[bundled_block_division.scala 156:106]
  wire [11:0] _GEN_408 = {_multiplication_T_1287, 4'h0}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _multiplication_T_1288 = {{3'd0}, _GEN_408}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _GEN_409 = {{7'd0}, _multiplication_T_1283}; // @[bundled_block_division.scala 156:69]
  wire [15:0] _multiplication_T_1289 = _GEN_409 + _multiplication_T_1288; // @[bundled_block_division.scala 156:69]
  wire [3:0] _multiplication_T_1292 = {2'h0,multiplierReg2_61[5:4]}; // @[bundled_block_division.scala 156:172]
  wire [7:0] _multiplication_T_1293 = multiplierReg_61[3:0] * _multiplication_T_1292; // @[bundled_block_division.scala 156:161]
  wire [11:0] _GEN_410 = {_multiplication_T_1293, 4'h0}; // @[bundled_block_division.scala 156:197]
  wire [14:0] _multiplication_T_1294 = {{3'd0}, _GEN_410}; // @[bundled_block_division.scala 156:197]
  wire [15:0] _GEN_411 = {{1'd0}, _multiplication_T_1294}; // @[bundled_block_division.scala 156:137]
  wire [16:0] _multiplication_T_1295 = _multiplication_T_1289 + _GEN_411; // @[bundled_block_division.scala 156:137]
  wire [7:0] _multiplication_T_1300 = _multiplication_T_1285 * _multiplication_T_1292; // @[bundled_block_division.scala 156:240]
  wire [15:0] _GEN_412 = {_multiplication_T_1300, 8'h0}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _multiplication_T_1301 = {{7'd0}, _GEN_412}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _GEN_413 = {{6'd0}, _multiplication_T_1295}; // @[bundled_block_division.scala 156:205]
  wire [23:0] multiplication_61 = _GEN_413 + _multiplication_T_1301; // @[bundled_block_division.scala 156:205]
  wire [12:0] _two_complement_13_T_22 = {1'h0,dotProductRegs_3_13}; // @[bundled_block_division.scala 159:55]
  wire [12:0] _two_complement_13_T_23 = ~_two_complement_13_T_22; // @[bundled_block_division.scala 159:49]
  wire [12:0] _two_complement_13_T_25 = _two_complement_13_T_23 + 13'h1; // @[bundled_block_division.scala 159:77]
  reg [5:0] multiplierReg_62; // @[bundled_block_division.scala 149:34]
  reg [5:0] multiplierReg2_62; // @[bundled_block_division.scala 150:35]
  reg  signReg_62; // @[bundled_block_division.scala 152:28]
  wire [7:0] _multiplication_T_1304 = multiplierReg_62[3:0] * multiplierReg2_62[3:0]; // @[bundled_block_division.scala 156:47]
  wire [3:0] _multiplication_T_1306 = {2'h0,multiplierReg_62[5:4]}; // @[bundled_block_division.scala 156:83]
  wire [7:0] _multiplication_T_1308 = _multiplication_T_1306 * multiplierReg2_62[3:0]; // @[bundled_block_division.scala 156:106]
  wire [11:0] _GEN_414 = {_multiplication_T_1308, 4'h0}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _multiplication_T_1309 = {{3'd0}, _GEN_414}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _GEN_415 = {{7'd0}, _multiplication_T_1304}; // @[bundled_block_division.scala 156:69]
  wire [15:0] _multiplication_T_1310 = _GEN_415 + _multiplication_T_1309; // @[bundled_block_division.scala 156:69]
  wire [3:0] _multiplication_T_1313 = {2'h0,multiplierReg2_62[5:4]}; // @[bundled_block_division.scala 156:172]
  wire [7:0] _multiplication_T_1314 = multiplierReg_62[3:0] * _multiplication_T_1313; // @[bundled_block_division.scala 156:161]
  wire [11:0] _GEN_416 = {_multiplication_T_1314, 4'h0}; // @[bundled_block_division.scala 156:197]
  wire [14:0] _multiplication_T_1315 = {{3'd0}, _GEN_416}; // @[bundled_block_division.scala 156:197]
  wire [15:0] _GEN_417 = {{1'd0}, _multiplication_T_1315}; // @[bundled_block_division.scala 156:137]
  wire [16:0] _multiplication_T_1316 = _multiplication_T_1310 + _GEN_417; // @[bundled_block_division.scala 156:137]
  wire [7:0] _multiplication_T_1321 = _multiplication_T_1306 * _multiplication_T_1313; // @[bundled_block_division.scala 156:240]
  wire [15:0] _GEN_418 = {_multiplication_T_1321, 8'h0}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _multiplication_T_1322 = {{7'd0}, _GEN_418}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _GEN_419 = {{6'd0}, _multiplication_T_1316}; // @[bundled_block_division.scala 156:205]
  wire [23:0] multiplication_62 = _GEN_419 + _multiplication_T_1322; // @[bundled_block_division.scala 156:205]
  wire [12:0] _two_complement_14_T_22 = {1'h0,dotProductRegs_3_14}; // @[bundled_block_division.scala 159:55]
  wire [12:0] _two_complement_14_T_23 = ~_two_complement_14_T_22; // @[bundled_block_division.scala 159:49]
  wire [12:0] _two_complement_14_T_25 = _two_complement_14_T_23 + 13'h1; // @[bundled_block_division.scala 159:77]
  reg [5:0] multiplierReg_63; // @[bundled_block_division.scala 149:34]
  reg [5:0] multiplierReg2_63; // @[bundled_block_division.scala 150:35]
  reg  signReg_63; // @[bundled_block_division.scala 152:28]
  wire [7:0] _multiplication_T_1325 = multiplierReg_63[3:0] * multiplierReg2_63[3:0]; // @[bundled_block_division.scala 156:47]
  wire [3:0] _multiplication_T_1327 = {2'h0,multiplierReg_63[5:4]}; // @[bundled_block_division.scala 156:83]
  wire [7:0] _multiplication_T_1329 = _multiplication_T_1327 * multiplierReg2_63[3:0]; // @[bundled_block_division.scala 156:106]
  wire [11:0] _GEN_420 = {_multiplication_T_1329, 4'h0}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _multiplication_T_1330 = {{3'd0}, _GEN_420}; // @[bundled_block_division.scala 156:129]
  wire [14:0] _GEN_421 = {{7'd0}, _multiplication_T_1325}; // @[bundled_block_division.scala 156:69]
  wire [15:0] _multiplication_T_1331 = _GEN_421 + _multiplication_T_1330; // @[bundled_block_division.scala 156:69]
  wire [3:0] _multiplication_T_1334 = {2'h0,multiplierReg2_63[5:4]}; // @[bundled_block_division.scala 156:172]
  wire [7:0] _multiplication_T_1335 = multiplierReg_63[3:0] * _multiplication_T_1334; // @[bundled_block_division.scala 156:161]
  wire [11:0] _GEN_422 = {_multiplication_T_1335, 4'h0}; // @[bundled_block_division.scala 156:197]
  wire [14:0] _multiplication_T_1336 = {{3'd0}, _GEN_422}; // @[bundled_block_division.scala 156:197]
  wire [15:0] _GEN_423 = {{1'd0}, _multiplication_T_1336}; // @[bundled_block_division.scala 156:137]
  wire [16:0] _multiplication_T_1337 = _multiplication_T_1331 + _GEN_423; // @[bundled_block_division.scala 156:137]
  wire [7:0] _multiplication_T_1342 = _multiplication_T_1327 * _multiplication_T_1334; // @[bundled_block_division.scala 156:240]
  wire [15:0] _GEN_424 = {_multiplication_T_1342, 8'h0}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _multiplication_T_1343 = {{7'd0}, _GEN_424}; // @[bundled_block_division.scala 156:274]
  wire [22:0] _GEN_425 = {{6'd0}, _multiplication_T_1337}; // @[bundled_block_division.scala 156:205]
  wire [23:0] multiplication_63 = _GEN_425 + _multiplication_T_1343; // @[bundled_block_division.scala 156:205]
  wire [12:0] _two_complement_15_T_22 = {1'h0,dotProductRegs_3_15}; // @[bundled_block_division.scala 159:55]
  wire [12:0] _two_complement_15_T_23 = ~_two_complement_15_T_22; // @[bundled_block_division.scala 159:49]
  wire [12:0] _two_complement_15_T_25 = _two_complement_15_T_23 + 13'h1; // @[bundled_block_division.scala 159:77]
  wire [13:0] _acc_3_T = $signed(two_complement_buffer_3_0) + $signed(two_complement_buffer_3_1); // @[bundled_block_division.scala 177:46]
  wire [13:0] _GEN_426 = {{1{two_complement_buffer_3_2[12]}},two_complement_buffer_3_2}; // @[bundled_block_division.scala 177:46]
  wire [14:0] _acc_3_T_1 = $signed(_acc_3_T) + $signed(_GEN_426); // @[bundled_block_division.scala 177:46]
  wire [14:0] _GEN_427 = {{2{two_complement_buffer_3_3[12]}},two_complement_buffer_3_3}; // @[bundled_block_division.scala 177:46]
  wire [15:0] _acc_3_T_2 = $signed(_acc_3_T_1) + $signed(_GEN_427); // @[bundled_block_division.scala 177:46]
  wire [15:0] _GEN_428 = {{3{two_complement_buffer_3_4[12]}},two_complement_buffer_3_4}; // @[bundled_block_division.scala 177:46]
  wire [16:0] _acc_3_T_3 = $signed(_acc_3_T_2) + $signed(_GEN_428); // @[bundled_block_division.scala 177:46]
  wire [16:0] _GEN_429 = {{4{two_complement_buffer_3_5[12]}},two_complement_buffer_3_5}; // @[bundled_block_division.scala 177:46]
  wire [17:0] _acc_3_T_4 = $signed(_acc_3_T_3) + $signed(_GEN_429); // @[bundled_block_division.scala 177:46]
  wire [17:0] _GEN_430 = {{5{two_complement_buffer_3_6[12]}},two_complement_buffer_3_6}; // @[bundled_block_division.scala 177:46]
  wire [18:0] _acc_3_T_5 = $signed(_acc_3_T_4) + $signed(_GEN_430); // @[bundled_block_division.scala 177:46]
  wire [18:0] _GEN_431 = {{6{two_complement_buffer_3_7[12]}},two_complement_buffer_3_7}; // @[bundled_block_division.scala 177:46]
  wire [19:0] _acc_3_T_6 = $signed(_acc_3_T_5) + $signed(_GEN_431); // @[bundled_block_division.scala 177:46]
  wire [19:0] _GEN_432 = {{7{two_complement_buffer_3_8[12]}},two_complement_buffer_3_8}; // @[bundled_block_division.scala 177:46]
  wire [20:0] _acc_3_T_7 = $signed(_acc_3_T_6) + $signed(_GEN_432); // @[bundled_block_division.scala 177:46]
  wire [20:0] _GEN_433 = {{8{two_complement_buffer_3_9[12]}},two_complement_buffer_3_9}; // @[bundled_block_division.scala 177:46]
  wire [21:0] _acc_3_T_8 = $signed(_acc_3_T_7) + $signed(_GEN_433); // @[bundled_block_division.scala 177:46]
  wire [21:0] _GEN_434 = {{9{two_complement_buffer_3_10[12]}},two_complement_buffer_3_10}; // @[bundled_block_division.scala 177:46]
  wire [22:0] _acc_3_T_9 = $signed(_acc_3_T_8) + $signed(_GEN_434); // @[bundled_block_division.scala 177:46]
  wire [22:0] _GEN_435 = {{10{two_complement_buffer_3_11[12]}},two_complement_buffer_3_11}; // @[bundled_block_division.scala 177:46]
  wire [23:0] _acc_3_T_10 = $signed(_acc_3_T_9) + $signed(_GEN_435); // @[bundled_block_division.scala 177:46]
  wire [23:0] _GEN_436 = {{11{two_complement_buffer_3_12[12]}},two_complement_buffer_3_12}; // @[bundled_block_division.scala 177:46]
  wire [24:0] _acc_3_T_11 = $signed(_acc_3_T_10) + $signed(_GEN_436); // @[bundled_block_division.scala 177:46]
  wire [24:0] _GEN_437 = {{12{two_complement_buffer_3_13[12]}},two_complement_buffer_3_13}; // @[bundled_block_division.scala 177:46]
  wire [25:0] _acc_3_T_12 = $signed(_acc_3_T_11) + $signed(_GEN_437); // @[bundled_block_division.scala 177:46]
  wire [25:0] _GEN_438 = {{13{two_complement_buffer_3_14[12]}},two_complement_buffer_3_14}; // @[bundled_block_division.scala 177:46]
  wire [26:0] _acc_3_T_13 = $signed(_acc_3_T_12) + $signed(_GEN_438); // @[bundled_block_division.scala 177:46]
  wire [26:0] _GEN_439 = {{14{two_complement_buffer_3_15[12]}},two_complement_buffer_3_15}; // @[bundled_block_division.scala 177:46]
  wire [27:0] _acc_3_T_14 = $signed(_acc_3_T_13) + $signed(_GEN_439); // @[bundled_block_division.scala 177:46]
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
      acc_0 <= 28'sh0; // @[bundled_block_division.scala 139:53]
    end else begin
      acc_0 <= _acc_0_T_14; // @[bundled_block_division.scala 177:12]
    end
    if (reset) begin // @[bundled_block_division.scala 139:53]
      acc_1 <= 28'sh0; // @[bundled_block_division.scala 139:53]
    end else begin
      acc_1 <= _acc_1_T_14; // @[bundled_block_division.scala 177:12]
    end
    if (reset) begin // @[bundled_block_division.scala 139:53]
      acc_2 <= 28'sh0; // @[bundled_block_division.scala 139:53]
    end else begin
      acc_2 <= _acc_2_T_14; // @[bundled_block_division.scala 177:12]
    end
    if (reset) begin // @[bundled_block_division.scala 139:53]
      acc_3 <= 28'sh0; // @[bundled_block_division.scala 139:53]
    end else begin
      acc_3 <= _acc_3_T_14; // @[bundled_block_division.scala 177:12]
    end
    dotProductRegs__0 <= multiplication[11:0]; // @[bundled_block_division.scala 157:42]
    dotProductRegs__1 <= multiplication_1[11:0]; // @[bundled_block_division.scala 157:42]
    dotProductRegs__2 <= multiplication_2[11:0]; // @[bundled_block_division.scala 157:42]
    dotProductRegs__3 <= multiplication_3[11:0]; // @[bundled_block_division.scala 157:42]
    dotProductRegs__4 <= multiplication_4[11:0]; // @[bundled_block_division.scala 157:42]
    dotProductRegs__5 <= multiplication_5[11:0]; // @[bundled_block_division.scala 157:42]
    dotProductRegs__6 <= multiplication_6[11:0]; // @[bundled_block_division.scala 157:42]
    dotProductRegs__7 <= multiplication_7[11:0]; // @[bundled_block_division.scala 157:42]
    dotProductRegs__8 <= multiplication_8[11:0]; // @[bundled_block_division.scala 157:42]
    dotProductRegs__9 <= multiplication_9[11:0]; // @[bundled_block_division.scala 157:42]
    dotProductRegs__10 <= multiplication_10[11:0]; // @[bundled_block_division.scala 157:42]
    dotProductRegs__11 <= multiplication_11[11:0]; // @[bundled_block_division.scala 157:42]
    dotProductRegs__12 <= multiplication_12[11:0]; // @[bundled_block_division.scala 157:42]
    dotProductRegs__13 <= multiplication_13[11:0]; // @[bundled_block_division.scala 157:42]
    dotProductRegs__14 <= multiplication_14[11:0]; // @[bundled_block_division.scala 157:42]
    dotProductRegs__15 <= multiplication_15[11:0]; // @[bundled_block_division.scala 157:42]
    signs__0 <= signReg ^ io_in_b_sign_0; // @[bundled_block_division.scala 158:27]
    signs__1 <= signReg_1 ^ io_in_b_sign_1; // @[bundled_block_division.scala 158:27]
    signs__2 <= signReg_2 ^ io_in_b_sign_2; // @[bundled_block_division.scala 158:27]
    signs__3 <= signReg_3 ^ io_in_b_sign_3; // @[bundled_block_division.scala 158:27]
    signs__4 <= signReg_4 ^ io_in_b_sign_4; // @[bundled_block_division.scala 158:27]
    signs__5 <= signReg_5 ^ io_in_b_sign_5; // @[bundled_block_division.scala 158:27]
    signs__6 <= signReg_6 ^ io_in_b_sign_6; // @[bundled_block_division.scala 158:27]
    signs__7 <= signReg_7 ^ io_in_b_sign_7; // @[bundled_block_division.scala 158:27]
    signs__8 <= signReg_8 ^ io_in_b_sign_8; // @[bundled_block_division.scala 158:27]
    signs__9 <= signReg_9 ^ io_in_b_sign_9; // @[bundled_block_division.scala 158:27]
    signs__10 <= signReg_10 ^ io_in_b_sign_10; // @[bundled_block_division.scala 158:27]
    signs__11 <= signReg_11 ^ io_in_b_sign_11; // @[bundled_block_division.scala 158:27]
    signs__12 <= signReg_12 ^ io_in_b_sign_12; // @[bundled_block_division.scala 158:27]
    signs__13 <= signReg_13 ^ io_in_b_sign_13; // @[bundled_block_division.scala 158:27]
    signs__14 <= signReg_14 ^ io_in_b_sign_14; // @[bundled_block_division.scala 158:27]
    signs__15 <= signReg_15 ^ io_in_b_sign_15; // @[bundled_block_division.scala 158:27]
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
    if (signs__4) begin // @[bundled_block_division.scala 159:31]
      two_complement__4 <= _two_complement_4_T_4;
    end else begin
      two_complement__4 <= _two_complement_4_T_1;
    end
    if (signs__5) begin // @[bundled_block_division.scala 159:31]
      two_complement__5 <= _two_complement_5_T_4;
    end else begin
      two_complement__5 <= _two_complement_5_T_1;
    end
    if (signs__6) begin // @[bundled_block_division.scala 159:31]
      two_complement__6 <= _two_complement_6_T_4;
    end else begin
      two_complement__6 <= _two_complement_6_T_1;
    end
    if (signs__7) begin // @[bundled_block_division.scala 159:31]
      two_complement__7 <= _two_complement_7_T_4;
    end else begin
      two_complement__7 <= _two_complement_7_T_1;
    end
    if (signs__8) begin // @[bundled_block_division.scala 159:31]
      two_complement__8 <= _two_complement_8_T_4;
    end else begin
      two_complement__8 <= _two_complement_8_T_1;
    end
    if (signs__9) begin // @[bundled_block_division.scala 159:31]
      two_complement__9 <= _two_complement_9_T_4;
    end else begin
      two_complement__9 <= _two_complement_9_T_1;
    end
    if (signs__10) begin // @[bundled_block_division.scala 159:31]
      two_complement__10 <= _two_complement_10_T_4;
    end else begin
      two_complement__10 <= _two_complement_10_T_1;
    end
    if (signs__11) begin // @[bundled_block_division.scala 159:31]
      two_complement__11 <= _two_complement_11_T_4;
    end else begin
      two_complement__11 <= _two_complement_11_T_1;
    end
    if (signs__12) begin // @[bundled_block_division.scala 159:31]
      two_complement__12 <= _two_complement_12_T_4;
    end else begin
      two_complement__12 <= _two_complement_12_T_1;
    end
    if (signs__13) begin // @[bundled_block_division.scala 159:31]
      two_complement__13 <= _two_complement_13_T_4;
    end else begin
      two_complement__13 <= _two_complement_13_T_1;
    end
    if (signs__14) begin // @[bundled_block_division.scala 159:31]
      two_complement__14 <= _two_complement_14_T_4;
    end else begin
      two_complement__14 <= _two_complement_14_T_1;
    end
    if (signs__15) begin // @[bundled_block_division.scala 159:31]
      two_complement__15 <= _two_complement_15_T_4;
    end else begin
      two_complement__15 <= _two_complement_15_T_1;
    end
    two_complement_buffer__0 <= two_complement__0; // @[bundled_block_division.scala 160:53]
    two_complement_buffer__1 <= two_complement__1; // @[bundled_block_division.scala 160:53]
    two_complement_buffer__2 <= two_complement__2; // @[bundled_block_division.scala 160:53]
    two_complement_buffer__3 <= two_complement__3; // @[bundled_block_division.scala 160:53]
    two_complement_buffer__4 <= two_complement__4; // @[bundled_block_division.scala 160:53]
    two_complement_buffer__5 <= two_complement__5; // @[bundled_block_division.scala 160:53]
    two_complement_buffer__6 <= two_complement__6; // @[bundled_block_division.scala 160:53]
    two_complement_buffer__7 <= two_complement__7; // @[bundled_block_division.scala 160:53]
    two_complement_buffer__8 <= two_complement__8; // @[bundled_block_division.scala 160:53]
    two_complement_buffer__9 <= two_complement__9; // @[bundled_block_division.scala 160:53]
    two_complement_buffer__10 <= two_complement__10; // @[bundled_block_division.scala 160:53]
    two_complement_buffer__11 <= two_complement__11; // @[bundled_block_division.scala 160:53]
    two_complement_buffer__12 <= two_complement__12; // @[bundled_block_division.scala 160:53]
    two_complement_buffer__13 <= two_complement__13; // @[bundled_block_division.scala 160:53]
    two_complement_buffer__14 <= two_complement__14; // @[bundled_block_division.scala 160:53]
    two_complement_buffer__15 <= two_complement__15; // @[bundled_block_division.scala 160:53]
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
    dotProductRegs_1_0 <= multiplication_16[11:0]; // @[bundled_block_division.scala 157:42]
    dotProductRegs_1_1 <= multiplication_17[11:0]; // @[bundled_block_division.scala 157:42]
    dotProductRegs_1_2 <= multiplication_18[11:0]; // @[bundled_block_division.scala 157:42]
    dotProductRegs_1_3 <= multiplication_19[11:0]; // @[bundled_block_division.scala 157:42]
    dotProductRegs_1_4 <= multiplication_20[11:0]; // @[bundled_block_division.scala 157:42]
    dotProductRegs_1_5 <= multiplication_21[11:0]; // @[bundled_block_division.scala 157:42]
    dotProductRegs_1_6 <= multiplication_22[11:0]; // @[bundled_block_division.scala 157:42]
    dotProductRegs_1_7 <= multiplication_23[11:0]; // @[bundled_block_division.scala 157:42]
    dotProductRegs_1_8 <= multiplication_24[11:0]; // @[bundled_block_division.scala 157:42]
    dotProductRegs_1_9 <= multiplication_25[11:0]; // @[bundled_block_division.scala 157:42]
    dotProductRegs_1_10 <= multiplication_26[11:0]; // @[bundled_block_division.scala 157:42]
    dotProductRegs_1_11 <= multiplication_27[11:0]; // @[bundled_block_division.scala 157:42]
    dotProductRegs_1_12 <= multiplication_28[11:0]; // @[bundled_block_division.scala 157:42]
    dotProductRegs_1_13 <= multiplication_29[11:0]; // @[bundled_block_division.scala 157:42]
    dotProductRegs_1_14 <= multiplication_30[11:0]; // @[bundled_block_division.scala 157:42]
    dotProductRegs_1_15 <= multiplication_31[11:0]; // @[bundled_block_division.scala 157:42]
    signs_1_0 <= signReg_16 ^ io_in_b_sign_16; // @[bundled_block_division.scala 158:27]
    signs_1_1 <= signReg_17 ^ io_in_b_sign_17; // @[bundled_block_division.scala 158:27]
    signs_1_2 <= signReg_18 ^ io_in_b_sign_18; // @[bundled_block_division.scala 158:27]
    signs_1_3 <= signReg_19 ^ io_in_b_sign_19; // @[bundled_block_division.scala 158:27]
    signs_1_4 <= signReg_20 ^ io_in_b_sign_20; // @[bundled_block_division.scala 158:27]
    signs_1_5 <= signReg_21 ^ io_in_b_sign_21; // @[bundled_block_division.scala 158:27]
    signs_1_6 <= signReg_22 ^ io_in_b_sign_22; // @[bundled_block_division.scala 158:27]
    signs_1_7 <= signReg_23 ^ io_in_b_sign_23; // @[bundled_block_division.scala 158:27]
    signs_1_8 <= signReg_24 ^ io_in_b_sign_24; // @[bundled_block_division.scala 158:27]
    signs_1_9 <= signReg_25 ^ io_in_b_sign_25; // @[bundled_block_division.scala 158:27]
    signs_1_10 <= signReg_26 ^ io_in_b_sign_26; // @[bundled_block_division.scala 158:27]
    signs_1_11 <= signReg_27 ^ io_in_b_sign_27; // @[bundled_block_division.scala 158:27]
    signs_1_12 <= signReg_28 ^ io_in_b_sign_28; // @[bundled_block_division.scala 158:27]
    signs_1_13 <= signReg_29 ^ io_in_b_sign_29; // @[bundled_block_division.scala 158:27]
    signs_1_14 <= signReg_30 ^ io_in_b_sign_30; // @[bundled_block_division.scala 158:27]
    signs_1_15 <= signReg_31 ^ io_in_b_sign_31; // @[bundled_block_division.scala 158:27]
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
    if (signs_1_4) begin // @[bundled_block_division.scala 159:31]
      two_complement_1_4 <= _two_complement_4_T_11;
    end else begin
      two_complement_1_4 <= _two_complement_4_T_8;
    end
    if (signs_1_5) begin // @[bundled_block_division.scala 159:31]
      two_complement_1_5 <= _two_complement_5_T_11;
    end else begin
      two_complement_1_5 <= _two_complement_5_T_8;
    end
    if (signs_1_6) begin // @[bundled_block_division.scala 159:31]
      two_complement_1_6 <= _two_complement_6_T_11;
    end else begin
      two_complement_1_6 <= _two_complement_6_T_8;
    end
    if (signs_1_7) begin // @[bundled_block_division.scala 159:31]
      two_complement_1_7 <= _two_complement_7_T_11;
    end else begin
      two_complement_1_7 <= _two_complement_7_T_8;
    end
    if (signs_1_8) begin // @[bundled_block_division.scala 159:31]
      two_complement_1_8 <= _two_complement_8_T_11;
    end else begin
      two_complement_1_8 <= _two_complement_8_T_8;
    end
    if (signs_1_9) begin // @[bundled_block_division.scala 159:31]
      two_complement_1_9 <= _two_complement_9_T_11;
    end else begin
      two_complement_1_9 <= _two_complement_9_T_8;
    end
    if (signs_1_10) begin // @[bundled_block_division.scala 159:31]
      two_complement_1_10 <= _two_complement_10_T_11;
    end else begin
      two_complement_1_10 <= _two_complement_10_T_8;
    end
    if (signs_1_11) begin // @[bundled_block_division.scala 159:31]
      two_complement_1_11 <= _two_complement_11_T_11;
    end else begin
      two_complement_1_11 <= _two_complement_11_T_8;
    end
    if (signs_1_12) begin // @[bundled_block_division.scala 159:31]
      two_complement_1_12 <= _two_complement_12_T_11;
    end else begin
      two_complement_1_12 <= _two_complement_12_T_8;
    end
    if (signs_1_13) begin // @[bundled_block_division.scala 159:31]
      two_complement_1_13 <= _two_complement_13_T_11;
    end else begin
      two_complement_1_13 <= _two_complement_13_T_8;
    end
    if (signs_1_14) begin // @[bundled_block_division.scala 159:31]
      two_complement_1_14 <= _two_complement_14_T_11;
    end else begin
      two_complement_1_14 <= _two_complement_14_T_8;
    end
    if (signs_1_15) begin // @[bundled_block_division.scala 159:31]
      two_complement_1_15 <= _two_complement_15_T_11;
    end else begin
      two_complement_1_15 <= _two_complement_15_T_8;
    end
    two_complement_buffer_1_0 <= two_complement_1_0; // @[bundled_block_division.scala 160:53]
    two_complement_buffer_1_1 <= two_complement_1_1; // @[bundled_block_division.scala 160:53]
    two_complement_buffer_1_2 <= two_complement_1_2; // @[bundled_block_division.scala 160:53]
    two_complement_buffer_1_3 <= two_complement_1_3; // @[bundled_block_division.scala 160:53]
    two_complement_buffer_1_4 <= two_complement_1_4; // @[bundled_block_division.scala 160:53]
    two_complement_buffer_1_5 <= two_complement_1_5; // @[bundled_block_division.scala 160:53]
    two_complement_buffer_1_6 <= two_complement_1_6; // @[bundled_block_division.scala 160:53]
    two_complement_buffer_1_7 <= two_complement_1_7; // @[bundled_block_division.scala 160:53]
    two_complement_buffer_1_8 <= two_complement_1_8; // @[bundled_block_division.scala 160:53]
    two_complement_buffer_1_9 <= two_complement_1_9; // @[bundled_block_division.scala 160:53]
    two_complement_buffer_1_10 <= two_complement_1_10; // @[bundled_block_division.scala 160:53]
    two_complement_buffer_1_11 <= two_complement_1_11; // @[bundled_block_division.scala 160:53]
    two_complement_buffer_1_12 <= two_complement_1_12; // @[bundled_block_division.scala 160:53]
    two_complement_buffer_1_13 <= two_complement_1_13; // @[bundled_block_division.scala 160:53]
    two_complement_buffer_1_14 <= two_complement_1_14; // @[bundled_block_division.scala 160:53]
    two_complement_buffer_1_15 <= two_complement_1_15; // @[bundled_block_division.scala 160:53]
    if (reset) begin // @[bundled_block_division.scala 149:34]
      multiplierReg_16 <= 6'h0; // @[bundled_block_division.scala 149:34]
    end else begin
      multiplierReg_16 <= io_in_a_man_16; // @[bundled_block_division.scala 154:21]
    end
    if (reset) begin // @[bundled_block_division.scala 150:35]
      multiplierReg2_16 <= 6'h0; // @[bundled_block_division.scala 150:35]
    end else begin
      multiplierReg2_16 <= io_in_b_man_16; // @[bundled_block_division.scala 155:22]
    end
    if (reset) begin // @[bundled_block_division.scala 152:28]
      signReg_16 <= 1'h0; // @[bundled_block_division.scala 152:28]
    end else begin
      signReg_16 <= io_in_a_sign_16; // @[bundled_block_division.scala 153:15]
    end
    if (reset) begin // @[bundled_block_division.scala 149:34]
      multiplierReg_17 <= 6'h0; // @[bundled_block_division.scala 149:34]
    end else begin
      multiplierReg_17 <= io_in_a_man_17; // @[bundled_block_division.scala 154:21]
    end
    if (reset) begin // @[bundled_block_division.scala 150:35]
      multiplierReg2_17 <= 6'h0; // @[bundled_block_division.scala 150:35]
    end else begin
      multiplierReg2_17 <= io_in_b_man_17; // @[bundled_block_division.scala 155:22]
    end
    if (reset) begin // @[bundled_block_division.scala 152:28]
      signReg_17 <= 1'h0; // @[bundled_block_division.scala 152:28]
    end else begin
      signReg_17 <= io_in_a_sign_17; // @[bundled_block_division.scala 153:15]
    end
    if (reset) begin // @[bundled_block_division.scala 149:34]
      multiplierReg_18 <= 6'h0; // @[bundled_block_division.scala 149:34]
    end else begin
      multiplierReg_18 <= io_in_a_man_18; // @[bundled_block_division.scala 154:21]
    end
    if (reset) begin // @[bundled_block_division.scala 150:35]
      multiplierReg2_18 <= 6'h0; // @[bundled_block_division.scala 150:35]
    end else begin
      multiplierReg2_18 <= io_in_b_man_18; // @[bundled_block_division.scala 155:22]
    end
    if (reset) begin // @[bundled_block_division.scala 152:28]
      signReg_18 <= 1'h0; // @[bundled_block_division.scala 152:28]
    end else begin
      signReg_18 <= io_in_a_sign_18; // @[bundled_block_division.scala 153:15]
    end
    if (reset) begin // @[bundled_block_division.scala 149:34]
      multiplierReg_19 <= 6'h0; // @[bundled_block_division.scala 149:34]
    end else begin
      multiplierReg_19 <= io_in_a_man_19; // @[bundled_block_division.scala 154:21]
    end
    if (reset) begin // @[bundled_block_division.scala 150:35]
      multiplierReg2_19 <= 6'h0; // @[bundled_block_division.scala 150:35]
    end else begin
      multiplierReg2_19 <= io_in_b_man_19; // @[bundled_block_division.scala 155:22]
    end
    if (reset) begin // @[bundled_block_division.scala 152:28]
      signReg_19 <= 1'h0; // @[bundled_block_division.scala 152:28]
    end else begin
      signReg_19 <= io_in_a_sign_19; // @[bundled_block_division.scala 153:15]
    end
    if (reset) begin // @[bundled_block_division.scala 149:34]
      multiplierReg_20 <= 6'h0; // @[bundled_block_division.scala 149:34]
    end else begin
      multiplierReg_20 <= io_in_a_man_20; // @[bundled_block_division.scala 154:21]
    end
    if (reset) begin // @[bundled_block_division.scala 150:35]
      multiplierReg2_20 <= 6'h0; // @[bundled_block_division.scala 150:35]
    end else begin
      multiplierReg2_20 <= io_in_b_man_20; // @[bundled_block_division.scala 155:22]
    end
    if (reset) begin // @[bundled_block_division.scala 152:28]
      signReg_20 <= 1'h0; // @[bundled_block_division.scala 152:28]
    end else begin
      signReg_20 <= io_in_a_sign_20; // @[bundled_block_division.scala 153:15]
    end
    if (reset) begin // @[bundled_block_division.scala 149:34]
      multiplierReg_21 <= 6'h0; // @[bundled_block_division.scala 149:34]
    end else begin
      multiplierReg_21 <= io_in_a_man_21; // @[bundled_block_division.scala 154:21]
    end
    if (reset) begin // @[bundled_block_division.scala 150:35]
      multiplierReg2_21 <= 6'h0; // @[bundled_block_division.scala 150:35]
    end else begin
      multiplierReg2_21 <= io_in_b_man_21; // @[bundled_block_division.scala 155:22]
    end
    if (reset) begin // @[bundled_block_division.scala 152:28]
      signReg_21 <= 1'h0; // @[bundled_block_division.scala 152:28]
    end else begin
      signReg_21 <= io_in_a_sign_21; // @[bundled_block_division.scala 153:15]
    end
    if (reset) begin // @[bundled_block_division.scala 149:34]
      multiplierReg_22 <= 6'h0; // @[bundled_block_division.scala 149:34]
    end else begin
      multiplierReg_22 <= io_in_a_man_22; // @[bundled_block_division.scala 154:21]
    end
    if (reset) begin // @[bundled_block_division.scala 150:35]
      multiplierReg2_22 <= 6'h0; // @[bundled_block_division.scala 150:35]
    end else begin
      multiplierReg2_22 <= io_in_b_man_22; // @[bundled_block_division.scala 155:22]
    end
    if (reset) begin // @[bundled_block_division.scala 152:28]
      signReg_22 <= 1'h0; // @[bundled_block_division.scala 152:28]
    end else begin
      signReg_22 <= io_in_a_sign_22; // @[bundled_block_division.scala 153:15]
    end
    if (reset) begin // @[bundled_block_division.scala 149:34]
      multiplierReg_23 <= 6'h0; // @[bundled_block_division.scala 149:34]
    end else begin
      multiplierReg_23 <= io_in_a_man_23; // @[bundled_block_division.scala 154:21]
    end
    if (reset) begin // @[bundled_block_division.scala 150:35]
      multiplierReg2_23 <= 6'h0; // @[bundled_block_division.scala 150:35]
    end else begin
      multiplierReg2_23 <= io_in_b_man_23; // @[bundled_block_division.scala 155:22]
    end
    if (reset) begin // @[bundled_block_division.scala 152:28]
      signReg_23 <= 1'h0; // @[bundled_block_division.scala 152:28]
    end else begin
      signReg_23 <= io_in_a_sign_23; // @[bundled_block_division.scala 153:15]
    end
    if (reset) begin // @[bundled_block_division.scala 149:34]
      multiplierReg_24 <= 6'h0; // @[bundled_block_division.scala 149:34]
    end else begin
      multiplierReg_24 <= io_in_a_man_24; // @[bundled_block_division.scala 154:21]
    end
    if (reset) begin // @[bundled_block_division.scala 150:35]
      multiplierReg2_24 <= 6'h0; // @[bundled_block_division.scala 150:35]
    end else begin
      multiplierReg2_24 <= io_in_b_man_24; // @[bundled_block_division.scala 155:22]
    end
    if (reset) begin // @[bundled_block_division.scala 152:28]
      signReg_24 <= 1'h0; // @[bundled_block_division.scala 152:28]
    end else begin
      signReg_24 <= io_in_a_sign_24; // @[bundled_block_division.scala 153:15]
    end
    if (reset) begin // @[bundled_block_division.scala 149:34]
      multiplierReg_25 <= 6'h0; // @[bundled_block_division.scala 149:34]
    end else begin
      multiplierReg_25 <= io_in_a_man_25; // @[bundled_block_division.scala 154:21]
    end
    if (reset) begin // @[bundled_block_division.scala 150:35]
      multiplierReg2_25 <= 6'h0; // @[bundled_block_division.scala 150:35]
    end else begin
      multiplierReg2_25 <= io_in_b_man_25; // @[bundled_block_division.scala 155:22]
    end
    if (reset) begin // @[bundled_block_division.scala 152:28]
      signReg_25 <= 1'h0; // @[bundled_block_division.scala 152:28]
    end else begin
      signReg_25 <= io_in_a_sign_25; // @[bundled_block_division.scala 153:15]
    end
    if (reset) begin // @[bundled_block_division.scala 149:34]
      multiplierReg_26 <= 6'h0; // @[bundled_block_division.scala 149:34]
    end else begin
      multiplierReg_26 <= io_in_a_man_26; // @[bundled_block_division.scala 154:21]
    end
    if (reset) begin // @[bundled_block_division.scala 150:35]
      multiplierReg2_26 <= 6'h0; // @[bundled_block_division.scala 150:35]
    end else begin
      multiplierReg2_26 <= io_in_b_man_26; // @[bundled_block_division.scala 155:22]
    end
    if (reset) begin // @[bundled_block_division.scala 152:28]
      signReg_26 <= 1'h0; // @[bundled_block_division.scala 152:28]
    end else begin
      signReg_26 <= io_in_a_sign_26; // @[bundled_block_division.scala 153:15]
    end
    if (reset) begin // @[bundled_block_division.scala 149:34]
      multiplierReg_27 <= 6'h0; // @[bundled_block_division.scala 149:34]
    end else begin
      multiplierReg_27 <= io_in_a_man_27; // @[bundled_block_division.scala 154:21]
    end
    if (reset) begin // @[bundled_block_division.scala 150:35]
      multiplierReg2_27 <= 6'h0; // @[bundled_block_division.scala 150:35]
    end else begin
      multiplierReg2_27 <= io_in_b_man_27; // @[bundled_block_division.scala 155:22]
    end
    if (reset) begin // @[bundled_block_division.scala 152:28]
      signReg_27 <= 1'h0; // @[bundled_block_division.scala 152:28]
    end else begin
      signReg_27 <= io_in_a_sign_27; // @[bundled_block_division.scala 153:15]
    end
    if (reset) begin // @[bundled_block_division.scala 149:34]
      multiplierReg_28 <= 6'h0; // @[bundled_block_division.scala 149:34]
    end else begin
      multiplierReg_28 <= io_in_a_man_28; // @[bundled_block_division.scala 154:21]
    end
    if (reset) begin // @[bundled_block_division.scala 150:35]
      multiplierReg2_28 <= 6'h0; // @[bundled_block_division.scala 150:35]
    end else begin
      multiplierReg2_28 <= io_in_b_man_28; // @[bundled_block_division.scala 155:22]
    end
    if (reset) begin // @[bundled_block_division.scala 152:28]
      signReg_28 <= 1'h0; // @[bundled_block_division.scala 152:28]
    end else begin
      signReg_28 <= io_in_a_sign_28; // @[bundled_block_division.scala 153:15]
    end
    if (reset) begin // @[bundled_block_division.scala 149:34]
      multiplierReg_29 <= 6'h0; // @[bundled_block_division.scala 149:34]
    end else begin
      multiplierReg_29 <= io_in_a_man_29; // @[bundled_block_division.scala 154:21]
    end
    if (reset) begin // @[bundled_block_division.scala 150:35]
      multiplierReg2_29 <= 6'h0; // @[bundled_block_division.scala 150:35]
    end else begin
      multiplierReg2_29 <= io_in_b_man_29; // @[bundled_block_division.scala 155:22]
    end
    if (reset) begin // @[bundled_block_division.scala 152:28]
      signReg_29 <= 1'h0; // @[bundled_block_division.scala 152:28]
    end else begin
      signReg_29 <= io_in_a_sign_29; // @[bundled_block_division.scala 153:15]
    end
    if (reset) begin // @[bundled_block_division.scala 149:34]
      multiplierReg_30 <= 6'h0; // @[bundled_block_division.scala 149:34]
    end else begin
      multiplierReg_30 <= io_in_a_man_30; // @[bundled_block_division.scala 154:21]
    end
    if (reset) begin // @[bundled_block_division.scala 150:35]
      multiplierReg2_30 <= 6'h0; // @[bundled_block_division.scala 150:35]
    end else begin
      multiplierReg2_30 <= io_in_b_man_30; // @[bundled_block_division.scala 155:22]
    end
    if (reset) begin // @[bundled_block_division.scala 152:28]
      signReg_30 <= 1'h0; // @[bundled_block_division.scala 152:28]
    end else begin
      signReg_30 <= io_in_a_sign_30; // @[bundled_block_division.scala 153:15]
    end
    if (reset) begin // @[bundled_block_division.scala 149:34]
      multiplierReg_31 <= 6'h0; // @[bundled_block_division.scala 149:34]
    end else begin
      multiplierReg_31 <= io_in_a_man_31; // @[bundled_block_division.scala 154:21]
    end
    if (reset) begin // @[bundled_block_division.scala 150:35]
      multiplierReg2_31 <= 6'h0; // @[bundled_block_division.scala 150:35]
    end else begin
      multiplierReg2_31 <= io_in_b_man_31; // @[bundled_block_division.scala 155:22]
    end
    if (reset) begin // @[bundled_block_division.scala 152:28]
      signReg_31 <= 1'h0; // @[bundled_block_division.scala 152:28]
    end else begin
      signReg_31 <= io_in_a_sign_31; // @[bundled_block_division.scala 153:15]
    end
    dotProductRegs_2_0 <= multiplication_32[11:0]; // @[bundled_block_division.scala 157:42]
    dotProductRegs_2_1 <= multiplication_33[11:0]; // @[bundled_block_division.scala 157:42]
    dotProductRegs_2_2 <= multiplication_34[11:0]; // @[bundled_block_division.scala 157:42]
    dotProductRegs_2_3 <= multiplication_35[11:0]; // @[bundled_block_division.scala 157:42]
    dotProductRegs_2_4 <= multiplication_36[11:0]; // @[bundled_block_division.scala 157:42]
    dotProductRegs_2_5 <= multiplication_37[11:0]; // @[bundled_block_division.scala 157:42]
    dotProductRegs_2_6 <= multiplication_38[11:0]; // @[bundled_block_division.scala 157:42]
    dotProductRegs_2_7 <= multiplication_39[11:0]; // @[bundled_block_division.scala 157:42]
    dotProductRegs_2_8 <= multiplication_40[11:0]; // @[bundled_block_division.scala 157:42]
    dotProductRegs_2_9 <= multiplication_41[11:0]; // @[bundled_block_division.scala 157:42]
    dotProductRegs_2_10 <= multiplication_42[11:0]; // @[bundled_block_division.scala 157:42]
    dotProductRegs_2_11 <= multiplication_43[11:0]; // @[bundled_block_division.scala 157:42]
    dotProductRegs_2_12 <= multiplication_44[11:0]; // @[bundled_block_division.scala 157:42]
    dotProductRegs_2_13 <= multiplication_45[11:0]; // @[bundled_block_division.scala 157:42]
    dotProductRegs_2_14 <= multiplication_46[11:0]; // @[bundled_block_division.scala 157:42]
    dotProductRegs_2_15 <= multiplication_47[11:0]; // @[bundled_block_division.scala 157:42]
    signs_2_0 <= signReg_32 ^ io_in_b_sign_32; // @[bundled_block_division.scala 158:27]
    signs_2_1 <= signReg_33 ^ io_in_b_sign_33; // @[bundled_block_division.scala 158:27]
    signs_2_2 <= signReg_34 ^ io_in_b_sign_34; // @[bundled_block_division.scala 158:27]
    signs_2_3 <= signReg_35 ^ io_in_b_sign_35; // @[bundled_block_division.scala 158:27]
    signs_2_4 <= signReg_36 ^ io_in_b_sign_36; // @[bundled_block_division.scala 158:27]
    signs_2_5 <= signReg_37 ^ io_in_b_sign_37; // @[bundled_block_division.scala 158:27]
    signs_2_6 <= signReg_38 ^ io_in_b_sign_38; // @[bundled_block_division.scala 158:27]
    signs_2_7 <= signReg_39 ^ io_in_b_sign_39; // @[bundled_block_division.scala 158:27]
    signs_2_8 <= signReg_40 ^ io_in_b_sign_40; // @[bundled_block_division.scala 158:27]
    signs_2_9 <= signReg_41 ^ io_in_b_sign_41; // @[bundled_block_division.scala 158:27]
    signs_2_10 <= signReg_42 ^ io_in_b_sign_42; // @[bundled_block_division.scala 158:27]
    signs_2_11 <= signReg_43 ^ io_in_b_sign_43; // @[bundled_block_division.scala 158:27]
    signs_2_12 <= signReg_44 ^ io_in_b_sign_44; // @[bundled_block_division.scala 158:27]
    signs_2_13 <= signReg_45 ^ io_in_b_sign_45; // @[bundled_block_division.scala 158:27]
    signs_2_14 <= signReg_46 ^ io_in_b_sign_46; // @[bundled_block_division.scala 158:27]
    signs_2_15 <= signReg_47 ^ io_in_b_sign_47; // @[bundled_block_division.scala 158:27]
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
    if (signs_2_4) begin // @[bundled_block_division.scala 159:31]
      two_complement_2_4 <= _two_complement_4_T_18;
    end else begin
      two_complement_2_4 <= _two_complement_4_T_15;
    end
    if (signs_2_5) begin // @[bundled_block_division.scala 159:31]
      two_complement_2_5 <= _two_complement_5_T_18;
    end else begin
      two_complement_2_5 <= _two_complement_5_T_15;
    end
    if (signs_2_6) begin // @[bundled_block_division.scala 159:31]
      two_complement_2_6 <= _two_complement_6_T_18;
    end else begin
      two_complement_2_6 <= _two_complement_6_T_15;
    end
    if (signs_2_7) begin // @[bundled_block_division.scala 159:31]
      two_complement_2_7 <= _two_complement_7_T_18;
    end else begin
      two_complement_2_7 <= _two_complement_7_T_15;
    end
    if (signs_2_8) begin // @[bundled_block_division.scala 159:31]
      two_complement_2_8 <= _two_complement_8_T_18;
    end else begin
      two_complement_2_8 <= _two_complement_8_T_15;
    end
    if (signs_2_9) begin // @[bundled_block_division.scala 159:31]
      two_complement_2_9 <= _two_complement_9_T_18;
    end else begin
      two_complement_2_9 <= _two_complement_9_T_15;
    end
    if (signs_2_10) begin // @[bundled_block_division.scala 159:31]
      two_complement_2_10 <= _two_complement_10_T_18;
    end else begin
      two_complement_2_10 <= _two_complement_10_T_15;
    end
    if (signs_2_11) begin // @[bundled_block_division.scala 159:31]
      two_complement_2_11 <= _two_complement_11_T_18;
    end else begin
      two_complement_2_11 <= _two_complement_11_T_15;
    end
    if (signs_2_12) begin // @[bundled_block_division.scala 159:31]
      two_complement_2_12 <= _two_complement_12_T_18;
    end else begin
      two_complement_2_12 <= _two_complement_12_T_15;
    end
    if (signs_2_13) begin // @[bundled_block_division.scala 159:31]
      two_complement_2_13 <= _two_complement_13_T_18;
    end else begin
      two_complement_2_13 <= _two_complement_13_T_15;
    end
    if (signs_2_14) begin // @[bundled_block_division.scala 159:31]
      two_complement_2_14 <= _two_complement_14_T_18;
    end else begin
      two_complement_2_14 <= _two_complement_14_T_15;
    end
    if (signs_2_15) begin // @[bundled_block_division.scala 159:31]
      two_complement_2_15 <= _two_complement_15_T_18;
    end else begin
      two_complement_2_15 <= _two_complement_15_T_15;
    end
    two_complement_buffer_2_0 <= two_complement_2_0; // @[bundled_block_division.scala 160:53]
    two_complement_buffer_2_1 <= two_complement_2_1; // @[bundled_block_division.scala 160:53]
    two_complement_buffer_2_2 <= two_complement_2_2; // @[bundled_block_division.scala 160:53]
    two_complement_buffer_2_3 <= two_complement_2_3; // @[bundled_block_division.scala 160:53]
    two_complement_buffer_2_4 <= two_complement_2_4; // @[bundled_block_division.scala 160:53]
    two_complement_buffer_2_5 <= two_complement_2_5; // @[bundled_block_division.scala 160:53]
    two_complement_buffer_2_6 <= two_complement_2_6; // @[bundled_block_division.scala 160:53]
    two_complement_buffer_2_7 <= two_complement_2_7; // @[bundled_block_division.scala 160:53]
    two_complement_buffer_2_8 <= two_complement_2_8; // @[bundled_block_division.scala 160:53]
    two_complement_buffer_2_9 <= two_complement_2_9; // @[bundled_block_division.scala 160:53]
    two_complement_buffer_2_10 <= two_complement_2_10; // @[bundled_block_division.scala 160:53]
    two_complement_buffer_2_11 <= two_complement_2_11; // @[bundled_block_division.scala 160:53]
    two_complement_buffer_2_12 <= two_complement_2_12; // @[bundled_block_division.scala 160:53]
    two_complement_buffer_2_13 <= two_complement_2_13; // @[bundled_block_division.scala 160:53]
    two_complement_buffer_2_14 <= two_complement_2_14; // @[bundled_block_division.scala 160:53]
    two_complement_buffer_2_15 <= two_complement_2_15; // @[bundled_block_division.scala 160:53]
    if (reset) begin // @[bundled_block_division.scala 149:34]
      multiplierReg_32 <= 6'h0; // @[bundled_block_division.scala 149:34]
    end else begin
      multiplierReg_32 <= io_in_a_man_32; // @[bundled_block_division.scala 154:21]
    end
    if (reset) begin // @[bundled_block_division.scala 150:35]
      multiplierReg2_32 <= 6'h0; // @[bundled_block_division.scala 150:35]
    end else begin
      multiplierReg2_32 <= io_in_b_man_32; // @[bundled_block_division.scala 155:22]
    end
    if (reset) begin // @[bundled_block_division.scala 152:28]
      signReg_32 <= 1'h0; // @[bundled_block_division.scala 152:28]
    end else begin
      signReg_32 <= io_in_a_sign_32; // @[bundled_block_division.scala 153:15]
    end
    if (reset) begin // @[bundled_block_division.scala 149:34]
      multiplierReg_33 <= 6'h0; // @[bundled_block_division.scala 149:34]
    end else begin
      multiplierReg_33 <= io_in_a_man_33; // @[bundled_block_division.scala 154:21]
    end
    if (reset) begin // @[bundled_block_division.scala 150:35]
      multiplierReg2_33 <= 6'h0; // @[bundled_block_division.scala 150:35]
    end else begin
      multiplierReg2_33 <= io_in_b_man_33; // @[bundled_block_division.scala 155:22]
    end
    if (reset) begin // @[bundled_block_division.scala 152:28]
      signReg_33 <= 1'h0; // @[bundled_block_division.scala 152:28]
    end else begin
      signReg_33 <= io_in_a_sign_33; // @[bundled_block_division.scala 153:15]
    end
    if (reset) begin // @[bundled_block_division.scala 149:34]
      multiplierReg_34 <= 6'h0; // @[bundled_block_division.scala 149:34]
    end else begin
      multiplierReg_34 <= io_in_a_man_34; // @[bundled_block_division.scala 154:21]
    end
    if (reset) begin // @[bundled_block_division.scala 150:35]
      multiplierReg2_34 <= 6'h0; // @[bundled_block_division.scala 150:35]
    end else begin
      multiplierReg2_34 <= io_in_b_man_34; // @[bundled_block_division.scala 155:22]
    end
    if (reset) begin // @[bundled_block_division.scala 152:28]
      signReg_34 <= 1'h0; // @[bundled_block_division.scala 152:28]
    end else begin
      signReg_34 <= io_in_a_sign_34; // @[bundled_block_division.scala 153:15]
    end
    if (reset) begin // @[bundled_block_division.scala 149:34]
      multiplierReg_35 <= 6'h0; // @[bundled_block_division.scala 149:34]
    end else begin
      multiplierReg_35 <= io_in_a_man_35; // @[bundled_block_division.scala 154:21]
    end
    if (reset) begin // @[bundled_block_division.scala 150:35]
      multiplierReg2_35 <= 6'h0; // @[bundled_block_division.scala 150:35]
    end else begin
      multiplierReg2_35 <= io_in_b_man_35; // @[bundled_block_division.scala 155:22]
    end
    if (reset) begin // @[bundled_block_division.scala 152:28]
      signReg_35 <= 1'h0; // @[bundled_block_division.scala 152:28]
    end else begin
      signReg_35 <= io_in_a_sign_35; // @[bundled_block_division.scala 153:15]
    end
    if (reset) begin // @[bundled_block_division.scala 149:34]
      multiplierReg_36 <= 6'h0; // @[bundled_block_division.scala 149:34]
    end else begin
      multiplierReg_36 <= io_in_a_man_36; // @[bundled_block_division.scala 154:21]
    end
    if (reset) begin // @[bundled_block_division.scala 150:35]
      multiplierReg2_36 <= 6'h0; // @[bundled_block_division.scala 150:35]
    end else begin
      multiplierReg2_36 <= io_in_b_man_36; // @[bundled_block_division.scala 155:22]
    end
    if (reset) begin // @[bundled_block_division.scala 152:28]
      signReg_36 <= 1'h0; // @[bundled_block_division.scala 152:28]
    end else begin
      signReg_36 <= io_in_a_sign_36; // @[bundled_block_division.scala 153:15]
    end
    if (reset) begin // @[bundled_block_division.scala 149:34]
      multiplierReg_37 <= 6'h0; // @[bundled_block_division.scala 149:34]
    end else begin
      multiplierReg_37 <= io_in_a_man_37; // @[bundled_block_division.scala 154:21]
    end
    if (reset) begin // @[bundled_block_division.scala 150:35]
      multiplierReg2_37 <= 6'h0; // @[bundled_block_division.scala 150:35]
    end else begin
      multiplierReg2_37 <= io_in_b_man_37; // @[bundled_block_division.scala 155:22]
    end
    if (reset) begin // @[bundled_block_division.scala 152:28]
      signReg_37 <= 1'h0; // @[bundled_block_division.scala 152:28]
    end else begin
      signReg_37 <= io_in_a_sign_37; // @[bundled_block_division.scala 153:15]
    end
    if (reset) begin // @[bundled_block_division.scala 149:34]
      multiplierReg_38 <= 6'h0; // @[bundled_block_division.scala 149:34]
    end else begin
      multiplierReg_38 <= io_in_a_man_38; // @[bundled_block_division.scala 154:21]
    end
    if (reset) begin // @[bundled_block_division.scala 150:35]
      multiplierReg2_38 <= 6'h0; // @[bundled_block_division.scala 150:35]
    end else begin
      multiplierReg2_38 <= io_in_b_man_38; // @[bundled_block_division.scala 155:22]
    end
    if (reset) begin // @[bundled_block_division.scala 152:28]
      signReg_38 <= 1'h0; // @[bundled_block_division.scala 152:28]
    end else begin
      signReg_38 <= io_in_a_sign_38; // @[bundled_block_division.scala 153:15]
    end
    if (reset) begin // @[bundled_block_division.scala 149:34]
      multiplierReg_39 <= 6'h0; // @[bundled_block_division.scala 149:34]
    end else begin
      multiplierReg_39 <= io_in_a_man_39; // @[bundled_block_division.scala 154:21]
    end
    if (reset) begin // @[bundled_block_division.scala 150:35]
      multiplierReg2_39 <= 6'h0; // @[bundled_block_division.scala 150:35]
    end else begin
      multiplierReg2_39 <= io_in_b_man_39; // @[bundled_block_division.scala 155:22]
    end
    if (reset) begin // @[bundled_block_division.scala 152:28]
      signReg_39 <= 1'h0; // @[bundled_block_division.scala 152:28]
    end else begin
      signReg_39 <= io_in_a_sign_39; // @[bundled_block_division.scala 153:15]
    end
    if (reset) begin // @[bundled_block_division.scala 149:34]
      multiplierReg_40 <= 6'h0; // @[bundled_block_division.scala 149:34]
    end else begin
      multiplierReg_40 <= io_in_a_man_40; // @[bundled_block_division.scala 154:21]
    end
    if (reset) begin // @[bundled_block_division.scala 150:35]
      multiplierReg2_40 <= 6'h0; // @[bundled_block_division.scala 150:35]
    end else begin
      multiplierReg2_40 <= io_in_b_man_40; // @[bundled_block_division.scala 155:22]
    end
    if (reset) begin // @[bundled_block_division.scala 152:28]
      signReg_40 <= 1'h0; // @[bundled_block_division.scala 152:28]
    end else begin
      signReg_40 <= io_in_a_sign_40; // @[bundled_block_division.scala 153:15]
    end
    if (reset) begin // @[bundled_block_division.scala 149:34]
      multiplierReg_41 <= 6'h0; // @[bundled_block_division.scala 149:34]
    end else begin
      multiplierReg_41 <= io_in_a_man_41; // @[bundled_block_division.scala 154:21]
    end
    if (reset) begin // @[bundled_block_division.scala 150:35]
      multiplierReg2_41 <= 6'h0; // @[bundled_block_division.scala 150:35]
    end else begin
      multiplierReg2_41 <= io_in_b_man_41; // @[bundled_block_division.scala 155:22]
    end
    if (reset) begin // @[bundled_block_division.scala 152:28]
      signReg_41 <= 1'h0; // @[bundled_block_division.scala 152:28]
    end else begin
      signReg_41 <= io_in_a_sign_41; // @[bundled_block_division.scala 153:15]
    end
    if (reset) begin // @[bundled_block_division.scala 149:34]
      multiplierReg_42 <= 6'h0; // @[bundled_block_division.scala 149:34]
    end else begin
      multiplierReg_42 <= io_in_a_man_42; // @[bundled_block_division.scala 154:21]
    end
    if (reset) begin // @[bundled_block_division.scala 150:35]
      multiplierReg2_42 <= 6'h0; // @[bundled_block_division.scala 150:35]
    end else begin
      multiplierReg2_42 <= io_in_b_man_42; // @[bundled_block_division.scala 155:22]
    end
    if (reset) begin // @[bundled_block_division.scala 152:28]
      signReg_42 <= 1'h0; // @[bundled_block_division.scala 152:28]
    end else begin
      signReg_42 <= io_in_a_sign_42; // @[bundled_block_division.scala 153:15]
    end
    if (reset) begin // @[bundled_block_division.scala 149:34]
      multiplierReg_43 <= 6'h0; // @[bundled_block_division.scala 149:34]
    end else begin
      multiplierReg_43 <= io_in_a_man_43; // @[bundled_block_division.scala 154:21]
    end
    if (reset) begin // @[bundled_block_division.scala 150:35]
      multiplierReg2_43 <= 6'h0; // @[bundled_block_division.scala 150:35]
    end else begin
      multiplierReg2_43 <= io_in_b_man_43; // @[bundled_block_division.scala 155:22]
    end
    if (reset) begin // @[bundled_block_division.scala 152:28]
      signReg_43 <= 1'h0; // @[bundled_block_division.scala 152:28]
    end else begin
      signReg_43 <= io_in_a_sign_43; // @[bundled_block_division.scala 153:15]
    end
    if (reset) begin // @[bundled_block_division.scala 149:34]
      multiplierReg_44 <= 6'h0; // @[bundled_block_division.scala 149:34]
    end else begin
      multiplierReg_44 <= io_in_a_man_44; // @[bundled_block_division.scala 154:21]
    end
    if (reset) begin // @[bundled_block_division.scala 150:35]
      multiplierReg2_44 <= 6'h0; // @[bundled_block_division.scala 150:35]
    end else begin
      multiplierReg2_44 <= io_in_b_man_44; // @[bundled_block_division.scala 155:22]
    end
    if (reset) begin // @[bundled_block_division.scala 152:28]
      signReg_44 <= 1'h0; // @[bundled_block_division.scala 152:28]
    end else begin
      signReg_44 <= io_in_a_sign_44; // @[bundled_block_division.scala 153:15]
    end
    if (reset) begin // @[bundled_block_division.scala 149:34]
      multiplierReg_45 <= 6'h0; // @[bundled_block_division.scala 149:34]
    end else begin
      multiplierReg_45 <= io_in_a_man_45; // @[bundled_block_division.scala 154:21]
    end
    if (reset) begin // @[bundled_block_division.scala 150:35]
      multiplierReg2_45 <= 6'h0; // @[bundled_block_division.scala 150:35]
    end else begin
      multiplierReg2_45 <= io_in_b_man_45; // @[bundled_block_division.scala 155:22]
    end
    if (reset) begin // @[bundled_block_division.scala 152:28]
      signReg_45 <= 1'h0; // @[bundled_block_division.scala 152:28]
    end else begin
      signReg_45 <= io_in_a_sign_45; // @[bundled_block_division.scala 153:15]
    end
    if (reset) begin // @[bundled_block_division.scala 149:34]
      multiplierReg_46 <= 6'h0; // @[bundled_block_division.scala 149:34]
    end else begin
      multiplierReg_46 <= io_in_a_man_46; // @[bundled_block_division.scala 154:21]
    end
    if (reset) begin // @[bundled_block_division.scala 150:35]
      multiplierReg2_46 <= 6'h0; // @[bundled_block_division.scala 150:35]
    end else begin
      multiplierReg2_46 <= io_in_b_man_46; // @[bundled_block_division.scala 155:22]
    end
    if (reset) begin // @[bundled_block_division.scala 152:28]
      signReg_46 <= 1'h0; // @[bundled_block_division.scala 152:28]
    end else begin
      signReg_46 <= io_in_a_sign_46; // @[bundled_block_division.scala 153:15]
    end
    if (reset) begin // @[bundled_block_division.scala 149:34]
      multiplierReg_47 <= 6'h0; // @[bundled_block_division.scala 149:34]
    end else begin
      multiplierReg_47 <= io_in_a_man_47; // @[bundled_block_division.scala 154:21]
    end
    if (reset) begin // @[bundled_block_division.scala 150:35]
      multiplierReg2_47 <= 6'h0; // @[bundled_block_division.scala 150:35]
    end else begin
      multiplierReg2_47 <= io_in_b_man_47; // @[bundled_block_division.scala 155:22]
    end
    if (reset) begin // @[bundled_block_division.scala 152:28]
      signReg_47 <= 1'h0; // @[bundled_block_division.scala 152:28]
    end else begin
      signReg_47 <= io_in_a_sign_47; // @[bundled_block_division.scala 153:15]
    end
    dotProductRegs_3_0 <= multiplication_48[11:0]; // @[bundled_block_division.scala 157:42]
    dotProductRegs_3_1 <= multiplication_49[11:0]; // @[bundled_block_division.scala 157:42]
    dotProductRegs_3_2 <= multiplication_50[11:0]; // @[bundled_block_division.scala 157:42]
    dotProductRegs_3_3 <= multiplication_51[11:0]; // @[bundled_block_division.scala 157:42]
    dotProductRegs_3_4 <= multiplication_52[11:0]; // @[bundled_block_division.scala 157:42]
    dotProductRegs_3_5 <= multiplication_53[11:0]; // @[bundled_block_division.scala 157:42]
    dotProductRegs_3_6 <= multiplication_54[11:0]; // @[bundled_block_division.scala 157:42]
    dotProductRegs_3_7 <= multiplication_55[11:0]; // @[bundled_block_division.scala 157:42]
    dotProductRegs_3_8 <= multiplication_56[11:0]; // @[bundled_block_division.scala 157:42]
    dotProductRegs_3_9 <= multiplication_57[11:0]; // @[bundled_block_division.scala 157:42]
    dotProductRegs_3_10 <= multiplication_58[11:0]; // @[bundled_block_division.scala 157:42]
    dotProductRegs_3_11 <= multiplication_59[11:0]; // @[bundled_block_division.scala 157:42]
    dotProductRegs_3_12 <= multiplication_60[11:0]; // @[bundled_block_division.scala 157:42]
    dotProductRegs_3_13 <= multiplication_61[11:0]; // @[bundled_block_division.scala 157:42]
    dotProductRegs_3_14 <= multiplication_62[11:0]; // @[bundled_block_division.scala 157:42]
    dotProductRegs_3_15 <= multiplication_63[11:0]; // @[bundled_block_division.scala 157:42]
    signs_3_0 <= signReg_48 ^ io_in_b_sign_48; // @[bundled_block_division.scala 158:27]
    signs_3_1 <= signReg_49 ^ io_in_b_sign_49; // @[bundled_block_division.scala 158:27]
    signs_3_2 <= signReg_50 ^ io_in_b_sign_50; // @[bundled_block_division.scala 158:27]
    signs_3_3 <= signReg_51 ^ io_in_b_sign_51; // @[bundled_block_division.scala 158:27]
    signs_3_4 <= signReg_52 ^ io_in_b_sign_52; // @[bundled_block_division.scala 158:27]
    signs_3_5 <= signReg_53 ^ io_in_b_sign_53; // @[bundled_block_division.scala 158:27]
    signs_3_6 <= signReg_54 ^ io_in_b_sign_54; // @[bundled_block_division.scala 158:27]
    signs_3_7 <= signReg_55 ^ io_in_b_sign_55; // @[bundled_block_division.scala 158:27]
    signs_3_8 <= signReg_56 ^ io_in_b_sign_56; // @[bundled_block_division.scala 158:27]
    signs_3_9 <= signReg_57 ^ io_in_b_sign_57; // @[bundled_block_division.scala 158:27]
    signs_3_10 <= signReg_58 ^ io_in_b_sign_58; // @[bundled_block_division.scala 158:27]
    signs_3_11 <= signReg_59 ^ io_in_b_sign_59; // @[bundled_block_division.scala 158:27]
    signs_3_12 <= signReg_60 ^ io_in_b_sign_60; // @[bundled_block_division.scala 158:27]
    signs_3_13 <= signReg_61 ^ io_in_b_sign_61; // @[bundled_block_division.scala 158:27]
    signs_3_14 <= signReg_62 ^ io_in_b_sign_62; // @[bundled_block_division.scala 158:27]
    signs_3_15 <= signReg_63 ^ io_in_b_sign_63; // @[bundled_block_division.scala 158:27]
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
    if (signs_3_4) begin // @[bundled_block_division.scala 159:31]
      two_complement_3_4 <= _two_complement_4_T_25;
    end else begin
      two_complement_3_4 <= _two_complement_4_T_22;
    end
    if (signs_3_5) begin // @[bundled_block_division.scala 159:31]
      two_complement_3_5 <= _two_complement_5_T_25;
    end else begin
      two_complement_3_5 <= _two_complement_5_T_22;
    end
    if (signs_3_6) begin // @[bundled_block_division.scala 159:31]
      two_complement_3_6 <= _two_complement_6_T_25;
    end else begin
      two_complement_3_6 <= _two_complement_6_T_22;
    end
    if (signs_3_7) begin // @[bundled_block_division.scala 159:31]
      two_complement_3_7 <= _two_complement_7_T_25;
    end else begin
      two_complement_3_7 <= _two_complement_7_T_22;
    end
    if (signs_3_8) begin // @[bundled_block_division.scala 159:31]
      two_complement_3_8 <= _two_complement_8_T_25;
    end else begin
      two_complement_3_8 <= _two_complement_8_T_22;
    end
    if (signs_3_9) begin // @[bundled_block_division.scala 159:31]
      two_complement_3_9 <= _two_complement_9_T_25;
    end else begin
      two_complement_3_9 <= _two_complement_9_T_22;
    end
    if (signs_3_10) begin // @[bundled_block_division.scala 159:31]
      two_complement_3_10 <= _two_complement_10_T_25;
    end else begin
      two_complement_3_10 <= _two_complement_10_T_22;
    end
    if (signs_3_11) begin // @[bundled_block_division.scala 159:31]
      two_complement_3_11 <= _two_complement_11_T_25;
    end else begin
      two_complement_3_11 <= _two_complement_11_T_22;
    end
    if (signs_3_12) begin // @[bundled_block_division.scala 159:31]
      two_complement_3_12 <= _two_complement_12_T_25;
    end else begin
      two_complement_3_12 <= _two_complement_12_T_22;
    end
    if (signs_3_13) begin // @[bundled_block_division.scala 159:31]
      two_complement_3_13 <= _two_complement_13_T_25;
    end else begin
      two_complement_3_13 <= _two_complement_13_T_22;
    end
    if (signs_3_14) begin // @[bundled_block_division.scala 159:31]
      two_complement_3_14 <= _two_complement_14_T_25;
    end else begin
      two_complement_3_14 <= _two_complement_14_T_22;
    end
    if (signs_3_15) begin // @[bundled_block_division.scala 159:31]
      two_complement_3_15 <= _two_complement_15_T_25;
    end else begin
      two_complement_3_15 <= _two_complement_15_T_22;
    end
    two_complement_buffer_3_0 <= two_complement_3_0; // @[bundled_block_division.scala 160:53]
    two_complement_buffer_3_1 <= two_complement_3_1; // @[bundled_block_division.scala 160:53]
    two_complement_buffer_3_2 <= two_complement_3_2; // @[bundled_block_division.scala 160:53]
    two_complement_buffer_3_3 <= two_complement_3_3; // @[bundled_block_division.scala 160:53]
    two_complement_buffer_3_4 <= two_complement_3_4; // @[bundled_block_division.scala 160:53]
    two_complement_buffer_3_5 <= two_complement_3_5; // @[bundled_block_division.scala 160:53]
    two_complement_buffer_3_6 <= two_complement_3_6; // @[bundled_block_division.scala 160:53]
    two_complement_buffer_3_7 <= two_complement_3_7; // @[bundled_block_division.scala 160:53]
    two_complement_buffer_3_8 <= two_complement_3_8; // @[bundled_block_division.scala 160:53]
    two_complement_buffer_3_9 <= two_complement_3_9; // @[bundled_block_division.scala 160:53]
    two_complement_buffer_3_10 <= two_complement_3_10; // @[bundled_block_division.scala 160:53]
    two_complement_buffer_3_11 <= two_complement_3_11; // @[bundled_block_division.scala 160:53]
    two_complement_buffer_3_12 <= two_complement_3_12; // @[bundled_block_division.scala 160:53]
    two_complement_buffer_3_13 <= two_complement_3_13; // @[bundled_block_division.scala 160:53]
    two_complement_buffer_3_14 <= two_complement_3_14; // @[bundled_block_division.scala 160:53]
    two_complement_buffer_3_15 <= two_complement_3_15; // @[bundled_block_division.scala 160:53]
    if (reset) begin // @[bundled_block_division.scala 149:34]
      multiplierReg_48 <= 6'h0; // @[bundled_block_division.scala 149:34]
    end else begin
      multiplierReg_48 <= io_in_a_man_48; // @[bundled_block_division.scala 154:21]
    end
    if (reset) begin // @[bundled_block_division.scala 150:35]
      multiplierReg2_48 <= 6'h0; // @[bundled_block_division.scala 150:35]
    end else begin
      multiplierReg2_48 <= io_in_b_man_48; // @[bundled_block_division.scala 155:22]
    end
    if (reset) begin // @[bundled_block_division.scala 152:28]
      signReg_48 <= 1'h0; // @[bundled_block_division.scala 152:28]
    end else begin
      signReg_48 <= io_in_a_sign_48; // @[bundled_block_division.scala 153:15]
    end
    if (reset) begin // @[bundled_block_division.scala 149:34]
      multiplierReg_49 <= 6'h0; // @[bundled_block_division.scala 149:34]
    end else begin
      multiplierReg_49 <= io_in_a_man_49; // @[bundled_block_division.scala 154:21]
    end
    if (reset) begin // @[bundled_block_division.scala 150:35]
      multiplierReg2_49 <= 6'h0; // @[bundled_block_division.scala 150:35]
    end else begin
      multiplierReg2_49 <= io_in_b_man_49; // @[bundled_block_division.scala 155:22]
    end
    if (reset) begin // @[bundled_block_division.scala 152:28]
      signReg_49 <= 1'h0; // @[bundled_block_division.scala 152:28]
    end else begin
      signReg_49 <= io_in_a_sign_49; // @[bundled_block_division.scala 153:15]
    end
    if (reset) begin // @[bundled_block_division.scala 149:34]
      multiplierReg_50 <= 6'h0; // @[bundled_block_division.scala 149:34]
    end else begin
      multiplierReg_50 <= io_in_a_man_50; // @[bundled_block_division.scala 154:21]
    end
    if (reset) begin // @[bundled_block_division.scala 150:35]
      multiplierReg2_50 <= 6'h0; // @[bundled_block_division.scala 150:35]
    end else begin
      multiplierReg2_50 <= io_in_b_man_50; // @[bundled_block_division.scala 155:22]
    end
    if (reset) begin // @[bundled_block_division.scala 152:28]
      signReg_50 <= 1'h0; // @[bundled_block_division.scala 152:28]
    end else begin
      signReg_50 <= io_in_a_sign_50; // @[bundled_block_division.scala 153:15]
    end
    if (reset) begin // @[bundled_block_division.scala 149:34]
      multiplierReg_51 <= 6'h0; // @[bundled_block_division.scala 149:34]
    end else begin
      multiplierReg_51 <= io_in_a_man_51; // @[bundled_block_division.scala 154:21]
    end
    if (reset) begin // @[bundled_block_division.scala 150:35]
      multiplierReg2_51 <= 6'h0; // @[bundled_block_division.scala 150:35]
    end else begin
      multiplierReg2_51 <= io_in_b_man_51; // @[bundled_block_division.scala 155:22]
    end
    if (reset) begin // @[bundled_block_division.scala 152:28]
      signReg_51 <= 1'h0; // @[bundled_block_division.scala 152:28]
    end else begin
      signReg_51 <= io_in_a_sign_51; // @[bundled_block_division.scala 153:15]
    end
    if (reset) begin // @[bundled_block_division.scala 149:34]
      multiplierReg_52 <= 6'h0; // @[bundled_block_division.scala 149:34]
    end else begin
      multiplierReg_52 <= io_in_a_man_52; // @[bundled_block_division.scala 154:21]
    end
    if (reset) begin // @[bundled_block_division.scala 150:35]
      multiplierReg2_52 <= 6'h0; // @[bundled_block_division.scala 150:35]
    end else begin
      multiplierReg2_52 <= io_in_b_man_52; // @[bundled_block_division.scala 155:22]
    end
    if (reset) begin // @[bundled_block_division.scala 152:28]
      signReg_52 <= 1'h0; // @[bundled_block_division.scala 152:28]
    end else begin
      signReg_52 <= io_in_a_sign_52; // @[bundled_block_division.scala 153:15]
    end
    if (reset) begin // @[bundled_block_division.scala 149:34]
      multiplierReg_53 <= 6'h0; // @[bundled_block_division.scala 149:34]
    end else begin
      multiplierReg_53 <= io_in_a_man_53; // @[bundled_block_division.scala 154:21]
    end
    if (reset) begin // @[bundled_block_division.scala 150:35]
      multiplierReg2_53 <= 6'h0; // @[bundled_block_division.scala 150:35]
    end else begin
      multiplierReg2_53 <= io_in_b_man_53; // @[bundled_block_division.scala 155:22]
    end
    if (reset) begin // @[bundled_block_division.scala 152:28]
      signReg_53 <= 1'h0; // @[bundled_block_division.scala 152:28]
    end else begin
      signReg_53 <= io_in_a_sign_53; // @[bundled_block_division.scala 153:15]
    end
    if (reset) begin // @[bundled_block_division.scala 149:34]
      multiplierReg_54 <= 6'h0; // @[bundled_block_division.scala 149:34]
    end else begin
      multiplierReg_54 <= io_in_a_man_54; // @[bundled_block_division.scala 154:21]
    end
    if (reset) begin // @[bundled_block_division.scala 150:35]
      multiplierReg2_54 <= 6'h0; // @[bundled_block_division.scala 150:35]
    end else begin
      multiplierReg2_54 <= io_in_b_man_54; // @[bundled_block_division.scala 155:22]
    end
    if (reset) begin // @[bundled_block_division.scala 152:28]
      signReg_54 <= 1'h0; // @[bundled_block_division.scala 152:28]
    end else begin
      signReg_54 <= io_in_a_sign_54; // @[bundled_block_division.scala 153:15]
    end
    if (reset) begin // @[bundled_block_division.scala 149:34]
      multiplierReg_55 <= 6'h0; // @[bundled_block_division.scala 149:34]
    end else begin
      multiplierReg_55 <= io_in_a_man_55; // @[bundled_block_division.scala 154:21]
    end
    if (reset) begin // @[bundled_block_division.scala 150:35]
      multiplierReg2_55 <= 6'h0; // @[bundled_block_division.scala 150:35]
    end else begin
      multiplierReg2_55 <= io_in_b_man_55; // @[bundled_block_division.scala 155:22]
    end
    if (reset) begin // @[bundled_block_division.scala 152:28]
      signReg_55 <= 1'h0; // @[bundled_block_division.scala 152:28]
    end else begin
      signReg_55 <= io_in_a_sign_55; // @[bundled_block_division.scala 153:15]
    end
    if (reset) begin // @[bundled_block_division.scala 149:34]
      multiplierReg_56 <= 6'h0; // @[bundled_block_division.scala 149:34]
    end else begin
      multiplierReg_56 <= io_in_a_man_56; // @[bundled_block_division.scala 154:21]
    end
    if (reset) begin // @[bundled_block_division.scala 150:35]
      multiplierReg2_56 <= 6'h0; // @[bundled_block_division.scala 150:35]
    end else begin
      multiplierReg2_56 <= io_in_b_man_56; // @[bundled_block_division.scala 155:22]
    end
    if (reset) begin // @[bundled_block_division.scala 152:28]
      signReg_56 <= 1'h0; // @[bundled_block_division.scala 152:28]
    end else begin
      signReg_56 <= io_in_a_sign_56; // @[bundled_block_division.scala 153:15]
    end
    if (reset) begin // @[bundled_block_division.scala 149:34]
      multiplierReg_57 <= 6'h0; // @[bundled_block_division.scala 149:34]
    end else begin
      multiplierReg_57 <= io_in_a_man_57; // @[bundled_block_division.scala 154:21]
    end
    if (reset) begin // @[bundled_block_division.scala 150:35]
      multiplierReg2_57 <= 6'h0; // @[bundled_block_division.scala 150:35]
    end else begin
      multiplierReg2_57 <= io_in_b_man_57; // @[bundled_block_division.scala 155:22]
    end
    if (reset) begin // @[bundled_block_division.scala 152:28]
      signReg_57 <= 1'h0; // @[bundled_block_division.scala 152:28]
    end else begin
      signReg_57 <= io_in_a_sign_57; // @[bundled_block_division.scala 153:15]
    end
    if (reset) begin // @[bundled_block_division.scala 149:34]
      multiplierReg_58 <= 6'h0; // @[bundled_block_division.scala 149:34]
    end else begin
      multiplierReg_58 <= io_in_a_man_58; // @[bundled_block_division.scala 154:21]
    end
    if (reset) begin // @[bundled_block_division.scala 150:35]
      multiplierReg2_58 <= 6'h0; // @[bundled_block_division.scala 150:35]
    end else begin
      multiplierReg2_58 <= io_in_b_man_58; // @[bundled_block_division.scala 155:22]
    end
    if (reset) begin // @[bundled_block_division.scala 152:28]
      signReg_58 <= 1'h0; // @[bundled_block_division.scala 152:28]
    end else begin
      signReg_58 <= io_in_a_sign_58; // @[bundled_block_division.scala 153:15]
    end
    if (reset) begin // @[bundled_block_division.scala 149:34]
      multiplierReg_59 <= 6'h0; // @[bundled_block_division.scala 149:34]
    end else begin
      multiplierReg_59 <= io_in_a_man_59; // @[bundled_block_division.scala 154:21]
    end
    if (reset) begin // @[bundled_block_division.scala 150:35]
      multiplierReg2_59 <= 6'h0; // @[bundled_block_division.scala 150:35]
    end else begin
      multiplierReg2_59 <= io_in_b_man_59; // @[bundled_block_division.scala 155:22]
    end
    if (reset) begin // @[bundled_block_division.scala 152:28]
      signReg_59 <= 1'h0; // @[bundled_block_division.scala 152:28]
    end else begin
      signReg_59 <= io_in_a_sign_59; // @[bundled_block_division.scala 153:15]
    end
    if (reset) begin // @[bundled_block_division.scala 149:34]
      multiplierReg_60 <= 6'h0; // @[bundled_block_division.scala 149:34]
    end else begin
      multiplierReg_60 <= io_in_a_man_60; // @[bundled_block_division.scala 154:21]
    end
    if (reset) begin // @[bundled_block_division.scala 150:35]
      multiplierReg2_60 <= 6'h0; // @[bundled_block_division.scala 150:35]
    end else begin
      multiplierReg2_60 <= io_in_b_man_60; // @[bundled_block_division.scala 155:22]
    end
    if (reset) begin // @[bundled_block_division.scala 152:28]
      signReg_60 <= 1'h0; // @[bundled_block_division.scala 152:28]
    end else begin
      signReg_60 <= io_in_a_sign_60; // @[bundled_block_division.scala 153:15]
    end
    if (reset) begin // @[bundled_block_division.scala 149:34]
      multiplierReg_61 <= 6'h0; // @[bundled_block_division.scala 149:34]
    end else begin
      multiplierReg_61 <= io_in_a_man_61; // @[bundled_block_division.scala 154:21]
    end
    if (reset) begin // @[bundled_block_division.scala 150:35]
      multiplierReg2_61 <= 6'h0; // @[bundled_block_division.scala 150:35]
    end else begin
      multiplierReg2_61 <= io_in_b_man_61; // @[bundled_block_division.scala 155:22]
    end
    if (reset) begin // @[bundled_block_division.scala 152:28]
      signReg_61 <= 1'h0; // @[bundled_block_division.scala 152:28]
    end else begin
      signReg_61 <= io_in_a_sign_61; // @[bundled_block_division.scala 153:15]
    end
    if (reset) begin // @[bundled_block_division.scala 149:34]
      multiplierReg_62 <= 6'h0; // @[bundled_block_division.scala 149:34]
    end else begin
      multiplierReg_62 <= io_in_a_man_62; // @[bundled_block_division.scala 154:21]
    end
    if (reset) begin // @[bundled_block_division.scala 150:35]
      multiplierReg2_62 <= 6'h0; // @[bundled_block_division.scala 150:35]
    end else begin
      multiplierReg2_62 <= io_in_b_man_62; // @[bundled_block_division.scala 155:22]
    end
    if (reset) begin // @[bundled_block_division.scala 152:28]
      signReg_62 <= 1'h0; // @[bundled_block_division.scala 152:28]
    end else begin
      signReg_62 <= io_in_a_sign_62; // @[bundled_block_division.scala 153:15]
    end
    if (reset) begin // @[bundled_block_division.scala 149:34]
      multiplierReg_63 <= 6'h0; // @[bundled_block_division.scala 149:34]
    end else begin
      multiplierReg_63 <= io_in_a_man_63; // @[bundled_block_division.scala 154:21]
    end
    if (reset) begin // @[bundled_block_division.scala 150:35]
      multiplierReg2_63 <= 6'h0; // @[bundled_block_division.scala 150:35]
    end else begin
      multiplierReg2_63 <= io_in_b_man_63; // @[bundled_block_division.scala 155:22]
    end
    if (reset) begin // @[bundled_block_division.scala 152:28]
      signReg_63 <= 1'h0; // @[bundled_block_division.scala 152:28]
    end else begin
      signReg_63 <= io_in_a_sign_63; // @[bundled_block_division.scala 153:15]
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
  acc_0 = _RAND_4[27:0];
  _RAND_5 = {1{`RANDOM}};
  acc_1 = _RAND_5[27:0];
  _RAND_6 = {1{`RANDOM}};
  acc_2 = _RAND_6[27:0];
  _RAND_7 = {1{`RANDOM}};
  acc_3 = _RAND_7[27:0];
  _RAND_8 = {1{`RANDOM}};
  dotProductRegs__0 = _RAND_8[11:0];
  _RAND_9 = {1{`RANDOM}};
  dotProductRegs__1 = _RAND_9[11:0];
  _RAND_10 = {1{`RANDOM}};
  dotProductRegs__2 = _RAND_10[11:0];
  _RAND_11 = {1{`RANDOM}};
  dotProductRegs__3 = _RAND_11[11:0];
  _RAND_12 = {1{`RANDOM}};
  dotProductRegs__4 = _RAND_12[11:0];
  _RAND_13 = {1{`RANDOM}};
  dotProductRegs__5 = _RAND_13[11:0];
  _RAND_14 = {1{`RANDOM}};
  dotProductRegs__6 = _RAND_14[11:0];
  _RAND_15 = {1{`RANDOM}};
  dotProductRegs__7 = _RAND_15[11:0];
  _RAND_16 = {1{`RANDOM}};
  dotProductRegs__8 = _RAND_16[11:0];
  _RAND_17 = {1{`RANDOM}};
  dotProductRegs__9 = _RAND_17[11:0];
  _RAND_18 = {1{`RANDOM}};
  dotProductRegs__10 = _RAND_18[11:0];
  _RAND_19 = {1{`RANDOM}};
  dotProductRegs__11 = _RAND_19[11:0];
  _RAND_20 = {1{`RANDOM}};
  dotProductRegs__12 = _RAND_20[11:0];
  _RAND_21 = {1{`RANDOM}};
  dotProductRegs__13 = _RAND_21[11:0];
  _RAND_22 = {1{`RANDOM}};
  dotProductRegs__14 = _RAND_22[11:0];
  _RAND_23 = {1{`RANDOM}};
  dotProductRegs__15 = _RAND_23[11:0];
  _RAND_24 = {1{`RANDOM}};
  signs__0 = _RAND_24[0:0];
  _RAND_25 = {1{`RANDOM}};
  signs__1 = _RAND_25[0:0];
  _RAND_26 = {1{`RANDOM}};
  signs__2 = _RAND_26[0:0];
  _RAND_27 = {1{`RANDOM}};
  signs__3 = _RAND_27[0:0];
  _RAND_28 = {1{`RANDOM}};
  signs__4 = _RAND_28[0:0];
  _RAND_29 = {1{`RANDOM}};
  signs__5 = _RAND_29[0:0];
  _RAND_30 = {1{`RANDOM}};
  signs__6 = _RAND_30[0:0];
  _RAND_31 = {1{`RANDOM}};
  signs__7 = _RAND_31[0:0];
  _RAND_32 = {1{`RANDOM}};
  signs__8 = _RAND_32[0:0];
  _RAND_33 = {1{`RANDOM}};
  signs__9 = _RAND_33[0:0];
  _RAND_34 = {1{`RANDOM}};
  signs__10 = _RAND_34[0:0];
  _RAND_35 = {1{`RANDOM}};
  signs__11 = _RAND_35[0:0];
  _RAND_36 = {1{`RANDOM}};
  signs__12 = _RAND_36[0:0];
  _RAND_37 = {1{`RANDOM}};
  signs__13 = _RAND_37[0:0];
  _RAND_38 = {1{`RANDOM}};
  signs__14 = _RAND_38[0:0];
  _RAND_39 = {1{`RANDOM}};
  signs__15 = _RAND_39[0:0];
  _RAND_40 = {1{`RANDOM}};
  two_complement__0 = _RAND_40[12:0];
  _RAND_41 = {1{`RANDOM}};
  two_complement__1 = _RAND_41[12:0];
  _RAND_42 = {1{`RANDOM}};
  two_complement__2 = _RAND_42[12:0];
  _RAND_43 = {1{`RANDOM}};
  two_complement__3 = _RAND_43[12:0];
  _RAND_44 = {1{`RANDOM}};
  two_complement__4 = _RAND_44[12:0];
  _RAND_45 = {1{`RANDOM}};
  two_complement__5 = _RAND_45[12:0];
  _RAND_46 = {1{`RANDOM}};
  two_complement__6 = _RAND_46[12:0];
  _RAND_47 = {1{`RANDOM}};
  two_complement__7 = _RAND_47[12:0];
  _RAND_48 = {1{`RANDOM}};
  two_complement__8 = _RAND_48[12:0];
  _RAND_49 = {1{`RANDOM}};
  two_complement__9 = _RAND_49[12:0];
  _RAND_50 = {1{`RANDOM}};
  two_complement__10 = _RAND_50[12:0];
  _RAND_51 = {1{`RANDOM}};
  two_complement__11 = _RAND_51[12:0];
  _RAND_52 = {1{`RANDOM}};
  two_complement__12 = _RAND_52[12:0];
  _RAND_53 = {1{`RANDOM}};
  two_complement__13 = _RAND_53[12:0];
  _RAND_54 = {1{`RANDOM}};
  two_complement__14 = _RAND_54[12:0];
  _RAND_55 = {1{`RANDOM}};
  two_complement__15 = _RAND_55[12:0];
  _RAND_56 = {1{`RANDOM}};
  two_complement_buffer__0 = _RAND_56[12:0];
  _RAND_57 = {1{`RANDOM}};
  two_complement_buffer__1 = _RAND_57[12:0];
  _RAND_58 = {1{`RANDOM}};
  two_complement_buffer__2 = _RAND_58[12:0];
  _RAND_59 = {1{`RANDOM}};
  two_complement_buffer__3 = _RAND_59[12:0];
  _RAND_60 = {1{`RANDOM}};
  two_complement_buffer__4 = _RAND_60[12:0];
  _RAND_61 = {1{`RANDOM}};
  two_complement_buffer__5 = _RAND_61[12:0];
  _RAND_62 = {1{`RANDOM}};
  two_complement_buffer__6 = _RAND_62[12:0];
  _RAND_63 = {1{`RANDOM}};
  two_complement_buffer__7 = _RAND_63[12:0];
  _RAND_64 = {1{`RANDOM}};
  two_complement_buffer__8 = _RAND_64[12:0];
  _RAND_65 = {1{`RANDOM}};
  two_complement_buffer__9 = _RAND_65[12:0];
  _RAND_66 = {1{`RANDOM}};
  two_complement_buffer__10 = _RAND_66[12:0];
  _RAND_67 = {1{`RANDOM}};
  two_complement_buffer__11 = _RAND_67[12:0];
  _RAND_68 = {1{`RANDOM}};
  two_complement_buffer__12 = _RAND_68[12:0];
  _RAND_69 = {1{`RANDOM}};
  two_complement_buffer__13 = _RAND_69[12:0];
  _RAND_70 = {1{`RANDOM}};
  two_complement_buffer__14 = _RAND_70[12:0];
  _RAND_71 = {1{`RANDOM}};
  two_complement_buffer__15 = _RAND_71[12:0];
  _RAND_72 = {1{`RANDOM}};
  multiplierReg = _RAND_72[5:0];
  _RAND_73 = {1{`RANDOM}};
  multiplierReg2 = _RAND_73[5:0];
  _RAND_74 = {1{`RANDOM}};
  signReg = _RAND_74[0:0];
  _RAND_75 = {1{`RANDOM}};
  multiplierReg_1 = _RAND_75[5:0];
  _RAND_76 = {1{`RANDOM}};
  multiplierReg2_1 = _RAND_76[5:0];
  _RAND_77 = {1{`RANDOM}};
  signReg_1 = _RAND_77[0:0];
  _RAND_78 = {1{`RANDOM}};
  multiplierReg_2 = _RAND_78[5:0];
  _RAND_79 = {1{`RANDOM}};
  multiplierReg2_2 = _RAND_79[5:0];
  _RAND_80 = {1{`RANDOM}};
  signReg_2 = _RAND_80[0:0];
  _RAND_81 = {1{`RANDOM}};
  multiplierReg_3 = _RAND_81[5:0];
  _RAND_82 = {1{`RANDOM}};
  multiplierReg2_3 = _RAND_82[5:0];
  _RAND_83 = {1{`RANDOM}};
  signReg_3 = _RAND_83[0:0];
  _RAND_84 = {1{`RANDOM}};
  multiplierReg_4 = _RAND_84[5:0];
  _RAND_85 = {1{`RANDOM}};
  multiplierReg2_4 = _RAND_85[5:0];
  _RAND_86 = {1{`RANDOM}};
  signReg_4 = _RAND_86[0:0];
  _RAND_87 = {1{`RANDOM}};
  multiplierReg_5 = _RAND_87[5:0];
  _RAND_88 = {1{`RANDOM}};
  multiplierReg2_5 = _RAND_88[5:0];
  _RAND_89 = {1{`RANDOM}};
  signReg_5 = _RAND_89[0:0];
  _RAND_90 = {1{`RANDOM}};
  multiplierReg_6 = _RAND_90[5:0];
  _RAND_91 = {1{`RANDOM}};
  multiplierReg2_6 = _RAND_91[5:0];
  _RAND_92 = {1{`RANDOM}};
  signReg_6 = _RAND_92[0:0];
  _RAND_93 = {1{`RANDOM}};
  multiplierReg_7 = _RAND_93[5:0];
  _RAND_94 = {1{`RANDOM}};
  multiplierReg2_7 = _RAND_94[5:0];
  _RAND_95 = {1{`RANDOM}};
  signReg_7 = _RAND_95[0:0];
  _RAND_96 = {1{`RANDOM}};
  multiplierReg_8 = _RAND_96[5:0];
  _RAND_97 = {1{`RANDOM}};
  multiplierReg2_8 = _RAND_97[5:0];
  _RAND_98 = {1{`RANDOM}};
  signReg_8 = _RAND_98[0:0];
  _RAND_99 = {1{`RANDOM}};
  multiplierReg_9 = _RAND_99[5:0];
  _RAND_100 = {1{`RANDOM}};
  multiplierReg2_9 = _RAND_100[5:0];
  _RAND_101 = {1{`RANDOM}};
  signReg_9 = _RAND_101[0:0];
  _RAND_102 = {1{`RANDOM}};
  multiplierReg_10 = _RAND_102[5:0];
  _RAND_103 = {1{`RANDOM}};
  multiplierReg2_10 = _RAND_103[5:0];
  _RAND_104 = {1{`RANDOM}};
  signReg_10 = _RAND_104[0:0];
  _RAND_105 = {1{`RANDOM}};
  multiplierReg_11 = _RAND_105[5:0];
  _RAND_106 = {1{`RANDOM}};
  multiplierReg2_11 = _RAND_106[5:0];
  _RAND_107 = {1{`RANDOM}};
  signReg_11 = _RAND_107[0:0];
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
  _RAND_120 = {1{`RANDOM}};
  dotProductRegs_1_0 = _RAND_120[11:0];
  _RAND_121 = {1{`RANDOM}};
  dotProductRegs_1_1 = _RAND_121[11:0];
  _RAND_122 = {1{`RANDOM}};
  dotProductRegs_1_2 = _RAND_122[11:0];
  _RAND_123 = {1{`RANDOM}};
  dotProductRegs_1_3 = _RAND_123[11:0];
  _RAND_124 = {1{`RANDOM}};
  dotProductRegs_1_4 = _RAND_124[11:0];
  _RAND_125 = {1{`RANDOM}};
  dotProductRegs_1_5 = _RAND_125[11:0];
  _RAND_126 = {1{`RANDOM}};
  dotProductRegs_1_6 = _RAND_126[11:0];
  _RAND_127 = {1{`RANDOM}};
  dotProductRegs_1_7 = _RAND_127[11:0];
  _RAND_128 = {1{`RANDOM}};
  dotProductRegs_1_8 = _RAND_128[11:0];
  _RAND_129 = {1{`RANDOM}};
  dotProductRegs_1_9 = _RAND_129[11:0];
  _RAND_130 = {1{`RANDOM}};
  dotProductRegs_1_10 = _RAND_130[11:0];
  _RAND_131 = {1{`RANDOM}};
  dotProductRegs_1_11 = _RAND_131[11:0];
  _RAND_132 = {1{`RANDOM}};
  dotProductRegs_1_12 = _RAND_132[11:0];
  _RAND_133 = {1{`RANDOM}};
  dotProductRegs_1_13 = _RAND_133[11:0];
  _RAND_134 = {1{`RANDOM}};
  dotProductRegs_1_14 = _RAND_134[11:0];
  _RAND_135 = {1{`RANDOM}};
  dotProductRegs_1_15 = _RAND_135[11:0];
  _RAND_136 = {1{`RANDOM}};
  signs_1_0 = _RAND_136[0:0];
  _RAND_137 = {1{`RANDOM}};
  signs_1_1 = _RAND_137[0:0];
  _RAND_138 = {1{`RANDOM}};
  signs_1_2 = _RAND_138[0:0];
  _RAND_139 = {1{`RANDOM}};
  signs_1_3 = _RAND_139[0:0];
  _RAND_140 = {1{`RANDOM}};
  signs_1_4 = _RAND_140[0:0];
  _RAND_141 = {1{`RANDOM}};
  signs_1_5 = _RAND_141[0:0];
  _RAND_142 = {1{`RANDOM}};
  signs_1_6 = _RAND_142[0:0];
  _RAND_143 = {1{`RANDOM}};
  signs_1_7 = _RAND_143[0:0];
  _RAND_144 = {1{`RANDOM}};
  signs_1_8 = _RAND_144[0:0];
  _RAND_145 = {1{`RANDOM}};
  signs_1_9 = _RAND_145[0:0];
  _RAND_146 = {1{`RANDOM}};
  signs_1_10 = _RAND_146[0:0];
  _RAND_147 = {1{`RANDOM}};
  signs_1_11 = _RAND_147[0:0];
  _RAND_148 = {1{`RANDOM}};
  signs_1_12 = _RAND_148[0:0];
  _RAND_149 = {1{`RANDOM}};
  signs_1_13 = _RAND_149[0:0];
  _RAND_150 = {1{`RANDOM}};
  signs_1_14 = _RAND_150[0:0];
  _RAND_151 = {1{`RANDOM}};
  signs_1_15 = _RAND_151[0:0];
  _RAND_152 = {1{`RANDOM}};
  two_complement_1_0 = _RAND_152[12:0];
  _RAND_153 = {1{`RANDOM}};
  two_complement_1_1 = _RAND_153[12:0];
  _RAND_154 = {1{`RANDOM}};
  two_complement_1_2 = _RAND_154[12:0];
  _RAND_155 = {1{`RANDOM}};
  two_complement_1_3 = _RAND_155[12:0];
  _RAND_156 = {1{`RANDOM}};
  two_complement_1_4 = _RAND_156[12:0];
  _RAND_157 = {1{`RANDOM}};
  two_complement_1_5 = _RAND_157[12:0];
  _RAND_158 = {1{`RANDOM}};
  two_complement_1_6 = _RAND_158[12:0];
  _RAND_159 = {1{`RANDOM}};
  two_complement_1_7 = _RAND_159[12:0];
  _RAND_160 = {1{`RANDOM}};
  two_complement_1_8 = _RAND_160[12:0];
  _RAND_161 = {1{`RANDOM}};
  two_complement_1_9 = _RAND_161[12:0];
  _RAND_162 = {1{`RANDOM}};
  two_complement_1_10 = _RAND_162[12:0];
  _RAND_163 = {1{`RANDOM}};
  two_complement_1_11 = _RAND_163[12:0];
  _RAND_164 = {1{`RANDOM}};
  two_complement_1_12 = _RAND_164[12:0];
  _RAND_165 = {1{`RANDOM}};
  two_complement_1_13 = _RAND_165[12:0];
  _RAND_166 = {1{`RANDOM}};
  two_complement_1_14 = _RAND_166[12:0];
  _RAND_167 = {1{`RANDOM}};
  two_complement_1_15 = _RAND_167[12:0];
  _RAND_168 = {1{`RANDOM}};
  two_complement_buffer_1_0 = _RAND_168[12:0];
  _RAND_169 = {1{`RANDOM}};
  two_complement_buffer_1_1 = _RAND_169[12:0];
  _RAND_170 = {1{`RANDOM}};
  two_complement_buffer_1_2 = _RAND_170[12:0];
  _RAND_171 = {1{`RANDOM}};
  two_complement_buffer_1_3 = _RAND_171[12:0];
  _RAND_172 = {1{`RANDOM}};
  two_complement_buffer_1_4 = _RAND_172[12:0];
  _RAND_173 = {1{`RANDOM}};
  two_complement_buffer_1_5 = _RAND_173[12:0];
  _RAND_174 = {1{`RANDOM}};
  two_complement_buffer_1_6 = _RAND_174[12:0];
  _RAND_175 = {1{`RANDOM}};
  two_complement_buffer_1_7 = _RAND_175[12:0];
  _RAND_176 = {1{`RANDOM}};
  two_complement_buffer_1_8 = _RAND_176[12:0];
  _RAND_177 = {1{`RANDOM}};
  two_complement_buffer_1_9 = _RAND_177[12:0];
  _RAND_178 = {1{`RANDOM}};
  two_complement_buffer_1_10 = _RAND_178[12:0];
  _RAND_179 = {1{`RANDOM}};
  two_complement_buffer_1_11 = _RAND_179[12:0];
  _RAND_180 = {1{`RANDOM}};
  two_complement_buffer_1_12 = _RAND_180[12:0];
  _RAND_181 = {1{`RANDOM}};
  two_complement_buffer_1_13 = _RAND_181[12:0];
  _RAND_182 = {1{`RANDOM}};
  two_complement_buffer_1_14 = _RAND_182[12:0];
  _RAND_183 = {1{`RANDOM}};
  two_complement_buffer_1_15 = _RAND_183[12:0];
  _RAND_184 = {1{`RANDOM}};
  multiplierReg_16 = _RAND_184[5:0];
  _RAND_185 = {1{`RANDOM}};
  multiplierReg2_16 = _RAND_185[5:0];
  _RAND_186 = {1{`RANDOM}};
  signReg_16 = _RAND_186[0:0];
  _RAND_187 = {1{`RANDOM}};
  multiplierReg_17 = _RAND_187[5:0];
  _RAND_188 = {1{`RANDOM}};
  multiplierReg2_17 = _RAND_188[5:0];
  _RAND_189 = {1{`RANDOM}};
  signReg_17 = _RAND_189[0:0];
  _RAND_190 = {1{`RANDOM}};
  multiplierReg_18 = _RAND_190[5:0];
  _RAND_191 = {1{`RANDOM}};
  multiplierReg2_18 = _RAND_191[5:0];
  _RAND_192 = {1{`RANDOM}};
  signReg_18 = _RAND_192[0:0];
  _RAND_193 = {1{`RANDOM}};
  multiplierReg_19 = _RAND_193[5:0];
  _RAND_194 = {1{`RANDOM}};
  multiplierReg2_19 = _RAND_194[5:0];
  _RAND_195 = {1{`RANDOM}};
  signReg_19 = _RAND_195[0:0];
  _RAND_196 = {1{`RANDOM}};
  multiplierReg_20 = _RAND_196[5:0];
  _RAND_197 = {1{`RANDOM}};
  multiplierReg2_20 = _RAND_197[5:0];
  _RAND_198 = {1{`RANDOM}};
  signReg_20 = _RAND_198[0:0];
  _RAND_199 = {1{`RANDOM}};
  multiplierReg_21 = _RAND_199[5:0];
  _RAND_200 = {1{`RANDOM}};
  multiplierReg2_21 = _RAND_200[5:0];
  _RAND_201 = {1{`RANDOM}};
  signReg_21 = _RAND_201[0:0];
  _RAND_202 = {1{`RANDOM}};
  multiplierReg_22 = _RAND_202[5:0];
  _RAND_203 = {1{`RANDOM}};
  multiplierReg2_22 = _RAND_203[5:0];
  _RAND_204 = {1{`RANDOM}};
  signReg_22 = _RAND_204[0:0];
  _RAND_205 = {1{`RANDOM}};
  multiplierReg_23 = _RAND_205[5:0];
  _RAND_206 = {1{`RANDOM}};
  multiplierReg2_23 = _RAND_206[5:0];
  _RAND_207 = {1{`RANDOM}};
  signReg_23 = _RAND_207[0:0];
  _RAND_208 = {1{`RANDOM}};
  multiplierReg_24 = _RAND_208[5:0];
  _RAND_209 = {1{`RANDOM}};
  multiplierReg2_24 = _RAND_209[5:0];
  _RAND_210 = {1{`RANDOM}};
  signReg_24 = _RAND_210[0:0];
  _RAND_211 = {1{`RANDOM}};
  multiplierReg_25 = _RAND_211[5:0];
  _RAND_212 = {1{`RANDOM}};
  multiplierReg2_25 = _RAND_212[5:0];
  _RAND_213 = {1{`RANDOM}};
  signReg_25 = _RAND_213[0:0];
  _RAND_214 = {1{`RANDOM}};
  multiplierReg_26 = _RAND_214[5:0];
  _RAND_215 = {1{`RANDOM}};
  multiplierReg2_26 = _RAND_215[5:0];
  _RAND_216 = {1{`RANDOM}};
  signReg_26 = _RAND_216[0:0];
  _RAND_217 = {1{`RANDOM}};
  multiplierReg_27 = _RAND_217[5:0];
  _RAND_218 = {1{`RANDOM}};
  multiplierReg2_27 = _RAND_218[5:0];
  _RAND_219 = {1{`RANDOM}};
  signReg_27 = _RAND_219[0:0];
  _RAND_220 = {1{`RANDOM}};
  multiplierReg_28 = _RAND_220[5:0];
  _RAND_221 = {1{`RANDOM}};
  multiplierReg2_28 = _RAND_221[5:0];
  _RAND_222 = {1{`RANDOM}};
  signReg_28 = _RAND_222[0:0];
  _RAND_223 = {1{`RANDOM}};
  multiplierReg_29 = _RAND_223[5:0];
  _RAND_224 = {1{`RANDOM}};
  multiplierReg2_29 = _RAND_224[5:0];
  _RAND_225 = {1{`RANDOM}};
  signReg_29 = _RAND_225[0:0];
  _RAND_226 = {1{`RANDOM}};
  multiplierReg_30 = _RAND_226[5:0];
  _RAND_227 = {1{`RANDOM}};
  multiplierReg2_30 = _RAND_227[5:0];
  _RAND_228 = {1{`RANDOM}};
  signReg_30 = _RAND_228[0:0];
  _RAND_229 = {1{`RANDOM}};
  multiplierReg_31 = _RAND_229[5:0];
  _RAND_230 = {1{`RANDOM}};
  multiplierReg2_31 = _RAND_230[5:0];
  _RAND_231 = {1{`RANDOM}};
  signReg_31 = _RAND_231[0:0];
  _RAND_232 = {1{`RANDOM}};
  dotProductRegs_2_0 = _RAND_232[11:0];
  _RAND_233 = {1{`RANDOM}};
  dotProductRegs_2_1 = _RAND_233[11:0];
  _RAND_234 = {1{`RANDOM}};
  dotProductRegs_2_2 = _RAND_234[11:0];
  _RAND_235 = {1{`RANDOM}};
  dotProductRegs_2_3 = _RAND_235[11:0];
  _RAND_236 = {1{`RANDOM}};
  dotProductRegs_2_4 = _RAND_236[11:0];
  _RAND_237 = {1{`RANDOM}};
  dotProductRegs_2_5 = _RAND_237[11:0];
  _RAND_238 = {1{`RANDOM}};
  dotProductRegs_2_6 = _RAND_238[11:0];
  _RAND_239 = {1{`RANDOM}};
  dotProductRegs_2_7 = _RAND_239[11:0];
  _RAND_240 = {1{`RANDOM}};
  dotProductRegs_2_8 = _RAND_240[11:0];
  _RAND_241 = {1{`RANDOM}};
  dotProductRegs_2_9 = _RAND_241[11:0];
  _RAND_242 = {1{`RANDOM}};
  dotProductRegs_2_10 = _RAND_242[11:0];
  _RAND_243 = {1{`RANDOM}};
  dotProductRegs_2_11 = _RAND_243[11:0];
  _RAND_244 = {1{`RANDOM}};
  dotProductRegs_2_12 = _RAND_244[11:0];
  _RAND_245 = {1{`RANDOM}};
  dotProductRegs_2_13 = _RAND_245[11:0];
  _RAND_246 = {1{`RANDOM}};
  dotProductRegs_2_14 = _RAND_246[11:0];
  _RAND_247 = {1{`RANDOM}};
  dotProductRegs_2_15 = _RAND_247[11:0];
  _RAND_248 = {1{`RANDOM}};
  signs_2_0 = _RAND_248[0:0];
  _RAND_249 = {1{`RANDOM}};
  signs_2_1 = _RAND_249[0:0];
  _RAND_250 = {1{`RANDOM}};
  signs_2_2 = _RAND_250[0:0];
  _RAND_251 = {1{`RANDOM}};
  signs_2_3 = _RAND_251[0:0];
  _RAND_252 = {1{`RANDOM}};
  signs_2_4 = _RAND_252[0:0];
  _RAND_253 = {1{`RANDOM}};
  signs_2_5 = _RAND_253[0:0];
  _RAND_254 = {1{`RANDOM}};
  signs_2_6 = _RAND_254[0:0];
  _RAND_255 = {1{`RANDOM}};
  signs_2_7 = _RAND_255[0:0];
  _RAND_256 = {1{`RANDOM}};
  signs_2_8 = _RAND_256[0:0];
  _RAND_257 = {1{`RANDOM}};
  signs_2_9 = _RAND_257[0:0];
  _RAND_258 = {1{`RANDOM}};
  signs_2_10 = _RAND_258[0:0];
  _RAND_259 = {1{`RANDOM}};
  signs_2_11 = _RAND_259[0:0];
  _RAND_260 = {1{`RANDOM}};
  signs_2_12 = _RAND_260[0:0];
  _RAND_261 = {1{`RANDOM}};
  signs_2_13 = _RAND_261[0:0];
  _RAND_262 = {1{`RANDOM}};
  signs_2_14 = _RAND_262[0:0];
  _RAND_263 = {1{`RANDOM}};
  signs_2_15 = _RAND_263[0:0];
  _RAND_264 = {1{`RANDOM}};
  two_complement_2_0 = _RAND_264[12:0];
  _RAND_265 = {1{`RANDOM}};
  two_complement_2_1 = _RAND_265[12:0];
  _RAND_266 = {1{`RANDOM}};
  two_complement_2_2 = _RAND_266[12:0];
  _RAND_267 = {1{`RANDOM}};
  two_complement_2_3 = _RAND_267[12:0];
  _RAND_268 = {1{`RANDOM}};
  two_complement_2_4 = _RAND_268[12:0];
  _RAND_269 = {1{`RANDOM}};
  two_complement_2_5 = _RAND_269[12:0];
  _RAND_270 = {1{`RANDOM}};
  two_complement_2_6 = _RAND_270[12:0];
  _RAND_271 = {1{`RANDOM}};
  two_complement_2_7 = _RAND_271[12:0];
  _RAND_272 = {1{`RANDOM}};
  two_complement_2_8 = _RAND_272[12:0];
  _RAND_273 = {1{`RANDOM}};
  two_complement_2_9 = _RAND_273[12:0];
  _RAND_274 = {1{`RANDOM}};
  two_complement_2_10 = _RAND_274[12:0];
  _RAND_275 = {1{`RANDOM}};
  two_complement_2_11 = _RAND_275[12:0];
  _RAND_276 = {1{`RANDOM}};
  two_complement_2_12 = _RAND_276[12:0];
  _RAND_277 = {1{`RANDOM}};
  two_complement_2_13 = _RAND_277[12:0];
  _RAND_278 = {1{`RANDOM}};
  two_complement_2_14 = _RAND_278[12:0];
  _RAND_279 = {1{`RANDOM}};
  two_complement_2_15 = _RAND_279[12:0];
  _RAND_280 = {1{`RANDOM}};
  two_complement_buffer_2_0 = _RAND_280[12:0];
  _RAND_281 = {1{`RANDOM}};
  two_complement_buffer_2_1 = _RAND_281[12:0];
  _RAND_282 = {1{`RANDOM}};
  two_complement_buffer_2_2 = _RAND_282[12:0];
  _RAND_283 = {1{`RANDOM}};
  two_complement_buffer_2_3 = _RAND_283[12:0];
  _RAND_284 = {1{`RANDOM}};
  two_complement_buffer_2_4 = _RAND_284[12:0];
  _RAND_285 = {1{`RANDOM}};
  two_complement_buffer_2_5 = _RAND_285[12:0];
  _RAND_286 = {1{`RANDOM}};
  two_complement_buffer_2_6 = _RAND_286[12:0];
  _RAND_287 = {1{`RANDOM}};
  two_complement_buffer_2_7 = _RAND_287[12:0];
  _RAND_288 = {1{`RANDOM}};
  two_complement_buffer_2_8 = _RAND_288[12:0];
  _RAND_289 = {1{`RANDOM}};
  two_complement_buffer_2_9 = _RAND_289[12:0];
  _RAND_290 = {1{`RANDOM}};
  two_complement_buffer_2_10 = _RAND_290[12:0];
  _RAND_291 = {1{`RANDOM}};
  two_complement_buffer_2_11 = _RAND_291[12:0];
  _RAND_292 = {1{`RANDOM}};
  two_complement_buffer_2_12 = _RAND_292[12:0];
  _RAND_293 = {1{`RANDOM}};
  two_complement_buffer_2_13 = _RAND_293[12:0];
  _RAND_294 = {1{`RANDOM}};
  two_complement_buffer_2_14 = _RAND_294[12:0];
  _RAND_295 = {1{`RANDOM}};
  two_complement_buffer_2_15 = _RAND_295[12:0];
  _RAND_296 = {1{`RANDOM}};
  multiplierReg_32 = _RAND_296[5:0];
  _RAND_297 = {1{`RANDOM}};
  multiplierReg2_32 = _RAND_297[5:0];
  _RAND_298 = {1{`RANDOM}};
  signReg_32 = _RAND_298[0:0];
  _RAND_299 = {1{`RANDOM}};
  multiplierReg_33 = _RAND_299[5:0];
  _RAND_300 = {1{`RANDOM}};
  multiplierReg2_33 = _RAND_300[5:0];
  _RAND_301 = {1{`RANDOM}};
  signReg_33 = _RAND_301[0:0];
  _RAND_302 = {1{`RANDOM}};
  multiplierReg_34 = _RAND_302[5:0];
  _RAND_303 = {1{`RANDOM}};
  multiplierReg2_34 = _RAND_303[5:0];
  _RAND_304 = {1{`RANDOM}};
  signReg_34 = _RAND_304[0:0];
  _RAND_305 = {1{`RANDOM}};
  multiplierReg_35 = _RAND_305[5:0];
  _RAND_306 = {1{`RANDOM}};
  multiplierReg2_35 = _RAND_306[5:0];
  _RAND_307 = {1{`RANDOM}};
  signReg_35 = _RAND_307[0:0];
  _RAND_308 = {1{`RANDOM}};
  multiplierReg_36 = _RAND_308[5:0];
  _RAND_309 = {1{`RANDOM}};
  multiplierReg2_36 = _RAND_309[5:0];
  _RAND_310 = {1{`RANDOM}};
  signReg_36 = _RAND_310[0:0];
  _RAND_311 = {1{`RANDOM}};
  multiplierReg_37 = _RAND_311[5:0];
  _RAND_312 = {1{`RANDOM}};
  multiplierReg2_37 = _RAND_312[5:0];
  _RAND_313 = {1{`RANDOM}};
  signReg_37 = _RAND_313[0:0];
  _RAND_314 = {1{`RANDOM}};
  multiplierReg_38 = _RAND_314[5:0];
  _RAND_315 = {1{`RANDOM}};
  multiplierReg2_38 = _RAND_315[5:0];
  _RAND_316 = {1{`RANDOM}};
  signReg_38 = _RAND_316[0:0];
  _RAND_317 = {1{`RANDOM}};
  multiplierReg_39 = _RAND_317[5:0];
  _RAND_318 = {1{`RANDOM}};
  multiplierReg2_39 = _RAND_318[5:0];
  _RAND_319 = {1{`RANDOM}};
  signReg_39 = _RAND_319[0:0];
  _RAND_320 = {1{`RANDOM}};
  multiplierReg_40 = _RAND_320[5:0];
  _RAND_321 = {1{`RANDOM}};
  multiplierReg2_40 = _RAND_321[5:0];
  _RAND_322 = {1{`RANDOM}};
  signReg_40 = _RAND_322[0:0];
  _RAND_323 = {1{`RANDOM}};
  multiplierReg_41 = _RAND_323[5:0];
  _RAND_324 = {1{`RANDOM}};
  multiplierReg2_41 = _RAND_324[5:0];
  _RAND_325 = {1{`RANDOM}};
  signReg_41 = _RAND_325[0:0];
  _RAND_326 = {1{`RANDOM}};
  multiplierReg_42 = _RAND_326[5:0];
  _RAND_327 = {1{`RANDOM}};
  multiplierReg2_42 = _RAND_327[5:0];
  _RAND_328 = {1{`RANDOM}};
  signReg_42 = _RAND_328[0:0];
  _RAND_329 = {1{`RANDOM}};
  multiplierReg_43 = _RAND_329[5:0];
  _RAND_330 = {1{`RANDOM}};
  multiplierReg2_43 = _RAND_330[5:0];
  _RAND_331 = {1{`RANDOM}};
  signReg_43 = _RAND_331[0:0];
  _RAND_332 = {1{`RANDOM}};
  multiplierReg_44 = _RAND_332[5:0];
  _RAND_333 = {1{`RANDOM}};
  multiplierReg2_44 = _RAND_333[5:0];
  _RAND_334 = {1{`RANDOM}};
  signReg_44 = _RAND_334[0:0];
  _RAND_335 = {1{`RANDOM}};
  multiplierReg_45 = _RAND_335[5:0];
  _RAND_336 = {1{`RANDOM}};
  multiplierReg2_45 = _RAND_336[5:0];
  _RAND_337 = {1{`RANDOM}};
  signReg_45 = _RAND_337[0:0];
  _RAND_338 = {1{`RANDOM}};
  multiplierReg_46 = _RAND_338[5:0];
  _RAND_339 = {1{`RANDOM}};
  multiplierReg2_46 = _RAND_339[5:0];
  _RAND_340 = {1{`RANDOM}};
  signReg_46 = _RAND_340[0:0];
  _RAND_341 = {1{`RANDOM}};
  multiplierReg_47 = _RAND_341[5:0];
  _RAND_342 = {1{`RANDOM}};
  multiplierReg2_47 = _RAND_342[5:0];
  _RAND_343 = {1{`RANDOM}};
  signReg_47 = _RAND_343[0:0];
  _RAND_344 = {1{`RANDOM}};
  dotProductRegs_3_0 = _RAND_344[11:0];
  _RAND_345 = {1{`RANDOM}};
  dotProductRegs_3_1 = _RAND_345[11:0];
  _RAND_346 = {1{`RANDOM}};
  dotProductRegs_3_2 = _RAND_346[11:0];
  _RAND_347 = {1{`RANDOM}};
  dotProductRegs_3_3 = _RAND_347[11:0];
  _RAND_348 = {1{`RANDOM}};
  dotProductRegs_3_4 = _RAND_348[11:0];
  _RAND_349 = {1{`RANDOM}};
  dotProductRegs_3_5 = _RAND_349[11:0];
  _RAND_350 = {1{`RANDOM}};
  dotProductRegs_3_6 = _RAND_350[11:0];
  _RAND_351 = {1{`RANDOM}};
  dotProductRegs_3_7 = _RAND_351[11:0];
  _RAND_352 = {1{`RANDOM}};
  dotProductRegs_3_8 = _RAND_352[11:0];
  _RAND_353 = {1{`RANDOM}};
  dotProductRegs_3_9 = _RAND_353[11:0];
  _RAND_354 = {1{`RANDOM}};
  dotProductRegs_3_10 = _RAND_354[11:0];
  _RAND_355 = {1{`RANDOM}};
  dotProductRegs_3_11 = _RAND_355[11:0];
  _RAND_356 = {1{`RANDOM}};
  dotProductRegs_3_12 = _RAND_356[11:0];
  _RAND_357 = {1{`RANDOM}};
  dotProductRegs_3_13 = _RAND_357[11:0];
  _RAND_358 = {1{`RANDOM}};
  dotProductRegs_3_14 = _RAND_358[11:0];
  _RAND_359 = {1{`RANDOM}};
  dotProductRegs_3_15 = _RAND_359[11:0];
  _RAND_360 = {1{`RANDOM}};
  signs_3_0 = _RAND_360[0:0];
  _RAND_361 = {1{`RANDOM}};
  signs_3_1 = _RAND_361[0:0];
  _RAND_362 = {1{`RANDOM}};
  signs_3_2 = _RAND_362[0:0];
  _RAND_363 = {1{`RANDOM}};
  signs_3_3 = _RAND_363[0:0];
  _RAND_364 = {1{`RANDOM}};
  signs_3_4 = _RAND_364[0:0];
  _RAND_365 = {1{`RANDOM}};
  signs_3_5 = _RAND_365[0:0];
  _RAND_366 = {1{`RANDOM}};
  signs_3_6 = _RAND_366[0:0];
  _RAND_367 = {1{`RANDOM}};
  signs_3_7 = _RAND_367[0:0];
  _RAND_368 = {1{`RANDOM}};
  signs_3_8 = _RAND_368[0:0];
  _RAND_369 = {1{`RANDOM}};
  signs_3_9 = _RAND_369[0:0];
  _RAND_370 = {1{`RANDOM}};
  signs_3_10 = _RAND_370[0:0];
  _RAND_371 = {1{`RANDOM}};
  signs_3_11 = _RAND_371[0:0];
  _RAND_372 = {1{`RANDOM}};
  signs_3_12 = _RAND_372[0:0];
  _RAND_373 = {1{`RANDOM}};
  signs_3_13 = _RAND_373[0:0];
  _RAND_374 = {1{`RANDOM}};
  signs_3_14 = _RAND_374[0:0];
  _RAND_375 = {1{`RANDOM}};
  signs_3_15 = _RAND_375[0:0];
  _RAND_376 = {1{`RANDOM}};
  two_complement_3_0 = _RAND_376[12:0];
  _RAND_377 = {1{`RANDOM}};
  two_complement_3_1 = _RAND_377[12:0];
  _RAND_378 = {1{`RANDOM}};
  two_complement_3_2 = _RAND_378[12:0];
  _RAND_379 = {1{`RANDOM}};
  two_complement_3_3 = _RAND_379[12:0];
  _RAND_380 = {1{`RANDOM}};
  two_complement_3_4 = _RAND_380[12:0];
  _RAND_381 = {1{`RANDOM}};
  two_complement_3_5 = _RAND_381[12:0];
  _RAND_382 = {1{`RANDOM}};
  two_complement_3_6 = _RAND_382[12:0];
  _RAND_383 = {1{`RANDOM}};
  two_complement_3_7 = _RAND_383[12:0];
  _RAND_384 = {1{`RANDOM}};
  two_complement_3_8 = _RAND_384[12:0];
  _RAND_385 = {1{`RANDOM}};
  two_complement_3_9 = _RAND_385[12:0];
  _RAND_386 = {1{`RANDOM}};
  two_complement_3_10 = _RAND_386[12:0];
  _RAND_387 = {1{`RANDOM}};
  two_complement_3_11 = _RAND_387[12:0];
  _RAND_388 = {1{`RANDOM}};
  two_complement_3_12 = _RAND_388[12:0];
  _RAND_389 = {1{`RANDOM}};
  two_complement_3_13 = _RAND_389[12:0];
  _RAND_390 = {1{`RANDOM}};
  two_complement_3_14 = _RAND_390[12:0];
  _RAND_391 = {1{`RANDOM}};
  two_complement_3_15 = _RAND_391[12:0];
  _RAND_392 = {1{`RANDOM}};
  two_complement_buffer_3_0 = _RAND_392[12:0];
  _RAND_393 = {1{`RANDOM}};
  two_complement_buffer_3_1 = _RAND_393[12:0];
  _RAND_394 = {1{`RANDOM}};
  two_complement_buffer_3_2 = _RAND_394[12:0];
  _RAND_395 = {1{`RANDOM}};
  two_complement_buffer_3_3 = _RAND_395[12:0];
  _RAND_396 = {1{`RANDOM}};
  two_complement_buffer_3_4 = _RAND_396[12:0];
  _RAND_397 = {1{`RANDOM}};
  two_complement_buffer_3_5 = _RAND_397[12:0];
  _RAND_398 = {1{`RANDOM}};
  two_complement_buffer_3_6 = _RAND_398[12:0];
  _RAND_399 = {1{`RANDOM}};
  two_complement_buffer_3_7 = _RAND_399[12:0];
  _RAND_400 = {1{`RANDOM}};
  two_complement_buffer_3_8 = _RAND_400[12:0];
  _RAND_401 = {1{`RANDOM}};
  two_complement_buffer_3_9 = _RAND_401[12:0];
  _RAND_402 = {1{`RANDOM}};
  two_complement_buffer_3_10 = _RAND_402[12:0];
  _RAND_403 = {1{`RANDOM}};
  two_complement_buffer_3_11 = _RAND_403[12:0];
  _RAND_404 = {1{`RANDOM}};
  two_complement_buffer_3_12 = _RAND_404[12:0];
  _RAND_405 = {1{`RANDOM}};
  two_complement_buffer_3_13 = _RAND_405[12:0];
  _RAND_406 = {1{`RANDOM}};
  two_complement_buffer_3_14 = _RAND_406[12:0];
  _RAND_407 = {1{`RANDOM}};
  two_complement_buffer_3_15 = _RAND_407[12:0];
  _RAND_408 = {1{`RANDOM}};
  multiplierReg_48 = _RAND_408[5:0];
  _RAND_409 = {1{`RANDOM}};
  multiplierReg2_48 = _RAND_409[5:0];
  _RAND_410 = {1{`RANDOM}};
  signReg_48 = _RAND_410[0:0];
  _RAND_411 = {1{`RANDOM}};
  multiplierReg_49 = _RAND_411[5:0];
  _RAND_412 = {1{`RANDOM}};
  multiplierReg2_49 = _RAND_412[5:0];
  _RAND_413 = {1{`RANDOM}};
  signReg_49 = _RAND_413[0:0];
  _RAND_414 = {1{`RANDOM}};
  multiplierReg_50 = _RAND_414[5:0];
  _RAND_415 = {1{`RANDOM}};
  multiplierReg2_50 = _RAND_415[5:0];
  _RAND_416 = {1{`RANDOM}};
  signReg_50 = _RAND_416[0:0];
  _RAND_417 = {1{`RANDOM}};
  multiplierReg_51 = _RAND_417[5:0];
  _RAND_418 = {1{`RANDOM}};
  multiplierReg2_51 = _RAND_418[5:0];
  _RAND_419 = {1{`RANDOM}};
  signReg_51 = _RAND_419[0:0];
  _RAND_420 = {1{`RANDOM}};
  multiplierReg_52 = _RAND_420[5:0];
  _RAND_421 = {1{`RANDOM}};
  multiplierReg2_52 = _RAND_421[5:0];
  _RAND_422 = {1{`RANDOM}};
  signReg_52 = _RAND_422[0:0];
  _RAND_423 = {1{`RANDOM}};
  multiplierReg_53 = _RAND_423[5:0];
  _RAND_424 = {1{`RANDOM}};
  multiplierReg2_53 = _RAND_424[5:0];
  _RAND_425 = {1{`RANDOM}};
  signReg_53 = _RAND_425[0:0];
  _RAND_426 = {1{`RANDOM}};
  multiplierReg_54 = _RAND_426[5:0];
  _RAND_427 = {1{`RANDOM}};
  multiplierReg2_54 = _RAND_427[5:0];
  _RAND_428 = {1{`RANDOM}};
  signReg_54 = _RAND_428[0:0];
  _RAND_429 = {1{`RANDOM}};
  multiplierReg_55 = _RAND_429[5:0];
  _RAND_430 = {1{`RANDOM}};
  multiplierReg2_55 = _RAND_430[5:0];
  _RAND_431 = {1{`RANDOM}};
  signReg_55 = _RAND_431[0:0];
  _RAND_432 = {1{`RANDOM}};
  multiplierReg_56 = _RAND_432[5:0];
  _RAND_433 = {1{`RANDOM}};
  multiplierReg2_56 = _RAND_433[5:0];
  _RAND_434 = {1{`RANDOM}};
  signReg_56 = _RAND_434[0:0];
  _RAND_435 = {1{`RANDOM}};
  multiplierReg_57 = _RAND_435[5:0];
  _RAND_436 = {1{`RANDOM}};
  multiplierReg2_57 = _RAND_436[5:0];
  _RAND_437 = {1{`RANDOM}};
  signReg_57 = _RAND_437[0:0];
  _RAND_438 = {1{`RANDOM}};
  multiplierReg_58 = _RAND_438[5:0];
  _RAND_439 = {1{`RANDOM}};
  multiplierReg2_58 = _RAND_439[5:0];
  _RAND_440 = {1{`RANDOM}};
  signReg_58 = _RAND_440[0:0];
  _RAND_441 = {1{`RANDOM}};
  multiplierReg_59 = _RAND_441[5:0];
  _RAND_442 = {1{`RANDOM}};
  multiplierReg2_59 = _RAND_442[5:0];
  _RAND_443 = {1{`RANDOM}};
  signReg_59 = _RAND_443[0:0];
  _RAND_444 = {1{`RANDOM}};
  multiplierReg_60 = _RAND_444[5:0];
  _RAND_445 = {1{`RANDOM}};
  multiplierReg2_60 = _RAND_445[5:0];
  _RAND_446 = {1{`RANDOM}};
  signReg_60 = _RAND_446[0:0];
  _RAND_447 = {1{`RANDOM}};
  multiplierReg_61 = _RAND_447[5:0];
  _RAND_448 = {1{`RANDOM}};
  multiplierReg2_61 = _RAND_448[5:0];
  _RAND_449 = {1{`RANDOM}};
  signReg_61 = _RAND_449[0:0];
  _RAND_450 = {1{`RANDOM}};
  multiplierReg_62 = _RAND_450[5:0];
  _RAND_451 = {1{`RANDOM}};
  multiplierReg2_62 = _RAND_451[5:0];
  _RAND_452 = {1{`RANDOM}};
  signReg_62 = _RAND_452[0:0];
  _RAND_453 = {1{`RANDOM}};
  multiplierReg_63 = _RAND_453[5:0];
  _RAND_454 = {1{`RANDOM}};
  multiplierReg2_63 = _RAND_454[5:0];
  _RAND_455 = {1{`RANDOM}};
  signReg_63 = _RAND_455[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
