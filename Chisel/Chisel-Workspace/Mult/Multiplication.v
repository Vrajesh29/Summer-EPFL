module Multiplication(
  input         clock,
  input         reset,
  input  [15:0] io_a,
  input  [15:0] io_b,
  output [15:0] io_y
);
  wire  sign = io_a[15] ^ io_b[15]; // @[mult.scala 11:20]
  wire [4:0] exponent = io_a[14:10] + io_b[14:10]; // @[mult.scala 12:27]
  wire [19:0] mantissa = io_a[9:0] * io_b[9:0]; // @[mult.scala 13:26]
  wire [9:0] mant = mantissa[9:0]; // @[mult.scala 15:22]
  wire [5:0] _io_y_T = {sign,exponent}; // @[mult.scala 17:16]
  assign io_y = {_io_y_T,mant}; // @[mult.scala 17:23]
endmodule
