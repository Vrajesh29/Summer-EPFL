module adderTree(
  input         clock,
  input         reset,
  input  [11:0] io_man_0,
  input  [11:0] io_man_1,
  input  [11:0] io_man_2,
  input  [11:0] io_man_3,
  output [5:0]  io_man_out
);
  wire [11:0] next_level_man_0 = $signed(io_man_0) + $signed(io_man_1); // @[adderTree.scala 24:48]
  wire [11:0] next_level_man_1 = $signed(io_man_2) + $signed(io_man_3); // @[adderTree.scala 24:48]
  wire [11:0] _next_level_man_0_T_5 = $signed(next_level_man_0) + $signed(next_level_man_1); // @[adderTree.scala 24:48]
  wire [12:0] current_level_man_0 = {{1{_next_level_man_0_T_5[11]}},_next_level_man_0_T_5}; // @[adderTree.scala 17:30 24:31]
  assign io_man_out = current_level_man_0[5:0]; // @[adderTree.scala 33:14]
endmodule
