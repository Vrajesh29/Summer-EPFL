FIRRTL version 1.1.0
circuit Multiplication :
  module Multiplication :
    input clock : Clock
    input reset : UInt<1>
    input io_a : UInt<16>
    input io_b : UInt<16>
    output io_y : UInt<16>

    node _sign_T = bits(io_a, 15, 15) @[mult.scala 11:15]
    node _sign_T_1 = bits(io_b, 15, 15) @[mult.scala 11:22]
    node sign = xor(_sign_T, _sign_T_1) @[mult.scala 11:20]
    node _exponent_T = bits(io_a, 14, 10) @[mult.scala 12:19]
    node _exponent_T_1 = bits(io_b, 14, 10) @[mult.scala 12:30]
    node _exponent_T_2 = add(_exponent_T, _exponent_T_1) @[mult.scala 12:27]
    node exponent = tail(_exponent_T_2, 1) @[mult.scala 12:27]
    node _mantissa_T = bits(io_a, 9, 0) @[mult.scala 13:19]
    node _mantissa_T_1 = bits(io_b, 9, 0) @[mult.scala 13:28]
    node mantissa = mul(_mantissa_T, _mantissa_T_1) @[mult.scala 13:26]
    node exp = bits(exponent, 4, 0) @[mult.scala 14:21]
    node mant = bits(mantissa, 9, 0) @[mult.scala 15:22]
    node _io_y_T = cat(sign, exp) @[mult.scala 17:16]
    node _io_y_T_1 = cat(_io_y_T, mant) @[mult.scala 17:23]
    io_y <= _io_y_T_1 @[mult.scala 17:8]
