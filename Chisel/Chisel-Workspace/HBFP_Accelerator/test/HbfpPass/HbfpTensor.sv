module adderTree2(
  input         clock,
  input         reset,
  input  [27:0] io_sign_man_0,
  input  [27:0] io_sign_man_1,
  input  [27:0] io_sign_man_2,
  input  [27:0] io_sign_man_3,
  input  [8:0]  io_exps_0,
  input  [8:0]  io_exps_1,
  input  [8:0]  io_exps_2,
  input  [8:0]  io_exps_3,
  input         io_control_signal,
  input         io_control_signal2,
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
  reg [8:0] exp_buffer_0; // @[block_division.scala 70:60]
  reg [8:0] exp_buffer_1; // @[block_division.scala 70:60]
  reg [8:0] exp_buffer_2; // @[block_division.scala 70:60]
  reg [8:0] exp_buffer_3; // @[block_division.scala 70:60]
  reg [30:0] man_buffer_two_complement_0; // @[block_division.scala 72:12]
  reg [30:0] man_buffer_two_complement_1; // @[block_division.scala 72:12]
  reg [30:0] man_buffer_two_complement_2; // @[block_division.scala 72:12]
  reg [30:0] man_buffer_two_complement_3; // @[block_division.scala 72:12]
  reg [9:0] v; // @[block_division.scala 88:18]
  reg  enable; // @[block_division.scala 89:19]
  wire  _GEN_8 = io_control_signal2 | enable; // @[block_division.scala 90:36 91:12 89:19]
  wire [9:0] _v_T_1 = v + 10'h1; // @[block_division.scala 99:16]
  wire  _exp_buffer_0_T = exp_buffer_0 > exp_buffer_1; // @[block_division.scala 103:31]
  wire [8:0] _exp_difference_T_2 = exp_buffer_0 - exp_buffer_1; // @[block_division.scala 109:31]
  wire [8:0] _exp_difference_T_4 = exp_buffer_1 - exp_buffer_0; // @[block_division.scala 110:35]
  wire [8:0] exp_difference = _exp_buffer_0_T ? _exp_difference_T_2 : _exp_difference_T_4; // @[block_division.scala 107:35]
  wire [30:0] _man_buffer_two_complement_0_T_4 = ~man_buffer_two_complement_1; // @[block_division.scala 115:21]
  wire [30:0] _man_buffer_two_complement_0_T_7 = $signed(_man_buffer_two_complement_0_T_4) + 31'sh1; // @[block_division.scala 115:61]
  wire [30:0] _man_buffer_two_complement_0_T_8 = $signed(_man_buffer_two_complement_0_T_7) >>> exp_difference; // @[block_division.scala 115:68]
  wire [30:0] _man_buffer_two_complement_0_T_11 = 31'sh0 - $signed(_man_buffer_two_complement_0_T_8); // @[block_division.scala 115:17]
  wire [30:0] _man_buffer_two_complement_0_T_12 = $signed(man_buffer_two_complement_1) >>> exp_difference; // @[block_division.scala 116:51]
  wire [30:0] _man_buffer_two_complement_0_T_13 = man_buffer_two_complement_1[30] ? $signed(
    _man_buffer_two_complement_0_T_11) : $signed(_man_buffer_two_complement_0_T_12); // @[block_division.scala 114:51]
  wire [30:0] _man_buffer_two_complement_0_T_16 = $signed(man_buffer_two_complement_0) + $signed(
    _man_buffer_two_complement_0_T_13); // @[block_division.scala 114:46]
  wire [30:0] _man_buffer_two_complement_0_T_20 = ~man_buffer_two_complement_0; // @[block_division.scala 119:21]
  wire [30:0] _man_buffer_two_complement_0_T_23 = $signed(_man_buffer_two_complement_0_T_20) + 31'sh1; // @[block_division.scala 119:57]
  wire [30:0] _man_buffer_two_complement_0_T_24 = $signed(_man_buffer_two_complement_0_T_23) >>> exp_difference; // @[block_division.scala 119:64]
  wire [30:0] _man_buffer_two_complement_0_T_27 = 31'sh0 - $signed(_man_buffer_two_complement_0_T_24); // @[block_division.scala 119:17]
  wire [30:0] _man_buffer_two_complement_0_T_28 = $signed(man_buffer_two_complement_0) >>> exp_difference; // @[block_division.scala 120:47]
  wire [30:0] _man_buffer_two_complement_0_T_29 = man_buffer_two_complement_0[30] ? $signed(
    _man_buffer_two_complement_0_T_27) : $signed(_man_buffer_two_complement_0_T_28); // @[block_division.scala 118:55]
  wire [30:0] _man_buffer_two_complement_0_T_32 = $signed(man_buffer_two_complement_1) + $signed(
    _man_buffer_two_complement_0_T_29); // @[block_division.scala 118:50]
  wire  _exp_buffer_1_T = exp_buffer_2 > exp_buffer_3; // @[block_division.scala 103:31]
  wire [8:0] _exp_difference_T_7 = exp_buffer_2 - exp_buffer_3; // @[block_division.scala 109:31]
  wire [8:0] _exp_difference_T_9 = exp_buffer_3 - exp_buffer_2; // @[block_division.scala 110:35]
  wire [8:0] exp_difference_1 = _exp_buffer_1_T ? _exp_difference_T_7 : _exp_difference_T_9; // @[block_division.scala 107:35]
  wire [30:0] _man_buffer_two_complement_1_T_4 = ~man_buffer_two_complement_3; // @[block_division.scala 115:21]
  wire [30:0] _man_buffer_two_complement_1_T_7 = $signed(_man_buffer_two_complement_1_T_4) + 31'sh1; // @[block_division.scala 115:61]
  wire [30:0] _man_buffer_two_complement_1_T_8 = $signed(_man_buffer_two_complement_1_T_7) >>> exp_difference_1; // @[block_division.scala 115:68]
  wire [30:0] _man_buffer_two_complement_1_T_11 = 31'sh0 - $signed(_man_buffer_two_complement_1_T_8); // @[block_division.scala 115:17]
  wire [30:0] _man_buffer_two_complement_1_T_12 = $signed(man_buffer_two_complement_3) >>> exp_difference_1; // @[block_division.scala 116:51]
  wire [30:0] _man_buffer_two_complement_1_T_13 = man_buffer_two_complement_3[30] ? $signed(
    _man_buffer_two_complement_1_T_11) : $signed(_man_buffer_two_complement_1_T_12); // @[block_division.scala 114:51]
  wire [30:0] _man_buffer_two_complement_1_T_16 = $signed(man_buffer_two_complement_2) + $signed(
    _man_buffer_two_complement_1_T_13); // @[block_division.scala 114:46]
  wire [30:0] _man_buffer_two_complement_1_T_20 = ~man_buffer_two_complement_2; // @[block_division.scala 119:21]
  wire [30:0] _man_buffer_two_complement_1_T_23 = $signed(_man_buffer_two_complement_1_T_20) + 31'sh1; // @[block_division.scala 119:57]
  wire [30:0] _man_buffer_two_complement_1_T_24 = $signed(_man_buffer_two_complement_1_T_23) >>> exp_difference_1; // @[block_division.scala 119:64]
  wire [30:0] _man_buffer_two_complement_1_T_27 = 31'sh0 - $signed(_man_buffer_two_complement_1_T_24); // @[block_division.scala 119:17]
  wire [30:0] _man_buffer_two_complement_1_T_28 = $signed(man_buffer_two_complement_2) >>> exp_difference_1; // @[block_division.scala 120:47]
  wire [30:0] _man_buffer_two_complement_1_T_29 = man_buffer_two_complement_2[30] ? $signed(
    _man_buffer_two_complement_1_T_27) : $signed(_man_buffer_two_complement_1_T_28); // @[block_division.scala 118:55]
  wire [30:0] _man_buffer_two_complement_1_T_32 = $signed(man_buffer_two_complement_3) + $signed(
    _man_buffer_two_complement_1_T_29); // @[block_division.scala 118:50]
  reg [30:0] sign_man_hbfp; // @[block_division.scala 134:30]
  wire [30:0] _sign_man_hbfp_T_3 = {1'h0,man_buffer_two_complement_0[29:0]}; // @[block_division.scala 141:11]
  wire [30:0] _sign_man_hbfp_T_4 = ~_sign_man_hbfp_T_3; // @[block_division.scala 141:5]
  wire [30:0] _sign_man_hbfp_T_6 = _sign_man_hbfp_T_4 + 31'h1; // @[block_division.scala 144:16]
  reg [7:0] right_shift; // @[block_division.scala 148:28]
  reg [7:0] actual_shift; // @[block_division.scala 149:29]
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
  wire [24:0] buf_ = {1'h0,_buf_T_40,_buf_T_70}; // @[block_division.scala 150:17]
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
  wire [7:0] _actual_shift_T_1 = 8'h1d - right_shift; // @[block_division.scala 156:75]
  wire [7:0] _actual_shift_T_3 = _actual_shift_T_1 - 8'h5; // @[block_division.scala 156:89]
  wire [30:0] man_out_shifted = sign_man_hbfp >> actual_shift; // @[block_division.scala 158:39]
  wire [8:0] _GEN_24 = {{1'd0}, actual_shift}; // @[block_division.scala 160:31]
  wire [9:0] exp_actual = exp_buffer_0 + _GEN_24; // @[block_division.scala 160:31]
  wire [8:0] _io_result_tree_T_2 = {man_buffer_two_complement_0[30],exp_actual[9:2]}; // @[block_division.scala 164:5]
  assign io_result_tree = {_io_result_tree_T_2,man_out_shifted[5:0]}; // @[block_division.scala 164:27]
  always @(posedge clock) begin
    if (reset) begin // @[block_division.scala 70:60]
      exp_buffer_0 <= 9'h0; // @[block_division.scala 70:60]
    end else if (io_control_signal & enable) begin // @[block_division.scala 95:47]
      if (!(_exp_buffer_0_T)) begin // @[block_division.scala 102:33]
        exp_buffer_0 <= exp_buffer_1;
      end
    end else if (~io_control_signal) begin // @[block_division.scala 77:34]
      exp_buffer_0 <= io_exps_0; // @[block_division.scala 81:21]
    end
    if (reset) begin // @[block_division.scala 70:60]
      exp_buffer_1 <= 9'h0; // @[block_division.scala 70:60]
    end else if (io_control_signal & enable) begin // @[block_division.scala 95:47]
      if (_exp_buffer_1_T) begin // @[block_division.scala 102:33]
        exp_buffer_1 <= exp_buffer_2;
      end else begin
        exp_buffer_1 <= exp_buffer_3;
      end
    end else if (~io_control_signal) begin // @[block_division.scala 77:34]
      exp_buffer_1 <= io_exps_1; // @[block_division.scala 81:21]
    end
    if (reset) begin // @[block_division.scala 70:60]
      exp_buffer_2 <= 9'h0; // @[block_division.scala 70:60]
    end else if (~io_control_signal) begin // @[block_division.scala 77:34]
      exp_buffer_2 <= io_exps_2; // @[block_division.scala 81:21]
    end
    if (reset) begin // @[block_division.scala 70:60]
      exp_buffer_3 <= 9'h0; // @[block_division.scala 70:60]
    end else if (~io_control_signal) begin // @[block_division.scala 77:34]
      exp_buffer_3 <= io_exps_3; // @[block_division.scala 81:21]
    end
    if (reset) begin // @[block_division.scala 72:12]
      man_buffer_two_complement_0 <= 31'sh0; // @[block_division.scala 72:12]
    end else if (io_control_signal & enable) begin // @[block_division.scala 95:47]
      if (_exp_buffer_0_T) begin // @[block_division.scala 112:46]
        man_buffer_two_complement_0 <= _man_buffer_two_complement_0_T_16;
      end else begin
        man_buffer_two_complement_0 <= _man_buffer_two_complement_0_T_32;
      end
    end else if (~io_control_signal) begin // @[block_division.scala 77:34]
      man_buffer_two_complement_0 <= {{3{io_sign_man_0[27]}},io_sign_man_0}; // @[block_division.scala 82:36]
    end
    if (reset) begin // @[block_division.scala 72:12]
      man_buffer_two_complement_1 <= 31'sh0; // @[block_division.scala 72:12]
    end else if (io_control_signal & enable) begin // @[block_division.scala 95:47]
      if (_exp_buffer_1_T) begin // @[block_division.scala 112:46]
        man_buffer_two_complement_1 <= _man_buffer_two_complement_1_T_16;
      end else begin
        man_buffer_two_complement_1 <= _man_buffer_two_complement_1_T_32;
      end
    end else if (~io_control_signal) begin // @[block_division.scala 77:34]
      man_buffer_two_complement_1 <= {{3{io_sign_man_1[27]}},io_sign_man_1}; // @[block_division.scala 82:36]
    end
    if (reset) begin // @[block_division.scala 72:12]
      man_buffer_two_complement_2 <= 31'sh0; // @[block_division.scala 72:12]
    end else if (~io_control_signal) begin // @[block_division.scala 77:34]
      man_buffer_two_complement_2 <= {{3{io_sign_man_2[27]}},io_sign_man_2}; // @[block_division.scala 82:36]
    end
    if (reset) begin // @[block_division.scala 72:12]
      man_buffer_two_complement_3 <= 31'sh0; // @[block_division.scala 72:12]
    end else if (~io_control_signal) begin // @[block_division.scala 77:34]
      man_buffer_two_complement_3 <= {{3{io_sign_man_3[27]}},io_sign_man_3}; // @[block_division.scala 82:36]
    end
    if (reset) begin // @[block_division.scala 88:18]
      v <= 10'h0; // @[block_division.scala 88:18]
    end else if (io_control_signal & enable) begin // @[block_division.scala 95:47]
      v <= _v_T_1; // @[block_division.scala 99:11]
    end
    if (io_control_signal & enable) begin // @[block_division.scala 95:47]
      if (v == 10'h1) begin // @[block_division.scala 127:64]
        enable <= 1'h0; // @[block_division.scala 128:16]
      end else if (v == 10'h1) begin // @[block_division.scala 127:64]
        enable <= 1'h0; // @[block_division.scala 128:16]
      end else begin
        enable <= _GEN_8;
      end
    end else begin
      enable <= _GEN_8;
    end
    if (reset) begin // @[block_division.scala 134:30]
      sign_man_hbfp <= 31'h0; // @[block_division.scala 134:30]
    end else if (man_buffer_two_complement_0[30]) begin // @[block_division.scala 137:23]
      sign_man_hbfp <= _sign_man_hbfp_T_6;
    end else begin
      sign_man_hbfp <= man_buffer_two_complement_0;
    end
    if (reset) begin // @[block_division.scala 148:28]
      right_shift <= 8'h0; // @[block_division.scala 148:28]
    end else begin
      right_shift <= {{3'd0}, _right_shift_T_48}; // @[block_division.scala 154:15]
    end
    if (reset) begin // @[block_division.scala 149:29]
      actual_shift <= 8'h0; // @[block_division.scala 149:29]
    end else begin
      actual_shift <= _actual_shift_T_3; // @[block_division.scala 156:16]
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
module HbfpTensor(
  input         clock,
  input         reset,
  input  [5:0]  io_man_a_0,
  input  [5:0]  io_man_a_1,
  input  [5:0]  io_man_a_2,
  input  [5:0]  io_man_a_3,
  input  [5:0]  io_man_a_4,
  input  [5:0]  io_man_a_5,
  input  [5:0]  io_man_a_6,
  input  [5:0]  io_man_a_7,
  input  [5:0]  io_man_a_8,
  input  [5:0]  io_man_a_9,
  input  [5:0]  io_man_a_10,
  input  [5:0]  io_man_a_11,
  input  [5:0]  io_man_a_12,
  input  [5:0]  io_man_a_13,
  input  [5:0]  io_man_a_14,
  input  [5:0]  io_man_a_15,
  input  [5:0]  io_man_a_16,
  input  [5:0]  io_man_a_17,
  input  [5:0]  io_man_a_18,
  input  [5:0]  io_man_a_19,
  input  [5:0]  io_man_a_20,
  input  [5:0]  io_man_a_21,
  input  [5:0]  io_man_a_22,
  input  [5:0]  io_man_a_23,
  input  [5:0]  io_man_a_24,
  input  [5:0]  io_man_a_25,
  input  [5:0]  io_man_a_26,
  input  [5:0]  io_man_a_27,
  input  [5:0]  io_man_a_28,
  input  [5:0]  io_man_a_29,
  input  [5:0]  io_man_a_30,
  input  [5:0]  io_man_a_31,
  input  [5:0]  io_man_a_32,
  input  [5:0]  io_man_a_33,
  input  [5:0]  io_man_a_34,
  input  [5:0]  io_man_a_35,
  input  [5:0]  io_man_a_36,
  input  [5:0]  io_man_a_37,
  input  [5:0]  io_man_a_38,
  input  [5:0]  io_man_a_39,
  input  [5:0]  io_man_a_40,
  input  [5:0]  io_man_a_41,
  input  [5:0]  io_man_a_42,
  input  [5:0]  io_man_a_43,
  input  [5:0]  io_man_a_44,
  input  [5:0]  io_man_a_45,
  input  [5:0]  io_man_a_46,
  input  [5:0]  io_man_a_47,
  input  [5:0]  io_man_a_48,
  input  [5:0]  io_man_a_49,
  input  [5:0]  io_man_a_50,
  input  [5:0]  io_man_a_51,
  input  [5:0]  io_man_a_52,
  input  [5:0]  io_man_a_53,
  input  [5:0]  io_man_a_54,
  input  [5:0]  io_man_a_55,
  input  [5:0]  io_man_a_56,
  input  [5:0]  io_man_a_57,
  input  [5:0]  io_man_a_58,
  input  [5:0]  io_man_a_59,
  input  [5:0]  io_man_a_60,
  input  [5:0]  io_man_a_61,
  input  [5:0]  io_man_a_62,
  input  [5:0]  io_man_a_63,
  input  [5:0]  io_man_b_0,
  input  [5:0]  io_man_b_1,
  input  [5:0]  io_man_b_2,
  input  [5:0]  io_man_b_3,
  input  [5:0]  io_man_b_4,
  input  [5:0]  io_man_b_5,
  input  [5:0]  io_man_b_6,
  input  [5:0]  io_man_b_7,
  input  [5:0]  io_man_b_8,
  input  [5:0]  io_man_b_9,
  input  [5:0]  io_man_b_10,
  input  [5:0]  io_man_b_11,
  input  [5:0]  io_man_b_12,
  input  [5:0]  io_man_b_13,
  input  [5:0]  io_man_b_14,
  input  [5:0]  io_man_b_15,
  input  [5:0]  io_man_b_16,
  input  [5:0]  io_man_b_17,
  input  [5:0]  io_man_b_18,
  input  [5:0]  io_man_b_19,
  input  [5:0]  io_man_b_20,
  input  [5:0]  io_man_b_21,
  input  [5:0]  io_man_b_22,
  input  [5:0]  io_man_b_23,
  input  [5:0]  io_man_b_24,
  input  [5:0]  io_man_b_25,
  input  [5:0]  io_man_b_26,
  input  [5:0]  io_man_b_27,
  input  [5:0]  io_man_b_28,
  input  [5:0]  io_man_b_29,
  input  [5:0]  io_man_b_30,
  input  [5:0]  io_man_b_31,
  input  [5:0]  io_man_b_32,
  input  [5:0]  io_man_b_33,
  input  [5:0]  io_man_b_34,
  input  [5:0]  io_man_b_35,
  input  [5:0]  io_man_b_36,
  input  [5:0]  io_man_b_37,
  input  [5:0]  io_man_b_38,
  input  [5:0]  io_man_b_39,
  input  [5:0]  io_man_b_40,
  input  [5:0]  io_man_b_41,
  input  [5:0]  io_man_b_42,
  input  [5:0]  io_man_b_43,
  input  [5:0]  io_man_b_44,
  input  [5:0]  io_man_b_45,
  input  [5:0]  io_man_b_46,
  input  [5:0]  io_man_b_47,
  input  [5:0]  io_man_b_48,
  input  [5:0]  io_man_b_49,
  input  [5:0]  io_man_b_50,
  input  [5:0]  io_man_b_51,
  input  [5:0]  io_man_b_52,
  input  [5:0]  io_man_b_53,
  input  [5:0]  io_man_b_54,
  input  [5:0]  io_man_b_55,
  input  [5:0]  io_man_b_56,
  input  [5:0]  io_man_b_57,
  input  [5:0]  io_man_b_58,
  input  [5:0]  io_man_b_59,
  input  [5:0]  io_man_b_60,
  input  [5:0]  io_man_b_61,
  input  [5:0]  io_man_b_62,
  input  [5:0]  io_man_b_63,
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
  input         io_sign_a_16,
  input         io_sign_a_17,
  input         io_sign_a_18,
  input         io_sign_a_19,
  input         io_sign_a_20,
  input         io_sign_a_21,
  input         io_sign_a_22,
  input         io_sign_a_23,
  input         io_sign_a_24,
  input         io_sign_a_25,
  input         io_sign_a_26,
  input         io_sign_a_27,
  input         io_sign_a_28,
  input         io_sign_a_29,
  input         io_sign_a_30,
  input         io_sign_a_31,
  input         io_sign_a_32,
  input         io_sign_a_33,
  input         io_sign_a_34,
  input         io_sign_a_35,
  input         io_sign_a_36,
  input         io_sign_a_37,
  input         io_sign_a_38,
  input         io_sign_a_39,
  input         io_sign_a_40,
  input         io_sign_a_41,
  input         io_sign_a_42,
  input         io_sign_a_43,
  input         io_sign_a_44,
  input         io_sign_a_45,
  input         io_sign_a_46,
  input         io_sign_a_47,
  input         io_sign_a_48,
  input         io_sign_a_49,
  input         io_sign_a_50,
  input         io_sign_a_51,
  input         io_sign_a_52,
  input         io_sign_a_53,
  input         io_sign_a_54,
  input         io_sign_a_55,
  input         io_sign_a_56,
  input         io_sign_a_57,
  input         io_sign_a_58,
  input         io_sign_a_59,
  input         io_sign_a_60,
  input         io_sign_a_61,
  input         io_sign_a_62,
  input         io_sign_a_63,
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
  input         io_sign_b_16,
  input         io_sign_b_17,
  input         io_sign_b_18,
  input         io_sign_b_19,
  input         io_sign_b_20,
  input         io_sign_b_21,
  input         io_sign_b_22,
  input         io_sign_b_23,
  input         io_sign_b_24,
  input         io_sign_b_25,
  input         io_sign_b_26,
  input         io_sign_b_27,
  input         io_sign_b_28,
  input         io_sign_b_29,
  input         io_sign_b_30,
  input         io_sign_b_31,
  input         io_sign_b_32,
  input         io_sign_b_33,
  input         io_sign_b_34,
  input         io_sign_b_35,
  input         io_sign_b_36,
  input         io_sign_b_37,
  input         io_sign_b_38,
  input         io_sign_b_39,
  input         io_sign_b_40,
  input         io_sign_b_41,
  input         io_sign_b_42,
  input         io_sign_b_43,
  input         io_sign_b_44,
  input         io_sign_b_45,
  input         io_sign_b_46,
  input         io_sign_b_47,
  input         io_sign_b_48,
  input         io_sign_b_49,
  input         io_sign_b_50,
  input         io_sign_b_51,
  input         io_sign_b_52,
  input         io_sign_b_53,
  input         io_sign_b_54,
  input         io_sign_b_55,
  input         io_sign_b_56,
  input         io_sign_b_57,
  input         io_sign_b_58,
  input         io_sign_b_59,
  input         io_sign_b_60,
  input         io_sign_b_61,
  input         io_sign_b_62,
  input         io_sign_b_63,
  input  [7:0]  io_exp_a_0,
  input  [7:0]  io_exp_a_1,
  input  [7:0]  io_exp_a_2,
  input  [7:0]  io_exp_a_3,
  input  [7:0]  io_exp_b_0,
  input  [7:0]  io_exp_b_1,
  input  [7:0]  io_exp_b_2,
  input  [7:0]  io_exp_b_3,
  input         io_control,
  input         io_control2,
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
`endif // RANDOMIZE_REG_INIT
  wire  adderTreeInst_clock; // @[block_division.scala 50:29]
  wire  adderTreeInst_reset; // @[block_division.scala 50:29]
  wire [27:0] adderTreeInst_io_sign_man_0; // @[block_division.scala 50:29]
  wire [27:0] adderTreeInst_io_sign_man_1; // @[block_division.scala 50:29]
  wire [27:0] adderTreeInst_io_sign_man_2; // @[block_division.scala 50:29]
  wire [27:0] adderTreeInst_io_sign_man_3; // @[block_division.scala 50:29]
  wire [8:0] adderTreeInst_io_exps_0; // @[block_division.scala 50:29]
  wire [8:0] adderTreeInst_io_exps_1; // @[block_division.scala 50:29]
  wire [8:0] adderTreeInst_io_exps_2; // @[block_division.scala 50:29]
  wire [8:0] adderTreeInst_io_exps_3; // @[block_division.scala 50:29]
  wire  adderTreeInst_io_control_signal; // @[block_division.scala 50:29]
  wire  adderTreeInst_io_control_signal2; // @[block_division.scala 50:29]
  wire [14:0] adderTreeInst_io_result_tree; // @[block_division.scala 50:29]
  reg [8:0] exp_output_0; // @[block_division.scala 19:60]
  reg [8:0] exp_output_1; // @[block_division.scala 19:60]
  reg [8:0] exp_output_2; // @[block_division.scala 19:60]
  reg [8:0] exp_output_3; // @[block_division.scala 19:60]
  reg [27:0] acc_0; // @[block_division.scala 24:53]
  reg [27:0] acc_1; // @[block_division.scala 24:53]
  reg [27:0] acc_2; // @[block_division.scala 24:53]
  reg [27:0] acc_3; // @[block_division.scala 24:53]
  wire [8:0] _exp_output_0_T = io_exp_a_0 + io_exp_b_0; // @[block_division.scala 27:34]
  reg [11:0] dotProductRegs__0; // @[block_division.scala 28:29]
  reg [11:0] dotProductRegs__1; // @[block_division.scala 28:29]
  reg [11:0] dotProductRegs__2; // @[block_division.scala 28:29]
  reg [11:0] dotProductRegs__3; // @[block_division.scala 28:29]
  reg [11:0] dotProductRegs__4; // @[block_division.scala 28:29]
  reg [11:0] dotProductRegs__5; // @[block_division.scala 28:29]
  reg [11:0] dotProductRegs__6; // @[block_division.scala 28:29]
  reg [11:0] dotProductRegs__7; // @[block_division.scala 28:29]
  reg [11:0] dotProductRegs__8; // @[block_division.scala 28:29]
  reg [11:0] dotProductRegs__9; // @[block_division.scala 28:29]
  reg [11:0] dotProductRegs__10; // @[block_division.scala 28:29]
  reg [11:0] dotProductRegs__11; // @[block_division.scala 28:29]
  reg [11:0] dotProductRegs__12; // @[block_division.scala 28:29]
  reg [11:0] dotProductRegs__13; // @[block_division.scala 28:29]
  reg [11:0] dotProductRegs__14; // @[block_division.scala 28:29]
  reg [11:0] dotProductRegs__15; // @[block_division.scala 28:29]
  reg  signs__0; // @[block_division.scala 29:20]
  reg  signs__1; // @[block_division.scala 29:20]
  reg  signs__2; // @[block_division.scala 29:20]
  reg  signs__3; // @[block_division.scala 29:20]
  reg  signs__4; // @[block_division.scala 29:20]
  reg  signs__5; // @[block_division.scala 29:20]
  reg  signs__6; // @[block_division.scala 29:20]
  reg  signs__7; // @[block_division.scala 29:20]
  reg  signs__8; // @[block_division.scala 29:20]
  reg  signs__9; // @[block_division.scala 29:20]
  reg  signs__10; // @[block_division.scala 29:20]
  reg  signs__11; // @[block_division.scala 29:20]
  reg  signs__12; // @[block_division.scala 29:20]
  reg  signs__13; // @[block_division.scala 29:20]
  reg  signs__14; // @[block_division.scala 29:20]
  reg  signs__15; // @[block_division.scala 29:20]
  reg [12:0] two_complement__0; // @[block_division.scala 30:29]
  reg [12:0] two_complement__1; // @[block_division.scala 30:29]
  reg [12:0] two_complement__2; // @[block_division.scala 30:29]
  reg [12:0] two_complement__3; // @[block_division.scala 30:29]
  reg [12:0] two_complement__4; // @[block_division.scala 30:29]
  reg [12:0] two_complement__5; // @[block_division.scala 30:29]
  reg [12:0] two_complement__6; // @[block_division.scala 30:29]
  reg [12:0] two_complement__7; // @[block_division.scala 30:29]
  reg [12:0] two_complement__8; // @[block_division.scala 30:29]
  reg [12:0] two_complement__9; // @[block_division.scala 30:29]
  reg [12:0] two_complement__10; // @[block_division.scala 30:29]
  reg [12:0] two_complement__11; // @[block_division.scala 30:29]
  reg [12:0] two_complement__12; // @[block_division.scala 30:29]
  reg [12:0] two_complement__13; // @[block_division.scala 30:29]
  reg [12:0] two_complement__14; // @[block_division.scala 30:29]
  reg [12:0] two_complement__15; // @[block_division.scala 30:29]
  reg [12:0] two_complement_buffer__0; // @[block_division.scala 31:36]
  reg [12:0] two_complement_buffer__1; // @[block_division.scala 31:36]
  reg [12:0] two_complement_buffer__2; // @[block_division.scala 31:36]
  reg [12:0] two_complement_buffer__3; // @[block_division.scala 31:36]
  reg [12:0] two_complement_buffer__4; // @[block_division.scala 31:36]
  reg [12:0] two_complement_buffer__5; // @[block_division.scala 31:36]
  reg [12:0] two_complement_buffer__6; // @[block_division.scala 31:36]
  reg [12:0] two_complement_buffer__7; // @[block_division.scala 31:36]
  reg [12:0] two_complement_buffer__8; // @[block_division.scala 31:36]
  reg [12:0] two_complement_buffer__9; // @[block_division.scala 31:36]
  reg [12:0] two_complement_buffer__10; // @[block_division.scala 31:36]
  reg [12:0] two_complement_buffer__11; // @[block_division.scala 31:36]
  reg [12:0] two_complement_buffer__12; // @[block_division.scala 31:36]
  reg [12:0] two_complement_buffer__13; // @[block_division.scala 31:36]
  reg [12:0] two_complement_buffer__14; // @[block_division.scala 31:36]
  reg [12:0] two_complement_buffer__15; // @[block_division.scala 31:36]
  reg [5:0] multiplierReg; // @[block_division.scala 33:34]
  reg  signReg; // @[block_division.scala 34:28]
  wire [12:0] _two_complement_0_T_1 = {1'h0,dotProductRegs__0}; // @[block_division.scala 41:16]
  wire [12:0] _two_complement_0_T_2 = ~_two_complement_0_T_1; // @[block_division.scala 41:10]
  wire [12:0] _two_complement_0_T_4 = _two_complement_0_T_2 + 13'h1; // @[block_division.scala 41:38]
  reg [5:0] multiplierReg_1; // @[block_division.scala 33:34]
  reg  signReg_1; // @[block_division.scala 34:28]
  wire [12:0] _two_complement_1_T_1 = {1'h0,dotProductRegs__1}; // @[block_division.scala 41:16]
  wire [12:0] _two_complement_1_T_2 = ~_two_complement_1_T_1; // @[block_division.scala 41:10]
  wire [12:0] _two_complement_1_T_4 = _two_complement_1_T_2 + 13'h1; // @[block_division.scala 41:38]
  reg [5:0] multiplierReg_2; // @[block_division.scala 33:34]
  reg  signReg_2; // @[block_division.scala 34:28]
  wire [12:0] _two_complement_2_T_1 = {1'h0,dotProductRegs__2}; // @[block_division.scala 41:16]
  wire [12:0] _two_complement_2_T_2 = ~_two_complement_2_T_1; // @[block_division.scala 41:10]
  wire [12:0] _two_complement_2_T_4 = _two_complement_2_T_2 + 13'h1; // @[block_division.scala 41:38]
  reg [5:0] multiplierReg_3; // @[block_division.scala 33:34]
  reg  signReg_3; // @[block_division.scala 34:28]
  wire [12:0] _two_complement_3_T_1 = {1'h0,dotProductRegs__3}; // @[block_division.scala 41:16]
  wire [12:0] _two_complement_3_T_2 = ~_two_complement_3_T_1; // @[block_division.scala 41:10]
  wire [12:0] _two_complement_3_T_4 = _two_complement_3_T_2 + 13'h1; // @[block_division.scala 41:38]
  reg [5:0] multiplierReg_4; // @[block_division.scala 33:34]
  reg  signReg_4; // @[block_division.scala 34:28]
  wire [12:0] _two_complement_4_T_1 = {1'h0,dotProductRegs__4}; // @[block_division.scala 41:16]
  wire [12:0] _two_complement_4_T_2 = ~_two_complement_4_T_1; // @[block_division.scala 41:10]
  wire [12:0] _two_complement_4_T_4 = _two_complement_4_T_2 + 13'h1; // @[block_division.scala 41:38]
  reg [5:0] multiplierReg_5; // @[block_division.scala 33:34]
  reg  signReg_5; // @[block_division.scala 34:28]
  wire [12:0] _two_complement_5_T_1 = {1'h0,dotProductRegs__5}; // @[block_division.scala 41:16]
  wire [12:0] _two_complement_5_T_2 = ~_two_complement_5_T_1; // @[block_division.scala 41:10]
  wire [12:0] _two_complement_5_T_4 = _two_complement_5_T_2 + 13'h1; // @[block_division.scala 41:38]
  reg [5:0] multiplierReg_6; // @[block_division.scala 33:34]
  reg  signReg_6; // @[block_division.scala 34:28]
  wire [12:0] _two_complement_6_T_1 = {1'h0,dotProductRegs__6}; // @[block_division.scala 41:16]
  wire [12:0] _two_complement_6_T_2 = ~_two_complement_6_T_1; // @[block_division.scala 41:10]
  wire [12:0] _two_complement_6_T_4 = _two_complement_6_T_2 + 13'h1; // @[block_division.scala 41:38]
  reg [5:0] multiplierReg_7; // @[block_division.scala 33:34]
  reg  signReg_7; // @[block_division.scala 34:28]
  wire [12:0] _two_complement_7_T_1 = {1'h0,dotProductRegs__7}; // @[block_division.scala 41:16]
  wire [12:0] _two_complement_7_T_2 = ~_two_complement_7_T_1; // @[block_division.scala 41:10]
  wire [12:0] _two_complement_7_T_4 = _two_complement_7_T_2 + 13'h1; // @[block_division.scala 41:38]
  reg [5:0] multiplierReg_8; // @[block_division.scala 33:34]
  reg  signReg_8; // @[block_division.scala 34:28]
  wire [12:0] _two_complement_8_T_1 = {1'h0,dotProductRegs__8}; // @[block_division.scala 41:16]
  wire [12:0] _two_complement_8_T_2 = ~_two_complement_8_T_1; // @[block_division.scala 41:10]
  wire [12:0] _two_complement_8_T_4 = _two_complement_8_T_2 + 13'h1; // @[block_division.scala 41:38]
  reg [5:0] multiplierReg_9; // @[block_division.scala 33:34]
  reg  signReg_9; // @[block_division.scala 34:28]
  wire [12:0] _two_complement_9_T_1 = {1'h0,dotProductRegs__9}; // @[block_division.scala 41:16]
  wire [12:0] _two_complement_9_T_2 = ~_two_complement_9_T_1; // @[block_division.scala 41:10]
  wire [12:0] _two_complement_9_T_4 = _two_complement_9_T_2 + 13'h1; // @[block_division.scala 41:38]
  reg [5:0] multiplierReg_10; // @[block_division.scala 33:34]
  reg  signReg_10; // @[block_division.scala 34:28]
  wire [12:0] _two_complement_10_T_1 = {1'h0,dotProductRegs__10}; // @[block_division.scala 41:16]
  wire [12:0] _two_complement_10_T_2 = ~_two_complement_10_T_1; // @[block_division.scala 41:10]
  wire [12:0] _two_complement_10_T_4 = _two_complement_10_T_2 + 13'h1; // @[block_division.scala 41:38]
  reg [5:0] multiplierReg_11; // @[block_division.scala 33:34]
  reg  signReg_11; // @[block_division.scala 34:28]
  wire [12:0] _two_complement_11_T_1 = {1'h0,dotProductRegs__11}; // @[block_division.scala 41:16]
  wire [12:0] _two_complement_11_T_2 = ~_two_complement_11_T_1; // @[block_division.scala 41:10]
  wire [12:0] _two_complement_11_T_4 = _two_complement_11_T_2 + 13'h1; // @[block_division.scala 41:38]
  reg [5:0] multiplierReg_12; // @[block_division.scala 33:34]
  reg  signReg_12; // @[block_division.scala 34:28]
  wire [12:0] _two_complement_12_T_1 = {1'h0,dotProductRegs__12}; // @[block_division.scala 41:16]
  wire [12:0] _two_complement_12_T_2 = ~_two_complement_12_T_1; // @[block_division.scala 41:10]
  wire [12:0] _two_complement_12_T_4 = _two_complement_12_T_2 + 13'h1; // @[block_division.scala 41:38]
  reg [5:0] multiplierReg_13; // @[block_division.scala 33:34]
  reg  signReg_13; // @[block_division.scala 34:28]
  wire [12:0] _two_complement_13_T_1 = {1'h0,dotProductRegs__13}; // @[block_division.scala 41:16]
  wire [12:0] _two_complement_13_T_2 = ~_two_complement_13_T_1; // @[block_division.scala 41:10]
  wire [12:0] _two_complement_13_T_4 = _two_complement_13_T_2 + 13'h1; // @[block_division.scala 41:38]
  reg [5:0] multiplierReg_14; // @[block_division.scala 33:34]
  reg  signReg_14; // @[block_division.scala 34:28]
  wire [12:0] _two_complement_14_T_1 = {1'h0,dotProductRegs__14}; // @[block_division.scala 41:16]
  wire [12:0] _two_complement_14_T_2 = ~_two_complement_14_T_1; // @[block_division.scala 41:10]
  wire [12:0] _two_complement_14_T_4 = _two_complement_14_T_2 + 13'h1; // @[block_division.scala 41:38]
  reg [5:0] multiplierReg_15; // @[block_division.scala 33:34]
  reg  signReg_15; // @[block_division.scala 34:28]
  wire [12:0] _two_complement_15_T_1 = {1'h0,dotProductRegs__15}; // @[block_division.scala 41:16]
  wire [12:0] _two_complement_15_T_2 = ~_two_complement_15_T_1; // @[block_division.scala 41:10]
  wire [12:0] _two_complement_15_T_4 = _two_complement_15_T_2 + 13'h1; // @[block_division.scala 41:38]
  wire [13:0] _acc_0_T = $signed(two_complement_buffer__0) + $signed(two_complement_buffer__1); // @[block_division.scala 46:46]
  wire [13:0] _GEN_0 = {{1{two_complement_buffer__2[12]}},two_complement_buffer__2}; // @[block_division.scala 46:46]
  wire [14:0] _acc_0_T_1 = $signed(_acc_0_T) + $signed(_GEN_0); // @[block_division.scala 46:46]
  wire [14:0] _GEN_1 = {{2{two_complement_buffer__3[12]}},two_complement_buffer__3}; // @[block_division.scala 46:46]
  wire [15:0] _acc_0_T_2 = $signed(_acc_0_T_1) + $signed(_GEN_1); // @[block_division.scala 46:46]
  wire [15:0] _GEN_2 = {{3{two_complement_buffer__4[12]}},two_complement_buffer__4}; // @[block_division.scala 46:46]
  wire [16:0] _acc_0_T_3 = $signed(_acc_0_T_2) + $signed(_GEN_2); // @[block_division.scala 46:46]
  wire [16:0] _GEN_3 = {{4{two_complement_buffer__5[12]}},two_complement_buffer__5}; // @[block_division.scala 46:46]
  wire [17:0] _acc_0_T_4 = $signed(_acc_0_T_3) + $signed(_GEN_3); // @[block_division.scala 46:46]
  wire [17:0] _GEN_4 = {{5{two_complement_buffer__6[12]}},two_complement_buffer__6}; // @[block_division.scala 46:46]
  wire [18:0] _acc_0_T_5 = $signed(_acc_0_T_4) + $signed(_GEN_4); // @[block_division.scala 46:46]
  wire [18:0] _GEN_5 = {{6{two_complement_buffer__7[12]}},two_complement_buffer__7}; // @[block_division.scala 46:46]
  wire [19:0] _acc_0_T_6 = $signed(_acc_0_T_5) + $signed(_GEN_5); // @[block_division.scala 46:46]
  wire [19:0] _GEN_6 = {{7{two_complement_buffer__8[12]}},two_complement_buffer__8}; // @[block_division.scala 46:46]
  wire [20:0] _acc_0_T_7 = $signed(_acc_0_T_6) + $signed(_GEN_6); // @[block_division.scala 46:46]
  wire [20:0] _GEN_7 = {{8{two_complement_buffer__9[12]}},two_complement_buffer__9}; // @[block_division.scala 46:46]
  wire [21:0] _acc_0_T_8 = $signed(_acc_0_T_7) + $signed(_GEN_7); // @[block_division.scala 46:46]
  wire [21:0] _GEN_8 = {{9{two_complement_buffer__10[12]}},two_complement_buffer__10}; // @[block_division.scala 46:46]
  wire [22:0] _acc_0_T_9 = $signed(_acc_0_T_8) + $signed(_GEN_8); // @[block_division.scala 46:46]
  wire [22:0] _GEN_9 = {{10{two_complement_buffer__11[12]}},two_complement_buffer__11}; // @[block_division.scala 46:46]
  wire [23:0] _acc_0_T_10 = $signed(_acc_0_T_9) + $signed(_GEN_9); // @[block_division.scala 46:46]
  wire [23:0] _GEN_10 = {{11{two_complement_buffer__12[12]}},two_complement_buffer__12}; // @[block_division.scala 46:46]
  wire [24:0] _acc_0_T_11 = $signed(_acc_0_T_10) + $signed(_GEN_10); // @[block_division.scala 46:46]
  wire [24:0] _GEN_11 = {{12{two_complement_buffer__13[12]}},two_complement_buffer__13}; // @[block_division.scala 46:46]
  wire [25:0] _acc_0_T_12 = $signed(_acc_0_T_11) + $signed(_GEN_11); // @[block_division.scala 46:46]
  wire [25:0] _GEN_12 = {{13{two_complement_buffer__14[12]}},two_complement_buffer__14}; // @[block_division.scala 46:46]
  wire [26:0] _acc_0_T_13 = $signed(_acc_0_T_12) + $signed(_GEN_12); // @[block_division.scala 46:46]
  wire [26:0] _GEN_13 = {{14{two_complement_buffer__15[12]}},two_complement_buffer__15}; // @[block_division.scala 46:46]
  wire [27:0] _acc_0_T_14 = $signed(_acc_0_T_13) + $signed(_GEN_13); // @[block_division.scala 46:46]
  wire [8:0] _exp_output_1_T = io_exp_a_1 + io_exp_b_1; // @[block_division.scala 27:34]
  reg [11:0] dotProductRegs_1_0; // @[block_division.scala 28:29]
  reg [11:0] dotProductRegs_1_1; // @[block_division.scala 28:29]
  reg [11:0] dotProductRegs_1_2; // @[block_division.scala 28:29]
  reg [11:0] dotProductRegs_1_3; // @[block_division.scala 28:29]
  reg [11:0] dotProductRegs_1_4; // @[block_division.scala 28:29]
  reg [11:0] dotProductRegs_1_5; // @[block_division.scala 28:29]
  reg [11:0] dotProductRegs_1_6; // @[block_division.scala 28:29]
  reg [11:0] dotProductRegs_1_7; // @[block_division.scala 28:29]
  reg [11:0] dotProductRegs_1_8; // @[block_division.scala 28:29]
  reg [11:0] dotProductRegs_1_9; // @[block_division.scala 28:29]
  reg [11:0] dotProductRegs_1_10; // @[block_division.scala 28:29]
  reg [11:0] dotProductRegs_1_11; // @[block_division.scala 28:29]
  reg [11:0] dotProductRegs_1_12; // @[block_division.scala 28:29]
  reg [11:0] dotProductRegs_1_13; // @[block_division.scala 28:29]
  reg [11:0] dotProductRegs_1_14; // @[block_division.scala 28:29]
  reg [11:0] dotProductRegs_1_15; // @[block_division.scala 28:29]
  reg  signs_1_0; // @[block_division.scala 29:20]
  reg  signs_1_1; // @[block_division.scala 29:20]
  reg  signs_1_2; // @[block_division.scala 29:20]
  reg  signs_1_3; // @[block_division.scala 29:20]
  reg  signs_1_4; // @[block_division.scala 29:20]
  reg  signs_1_5; // @[block_division.scala 29:20]
  reg  signs_1_6; // @[block_division.scala 29:20]
  reg  signs_1_7; // @[block_division.scala 29:20]
  reg  signs_1_8; // @[block_division.scala 29:20]
  reg  signs_1_9; // @[block_division.scala 29:20]
  reg  signs_1_10; // @[block_division.scala 29:20]
  reg  signs_1_11; // @[block_division.scala 29:20]
  reg  signs_1_12; // @[block_division.scala 29:20]
  reg  signs_1_13; // @[block_division.scala 29:20]
  reg  signs_1_14; // @[block_division.scala 29:20]
  reg  signs_1_15; // @[block_division.scala 29:20]
  reg [12:0] two_complement_1_0; // @[block_division.scala 30:29]
  reg [12:0] two_complement_1_1; // @[block_division.scala 30:29]
  reg [12:0] two_complement_1_2; // @[block_division.scala 30:29]
  reg [12:0] two_complement_1_3; // @[block_division.scala 30:29]
  reg [12:0] two_complement_1_4; // @[block_division.scala 30:29]
  reg [12:0] two_complement_1_5; // @[block_division.scala 30:29]
  reg [12:0] two_complement_1_6; // @[block_division.scala 30:29]
  reg [12:0] two_complement_1_7; // @[block_division.scala 30:29]
  reg [12:0] two_complement_1_8; // @[block_division.scala 30:29]
  reg [12:0] two_complement_1_9; // @[block_division.scala 30:29]
  reg [12:0] two_complement_1_10; // @[block_division.scala 30:29]
  reg [12:0] two_complement_1_11; // @[block_division.scala 30:29]
  reg [12:0] two_complement_1_12; // @[block_division.scala 30:29]
  reg [12:0] two_complement_1_13; // @[block_division.scala 30:29]
  reg [12:0] two_complement_1_14; // @[block_division.scala 30:29]
  reg [12:0] two_complement_1_15; // @[block_division.scala 30:29]
  reg [12:0] two_complement_buffer_1_0; // @[block_division.scala 31:36]
  reg [12:0] two_complement_buffer_1_1; // @[block_division.scala 31:36]
  reg [12:0] two_complement_buffer_1_2; // @[block_division.scala 31:36]
  reg [12:0] two_complement_buffer_1_3; // @[block_division.scala 31:36]
  reg [12:0] two_complement_buffer_1_4; // @[block_division.scala 31:36]
  reg [12:0] two_complement_buffer_1_5; // @[block_division.scala 31:36]
  reg [12:0] two_complement_buffer_1_6; // @[block_division.scala 31:36]
  reg [12:0] two_complement_buffer_1_7; // @[block_division.scala 31:36]
  reg [12:0] two_complement_buffer_1_8; // @[block_division.scala 31:36]
  reg [12:0] two_complement_buffer_1_9; // @[block_division.scala 31:36]
  reg [12:0] two_complement_buffer_1_10; // @[block_division.scala 31:36]
  reg [12:0] two_complement_buffer_1_11; // @[block_division.scala 31:36]
  reg [12:0] two_complement_buffer_1_12; // @[block_division.scala 31:36]
  reg [12:0] two_complement_buffer_1_13; // @[block_division.scala 31:36]
  reg [12:0] two_complement_buffer_1_14; // @[block_division.scala 31:36]
  reg [12:0] two_complement_buffer_1_15; // @[block_division.scala 31:36]
  reg [5:0] multiplierReg_16; // @[block_division.scala 33:34]
  reg  signReg_16; // @[block_division.scala 34:28]
  wire [12:0] _two_complement_0_T_8 = {1'h0,dotProductRegs_1_0}; // @[block_division.scala 41:16]
  wire [12:0] _two_complement_0_T_9 = ~_two_complement_0_T_8; // @[block_division.scala 41:10]
  wire [12:0] _two_complement_0_T_11 = _two_complement_0_T_9 + 13'h1; // @[block_division.scala 41:38]
  reg [5:0] multiplierReg_17; // @[block_division.scala 33:34]
  reg  signReg_17; // @[block_division.scala 34:28]
  wire [12:0] _two_complement_1_T_8 = {1'h0,dotProductRegs_1_1}; // @[block_division.scala 41:16]
  wire [12:0] _two_complement_1_T_9 = ~_two_complement_1_T_8; // @[block_division.scala 41:10]
  wire [12:0] _two_complement_1_T_11 = _two_complement_1_T_9 + 13'h1; // @[block_division.scala 41:38]
  reg [5:0] multiplierReg_18; // @[block_division.scala 33:34]
  reg  signReg_18; // @[block_division.scala 34:28]
  wire [12:0] _two_complement_2_T_8 = {1'h0,dotProductRegs_1_2}; // @[block_division.scala 41:16]
  wire [12:0] _two_complement_2_T_9 = ~_two_complement_2_T_8; // @[block_division.scala 41:10]
  wire [12:0] _two_complement_2_T_11 = _two_complement_2_T_9 + 13'h1; // @[block_division.scala 41:38]
  reg [5:0] multiplierReg_19; // @[block_division.scala 33:34]
  reg  signReg_19; // @[block_division.scala 34:28]
  wire [12:0] _two_complement_3_T_8 = {1'h0,dotProductRegs_1_3}; // @[block_division.scala 41:16]
  wire [12:0] _two_complement_3_T_9 = ~_two_complement_3_T_8; // @[block_division.scala 41:10]
  wire [12:0] _two_complement_3_T_11 = _two_complement_3_T_9 + 13'h1; // @[block_division.scala 41:38]
  reg [5:0] multiplierReg_20; // @[block_division.scala 33:34]
  reg  signReg_20; // @[block_division.scala 34:28]
  wire [12:0] _two_complement_4_T_8 = {1'h0,dotProductRegs_1_4}; // @[block_division.scala 41:16]
  wire [12:0] _two_complement_4_T_9 = ~_two_complement_4_T_8; // @[block_division.scala 41:10]
  wire [12:0] _two_complement_4_T_11 = _two_complement_4_T_9 + 13'h1; // @[block_division.scala 41:38]
  reg [5:0] multiplierReg_21; // @[block_division.scala 33:34]
  reg  signReg_21; // @[block_division.scala 34:28]
  wire [12:0] _two_complement_5_T_8 = {1'h0,dotProductRegs_1_5}; // @[block_division.scala 41:16]
  wire [12:0] _two_complement_5_T_9 = ~_two_complement_5_T_8; // @[block_division.scala 41:10]
  wire [12:0] _two_complement_5_T_11 = _two_complement_5_T_9 + 13'h1; // @[block_division.scala 41:38]
  reg [5:0] multiplierReg_22; // @[block_division.scala 33:34]
  reg  signReg_22; // @[block_division.scala 34:28]
  wire [12:0] _two_complement_6_T_8 = {1'h0,dotProductRegs_1_6}; // @[block_division.scala 41:16]
  wire [12:0] _two_complement_6_T_9 = ~_two_complement_6_T_8; // @[block_division.scala 41:10]
  wire [12:0] _two_complement_6_T_11 = _two_complement_6_T_9 + 13'h1; // @[block_division.scala 41:38]
  reg [5:0] multiplierReg_23; // @[block_division.scala 33:34]
  reg  signReg_23; // @[block_division.scala 34:28]
  wire [12:0] _two_complement_7_T_8 = {1'h0,dotProductRegs_1_7}; // @[block_division.scala 41:16]
  wire [12:0] _two_complement_7_T_9 = ~_two_complement_7_T_8; // @[block_division.scala 41:10]
  wire [12:0] _two_complement_7_T_11 = _two_complement_7_T_9 + 13'h1; // @[block_division.scala 41:38]
  reg [5:0] multiplierReg_24; // @[block_division.scala 33:34]
  reg  signReg_24; // @[block_division.scala 34:28]
  wire [12:0] _two_complement_8_T_8 = {1'h0,dotProductRegs_1_8}; // @[block_division.scala 41:16]
  wire [12:0] _two_complement_8_T_9 = ~_two_complement_8_T_8; // @[block_division.scala 41:10]
  wire [12:0] _two_complement_8_T_11 = _two_complement_8_T_9 + 13'h1; // @[block_division.scala 41:38]
  reg [5:0] multiplierReg_25; // @[block_division.scala 33:34]
  reg  signReg_25; // @[block_division.scala 34:28]
  wire [12:0] _two_complement_9_T_8 = {1'h0,dotProductRegs_1_9}; // @[block_division.scala 41:16]
  wire [12:0] _two_complement_9_T_9 = ~_two_complement_9_T_8; // @[block_division.scala 41:10]
  wire [12:0] _two_complement_9_T_11 = _two_complement_9_T_9 + 13'h1; // @[block_division.scala 41:38]
  reg [5:0] multiplierReg_26; // @[block_division.scala 33:34]
  reg  signReg_26; // @[block_division.scala 34:28]
  wire [12:0] _two_complement_10_T_8 = {1'h0,dotProductRegs_1_10}; // @[block_division.scala 41:16]
  wire [12:0] _two_complement_10_T_9 = ~_two_complement_10_T_8; // @[block_division.scala 41:10]
  wire [12:0] _two_complement_10_T_11 = _two_complement_10_T_9 + 13'h1; // @[block_division.scala 41:38]
  reg [5:0] multiplierReg_27; // @[block_division.scala 33:34]
  reg  signReg_27; // @[block_division.scala 34:28]
  wire [12:0] _two_complement_11_T_8 = {1'h0,dotProductRegs_1_11}; // @[block_division.scala 41:16]
  wire [12:0] _two_complement_11_T_9 = ~_two_complement_11_T_8; // @[block_division.scala 41:10]
  wire [12:0] _two_complement_11_T_11 = _two_complement_11_T_9 + 13'h1; // @[block_division.scala 41:38]
  reg [5:0] multiplierReg_28; // @[block_division.scala 33:34]
  reg  signReg_28; // @[block_division.scala 34:28]
  wire [12:0] _two_complement_12_T_8 = {1'h0,dotProductRegs_1_12}; // @[block_division.scala 41:16]
  wire [12:0] _two_complement_12_T_9 = ~_two_complement_12_T_8; // @[block_division.scala 41:10]
  wire [12:0] _two_complement_12_T_11 = _two_complement_12_T_9 + 13'h1; // @[block_division.scala 41:38]
  reg [5:0] multiplierReg_29; // @[block_division.scala 33:34]
  reg  signReg_29; // @[block_division.scala 34:28]
  wire [12:0] _two_complement_13_T_8 = {1'h0,dotProductRegs_1_13}; // @[block_division.scala 41:16]
  wire [12:0] _two_complement_13_T_9 = ~_two_complement_13_T_8; // @[block_division.scala 41:10]
  wire [12:0] _two_complement_13_T_11 = _two_complement_13_T_9 + 13'h1; // @[block_division.scala 41:38]
  reg [5:0] multiplierReg_30; // @[block_division.scala 33:34]
  reg  signReg_30; // @[block_division.scala 34:28]
  wire [12:0] _two_complement_14_T_8 = {1'h0,dotProductRegs_1_14}; // @[block_division.scala 41:16]
  wire [12:0] _two_complement_14_T_9 = ~_two_complement_14_T_8; // @[block_division.scala 41:10]
  wire [12:0] _two_complement_14_T_11 = _two_complement_14_T_9 + 13'h1; // @[block_division.scala 41:38]
  reg [5:0] multiplierReg_31; // @[block_division.scala 33:34]
  reg  signReg_31; // @[block_division.scala 34:28]
  wire [12:0] _two_complement_15_T_8 = {1'h0,dotProductRegs_1_15}; // @[block_division.scala 41:16]
  wire [12:0] _two_complement_15_T_9 = ~_two_complement_15_T_8; // @[block_division.scala 41:10]
  wire [12:0] _two_complement_15_T_11 = _two_complement_15_T_9 + 13'h1; // @[block_division.scala 41:38]
  wire [13:0] _acc_1_T = $signed(two_complement_buffer_1_0) + $signed(two_complement_buffer_1_1); // @[block_division.scala 46:46]
  wire [13:0] _GEN_14 = {{1{two_complement_buffer_1_2[12]}},two_complement_buffer_1_2}; // @[block_division.scala 46:46]
  wire [14:0] _acc_1_T_1 = $signed(_acc_1_T) + $signed(_GEN_14); // @[block_division.scala 46:46]
  wire [14:0] _GEN_15 = {{2{two_complement_buffer_1_3[12]}},two_complement_buffer_1_3}; // @[block_division.scala 46:46]
  wire [15:0] _acc_1_T_2 = $signed(_acc_1_T_1) + $signed(_GEN_15); // @[block_division.scala 46:46]
  wire [15:0] _GEN_16 = {{3{two_complement_buffer_1_4[12]}},two_complement_buffer_1_4}; // @[block_division.scala 46:46]
  wire [16:0] _acc_1_T_3 = $signed(_acc_1_T_2) + $signed(_GEN_16); // @[block_division.scala 46:46]
  wire [16:0] _GEN_17 = {{4{two_complement_buffer_1_5[12]}},two_complement_buffer_1_5}; // @[block_division.scala 46:46]
  wire [17:0] _acc_1_T_4 = $signed(_acc_1_T_3) + $signed(_GEN_17); // @[block_division.scala 46:46]
  wire [17:0] _GEN_18 = {{5{two_complement_buffer_1_6[12]}},two_complement_buffer_1_6}; // @[block_division.scala 46:46]
  wire [18:0] _acc_1_T_5 = $signed(_acc_1_T_4) + $signed(_GEN_18); // @[block_division.scala 46:46]
  wire [18:0] _GEN_19 = {{6{two_complement_buffer_1_7[12]}},two_complement_buffer_1_7}; // @[block_division.scala 46:46]
  wire [19:0] _acc_1_T_6 = $signed(_acc_1_T_5) + $signed(_GEN_19); // @[block_division.scala 46:46]
  wire [19:0] _GEN_20 = {{7{two_complement_buffer_1_8[12]}},two_complement_buffer_1_8}; // @[block_division.scala 46:46]
  wire [20:0] _acc_1_T_7 = $signed(_acc_1_T_6) + $signed(_GEN_20); // @[block_division.scala 46:46]
  wire [20:0] _GEN_21 = {{8{two_complement_buffer_1_9[12]}},two_complement_buffer_1_9}; // @[block_division.scala 46:46]
  wire [21:0] _acc_1_T_8 = $signed(_acc_1_T_7) + $signed(_GEN_21); // @[block_division.scala 46:46]
  wire [21:0] _GEN_22 = {{9{two_complement_buffer_1_10[12]}},two_complement_buffer_1_10}; // @[block_division.scala 46:46]
  wire [22:0] _acc_1_T_9 = $signed(_acc_1_T_8) + $signed(_GEN_22); // @[block_division.scala 46:46]
  wire [22:0] _GEN_23 = {{10{two_complement_buffer_1_11[12]}},two_complement_buffer_1_11}; // @[block_division.scala 46:46]
  wire [23:0] _acc_1_T_10 = $signed(_acc_1_T_9) + $signed(_GEN_23); // @[block_division.scala 46:46]
  wire [23:0] _GEN_24 = {{11{two_complement_buffer_1_12[12]}},two_complement_buffer_1_12}; // @[block_division.scala 46:46]
  wire [24:0] _acc_1_T_11 = $signed(_acc_1_T_10) + $signed(_GEN_24); // @[block_division.scala 46:46]
  wire [24:0] _GEN_25 = {{12{two_complement_buffer_1_13[12]}},two_complement_buffer_1_13}; // @[block_division.scala 46:46]
  wire [25:0] _acc_1_T_12 = $signed(_acc_1_T_11) + $signed(_GEN_25); // @[block_division.scala 46:46]
  wire [25:0] _GEN_26 = {{13{two_complement_buffer_1_14[12]}},two_complement_buffer_1_14}; // @[block_division.scala 46:46]
  wire [26:0] _acc_1_T_13 = $signed(_acc_1_T_12) + $signed(_GEN_26); // @[block_division.scala 46:46]
  wire [26:0] _GEN_27 = {{14{two_complement_buffer_1_15[12]}},two_complement_buffer_1_15}; // @[block_division.scala 46:46]
  wire [27:0] _acc_1_T_14 = $signed(_acc_1_T_13) + $signed(_GEN_27); // @[block_division.scala 46:46]
  wire [8:0] _exp_output_2_T = io_exp_a_2 + io_exp_b_2; // @[block_division.scala 27:34]
  reg [11:0] dotProductRegs_2_0; // @[block_division.scala 28:29]
  reg [11:0] dotProductRegs_2_1; // @[block_division.scala 28:29]
  reg [11:0] dotProductRegs_2_2; // @[block_division.scala 28:29]
  reg [11:0] dotProductRegs_2_3; // @[block_division.scala 28:29]
  reg [11:0] dotProductRegs_2_4; // @[block_division.scala 28:29]
  reg [11:0] dotProductRegs_2_5; // @[block_division.scala 28:29]
  reg [11:0] dotProductRegs_2_6; // @[block_division.scala 28:29]
  reg [11:0] dotProductRegs_2_7; // @[block_division.scala 28:29]
  reg [11:0] dotProductRegs_2_8; // @[block_division.scala 28:29]
  reg [11:0] dotProductRegs_2_9; // @[block_division.scala 28:29]
  reg [11:0] dotProductRegs_2_10; // @[block_division.scala 28:29]
  reg [11:0] dotProductRegs_2_11; // @[block_division.scala 28:29]
  reg [11:0] dotProductRegs_2_12; // @[block_division.scala 28:29]
  reg [11:0] dotProductRegs_2_13; // @[block_division.scala 28:29]
  reg [11:0] dotProductRegs_2_14; // @[block_division.scala 28:29]
  reg [11:0] dotProductRegs_2_15; // @[block_division.scala 28:29]
  reg  signs_2_0; // @[block_division.scala 29:20]
  reg  signs_2_1; // @[block_division.scala 29:20]
  reg  signs_2_2; // @[block_division.scala 29:20]
  reg  signs_2_3; // @[block_division.scala 29:20]
  reg  signs_2_4; // @[block_division.scala 29:20]
  reg  signs_2_5; // @[block_division.scala 29:20]
  reg  signs_2_6; // @[block_division.scala 29:20]
  reg  signs_2_7; // @[block_division.scala 29:20]
  reg  signs_2_8; // @[block_division.scala 29:20]
  reg  signs_2_9; // @[block_division.scala 29:20]
  reg  signs_2_10; // @[block_division.scala 29:20]
  reg  signs_2_11; // @[block_division.scala 29:20]
  reg  signs_2_12; // @[block_division.scala 29:20]
  reg  signs_2_13; // @[block_division.scala 29:20]
  reg  signs_2_14; // @[block_division.scala 29:20]
  reg  signs_2_15; // @[block_division.scala 29:20]
  reg [12:0] two_complement_2_0; // @[block_division.scala 30:29]
  reg [12:0] two_complement_2_1; // @[block_division.scala 30:29]
  reg [12:0] two_complement_2_2; // @[block_division.scala 30:29]
  reg [12:0] two_complement_2_3; // @[block_division.scala 30:29]
  reg [12:0] two_complement_2_4; // @[block_division.scala 30:29]
  reg [12:0] two_complement_2_5; // @[block_division.scala 30:29]
  reg [12:0] two_complement_2_6; // @[block_division.scala 30:29]
  reg [12:0] two_complement_2_7; // @[block_division.scala 30:29]
  reg [12:0] two_complement_2_8; // @[block_division.scala 30:29]
  reg [12:0] two_complement_2_9; // @[block_division.scala 30:29]
  reg [12:0] two_complement_2_10; // @[block_division.scala 30:29]
  reg [12:0] two_complement_2_11; // @[block_division.scala 30:29]
  reg [12:0] two_complement_2_12; // @[block_division.scala 30:29]
  reg [12:0] two_complement_2_13; // @[block_division.scala 30:29]
  reg [12:0] two_complement_2_14; // @[block_division.scala 30:29]
  reg [12:0] two_complement_2_15; // @[block_division.scala 30:29]
  reg [12:0] two_complement_buffer_2_0; // @[block_division.scala 31:36]
  reg [12:0] two_complement_buffer_2_1; // @[block_division.scala 31:36]
  reg [12:0] two_complement_buffer_2_2; // @[block_division.scala 31:36]
  reg [12:0] two_complement_buffer_2_3; // @[block_division.scala 31:36]
  reg [12:0] two_complement_buffer_2_4; // @[block_division.scala 31:36]
  reg [12:0] two_complement_buffer_2_5; // @[block_division.scala 31:36]
  reg [12:0] two_complement_buffer_2_6; // @[block_division.scala 31:36]
  reg [12:0] two_complement_buffer_2_7; // @[block_division.scala 31:36]
  reg [12:0] two_complement_buffer_2_8; // @[block_division.scala 31:36]
  reg [12:0] two_complement_buffer_2_9; // @[block_division.scala 31:36]
  reg [12:0] two_complement_buffer_2_10; // @[block_division.scala 31:36]
  reg [12:0] two_complement_buffer_2_11; // @[block_division.scala 31:36]
  reg [12:0] two_complement_buffer_2_12; // @[block_division.scala 31:36]
  reg [12:0] two_complement_buffer_2_13; // @[block_division.scala 31:36]
  reg [12:0] two_complement_buffer_2_14; // @[block_division.scala 31:36]
  reg [12:0] two_complement_buffer_2_15; // @[block_division.scala 31:36]
  reg [5:0] multiplierReg_32; // @[block_division.scala 33:34]
  reg  signReg_32; // @[block_division.scala 34:28]
  wire [12:0] _two_complement_0_T_15 = {1'h0,dotProductRegs_2_0}; // @[block_division.scala 41:16]
  wire [12:0] _two_complement_0_T_16 = ~_two_complement_0_T_15; // @[block_division.scala 41:10]
  wire [12:0] _two_complement_0_T_18 = _two_complement_0_T_16 + 13'h1; // @[block_division.scala 41:38]
  reg [5:0] multiplierReg_33; // @[block_division.scala 33:34]
  reg  signReg_33; // @[block_division.scala 34:28]
  wire [12:0] _two_complement_1_T_15 = {1'h0,dotProductRegs_2_1}; // @[block_division.scala 41:16]
  wire [12:0] _two_complement_1_T_16 = ~_two_complement_1_T_15; // @[block_division.scala 41:10]
  wire [12:0] _two_complement_1_T_18 = _two_complement_1_T_16 + 13'h1; // @[block_division.scala 41:38]
  reg [5:0] multiplierReg_34; // @[block_division.scala 33:34]
  reg  signReg_34; // @[block_division.scala 34:28]
  wire [12:0] _two_complement_2_T_15 = {1'h0,dotProductRegs_2_2}; // @[block_division.scala 41:16]
  wire [12:0] _two_complement_2_T_16 = ~_two_complement_2_T_15; // @[block_division.scala 41:10]
  wire [12:0] _two_complement_2_T_18 = _two_complement_2_T_16 + 13'h1; // @[block_division.scala 41:38]
  reg [5:0] multiplierReg_35; // @[block_division.scala 33:34]
  reg  signReg_35; // @[block_division.scala 34:28]
  wire [12:0] _two_complement_3_T_15 = {1'h0,dotProductRegs_2_3}; // @[block_division.scala 41:16]
  wire [12:0] _two_complement_3_T_16 = ~_two_complement_3_T_15; // @[block_division.scala 41:10]
  wire [12:0] _two_complement_3_T_18 = _two_complement_3_T_16 + 13'h1; // @[block_division.scala 41:38]
  reg [5:0] multiplierReg_36; // @[block_division.scala 33:34]
  reg  signReg_36; // @[block_division.scala 34:28]
  wire [12:0] _two_complement_4_T_15 = {1'h0,dotProductRegs_2_4}; // @[block_division.scala 41:16]
  wire [12:0] _two_complement_4_T_16 = ~_two_complement_4_T_15; // @[block_division.scala 41:10]
  wire [12:0] _two_complement_4_T_18 = _two_complement_4_T_16 + 13'h1; // @[block_division.scala 41:38]
  reg [5:0] multiplierReg_37; // @[block_division.scala 33:34]
  reg  signReg_37; // @[block_division.scala 34:28]
  wire [12:0] _two_complement_5_T_15 = {1'h0,dotProductRegs_2_5}; // @[block_division.scala 41:16]
  wire [12:0] _two_complement_5_T_16 = ~_two_complement_5_T_15; // @[block_division.scala 41:10]
  wire [12:0] _two_complement_5_T_18 = _two_complement_5_T_16 + 13'h1; // @[block_division.scala 41:38]
  reg [5:0] multiplierReg_38; // @[block_division.scala 33:34]
  reg  signReg_38; // @[block_division.scala 34:28]
  wire [12:0] _two_complement_6_T_15 = {1'h0,dotProductRegs_2_6}; // @[block_division.scala 41:16]
  wire [12:0] _two_complement_6_T_16 = ~_two_complement_6_T_15; // @[block_division.scala 41:10]
  wire [12:0] _two_complement_6_T_18 = _two_complement_6_T_16 + 13'h1; // @[block_division.scala 41:38]
  reg [5:0] multiplierReg_39; // @[block_division.scala 33:34]
  reg  signReg_39; // @[block_division.scala 34:28]
  wire [12:0] _two_complement_7_T_15 = {1'h0,dotProductRegs_2_7}; // @[block_division.scala 41:16]
  wire [12:0] _two_complement_7_T_16 = ~_two_complement_7_T_15; // @[block_division.scala 41:10]
  wire [12:0] _two_complement_7_T_18 = _two_complement_7_T_16 + 13'h1; // @[block_division.scala 41:38]
  reg [5:0] multiplierReg_40; // @[block_division.scala 33:34]
  reg  signReg_40; // @[block_division.scala 34:28]
  wire [12:0] _two_complement_8_T_15 = {1'h0,dotProductRegs_2_8}; // @[block_division.scala 41:16]
  wire [12:0] _two_complement_8_T_16 = ~_two_complement_8_T_15; // @[block_division.scala 41:10]
  wire [12:0] _two_complement_8_T_18 = _two_complement_8_T_16 + 13'h1; // @[block_division.scala 41:38]
  reg [5:0] multiplierReg_41; // @[block_division.scala 33:34]
  reg  signReg_41; // @[block_division.scala 34:28]
  wire [12:0] _two_complement_9_T_15 = {1'h0,dotProductRegs_2_9}; // @[block_division.scala 41:16]
  wire [12:0] _two_complement_9_T_16 = ~_two_complement_9_T_15; // @[block_division.scala 41:10]
  wire [12:0] _two_complement_9_T_18 = _two_complement_9_T_16 + 13'h1; // @[block_division.scala 41:38]
  reg [5:0] multiplierReg_42; // @[block_division.scala 33:34]
  reg  signReg_42; // @[block_division.scala 34:28]
  wire [12:0] _two_complement_10_T_15 = {1'h0,dotProductRegs_2_10}; // @[block_division.scala 41:16]
  wire [12:0] _two_complement_10_T_16 = ~_two_complement_10_T_15; // @[block_division.scala 41:10]
  wire [12:0] _two_complement_10_T_18 = _two_complement_10_T_16 + 13'h1; // @[block_division.scala 41:38]
  reg [5:0] multiplierReg_43; // @[block_division.scala 33:34]
  reg  signReg_43; // @[block_division.scala 34:28]
  wire [12:0] _two_complement_11_T_15 = {1'h0,dotProductRegs_2_11}; // @[block_division.scala 41:16]
  wire [12:0] _two_complement_11_T_16 = ~_two_complement_11_T_15; // @[block_division.scala 41:10]
  wire [12:0] _two_complement_11_T_18 = _two_complement_11_T_16 + 13'h1; // @[block_division.scala 41:38]
  reg [5:0] multiplierReg_44; // @[block_division.scala 33:34]
  reg  signReg_44; // @[block_division.scala 34:28]
  wire [12:0] _two_complement_12_T_15 = {1'h0,dotProductRegs_2_12}; // @[block_division.scala 41:16]
  wire [12:0] _two_complement_12_T_16 = ~_two_complement_12_T_15; // @[block_division.scala 41:10]
  wire [12:0] _two_complement_12_T_18 = _two_complement_12_T_16 + 13'h1; // @[block_division.scala 41:38]
  reg [5:0] multiplierReg_45; // @[block_division.scala 33:34]
  reg  signReg_45; // @[block_division.scala 34:28]
  wire [12:0] _two_complement_13_T_15 = {1'h0,dotProductRegs_2_13}; // @[block_division.scala 41:16]
  wire [12:0] _two_complement_13_T_16 = ~_two_complement_13_T_15; // @[block_division.scala 41:10]
  wire [12:0] _two_complement_13_T_18 = _two_complement_13_T_16 + 13'h1; // @[block_division.scala 41:38]
  reg [5:0] multiplierReg_46; // @[block_division.scala 33:34]
  reg  signReg_46; // @[block_division.scala 34:28]
  wire [12:0] _two_complement_14_T_15 = {1'h0,dotProductRegs_2_14}; // @[block_division.scala 41:16]
  wire [12:0] _two_complement_14_T_16 = ~_two_complement_14_T_15; // @[block_division.scala 41:10]
  wire [12:0] _two_complement_14_T_18 = _two_complement_14_T_16 + 13'h1; // @[block_division.scala 41:38]
  reg [5:0] multiplierReg_47; // @[block_division.scala 33:34]
  reg  signReg_47; // @[block_division.scala 34:28]
  wire [12:0] _two_complement_15_T_15 = {1'h0,dotProductRegs_2_15}; // @[block_division.scala 41:16]
  wire [12:0] _two_complement_15_T_16 = ~_two_complement_15_T_15; // @[block_division.scala 41:10]
  wire [12:0] _two_complement_15_T_18 = _two_complement_15_T_16 + 13'h1; // @[block_division.scala 41:38]
  wire [13:0] _acc_2_T = $signed(two_complement_buffer_2_0) + $signed(two_complement_buffer_2_1); // @[block_division.scala 46:46]
  wire [13:0] _GEN_28 = {{1{two_complement_buffer_2_2[12]}},two_complement_buffer_2_2}; // @[block_division.scala 46:46]
  wire [14:0] _acc_2_T_1 = $signed(_acc_2_T) + $signed(_GEN_28); // @[block_division.scala 46:46]
  wire [14:0] _GEN_29 = {{2{two_complement_buffer_2_3[12]}},two_complement_buffer_2_3}; // @[block_division.scala 46:46]
  wire [15:0] _acc_2_T_2 = $signed(_acc_2_T_1) + $signed(_GEN_29); // @[block_division.scala 46:46]
  wire [15:0] _GEN_30 = {{3{two_complement_buffer_2_4[12]}},two_complement_buffer_2_4}; // @[block_division.scala 46:46]
  wire [16:0] _acc_2_T_3 = $signed(_acc_2_T_2) + $signed(_GEN_30); // @[block_division.scala 46:46]
  wire [16:0] _GEN_31 = {{4{two_complement_buffer_2_5[12]}},two_complement_buffer_2_5}; // @[block_division.scala 46:46]
  wire [17:0] _acc_2_T_4 = $signed(_acc_2_T_3) + $signed(_GEN_31); // @[block_division.scala 46:46]
  wire [17:0] _GEN_32 = {{5{two_complement_buffer_2_6[12]}},two_complement_buffer_2_6}; // @[block_division.scala 46:46]
  wire [18:0] _acc_2_T_5 = $signed(_acc_2_T_4) + $signed(_GEN_32); // @[block_division.scala 46:46]
  wire [18:0] _GEN_33 = {{6{two_complement_buffer_2_7[12]}},two_complement_buffer_2_7}; // @[block_division.scala 46:46]
  wire [19:0] _acc_2_T_6 = $signed(_acc_2_T_5) + $signed(_GEN_33); // @[block_division.scala 46:46]
  wire [19:0] _GEN_34 = {{7{two_complement_buffer_2_8[12]}},two_complement_buffer_2_8}; // @[block_division.scala 46:46]
  wire [20:0] _acc_2_T_7 = $signed(_acc_2_T_6) + $signed(_GEN_34); // @[block_division.scala 46:46]
  wire [20:0] _GEN_35 = {{8{two_complement_buffer_2_9[12]}},two_complement_buffer_2_9}; // @[block_division.scala 46:46]
  wire [21:0] _acc_2_T_8 = $signed(_acc_2_T_7) + $signed(_GEN_35); // @[block_division.scala 46:46]
  wire [21:0] _GEN_36 = {{9{two_complement_buffer_2_10[12]}},two_complement_buffer_2_10}; // @[block_division.scala 46:46]
  wire [22:0] _acc_2_T_9 = $signed(_acc_2_T_8) + $signed(_GEN_36); // @[block_division.scala 46:46]
  wire [22:0] _GEN_37 = {{10{two_complement_buffer_2_11[12]}},two_complement_buffer_2_11}; // @[block_division.scala 46:46]
  wire [23:0] _acc_2_T_10 = $signed(_acc_2_T_9) + $signed(_GEN_37); // @[block_division.scala 46:46]
  wire [23:0] _GEN_38 = {{11{two_complement_buffer_2_12[12]}},two_complement_buffer_2_12}; // @[block_division.scala 46:46]
  wire [24:0] _acc_2_T_11 = $signed(_acc_2_T_10) + $signed(_GEN_38); // @[block_division.scala 46:46]
  wire [24:0] _GEN_39 = {{12{two_complement_buffer_2_13[12]}},two_complement_buffer_2_13}; // @[block_division.scala 46:46]
  wire [25:0] _acc_2_T_12 = $signed(_acc_2_T_11) + $signed(_GEN_39); // @[block_division.scala 46:46]
  wire [25:0] _GEN_40 = {{13{two_complement_buffer_2_14[12]}},two_complement_buffer_2_14}; // @[block_division.scala 46:46]
  wire [26:0] _acc_2_T_13 = $signed(_acc_2_T_12) + $signed(_GEN_40); // @[block_division.scala 46:46]
  wire [26:0] _GEN_41 = {{14{two_complement_buffer_2_15[12]}},two_complement_buffer_2_15}; // @[block_division.scala 46:46]
  wire [27:0] _acc_2_T_14 = $signed(_acc_2_T_13) + $signed(_GEN_41); // @[block_division.scala 46:46]
  wire [8:0] _exp_output_3_T = io_exp_a_3 + io_exp_b_3; // @[block_division.scala 27:34]
  reg [11:0] dotProductRegs_3_0; // @[block_division.scala 28:29]
  reg [11:0] dotProductRegs_3_1; // @[block_division.scala 28:29]
  reg [11:0] dotProductRegs_3_2; // @[block_division.scala 28:29]
  reg [11:0] dotProductRegs_3_3; // @[block_division.scala 28:29]
  reg [11:0] dotProductRegs_3_4; // @[block_division.scala 28:29]
  reg [11:0] dotProductRegs_3_5; // @[block_division.scala 28:29]
  reg [11:0] dotProductRegs_3_6; // @[block_division.scala 28:29]
  reg [11:0] dotProductRegs_3_7; // @[block_division.scala 28:29]
  reg [11:0] dotProductRegs_3_8; // @[block_division.scala 28:29]
  reg [11:0] dotProductRegs_3_9; // @[block_division.scala 28:29]
  reg [11:0] dotProductRegs_3_10; // @[block_division.scala 28:29]
  reg [11:0] dotProductRegs_3_11; // @[block_division.scala 28:29]
  reg [11:0] dotProductRegs_3_12; // @[block_division.scala 28:29]
  reg [11:0] dotProductRegs_3_13; // @[block_division.scala 28:29]
  reg [11:0] dotProductRegs_3_14; // @[block_division.scala 28:29]
  reg [11:0] dotProductRegs_3_15; // @[block_division.scala 28:29]
  reg  signs_3_0; // @[block_division.scala 29:20]
  reg  signs_3_1; // @[block_division.scala 29:20]
  reg  signs_3_2; // @[block_division.scala 29:20]
  reg  signs_3_3; // @[block_division.scala 29:20]
  reg  signs_3_4; // @[block_division.scala 29:20]
  reg  signs_3_5; // @[block_division.scala 29:20]
  reg  signs_3_6; // @[block_division.scala 29:20]
  reg  signs_3_7; // @[block_division.scala 29:20]
  reg  signs_3_8; // @[block_division.scala 29:20]
  reg  signs_3_9; // @[block_division.scala 29:20]
  reg  signs_3_10; // @[block_division.scala 29:20]
  reg  signs_3_11; // @[block_division.scala 29:20]
  reg  signs_3_12; // @[block_division.scala 29:20]
  reg  signs_3_13; // @[block_division.scala 29:20]
  reg  signs_3_14; // @[block_division.scala 29:20]
  reg  signs_3_15; // @[block_division.scala 29:20]
  reg [12:0] two_complement_3_0; // @[block_division.scala 30:29]
  reg [12:0] two_complement_3_1; // @[block_division.scala 30:29]
  reg [12:0] two_complement_3_2; // @[block_division.scala 30:29]
  reg [12:0] two_complement_3_3; // @[block_division.scala 30:29]
  reg [12:0] two_complement_3_4; // @[block_division.scala 30:29]
  reg [12:0] two_complement_3_5; // @[block_division.scala 30:29]
  reg [12:0] two_complement_3_6; // @[block_division.scala 30:29]
  reg [12:0] two_complement_3_7; // @[block_division.scala 30:29]
  reg [12:0] two_complement_3_8; // @[block_division.scala 30:29]
  reg [12:0] two_complement_3_9; // @[block_division.scala 30:29]
  reg [12:0] two_complement_3_10; // @[block_division.scala 30:29]
  reg [12:0] two_complement_3_11; // @[block_division.scala 30:29]
  reg [12:0] two_complement_3_12; // @[block_division.scala 30:29]
  reg [12:0] two_complement_3_13; // @[block_division.scala 30:29]
  reg [12:0] two_complement_3_14; // @[block_division.scala 30:29]
  reg [12:0] two_complement_3_15; // @[block_division.scala 30:29]
  reg [12:0] two_complement_buffer_3_0; // @[block_division.scala 31:36]
  reg [12:0] two_complement_buffer_3_1; // @[block_division.scala 31:36]
  reg [12:0] two_complement_buffer_3_2; // @[block_division.scala 31:36]
  reg [12:0] two_complement_buffer_3_3; // @[block_division.scala 31:36]
  reg [12:0] two_complement_buffer_3_4; // @[block_division.scala 31:36]
  reg [12:0] two_complement_buffer_3_5; // @[block_division.scala 31:36]
  reg [12:0] two_complement_buffer_3_6; // @[block_division.scala 31:36]
  reg [12:0] two_complement_buffer_3_7; // @[block_division.scala 31:36]
  reg [12:0] two_complement_buffer_3_8; // @[block_division.scala 31:36]
  reg [12:0] two_complement_buffer_3_9; // @[block_division.scala 31:36]
  reg [12:0] two_complement_buffer_3_10; // @[block_division.scala 31:36]
  reg [12:0] two_complement_buffer_3_11; // @[block_division.scala 31:36]
  reg [12:0] two_complement_buffer_3_12; // @[block_division.scala 31:36]
  reg [12:0] two_complement_buffer_3_13; // @[block_division.scala 31:36]
  reg [12:0] two_complement_buffer_3_14; // @[block_division.scala 31:36]
  reg [12:0] two_complement_buffer_3_15; // @[block_division.scala 31:36]
  reg [5:0] multiplierReg_48; // @[block_division.scala 33:34]
  reg  signReg_48; // @[block_division.scala 34:28]
  wire [12:0] _two_complement_0_T_22 = {1'h0,dotProductRegs_3_0}; // @[block_division.scala 41:16]
  wire [12:0] _two_complement_0_T_23 = ~_two_complement_0_T_22; // @[block_division.scala 41:10]
  wire [12:0] _two_complement_0_T_25 = _two_complement_0_T_23 + 13'h1; // @[block_division.scala 41:38]
  reg [5:0] multiplierReg_49; // @[block_division.scala 33:34]
  reg  signReg_49; // @[block_division.scala 34:28]
  wire [12:0] _two_complement_1_T_22 = {1'h0,dotProductRegs_3_1}; // @[block_division.scala 41:16]
  wire [12:0] _two_complement_1_T_23 = ~_two_complement_1_T_22; // @[block_division.scala 41:10]
  wire [12:0] _two_complement_1_T_25 = _two_complement_1_T_23 + 13'h1; // @[block_division.scala 41:38]
  reg [5:0] multiplierReg_50; // @[block_division.scala 33:34]
  reg  signReg_50; // @[block_division.scala 34:28]
  wire [12:0] _two_complement_2_T_22 = {1'h0,dotProductRegs_3_2}; // @[block_division.scala 41:16]
  wire [12:0] _two_complement_2_T_23 = ~_two_complement_2_T_22; // @[block_division.scala 41:10]
  wire [12:0] _two_complement_2_T_25 = _two_complement_2_T_23 + 13'h1; // @[block_division.scala 41:38]
  reg [5:0] multiplierReg_51; // @[block_division.scala 33:34]
  reg  signReg_51; // @[block_division.scala 34:28]
  wire [12:0] _two_complement_3_T_22 = {1'h0,dotProductRegs_3_3}; // @[block_division.scala 41:16]
  wire [12:0] _two_complement_3_T_23 = ~_two_complement_3_T_22; // @[block_division.scala 41:10]
  wire [12:0] _two_complement_3_T_25 = _two_complement_3_T_23 + 13'h1; // @[block_division.scala 41:38]
  reg [5:0] multiplierReg_52; // @[block_division.scala 33:34]
  reg  signReg_52; // @[block_division.scala 34:28]
  wire [12:0] _two_complement_4_T_22 = {1'h0,dotProductRegs_3_4}; // @[block_division.scala 41:16]
  wire [12:0] _two_complement_4_T_23 = ~_two_complement_4_T_22; // @[block_division.scala 41:10]
  wire [12:0] _two_complement_4_T_25 = _two_complement_4_T_23 + 13'h1; // @[block_division.scala 41:38]
  reg [5:0] multiplierReg_53; // @[block_division.scala 33:34]
  reg  signReg_53; // @[block_division.scala 34:28]
  wire [12:0] _two_complement_5_T_22 = {1'h0,dotProductRegs_3_5}; // @[block_division.scala 41:16]
  wire [12:0] _two_complement_5_T_23 = ~_two_complement_5_T_22; // @[block_division.scala 41:10]
  wire [12:0] _two_complement_5_T_25 = _two_complement_5_T_23 + 13'h1; // @[block_division.scala 41:38]
  reg [5:0] multiplierReg_54; // @[block_division.scala 33:34]
  reg  signReg_54; // @[block_division.scala 34:28]
  wire [12:0] _two_complement_6_T_22 = {1'h0,dotProductRegs_3_6}; // @[block_division.scala 41:16]
  wire [12:0] _two_complement_6_T_23 = ~_two_complement_6_T_22; // @[block_division.scala 41:10]
  wire [12:0] _two_complement_6_T_25 = _two_complement_6_T_23 + 13'h1; // @[block_division.scala 41:38]
  reg [5:0] multiplierReg_55; // @[block_division.scala 33:34]
  reg  signReg_55; // @[block_division.scala 34:28]
  wire [12:0] _two_complement_7_T_22 = {1'h0,dotProductRegs_3_7}; // @[block_division.scala 41:16]
  wire [12:0] _two_complement_7_T_23 = ~_two_complement_7_T_22; // @[block_division.scala 41:10]
  wire [12:0] _two_complement_7_T_25 = _two_complement_7_T_23 + 13'h1; // @[block_division.scala 41:38]
  reg [5:0] multiplierReg_56; // @[block_division.scala 33:34]
  reg  signReg_56; // @[block_division.scala 34:28]
  wire [12:0] _two_complement_8_T_22 = {1'h0,dotProductRegs_3_8}; // @[block_division.scala 41:16]
  wire [12:0] _two_complement_8_T_23 = ~_two_complement_8_T_22; // @[block_division.scala 41:10]
  wire [12:0] _two_complement_8_T_25 = _two_complement_8_T_23 + 13'h1; // @[block_division.scala 41:38]
  reg [5:0] multiplierReg_57; // @[block_division.scala 33:34]
  reg  signReg_57; // @[block_division.scala 34:28]
  wire [12:0] _two_complement_9_T_22 = {1'h0,dotProductRegs_3_9}; // @[block_division.scala 41:16]
  wire [12:0] _two_complement_9_T_23 = ~_two_complement_9_T_22; // @[block_division.scala 41:10]
  wire [12:0] _two_complement_9_T_25 = _two_complement_9_T_23 + 13'h1; // @[block_division.scala 41:38]
  reg [5:0] multiplierReg_58; // @[block_division.scala 33:34]
  reg  signReg_58; // @[block_division.scala 34:28]
  wire [12:0] _two_complement_10_T_22 = {1'h0,dotProductRegs_3_10}; // @[block_division.scala 41:16]
  wire [12:0] _two_complement_10_T_23 = ~_two_complement_10_T_22; // @[block_division.scala 41:10]
  wire [12:0] _two_complement_10_T_25 = _two_complement_10_T_23 + 13'h1; // @[block_division.scala 41:38]
  reg [5:0] multiplierReg_59; // @[block_division.scala 33:34]
  reg  signReg_59; // @[block_division.scala 34:28]
  wire [12:0] _two_complement_11_T_22 = {1'h0,dotProductRegs_3_11}; // @[block_division.scala 41:16]
  wire [12:0] _two_complement_11_T_23 = ~_two_complement_11_T_22; // @[block_division.scala 41:10]
  wire [12:0] _two_complement_11_T_25 = _two_complement_11_T_23 + 13'h1; // @[block_division.scala 41:38]
  reg [5:0] multiplierReg_60; // @[block_division.scala 33:34]
  reg  signReg_60; // @[block_division.scala 34:28]
  wire [12:0] _two_complement_12_T_22 = {1'h0,dotProductRegs_3_12}; // @[block_division.scala 41:16]
  wire [12:0] _two_complement_12_T_23 = ~_two_complement_12_T_22; // @[block_division.scala 41:10]
  wire [12:0] _two_complement_12_T_25 = _two_complement_12_T_23 + 13'h1; // @[block_division.scala 41:38]
  reg [5:0] multiplierReg_61; // @[block_division.scala 33:34]
  reg  signReg_61; // @[block_division.scala 34:28]
  wire [12:0] _two_complement_13_T_22 = {1'h0,dotProductRegs_3_13}; // @[block_division.scala 41:16]
  wire [12:0] _two_complement_13_T_23 = ~_two_complement_13_T_22; // @[block_division.scala 41:10]
  wire [12:0] _two_complement_13_T_25 = _two_complement_13_T_23 + 13'h1; // @[block_division.scala 41:38]
  reg [5:0] multiplierReg_62; // @[block_division.scala 33:34]
  reg  signReg_62; // @[block_division.scala 34:28]
  wire [12:0] _two_complement_14_T_22 = {1'h0,dotProductRegs_3_14}; // @[block_division.scala 41:16]
  wire [12:0] _two_complement_14_T_23 = ~_two_complement_14_T_22; // @[block_division.scala 41:10]
  wire [12:0] _two_complement_14_T_25 = _two_complement_14_T_23 + 13'h1; // @[block_division.scala 41:38]
  reg [5:0] multiplierReg_63; // @[block_division.scala 33:34]
  reg  signReg_63; // @[block_division.scala 34:28]
  wire [12:0] _two_complement_15_T_22 = {1'h0,dotProductRegs_3_15}; // @[block_division.scala 41:16]
  wire [12:0] _two_complement_15_T_23 = ~_two_complement_15_T_22; // @[block_division.scala 41:10]
  wire [12:0] _two_complement_15_T_25 = _two_complement_15_T_23 + 13'h1; // @[block_division.scala 41:38]
  wire [13:0] _acc_3_T = $signed(two_complement_buffer_3_0) + $signed(two_complement_buffer_3_1); // @[block_division.scala 46:46]
  wire [13:0] _GEN_42 = {{1{two_complement_buffer_3_2[12]}},two_complement_buffer_3_2}; // @[block_division.scala 46:46]
  wire [14:0] _acc_3_T_1 = $signed(_acc_3_T) + $signed(_GEN_42); // @[block_division.scala 46:46]
  wire [14:0] _GEN_43 = {{2{two_complement_buffer_3_3[12]}},two_complement_buffer_3_3}; // @[block_division.scala 46:46]
  wire [15:0] _acc_3_T_2 = $signed(_acc_3_T_1) + $signed(_GEN_43); // @[block_division.scala 46:46]
  wire [15:0] _GEN_44 = {{3{two_complement_buffer_3_4[12]}},two_complement_buffer_3_4}; // @[block_division.scala 46:46]
  wire [16:0] _acc_3_T_3 = $signed(_acc_3_T_2) + $signed(_GEN_44); // @[block_division.scala 46:46]
  wire [16:0] _GEN_45 = {{4{two_complement_buffer_3_5[12]}},two_complement_buffer_3_5}; // @[block_division.scala 46:46]
  wire [17:0] _acc_3_T_4 = $signed(_acc_3_T_3) + $signed(_GEN_45); // @[block_division.scala 46:46]
  wire [17:0] _GEN_46 = {{5{two_complement_buffer_3_6[12]}},two_complement_buffer_3_6}; // @[block_division.scala 46:46]
  wire [18:0] _acc_3_T_5 = $signed(_acc_3_T_4) + $signed(_GEN_46); // @[block_division.scala 46:46]
  wire [18:0] _GEN_47 = {{6{two_complement_buffer_3_7[12]}},two_complement_buffer_3_7}; // @[block_division.scala 46:46]
  wire [19:0] _acc_3_T_6 = $signed(_acc_3_T_5) + $signed(_GEN_47); // @[block_division.scala 46:46]
  wire [19:0] _GEN_48 = {{7{two_complement_buffer_3_8[12]}},two_complement_buffer_3_8}; // @[block_division.scala 46:46]
  wire [20:0] _acc_3_T_7 = $signed(_acc_3_T_6) + $signed(_GEN_48); // @[block_division.scala 46:46]
  wire [20:0] _GEN_49 = {{8{two_complement_buffer_3_9[12]}},two_complement_buffer_3_9}; // @[block_division.scala 46:46]
  wire [21:0] _acc_3_T_8 = $signed(_acc_3_T_7) + $signed(_GEN_49); // @[block_division.scala 46:46]
  wire [21:0] _GEN_50 = {{9{two_complement_buffer_3_10[12]}},two_complement_buffer_3_10}; // @[block_division.scala 46:46]
  wire [22:0] _acc_3_T_9 = $signed(_acc_3_T_8) + $signed(_GEN_50); // @[block_division.scala 46:46]
  wire [22:0] _GEN_51 = {{10{two_complement_buffer_3_11[12]}},two_complement_buffer_3_11}; // @[block_division.scala 46:46]
  wire [23:0] _acc_3_T_10 = $signed(_acc_3_T_9) + $signed(_GEN_51); // @[block_division.scala 46:46]
  wire [23:0] _GEN_52 = {{11{two_complement_buffer_3_12[12]}},two_complement_buffer_3_12}; // @[block_division.scala 46:46]
  wire [24:0] _acc_3_T_11 = $signed(_acc_3_T_10) + $signed(_GEN_52); // @[block_division.scala 46:46]
  wire [24:0] _GEN_53 = {{12{two_complement_buffer_3_13[12]}},two_complement_buffer_3_13}; // @[block_division.scala 46:46]
  wire [25:0] _acc_3_T_12 = $signed(_acc_3_T_11) + $signed(_GEN_53); // @[block_division.scala 46:46]
  wire [25:0] _GEN_54 = {{13{two_complement_buffer_3_14[12]}},two_complement_buffer_3_14}; // @[block_division.scala 46:46]
  wire [26:0] _acc_3_T_13 = $signed(_acc_3_T_12) + $signed(_GEN_54); // @[block_division.scala 46:46]
  wire [26:0] _GEN_55 = {{14{two_complement_buffer_3_15[12]}},two_complement_buffer_3_15}; // @[block_division.scala 46:46]
  wire [27:0] _acc_3_T_14 = $signed(_acc_3_T_13) + $signed(_GEN_55); // @[block_division.scala 46:46]
  adderTree2 adderTreeInst ( // @[block_division.scala 50:29]
    .clock(adderTreeInst_clock),
    .reset(adderTreeInst_reset),
    .io_sign_man_0(adderTreeInst_io_sign_man_0),
    .io_sign_man_1(adderTreeInst_io_sign_man_1),
    .io_sign_man_2(adderTreeInst_io_sign_man_2),
    .io_sign_man_3(adderTreeInst_io_sign_man_3),
    .io_exps_0(adderTreeInst_io_exps_0),
    .io_exps_1(adderTreeInst_io_exps_1),
    .io_exps_2(adderTreeInst_io_exps_2),
    .io_exps_3(adderTreeInst_io_exps_3),
    .io_control_signal(adderTreeInst_io_control_signal),
    .io_control_signal2(adderTreeInst_io_control_signal2),
    .io_result_tree(adderTreeInst_io_result_tree)
  );
  assign io_result = adderTreeInst_io_result_tree; // @[block_division.scala 55:13]
  assign adderTreeInst_clock = clock;
  assign adderTreeInst_reset = reset;
  assign adderTreeInst_io_sign_man_0 = acc_0; // @[block_division.scala 51:{39,39}]
  assign adderTreeInst_io_sign_man_1 = acc_1; // @[block_division.scala 51:{39,39}]
  assign adderTreeInst_io_sign_man_2 = acc_2; // @[block_division.scala 51:{39,39}]
  assign adderTreeInst_io_sign_man_3 = acc_3; // @[block_division.scala 51:{39,39}]
  assign adderTreeInst_io_exps_0 = exp_output_0; // @[block_division.scala 52:{35,35}]
  assign adderTreeInst_io_exps_1 = exp_output_1; // @[block_division.scala 52:{35,35}]
  assign adderTreeInst_io_exps_2 = exp_output_2; // @[block_division.scala 52:{35,35}]
  assign adderTreeInst_io_exps_3 = exp_output_3; // @[block_division.scala 52:{35,35}]
  assign adderTreeInst_io_control_signal = io_control; // @[block_division.scala 53:35]
  assign adderTreeInst_io_control_signal2 = io_control2; // @[block_division.scala 54:36]
  always @(posedge clock) begin
    if (reset) begin // @[block_division.scala 19:60]
      exp_output_0 <= 9'h0; // @[block_division.scala 19:60]
    end else begin
      exp_output_0 <= _exp_output_0_T; // @[block_division.scala 27:19]
    end
    if (reset) begin // @[block_division.scala 19:60]
      exp_output_1 <= 9'h0; // @[block_division.scala 19:60]
    end else begin
      exp_output_1 <= _exp_output_1_T; // @[block_division.scala 27:19]
    end
    if (reset) begin // @[block_division.scala 19:60]
      exp_output_2 <= 9'h0; // @[block_division.scala 19:60]
    end else begin
      exp_output_2 <= _exp_output_2_T; // @[block_division.scala 27:19]
    end
    if (reset) begin // @[block_division.scala 19:60]
      exp_output_3 <= 9'h0; // @[block_division.scala 19:60]
    end else begin
      exp_output_3 <= _exp_output_3_T; // @[block_division.scala 27:19]
    end
    if (reset) begin // @[block_division.scala 24:53]
      acc_0 <= 28'sh0; // @[block_division.scala 24:53]
    end else begin
      acc_0 <= _acc_0_T_14; // @[block_division.scala 46:12]
    end
    if (reset) begin // @[block_division.scala 24:53]
      acc_1 <= 28'sh0; // @[block_division.scala 24:53]
    end else begin
      acc_1 <= _acc_1_T_14; // @[block_division.scala 46:12]
    end
    if (reset) begin // @[block_division.scala 24:53]
      acc_2 <= 28'sh0; // @[block_division.scala 24:53]
    end else begin
      acc_2 <= _acc_2_T_14; // @[block_division.scala 46:12]
    end
    if (reset) begin // @[block_division.scala 24:53]
      acc_3 <= 28'sh0; // @[block_division.scala 24:53]
    end else begin
      acc_3 <= _acc_3_T_14; // @[block_division.scala 46:12]
    end
    dotProductRegs__0 <= multiplierReg * io_man_b_0; // @[block_division.scala 37:42]
    dotProductRegs__1 <= multiplierReg_1 * io_man_b_1; // @[block_division.scala 37:42]
    dotProductRegs__2 <= multiplierReg_2 * io_man_b_2; // @[block_division.scala 37:42]
    dotProductRegs__3 <= multiplierReg_3 * io_man_b_3; // @[block_division.scala 37:42]
    dotProductRegs__4 <= multiplierReg_4 * io_man_b_4; // @[block_division.scala 37:42]
    dotProductRegs__5 <= multiplierReg_5 * io_man_b_5; // @[block_division.scala 37:42]
    dotProductRegs__6 <= multiplierReg_6 * io_man_b_6; // @[block_division.scala 37:42]
    dotProductRegs__7 <= multiplierReg_7 * io_man_b_7; // @[block_division.scala 37:42]
    dotProductRegs__8 <= multiplierReg_8 * io_man_b_8; // @[block_division.scala 37:42]
    dotProductRegs__9 <= multiplierReg_9 * io_man_b_9; // @[block_division.scala 37:42]
    dotProductRegs__10 <= multiplierReg_10 * io_man_b_10; // @[block_division.scala 37:42]
    dotProductRegs__11 <= multiplierReg_11 * io_man_b_11; // @[block_division.scala 37:42]
    dotProductRegs__12 <= multiplierReg_12 * io_man_b_12; // @[block_division.scala 37:42]
    dotProductRegs__13 <= multiplierReg_13 * io_man_b_13; // @[block_division.scala 37:42]
    dotProductRegs__14 <= multiplierReg_14 * io_man_b_14; // @[block_division.scala 37:42]
    dotProductRegs__15 <= multiplierReg_15 * io_man_b_15; // @[block_division.scala 37:42]
    signs__0 <= signReg ^ io_sign_b_0; // @[block_division.scala 38:27]
    signs__1 <= signReg_1 ^ io_sign_b_1; // @[block_division.scala 38:27]
    signs__2 <= signReg_2 ^ io_sign_b_2; // @[block_division.scala 38:27]
    signs__3 <= signReg_3 ^ io_sign_b_3; // @[block_division.scala 38:27]
    signs__4 <= signReg_4 ^ io_sign_b_4; // @[block_division.scala 38:27]
    signs__5 <= signReg_5 ^ io_sign_b_5; // @[block_division.scala 38:27]
    signs__6 <= signReg_6 ^ io_sign_b_6; // @[block_division.scala 38:27]
    signs__7 <= signReg_7 ^ io_sign_b_7; // @[block_division.scala 38:27]
    signs__8 <= signReg_8 ^ io_sign_b_8; // @[block_division.scala 38:27]
    signs__9 <= signReg_9 ^ io_sign_b_9; // @[block_division.scala 38:27]
    signs__10 <= signReg_10 ^ io_sign_b_10; // @[block_division.scala 38:27]
    signs__11 <= signReg_11 ^ io_sign_b_11; // @[block_division.scala 38:27]
    signs__12 <= signReg_12 ^ io_sign_b_12; // @[block_division.scala 38:27]
    signs__13 <= signReg_13 ^ io_sign_b_13; // @[block_division.scala 38:27]
    signs__14 <= signReg_14 ^ io_sign_b_14; // @[block_division.scala 38:27]
    signs__15 <= signReg_15 ^ io_sign_b_15; // @[block_division.scala 38:27]
    if (signs__0) begin // @[block_division.scala 39:31]
      two_complement__0 <= _two_complement_0_T_4;
    end else begin
      two_complement__0 <= _two_complement_0_T_1;
    end
    if (signs__1) begin // @[block_division.scala 39:31]
      two_complement__1 <= _two_complement_1_T_4;
    end else begin
      two_complement__1 <= _two_complement_1_T_1;
    end
    if (signs__2) begin // @[block_division.scala 39:31]
      two_complement__2 <= _two_complement_2_T_4;
    end else begin
      two_complement__2 <= _two_complement_2_T_1;
    end
    if (signs__3) begin // @[block_division.scala 39:31]
      two_complement__3 <= _two_complement_3_T_4;
    end else begin
      two_complement__3 <= _two_complement_3_T_1;
    end
    if (signs__4) begin // @[block_division.scala 39:31]
      two_complement__4 <= _two_complement_4_T_4;
    end else begin
      two_complement__4 <= _two_complement_4_T_1;
    end
    if (signs__5) begin // @[block_division.scala 39:31]
      two_complement__5 <= _two_complement_5_T_4;
    end else begin
      two_complement__5 <= _two_complement_5_T_1;
    end
    if (signs__6) begin // @[block_division.scala 39:31]
      two_complement__6 <= _two_complement_6_T_4;
    end else begin
      two_complement__6 <= _two_complement_6_T_1;
    end
    if (signs__7) begin // @[block_division.scala 39:31]
      two_complement__7 <= _two_complement_7_T_4;
    end else begin
      two_complement__7 <= _two_complement_7_T_1;
    end
    if (signs__8) begin // @[block_division.scala 39:31]
      two_complement__8 <= _two_complement_8_T_4;
    end else begin
      two_complement__8 <= _two_complement_8_T_1;
    end
    if (signs__9) begin // @[block_division.scala 39:31]
      two_complement__9 <= _two_complement_9_T_4;
    end else begin
      two_complement__9 <= _two_complement_9_T_1;
    end
    if (signs__10) begin // @[block_division.scala 39:31]
      two_complement__10 <= _two_complement_10_T_4;
    end else begin
      two_complement__10 <= _two_complement_10_T_1;
    end
    if (signs__11) begin // @[block_division.scala 39:31]
      two_complement__11 <= _two_complement_11_T_4;
    end else begin
      two_complement__11 <= _two_complement_11_T_1;
    end
    if (signs__12) begin // @[block_division.scala 39:31]
      two_complement__12 <= _two_complement_12_T_4;
    end else begin
      two_complement__12 <= _two_complement_12_T_1;
    end
    if (signs__13) begin // @[block_division.scala 39:31]
      two_complement__13 <= _two_complement_13_T_4;
    end else begin
      two_complement__13 <= _two_complement_13_T_1;
    end
    if (signs__14) begin // @[block_division.scala 39:31]
      two_complement__14 <= _two_complement_14_T_4;
    end else begin
      two_complement__14 <= _two_complement_14_T_1;
    end
    if (signs__15) begin // @[block_division.scala 39:31]
      two_complement__15 <= _two_complement_15_T_4;
    end else begin
      two_complement__15 <= _two_complement_15_T_1;
    end
    two_complement_buffer__0 <= two_complement__0; // @[block_division.scala 44:53]
    two_complement_buffer__1 <= two_complement__1; // @[block_division.scala 44:53]
    two_complement_buffer__2 <= two_complement__2; // @[block_division.scala 44:53]
    two_complement_buffer__3 <= two_complement__3; // @[block_division.scala 44:53]
    two_complement_buffer__4 <= two_complement__4; // @[block_division.scala 44:53]
    two_complement_buffer__5 <= two_complement__5; // @[block_division.scala 44:53]
    two_complement_buffer__6 <= two_complement__6; // @[block_division.scala 44:53]
    two_complement_buffer__7 <= two_complement__7; // @[block_division.scala 44:53]
    two_complement_buffer__8 <= two_complement__8; // @[block_division.scala 44:53]
    two_complement_buffer__9 <= two_complement__9; // @[block_division.scala 44:53]
    two_complement_buffer__10 <= two_complement__10; // @[block_division.scala 44:53]
    two_complement_buffer__11 <= two_complement__11; // @[block_division.scala 44:53]
    two_complement_buffer__12 <= two_complement__12; // @[block_division.scala 44:53]
    two_complement_buffer__13 <= two_complement__13; // @[block_division.scala 44:53]
    two_complement_buffer__14 <= two_complement__14; // @[block_division.scala 44:53]
    two_complement_buffer__15 <= two_complement__15; // @[block_division.scala 44:53]
    if (reset) begin // @[block_division.scala 33:34]
      multiplierReg <= 6'h0; // @[block_division.scala 33:34]
    end else begin
      multiplierReg <= io_man_a_0; // @[block_division.scala 36:21]
    end
    if (reset) begin // @[block_division.scala 34:28]
      signReg <= 1'h0; // @[block_division.scala 34:28]
    end else begin
      signReg <= io_sign_a_0; // @[block_division.scala 35:15]
    end
    if (reset) begin // @[block_division.scala 33:34]
      multiplierReg_1 <= 6'h0; // @[block_division.scala 33:34]
    end else begin
      multiplierReg_1 <= io_man_a_1; // @[block_division.scala 36:21]
    end
    if (reset) begin // @[block_division.scala 34:28]
      signReg_1 <= 1'h0; // @[block_division.scala 34:28]
    end else begin
      signReg_1 <= io_sign_a_1; // @[block_division.scala 35:15]
    end
    if (reset) begin // @[block_division.scala 33:34]
      multiplierReg_2 <= 6'h0; // @[block_division.scala 33:34]
    end else begin
      multiplierReg_2 <= io_man_a_2; // @[block_division.scala 36:21]
    end
    if (reset) begin // @[block_division.scala 34:28]
      signReg_2 <= 1'h0; // @[block_division.scala 34:28]
    end else begin
      signReg_2 <= io_sign_a_2; // @[block_division.scala 35:15]
    end
    if (reset) begin // @[block_division.scala 33:34]
      multiplierReg_3 <= 6'h0; // @[block_division.scala 33:34]
    end else begin
      multiplierReg_3 <= io_man_a_3; // @[block_division.scala 36:21]
    end
    if (reset) begin // @[block_division.scala 34:28]
      signReg_3 <= 1'h0; // @[block_division.scala 34:28]
    end else begin
      signReg_3 <= io_sign_a_3; // @[block_division.scala 35:15]
    end
    if (reset) begin // @[block_division.scala 33:34]
      multiplierReg_4 <= 6'h0; // @[block_division.scala 33:34]
    end else begin
      multiplierReg_4 <= io_man_a_4; // @[block_division.scala 36:21]
    end
    if (reset) begin // @[block_division.scala 34:28]
      signReg_4 <= 1'h0; // @[block_division.scala 34:28]
    end else begin
      signReg_4 <= io_sign_a_4; // @[block_division.scala 35:15]
    end
    if (reset) begin // @[block_division.scala 33:34]
      multiplierReg_5 <= 6'h0; // @[block_division.scala 33:34]
    end else begin
      multiplierReg_5 <= io_man_a_5; // @[block_division.scala 36:21]
    end
    if (reset) begin // @[block_division.scala 34:28]
      signReg_5 <= 1'h0; // @[block_division.scala 34:28]
    end else begin
      signReg_5 <= io_sign_a_5; // @[block_division.scala 35:15]
    end
    if (reset) begin // @[block_division.scala 33:34]
      multiplierReg_6 <= 6'h0; // @[block_division.scala 33:34]
    end else begin
      multiplierReg_6 <= io_man_a_6; // @[block_division.scala 36:21]
    end
    if (reset) begin // @[block_division.scala 34:28]
      signReg_6 <= 1'h0; // @[block_division.scala 34:28]
    end else begin
      signReg_6 <= io_sign_a_6; // @[block_division.scala 35:15]
    end
    if (reset) begin // @[block_division.scala 33:34]
      multiplierReg_7 <= 6'h0; // @[block_division.scala 33:34]
    end else begin
      multiplierReg_7 <= io_man_a_7; // @[block_division.scala 36:21]
    end
    if (reset) begin // @[block_division.scala 34:28]
      signReg_7 <= 1'h0; // @[block_division.scala 34:28]
    end else begin
      signReg_7 <= io_sign_a_7; // @[block_division.scala 35:15]
    end
    if (reset) begin // @[block_division.scala 33:34]
      multiplierReg_8 <= 6'h0; // @[block_division.scala 33:34]
    end else begin
      multiplierReg_8 <= io_man_a_8; // @[block_division.scala 36:21]
    end
    if (reset) begin // @[block_division.scala 34:28]
      signReg_8 <= 1'h0; // @[block_division.scala 34:28]
    end else begin
      signReg_8 <= io_sign_a_8; // @[block_division.scala 35:15]
    end
    if (reset) begin // @[block_division.scala 33:34]
      multiplierReg_9 <= 6'h0; // @[block_division.scala 33:34]
    end else begin
      multiplierReg_9 <= io_man_a_9; // @[block_division.scala 36:21]
    end
    if (reset) begin // @[block_division.scala 34:28]
      signReg_9 <= 1'h0; // @[block_division.scala 34:28]
    end else begin
      signReg_9 <= io_sign_a_9; // @[block_division.scala 35:15]
    end
    if (reset) begin // @[block_division.scala 33:34]
      multiplierReg_10 <= 6'h0; // @[block_division.scala 33:34]
    end else begin
      multiplierReg_10 <= io_man_a_10; // @[block_division.scala 36:21]
    end
    if (reset) begin // @[block_division.scala 34:28]
      signReg_10 <= 1'h0; // @[block_division.scala 34:28]
    end else begin
      signReg_10 <= io_sign_a_10; // @[block_division.scala 35:15]
    end
    if (reset) begin // @[block_division.scala 33:34]
      multiplierReg_11 <= 6'h0; // @[block_division.scala 33:34]
    end else begin
      multiplierReg_11 <= io_man_a_11; // @[block_division.scala 36:21]
    end
    if (reset) begin // @[block_division.scala 34:28]
      signReg_11 <= 1'h0; // @[block_division.scala 34:28]
    end else begin
      signReg_11 <= io_sign_a_11; // @[block_division.scala 35:15]
    end
    if (reset) begin // @[block_division.scala 33:34]
      multiplierReg_12 <= 6'h0; // @[block_division.scala 33:34]
    end else begin
      multiplierReg_12 <= io_man_a_12; // @[block_division.scala 36:21]
    end
    if (reset) begin // @[block_division.scala 34:28]
      signReg_12 <= 1'h0; // @[block_division.scala 34:28]
    end else begin
      signReg_12 <= io_sign_a_12; // @[block_division.scala 35:15]
    end
    if (reset) begin // @[block_division.scala 33:34]
      multiplierReg_13 <= 6'h0; // @[block_division.scala 33:34]
    end else begin
      multiplierReg_13 <= io_man_a_13; // @[block_division.scala 36:21]
    end
    if (reset) begin // @[block_division.scala 34:28]
      signReg_13 <= 1'h0; // @[block_division.scala 34:28]
    end else begin
      signReg_13 <= io_sign_a_13; // @[block_division.scala 35:15]
    end
    if (reset) begin // @[block_division.scala 33:34]
      multiplierReg_14 <= 6'h0; // @[block_division.scala 33:34]
    end else begin
      multiplierReg_14 <= io_man_a_14; // @[block_division.scala 36:21]
    end
    if (reset) begin // @[block_division.scala 34:28]
      signReg_14 <= 1'h0; // @[block_division.scala 34:28]
    end else begin
      signReg_14 <= io_sign_a_14; // @[block_division.scala 35:15]
    end
    if (reset) begin // @[block_division.scala 33:34]
      multiplierReg_15 <= 6'h0; // @[block_division.scala 33:34]
    end else begin
      multiplierReg_15 <= io_man_a_15; // @[block_division.scala 36:21]
    end
    if (reset) begin // @[block_division.scala 34:28]
      signReg_15 <= 1'h0; // @[block_division.scala 34:28]
    end else begin
      signReg_15 <= io_sign_a_15; // @[block_division.scala 35:15]
    end
    dotProductRegs_1_0 <= multiplierReg_16 * io_man_b_16; // @[block_division.scala 37:42]
    dotProductRegs_1_1 <= multiplierReg_17 * io_man_b_17; // @[block_division.scala 37:42]
    dotProductRegs_1_2 <= multiplierReg_18 * io_man_b_18; // @[block_division.scala 37:42]
    dotProductRegs_1_3 <= multiplierReg_19 * io_man_b_19; // @[block_division.scala 37:42]
    dotProductRegs_1_4 <= multiplierReg_20 * io_man_b_20; // @[block_division.scala 37:42]
    dotProductRegs_1_5 <= multiplierReg_21 * io_man_b_21; // @[block_division.scala 37:42]
    dotProductRegs_1_6 <= multiplierReg_22 * io_man_b_22; // @[block_division.scala 37:42]
    dotProductRegs_1_7 <= multiplierReg_23 * io_man_b_23; // @[block_division.scala 37:42]
    dotProductRegs_1_8 <= multiplierReg_24 * io_man_b_24; // @[block_division.scala 37:42]
    dotProductRegs_1_9 <= multiplierReg_25 * io_man_b_25; // @[block_division.scala 37:42]
    dotProductRegs_1_10 <= multiplierReg_26 * io_man_b_26; // @[block_division.scala 37:42]
    dotProductRegs_1_11 <= multiplierReg_27 * io_man_b_27; // @[block_division.scala 37:42]
    dotProductRegs_1_12 <= multiplierReg_28 * io_man_b_28; // @[block_division.scala 37:42]
    dotProductRegs_1_13 <= multiplierReg_29 * io_man_b_29; // @[block_division.scala 37:42]
    dotProductRegs_1_14 <= multiplierReg_30 * io_man_b_30; // @[block_division.scala 37:42]
    dotProductRegs_1_15 <= multiplierReg_31 * io_man_b_31; // @[block_division.scala 37:42]
    signs_1_0 <= signReg_16 ^ io_sign_b_16; // @[block_division.scala 38:27]
    signs_1_1 <= signReg_17 ^ io_sign_b_17; // @[block_division.scala 38:27]
    signs_1_2 <= signReg_18 ^ io_sign_b_18; // @[block_division.scala 38:27]
    signs_1_3 <= signReg_19 ^ io_sign_b_19; // @[block_division.scala 38:27]
    signs_1_4 <= signReg_20 ^ io_sign_b_20; // @[block_division.scala 38:27]
    signs_1_5 <= signReg_21 ^ io_sign_b_21; // @[block_division.scala 38:27]
    signs_1_6 <= signReg_22 ^ io_sign_b_22; // @[block_division.scala 38:27]
    signs_1_7 <= signReg_23 ^ io_sign_b_23; // @[block_division.scala 38:27]
    signs_1_8 <= signReg_24 ^ io_sign_b_24; // @[block_division.scala 38:27]
    signs_1_9 <= signReg_25 ^ io_sign_b_25; // @[block_division.scala 38:27]
    signs_1_10 <= signReg_26 ^ io_sign_b_26; // @[block_division.scala 38:27]
    signs_1_11 <= signReg_27 ^ io_sign_b_27; // @[block_division.scala 38:27]
    signs_1_12 <= signReg_28 ^ io_sign_b_28; // @[block_division.scala 38:27]
    signs_1_13 <= signReg_29 ^ io_sign_b_29; // @[block_division.scala 38:27]
    signs_1_14 <= signReg_30 ^ io_sign_b_30; // @[block_division.scala 38:27]
    signs_1_15 <= signReg_31 ^ io_sign_b_31; // @[block_division.scala 38:27]
    if (signs_1_0) begin // @[block_division.scala 39:31]
      two_complement_1_0 <= _two_complement_0_T_11;
    end else begin
      two_complement_1_0 <= _two_complement_0_T_8;
    end
    if (signs_1_1) begin // @[block_division.scala 39:31]
      two_complement_1_1 <= _two_complement_1_T_11;
    end else begin
      two_complement_1_1 <= _two_complement_1_T_8;
    end
    if (signs_1_2) begin // @[block_division.scala 39:31]
      two_complement_1_2 <= _two_complement_2_T_11;
    end else begin
      two_complement_1_2 <= _two_complement_2_T_8;
    end
    if (signs_1_3) begin // @[block_division.scala 39:31]
      two_complement_1_3 <= _two_complement_3_T_11;
    end else begin
      two_complement_1_3 <= _two_complement_3_T_8;
    end
    if (signs_1_4) begin // @[block_division.scala 39:31]
      two_complement_1_4 <= _two_complement_4_T_11;
    end else begin
      two_complement_1_4 <= _two_complement_4_T_8;
    end
    if (signs_1_5) begin // @[block_division.scala 39:31]
      two_complement_1_5 <= _two_complement_5_T_11;
    end else begin
      two_complement_1_5 <= _two_complement_5_T_8;
    end
    if (signs_1_6) begin // @[block_division.scala 39:31]
      two_complement_1_6 <= _two_complement_6_T_11;
    end else begin
      two_complement_1_6 <= _two_complement_6_T_8;
    end
    if (signs_1_7) begin // @[block_division.scala 39:31]
      two_complement_1_7 <= _two_complement_7_T_11;
    end else begin
      two_complement_1_7 <= _two_complement_7_T_8;
    end
    if (signs_1_8) begin // @[block_division.scala 39:31]
      two_complement_1_8 <= _two_complement_8_T_11;
    end else begin
      two_complement_1_8 <= _two_complement_8_T_8;
    end
    if (signs_1_9) begin // @[block_division.scala 39:31]
      two_complement_1_9 <= _two_complement_9_T_11;
    end else begin
      two_complement_1_9 <= _two_complement_9_T_8;
    end
    if (signs_1_10) begin // @[block_division.scala 39:31]
      two_complement_1_10 <= _two_complement_10_T_11;
    end else begin
      two_complement_1_10 <= _two_complement_10_T_8;
    end
    if (signs_1_11) begin // @[block_division.scala 39:31]
      two_complement_1_11 <= _two_complement_11_T_11;
    end else begin
      two_complement_1_11 <= _two_complement_11_T_8;
    end
    if (signs_1_12) begin // @[block_division.scala 39:31]
      two_complement_1_12 <= _two_complement_12_T_11;
    end else begin
      two_complement_1_12 <= _two_complement_12_T_8;
    end
    if (signs_1_13) begin // @[block_division.scala 39:31]
      two_complement_1_13 <= _two_complement_13_T_11;
    end else begin
      two_complement_1_13 <= _two_complement_13_T_8;
    end
    if (signs_1_14) begin // @[block_division.scala 39:31]
      two_complement_1_14 <= _two_complement_14_T_11;
    end else begin
      two_complement_1_14 <= _two_complement_14_T_8;
    end
    if (signs_1_15) begin // @[block_division.scala 39:31]
      two_complement_1_15 <= _two_complement_15_T_11;
    end else begin
      two_complement_1_15 <= _two_complement_15_T_8;
    end
    two_complement_buffer_1_0 <= two_complement_1_0; // @[block_division.scala 44:53]
    two_complement_buffer_1_1 <= two_complement_1_1; // @[block_division.scala 44:53]
    two_complement_buffer_1_2 <= two_complement_1_2; // @[block_division.scala 44:53]
    two_complement_buffer_1_3 <= two_complement_1_3; // @[block_division.scala 44:53]
    two_complement_buffer_1_4 <= two_complement_1_4; // @[block_division.scala 44:53]
    two_complement_buffer_1_5 <= two_complement_1_5; // @[block_division.scala 44:53]
    two_complement_buffer_1_6 <= two_complement_1_6; // @[block_division.scala 44:53]
    two_complement_buffer_1_7 <= two_complement_1_7; // @[block_division.scala 44:53]
    two_complement_buffer_1_8 <= two_complement_1_8; // @[block_division.scala 44:53]
    two_complement_buffer_1_9 <= two_complement_1_9; // @[block_division.scala 44:53]
    two_complement_buffer_1_10 <= two_complement_1_10; // @[block_division.scala 44:53]
    two_complement_buffer_1_11 <= two_complement_1_11; // @[block_division.scala 44:53]
    two_complement_buffer_1_12 <= two_complement_1_12; // @[block_division.scala 44:53]
    two_complement_buffer_1_13 <= two_complement_1_13; // @[block_division.scala 44:53]
    two_complement_buffer_1_14 <= two_complement_1_14; // @[block_division.scala 44:53]
    two_complement_buffer_1_15 <= two_complement_1_15; // @[block_division.scala 44:53]
    if (reset) begin // @[block_division.scala 33:34]
      multiplierReg_16 <= 6'h0; // @[block_division.scala 33:34]
    end else begin
      multiplierReg_16 <= io_man_a_16; // @[block_division.scala 36:21]
    end
    if (reset) begin // @[block_division.scala 34:28]
      signReg_16 <= 1'h0; // @[block_division.scala 34:28]
    end else begin
      signReg_16 <= io_sign_a_16; // @[block_division.scala 35:15]
    end
    if (reset) begin // @[block_division.scala 33:34]
      multiplierReg_17 <= 6'h0; // @[block_division.scala 33:34]
    end else begin
      multiplierReg_17 <= io_man_a_17; // @[block_division.scala 36:21]
    end
    if (reset) begin // @[block_division.scala 34:28]
      signReg_17 <= 1'h0; // @[block_division.scala 34:28]
    end else begin
      signReg_17 <= io_sign_a_17; // @[block_division.scala 35:15]
    end
    if (reset) begin // @[block_division.scala 33:34]
      multiplierReg_18 <= 6'h0; // @[block_division.scala 33:34]
    end else begin
      multiplierReg_18 <= io_man_a_18; // @[block_division.scala 36:21]
    end
    if (reset) begin // @[block_division.scala 34:28]
      signReg_18 <= 1'h0; // @[block_division.scala 34:28]
    end else begin
      signReg_18 <= io_sign_a_18; // @[block_division.scala 35:15]
    end
    if (reset) begin // @[block_division.scala 33:34]
      multiplierReg_19 <= 6'h0; // @[block_division.scala 33:34]
    end else begin
      multiplierReg_19 <= io_man_a_19; // @[block_division.scala 36:21]
    end
    if (reset) begin // @[block_division.scala 34:28]
      signReg_19 <= 1'h0; // @[block_division.scala 34:28]
    end else begin
      signReg_19 <= io_sign_a_19; // @[block_division.scala 35:15]
    end
    if (reset) begin // @[block_division.scala 33:34]
      multiplierReg_20 <= 6'h0; // @[block_division.scala 33:34]
    end else begin
      multiplierReg_20 <= io_man_a_20; // @[block_division.scala 36:21]
    end
    if (reset) begin // @[block_division.scala 34:28]
      signReg_20 <= 1'h0; // @[block_division.scala 34:28]
    end else begin
      signReg_20 <= io_sign_a_20; // @[block_division.scala 35:15]
    end
    if (reset) begin // @[block_division.scala 33:34]
      multiplierReg_21 <= 6'h0; // @[block_division.scala 33:34]
    end else begin
      multiplierReg_21 <= io_man_a_21; // @[block_division.scala 36:21]
    end
    if (reset) begin // @[block_division.scala 34:28]
      signReg_21 <= 1'h0; // @[block_division.scala 34:28]
    end else begin
      signReg_21 <= io_sign_a_21; // @[block_division.scala 35:15]
    end
    if (reset) begin // @[block_division.scala 33:34]
      multiplierReg_22 <= 6'h0; // @[block_division.scala 33:34]
    end else begin
      multiplierReg_22 <= io_man_a_22; // @[block_division.scala 36:21]
    end
    if (reset) begin // @[block_division.scala 34:28]
      signReg_22 <= 1'h0; // @[block_division.scala 34:28]
    end else begin
      signReg_22 <= io_sign_a_22; // @[block_division.scala 35:15]
    end
    if (reset) begin // @[block_division.scala 33:34]
      multiplierReg_23 <= 6'h0; // @[block_division.scala 33:34]
    end else begin
      multiplierReg_23 <= io_man_a_23; // @[block_division.scala 36:21]
    end
    if (reset) begin // @[block_division.scala 34:28]
      signReg_23 <= 1'h0; // @[block_division.scala 34:28]
    end else begin
      signReg_23 <= io_sign_a_23; // @[block_division.scala 35:15]
    end
    if (reset) begin // @[block_division.scala 33:34]
      multiplierReg_24 <= 6'h0; // @[block_division.scala 33:34]
    end else begin
      multiplierReg_24 <= io_man_a_24; // @[block_division.scala 36:21]
    end
    if (reset) begin // @[block_division.scala 34:28]
      signReg_24 <= 1'h0; // @[block_division.scala 34:28]
    end else begin
      signReg_24 <= io_sign_a_24; // @[block_division.scala 35:15]
    end
    if (reset) begin // @[block_division.scala 33:34]
      multiplierReg_25 <= 6'h0; // @[block_division.scala 33:34]
    end else begin
      multiplierReg_25 <= io_man_a_25; // @[block_division.scala 36:21]
    end
    if (reset) begin // @[block_division.scala 34:28]
      signReg_25 <= 1'h0; // @[block_division.scala 34:28]
    end else begin
      signReg_25 <= io_sign_a_25; // @[block_division.scala 35:15]
    end
    if (reset) begin // @[block_division.scala 33:34]
      multiplierReg_26 <= 6'h0; // @[block_division.scala 33:34]
    end else begin
      multiplierReg_26 <= io_man_a_26; // @[block_division.scala 36:21]
    end
    if (reset) begin // @[block_division.scala 34:28]
      signReg_26 <= 1'h0; // @[block_division.scala 34:28]
    end else begin
      signReg_26 <= io_sign_a_26; // @[block_division.scala 35:15]
    end
    if (reset) begin // @[block_division.scala 33:34]
      multiplierReg_27 <= 6'h0; // @[block_division.scala 33:34]
    end else begin
      multiplierReg_27 <= io_man_a_27; // @[block_division.scala 36:21]
    end
    if (reset) begin // @[block_division.scala 34:28]
      signReg_27 <= 1'h0; // @[block_division.scala 34:28]
    end else begin
      signReg_27 <= io_sign_a_27; // @[block_division.scala 35:15]
    end
    if (reset) begin // @[block_division.scala 33:34]
      multiplierReg_28 <= 6'h0; // @[block_division.scala 33:34]
    end else begin
      multiplierReg_28 <= io_man_a_28; // @[block_division.scala 36:21]
    end
    if (reset) begin // @[block_division.scala 34:28]
      signReg_28 <= 1'h0; // @[block_division.scala 34:28]
    end else begin
      signReg_28 <= io_sign_a_28; // @[block_division.scala 35:15]
    end
    if (reset) begin // @[block_division.scala 33:34]
      multiplierReg_29 <= 6'h0; // @[block_division.scala 33:34]
    end else begin
      multiplierReg_29 <= io_man_a_29; // @[block_division.scala 36:21]
    end
    if (reset) begin // @[block_division.scala 34:28]
      signReg_29 <= 1'h0; // @[block_division.scala 34:28]
    end else begin
      signReg_29 <= io_sign_a_29; // @[block_division.scala 35:15]
    end
    if (reset) begin // @[block_division.scala 33:34]
      multiplierReg_30 <= 6'h0; // @[block_division.scala 33:34]
    end else begin
      multiplierReg_30 <= io_man_a_30; // @[block_division.scala 36:21]
    end
    if (reset) begin // @[block_division.scala 34:28]
      signReg_30 <= 1'h0; // @[block_division.scala 34:28]
    end else begin
      signReg_30 <= io_sign_a_30; // @[block_division.scala 35:15]
    end
    if (reset) begin // @[block_division.scala 33:34]
      multiplierReg_31 <= 6'h0; // @[block_division.scala 33:34]
    end else begin
      multiplierReg_31 <= io_man_a_31; // @[block_division.scala 36:21]
    end
    if (reset) begin // @[block_division.scala 34:28]
      signReg_31 <= 1'h0; // @[block_division.scala 34:28]
    end else begin
      signReg_31 <= io_sign_a_31; // @[block_division.scala 35:15]
    end
    dotProductRegs_2_0 <= multiplierReg_32 * io_man_b_32; // @[block_division.scala 37:42]
    dotProductRegs_2_1 <= multiplierReg_33 * io_man_b_33; // @[block_division.scala 37:42]
    dotProductRegs_2_2 <= multiplierReg_34 * io_man_b_34; // @[block_division.scala 37:42]
    dotProductRegs_2_3 <= multiplierReg_35 * io_man_b_35; // @[block_division.scala 37:42]
    dotProductRegs_2_4 <= multiplierReg_36 * io_man_b_36; // @[block_division.scala 37:42]
    dotProductRegs_2_5 <= multiplierReg_37 * io_man_b_37; // @[block_division.scala 37:42]
    dotProductRegs_2_6 <= multiplierReg_38 * io_man_b_38; // @[block_division.scala 37:42]
    dotProductRegs_2_7 <= multiplierReg_39 * io_man_b_39; // @[block_division.scala 37:42]
    dotProductRegs_2_8 <= multiplierReg_40 * io_man_b_40; // @[block_division.scala 37:42]
    dotProductRegs_2_9 <= multiplierReg_41 * io_man_b_41; // @[block_division.scala 37:42]
    dotProductRegs_2_10 <= multiplierReg_42 * io_man_b_42; // @[block_division.scala 37:42]
    dotProductRegs_2_11 <= multiplierReg_43 * io_man_b_43; // @[block_division.scala 37:42]
    dotProductRegs_2_12 <= multiplierReg_44 * io_man_b_44; // @[block_division.scala 37:42]
    dotProductRegs_2_13 <= multiplierReg_45 * io_man_b_45; // @[block_division.scala 37:42]
    dotProductRegs_2_14 <= multiplierReg_46 * io_man_b_46; // @[block_division.scala 37:42]
    dotProductRegs_2_15 <= multiplierReg_47 * io_man_b_47; // @[block_division.scala 37:42]
    signs_2_0 <= signReg_32 ^ io_sign_b_32; // @[block_division.scala 38:27]
    signs_2_1 <= signReg_33 ^ io_sign_b_33; // @[block_division.scala 38:27]
    signs_2_2 <= signReg_34 ^ io_sign_b_34; // @[block_division.scala 38:27]
    signs_2_3 <= signReg_35 ^ io_sign_b_35; // @[block_division.scala 38:27]
    signs_2_4 <= signReg_36 ^ io_sign_b_36; // @[block_division.scala 38:27]
    signs_2_5 <= signReg_37 ^ io_sign_b_37; // @[block_division.scala 38:27]
    signs_2_6 <= signReg_38 ^ io_sign_b_38; // @[block_division.scala 38:27]
    signs_2_7 <= signReg_39 ^ io_sign_b_39; // @[block_division.scala 38:27]
    signs_2_8 <= signReg_40 ^ io_sign_b_40; // @[block_division.scala 38:27]
    signs_2_9 <= signReg_41 ^ io_sign_b_41; // @[block_division.scala 38:27]
    signs_2_10 <= signReg_42 ^ io_sign_b_42; // @[block_division.scala 38:27]
    signs_2_11 <= signReg_43 ^ io_sign_b_43; // @[block_division.scala 38:27]
    signs_2_12 <= signReg_44 ^ io_sign_b_44; // @[block_division.scala 38:27]
    signs_2_13 <= signReg_45 ^ io_sign_b_45; // @[block_division.scala 38:27]
    signs_2_14 <= signReg_46 ^ io_sign_b_46; // @[block_division.scala 38:27]
    signs_2_15 <= signReg_47 ^ io_sign_b_47; // @[block_division.scala 38:27]
    if (signs_2_0) begin // @[block_division.scala 39:31]
      two_complement_2_0 <= _two_complement_0_T_18;
    end else begin
      two_complement_2_0 <= _two_complement_0_T_15;
    end
    if (signs_2_1) begin // @[block_division.scala 39:31]
      two_complement_2_1 <= _two_complement_1_T_18;
    end else begin
      two_complement_2_1 <= _two_complement_1_T_15;
    end
    if (signs_2_2) begin // @[block_division.scala 39:31]
      two_complement_2_2 <= _two_complement_2_T_18;
    end else begin
      two_complement_2_2 <= _two_complement_2_T_15;
    end
    if (signs_2_3) begin // @[block_division.scala 39:31]
      two_complement_2_3 <= _two_complement_3_T_18;
    end else begin
      two_complement_2_3 <= _two_complement_3_T_15;
    end
    if (signs_2_4) begin // @[block_division.scala 39:31]
      two_complement_2_4 <= _two_complement_4_T_18;
    end else begin
      two_complement_2_4 <= _two_complement_4_T_15;
    end
    if (signs_2_5) begin // @[block_division.scala 39:31]
      two_complement_2_5 <= _two_complement_5_T_18;
    end else begin
      two_complement_2_5 <= _two_complement_5_T_15;
    end
    if (signs_2_6) begin // @[block_division.scala 39:31]
      two_complement_2_6 <= _two_complement_6_T_18;
    end else begin
      two_complement_2_6 <= _two_complement_6_T_15;
    end
    if (signs_2_7) begin // @[block_division.scala 39:31]
      two_complement_2_7 <= _two_complement_7_T_18;
    end else begin
      two_complement_2_7 <= _two_complement_7_T_15;
    end
    if (signs_2_8) begin // @[block_division.scala 39:31]
      two_complement_2_8 <= _two_complement_8_T_18;
    end else begin
      two_complement_2_8 <= _two_complement_8_T_15;
    end
    if (signs_2_9) begin // @[block_division.scala 39:31]
      two_complement_2_9 <= _two_complement_9_T_18;
    end else begin
      two_complement_2_9 <= _two_complement_9_T_15;
    end
    if (signs_2_10) begin // @[block_division.scala 39:31]
      two_complement_2_10 <= _two_complement_10_T_18;
    end else begin
      two_complement_2_10 <= _two_complement_10_T_15;
    end
    if (signs_2_11) begin // @[block_division.scala 39:31]
      two_complement_2_11 <= _two_complement_11_T_18;
    end else begin
      two_complement_2_11 <= _two_complement_11_T_15;
    end
    if (signs_2_12) begin // @[block_division.scala 39:31]
      two_complement_2_12 <= _two_complement_12_T_18;
    end else begin
      two_complement_2_12 <= _two_complement_12_T_15;
    end
    if (signs_2_13) begin // @[block_division.scala 39:31]
      two_complement_2_13 <= _two_complement_13_T_18;
    end else begin
      two_complement_2_13 <= _two_complement_13_T_15;
    end
    if (signs_2_14) begin // @[block_division.scala 39:31]
      two_complement_2_14 <= _two_complement_14_T_18;
    end else begin
      two_complement_2_14 <= _two_complement_14_T_15;
    end
    if (signs_2_15) begin // @[block_division.scala 39:31]
      two_complement_2_15 <= _two_complement_15_T_18;
    end else begin
      two_complement_2_15 <= _two_complement_15_T_15;
    end
    two_complement_buffer_2_0 <= two_complement_2_0; // @[block_division.scala 44:53]
    two_complement_buffer_2_1 <= two_complement_2_1; // @[block_division.scala 44:53]
    two_complement_buffer_2_2 <= two_complement_2_2; // @[block_division.scala 44:53]
    two_complement_buffer_2_3 <= two_complement_2_3; // @[block_division.scala 44:53]
    two_complement_buffer_2_4 <= two_complement_2_4; // @[block_division.scala 44:53]
    two_complement_buffer_2_5 <= two_complement_2_5; // @[block_division.scala 44:53]
    two_complement_buffer_2_6 <= two_complement_2_6; // @[block_division.scala 44:53]
    two_complement_buffer_2_7 <= two_complement_2_7; // @[block_division.scala 44:53]
    two_complement_buffer_2_8 <= two_complement_2_8; // @[block_division.scala 44:53]
    two_complement_buffer_2_9 <= two_complement_2_9; // @[block_division.scala 44:53]
    two_complement_buffer_2_10 <= two_complement_2_10; // @[block_division.scala 44:53]
    two_complement_buffer_2_11 <= two_complement_2_11; // @[block_division.scala 44:53]
    two_complement_buffer_2_12 <= two_complement_2_12; // @[block_division.scala 44:53]
    two_complement_buffer_2_13 <= two_complement_2_13; // @[block_division.scala 44:53]
    two_complement_buffer_2_14 <= two_complement_2_14; // @[block_division.scala 44:53]
    two_complement_buffer_2_15 <= two_complement_2_15; // @[block_division.scala 44:53]
    if (reset) begin // @[block_division.scala 33:34]
      multiplierReg_32 <= 6'h0; // @[block_division.scala 33:34]
    end else begin
      multiplierReg_32 <= io_man_a_32; // @[block_division.scala 36:21]
    end
    if (reset) begin // @[block_division.scala 34:28]
      signReg_32 <= 1'h0; // @[block_division.scala 34:28]
    end else begin
      signReg_32 <= io_sign_a_32; // @[block_division.scala 35:15]
    end
    if (reset) begin // @[block_division.scala 33:34]
      multiplierReg_33 <= 6'h0; // @[block_division.scala 33:34]
    end else begin
      multiplierReg_33 <= io_man_a_33; // @[block_division.scala 36:21]
    end
    if (reset) begin // @[block_division.scala 34:28]
      signReg_33 <= 1'h0; // @[block_division.scala 34:28]
    end else begin
      signReg_33 <= io_sign_a_33; // @[block_division.scala 35:15]
    end
    if (reset) begin // @[block_division.scala 33:34]
      multiplierReg_34 <= 6'h0; // @[block_division.scala 33:34]
    end else begin
      multiplierReg_34 <= io_man_a_34; // @[block_division.scala 36:21]
    end
    if (reset) begin // @[block_division.scala 34:28]
      signReg_34 <= 1'h0; // @[block_division.scala 34:28]
    end else begin
      signReg_34 <= io_sign_a_34; // @[block_division.scala 35:15]
    end
    if (reset) begin // @[block_division.scala 33:34]
      multiplierReg_35 <= 6'h0; // @[block_division.scala 33:34]
    end else begin
      multiplierReg_35 <= io_man_a_35; // @[block_division.scala 36:21]
    end
    if (reset) begin // @[block_division.scala 34:28]
      signReg_35 <= 1'h0; // @[block_division.scala 34:28]
    end else begin
      signReg_35 <= io_sign_a_35; // @[block_division.scala 35:15]
    end
    if (reset) begin // @[block_division.scala 33:34]
      multiplierReg_36 <= 6'h0; // @[block_division.scala 33:34]
    end else begin
      multiplierReg_36 <= io_man_a_36; // @[block_division.scala 36:21]
    end
    if (reset) begin // @[block_division.scala 34:28]
      signReg_36 <= 1'h0; // @[block_division.scala 34:28]
    end else begin
      signReg_36 <= io_sign_a_36; // @[block_division.scala 35:15]
    end
    if (reset) begin // @[block_division.scala 33:34]
      multiplierReg_37 <= 6'h0; // @[block_division.scala 33:34]
    end else begin
      multiplierReg_37 <= io_man_a_37; // @[block_division.scala 36:21]
    end
    if (reset) begin // @[block_division.scala 34:28]
      signReg_37 <= 1'h0; // @[block_division.scala 34:28]
    end else begin
      signReg_37 <= io_sign_a_37; // @[block_division.scala 35:15]
    end
    if (reset) begin // @[block_division.scala 33:34]
      multiplierReg_38 <= 6'h0; // @[block_division.scala 33:34]
    end else begin
      multiplierReg_38 <= io_man_a_38; // @[block_division.scala 36:21]
    end
    if (reset) begin // @[block_division.scala 34:28]
      signReg_38 <= 1'h0; // @[block_division.scala 34:28]
    end else begin
      signReg_38 <= io_sign_a_38; // @[block_division.scala 35:15]
    end
    if (reset) begin // @[block_division.scala 33:34]
      multiplierReg_39 <= 6'h0; // @[block_division.scala 33:34]
    end else begin
      multiplierReg_39 <= io_man_a_39; // @[block_division.scala 36:21]
    end
    if (reset) begin // @[block_division.scala 34:28]
      signReg_39 <= 1'h0; // @[block_division.scala 34:28]
    end else begin
      signReg_39 <= io_sign_a_39; // @[block_division.scala 35:15]
    end
    if (reset) begin // @[block_division.scala 33:34]
      multiplierReg_40 <= 6'h0; // @[block_division.scala 33:34]
    end else begin
      multiplierReg_40 <= io_man_a_40; // @[block_division.scala 36:21]
    end
    if (reset) begin // @[block_division.scala 34:28]
      signReg_40 <= 1'h0; // @[block_division.scala 34:28]
    end else begin
      signReg_40 <= io_sign_a_40; // @[block_division.scala 35:15]
    end
    if (reset) begin // @[block_division.scala 33:34]
      multiplierReg_41 <= 6'h0; // @[block_division.scala 33:34]
    end else begin
      multiplierReg_41 <= io_man_a_41; // @[block_division.scala 36:21]
    end
    if (reset) begin // @[block_division.scala 34:28]
      signReg_41 <= 1'h0; // @[block_division.scala 34:28]
    end else begin
      signReg_41 <= io_sign_a_41; // @[block_division.scala 35:15]
    end
    if (reset) begin // @[block_division.scala 33:34]
      multiplierReg_42 <= 6'h0; // @[block_division.scala 33:34]
    end else begin
      multiplierReg_42 <= io_man_a_42; // @[block_division.scala 36:21]
    end
    if (reset) begin // @[block_division.scala 34:28]
      signReg_42 <= 1'h0; // @[block_division.scala 34:28]
    end else begin
      signReg_42 <= io_sign_a_42; // @[block_division.scala 35:15]
    end
    if (reset) begin // @[block_division.scala 33:34]
      multiplierReg_43 <= 6'h0; // @[block_division.scala 33:34]
    end else begin
      multiplierReg_43 <= io_man_a_43; // @[block_division.scala 36:21]
    end
    if (reset) begin // @[block_division.scala 34:28]
      signReg_43 <= 1'h0; // @[block_division.scala 34:28]
    end else begin
      signReg_43 <= io_sign_a_43; // @[block_division.scala 35:15]
    end
    if (reset) begin // @[block_division.scala 33:34]
      multiplierReg_44 <= 6'h0; // @[block_division.scala 33:34]
    end else begin
      multiplierReg_44 <= io_man_a_44; // @[block_division.scala 36:21]
    end
    if (reset) begin // @[block_division.scala 34:28]
      signReg_44 <= 1'h0; // @[block_division.scala 34:28]
    end else begin
      signReg_44 <= io_sign_a_44; // @[block_division.scala 35:15]
    end
    if (reset) begin // @[block_division.scala 33:34]
      multiplierReg_45 <= 6'h0; // @[block_division.scala 33:34]
    end else begin
      multiplierReg_45 <= io_man_a_45; // @[block_division.scala 36:21]
    end
    if (reset) begin // @[block_division.scala 34:28]
      signReg_45 <= 1'h0; // @[block_division.scala 34:28]
    end else begin
      signReg_45 <= io_sign_a_45; // @[block_division.scala 35:15]
    end
    if (reset) begin // @[block_division.scala 33:34]
      multiplierReg_46 <= 6'h0; // @[block_division.scala 33:34]
    end else begin
      multiplierReg_46 <= io_man_a_46; // @[block_division.scala 36:21]
    end
    if (reset) begin // @[block_division.scala 34:28]
      signReg_46 <= 1'h0; // @[block_division.scala 34:28]
    end else begin
      signReg_46 <= io_sign_a_46; // @[block_division.scala 35:15]
    end
    if (reset) begin // @[block_division.scala 33:34]
      multiplierReg_47 <= 6'h0; // @[block_division.scala 33:34]
    end else begin
      multiplierReg_47 <= io_man_a_47; // @[block_division.scala 36:21]
    end
    if (reset) begin // @[block_division.scala 34:28]
      signReg_47 <= 1'h0; // @[block_division.scala 34:28]
    end else begin
      signReg_47 <= io_sign_a_47; // @[block_division.scala 35:15]
    end
    dotProductRegs_3_0 <= multiplierReg_48 * io_man_b_48; // @[block_division.scala 37:42]
    dotProductRegs_3_1 <= multiplierReg_49 * io_man_b_49; // @[block_division.scala 37:42]
    dotProductRegs_3_2 <= multiplierReg_50 * io_man_b_50; // @[block_division.scala 37:42]
    dotProductRegs_3_3 <= multiplierReg_51 * io_man_b_51; // @[block_division.scala 37:42]
    dotProductRegs_3_4 <= multiplierReg_52 * io_man_b_52; // @[block_division.scala 37:42]
    dotProductRegs_3_5 <= multiplierReg_53 * io_man_b_53; // @[block_division.scala 37:42]
    dotProductRegs_3_6 <= multiplierReg_54 * io_man_b_54; // @[block_division.scala 37:42]
    dotProductRegs_3_7 <= multiplierReg_55 * io_man_b_55; // @[block_division.scala 37:42]
    dotProductRegs_3_8 <= multiplierReg_56 * io_man_b_56; // @[block_division.scala 37:42]
    dotProductRegs_3_9 <= multiplierReg_57 * io_man_b_57; // @[block_division.scala 37:42]
    dotProductRegs_3_10 <= multiplierReg_58 * io_man_b_58; // @[block_division.scala 37:42]
    dotProductRegs_3_11 <= multiplierReg_59 * io_man_b_59; // @[block_division.scala 37:42]
    dotProductRegs_3_12 <= multiplierReg_60 * io_man_b_60; // @[block_division.scala 37:42]
    dotProductRegs_3_13 <= multiplierReg_61 * io_man_b_61; // @[block_division.scala 37:42]
    dotProductRegs_3_14 <= multiplierReg_62 * io_man_b_62; // @[block_division.scala 37:42]
    dotProductRegs_3_15 <= multiplierReg_63 * io_man_b_63; // @[block_division.scala 37:42]
    signs_3_0 <= signReg_48 ^ io_sign_b_48; // @[block_division.scala 38:27]
    signs_3_1 <= signReg_49 ^ io_sign_b_49; // @[block_division.scala 38:27]
    signs_3_2 <= signReg_50 ^ io_sign_b_50; // @[block_division.scala 38:27]
    signs_3_3 <= signReg_51 ^ io_sign_b_51; // @[block_division.scala 38:27]
    signs_3_4 <= signReg_52 ^ io_sign_b_52; // @[block_division.scala 38:27]
    signs_3_5 <= signReg_53 ^ io_sign_b_53; // @[block_division.scala 38:27]
    signs_3_6 <= signReg_54 ^ io_sign_b_54; // @[block_division.scala 38:27]
    signs_3_7 <= signReg_55 ^ io_sign_b_55; // @[block_division.scala 38:27]
    signs_3_8 <= signReg_56 ^ io_sign_b_56; // @[block_division.scala 38:27]
    signs_3_9 <= signReg_57 ^ io_sign_b_57; // @[block_division.scala 38:27]
    signs_3_10 <= signReg_58 ^ io_sign_b_58; // @[block_division.scala 38:27]
    signs_3_11 <= signReg_59 ^ io_sign_b_59; // @[block_division.scala 38:27]
    signs_3_12 <= signReg_60 ^ io_sign_b_60; // @[block_division.scala 38:27]
    signs_3_13 <= signReg_61 ^ io_sign_b_61; // @[block_division.scala 38:27]
    signs_3_14 <= signReg_62 ^ io_sign_b_62; // @[block_division.scala 38:27]
    signs_3_15 <= signReg_63 ^ io_sign_b_63; // @[block_division.scala 38:27]
    if (signs_3_0) begin // @[block_division.scala 39:31]
      two_complement_3_0 <= _two_complement_0_T_25;
    end else begin
      two_complement_3_0 <= _two_complement_0_T_22;
    end
    if (signs_3_1) begin // @[block_division.scala 39:31]
      two_complement_3_1 <= _two_complement_1_T_25;
    end else begin
      two_complement_3_1 <= _two_complement_1_T_22;
    end
    if (signs_3_2) begin // @[block_division.scala 39:31]
      two_complement_3_2 <= _two_complement_2_T_25;
    end else begin
      two_complement_3_2 <= _two_complement_2_T_22;
    end
    if (signs_3_3) begin // @[block_division.scala 39:31]
      two_complement_3_3 <= _two_complement_3_T_25;
    end else begin
      two_complement_3_3 <= _two_complement_3_T_22;
    end
    if (signs_3_4) begin // @[block_division.scala 39:31]
      two_complement_3_4 <= _two_complement_4_T_25;
    end else begin
      two_complement_3_4 <= _two_complement_4_T_22;
    end
    if (signs_3_5) begin // @[block_division.scala 39:31]
      two_complement_3_5 <= _two_complement_5_T_25;
    end else begin
      two_complement_3_5 <= _two_complement_5_T_22;
    end
    if (signs_3_6) begin // @[block_division.scala 39:31]
      two_complement_3_6 <= _two_complement_6_T_25;
    end else begin
      two_complement_3_6 <= _two_complement_6_T_22;
    end
    if (signs_3_7) begin // @[block_division.scala 39:31]
      two_complement_3_7 <= _two_complement_7_T_25;
    end else begin
      two_complement_3_7 <= _two_complement_7_T_22;
    end
    if (signs_3_8) begin // @[block_division.scala 39:31]
      two_complement_3_8 <= _two_complement_8_T_25;
    end else begin
      two_complement_3_8 <= _two_complement_8_T_22;
    end
    if (signs_3_9) begin // @[block_division.scala 39:31]
      two_complement_3_9 <= _two_complement_9_T_25;
    end else begin
      two_complement_3_9 <= _two_complement_9_T_22;
    end
    if (signs_3_10) begin // @[block_division.scala 39:31]
      two_complement_3_10 <= _two_complement_10_T_25;
    end else begin
      two_complement_3_10 <= _two_complement_10_T_22;
    end
    if (signs_3_11) begin // @[block_division.scala 39:31]
      two_complement_3_11 <= _two_complement_11_T_25;
    end else begin
      two_complement_3_11 <= _two_complement_11_T_22;
    end
    if (signs_3_12) begin // @[block_division.scala 39:31]
      two_complement_3_12 <= _two_complement_12_T_25;
    end else begin
      two_complement_3_12 <= _two_complement_12_T_22;
    end
    if (signs_3_13) begin // @[block_division.scala 39:31]
      two_complement_3_13 <= _two_complement_13_T_25;
    end else begin
      two_complement_3_13 <= _two_complement_13_T_22;
    end
    if (signs_3_14) begin // @[block_division.scala 39:31]
      two_complement_3_14 <= _two_complement_14_T_25;
    end else begin
      two_complement_3_14 <= _two_complement_14_T_22;
    end
    if (signs_3_15) begin // @[block_division.scala 39:31]
      two_complement_3_15 <= _two_complement_15_T_25;
    end else begin
      two_complement_3_15 <= _two_complement_15_T_22;
    end
    two_complement_buffer_3_0 <= two_complement_3_0; // @[block_division.scala 44:53]
    two_complement_buffer_3_1 <= two_complement_3_1; // @[block_division.scala 44:53]
    two_complement_buffer_3_2 <= two_complement_3_2; // @[block_division.scala 44:53]
    two_complement_buffer_3_3 <= two_complement_3_3; // @[block_division.scala 44:53]
    two_complement_buffer_3_4 <= two_complement_3_4; // @[block_division.scala 44:53]
    two_complement_buffer_3_5 <= two_complement_3_5; // @[block_division.scala 44:53]
    two_complement_buffer_3_6 <= two_complement_3_6; // @[block_division.scala 44:53]
    two_complement_buffer_3_7 <= two_complement_3_7; // @[block_division.scala 44:53]
    two_complement_buffer_3_8 <= two_complement_3_8; // @[block_division.scala 44:53]
    two_complement_buffer_3_9 <= two_complement_3_9; // @[block_division.scala 44:53]
    two_complement_buffer_3_10 <= two_complement_3_10; // @[block_division.scala 44:53]
    two_complement_buffer_3_11 <= two_complement_3_11; // @[block_division.scala 44:53]
    two_complement_buffer_3_12 <= two_complement_3_12; // @[block_division.scala 44:53]
    two_complement_buffer_3_13 <= two_complement_3_13; // @[block_division.scala 44:53]
    two_complement_buffer_3_14 <= two_complement_3_14; // @[block_division.scala 44:53]
    two_complement_buffer_3_15 <= two_complement_3_15; // @[block_division.scala 44:53]
    if (reset) begin // @[block_division.scala 33:34]
      multiplierReg_48 <= 6'h0; // @[block_division.scala 33:34]
    end else begin
      multiplierReg_48 <= io_man_a_48; // @[block_division.scala 36:21]
    end
    if (reset) begin // @[block_division.scala 34:28]
      signReg_48 <= 1'h0; // @[block_division.scala 34:28]
    end else begin
      signReg_48 <= io_sign_a_48; // @[block_division.scala 35:15]
    end
    if (reset) begin // @[block_division.scala 33:34]
      multiplierReg_49 <= 6'h0; // @[block_division.scala 33:34]
    end else begin
      multiplierReg_49 <= io_man_a_49; // @[block_division.scala 36:21]
    end
    if (reset) begin // @[block_division.scala 34:28]
      signReg_49 <= 1'h0; // @[block_division.scala 34:28]
    end else begin
      signReg_49 <= io_sign_a_49; // @[block_division.scala 35:15]
    end
    if (reset) begin // @[block_division.scala 33:34]
      multiplierReg_50 <= 6'h0; // @[block_division.scala 33:34]
    end else begin
      multiplierReg_50 <= io_man_a_50; // @[block_division.scala 36:21]
    end
    if (reset) begin // @[block_division.scala 34:28]
      signReg_50 <= 1'h0; // @[block_division.scala 34:28]
    end else begin
      signReg_50 <= io_sign_a_50; // @[block_division.scala 35:15]
    end
    if (reset) begin // @[block_division.scala 33:34]
      multiplierReg_51 <= 6'h0; // @[block_division.scala 33:34]
    end else begin
      multiplierReg_51 <= io_man_a_51; // @[block_division.scala 36:21]
    end
    if (reset) begin // @[block_division.scala 34:28]
      signReg_51 <= 1'h0; // @[block_division.scala 34:28]
    end else begin
      signReg_51 <= io_sign_a_51; // @[block_division.scala 35:15]
    end
    if (reset) begin // @[block_division.scala 33:34]
      multiplierReg_52 <= 6'h0; // @[block_division.scala 33:34]
    end else begin
      multiplierReg_52 <= io_man_a_52; // @[block_division.scala 36:21]
    end
    if (reset) begin // @[block_division.scala 34:28]
      signReg_52 <= 1'h0; // @[block_division.scala 34:28]
    end else begin
      signReg_52 <= io_sign_a_52; // @[block_division.scala 35:15]
    end
    if (reset) begin // @[block_division.scala 33:34]
      multiplierReg_53 <= 6'h0; // @[block_division.scala 33:34]
    end else begin
      multiplierReg_53 <= io_man_a_53; // @[block_division.scala 36:21]
    end
    if (reset) begin // @[block_division.scala 34:28]
      signReg_53 <= 1'h0; // @[block_division.scala 34:28]
    end else begin
      signReg_53 <= io_sign_a_53; // @[block_division.scala 35:15]
    end
    if (reset) begin // @[block_division.scala 33:34]
      multiplierReg_54 <= 6'h0; // @[block_division.scala 33:34]
    end else begin
      multiplierReg_54 <= io_man_a_54; // @[block_division.scala 36:21]
    end
    if (reset) begin // @[block_division.scala 34:28]
      signReg_54 <= 1'h0; // @[block_division.scala 34:28]
    end else begin
      signReg_54 <= io_sign_a_54; // @[block_division.scala 35:15]
    end
    if (reset) begin // @[block_division.scala 33:34]
      multiplierReg_55 <= 6'h0; // @[block_division.scala 33:34]
    end else begin
      multiplierReg_55 <= io_man_a_55; // @[block_division.scala 36:21]
    end
    if (reset) begin // @[block_division.scala 34:28]
      signReg_55 <= 1'h0; // @[block_division.scala 34:28]
    end else begin
      signReg_55 <= io_sign_a_55; // @[block_division.scala 35:15]
    end
    if (reset) begin // @[block_division.scala 33:34]
      multiplierReg_56 <= 6'h0; // @[block_division.scala 33:34]
    end else begin
      multiplierReg_56 <= io_man_a_56; // @[block_division.scala 36:21]
    end
    if (reset) begin // @[block_division.scala 34:28]
      signReg_56 <= 1'h0; // @[block_division.scala 34:28]
    end else begin
      signReg_56 <= io_sign_a_56; // @[block_division.scala 35:15]
    end
    if (reset) begin // @[block_division.scala 33:34]
      multiplierReg_57 <= 6'h0; // @[block_division.scala 33:34]
    end else begin
      multiplierReg_57 <= io_man_a_57; // @[block_division.scala 36:21]
    end
    if (reset) begin // @[block_division.scala 34:28]
      signReg_57 <= 1'h0; // @[block_division.scala 34:28]
    end else begin
      signReg_57 <= io_sign_a_57; // @[block_division.scala 35:15]
    end
    if (reset) begin // @[block_division.scala 33:34]
      multiplierReg_58 <= 6'h0; // @[block_division.scala 33:34]
    end else begin
      multiplierReg_58 <= io_man_a_58; // @[block_division.scala 36:21]
    end
    if (reset) begin // @[block_division.scala 34:28]
      signReg_58 <= 1'h0; // @[block_division.scala 34:28]
    end else begin
      signReg_58 <= io_sign_a_58; // @[block_division.scala 35:15]
    end
    if (reset) begin // @[block_division.scala 33:34]
      multiplierReg_59 <= 6'h0; // @[block_division.scala 33:34]
    end else begin
      multiplierReg_59 <= io_man_a_59; // @[block_division.scala 36:21]
    end
    if (reset) begin // @[block_division.scala 34:28]
      signReg_59 <= 1'h0; // @[block_division.scala 34:28]
    end else begin
      signReg_59 <= io_sign_a_59; // @[block_division.scala 35:15]
    end
    if (reset) begin // @[block_division.scala 33:34]
      multiplierReg_60 <= 6'h0; // @[block_division.scala 33:34]
    end else begin
      multiplierReg_60 <= io_man_a_60; // @[block_division.scala 36:21]
    end
    if (reset) begin // @[block_division.scala 34:28]
      signReg_60 <= 1'h0; // @[block_division.scala 34:28]
    end else begin
      signReg_60 <= io_sign_a_60; // @[block_division.scala 35:15]
    end
    if (reset) begin // @[block_division.scala 33:34]
      multiplierReg_61 <= 6'h0; // @[block_division.scala 33:34]
    end else begin
      multiplierReg_61 <= io_man_a_61; // @[block_division.scala 36:21]
    end
    if (reset) begin // @[block_division.scala 34:28]
      signReg_61 <= 1'h0; // @[block_division.scala 34:28]
    end else begin
      signReg_61 <= io_sign_a_61; // @[block_division.scala 35:15]
    end
    if (reset) begin // @[block_division.scala 33:34]
      multiplierReg_62 <= 6'h0; // @[block_division.scala 33:34]
    end else begin
      multiplierReg_62 <= io_man_a_62; // @[block_division.scala 36:21]
    end
    if (reset) begin // @[block_division.scala 34:28]
      signReg_62 <= 1'h0; // @[block_division.scala 34:28]
    end else begin
      signReg_62 <= io_sign_a_62; // @[block_division.scala 35:15]
    end
    if (reset) begin // @[block_division.scala 33:34]
      multiplierReg_63 <= 6'h0; // @[block_division.scala 33:34]
    end else begin
      multiplierReg_63 <= io_man_a_63; // @[block_division.scala 36:21]
    end
    if (reset) begin // @[block_division.scala 34:28]
      signReg_63 <= 1'h0; // @[block_division.scala 34:28]
    end else begin
      signReg_63 <= io_sign_a_63; // @[block_division.scala 35:15]
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
  signReg = _RAND_73[0:0];
  _RAND_74 = {1{`RANDOM}};
  multiplierReg_1 = _RAND_74[5:0];
  _RAND_75 = {1{`RANDOM}};
  signReg_1 = _RAND_75[0:0];
  _RAND_76 = {1{`RANDOM}};
  multiplierReg_2 = _RAND_76[5:0];
  _RAND_77 = {1{`RANDOM}};
  signReg_2 = _RAND_77[0:0];
  _RAND_78 = {1{`RANDOM}};
  multiplierReg_3 = _RAND_78[5:0];
  _RAND_79 = {1{`RANDOM}};
  signReg_3 = _RAND_79[0:0];
  _RAND_80 = {1{`RANDOM}};
  multiplierReg_4 = _RAND_80[5:0];
  _RAND_81 = {1{`RANDOM}};
  signReg_4 = _RAND_81[0:0];
  _RAND_82 = {1{`RANDOM}};
  multiplierReg_5 = _RAND_82[5:0];
  _RAND_83 = {1{`RANDOM}};
  signReg_5 = _RAND_83[0:0];
  _RAND_84 = {1{`RANDOM}};
  multiplierReg_6 = _RAND_84[5:0];
  _RAND_85 = {1{`RANDOM}};
  signReg_6 = _RAND_85[0:0];
  _RAND_86 = {1{`RANDOM}};
  multiplierReg_7 = _RAND_86[5:0];
  _RAND_87 = {1{`RANDOM}};
  signReg_7 = _RAND_87[0:0];
  _RAND_88 = {1{`RANDOM}};
  multiplierReg_8 = _RAND_88[5:0];
  _RAND_89 = {1{`RANDOM}};
  signReg_8 = _RAND_89[0:0];
  _RAND_90 = {1{`RANDOM}};
  multiplierReg_9 = _RAND_90[5:0];
  _RAND_91 = {1{`RANDOM}};
  signReg_9 = _RAND_91[0:0];
  _RAND_92 = {1{`RANDOM}};
  multiplierReg_10 = _RAND_92[5:0];
  _RAND_93 = {1{`RANDOM}};
  signReg_10 = _RAND_93[0:0];
  _RAND_94 = {1{`RANDOM}};
  multiplierReg_11 = _RAND_94[5:0];
  _RAND_95 = {1{`RANDOM}};
  signReg_11 = _RAND_95[0:0];
  _RAND_96 = {1{`RANDOM}};
  multiplierReg_12 = _RAND_96[5:0];
  _RAND_97 = {1{`RANDOM}};
  signReg_12 = _RAND_97[0:0];
  _RAND_98 = {1{`RANDOM}};
  multiplierReg_13 = _RAND_98[5:0];
  _RAND_99 = {1{`RANDOM}};
  signReg_13 = _RAND_99[0:0];
  _RAND_100 = {1{`RANDOM}};
  multiplierReg_14 = _RAND_100[5:0];
  _RAND_101 = {1{`RANDOM}};
  signReg_14 = _RAND_101[0:0];
  _RAND_102 = {1{`RANDOM}};
  multiplierReg_15 = _RAND_102[5:0];
  _RAND_103 = {1{`RANDOM}};
  signReg_15 = _RAND_103[0:0];
  _RAND_104 = {1{`RANDOM}};
  dotProductRegs_1_0 = _RAND_104[11:0];
  _RAND_105 = {1{`RANDOM}};
  dotProductRegs_1_1 = _RAND_105[11:0];
  _RAND_106 = {1{`RANDOM}};
  dotProductRegs_1_2 = _RAND_106[11:0];
  _RAND_107 = {1{`RANDOM}};
  dotProductRegs_1_3 = _RAND_107[11:0];
  _RAND_108 = {1{`RANDOM}};
  dotProductRegs_1_4 = _RAND_108[11:0];
  _RAND_109 = {1{`RANDOM}};
  dotProductRegs_1_5 = _RAND_109[11:0];
  _RAND_110 = {1{`RANDOM}};
  dotProductRegs_1_6 = _RAND_110[11:0];
  _RAND_111 = {1{`RANDOM}};
  dotProductRegs_1_7 = _RAND_111[11:0];
  _RAND_112 = {1{`RANDOM}};
  dotProductRegs_1_8 = _RAND_112[11:0];
  _RAND_113 = {1{`RANDOM}};
  dotProductRegs_1_9 = _RAND_113[11:0];
  _RAND_114 = {1{`RANDOM}};
  dotProductRegs_1_10 = _RAND_114[11:0];
  _RAND_115 = {1{`RANDOM}};
  dotProductRegs_1_11 = _RAND_115[11:0];
  _RAND_116 = {1{`RANDOM}};
  dotProductRegs_1_12 = _RAND_116[11:0];
  _RAND_117 = {1{`RANDOM}};
  dotProductRegs_1_13 = _RAND_117[11:0];
  _RAND_118 = {1{`RANDOM}};
  dotProductRegs_1_14 = _RAND_118[11:0];
  _RAND_119 = {1{`RANDOM}};
  dotProductRegs_1_15 = _RAND_119[11:0];
  _RAND_120 = {1{`RANDOM}};
  signs_1_0 = _RAND_120[0:0];
  _RAND_121 = {1{`RANDOM}};
  signs_1_1 = _RAND_121[0:0];
  _RAND_122 = {1{`RANDOM}};
  signs_1_2 = _RAND_122[0:0];
  _RAND_123 = {1{`RANDOM}};
  signs_1_3 = _RAND_123[0:0];
  _RAND_124 = {1{`RANDOM}};
  signs_1_4 = _RAND_124[0:0];
  _RAND_125 = {1{`RANDOM}};
  signs_1_5 = _RAND_125[0:0];
  _RAND_126 = {1{`RANDOM}};
  signs_1_6 = _RAND_126[0:0];
  _RAND_127 = {1{`RANDOM}};
  signs_1_7 = _RAND_127[0:0];
  _RAND_128 = {1{`RANDOM}};
  signs_1_8 = _RAND_128[0:0];
  _RAND_129 = {1{`RANDOM}};
  signs_1_9 = _RAND_129[0:0];
  _RAND_130 = {1{`RANDOM}};
  signs_1_10 = _RAND_130[0:0];
  _RAND_131 = {1{`RANDOM}};
  signs_1_11 = _RAND_131[0:0];
  _RAND_132 = {1{`RANDOM}};
  signs_1_12 = _RAND_132[0:0];
  _RAND_133 = {1{`RANDOM}};
  signs_1_13 = _RAND_133[0:0];
  _RAND_134 = {1{`RANDOM}};
  signs_1_14 = _RAND_134[0:0];
  _RAND_135 = {1{`RANDOM}};
  signs_1_15 = _RAND_135[0:0];
  _RAND_136 = {1{`RANDOM}};
  two_complement_1_0 = _RAND_136[12:0];
  _RAND_137 = {1{`RANDOM}};
  two_complement_1_1 = _RAND_137[12:0];
  _RAND_138 = {1{`RANDOM}};
  two_complement_1_2 = _RAND_138[12:0];
  _RAND_139 = {1{`RANDOM}};
  two_complement_1_3 = _RAND_139[12:0];
  _RAND_140 = {1{`RANDOM}};
  two_complement_1_4 = _RAND_140[12:0];
  _RAND_141 = {1{`RANDOM}};
  two_complement_1_5 = _RAND_141[12:0];
  _RAND_142 = {1{`RANDOM}};
  two_complement_1_6 = _RAND_142[12:0];
  _RAND_143 = {1{`RANDOM}};
  two_complement_1_7 = _RAND_143[12:0];
  _RAND_144 = {1{`RANDOM}};
  two_complement_1_8 = _RAND_144[12:0];
  _RAND_145 = {1{`RANDOM}};
  two_complement_1_9 = _RAND_145[12:0];
  _RAND_146 = {1{`RANDOM}};
  two_complement_1_10 = _RAND_146[12:0];
  _RAND_147 = {1{`RANDOM}};
  two_complement_1_11 = _RAND_147[12:0];
  _RAND_148 = {1{`RANDOM}};
  two_complement_1_12 = _RAND_148[12:0];
  _RAND_149 = {1{`RANDOM}};
  two_complement_1_13 = _RAND_149[12:0];
  _RAND_150 = {1{`RANDOM}};
  two_complement_1_14 = _RAND_150[12:0];
  _RAND_151 = {1{`RANDOM}};
  two_complement_1_15 = _RAND_151[12:0];
  _RAND_152 = {1{`RANDOM}};
  two_complement_buffer_1_0 = _RAND_152[12:0];
  _RAND_153 = {1{`RANDOM}};
  two_complement_buffer_1_1 = _RAND_153[12:0];
  _RAND_154 = {1{`RANDOM}};
  two_complement_buffer_1_2 = _RAND_154[12:0];
  _RAND_155 = {1{`RANDOM}};
  two_complement_buffer_1_3 = _RAND_155[12:0];
  _RAND_156 = {1{`RANDOM}};
  two_complement_buffer_1_4 = _RAND_156[12:0];
  _RAND_157 = {1{`RANDOM}};
  two_complement_buffer_1_5 = _RAND_157[12:0];
  _RAND_158 = {1{`RANDOM}};
  two_complement_buffer_1_6 = _RAND_158[12:0];
  _RAND_159 = {1{`RANDOM}};
  two_complement_buffer_1_7 = _RAND_159[12:0];
  _RAND_160 = {1{`RANDOM}};
  two_complement_buffer_1_8 = _RAND_160[12:0];
  _RAND_161 = {1{`RANDOM}};
  two_complement_buffer_1_9 = _RAND_161[12:0];
  _RAND_162 = {1{`RANDOM}};
  two_complement_buffer_1_10 = _RAND_162[12:0];
  _RAND_163 = {1{`RANDOM}};
  two_complement_buffer_1_11 = _RAND_163[12:0];
  _RAND_164 = {1{`RANDOM}};
  two_complement_buffer_1_12 = _RAND_164[12:0];
  _RAND_165 = {1{`RANDOM}};
  two_complement_buffer_1_13 = _RAND_165[12:0];
  _RAND_166 = {1{`RANDOM}};
  two_complement_buffer_1_14 = _RAND_166[12:0];
  _RAND_167 = {1{`RANDOM}};
  two_complement_buffer_1_15 = _RAND_167[12:0];
  _RAND_168 = {1{`RANDOM}};
  multiplierReg_16 = _RAND_168[5:0];
  _RAND_169 = {1{`RANDOM}};
  signReg_16 = _RAND_169[0:0];
  _RAND_170 = {1{`RANDOM}};
  multiplierReg_17 = _RAND_170[5:0];
  _RAND_171 = {1{`RANDOM}};
  signReg_17 = _RAND_171[0:0];
  _RAND_172 = {1{`RANDOM}};
  multiplierReg_18 = _RAND_172[5:0];
  _RAND_173 = {1{`RANDOM}};
  signReg_18 = _RAND_173[0:0];
  _RAND_174 = {1{`RANDOM}};
  multiplierReg_19 = _RAND_174[5:0];
  _RAND_175 = {1{`RANDOM}};
  signReg_19 = _RAND_175[0:0];
  _RAND_176 = {1{`RANDOM}};
  multiplierReg_20 = _RAND_176[5:0];
  _RAND_177 = {1{`RANDOM}};
  signReg_20 = _RAND_177[0:0];
  _RAND_178 = {1{`RANDOM}};
  multiplierReg_21 = _RAND_178[5:0];
  _RAND_179 = {1{`RANDOM}};
  signReg_21 = _RAND_179[0:0];
  _RAND_180 = {1{`RANDOM}};
  multiplierReg_22 = _RAND_180[5:0];
  _RAND_181 = {1{`RANDOM}};
  signReg_22 = _RAND_181[0:0];
  _RAND_182 = {1{`RANDOM}};
  multiplierReg_23 = _RAND_182[5:0];
  _RAND_183 = {1{`RANDOM}};
  signReg_23 = _RAND_183[0:0];
  _RAND_184 = {1{`RANDOM}};
  multiplierReg_24 = _RAND_184[5:0];
  _RAND_185 = {1{`RANDOM}};
  signReg_24 = _RAND_185[0:0];
  _RAND_186 = {1{`RANDOM}};
  multiplierReg_25 = _RAND_186[5:0];
  _RAND_187 = {1{`RANDOM}};
  signReg_25 = _RAND_187[0:0];
  _RAND_188 = {1{`RANDOM}};
  multiplierReg_26 = _RAND_188[5:0];
  _RAND_189 = {1{`RANDOM}};
  signReg_26 = _RAND_189[0:0];
  _RAND_190 = {1{`RANDOM}};
  multiplierReg_27 = _RAND_190[5:0];
  _RAND_191 = {1{`RANDOM}};
  signReg_27 = _RAND_191[0:0];
  _RAND_192 = {1{`RANDOM}};
  multiplierReg_28 = _RAND_192[5:0];
  _RAND_193 = {1{`RANDOM}};
  signReg_28 = _RAND_193[0:0];
  _RAND_194 = {1{`RANDOM}};
  multiplierReg_29 = _RAND_194[5:0];
  _RAND_195 = {1{`RANDOM}};
  signReg_29 = _RAND_195[0:0];
  _RAND_196 = {1{`RANDOM}};
  multiplierReg_30 = _RAND_196[5:0];
  _RAND_197 = {1{`RANDOM}};
  signReg_30 = _RAND_197[0:0];
  _RAND_198 = {1{`RANDOM}};
  multiplierReg_31 = _RAND_198[5:0];
  _RAND_199 = {1{`RANDOM}};
  signReg_31 = _RAND_199[0:0];
  _RAND_200 = {1{`RANDOM}};
  dotProductRegs_2_0 = _RAND_200[11:0];
  _RAND_201 = {1{`RANDOM}};
  dotProductRegs_2_1 = _RAND_201[11:0];
  _RAND_202 = {1{`RANDOM}};
  dotProductRegs_2_2 = _RAND_202[11:0];
  _RAND_203 = {1{`RANDOM}};
  dotProductRegs_2_3 = _RAND_203[11:0];
  _RAND_204 = {1{`RANDOM}};
  dotProductRegs_2_4 = _RAND_204[11:0];
  _RAND_205 = {1{`RANDOM}};
  dotProductRegs_2_5 = _RAND_205[11:0];
  _RAND_206 = {1{`RANDOM}};
  dotProductRegs_2_6 = _RAND_206[11:0];
  _RAND_207 = {1{`RANDOM}};
  dotProductRegs_2_7 = _RAND_207[11:0];
  _RAND_208 = {1{`RANDOM}};
  dotProductRegs_2_8 = _RAND_208[11:0];
  _RAND_209 = {1{`RANDOM}};
  dotProductRegs_2_9 = _RAND_209[11:0];
  _RAND_210 = {1{`RANDOM}};
  dotProductRegs_2_10 = _RAND_210[11:0];
  _RAND_211 = {1{`RANDOM}};
  dotProductRegs_2_11 = _RAND_211[11:0];
  _RAND_212 = {1{`RANDOM}};
  dotProductRegs_2_12 = _RAND_212[11:0];
  _RAND_213 = {1{`RANDOM}};
  dotProductRegs_2_13 = _RAND_213[11:0];
  _RAND_214 = {1{`RANDOM}};
  dotProductRegs_2_14 = _RAND_214[11:0];
  _RAND_215 = {1{`RANDOM}};
  dotProductRegs_2_15 = _RAND_215[11:0];
  _RAND_216 = {1{`RANDOM}};
  signs_2_0 = _RAND_216[0:0];
  _RAND_217 = {1{`RANDOM}};
  signs_2_1 = _RAND_217[0:0];
  _RAND_218 = {1{`RANDOM}};
  signs_2_2 = _RAND_218[0:0];
  _RAND_219 = {1{`RANDOM}};
  signs_2_3 = _RAND_219[0:0];
  _RAND_220 = {1{`RANDOM}};
  signs_2_4 = _RAND_220[0:0];
  _RAND_221 = {1{`RANDOM}};
  signs_2_5 = _RAND_221[0:0];
  _RAND_222 = {1{`RANDOM}};
  signs_2_6 = _RAND_222[0:0];
  _RAND_223 = {1{`RANDOM}};
  signs_2_7 = _RAND_223[0:0];
  _RAND_224 = {1{`RANDOM}};
  signs_2_8 = _RAND_224[0:0];
  _RAND_225 = {1{`RANDOM}};
  signs_2_9 = _RAND_225[0:0];
  _RAND_226 = {1{`RANDOM}};
  signs_2_10 = _RAND_226[0:0];
  _RAND_227 = {1{`RANDOM}};
  signs_2_11 = _RAND_227[0:0];
  _RAND_228 = {1{`RANDOM}};
  signs_2_12 = _RAND_228[0:0];
  _RAND_229 = {1{`RANDOM}};
  signs_2_13 = _RAND_229[0:0];
  _RAND_230 = {1{`RANDOM}};
  signs_2_14 = _RAND_230[0:0];
  _RAND_231 = {1{`RANDOM}};
  signs_2_15 = _RAND_231[0:0];
  _RAND_232 = {1{`RANDOM}};
  two_complement_2_0 = _RAND_232[12:0];
  _RAND_233 = {1{`RANDOM}};
  two_complement_2_1 = _RAND_233[12:0];
  _RAND_234 = {1{`RANDOM}};
  two_complement_2_2 = _RAND_234[12:0];
  _RAND_235 = {1{`RANDOM}};
  two_complement_2_3 = _RAND_235[12:0];
  _RAND_236 = {1{`RANDOM}};
  two_complement_2_4 = _RAND_236[12:0];
  _RAND_237 = {1{`RANDOM}};
  two_complement_2_5 = _RAND_237[12:0];
  _RAND_238 = {1{`RANDOM}};
  two_complement_2_6 = _RAND_238[12:0];
  _RAND_239 = {1{`RANDOM}};
  two_complement_2_7 = _RAND_239[12:0];
  _RAND_240 = {1{`RANDOM}};
  two_complement_2_8 = _RAND_240[12:0];
  _RAND_241 = {1{`RANDOM}};
  two_complement_2_9 = _RAND_241[12:0];
  _RAND_242 = {1{`RANDOM}};
  two_complement_2_10 = _RAND_242[12:0];
  _RAND_243 = {1{`RANDOM}};
  two_complement_2_11 = _RAND_243[12:0];
  _RAND_244 = {1{`RANDOM}};
  two_complement_2_12 = _RAND_244[12:0];
  _RAND_245 = {1{`RANDOM}};
  two_complement_2_13 = _RAND_245[12:0];
  _RAND_246 = {1{`RANDOM}};
  two_complement_2_14 = _RAND_246[12:0];
  _RAND_247 = {1{`RANDOM}};
  two_complement_2_15 = _RAND_247[12:0];
  _RAND_248 = {1{`RANDOM}};
  two_complement_buffer_2_0 = _RAND_248[12:0];
  _RAND_249 = {1{`RANDOM}};
  two_complement_buffer_2_1 = _RAND_249[12:0];
  _RAND_250 = {1{`RANDOM}};
  two_complement_buffer_2_2 = _RAND_250[12:0];
  _RAND_251 = {1{`RANDOM}};
  two_complement_buffer_2_3 = _RAND_251[12:0];
  _RAND_252 = {1{`RANDOM}};
  two_complement_buffer_2_4 = _RAND_252[12:0];
  _RAND_253 = {1{`RANDOM}};
  two_complement_buffer_2_5 = _RAND_253[12:0];
  _RAND_254 = {1{`RANDOM}};
  two_complement_buffer_2_6 = _RAND_254[12:0];
  _RAND_255 = {1{`RANDOM}};
  two_complement_buffer_2_7 = _RAND_255[12:0];
  _RAND_256 = {1{`RANDOM}};
  two_complement_buffer_2_8 = _RAND_256[12:0];
  _RAND_257 = {1{`RANDOM}};
  two_complement_buffer_2_9 = _RAND_257[12:0];
  _RAND_258 = {1{`RANDOM}};
  two_complement_buffer_2_10 = _RAND_258[12:0];
  _RAND_259 = {1{`RANDOM}};
  two_complement_buffer_2_11 = _RAND_259[12:0];
  _RAND_260 = {1{`RANDOM}};
  two_complement_buffer_2_12 = _RAND_260[12:0];
  _RAND_261 = {1{`RANDOM}};
  two_complement_buffer_2_13 = _RAND_261[12:0];
  _RAND_262 = {1{`RANDOM}};
  two_complement_buffer_2_14 = _RAND_262[12:0];
  _RAND_263 = {1{`RANDOM}};
  two_complement_buffer_2_15 = _RAND_263[12:0];
  _RAND_264 = {1{`RANDOM}};
  multiplierReg_32 = _RAND_264[5:0];
  _RAND_265 = {1{`RANDOM}};
  signReg_32 = _RAND_265[0:0];
  _RAND_266 = {1{`RANDOM}};
  multiplierReg_33 = _RAND_266[5:0];
  _RAND_267 = {1{`RANDOM}};
  signReg_33 = _RAND_267[0:0];
  _RAND_268 = {1{`RANDOM}};
  multiplierReg_34 = _RAND_268[5:0];
  _RAND_269 = {1{`RANDOM}};
  signReg_34 = _RAND_269[0:0];
  _RAND_270 = {1{`RANDOM}};
  multiplierReg_35 = _RAND_270[5:0];
  _RAND_271 = {1{`RANDOM}};
  signReg_35 = _RAND_271[0:0];
  _RAND_272 = {1{`RANDOM}};
  multiplierReg_36 = _RAND_272[5:0];
  _RAND_273 = {1{`RANDOM}};
  signReg_36 = _RAND_273[0:0];
  _RAND_274 = {1{`RANDOM}};
  multiplierReg_37 = _RAND_274[5:0];
  _RAND_275 = {1{`RANDOM}};
  signReg_37 = _RAND_275[0:0];
  _RAND_276 = {1{`RANDOM}};
  multiplierReg_38 = _RAND_276[5:0];
  _RAND_277 = {1{`RANDOM}};
  signReg_38 = _RAND_277[0:0];
  _RAND_278 = {1{`RANDOM}};
  multiplierReg_39 = _RAND_278[5:0];
  _RAND_279 = {1{`RANDOM}};
  signReg_39 = _RAND_279[0:0];
  _RAND_280 = {1{`RANDOM}};
  multiplierReg_40 = _RAND_280[5:0];
  _RAND_281 = {1{`RANDOM}};
  signReg_40 = _RAND_281[0:0];
  _RAND_282 = {1{`RANDOM}};
  multiplierReg_41 = _RAND_282[5:0];
  _RAND_283 = {1{`RANDOM}};
  signReg_41 = _RAND_283[0:0];
  _RAND_284 = {1{`RANDOM}};
  multiplierReg_42 = _RAND_284[5:0];
  _RAND_285 = {1{`RANDOM}};
  signReg_42 = _RAND_285[0:0];
  _RAND_286 = {1{`RANDOM}};
  multiplierReg_43 = _RAND_286[5:0];
  _RAND_287 = {1{`RANDOM}};
  signReg_43 = _RAND_287[0:0];
  _RAND_288 = {1{`RANDOM}};
  multiplierReg_44 = _RAND_288[5:0];
  _RAND_289 = {1{`RANDOM}};
  signReg_44 = _RAND_289[0:0];
  _RAND_290 = {1{`RANDOM}};
  multiplierReg_45 = _RAND_290[5:0];
  _RAND_291 = {1{`RANDOM}};
  signReg_45 = _RAND_291[0:0];
  _RAND_292 = {1{`RANDOM}};
  multiplierReg_46 = _RAND_292[5:0];
  _RAND_293 = {1{`RANDOM}};
  signReg_46 = _RAND_293[0:0];
  _RAND_294 = {1{`RANDOM}};
  multiplierReg_47 = _RAND_294[5:0];
  _RAND_295 = {1{`RANDOM}};
  signReg_47 = _RAND_295[0:0];
  _RAND_296 = {1{`RANDOM}};
  dotProductRegs_3_0 = _RAND_296[11:0];
  _RAND_297 = {1{`RANDOM}};
  dotProductRegs_3_1 = _RAND_297[11:0];
  _RAND_298 = {1{`RANDOM}};
  dotProductRegs_3_2 = _RAND_298[11:0];
  _RAND_299 = {1{`RANDOM}};
  dotProductRegs_3_3 = _RAND_299[11:0];
  _RAND_300 = {1{`RANDOM}};
  dotProductRegs_3_4 = _RAND_300[11:0];
  _RAND_301 = {1{`RANDOM}};
  dotProductRegs_3_5 = _RAND_301[11:0];
  _RAND_302 = {1{`RANDOM}};
  dotProductRegs_3_6 = _RAND_302[11:0];
  _RAND_303 = {1{`RANDOM}};
  dotProductRegs_3_7 = _RAND_303[11:0];
  _RAND_304 = {1{`RANDOM}};
  dotProductRegs_3_8 = _RAND_304[11:0];
  _RAND_305 = {1{`RANDOM}};
  dotProductRegs_3_9 = _RAND_305[11:0];
  _RAND_306 = {1{`RANDOM}};
  dotProductRegs_3_10 = _RAND_306[11:0];
  _RAND_307 = {1{`RANDOM}};
  dotProductRegs_3_11 = _RAND_307[11:0];
  _RAND_308 = {1{`RANDOM}};
  dotProductRegs_3_12 = _RAND_308[11:0];
  _RAND_309 = {1{`RANDOM}};
  dotProductRegs_3_13 = _RAND_309[11:0];
  _RAND_310 = {1{`RANDOM}};
  dotProductRegs_3_14 = _RAND_310[11:0];
  _RAND_311 = {1{`RANDOM}};
  dotProductRegs_3_15 = _RAND_311[11:0];
  _RAND_312 = {1{`RANDOM}};
  signs_3_0 = _RAND_312[0:0];
  _RAND_313 = {1{`RANDOM}};
  signs_3_1 = _RAND_313[0:0];
  _RAND_314 = {1{`RANDOM}};
  signs_3_2 = _RAND_314[0:0];
  _RAND_315 = {1{`RANDOM}};
  signs_3_3 = _RAND_315[0:0];
  _RAND_316 = {1{`RANDOM}};
  signs_3_4 = _RAND_316[0:0];
  _RAND_317 = {1{`RANDOM}};
  signs_3_5 = _RAND_317[0:0];
  _RAND_318 = {1{`RANDOM}};
  signs_3_6 = _RAND_318[0:0];
  _RAND_319 = {1{`RANDOM}};
  signs_3_7 = _RAND_319[0:0];
  _RAND_320 = {1{`RANDOM}};
  signs_3_8 = _RAND_320[0:0];
  _RAND_321 = {1{`RANDOM}};
  signs_3_9 = _RAND_321[0:0];
  _RAND_322 = {1{`RANDOM}};
  signs_3_10 = _RAND_322[0:0];
  _RAND_323 = {1{`RANDOM}};
  signs_3_11 = _RAND_323[0:0];
  _RAND_324 = {1{`RANDOM}};
  signs_3_12 = _RAND_324[0:0];
  _RAND_325 = {1{`RANDOM}};
  signs_3_13 = _RAND_325[0:0];
  _RAND_326 = {1{`RANDOM}};
  signs_3_14 = _RAND_326[0:0];
  _RAND_327 = {1{`RANDOM}};
  signs_3_15 = _RAND_327[0:0];
  _RAND_328 = {1{`RANDOM}};
  two_complement_3_0 = _RAND_328[12:0];
  _RAND_329 = {1{`RANDOM}};
  two_complement_3_1 = _RAND_329[12:0];
  _RAND_330 = {1{`RANDOM}};
  two_complement_3_2 = _RAND_330[12:0];
  _RAND_331 = {1{`RANDOM}};
  two_complement_3_3 = _RAND_331[12:0];
  _RAND_332 = {1{`RANDOM}};
  two_complement_3_4 = _RAND_332[12:0];
  _RAND_333 = {1{`RANDOM}};
  two_complement_3_5 = _RAND_333[12:0];
  _RAND_334 = {1{`RANDOM}};
  two_complement_3_6 = _RAND_334[12:0];
  _RAND_335 = {1{`RANDOM}};
  two_complement_3_7 = _RAND_335[12:0];
  _RAND_336 = {1{`RANDOM}};
  two_complement_3_8 = _RAND_336[12:0];
  _RAND_337 = {1{`RANDOM}};
  two_complement_3_9 = _RAND_337[12:0];
  _RAND_338 = {1{`RANDOM}};
  two_complement_3_10 = _RAND_338[12:0];
  _RAND_339 = {1{`RANDOM}};
  two_complement_3_11 = _RAND_339[12:0];
  _RAND_340 = {1{`RANDOM}};
  two_complement_3_12 = _RAND_340[12:0];
  _RAND_341 = {1{`RANDOM}};
  two_complement_3_13 = _RAND_341[12:0];
  _RAND_342 = {1{`RANDOM}};
  two_complement_3_14 = _RAND_342[12:0];
  _RAND_343 = {1{`RANDOM}};
  two_complement_3_15 = _RAND_343[12:0];
  _RAND_344 = {1{`RANDOM}};
  two_complement_buffer_3_0 = _RAND_344[12:0];
  _RAND_345 = {1{`RANDOM}};
  two_complement_buffer_3_1 = _RAND_345[12:0];
  _RAND_346 = {1{`RANDOM}};
  two_complement_buffer_3_2 = _RAND_346[12:0];
  _RAND_347 = {1{`RANDOM}};
  two_complement_buffer_3_3 = _RAND_347[12:0];
  _RAND_348 = {1{`RANDOM}};
  two_complement_buffer_3_4 = _RAND_348[12:0];
  _RAND_349 = {1{`RANDOM}};
  two_complement_buffer_3_5 = _RAND_349[12:0];
  _RAND_350 = {1{`RANDOM}};
  two_complement_buffer_3_6 = _RAND_350[12:0];
  _RAND_351 = {1{`RANDOM}};
  two_complement_buffer_3_7 = _RAND_351[12:0];
  _RAND_352 = {1{`RANDOM}};
  two_complement_buffer_3_8 = _RAND_352[12:0];
  _RAND_353 = {1{`RANDOM}};
  two_complement_buffer_3_9 = _RAND_353[12:0];
  _RAND_354 = {1{`RANDOM}};
  two_complement_buffer_3_10 = _RAND_354[12:0];
  _RAND_355 = {1{`RANDOM}};
  two_complement_buffer_3_11 = _RAND_355[12:0];
  _RAND_356 = {1{`RANDOM}};
  two_complement_buffer_3_12 = _RAND_356[12:0];
  _RAND_357 = {1{`RANDOM}};
  two_complement_buffer_3_13 = _RAND_357[12:0];
  _RAND_358 = {1{`RANDOM}};
  two_complement_buffer_3_14 = _RAND_358[12:0];
  _RAND_359 = {1{`RANDOM}};
  two_complement_buffer_3_15 = _RAND_359[12:0];
  _RAND_360 = {1{`RANDOM}};
  multiplierReg_48 = _RAND_360[5:0];
  _RAND_361 = {1{`RANDOM}};
  signReg_48 = _RAND_361[0:0];
  _RAND_362 = {1{`RANDOM}};
  multiplierReg_49 = _RAND_362[5:0];
  _RAND_363 = {1{`RANDOM}};
  signReg_49 = _RAND_363[0:0];
  _RAND_364 = {1{`RANDOM}};
  multiplierReg_50 = _RAND_364[5:0];
  _RAND_365 = {1{`RANDOM}};
  signReg_50 = _RAND_365[0:0];
  _RAND_366 = {1{`RANDOM}};
  multiplierReg_51 = _RAND_366[5:0];
  _RAND_367 = {1{`RANDOM}};
  signReg_51 = _RAND_367[0:0];
  _RAND_368 = {1{`RANDOM}};
  multiplierReg_52 = _RAND_368[5:0];
  _RAND_369 = {1{`RANDOM}};
  signReg_52 = _RAND_369[0:0];
  _RAND_370 = {1{`RANDOM}};
  multiplierReg_53 = _RAND_370[5:0];
  _RAND_371 = {1{`RANDOM}};
  signReg_53 = _RAND_371[0:0];
  _RAND_372 = {1{`RANDOM}};
  multiplierReg_54 = _RAND_372[5:0];
  _RAND_373 = {1{`RANDOM}};
  signReg_54 = _RAND_373[0:0];
  _RAND_374 = {1{`RANDOM}};
  multiplierReg_55 = _RAND_374[5:0];
  _RAND_375 = {1{`RANDOM}};
  signReg_55 = _RAND_375[0:0];
  _RAND_376 = {1{`RANDOM}};
  multiplierReg_56 = _RAND_376[5:0];
  _RAND_377 = {1{`RANDOM}};
  signReg_56 = _RAND_377[0:0];
  _RAND_378 = {1{`RANDOM}};
  multiplierReg_57 = _RAND_378[5:0];
  _RAND_379 = {1{`RANDOM}};
  signReg_57 = _RAND_379[0:0];
  _RAND_380 = {1{`RANDOM}};
  multiplierReg_58 = _RAND_380[5:0];
  _RAND_381 = {1{`RANDOM}};
  signReg_58 = _RAND_381[0:0];
  _RAND_382 = {1{`RANDOM}};
  multiplierReg_59 = _RAND_382[5:0];
  _RAND_383 = {1{`RANDOM}};
  signReg_59 = _RAND_383[0:0];
  _RAND_384 = {1{`RANDOM}};
  multiplierReg_60 = _RAND_384[5:0];
  _RAND_385 = {1{`RANDOM}};
  signReg_60 = _RAND_385[0:0];
  _RAND_386 = {1{`RANDOM}};
  multiplierReg_61 = _RAND_386[5:0];
  _RAND_387 = {1{`RANDOM}};
  signReg_61 = _RAND_387[0:0];
  _RAND_388 = {1{`RANDOM}};
  multiplierReg_62 = _RAND_388[5:0];
  _RAND_389 = {1{`RANDOM}};
  signReg_62 = _RAND_389[0:0];
  _RAND_390 = {1{`RANDOM}};
  multiplierReg_63 = _RAND_390[5:0];
  _RAND_391 = {1{`RANDOM}};
  signReg_63 = _RAND_391[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
