module Improved_hbfp(
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
  input  [7:0]  io_in_a_exp,
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
  input  [7:0]  io_in_b_exp,
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
  reg [31:0] _RAND_456;
  reg [31:0] _RAND_457;
  reg [31:0] _RAND_458;
  reg [31:0] _RAND_459;
  reg [31:0] _RAND_460;
  reg [31:0] _RAND_461;
  reg [31:0] _RAND_462;
  reg [31:0] _RAND_463;
  reg [31:0] _RAND_464;
  reg [31:0] _RAND_465;
  reg [31:0] _RAND_466;
  reg [31:0] _RAND_467;
  reg [31:0] _RAND_468;
  reg [31:0] _RAND_469;
  reg [31:0] _RAND_470;
  reg [31:0] _RAND_471;
  reg [31:0] _RAND_472;
  reg [31:0] _RAND_473;
  reg [31:0] _RAND_474;
  reg [31:0] _RAND_475;
  reg [31:0] _RAND_476;
  reg [31:0] _RAND_477;
  reg [31:0] _RAND_478;
  reg [31:0] _RAND_479;
  reg [31:0] _RAND_480;
  reg [31:0] _RAND_481;
  reg [31:0] _RAND_482;
  reg [31:0] _RAND_483;
  reg [31:0] _RAND_484;
  reg [31:0] _RAND_485;
  reg [31:0] _RAND_486;
  reg [31:0] _RAND_487;
  reg [31:0] _RAND_488;
  reg [31:0] _RAND_489;
  reg [31:0] _RAND_490;
  reg [31:0] _RAND_491;
  reg [31:0] _RAND_492;
  reg [31:0] _RAND_493;
  reg [31:0] _RAND_494;
  reg [31:0] _RAND_495;
  reg [31:0] _RAND_496;
  reg [31:0] _RAND_497;
  reg [31:0] _RAND_498;
  reg [31:0] _RAND_499;
  reg [31:0] _RAND_500;
  reg [31:0] _RAND_501;
  reg [31:0] _RAND_502;
  reg [31:0] _RAND_503;
  reg [31:0] _RAND_504;
  reg [31:0] _RAND_505;
  reg [31:0] _RAND_506;
  reg [31:0] _RAND_507;
  reg [31:0] _RAND_508;
  reg [31:0] _RAND_509;
  reg [31:0] _RAND_510;
  reg [31:0] _RAND_511;
  reg [31:0] _RAND_512;
  reg [31:0] _RAND_513;
  reg [31:0] _RAND_514;
  reg [31:0] _RAND_515;
  reg [31:0] _RAND_516;
  reg [31:0] _RAND_517;
  reg [31:0] _RAND_518;
  reg [31:0] _RAND_519;
  reg [31:0] _RAND_520;
  reg [31:0] _RAND_521;
  reg [31:0] _RAND_522;
  reg [31:0] _RAND_523;
  reg [31:0] _RAND_524;
  reg [31:0] _RAND_525;
  reg [31:0] _RAND_526;
  reg [31:0] _RAND_527;
  reg [31:0] _RAND_528;
  reg [31:0] _RAND_529;
  reg [31:0] _RAND_530;
  reg [31:0] _RAND_531;
  reg [31:0] _RAND_532;
  reg [31:0] _RAND_533;
  reg [31:0] _RAND_534;
  reg [31:0] _RAND_535;
  reg [31:0] _RAND_536;
  reg [31:0] _RAND_537;
  reg [31:0] _RAND_538;
  reg [31:0] _RAND_539;
  reg [31:0] _RAND_540;
  reg [31:0] _RAND_541;
  reg [31:0] _RAND_542;
  reg [31:0] _RAND_543;
  reg [31:0] _RAND_544;
  reg [31:0] _RAND_545;
  reg [31:0] _RAND_546;
  reg [31:0] _RAND_547;
  reg [31:0] _RAND_548;
  reg [31:0] _RAND_549;
  reg [31:0] _RAND_550;
  reg [31:0] _RAND_551;
  reg [31:0] _RAND_552;
  reg [31:0] _RAND_553;
  reg [31:0] _RAND_554;
  reg [31:0] _RAND_555;
  reg [31:0] _RAND_556;
  reg [31:0] _RAND_557;
  reg [31:0] _RAND_558;
  reg [31:0] _RAND_559;
  reg [31:0] _RAND_560;
  reg [31:0] _RAND_561;
  reg [31:0] _RAND_562;
  reg [31:0] _RAND_563;
  reg [31:0] _RAND_564;
  reg [31:0] _RAND_565;
  reg [31:0] _RAND_566;
  reg [31:0] _RAND_567;
  reg [31:0] _RAND_568;
  reg [31:0] _RAND_569;
  reg [31:0] _RAND_570;
  reg [31:0] _RAND_571;
  reg [31:0] _RAND_572;
  reg [31:0] _RAND_573;
  reg [31:0] _RAND_574;
  reg [31:0] _RAND_575;
  reg [31:0] _RAND_576;
  reg [31:0] _RAND_577;
  reg [31:0] _RAND_578;
  reg [31:0] _RAND_579;
  reg [31:0] _RAND_580;
  reg [31:0] _RAND_581;
  reg [31:0] _RAND_582;
  reg [31:0] _RAND_583;
  reg [31:0] _RAND_584;
  reg [31:0] _RAND_585;
  reg [31:0] _RAND_586;
  reg [31:0] _RAND_587;
  reg [31:0] _RAND_588;
  reg [31:0] _RAND_589;
  reg [31:0] _RAND_590;
  reg [31:0] _RAND_591;
  reg [31:0] _RAND_592;
  reg [31:0] _RAND_593;
  reg [31:0] _RAND_594;
  reg [31:0] _RAND_595;
  reg [31:0] _RAND_596;
  reg [31:0] _RAND_597;
  reg [31:0] _RAND_598;
  reg [31:0] _RAND_599;
  reg [31:0] _RAND_600;
  reg [31:0] _RAND_601;
  reg [31:0] _RAND_602;
  reg [31:0] _RAND_603;
  reg [31:0] _RAND_604;
  reg [31:0] _RAND_605;
  reg [31:0] _RAND_606;
  reg [31:0] _RAND_607;
  reg [31:0] _RAND_608;
  reg [31:0] _RAND_609;
  reg [31:0] _RAND_610;
  reg [31:0] _RAND_611;
  reg [31:0] _RAND_612;
  reg [31:0] _RAND_613;
  reg [31:0] _RAND_614;
  reg [31:0] _RAND_615;
  reg [31:0] _RAND_616;
  reg [31:0] _RAND_617;
  reg [31:0] _RAND_618;
  reg [31:0] _RAND_619;
  reg [31:0] _RAND_620;
  reg [31:0] _RAND_621;
  reg [31:0] _RAND_622;
  reg [31:0] _RAND_623;
  reg [31:0] _RAND_624;
  reg [31:0] _RAND_625;
  reg [31:0] _RAND_626;
  reg [31:0] _RAND_627;
  reg [31:0] _RAND_628;
  reg [31:0] _RAND_629;
  reg [31:0] _RAND_630;
  reg [31:0] _RAND_631;
  reg [31:0] _RAND_632;
  reg [31:0] _RAND_633;
  reg [31:0] _RAND_634;
  reg [31:0] _RAND_635;
  reg [31:0] _RAND_636;
  reg [31:0] _RAND_637;
  reg [31:0] _RAND_638;
  reg [31:0] _RAND_639;
  reg [31:0] _RAND_640;
  reg [31:0] _RAND_641;
  reg [31:0] _RAND_642;
  reg [31:0] _RAND_643;
  reg [31:0] _RAND_644;
  reg [31:0] _RAND_645;
  reg [31:0] _RAND_646;
  reg [31:0] _RAND_647;
  reg [31:0] _RAND_648;
  reg [31:0] _RAND_649;
  reg [31:0] _RAND_650;
  reg [31:0] _RAND_651;
  reg [31:0] _RAND_652;
  reg [31:0] _RAND_653;
  reg [31:0] _RAND_654;
  reg [31:0] _RAND_655;
  reg [31:0] _RAND_656;
  reg [31:0] _RAND_657;
  reg [31:0] _RAND_658;
  reg [31:0] _RAND_659;
  reg [31:0] _RAND_660;
  reg [31:0] _RAND_661;
  reg [31:0] _RAND_662;
  reg [31:0] _RAND_663;
  reg [31:0] _RAND_664;
  reg [31:0] _RAND_665;
  reg [31:0] _RAND_666;
  reg [31:0] _RAND_667;
  reg [31:0] _RAND_668;
  reg [31:0] _RAND_669;
  reg [31:0] _RAND_670;
  reg [31:0] _RAND_671;
  reg [31:0] _RAND_672;
  reg [31:0] _RAND_673;
  reg [31:0] _RAND_674;
  reg [31:0] _RAND_675;
  reg [31:0] _RAND_676;
  reg [31:0] _RAND_677;
  reg [31:0] _RAND_678;
  reg [31:0] _RAND_679;
  reg [31:0] _RAND_680;
  reg [31:0] _RAND_681;
  reg [31:0] _RAND_682;
  reg [31:0] _RAND_683;
  reg [31:0] _RAND_684;
  reg [31:0] _RAND_685;
  reg [31:0] _RAND_686;
  reg [31:0] _RAND_687;
  reg [31:0] _RAND_688;
  reg [31:0] _RAND_689;
  reg [31:0] _RAND_690;
  reg [31:0] _RAND_691;
  reg [31:0] _RAND_692;
  reg [31:0] _RAND_693;
  reg [31:0] _RAND_694;
  reg [31:0] _RAND_695;
  reg [31:0] _RAND_696;
  reg [31:0] _RAND_697;
  reg [31:0] _RAND_698;
  reg [31:0] _RAND_699;
  reg [31:0] _RAND_700;
  reg [31:0] _RAND_701;
  reg [31:0] _RAND_702;
  reg [31:0] _RAND_703;
  reg [31:0] _RAND_704;
  reg [31:0] _RAND_705;
  reg [31:0] _RAND_706;
  reg [31:0] _RAND_707;
  reg [31:0] _RAND_708;
  reg [31:0] _RAND_709;
  reg [31:0] _RAND_710;
  reg [31:0] _RAND_711;
  reg [31:0] _RAND_712;
  reg [31:0] _RAND_713;
  reg [31:0] _RAND_714;
  reg [31:0] _RAND_715;
  reg [31:0] _RAND_716;
  reg [31:0] _RAND_717;
  reg [31:0] _RAND_718;
  reg [31:0] _RAND_719;
  reg [31:0] _RAND_720;
  reg [31:0] _RAND_721;
  reg [31:0] _RAND_722;
  reg [31:0] _RAND_723;
  reg [31:0] _RAND_724;
  reg [31:0] _RAND_725;
  reg [31:0] _RAND_726;
  reg [31:0] _RAND_727;
  reg [31:0] _RAND_728;
  reg [31:0] _RAND_729;
  reg [31:0] _RAND_730;
  reg [31:0] _RAND_731;
  reg [31:0] _RAND_732;
  reg [31:0] _RAND_733;
  reg [31:0] _RAND_734;
  reg [31:0] _RAND_735;
  reg [31:0] _RAND_736;
  reg [31:0] _RAND_737;
  reg [31:0] _RAND_738;
  reg [31:0] _RAND_739;
  reg [31:0] _RAND_740;
  reg [31:0] _RAND_741;
  reg [31:0] _RAND_742;
  reg [31:0] _RAND_743;
  reg [31:0] _RAND_744;
  reg [31:0] _RAND_745;
  reg [31:0] _RAND_746;
  reg [31:0] _RAND_747;
  reg [31:0] _RAND_748;
  reg [31:0] _RAND_749;
  reg [31:0] _RAND_750;
  reg [31:0] _RAND_751;
  reg [31:0] _RAND_752;
  reg [31:0] _RAND_753;
  reg [31:0] _RAND_754;
  reg [31:0] _RAND_755;
  reg [31:0] _RAND_756;
  reg [31:0] _RAND_757;
  reg [31:0] _RAND_758;
  reg [31:0] _RAND_759;
  reg [31:0] _RAND_760;
  reg [31:0] _RAND_761;
  reg [31:0] _RAND_762;
  reg [31:0] _RAND_763;
  reg [31:0] _RAND_764;
  reg [31:0] _RAND_765;
  reg [31:0] _RAND_766;
  reg [31:0] _RAND_767;
  reg [31:0] _RAND_768;
  reg [31:0] _RAND_769;
  reg [31:0] _RAND_770;
  reg [31:0] _RAND_771;
  reg [31:0] _RAND_772;
  reg [31:0] _RAND_773;
  reg [31:0] _RAND_774;
  reg [31:0] _RAND_775;
  reg [31:0] _RAND_776;
  reg [31:0] _RAND_777;
  reg [31:0] _RAND_778;
  reg [31:0] _RAND_779;
  reg [31:0] _RAND_780;
  reg [31:0] _RAND_781;
  reg [31:0] _RAND_782;
  reg [31:0] _RAND_783;
  reg [31:0] _RAND_784;
  reg [31:0] _RAND_785;
  reg [31:0] _RAND_786;
  reg [31:0] _RAND_787;
  reg [31:0] _RAND_788;
  reg [31:0] _RAND_789;
  reg [31:0] _RAND_790;
  reg [31:0] _RAND_791;
  reg [31:0] _RAND_792;
  reg [31:0] _RAND_793;
  reg [31:0] _RAND_794;
  reg [31:0] _RAND_795;
  reg [31:0] _RAND_796;
  reg [31:0] _RAND_797;
  reg [31:0] _RAND_798;
  reg [31:0] _RAND_799;
  reg [31:0] _RAND_800;
  reg [31:0] _RAND_801;
  reg [31:0] _RAND_802;
  reg [31:0] _RAND_803;
  reg [31:0] _RAND_804;
  reg [31:0] _RAND_805;
  reg [31:0] _RAND_806;
  reg [31:0] _RAND_807;
  reg [31:0] _RAND_808;
  reg [31:0] _RAND_809;
  reg [31:0] _RAND_810;
  reg [31:0] _RAND_811;
  reg [31:0] _RAND_812;
  reg [31:0] _RAND_813;
  reg [31:0] _RAND_814;
  reg [31:0] _RAND_815;
  reg [31:0] _RAND_816;
  reg [31:0] _RAND_817;
  reg [31:0] _RAND_818;
  reg [31:0] _RAND_819;
  reg [31:0] _RAND_820;
`endif // RANDOMIZE_REG_INIT
  wire [8:0] exp_output = io_in_a_exp + io_in_b_exp; // @[elegant.scala 511:23]
  reg [11:0] dotProductRegs_0; // @[elegant.scala 513:51]
  reg [11:0] dotProductRegs_1; // @[elegant.scala 513:51]
  reg [11:0] dotProductRegs_2; // @[elegant.scala 513:51]
  reg [11:0] dotProductRegs_3; // @[elegant.scala 513:51]
  reg [11:0] dotProductRegs_4; // @[elegant.scala 513:51]
  reg [11:0] dotProductRegs_5; // @[elegant.scala 513:51]
  reg [11:0] dotProductRegs_6; // @[elegant.scala 513:51]
  reg [11:0] dotProductRegs_7; // @[elegant.scala 513:51]
  reg [11:0] dotProductRegs_8; // @[elegant.scala 513:51]
  reg [11:0] dotProductRegs_9; // @[elegant.scala 513:51]
  reg [11:0] dotProductRegs_10; // @[elegant.scala 513:51]
  reg [11:0] dotProductRegs_11; // @[elegant.scala 513:51]
  reg [11:0] dotProductRegs_12; // @[elegant.scala 513:51]
  reg [11:0] dotProductRegs_13; // @[elegant.scala 513:51]
  reg [11:0] dotProductRegs_14; // @[elegant.scala 513:51]
  reg [11:0] dotProductRegs_15; // @[elegant.scala 513:51]
  reg [12:0] two_complement_buffer_0; // @[elegant.scala 514:58]
  reg [12:0] two_complement_buffer_1; // @[elegant.scala 514:58]
  reg [12:0] two_complement_buffer_2; // @[elegant.scala 514:58]
  reg [12:0] two_complement_buffer_3; // @[elegant.scala 514:58]
  reg [12:0] two_complement_buffer_4; // @[elegant.scala 514:58]
  reg [12:0] two_complement_buffer_5; // @[elegant.scala 514:58]
  reg [12:0] two_complement_buffer_6; // @[elegant.scala 514:58]
  reg [12:0] two_complement_buffer_7; // @[elegant.scala 514:58]
  reg [12:0] two_complement_buffer_8; // @[elegant.scala 514:58]
  reg [12:0] two_complement_buffer_9; // @[elegant.scala 514:58]
  reg [12:0] two_complement_buffer_10; // @[elegant.scala 514:58]
  reg [12:0] two_complement_buffer_11; // @[elegant.scala 514:58]
  reg [12:0] two_complement_buffer_12; // @[elegant.scala 514:58]
  reg [12:0] two_complement_buffer_13; // @[elegant.scala 514:58]
  reg [12:0] two_complement_buffer_14; // @[elegant.scala 514:58]
  reg [12:0] two_complement_buffer_15; // @[elegant.scala 514:58]
  reg [12:0] two_complement_0; // @[elegant.scala 515:51]
  reg [12:0] two_complement_1; // @[elegant.scala 515:51]
  reg [12:0] two_complement_2; // @[elegant.scala 515:51]
  reg [12:0] two_complement_3; // @[elegant.scala 515:51]
  reg [12:0] two_complement_4; // @[elegant.scala 515:51]
  reg [12:0] two_complement_5; // @[elegant.scala 515:51]
  reg [12:0] two_complement_6; // @[elegant.scala 515:51]
  reg [12:0] two_complement_7; // @[elegant.scala 515:51]
  reg [12:0] two_complement_8; // @[elegant.scala 515:51]
  reg [12:0] two_complement_9; // @[elegant.scala 515:51]
  reg [12:0] two_complement_10; // @[elegant.scala 515:51]
  reg [12:0] two_complement_11; // @[elegant.scala 515:51]
  reg [12:0] two_complement_12; // @[elegant.scala 515:51]
  reg [12:0] two_complement_13; // @[elegant.scala 515:51]
  reg [12:0] two_complement_14; // @[elegant.scala 515:51]
  reg [12:0] two_complement_15; // @[elegant.scala 515:51]
  reg  signs_0; // @[elegant.scala 516:42]
  reg  signs_1; // @[elegant.scala 516:42]
  reg  signs_2; // @[elegant.scala 516:42]
  reg  signs_3; // @[elegant.scala 516:42]
  reg  signs_4; // @[elegant.scala 516:42]
  reg  signs_5; // @[elegant.scala 516:42]
  reg  signs_6; // @[elegant.scala 516:42]
  reg  signs_7; // @[elegant.scala 516:42]
  reg  signs_8; // @[elegant.scala 516:42]
  reg  signs_9; // @[elegant.scala 516:42]
  reg  signs_10; // @[elegant.scala 516:42]
  reg  signs_11; // @[elegant.scala 516:42]
  reg  signs_12; // @[elegant.scala 516:42]
  reg  signs_13; // @[elegant.scala 516:42]
  reg  signs_14; // @[elegant.scala 516:42]
  reg  signs_15; // @[elegant.scala 516:42]
  reg [27:0] acc; // @[elegant.scala 517:20]
  reg [27:0] acc_hbfp; // @[elegant.scala 518:25]
  reg [27:0] acc_buf; // @[elegant.scala 519:24]
  reg [5:0] multiplierReg; // @[elegant.scala 524:34]
  reg [5:0] multiplierReg2; // @[elegant.scala 525:35]
  reg  signReg; // @[elegant.scala 527:28]
  reg [11:0] pp1; // @[elegant.scala 528:24]
  reg [11:0] pp2; // @[elegant.scala 529:24]
  reg [11:0] pp3; // @[elegant.scala 530:24]
  reg [11:0] pp4; // @[elegant.scala 531:24]
  reg [11:0] pp5; // @[elegant.scala 532:24]
  reg [11:0] pp6; // @[elegant.scala 533:24]
  reg [11:0] pp7; // @[elegant.scala 534:24]
  reg [11:0] pp8; // @[elegant.scala 535:24]
  wire [3:0] _pp1_T_2 = multiplierReg[1:0] * multiplierReg2[1:0]; // @[elegant.scala 541:37]
  wire [3:0] _pp2_T_2 = multiplierReg[1:0] * multiplierReg2[3:2]; // @[elegant.scala 542:46]
  wire [5:0] _GEN_0 = {_pp2_T_2, 2'h0}; // @[elegant.scala 542:69]
  reg [6:0] pp2_REG; // @[elegant.scala 542:25]
  wire [3:0] _pp3_T_2 = multiplierReg[1:0] * multiplierReg2[5:4]; // @[elegant.scala 543:54]
  wire [7:0] _GEN_1 = {_pp3_T_2, 4'h0}; // @[elegant.scala 543:77]
  reg [10:0] pp3_REG; // @[elegant.scala 543:33]
  reg [10:0] pp3_REG_1; // @[elegant.scala 543:25]
  wire [3:0] _pp4_T_2 = multiplierReg[3:2] * multiplierReg2[1:0]; // @[elegant.scala 544:62]
  wire [5:0] _GEN_2 = {_pp4_T_2, 2'h0}; // @[elegant.scala 544:85]
  reg [6:0] pp4_REG; // @[elegant.scala 544:41]
  reg [6:0] pp4_REG_1; // @[elegant.scala 544:33]
  reg [6:0] pp4_REG_2; // @[elegant.scala 544:25]
  wire [3:0] _pp5_T_2 = multiplierReg[3:2] * multiplierReg2[3:2]; // @[elegant.scala 545:70]
  wire [7:0] _GEN_3 = {_pp5_T_2, 4'h0}; // @[elegant.scala 545:93]
  reg [10:0] pp5_REG; // @[elegant.scala 545:49]
  reg [10:0] pp5_REG_1; // @[elegant.scala 545:41]
  reg [10:0] pp5_REG_2; // @[elegant.scala 545:33]
  reg [10:0] pp5_REG_3; // @[elegant.scala 545:25]
  wire [3:0] _pp6_T_2 = multiplierReg[3:2] * multiplierReg2[5:4]; // @[elegant.scala 546:78]
  wire [9:0] _GEN_4 = {_pp6_T_2, 6'h0}; // @[elegant.scala 546:101]
  reg [10:0] pp6_REG; // @[elegant.scala 546:57]
  reg [10:0] pp6_REG_1; // @[elegant.scala 546:49]
  reg [10:0] pp6_REG_2; // @[elegant.scala 546:41]
  reg [10:0] pp6_REG_3; // @[elegant.scala 546:33]
  reg [10:0] pp6_REG_4; // @[elegant.scala 546:25]
  wire [3:0] _pp7_T_2 = multiplierReg[5:4] * multiplierReg2[1:0]; // @[elegant.scala 547:86]
  wire [7:0] _GEN_5 = {_pp7_T_2, 4'h0}; // @[elegant.scala 547:109]
  reg [10:0] pp7_REG; // @[elegant.scala 547:65]
  reg [10:0] pp7_REG_1; // @[elegant.scala 547:57]
  reg [10:0] pp7_REG_2; // @[elegant.scala 547:49]
  reg [10:0] pp7_REG_3; // @[elegant.scala 547:41]
  reg [10:0] pp7_REG_4; // @[elegant.scala 547:33]
  reg [10:0] pp7_REG_5; // @[elegant.scala 547:25]
  wire [3:0] _pp8_T_2 = multiplierReg[5:4] * multiplierReg2[3:2]; // @[elegant.scala 548:94]
  wire [9:0] _GEN_6 = {_pp8_T_2, 6'h0}; // @[elegant.scala 548:117]
  reg [10:0] pp8_REG; // @[elegant.scala 548:73]
  reg [10:0] pp8_REG_1; // @[elegant.scala 548:65]
  reg [10:0] pp8_REG_2; // @[elegant.scala 548:57]
  reg [10:0] pp8_REG_3; // @[elegant.scala 548:49]
  reg [10:0] pp8_REG_4; // @[elegant.scala 548:41]
  reg [10:0] pp8_REG_5; // @[elegant.scala 548:33]
  reg [10:0] pp8_REG_6; // @[elegant.scala 548:25]
  wire [12:0] _dotProductRegs_0_T = pp1 + pp2; // @[elegant.scala 549:36]
  wire [12:0] _GEN_7 = {{1'd0}, pp3}; // @[elegant.scala 549:43]
  wire [13:0] _dotProductRegs_0_T_1 = _dotProductRegs_0_T + _GEN_7; // @[elegant.scala 549:43]
  wire [13:0] _GEN_8 = {{2'd0}, pp4}; // @[elegant.scala 549:50]
  wire [14:0] _dotProductRegs_0_T_2 = _dotProductRegs_0_T_1 + _GEN_8; // @[elegant.scala 549:50]
  wire [14:0] _GEN_9 = {{3'd0}, pp5}; // @[elegant.scala 549:57]
  wire [15:0] _dotProductRegs_0_T_3 = _dotProductRegs_0_T_2 + _GEN_9; // @[elegant.scala 549:57]
  wire [15:0] _GEN_10 = {{4'd0}, pp6}; // @[elegant.scala 549:64]
  wire [16:0] _dotProductRegs_0_T_4 = _dotProductRegs_0_T_3 + _GEN_10; // @[elegant.scala 549:64]
  wire [16:0] _GEN_11 = {{5'd0}, pp7}; // @[elegant.scala 549:71]
  wire [17:0] _dotProductRegs_0_T_5 = _dotProductRegs_0_T_4 + _GEN_11; // @[elegant.scala 549:71]
  wire [17:0] _GEN_12 = {{6'd0}, pp8}; // @[elegant.scala 549:78]
  wire [18:0] _dotProductRegs_0_T_6 = _dotProductRegs_0_T_5 + _GEN_12; // @[elegant.scala 549:78]
  wire [3:0] _dotProductRegs_0_T_9 = multiplierReg[5:4] * multiplierReg2[5:4]; // @[elegant.scala 549:172]
  wire [11:0] _GEN_13 = {_dotProductRegs_0_T_9, 8'h0}; // @[elegant.scala 549:195]
  reg [18:0] dotProductRegs_0_REG; // @[elegant.scala 549:151]
  reg [18:0] dotProductRegs_0_REG_1; // @[elegant.scala 549:143]
  reg [18:0] dotProductRegs_0_REG_2; // @[elegant.scala 549:135]
  reg [18:0] dotProductRegs_0_REG_3; // @[elegant.scala 549:127]
  reg [18:0] dotProductRegs_0_REG_4; // @[elegant.scala 549:119]
  reg [18:0] dotProductRegs_0_REG_5; // @[elegant.scala 549:111]
  reg [18:0] dotProductRegs_0_REG_6; // @[elegant.scala 549:103]
  reg [18:0] dotProductRegs_0_REG_7; // @[elegant.scala 549:95]
  wire [19:0] _dotProductRegs_0_T_11 = _dotProductRegs_0_T_6 + dotProductRegs_0_REG_7; // @[elegant.scala 549:85]
  wire [12:0] _two_complement_0_T_1 = {1'h0,dotProductRegs_0}; // @[elegant.scala 553:55]
  wire [12:0] _two_complement_0_T_2 = ~_two_complement_0_T_1; // @[elegant.scala 553:49]
  wire [12:0] _two_complement_0_T_4 = _two_complement_0_T_2 + 13'h1; // @[elegant.scala 553:77]
  reg [5:0] multiplierReg_1; // @[elegant.scala 524:34]
  reg [5:0] multiplierReg2_1; // @[elegant.scala 525:35]
  reg  signReg_1; // @[elegant.scala 527:28]
  reg [11:0] pp1_1; // @[elegant.scala 528:24]
  reg [11:0] pp2_1; // @[elegant.scala 529:24]
  reg [11:0] pp3_1; // @[elegant.scala 530:24]
  reg [11:0] pp4_1; // @[elegant.scala 531:24]
  reg [11:0] pp5_1; // @[elegant.scala 532:24]
  reg [11:0] pp6_1; // @[elegant.scala 533:24]
  reg [11:0] pp7_1; // @[elegant.scala 534:24]
  reg [11:0] pp8_1; // @[elegant.scala 535:24]
  wire [3:0] _pp1_T_5 = multiplierReg_1[1:0] * multiplierReg2_1[1:0]; // @[elegant.scala 541:37]
  wire [3:0] _pp2_T_6 = multiplierReg_1[1:0] * multiplierReg2_1[3:2]; // @[elegant.scala 542:46]
  wire [5:0] _GEN_14 = {_pp2_T_6, 2'h0}; // @[elegant.scala 542:69]
  reg [6:0] pp2_REG_1; // @[elegant.scala 542:25]
  wire [3:0] _pp3_T_6 = multiplierReg_1[1:0] * multiplierReg2_1[5:4]; // @[elegant.scala 543:54]
  wire [7:0] _GEN_15 = {_pp3_T_6, 4'h0}; // @[elegant.scala 543:77]
  reg [10:0] pp3_REG_2; // @[elegant.scala 543:33]
  reg [10:0] pp3_REG_3; // @[elegant.scala 543:25]
  wire [3:0] _pp4_T_6 = multiplierReg_1[3:2] * multiplierReg2_1[1:0]; // @[elegant.scala 544:62]
  wire [5:0] _GEN_16 = {_pp4_T_6, 2'h0}; // @[elegant.scala 544:85]
  reg [6:0] pp4_REG_3; // @[elegant.scala 544:41]
  reg [6:0] pp4_REG_4; // @[elegant.scala 544:33]
  reg [6:0] pp4_REG_5; // @[elegant.scala 544:25]
  wire [3:0] _pp5_T_6 = multiplierReg_1[3:2] * multiplierReg2_1[3:2]; // @[elegant.scala 545:70]
  wire [7:0] _GEN_17 = {_pp5_T_6, 4'h0}; // @[elegant.scala 545:93]
  reg [10:0] pp5_REG_4; // @[elegant.scala 545:49]
  reg [10:0] pp5_REG_5; // @[elegant.scala 545:41]
  reg [10:0] pp5_REG_6; // @[elegant.scala 545:33]
  reg [10:0] pp5_REG_7; // @[elegant.scala 545:25]
  wire [3:0] _pp6_T_6 = multiplierReg_1[3:2] * multiplierReg2_1[5:4]; // @[elegant.scala 546:78]
  wire [9:0] _GEN_18 = {_pp6_T_6, 6'h0}; // @[elegant.scala 546:101]
  reg [10:0] pp6_REG_5; // @[elegant.scala 546:57]
  reg [10:0] pp6_REG_6; // @[elegant.scala 546:49]
  reg [10:0] pp6_REG_7; // @[elegant.scala 546:41]
  reg [10:0] pp6_REG_8; // @[elegant.scala 546:33]
  reg [10:0] pp6_REG_9; // @[elegant.scala 546:25]
  wire [3:0] _pp7_T_6 = multiplierReg_1[5:4] * multiplierReg2_1[1:0]; // @[elegant.scala 547:86]
  wire [7:0] _GEN_19 = {_pp7_T_6, 4'h0}; // @[elegant.scala 547:109]
  reg [10:0] pp7_REG_6; // @[elegant.scala 547:65]
  reg [10:0] pp7_REG_7; // @[elegant.scala 547:57]
  reg [10:0] pp7_REG_8; // @[elegant.scala 547:49]
  reg [10:0] pp7_REG_9; // @[elegant.scala 547:41]
  reg [10:0] pp7_REG_10; // @[elegant.scala 547:33]
  reg [10:0] pp7_REG_11; // @[elegant.scala 547:25]
  wire [3:0] _pp8_T_6 = multiplierReg_1[5:4] * multiplierReg2_1[3:2]; // @[elegant.scala 548:94]
  wire [9:0] _GEN_20 = {_pp8_T_6, 6'h0}; // @[elegant.scala 548:117]
  reg [10:0] pp8_REG_7; // @[elegant.scala 548:73]
  reg [10:0] pp8_REG_8; // @[elegant.scala 548:65]
  reg [10:0] pp8_REG_9; // @[elegant.scala 548:57]
  reg [10:0] pp8_REG_10; // @[elegant.scala 548:49]
  reg [10:0] pp8_REG_11; // @[elegant.scala 548:41]
  reg [10:0] pp8_REG_12; // @[elegant.scala 548:33]
  reg [10:0] pp8_REG_13; // @[elegant.scala 548:25]
  wire [12:0] _dotProductRegs_1_T = pp1_1 + pp2_1; // @[elegant.scala 549:36]
  wire [12:0] _GEN_21 = {{1'd0}, pp3_1}; // @[elegant.scala 549:43]
  wire [13:0] _dotProductRegs_1_T_1 = _dotProductRegs_1_T + _GEN_21; // @[elegant.scala 549:43]
  wire [13:0] _GEN_22 = {{2'd0}, pp4_1}; // @[elegant.scala 549:50]
  wire [14:0] _dotProductRegs_1_T_2 = _dotProductRegs_1_T_1 + _GEN_22; // @[elegant.scala 549:50]
  wire [14:0] _GEN_23 = {{3'd0}, pp5_1}; // @[elegant.scala 549:57]
  wire [15:0] _dotProductRegs_1_T_3 = _dotProductRegs_1_T_2 + _GEN_23; // @[elegant.scala 549:57]
  wire [15:0] _GEN_24 = {{4'd0}, pp6_1}; // @[elegant.scala 549:64]
  wire [16:0] _dotProductRegs_1_T_4 = _dotProductRegs_1_T_3 + _GEN_24; // @[elegant.scala 549:64]
  wire [16:0] _GEN_25 = {{5'd0}, pp7_1}; // @[elegant.scala 549:71]
  wire [17:0] _dotProductRegs_1_T_5 = _dotProductRegs_1_T_4 + _GEN_25; // @[elegant.scala 549:71]
  wire [17:0] _GEN_26 = {{6'd0}, pp8_1}; // @[elegant.scala 549:78]
  wire [18:0] _dotProductRegs_1_T_6 = _dotProductRegs_1_T_5 + _GEN_26; // @[elegant.scala 549:78]
  wire [3:0] _dotProductRegs_1_T_9 = multiplierReg_1[5:4] * multiplierReg2_1[5:4]; // @[elegant.scala 549:172]
  wire [11:0] _GEN_27 = {_dotProductRegs_1_T_9, 8'h0}; // @[elegant.scala 549:195]
  reg [18:0] dotProductRegs_1_REG; // @[elegant.scala 549:151]
  reg [18:0] dotProductRegs_1_REG_1; // @[elegant.scala 549:143]
  reg [18:0] dotProductRegs_1_REG_2; // @[elegant.scala 549:135]
  reg [18:0] dotProductRegs_1_REG_3; // @[elegant.scala 549:127]
  reg [18:0] dotProductRegs_1_REG_4; // @[elegant.scala 549:119]
  reg [18:0] dotProductRegs_1_REG_5; // @[elegant.scala 549:111]
  reg [18:0] dotProductRegs_1_REG_6; // @[elegant.scala 549:103]
  reg [18:0] dotProductRegs_1_REG_7; // @[elegant.scala 549:95]
  wire [19:0] _dotProductRegs_1_T_11 = _dotProductRegs_1_T_6 + dotProductRegs_1_REG_7; // @[elegant.scala 549:85]
  wire [12:0] _two_complement_1_T_1 = {1'h0,dotProductRegs_1}; // @[elegant.scala 553:55]
  wire [12:0] _two_complement_1_T_2 = ~_two_complement_1_T_1; // @[elegant.scala 553:49]
  wire [12:0] _two_complement_1_T_4 = _two_complement_1_T_2 + 13'h1; // @[elegant.scala 553:77]
  reg [5:0] multiplierReg_2; // @[elegant.scala 524:34]
  reg [5:0] multiplierReg2_2; // @[elegant.scala 525:35]
  reg  signReg_2; // @[elegant.scala 527:28]
  reg [11:0] pp1_2; // @[elegant.scala 528:24]
  reg [11:0] pp2_2; // @[elegant.scala 529:24]
  reg [11:0] pp3_2; // @[elegant.scala 530:24]
  reg [11:0] pp4_2; // @[elegant.scala 531:24]
  reg [11:0] pp5_2; // @[elegant.scala 532:24]
  reg [11:0] pp6_2; // @[elegant.scala 533:24]
  reg [11:0] pp7_2; // @[elegant.scala 534:24]
  reg [11:0] pp8_2; // @[elegant.scala 535:24]
  wire [3:0] _pp1_T_8 = multiplierReg_2[1:0] * multiplierReg2_2[1:0]; // @[elegant.scala 541:37]
  wire [3:0] _pp2_T_10 = multiplierReg_2[1:0] * multiplierReg2_2[3:2]; // @[elegant.scala 542:46]
  wire [5:0] _GEN_28 = {_pp2_T_10, 2'h0}; // @[elegant.scala 542:69]
  reg [6:0] pp2_REG_2; // @[elegant.scala 542:25]
  wire [3:0] _pp3_T_10 = multiplierReg_2[1:0] * multiplierReg2_2[5:4]; // @[elegant.scala 543:54]
  wire [7:0] _GEN_29 = {_pp3_T_10, 4'h0}; // @[elegant.scala 543:77]
  reg [10:0] pp3_REG_4; // @[elegant.scala 543:33]
  reg [10:0] pp3_REG_5; // @[elegant.scala 543:25]
  wire [3:0] _pp4_T_10 = multiplierReg_2[3:2] * multiplierReg2_2[1:0]; // @[elegant.scala 544:62]
  wire [5:0] _GEN_30 = {_pp4_T_10, 2'h0}; // @[elegant.scala 544:85]
  reg [6:0] pp4_REG_6; // @[elegant.scala 544:41]
  reg [6:0] pp4_REG_7; // @[elegant.scala 544:33]
  reg [6:0] pp4_REG_8; // @[elegant.scala 544:25]
  wire [3:0] _pp5_T_10 = multiplierReg_2[3:2] * multiplierReg2_2[3:2]; // @[elegant.scala 545:70]
  wire [7:0] _GEN_31 = {_pp5_T_10, 4'h0}; // @[elegant.scala 545:93]
  reg [10:0] pp5_REG_8; // @[elegant.scala 545:49]
  reg [10:0] pp5_REG_9; // @[elegant.scala 545:41]
  reg [10:0] pp5_REG_10; // @[elegant.scala 545:33]
  reg [10:0] pp5_REG_11; // @[elegant.scala 545:25]
  wire [3:0] _pp6_T_10 = multiplierReg_2[3:2] * multiplierReg2_2[5:4]; // @[elegant.scala 546:78]
  wire [9:0] _GEN_32 = {_pp6_T_10, 6'h0}; // @[elegant.scala 546:101]
  reg [10:0] pp6_REG_10; // @[elegant.scala 546:57]
  reg [10:0] pp6_REG_11; // @[elegant.scala 546:49]
  reg [10:0] pp6_REG_12; // @[elegant.scala 546:41]
  reg [10:0] pp6_REG_13; // @[elegant.scala 546:33]
  reg [10:0] pp6_REG_14; // @[elegant.scala 546:25]
  wire [3:0] _pp7_T_10 = multiplierReg_2[5:4] * multiplierReg2_2[1:0]; // @[elegant.scala 547:86]
  wire [7:0] _GEN_33 = {_pp7_T_10, 4'h0}; // @[elegant.scala 547:109]
  reg [10:0] pp7_REG_12; // @[elegant.scala 547:65]
  reg [10:0] pp7_REG_13; // @[elegant.scala 547:57]
  reg [10:0] pp7_REG_14; // @[elegant.scala 547:49]
  reg [10:0] pp7_REG_15; // @[elegant.scala 547:41]
  reg [10:0] pp7_REG_16; // @[elegant.scala 547:33]
  reg [10:0] pp7_REG_17; // @[elegant.scala 547:25]
  wire [3:0] _pp8_T_10 = multiplierReg_2[5:4] * multiplierReg2_2[3:2]; // @[elegant.scala 548:94]
  wire [9:0] _GEN_34 = {_pp8_T_10, 6'h0}; // @[elegant.scala 548:117]
  reg [10:0] pp8_REG_14; // @[elegant.scala 548:73]
  reg [10:0] pp8_REG_15; // @[elegant.scala 548:65]
  reg [10:0] pp8_REG_16; // @[elegant.scala 548:57]
  reg [10:0] pp8_REG_17; // @[elegant.scala 548:49]
  reg [10:0] pp8_REG_18; // @[elegant.scala 548:41]
  reg [10:0] pp8_REG_19; // @[elegant.scala 548:33]
  reg [10:0] pp8_REG_20; // @[elegant.scala 548:25]
  wire [12:0] _dotProductRegs_2_T = pp1_2 + pp2_2; // @[elegant.scala 549:36]
  wire [12:0] _GEN_35 = {{1'd0}, pp3_2}; // @[elegant.scala 549:43]
  wire [13:0] _dotProductRegs_2_T_1 = _dotProductRegs_2_T + _GEN_35; // @[elegant.scala 549:43]
  wire [13:0] _GEN_36 = {{2'd0}, pp4_2}; // @[elegant.scala 549:50]
  wire [14:0] _dotProductRegs_2_T_2 = _dotProductRegs_2_T_1 + _GEN_36; // @[elegant.scala 549:50]
  wire [14:0] _GEN_37 = {{3'd0}, pp5_2}; // @[elegant.scala 549:57]
  wire [15:0] _dotProductRegs_2_T_3 = _dotProductRegs_2_T_2 + _GEN_37; // @[elegant.scala 549:57]
  wire [15:0] _GEN_38 = {{4'd0}, pp6_2}; // @[elegant.scala 549:64]
  wire [16:0] _dotProductRegs_2_T_4 = _dotProductRegs_2_T_3 + _GEN_38; // @[elegant.scala 549:64]
  wire [16:0] _GEN_39 = {{5'd0}, pp7_2}; // @[elegant.scala 549:71]
  wire [17:0] _dotProductRegs_2_T_5 = _dotProductRegs_2_T_4 + _GEN_39; // @[elegant.scala 549:71]
  wire [17:0] _GEN_40 = {{6'd0}, pp8_2}; // @[elegant.scala 549:78]
  wire [18:0] _dotProductRegs_2_T_6 = _dotProductRegs_2_T_5 + _GEN_40; // @[elegant.scala 549:78]
  wire [3:0] _dotProductRegs_2_T_9 = multiplierReg_2[5:4] * multiplierReg2_2[5:4]; // @[elegant.scala 549:172]
  wire [11:0] _GEN_41 = {_dotProductRegs_2_T_9, 8'h0}; // @[elegant.scala 549:195]
  reg [18:0] dotProductRegs_2_REG; // @[elegant.scala 549:151]
  reg [18:0] dotProductRegs_2_REG_1; // @[elegant.scala 549:143]
  reg [18:0] dotProductRegs_2_REG_2; // @[elegant.scala 549:135]
  reg [18:0] dotProductRegs_2_REG_3; // @[elegant.scala 549:127]
  reg [18:0] dotProductRegs_2_REG_4; // @[elegant.scala 549:119]
  reg [18:0] dotProductRegs_2_REG_5; // @[elegant.scala 549:111]
  reg [18:0] dotProductRegs_2_REG_6; // @[elegant.scala 549:103]
  reg [18:0] dotProductRegs_2_REG_7; // @[elegant.scala 549:95]
  wire [19:0] _dotProductRegs_2_T_11 = _dotProductRegs_2_T_6 + dotProductRegs_2_REG_7; // @[elegant.scala 549:85]
  wire [12:0] _two_complement_2_T_1 = {1'h0,dotProductRegs_2}; // @[elegant.scala 553:55]
  wire [12:0] _two_complement_2_T_2 = ~_two_complement_2_T_1; // @[elegant.scala 553:49]
  wire [12:0] _two_complement_2_T_4 = _two_complement_2_T_2 + 13'h1; // @[elegant.scala 553:77]
  reg [5:0] multiplierReg_3; // @[elegant.scala 524:34]
  reg [5:0] multiplierReg2_3; // @[elegant.scala 525:35]
  reg  signReg_3; // @[elegant.scala 527:28]
  reg [11:0] pp1_3; // @[elegant.scala 528:24]
  reg [11:0] pp2_3; // @[elegant.scala 529:24]
  reg [11:0] pp3_3; // @[elegant.scala 530:24]
  reg [11:0] pp4_3; // @[elegant.scala 531:24]
  reg [11:0] pp5_3; // @[elegant.scala 532:24]
  reg [11:0] pp6_3; // @[elegant.scala 533:24]
  reg [11:0] pp7_3; // @[elegant.scala 534:24]
  reg [11:0] pp8_3; // @[elegant.scala 535:24]
  wire [3:0] _pp1_T_11 = multiplierReg_3[1:0] * multiplierReg2_3[1:0]; // @[elegant.scala 541:37]
  wire [3:0] _pp2_T_14 = multiplierReg_3[1:0] * multiplierReg2_3[3:2]; // @[elegant.scala 542:46]
  wire [5:0] _GEN_42 = {_pp2_T_14, 2'h0}; // @[elegant.scala 542:69]
  reg [6:0] pp2_REG_3; // @[elegant.scala 542:25]
  wire [3:0] _pp3_T_14 = multiplierReg_3[1:0] * multiplierReg2_3[5:4]; // @[elegant.scala 543:54]
  wire [7:0] _GEN_43 = {_pp3_T_14, 4'h0}; // @[elegant.scala 543:77]
  reg [10:0] pp3_REG_6; // @[elegant.scala 543:33]
  reg [10:0] pp3_REG_7; // @[elegant.scala 543:25]
  wire [3:0] _pp4_T_14 = multiplierReg_3[3:2] * multiplierReg2_3[1:0]; // @[elegant.scala 544:62]
  wire [5:0] _GEN_44 = {_pp4_T_14, 2'h0}; // @[elegant.scala 544:85]
  reg [6:0] pp4_REG_9; // @[elegant.scala 544:41]
  reg [6:0] pp4_REG_10; // @[elegant.scala 544:33]
  reg [6:0] pp4_REG_11; // @[elegant.scala 544:25]
  wire [3:0] _pp5_T_14 = multiplierReg_3[3:2] * multiplierReg2_3[3:2]; // @[elegant.scala 545:70]
  wire [7:0] _GEN_45 = {_pp5_T_14, 4'h0}; // @[elegant.scala 545:93]
  reg [10:0] pp5_REG_12; // @[elegant.scala 545:49]
  reg [10:0] pp5_REG_13; // @[elegant.scala 545:41]
  reg [10:0] pp5_REG_14; // @[elegant.scala 545:33]
  reg [10:0] pp5_REG_15; // @[elegant.scala 545:25]
  wire [3:0] _pp6_T_14 = multiplierReg_3[3:2] * multiplierReg2_3[5:4]; // @[elegant.scala 546:78]
  wire [9:0] _GEN_46 = {_pp6_T_14, 6'h0}; // @[elegant.scala 546:101]
  reg [10:0] pp6_REG_15; // @[elegant.scala 546:57]
  reg [10:0] pp6_REG_16; // @[elegant.scala 546:49]
  reg [10:0] pp6_REG_17; // @[elegant.scala 546:41]
  reg [10:0] pp6_REG_18; // @[elegant.scala 546:33]
  reg [10:0] pp6_REG_19; // @[elegant.scala 546:25]
  wire [3:0] _pp7_T_14 = multiplierReg_3[5:4] * multiplierReg2_3[1:0]; // @[elegant.scala 547:86]
  wire [7:0] _GEN_47 = {_pp7_T_14, 4'h0}; // @[elegant.scala 547:109]
  reg [10:0] pp7_REG_18; // @[elegant.scala 547:65]
  reg [10:0] pp7_REG_19; // @[elegant.scala 547:57]
  reg [10:0] pp7_REG_20; // @[elegant.scala 547:49]
  reg [10:0] pp7_REG_21; // @[elegant.scala 547:41]
  reg [10:0] pp7_REG_22; // @[elegant.scala 547:33]
  reg [10:0] pp7_REG_23; // @[elegant.scala 547:25]
  wire [3:0] _pp8_T_14 = multiplierReg_3[5:4] * multiplierReg2_3[3:2]; // @[elegant.scala 548:94]
  wire [9:0] _GEN_48 = {_pp8_T_14, 6'h0}; // @[elegant.scala 548:117]
  reg [10:0] pp8_REG_21; // @[elegant.scala 548:73]
  reg [10:0] pp8_REG_22; // @[elegant.scala 548:65]
  reg [10:0] pp8_REG_23; // @[elegant.scala 548:57]
  reg [10:0] pp8_REG_24; // @[elegant.scala 548:49]
  reg [10:0] pp8_REG_25; // @[elegant.scala 548:41]
  reg [10:0] pp8_REG_26; // @[elegant.scala 548:33]
  reg [10:0] pp8_REG_27; // @[elegant.scala 548:25]
  wire [12:0] _dotProductRegs_3_T = pp1_3 + pp2_3; // @[elegant.scala 549:36]
  wire [12:0] _GEN_49 = {{1'd0}, pp3_3}; // @[elegant.scala 549:43]
  wire [13:0] _dotProductRegs_3_T_1 = _dotProductRegs_3_T + _GEN_49; // @[elegant.scala 549:43]
  wire [13:0] _GEN_50 = {{2'd0}, pp4_3}; // @[elegant.scala 549:50]
  wire [14:0] _dotProductRegs_3_T_2 = _dotProductRegs_3_T_1 + _GEN_50; // @[elegant.scala 549:50]
  wire [14:0] _GEN_51 = {{3'd0}, pp5_3}; // @[elegant.scala 549:57]
  wire [15:0] _dotProductRegs_3_T_3 = _dotProductRegs_3_T_2 + _GEN_51; // @[elegant.scala 549:57]
  wire [15:0] _GEN_52 = {{4'd0}, pp6_3}; // @[elegant.scala 549:64]
  wire [16:0] _dotProductRegs_3_T_4 = _dotProductRegs_3_T_3 + _GEN_52; // @[elegant.scala 549:64]
  wire [16:0] _GEN_53 = {{5'd0}, pp7_3}; // @[elegant.scala 549:71]
  wire [17:0] _dotProductRegs_3_T_5 = _dotProductRegs_3_T_4 + _GEN_53; // @[elegant.scala 549:71]
  wire [17:0] _GEN_54 = {{6'd0}, pp8_3}; // @[elegant.scala 549:78]
  wire [18:0] _dotProductRegs_3_T_6 = _dotProductRegs_3_T_5 + _GEN_54; // @[elegant.scala 549:78]
  wire [3:0] _dotProductRegs_3_T_9 = multiplierReg_3[5:4] * multiplierReg2_3[5:4]; // @[elegant.scala 549:172]
  wire [11:0] _GEN_55 = {_dotProductRegs_3_T_9, 8'h0}; // @[elegant.scala 549:195]
  reg [18:0] dotProductRegs_3_REG; // @[elegant.scala 549:151]
  reg [18:0] dotProductRegs_3_REG_1; // @[elegant.scala 549:143]
  reg [18:0] dotProductRegs_3_REG_2; // @[elegant.scala 549:135]
  reg [18:0] dotProductRegs_3_REG_3; // @[elegant.scala 549:127]
  reg [18:0] dotProductRegs_3_REG_4; // @[elegant.scala 549:119]
  reg [18:0] dotProductRegs_3_REG_5; // @[elegant.scala 549:111]
  reg [18:0] dotProductRegs_3_REG_6; // @[elegant.scala 549:103]
  reg [18:0] dotProductRegs_3_REG_7; // @[elegant.scala 549:95]
  wire [19:0] _dotProductRegs_3_T_11 = _dotProductRegs_3_T_6 + dotProductRegs_3_REG_7; // @[elegant.scala 549:85]
  wire [12:0] _two_complement_3_T_1 = {1'h0,dotProductRegs_3}; // @[elegant.scala 553:55]
  wire [12:0] _two_complement_3_T_2 = ~_two_complement_3_T_1; // @[elegant.scala 553:49]
  wire [12:0] _two_complement_3_T_4 = _two_complement_3_T_2 + 13'h1; // @[elegant.scala 553:77]
  reg [5:0] multiplierReg_4; // @[elegant.scala 524:34]
  reg [5:0] multiplierReg2_4; // @[elegant.scala 525:35]
  reg  signReg_4; // @[elegant.scala 527:28]
  reg [11:0] pp1_4; // @[elegant.scala 528:24]
  reg [11:0] pp2_4; // @[elegant.scala 529:24]
  reg [11:0] pp3_4; // @[elegant.scala 530:24]
  reg [11:0] pp4_4; // @[elegant.scala 531:24]
  reg [11:0] pp5_4; // @[elegant.scala 532:24]
  reg [11:0] pp6_4; // @[elegant.scala 533:24]
  reg [11:0] pp7_4; // @[elegant.scala 534:24]
  reg [11:0] pp8_4; // @[elegant.scala 535:24]
  wire [3:0] _pp1_T_14 = multiplierReg_4[1:0] * multiplierReg2_4[1:0]; // @[elegant.scala 541:37]
  wire [3:0] _pp2_T_18 = multiplierReg_4[1:0] * multiplierReg2_4[3:2]; // @[elegant.scala 542:46]
  wire [5:0] _GEN_56 = {_pp2_T_18, 2'h0}; // @[elegant.scala 542:69]
  reg [6:0] pp2_REG_4; // @[elegant.scala 542:25]
  wire [3:0] _pp3_T_18 = multiplierReg_4[1:0] * multiplierReg2_4[5:4]; // @[elegant.scala 543:54]
  wire [7:0] _GEN_57 = {_pp3_T_18, 4'h0}; // @[elegant.scala 543:77]
  reg [10:0] pp3_REG_8; // @[elegant.scala 543:33]
  reg [10:0] pp3_REG_9; // @[elegant.scala 543:25]
  wire [3:0] _pp4_T_18 = multiplierReg_4[3:2] * multiplierReg2_4[1:0]; // @[elegant.scala 544:62]
  wire [5:0] _GEN_58 = {_pp4_T_18, 2'h0}; // @[elegant.scala 544:85]
  reg [6:0] pp4_REG_12; // @[elegant.scala 544:41]
  reg [6:0] pp4_REG_13; // @[elegant.scala 544:33]
  reg [6:0] pp4_REG_14; // @[elegant.scala 544:25]
  wire [3:0] _pp5_T_18 = multiplierReg_4[3:2] * multiplierReg2_4[3:2]; // @[elegant.scala 545:70]
  wire [7:0] _GEN_59 = {_pp5_T_18, 4'h0}; // @[elegant.scala 545:93]
  reg [10:0] pp5_REG_16; // @[elegant.scala 545:49]
  reg [10:0] pp5_REG_17; // @[elegant.scala 545:41]
  reg [10:0] pp5_REG_18; // @[elegant.scala 545:33]
  reg [10:0] pp5_REG_19; // @[elegant.scala 545:25]
  wire [3:0] _pp6_T_18 = multiplierReg_4[3:2] * multiplierReg2_4[5:4]; // @[elegant.scala 546:78]
  wire [9:0] _GEN_60 = {_pp6_T_18, 6'h0}; // @[elegant.scala 546:101]
  reg [10:0] pp6_REG_20; // @[elegant.scala 546:57]
  reg [10:0] pp6_REG_21; // @[elegant.scala 546:49]
  reg [10:0] pp6_REG_22; // @[elegant.scala 546:41]
  reg [10:0] pp6_REG_23; // @[elegant.scala 546:33]
  reg [10:0] pp6_REG_24; // @[elegant.scala 546:25]
  wire [3:0] _pp7_T_18 = multiplierReg_4[5:4] * multiplierReg2_4[1:0]; // @[elegant.scala 547:86]
  wire [7:0] _GEN_61 = {_pp7_T_18, 4'h0}; // @[elegant.scala 547:109]
  reg [10:0] pp7_REG_24; // @[elegant.scala 547:65]
  reg [10:0] pp7_REG_25; // @[elegant.scala 547:57]
  reg [10:0] pp7_REG_26; // @[elegant.scala 547:49]
  reg [10:0] pp7_REG_27; // @[elegant.scala 547:41]
  reg [10:0] pp7_REG_28; // @[elegant.scala 547:33]
  reg [10:0] pp7_REG_29; // @[elegant.scala 547:25]
  wire [3:0] _pp8_T_18 = multiplierReg_4[5:4] * multiplierReg2_4[3:2]; // @[elegant.scala 548:94]
  wire [9:0] _GEN_62 = {_pp8_T_18, 6'h0}; // @[elegant.scala 548:117]
  reg [10:0] pp8_REG_28; // @[elegant.scala 548:73]
  reg [10:0] pp8_REG_29; // @[elegant.scala 548:65]
  reg [10:0] pp8_REG_30; // @[elegant.scala 548:57]
  reg [10:0] pp8_REG_31; // @[elegant.scala 548:49]
  reg [10:0] pp8_REG_32; // @[elegant.scala 548:41]
  reg [10:0] pp8_REG_33; // @[elegant.scala 548:33]
  reg [10:0] pp8_REG_34; // @[elegant.scala 548:25]
  wire [12:0] _dotProductRegs_4_T = pp1_4 + pp2_4; // @[elegant.scala 549:36]
  wire [12:0] _GEN_63 = {{1'd0}, pp3_4}; // @[elegant.scala 549:43]
  wire [13:0] _dotProductRegs_4_T_1 = _dotProductRegs_4_T + _GEN_63; // @[elegant.scala 549:43]
  wire [13:0] _GEN_64 = {{2'd0}, pp4_4}; // @[elegant.scala 549:50]
  wire [14:0] _dotProductRegs_4_T_2 = _dotProductRegs_4_T_1 + _GEN_64; // @[elegant.scala 549:50]
  wire [14:0] _GEN_65 = {{3'd0}, pp5_4}; // @[elegant.scala 549:57]
  wire [15:0] _dotProductRegs_4_T_3 = _dotProductRegs_4_T_2 + _GEN_65; // @[elegant.scala 549:57]
  wire [15:0] _GEN_66 = {{4'd0}, pp6_4}; // @[elegant.scala 549:64]
  wire [16:0] _dotProductRegs_4_T_4 = _dotProductRegs_4_T_3 + _GEN_66; // @[elegant.scala 549:64]
  wire [16:0] _GEN_67 = {{5'd0}, pp7_4}; // @[elegant.scala 549:71]
  wire [17:0] _dotProductRegs_4_T_5 = _dotProductRegs_4_T_4 + _GEN_67; // @[elegant.scala 549:71]
  wire [17:0] _GEN_68 = {{6'd0}, pp8_4}; // @[elegant.scala 549:78]
  wire [18:0] _dotProductRegs_4_T_6 = _dotProductRegs_4_T_5 + _GEN_68; // @[elegant.scala 549:78]
  wire [3:0] _dotProductRegs_4_T_9 = multiplierReg_4[5:4] * multiplierReg2_4[5:4]; // @[elegant.scala 549:172]
  wire [11:0] _GEN_69 = {_dotProductRegs_4_T_9, 8'h0}; // @[elegant.scala 549:195]
  reg [18:0] dotProductRegs_4_REG; // @[elegant.scala 549:151]
  reg [18:0] dotProductRegs_4_REG_1; // @[elegant.scala 549:143]
  reg [18:0] dotProductRegs_4_REG_2; // @[elegant.scala 549:135]
  reg [18:0] dotProductRegs_4_REG_3; // @[elegant.scala 549:127]
  reg [18:0] dotProductRegs_4_REG_4; // @[elegant.scala 549:119]
  reg [18:0] dotProductRegs_4_REG_5; // @[elegant.scala 549:111]
  reg [18:0] dotProductRegs_4_REG_6; // @[elegant.scala 549:103]
  reg [18:0] dotProductRegs_4_REG_7; // @[elegant.scala 549:95]
  wire [19:0] _dotProductRegs_4_T_11 = _dotProductRegs_4_T_6 + dotProductRegs_4_REG_7; // @[elegant.scala 549:85]
  wire [12:0] _two_complement_4_T_1 = {1'h0,dotProductRegs_4}; // @[elegant.scala 553:55]
  wire [12:0] _two_complement_4_T_2 = ~_two_complement_4_T_1; // @[elegant.scala 553:49]
  wire [12:0] _two_complement_4_T_4 = _two_complement_4_T_2 + 13'h1; // @[elegant.scala 553:77]
  reg [5:0] multiplierReg_5; // @[elegant.scala 524:34]
  reg [5:0] multiplierReg2_5; // @[elegant.scala 525:35]
  reg  signReg_5; // @[elegant.scala 527:28]
  reg [11:0] pp1_5; // @[elegant.scala 528:24]
  reg [11:0] pp2_5; // @[elegant.scala 529:24]
  reg [11:0] pp3_5; // @[elegant.scala 530:24]
  reg [11:0] pp4_5; // @[elegant.scala 531:24]
  reg [11:0] pp5_5; // @[elegant.scala 532:24]
  reg [11:0] pp6_5; // @[elegant.scala 533:24]
  reg [11:0] pp7_5; // @[elegant.scala 534:24]
  reg [11:0] pp8_5; // @[elegant.scala 535:24]
  wire [3:0] _pp1_T_17 = multiplierReg_5[1:0] * multiplierReg2_5[1:0]; // @[elegant.scala 541:37]
  wire [3:0] _pp2_T_22 = multiplierReg_5[1:0] * multiplierReg2_5[3:2]; // @[elegant.scala 542:46]
  wire [5:0] _GEN_70 = {_pp2_T_22, 2'h0}; // @[elegant.scala 542:69]
  reg [6:0] pp2_REG_5; // @[elegant.scala 542:25]
  wire [3:0] _pp3_T_22 = multiplierReg_5[1:0] * multiplierReg2_5[5:4]; // @[elegant.scala 543:54]
  wire [7:0] _GEN_71 = {_pp3_T_22, 4'h0}; // @[elegant.scala 543:77]
  reg [10:0] pp3_REG_10; // @[elegant.scala 543:33]
  reg [10:0] pp3_REG_11; // @[elegant.scala 543:25]
  wire [3:0] _pp4_T_22 = multiplierReg_5[3:2] * multiplierReg2_5[1:0]; // @[elegant.scala 544:62]
  wire [5:0] _GEN_72 = {_pp4_T_22, 2'h0}; // @[elegant.scala 544:85]
  reg [6:0] pp4_REG_15; // @[elegant.scala 544:41]
  reg [6:0] pp4_REG_16; // @[elegant.scala 544:33]
  reg [6:0] pp4_REG_17; // @[elegant.scala 544:25]
  wire [3:0] _pp5_T_22 = multiplierReg_5[3:2] * multiplierReg2_5[3:2]; // @[elegant.scala 545:70]
  wire [7:0] _GEN_73 = {_pp5_T_22, 4'h0}; // @[elegant.scala 545:93]
  reg [10:0] pp5_REG_20; // @[elegant.scala 545:49]
  reg [10:0] pp5_REG_21; // @[elegant.scala 545:41]
  reg [10:0] pp5_REG_22; // @[elegant.scala 545:33]
  reg [10:0] pp5_REG_23; // @[elegant.scala 545:25]
  wire [3:0] _pp6_T_22 = multiplierReg_5[3:2] * multiplierReg2_5[5:4]; // @[elegant.scala 546:78]
  wire [9:0] _GEN_74 = {_pp6_T_22, 6'h0}; // @[elegant.scala 546:101]
  reg [10:0] pp6_REG_25; // @[elegant.scala 546:57]
  reg [10:0] pp6_REG_26; // @[elegant.scala 546:49]
  reg [10:0] pp6_REG_27; // @[elegant.scala 546:41]
  reg [10:0] pp6_REG_28; // @[elegant.scala 546:33]
  reg [10:0] pp6_REG_29; // @[elegant.scala 546:25]
  wire [3:0] _pp7_T_22 = multiplierReg_5[5:4] * multiplierReg2_5[1:0]; // @[elegant.scala 547:86]
  wire [7:0] _GEN_75 = {_pp7_T_22, 4'h0}; // @[elegant.scala 547:109]
  reg [10:0] pp7_REG_30; // @[elegant.scala 547:65]
  reg [10:0] pp7_REG_31; // @[elegant.scala 547:57]
  reg [10:0] pp7_REG_32; // @[elegant.scala 547:49]
  reg [10:0] pp7_REG_33; // @[elegant.scala 547:41]
  reg [10:0] pp7_REG_34; // @[elegant.scala 547:33]
  reg [10:0] pp7_REG_35; // @[elegant.scala 547:25]
  wire [3:0] _pp8_T_22 = multiplierReg_5[5:4] * multiplierReg2_5[3:2]; // @[elegant.scala 548:94]
  wire [9:0] _GEN_76 = {_pp8_T_22, 6'h0}; // @[elegant.scala 548:117]
  reg [10:0] pp8_REG_35; // @[elegant.scala 548:73]
  reg [10:0] pp8_REG_36; // @[elegant.scala 548:65]
  reg [10:0] pp8_REG_37; // @[elegant.scala 548:57]
  reg [10:0] pp8_REG_38; // @[elegant.scala 548:49]
  reg [10:0] pp8_REG_39; // @[elegant.scala 548:41]
  reg [10:0] pp8_REG_40; // @[elegant.scala 548:33]
  reg [10:0] pp8_REG_41; // @[elegant.scala 548:25]
  wire [12:0] _dotProductRegs_5_T = pp1_5 + pp2_5; // @[elegant.scala 549:36]
  wire [12:0] _GEN_77 = {{1'd0}, pp3_5}; // @[elegant.scala 549:43]
  wire [13:0] _dotProductRegs_5_T_1 = _dotProductRegs_5_T + _GEN_77; // @[elegant.scala 549:43]
  wire [13:0] _GEN_78 = {{2'd0}, pp4_5}; // @[elegant.scala 549:50]
  wire [14:0] _dotProductRegs_5_T_2 = _dotProductRegs_5_T_1 + _GEN_78; // @[elegant.scala 549:50]
  wire [14:0] _GEN_79 = {{3'd0}, pp5_5}; // @[elegant.scala 549:57]
  wire [15:0] _dotProductRegs_5_T_3 = _dotProductRegs_5_T_2 + _GEN_79; // @[elegant.scala 549:57]
  wire [15:0] _GEN_80 = {{4'd0}, pp6_5}; // @[elegant.scala 549:64]
  wire [16:0] _dotProductRegs_5_T_4 = _dotProductRegs_5_T_3 + _GEN_80; // @[elegant.scala 549:64]
  wire [16:0] _GEN_81 = {{5'd0}, pp7_5}; // @[elegant.scala 549:71]
  wire [17:0] _dotProductRegs_5_T_5 = _dotProductRegs_5_T_4 + _GEN_81; // @[elegant.scala 549:71]
  wire [17:0] _GEN_82 = {{6'd0}, pp8_5}; // @[elegant.scala 549:78]
  wire [18:0] _dotProductRegs_5_T_6 = _dotProductRegs_5_T_5 + _GEN_82; // @[elegant.scala 549:78]
  wire [3:0] _dotProductRegs_5_T_9 = multiplierReg_5[5:4] * multiplierReg2_5[5:4]; // @[elegant.scala 549:172]
  wire [11:0] _GEN_83 = {_dotProductRegs_5_T_9, 8'h0}; // @[elegant.scala 549:195]
  reg [18:0] dotProductRegs_5_REG; // @[elegant.scala 549:151]
  reg [18:0] dotProductRegs_5_REG_1; // @[elegant.scala 549:143]
  reg [18:0] dotProductRegs_5_REG_2; // @[elegant.scala 549:135]
  reg [18:0] dotProductRegs_5_REG_3; // @[elegant.scala 549:127]
  reg [18:0] dotProductRegs_5_REG_4; // @[elegant.scala 549:119]
  reg [18:0] dotProductRegs_5_REG_5; // @[elegant.scala 549:111]
  reg [18:0] dotProductRegs_5_REG_6; // @[elegant.scala 549:103]
  reg [18:0] dotProductRegs_5_REG_7; // @[elegant.scala 549:95]
  wire [19:0] _dotProductRegs_5_T_11 = _dotProductRegs_5_T_6 + dotProductRegs_5_REG_7; // @[elegant.scala 549:85]
  wire [12:0] _two_complement_5_T_1 = {1'h0,dotProductRegs_5}; // @[elegant.scala 553:55]
  wire [12:0] _two_complement_5_T_2 = ~_two_complement_5_T_1; // @[elegant.scala 553:49]
  wire [12:0] _two_complement_5_T_4 = _two_complement_5_T_2 + 13'h1; // @[elegant.scala 553:77]
  reg [5:0] multiplierReg_6; // @[elegant.scala 524:34]
  reg [5:0] multiplierReg2_6; // @[elegant.scala 525:35]
  reg  signReg_6; // @[elegant.scala 527:28]
  reg [11:0] pp1_6; // @[elegant.scala 528:24]
  reg [11:0] pp2_6; // @[elegant.scala 529:24]
  reg [11:0] pp3_6; // @[elegant.scala 530:24]
  reg [11:0] pp4_6; // @[elegant.scala 531:24]
  reg [11:0] pp5_6; // @[elegant.scala 532:24]
  reg [11:0] pp6_6; // @[elegant.scala 533:24]
  reg [11:0] pp7_6; // @[elegant.scala 534:24]
  reg [11:0] pp8_6; // @[elegant.scala 535:24]
  wire [3:0] _pp1_T_20 = multiplierReg_6[1:0] * multiplierReg2_6[1:0]; // @[elegant.scala 541:37]
  wire [3:0] _pp2_T_26 = multiplierReg_6[1:0] * multiplierReg2_6[3:2]; // @[elegant.scala 542:46]
  wire [5:0] _GEN_84 = {_pp2_T_26, 2'h0}; // @[elegant.scala 542:69]
  reg [6:0] pp2_REG_6; // @[elegant.scala 542:25]
  wire [3:0] _pp3_T_26 = multiplierReg_6[1:0] * multiplierReg2_6[5:4]; // @[elegant.scala 543:54]
  wire [7:0] _GEN_85 = {_pp3_T_26, 4'h0}; // @[elegant.scala 543:77]
  reg [10:0] pp3_REG_12; // @[elegant.scala 543:33]
  reg [10:0] pp3_REG_13; // @[elegant.scala 543:25]
  wire [3:0] _pp4_T_26 = multiplierReg_6[3:2] * multiplierReg2_6[1:0]; // @[elegant.scala 544:62]
  wire [5:0] _GEN_86 = {_pp4_T_26, 2'h0}; // @[elegant.scala 544:85]
  reg [6:0] pp4_REG_18; // @[elegant.scala 544:41]
  reg [6:0] pp4_REG_19; // @[elegant.scala 544:33]
  reg [6:0] pp4_REG_20; // @[elegant.scala 544:25]
  wire [3:0] _pp5_T_26 = multiplierReg_6[3:2] * multiplierReg2_6[3:2]; // @[elegant.scala 545:70]
  wire [7:0] _GEN_87 = {_pp5_T_26, 4'h0}; // @[elegant.scala 545:93]
  reg [10:0] pp5_REG_24; // @[elegant.scala 545:49]
  reg [10:0] pp5_REG_25; // @[elegant.scala 545:41]
  reg [10:0] pp5_REG_26; // @[elegant.scala 545:33]
  reg [10:0] pp5_REG_27; // @[elegant.scala 545:25]
  wire [3:0] _pp6_T_26 = multiplierReg_6[3:2] * multiplierReg2_6[5:4]; // @[elegant.scala 546:78]
  wire [9:0] _GEN_88 = {_pp6_T_26, 6'h0}; // @[elegant.scala 546:101]
  reg [10:0] pp6_REG_30; // @[elegant.scala 546:57]
  reg [10:0] pp6_REG_31; // @[elegant.scala 546:49]
  reg [10:0] pp6_REG_32; // @[elegant.scala 546:41]
  reg [10:0] pp6_REG_33; // @[elegant.scala 546:33]
  reg [10:0] pp6_REG_34; // @[elegant.scala 546:25]
  wire [3:0] _pp7_T_26 = multiplierReg_6[5:4] * multiplierReg2_6[1:0]; // @[elegant.scala 547:86]
  wire [7:0] _GEN_89 = {_pp7_T_26, 4'h0}; // @[elegant.scala 547:109]
  reg [10:0] pp7_REG_36; // @[elegant.scala 547:65]
  reg [10:0] pp7_REG_37; // @[elegant.scala 547:57]
  reg [10:0] pp7_REG_38; // @[elegant.scala 547:49]
  reg [10:0] pp7_REG_39; // @[elegant.scala 547:41]
  reg [10:0] pp7_REG_40; // @[elegant.scala 547:33]
  reg [10:0] pp7_REG_41; // @[elegant.scala 547:25]
  wire [3:0] _pp8_T_26 = multiplierReg_6[5:4] * multiplierReg2_6[3:2]; // @[elegant.scala 548:94]
  wire [9:0] _GEN_90 = {_pp8_T_26, 6'h0}; // @[elegant.scala 548:117]
  reg [10:0] pp8_REG_42; // @[elegant.scala 548:73]
  reg [10:0] pp8_REG_43; // @[elegant.scala 548:65]
  reg [10:0] pp8_REG_44; // @[elegant.scala 548:57]
  reg [10:0] pp8_REG_45; // @[elegant.scala 548:49]
  reg [10:0] pp8_REG_46; // @[elegant.scala 548:41]
  reg [10:0] pp8_REG_47; // @[elegant.scala 548:33]
  reg [10:0] pp8_REG_48; // @[elegant.scala 548:25]
  wire [12:0] _dotProductRegs_6_T = pp1_6 + pp2_6; // @[elegant.scala 549:36]
  wire [12:0] _GEN_91 = {{1'd0}, pp3_6}; // @[elegant.scala 549:43]
  wire [13:0] _dotProductRegs_6_T_1 = _dotProductRegs_6_T + _GEN_91; // @[elegant.scala 549:43]
  wire [13:0] _GEN_92 = {{2'd0}, pp4_6}; // @[elegant.scala 549:50]
  wire [14:0] _dotProductRegs_6_T_2 = _dotProductRegs_6_T_1 + _GEN_92; // @[elegant.scala 549:50]
  wire [14:0] _GEN_93 = {{3'd0}, pp5_6}; // @[elegant.scala 549:57]
  wire [15:0] _dotProductRegs_6_T_3 = _dotProductRegs_6_T_2 + _GEN_93; // @[elegant.scala 549:57]
  wire [15:0] _GEN_94 = {{4'd0}, pp6_6}; // @[elegant.scala 549:64]
  wire [16:0] _dotProductRegs_6_T_4 = _dotProductRegs_6_T_3 + _GEN_94; // @[elegant.scala 549:64]
  wire [16:0] _GEN_95 = {{5'd0}, pp7_6}; // @[elegant.scala 549:71]
  wire [17:0] _dotProductRegs_6_T_5 = _dotProductRegs_6_T_4 + _GEN_95; // @[elegant.scala 549:71]
  wire [17:0] _GEN_96 = {{6'd0}, pp8_6}; // @[elegant.scala 549:78]
  wire [18:0] _dotProductRegs_6_T_6 = _dotProductRegs_6_T_5 + _GEN_96; // @[elegant.scala 549:78]
  wire [3:0] _dotProductRegs_6_T_9 = multiplierReg_6[5:4] * multiplierReg2_6[5:4]; // @[elegant.scala 549:172]
  wire [11:0] _GEN_97 = {_dotProductRegs_6_T_9, 8'h0}; // @[elegant.scala 549:195]
  reg [18:0] dotProductRegs_6_REG; // @[elegant.scala 549:151]
  reg [18:0] dotProductRegs_6_REG_1; // @[elegant.scala 549:143]
  reg [18:0] dotProductRegs_6_REG_2; // @[elegant.scala 549:135]
  reg [18:0] dotProductRegs_6_REG_3; // @[elegant.scala 549:127]
  reg [18:0] dotProductRegs_6_REG_4; // @[elegant.scala 549:119]
  reg [18:0] dotProductRegs_6_REG_5; // @[elegant.scala 549:111]
  reg [18:0] dotProductRegs_6_REG_6; // @[elegant.scala 549:103]
  reg [18:0] dotProductRegs_6_REG_7; // @[elegant.scala 549:95]
  wire [19:0] _dotProductRegs_6_T_11 = _dotProductRegs_6_T_6 + dotProductRegs_6_REG_7; // @[elegant.scala 549:85]
  wire [12:0] _two_complement_6_T_1 = {1'h0,dotProductRegs_6}; // @[elegant.scala 553:55]
  wire [12:0] _two_complement_6_T_2 = ~_two_complement_6_T_1; // @[elegant.scala 553:49]
  wire [12:0] _two_complement_6_T_4 = _two_complement_6_T_2 + 13'h1; // @[elegant.scala 553:77]
  reg [5:0] multiplierReg_7; // @[elegant.scala 524:34]
  reg [5:0] multiplierReg2_7; // @[elegant.scala 525:35]
  reg  signReg_7; // @[elegant.scala 527:28]
  reg [11:0] pp1_7; // @[elegant.scala 528:24]
  reg [11:0] pp2_7; // @[elegant.scala 529:24]
  reg [11:0] pp3_7; // @[elegant.scala 530:24]
  reg [11:0] pp4_7; // @[elegant.scala 531:24]
  reg [11:0] pp5_7; // @[elegant.scala 532:24]
  reg [11:0] pp6_7; // @[elegant.scala 533:24]
  reg [11:0] pp7_7; // @[elegant.scala 534:24]
  reg [11:0] pp8_7; // @[elegant.scala 535:24]
  wire [3:0] _pp1_T_23 = multiplierReg_7[1:0] * multiplierReg2_7[1:0]; // @[elegant.scala 541:37]
  wire [3:0] _pp2_T_30 = multiplierReg_7[1:0] * multiplierReg2_7[3:2]; // @[elegant.scala 542:46]
  wire [5:0] _GEN_98 = {_pp2_T_30, 2'h0}; // @[elegant.scala 542:69]
  reg [6:0] pp2_REG_7; // @[elegant.scala 542:25]
  wire [3:0] _pp3_T_30 = multiplierReg_7[1:0] * multiplierReg2_7[5:4]; // @[elegant.scala 543:54]
  wire [7:0] _GEN_99 = {_pp3_T_30, 4'h0}; // @[elegant.scala 543:77]
  reg [10:0] pp3_REG_14; // @[elegant.scala 543:33]
  reg [10:0] pp3_REG_15; // @[elegant.scala 543:25]
  wire [3:0] _pp4_T_30 = multiplierReg_7[3:2] * multiplierReg2_7[1:0]; // @[elegant.scala 544:62]
  wire [5:0] _GEN_100 = {_pp4_T_30, 2'h0}; // @[elegant.scala 544:85]
  reg [6:0] pp4_REG_21; // @[elegant.scala 544:41]
  reg [6:0] pp4_REG_22; // @[elegant.scala 544:33]
  reg [6:0] pp4_REG_23; // @[elegant.scala 544:25]
  wire [3:0] _pp5_T_30 = multiplierReg_7[3:2] * multiplierReg2_7[3:2]; // @[elegant.scala 545:70]
  wire [7:0] _GEN_101 = {_pp5_T_30, 4'h0}; // @[elegant.scala 545:93]
  reg [10:0] pp5_REG_28; // @[elegant.scala 545:49]
  reg [10:0] pp5_REG_29; // @[elegant.scala 545:41]
  reg [10:0] pp5_REG_30; // @[elegant.scala 545:33]
  reg [10:0] pp5_REG_31; // @[elegant.scala 545:25]
  wire [3:0] _pp6_T_30 = multiplierReg_7[3:2] * multiplierReg2_7[5:4]; // @[elegant.scala 546:78]
  wire [9:0] _GEN_102 = {_pp6_T_30, 6'h0}; // @[elegant.scala 546:101]
  reg [10:0] pp6_REG_35; // @[elegant.scala 546:57]
  reg [10:0] pp6_REG_36; // @[elegant.scala 546:49]
  reg [10:0] pp6_REG_37; // @[elegant.scala 546:41]
  reg [10:0] pp6_REG_38; // @[elegant.scala 546:33]
  reg [10:0] pp6_REG_39; // @[elegant.scala 546:25]
  wire [3:0] _pp7_T_30 = multiplierReg_7[5:4] * multiplierReg2_7[1:0]; // @[elegant.scala 547:86]
  wire [7:0] _GEN_103 = {_pp7_T_30, 4'h0}; // @[elegant.scala 547:109]
  reg [10:0] pp7_REG_42; // @[elegant.scala 547:65]
  reg [10:0] pp7_REG_43; // @[elegant.scala 547:57]
  reg [10:0] pp7_REG_44; // @[elegant.scala 547:49]
  reg [10:0] pp7_REG_45; // @[elegant.scala 547:41]
  reg [10:0] pp7_REG_46; // @[elegant.scala 547:33]
  reg [10:0] pp7_REG_47; // @[elegant.scala 547:25]
  wire [3:0] _pp8_T_30 = multiplierReg_7[5:4] * multiplierReg2_7[3:2]; // @[elegant.scala 548:94]
  wire [9:0] _GEN_104 = {_pp8_T_30, 6'h0}; // @[elegant.scala 548:117]
  reg [10:0] pp8_REG_49; // @[elegant.scala 548:73]
  reg [10:0] pp8_REG_50; // @[elegant.scala 548:65]
  reg [10:0] pp8_REG_51; // @[elegant.scala 548:57]
  reg [10:0] pp8_REG_52; // @[elegant.scala 548:49]
  reg [10:0] pp8_REG_53; // @[elegant.scala 548:41]
  reg [10:0] pp8_REG_54; // @[elegant.scala 548:33]
  reg [10:0] pp8_REG_55; // @[elegant.scala 548:25]
  wire [12:0] _dotProductRegs_7_T = pp1_7 + pp2_7; // @[elegant.scala 549:36]
  wire [12:0] _GEN_105 = {{1'd0}, pp3_7}; // @[elegant.scala 549:43]
  wire [13:0] _dotProductRegs_7_T_1 = _dotProductRegs_7_T + _GEN_105; // @[elegant.scala 549:43]
  wire [13:0] _GEN_106 = {{2'd0}, pp4_7}; // @[elegant.scala 549:50]
  wire [14:0] _dotProductRegs_7_T_2 = _dotProductRegs_7_T_1 + _GEN_106; // @[elegant.scala 549:50]
  wire [14:0] _GEN_107 = {{3'd0}, pp5_7}; // @[elegant.scala 549:57]
  wire [15:0] _dotProductRegs_7_T_3 = _dotProductRegs_7_T_2 + _GEN_107; // @[elegant.scala 549:57]
  wire [15:0] _GEN_108 = {{4'd0}, pp6_7}; // @[elegant.scala 549:64]
  wire [16:0] _dotProductRegs_7_T_4 = _dotProductRegs_7_T_3 + _GEN_108; // @[elegant.scala 549:64]
  wire [16:0] _GEN_109 = {{5'd0}, pp7_7}; // @[elegant.scala 549:71]
  wire [17:0] _dotProductRegs_7_T_5 = _dotProductRegs_7_T_4 + _GEN_109; // @[elegant.scala 549:71]
  wire [17:0] _GEN_110 = {{6'd0}, pp8_7}; // @[elegant.scala 549:78]
  wire [18:0] _dotProductRegs_7_T_6 = _dotProductRegs_7_T_5 + _GEN_110; // @[elegant.scala 549:78]
  wire [3:0] _dotProductRegs_7_T_9 = multiplierReg_7[5:4] * multiplierReg2_7[5:4]; // @[elegant.scala 549:172]
  wire [11:0] _GEN_111 = {_dotProductRegs_7_T_9, 8'h0}; // @[elegant.scala 549:195]
  reg [18:0] dotProductRegs_7_REG; // @[elegant.scala 549:151]
  reg [18:0] dotProductRegs_7_REG_1; // @[elegant.scala 549:143]
  reg [18:0] dotProductRegs_7_REG_2; // @[elegant.scala 549:135]
  reg [18:0] dotProductRegs_7_REG_3; // @[elegant.scala 549:127]
  reg [18:0] dotProductRegs_7_REG_4; // @[elegant.scala 549:119]
  reg [18:0] dotProductRegs_7_REG_5; // @[elegant.scala 549:111]
  reg [18:0] dotProductRegs_7_REG_6; // @[elegant.scala 549:103]
  reg [18:0] dotProductRegs_7_REG_7; // @[elegant.scala 549:95]
  wire [19:0] _dotProductRegs_7_T_11 = _dotProductRegs_7_T_6 + dotProductRegs_7_REG_7; // @[elegant.scala 549:85]
  wire [12:0] _two_complement_7_T_1 = {1'h0,dotProductRegs_7}; // @[elegant.scala 553:55]
  wire [12:0] _two_complement_7_T_2 = ~_two_complement_7_T_1; // @[elegant.scala 553:49]
  wire [12:0] _two_complement_7_T_4 = _two_complement_7_T_2 + 13'h1; // @[elegant.scala 553:77]
  reg [5:0] multiplierReg_8; // @[elegant.scala 524:34]
  reg [5:0] multiplierReg2_8; // @[elegant.scala 525:35]
  reg  signReg_8; // @[elegant.scala 527:28]
  reg [11:0] pp1_8; // @[elegant.scala 528:24]
  reg [11:0] pp2_8; // @[elegant.scala 529:24]
  reg [11:0] pp3_8; // @[elegant.scala 530:24]
  reg [11:0] pp4_8; // @[elegant.scala 531:24]
  reg [11:0] pp5_8; // @[elegant.scala 532:24]
  reg [11:0] pp6_8; // @[elegant.scala 533:24]
  reg [11:0] pp7_8; // @[elegant.scala 534:24]
  reg [11:0] pp8_8; // @[elegant.scala 535:24]
  wire [3:0] _pp1_T_26 = multiplierReg_8[1:0] * multiplierReg2_8[1:0]; // @[elegant.scala 541:37]
  wire [3:0] _pp2_T_34 = multiplierReg_8[1:0] * multiplierReg2_8[3:2]; // @[elegant.scala 542:46]
  wire [5:0] _GEN_112 = {_pp2_T_34, 2'h0}; // @[elegant.scala 542:69]
  reg [6:0] pp2_REG_8; // @[elegant.scala 542:25]
  wire [3:0] _pp3_T_34 = multiplierReg_8[1:0] * multiplierReg2_8[5:4]; // @[elegant.scala 543:54]
  wire [7:0] _GEN_113 = {_pp3_T_34, 4'h0}; // @[elegant.scala 543:77]
  reg [10:0] pp3_REG_16; // @[elegant.scala 543:33]
  reg [10:0] pp3_REG_17; // @[elegant.scala 543:25]
  wire [3:0] _pp4_T_34 = multiplierReg_8[3:2] * multiplierReg2_8[1:0]; // @[elegant.scala 544:62]
  wire [5:0] _GEN_114 = {_pp4_T_34, 2'h0}; // @[elegant.scala 544:85]
  reg [6:0] pp4_REG_24; // @[elegant.scala 544:41]
  reg [6:0] pp4_REG_25; // @[elegant.scala 544:33]
  reg [6:0] pp4_REG_26; // @[elegant.scala 544:25]
  wire [3:0] _pp5_T_34 = multiplierReg_8[3:2] * multiplierReg2_8[3:2]; // @[elegant.scala 545:70]
  wire [7:0] _GEN_115 = {_pp5_T_34, 4'h0}; // @[elegant.scala 545:93]
  reg [10:0] pp5_REG_32; // @[elegant.scala 545:49]
  reg [10:0] pp5_REG_33; // @[elegant.scala 545:41]
  reg [10:0] pp5_REG_34; // @[elegant.scala 545:33]
  reg [10:0] pp5_REG_35; // @[elegant.scala 545:25]
  wire [3:0] _pp6_T_34 = multiplierReg_8[3:2] * multiplierReg2_8[5:4]; // @[elegant.scala 546:78]
  wire [9:0] _GEN_116 = {_pp6_T_34, 6'h0}; // @[elegant.scala 546:101]
  reg [10:0] pp6_REG_40; // @[elegant.scala 546:57]
  reg [10:0] pp6_REG_41; // @[elegant.scala 546:49]
  reg [10:0] pp6_REG_42; // @[elegant.scala 546:41]
  reg [10:0] pp6_REG_43; // @[elegant.scala 546:33]
  reg [10:0] pp6_REG_44; // @[elegant.scala 546:25]
  wire [3:0] _pp7_T_34 = multiplierReg_8[5:4] * multiplierReg2_8[1:0]; // @[elegant.scala 547:86]
  wire [7:0] _GEN_117 = {_pp7_T_34, 4'h0}; // @[elegant.scala 547:109]
  reg [10:0] pp7_REG_48; // @[elegant.scala 547:65]
  reg [10:0] pp7_REG_49; // @[elegant.scala 547:57]
  reg [10:0] pp7_REG_50; // @[elegant.scala 547:49]
  reg [10:0] pp7_REG_51; // @[elegant.scala 547:41]
  reg [10:0] pp7_REG_52; // @[elegant.scala 547:33]
  reg [10:0] pp7_REG_53; // @[elegant.scala 547:25]
  wire [3:0] _pp8_T_34 = multiplierReg_8[5:4] * multiplierReg2_8[3:2]; // @[elegant.scala 548:94]
  wire [9:0] _GEN_118 = {_pp8_T_34, 6'h0}; // @[elegant.scala 548:117]
  reg [10:0] pp8_REG_56; // @[elegant.scala 548:73]
  reg [10:0] pp8_REG_57; // @[elegant.scala 548:65]
  reg [10:0] pp8_REG_58; // @[elegant.scala 548:57]
  reg [10:0] pp8_REG_59; // @[elegant.scala 548:49]
  reg [10:0] pp8_REG_60; // @[elegant.scala 548:41]
  reg [10:0] pp8_REG_61; // @[elegant.scala 548:33]
  reg [10:0] pp8_REG_62; // @[elegant.scala 548:25]
  wire [12:0] _dotProductRegs_8_T = pp1_8 + pp2_8; // @[elegant.scala 549:36]
  wire [12:0] _GEN_119 = {{1'd0}, pp3_8}; // @[elegant.scala 549:43]
  wire [13:0] _dotProductRegs_8_T_1 = _dotProductRegs_8_T + _GEN_119; // @[elegant.scala 549:43]
  wire [13:0] _GEN_120 = {{2'd0}, pp4_8}; // @[elegant.scala 549:50]
  wire [14:0] _dotProductRegs_8_T_2 = _dotProductRegs_8_T_1 + _GEN_120; // @[elegant.scala 549:50]
  wire [14:0] _GEN_121 = {{3'd0}, pp5_8}; // @[elegant.scala 549:57]
  wire [15:0] _dotProductRegs_8_T_3 = _dotProductRegs_8_T_2 + _GEN_121; // @[elegant.scala 549:57]
  wire [15:0] _GEN_122 = {{4'd0}, pp6_8}; // @[elegant.scala 549:64]
  wire [16:0] _dotProductRegs_8_T_4 = _dotProductRegs_8_T_3 + _GEN_122; // @[elegant.scala 549:64]
  wire [16:0] _GEN_123 = {{5'd0}, pp7_8}; // @[elegant.scala 549:71]
  wire [17:0] _dotProductRegs_8_T_5 = _dotProductRegs_8_T_4 + _GEN_123; // @[elegant.scala 549:71]
  wire [17:0] _GEN_124 = {{6'd0}, pp8_8}; // @[elegant.scala 549:78]
  wire [18:0] _dotProductRegs_8_T_6 = _dotProductRegs_8_T_5 + _GEN_124; // @[elegant.scala 549:78]
  wire [3:0] _dotProductRegs_8_T_9 = multiplierReg_8[5:4] * multiplierReg2_8[5:4]; // @[elegant.scala 549:172]
  wire [11:0] _GEN_125 = {_dotProductRegs_8_T_9, 8'h0}; // @[elegant.scala 549:195]
  reg [18:0] dotProductRegs_8_REG; // @[elegant.scala 549:151]
  reg [18:0] dotProductRegs_8_REG_1; // @[elegant.scala 549:143]
  reg [18:0] dotProductRegs_8_REG_2; // @[elegant.scala 549:135]
  reg [18:0] dotProductRegs_8_REG_3; // @[elegant.scala 549:127]
  reg [18:0] dotProductRegs_8_REG_4; // @[elegant.scala 549:119]
  reg [18:0] dotProductRegs_8_REG_5; // @[elegant.scala 549:111]
  reg [18:0] dotProductRegs_8_REG_6; // @[elegant.scala 549:103]
  reg [18:0] dotProductRegs_8_REG_7; // @[elegant.scala 549:95]
  wire [19:0] _dotProductRegs_8_T_11 = _dotProductRegs_8_T_6 + dotProductRegs_8_REG_7; // @[elegant.scala 549:85]
  wire [12:0] _two_complement_8_T_1 = {1'h0,dotProductRegs_8}; // @[elegant.scala 553:55]
  wire [12:0] _two_complement_8_T_2 = ~_two_complement_8_T_1; // @[elegant.scala 553:49]
  wire [12:0] _two_complement_8_T_4 = _two_complement_8_T_2 + 13'h1; // @[elegant.scala 553:77]
  reg [5:0] multiplierReg_9; // @[elegant.scala 524:34]
  reg [5:0] multiplierReg2_9; // @[elegant.scala 525:35]
  reg  signReg_9; // @[elegant.scala 527:28]
  reg [11:0] pp1_9; // @[elegant.scala 528:24]
  reg [11:0] pp2_9; // @[elegant.scala 529:24]
  reg [11:0] pp3_9; // @[elegant.scala 530:24]
  reg [11:0] pp4_9; // @[elegant.scala 531:24]
  reg [11:0] pp5_9; // @[elegant.scala 532:24]
  reg [11:0] pp6_9; // @[elegant.scala 533:24]
  reg [11:0] pp7_9; // @[elegant.scala 534:24]
  reg [11:0] pp8_9; // @[elegant.scala 535:24]
  wire [3:0] _pp1_T_29 = multiplierReg_9[1:0] * multiplierReg2_9[1:0]; // @[elegant.scala 541:37]
  wire [3:0] _pp2_T_38 = multiplierReg_9[1:0] * multiplierReg2_9[3:2]; // @[elegant.scala 542:46]
  wire [5:0] _GEN_126 = {_pp2_T_38, 2'h0}; // @[elegant.scala 542:69]
  reg [6:0] pp2_REG_9; // @[elegant.scala 542:25]
  wire [3:0] _pp3_T_38 = multiplierReg_9[1:0] * multiplierReg2_9[5:4]; // @[elegant.scala 543:54]
  wire [7:0] _GEN_127 = {_pp3_T_38, 4'h0}; // @[elegant.scala 543:77]
  reg [10:0] pp3_REG_18; // @[elegant.scala 543:33]
  reg [10:0] pp3_REG_19; // @[elegant.scala 543:25]
  wire [3:0] _pp4_T_38 = multiplierReg_9[3:2] * multiplierReg2_9[1:0]; // @[elegant.scala 544:62]
  wire [5:0] _GEN_128 = {_pp4_T_38, 2'h0}; // @[elegant.scala 544:85]
  reg [6:0] pp4_REG_27; // @[elegant.scala 544:41]
  reg [6:0] pp4_REG_28; // @[elegant.scala 544:33]
  reg [6:0] pp4_REG_29; // @[elegant.scala 544:25]
  wire [3:0] _pp5_T_38 = multiplierReg_9[3:2] * multiplierReg2_9[3:2]; // @[elegant.scala 545:70]
  wire [7:0] _GEN_129 = {_pp5_T_38, 4'h0}; // @[elegant.scala 545:93]
  reg [10:0] pp5_REG_36; // @[elegant.scala 545:49]
  reg [10:0] pp5_REG_37; // @[elegant.scala 545:41]
  reg [10:0] pp5_REG_38; // @[elegant.scala 545:33]
  reg [10:0] pp5_REG_39; // @[elegant.scala 545:25]
  wire [3:0] _pp6_T_38 = multiplierReg_9[3:2] * multiplierReg2_9[5:4]; // @[elegant.scala 546:78]
  wire [9:0] _GEN_130 = {_pp6_T_38, 6'h0}; // @[elegant.scala 546:101]
  reg [10:0] pp6_REG_45; // @[elegant.scala 546:57]
  reg [10:0] pp6_REG_46; // @[elegant.scala 546:49]
  reg [10:0] pp6_REG_47; // @[elegant.scala 546:41]
  reg [10:0] pp6_REG_48; // @[elegant.scala 546:33]
  reg [10:0] pp6_REG_49; // @[elegant.scala 546:25]
  wire [3:0] _pp7_T_38 = multiplierReg_9[5:4] * multiplierReg2_9[1:0]; // @[elegant.scala 547:86]
  wire [7:0] _GEN_131 = {_pp7_T_38, 4'h0}; // @[elegant.scala 547:109]
  reg [10:0] pp7_REG_54; // @[elegant.scala 547:65]
  reg [10:0] pp7_REG_55; // @[elegant.scala 547:57]
  reg [10:0] pp7_REG_56; // @[elegant.scala 547:49]
  reg [10:0] pp7_REG_57; // @[elegant.scala 547:41]
  reg [10:0] pp7_REG_58; // @[elegant.scala 547:33]
  reg [10:0] pp7_REG_59; // @[elegant.scala 547:25]
  wire [3:0] _pp8_T_38 = multiplierReg_9[5:4] * multiplierReg2_9[3:2]; // @[elegant.scala 548:94]
  wire [9:0] _GEN_132 = {_pp8_T_38, 6'h0}; // @[elegant.scala 548:117]
  reg [10:0] pp8_REG_63; // @[elegant.scala 548:73]
  reg [10:0] pp8_REG_64; // @[elegant.scala 548:65]
  reg [10:0] pp8_REG_65; // @[elegant.scala 548:57]
  reg [10:0] pp8_REG_66; // @[elegant.scala 548:49]
  reg [10:0] pp8_REG_67; // @[elegant.scala 548:41]
  reg [10:0] pp8_REG_68; // @[elegant.scala 548:33]
  reg [10:0] pp8_REG_69; // @[elegant.scala 548:25]
  wire [12:0] _dotProductRegs_9_T = pp1_9 + pp2_9; // @[elegant.scala 549:36]
  wire [12:0] _GEN_133 = {{1'd0}, pp3_9}; // @[elegant.scala 549:43]
  wire [13:0] _dotProductRegs_9_T_1 = _dotProductRegs_9_T + _GEN_133; // @[elegant.scala 549:43]
  wire [13:0] _GEN_134 = {{2'd0}, pp4_9}; // @[elegant.scala 549:50]
  wire [14:0] _dotProductRegs_9_T_2 = _dotProductRegs_9_T_1 + _GEN_134; // @[elegant.scala 549:50]
  wire [14:0] _GEN_135 = {{3'd0}, pp5_9}; // @[elegant.scala 549:57]
  wire [15:0] _dotProductRegs_9_T_3 = _dotProductRegs_9_T_2 + _GEN_135; // @[elegant.scala 549:57]
  wire [15:0] _GEN_136 = {{4'd0}, pp6_9}; // @[elegant.scala 549:64]
  wire [16:0] _dotProductRegs_9_T_4 = _dotProductRegs_9_T_3 + _GEN_136; // @[elegant.scala 549:64]
  wire [16:0] _GEN_137 = {{5'd0}, pp7_9}; // @[elegant.scala 549:71]
  wire [17:0] _dotProductRegs_9_T_5 = _dotProductRegs_9_T_4 + _GEN_137; // @[elegant.scala 549:71]
  wire [17:0] _GEN_138 = {{6'd0}, pp8_9}; // @[elegant.scala 549:78]
  wire [18:0] _dotProductRegs_9_T_6 = _dotProductRegs_9_T_5 + _GEN_138; // @[elegant.scala 549:78]
  wire [3:0] _dotProductRegs_9_T_9 = multiplierReg_9[5:4] * multiplierReg2_9[5:4]; // @[elegant.scala 549:172]
  wire [11:0] _GEN_139 = {_dotProductRegs_9_T_9, 8'h0}; // @[elegant.scala 549:195]
  reg [18:0] dotProductRegs_9_REG; // @[elegant.scala 549:151]
  reg [18:0] dotProductRegs_9_REG_1; // @[elegant.scala 549:143]
  reg [18:0] dotProductRegs_9_REG_2; // @[elegant.scala 549:135]
  reg [18:0] dotProductRegs_9_REG_3; // @[elegant.scala 549:127]
  reg [18:0] dotProductRegs_9_REG_4; // @[elegant.scala 549:119]
  reg [18:0] dotProductRegs_9_REG_5; // @[elegant.scala 549:111]
  reg [18:0] dotProductRegs_9_REG_6; // @[elegant.scala 549:103]
  reg [18:0] dotProductRegs_9_REG_7; // @[elegant.scala 549:95]
  wire [19:0] _dotProductRegs_9_T_11 = _dotProductRegs_9_T_6 + dotProductRegs_9_REG_7; // @[elegant.scala 549:85]
  wire [12:0] _two_complement_9_T_1 = {1'h0,dotProductRegs_9}; // @[elegant.scala 553:55]
  wire [12:0] _two_complement_9_T_2 = ~_two_complement_9_T_1; // @[elegant.scala 553:49]
  wire [12:0] _two_complement_9_T_4 = _two_complement_9_T_2 + 13'h1; // @[elegant.scala 553:77]
  reg [5:0] multiplierReg_10; // @[elegant.scala 524:34]
  reg [5:0] multiplierReg2_10; // @[elegant.scala 525:35]
  reg  signReg_10; // @[elegant.scala 527:28]
  reg [11:0] pp1_10; // @[elegant.scala 528:24]
  reg [11:0] pp2_10; // @[elegant.scala 529:24]
  reg [11:0] pp3_10; // @[elegant.scala 530:24]
  reg [11:0] pp4_10; // @[elegant.scala 531:24]
  reg [11:0] pp5_10; // @[elegant.scala 532:24]
  reg [11:0] pp6_10; // @[elegant.scala 533:24]
  reg [11:0] pp7_10; // @[elegant.scala 534:24]
  reg [11:0] pp8_10; // @[elegant.scala 535:24]
  wire [3:0] _pp1_T_32 = multiplierReg_10[1:0] * multiplierReg2_10[1:0]; // @[elegant.scala 541:37]
  wire [3:0] _pp2_T_42 = multiplierReg_10[1:0] * multiplierReg2_10[3:2]; // @[elegant.scala 542:46]
  wire [5:0] _GEN_140 = {_pp2_T_42, 2'h0}; // @[elegant.scala 542:69]
  reg [6:0] pp2_REG_10; // @[elegant.scala 542:25]
  wire [3:0] _pp3_T_42 = multiplierReg_10[1:0] * multiplierReg2_10[5:4]; // @[elegant.scala 543:54]
  wire [7:0] _GEN_141 = {_pp3_T_42, 4'h0}; // @[elegant.scala 543:77]
  reg [10:0] pp3_REG_20; // @[elegant.scala 543:33]
  reg [10:0] pp3_REG_21; // @[elegant.scala 543:25]
  wire [3:0] _pp4_T_42 = multiplierReg_10[3:2] * multiplierReg2_10[1:0]; // @[elegant.scala 544:62]
  wire [5:0] _GEN_142 = {_pp4_T_42, 2'h0}; // @[elegant.scala 544:85]
  reg [6:0] pp4_REG_30; // @[elegant.scala 544:41]
  reg [6:0] pp4_REG_31; // @[elegant.scala 544:33]
  reg [6:0] pp4_REG_32; // @[elegant.scala 544:25]
  wire [3:0] _pp5_T_42 = multiplierReg_10[3:2] * multiplierReg2_10[3:2]; // @[elegant.scala 545:70]
  wire [7:0] _GEN_143 = {_pp5_T_42, 4'h0}; // @[elegant.scala 545:93]
  reg [10:0] pp5_REG_40; // @[elegant.scala 545:49]
  reg [10:0] pp5_REG_41; // @[elegant.scala 545:41]
  reg [10:0] pp5_REG_42; // @[elegant.scala 545:33]
  reg [10:0] pp5_REG_43; // @[elegant.scala 545:25]
  wire [3:0] _pp6_T_42 = multiplierReg_10[3:2] * multiplierReg2_10[5:4]; // @[elegant.scala 546:78]
  wire [9:0] _GEN_144 = {_pp6_T_42, 6'h0}; // @[elegant.scala 546:101]
  reg [10:0] pp6_REG_50; // @[elegant.scala 546:57]
  reg [10:0] pp6_REG_51; // @[elegant.scala 546:49]
  reg [10:0] pp6_REG_52; // @[elegant.scala 546:41]
  reg [10:0] pp6_REG_53; // @[elegant.scala 546:33]
  reg [10:0] pp6_REG_54; // @[elegant.scala 546:25]
  wire [3:0] _pp7_T_42 = multiplierReg_10[5:4] * multiplierReg2_10[1:0]; // @[elegant.scala 547:86]
  wire [7:0] _GEN_145 = {_pp7_T_42, 4'h0}; // @[elegant.scala 547:109]
  reg [10:0] pp7_REG_60; // @[elegant.scala 547:65]
  reg [10:0] pp7_REG_61; // @[elegant.scala 547:57]
  reg [10:0] pp7_REG_62; // @[elegant.scala 547:49]
  reg [10:0] pp7_REG_63; // @[elegant.scala 547:41]
  reg [10:0] pp7_REG_64; // @[elegant.scala 547:33]
  reg [10:0] pp7_REG_65; // @[elegant.scala 547:25]
  wire [3:0] _pp8_T_42 = multiplierReg_10[5:4] * multiplierReg2_10[3:2]; // @[elegant.scala 548:94]
  wire [9:0] _GEN_146 = {_pp8_T_42, 6'h0}; // @[elegant.scala 548:117]
  reg [10:0] pp8_REG_70; // @[elegant.scala 548:73]
  reg [10:0] pp8_REG_71; // @[elegant.scala 548:65]
  reg [10:0] pp8_REG_72; // @[elegant.scala 548:57]
  reg [10:0] pp8_REG_73; // @[elegant.scala 548:49]
  reg [10:0] pp8_REG_74; // @[elegant.scala 548:41]
  reg [10:0] pp8_REG_75; // @[elegant.scala 548:33]
  reg [10:0] pp8_REG_76; // @[elegant.scala 548:25]
  wire [12:0] _dotProductRegs_10_T = pp1_10 + pp2_10; // @[elegant.scala 549:36]
  wire [12:0] _GEN_147 = {{1'd0}, pp3_10}; // @[elegant.scala 549:43]
  wire [13:0] _dotProductRegs_10_T_1 = _dotProductRegs_10_T + _GEN_147; // @[elegant.scala 549:43]
  wire [13:0] _GEN_148 = {{2'd0}, pp4_10}; // @[elegant.scala 549:50]
  wire [14:0] _dotProductRegs_10_T_2 = _dotProductRegs_10_T_1 + _GEN_148; // @[elegant.scala 549:50]
  wire [14:0] _GEN_149 = {{3'd0}, pp5_10}; // @[elegant.scala 549:57]
  wire [15:0] _dotProductRegs_10_T_3 = _dotProductRegs_10_T_2 + _GEN_149; // @[elegant.scala 549:57]
  wire [15:0] _GEN_150 = {{4'd0}, pp6_10}; // @[elegant.scala 549:64]
  wire [16:0] _dotProductRegs_10_T_4 = _dotProductRegs_10_T_3 + _GEN_150; // @[elegant.scala 549:64]
  wire [16:0] _GEN_151 = {{5'd0}, pp7_10}; // @[elegant.scala 549:71]
  wire [17:0] _dotProductRegs_10_T_5 = _dotProductRegs_10_T_4 + _GEN_151; // @[elegant.scala 549:71]
  wire [17:0] _GEN_152 = {{6'd0}, pp8_10}; // @[elegant.scala 549:78]
  wire [18:0] _dotProductRegs_10_T_6 = _dotProductRegs_10_T_5 + _GEN_152; // @[elegant.scala 549:78]
  wire [3:0] _dotProductRegs_10_T_9 = multiplierReg_10[5:4] * multiplierReg2_10[5:4]; // @[elegant.scala 549:172]
  wire [11:0] _GEN_153 = {_dotProductRegs_10_T_9, 8'h0}; // @[elegant.scala 549:195]
  reg [18:0] dotProductRegs_10_REG; // @[elegant.scala 549:151]
  reg [18:0] dotProductRegs_10_REG_1; // @[elegant.scala 549:143]
  reg [18:0] dotProductRegs_10_REG_2; // @[elegant.scala 549:135]
  reg [18:0] dotProductRegs_10_REG_3; // @[elegant.scala 549:127]
  reg [18:0] dotProductRegs_10_REG_4; // @[elegant.scala 549:119]
  reg [18:0] dotProductRegs_10_REG_5; // @[elegant.scala 549:111]
  reg [18:0] dotProductRegs_10_REG_6; // @[elegant.scala 549:103]
  reg [18:0] dotProductRegs_10_REG_7; // @[elegant.scala 549:95]
  wire [19:0] _dotProductRegs_10_T_11 = _dotProductRegs_10_T_6 + dotProductRegs_10_REG_7; // @[elegant.scala 549:85]
  wire [12:0] _two_complement_10_T_1 = {1'h0,dotProductRegs_10}; // @[elegant.scala 553:55]
  wire [12:0] _two_complement_10_T_2 = ~_two_complement_10_T_1; // @[elegant.scala 553:49]
  wire [12:0] _two_complement_10_T_4 = _two_complement_10_T_2 + 13'h1; // @[elegant.scala 553:77]
  reg [5:0] multiplierReg_11; // @[elegant.scala 524:34]
  reg [5:0] multiplierReg2_11; // @[elegant.scala 525:35]
  reg  signReg_11; // @[elegant.scala 527:28]
  reg [11:0] pp1_11; // @[elegant.scala 528:24]
  reg [11:0] pp2_11; // @[elegant.scala 529:24]
  reg [11:0] pp3_11; // @[elegant.scala 530:24]
  reg [11:0] pp4_11; // @[elegant.scala 531:24]
  reg [11:0] pp5_11; // @[elegant.scala 532:24]
  reg [11:0] pp6_11; // @[elegant.scala 533:24]
  reg [11:0] pp7_11; // @[elegant.scala 534:24]
  reg [11:0] pp8_11; // @[elegant.scala 535:24]
  wire [3:0] _pp1_T_35 = multiplierReg_11[1:0] * multiplierReg2_11[1:0]; // @[elegant.scala 541:37]
  wire [3:0] _pp2_T_46 = multiplierReg_11[1:0] * multiplierReg2_11[3:2]; // @[elegant.scala 542:46]
  wire [5:0] _GEN_154 = {_pp2_T_46, 2'h0}; // @[elegant.scala 542:69]
  reg [6:0] pp2_REG_11; // @[elegant.scala 542:25]
  wire [3:0] _pp3_T_46 = multiplierReg_11[1:0] * multiplierReg2_11[5:4]; // @[elegant.scala 543:54]
  wire [7:0] _GEN_155 = {_pp3_T_46, 4'h0}; // @[elegant.scala 543:77]
  reg [10:0] pp3_REG_22; // @[elegant.scala 543:33]
  reg [10:0] pp3_REG_23; // @[elegant.scala 543:25]
  wire [3:0] _pp4_T_46 = multiplierReg_11[3:2] * multiplierReg2_11[1:0]; // @[elegant.scala 544:62]
  wire [5:0] _GEN_156 = {_pp4_T_46, 2'h0}; // @[elegant.scala 544:85]
  reg [6:0] pp4_REG_33; // @[elegant.scala 544:41]
  reg [6:0] pp4_REG_34; // @[elegant.scala 544:33]
  reg [6:0] pp4_REG_35; // @[elegant.scala 544:25]
  wire [3:0] _pp5_T_46 = multiplierReg_11[3:2] * multiplierReg2_11[3:2]; // @[elegant.scala 545:70]
  wire [7:0] _GEN_157 = {_pp5_T_46, 4'h0}; // @[elegant.scala 545:93]
  reg [10:0] pp5_REG_44; // @[elegant.scala 545:49]
  reg [10:0] pp5_REG_45; // @[elegant.scala 545:41]
  reg [10:0] pp5_REG_46; // @[elegant.scala 545:33]
  reg [10:0] pp5_REG_47; // @[elegant.scala 545:25]
  wire [3:0] _pp6_T_46 = multiplierReg_11[3:2] * multiplierReg2_11[5:4]; // @[elegant.scala 546:78]
  wire [9:0] _GEN_158 = {_pp6_T_46, 6'h0}; // @[elegant.scala 546:101]
  reg [10:0] pp6_REG_55; // @[elegant.scala 546:57]
  reg [10:0] pp6_REG_56; // @[elegant.scala 546:49]
  reg [10:0] pp6_REG_57; // @[elegant.scala 546:41]
  reg [10:0] pp6_REG_58; // @[elegant.scala 546:33]
  reg [10:0] pp6_REG_59; // @[elegant.scala 546:25]
  wire [3:0] _pp7_T_46 = multiplierReg_11[5:4] * multiplierReg2_11[1:0]; // @[elegant.scala 547:86]
  wire [7:0] _GEN_159 = {_pp7_T_46, 4'h0}; // @[elegant.scala 547:109]
  reg [10:0] pp7_REG_66; // @[elegant.scala 547:65]
  reg [10:0] pp7_REG_67; // @[elegant.scala 547:57]
  reg [10:0] pp7_REG_68; // @[elegant.scala 547:49]
  reg [10:0] pp7_REG_69; // @[elegant.scala 547:41]
  reg [10:0] pp7_REG_70; // @[elegant.scala 547:33]
  reg [10:0] pp7_REG_71; // @[elegant.scala 547:25]
  wire [3:0] _pp8_T_46 = multiplierReg_11[5:4] * multiplierReg2_11[3:2]; // @[elegant.scala 548:94]
  wire [9:0] _GEN_160 = {_pp8_T_46, 6'h0}; // @[elegant.scala 548:117]
  reg [10:0] pp8_REG_77; // @[elegant.scala 548:73]
  reg [10:0] pp8_REG_78; // @[elegant.scala 548:65]
  reg [10:0] pp8_REG_79; // @[elegant.scala 548:57]
  reg [10:0] pp8_REG_80; // @[elegant.scala 548:49]
  reg [10:0] pp8_REG_81; // @[elegant.scala 548:41]
  reg [10:0] pp8_REG_82; // @[elegant.scala 548:33]
  reg [10:0] pp8_REG_83; // @[elegant.scala 548:25]
  wire [12:0] _dotProductRegs_11_T = pp1_11 + pp2_11; // @[elegant.scala 549:36]
  wire [12:0] _GEN_161 = {{1'd0}, pp3_11}; // @[elegant.scala 549:43]
  wire [13:0] _dotProductRegs_11_T_1 = _dotProductRegs_11_T + _GEN_161; // @[elegant.scala 549:43]
  wire [13:0] _GEN_162 = {{2'd0}, pp4_11}; // @[elegant.scala 549:50]
  wire [14:0] _dotProductRegs_11_T_2 = _dotProductRegs_11_T_1 + _GEN_162; // @[elegant.scala 549:50]
  wire [14:0] _GEN_163 = {{3'd0}, pp5_11}; // @[elegant.scala 549:57]
  wire [15:0] _dotProductRegs_11_T_3 = _dotProductRegs_11_T_2 + _GEN_163; // @[elegant.scala 549:57]
  wire [15:0] _GEN_164 = {{4'd0}, pp6_11}; // @[elegant.scala 549:64]
  wire [16:0] _dotProductRegs_11_T_4 = _dotProductRegs_11_T_3 + _GEN_164; // @[elegant.scala 549:64]
  wire [16:0] _GEN_165 = {{5'd0}, pp7_11}; // @[elegant.scala 549:71]
  wire [17:0] _dotProductRegs_11_T_5 = _dotProductRegs_11_T_4 + _GEN_165; // @[elegant.scala 549:71]
  wire [17:0] _GEN_166 = {{6'd0}, pp8_11}; // @[elegant.scala 549:78]
  wire [18:0] _dotProductRegs_11_T_6 = _dotProductRegs_11_T_5 + _GEN_166; // @[elegant.scala 549:78]
  wire [3:0] _dotProductRegs_11_T_9 = multiplierReg_11[5:4] * multiplierReg2_11[5:4]; // @[elegant.scala 549:172]
  wire [11:0] _GEN_167 = {_dotProductRegs_11_T_9, 8'h0}; // @[elegant.scala 549:195]
  reg [18:0] dotProductRegs_11_REG; // @[elegant.scala 549:151]
  reg [18:0] dotProductRegs_11_REG_1; // @[elegant.scala 549:143]
  reg [18:0] dotProductRegs_11_REG_2; // @[elegant.scala 549:135]
  reg [18:0] dotProductRegs_11_REG_3; // @[elegant.scala 549:127]
  reg [18:0] dotProductRegs_11_REG_4; // @[elegant.scala 549:119]
  reg [18:0] dotProductRegs_11_REG_5; // @[elegant.scala 549:111]
  reg [18:0] dotProductRegs_11_REG_6; // @[elegant.scala 549:103]
  reg [18:0] dotProductRegs_11_REG_7; // @[elegant.scala 549:95]
  wire [19:0] _dotProductRegs_11_T_11 = _dotProductRegs_11_T_6 + dotProductRegs_11_REG_7; // @[elegant.scala 549:85]
  wire [12:0] _two_complement_11_T_1 = {1'h0,dotProductRegs_11}; // @[elegant.scala 553:55]
  wire [12:0] _two_complement_11_T_2 = ~_two_complement_11_T_1; // @[elegant.scala 553:49]
  wire [12:0] _two_complement_11_T_4 = _two_complement_11_T_2 + 13'h1; // @[elegant.scala 553:77]
  reg [5:0] multiplierReg_12; // @[elegant.scala 524:34]
  reg [5:0] multiplierReg2_12; // @[elegant.scala 525:35]
  reg  signReg_12; // @[elegant.scala 527:28]
  reg [11:0] pp1_12; // @[elegant.scala 528:24]
  reg [11:0] pp2_12; // @[elegant.scala 529:24]
  reg [11:0] pp3_12; // @[elegant.scala 530:24]
  reg [11:0] pp4_12; // @[elegant.scala 531:24]
  reg [11:0] pp5_12; // @[elegant.scala 532:24]
  reg [11:0] pp6_12; // @[elegant.scala 533:24]
  reg [11:0] pp7_12; // @[elegant.scala 534:24]
  reg [11:0] pp8_12; // @[elegant.scala 535:24]
  wire [3:0] _pp1_T_38 = multiplierReg_12[1:0] * multiplierReg2_12[1:0]; // @[elegant.scala 541:37]
  wire [3:0] _pp2_T_50 = multiplierReg_12[1:0] * multiplierReg2_12[3:2]; // @[elegant.scala 542:46]
  wire [5:0] _GEN_168 = {_pp2_T_50, 2'h0}; // @[elegant.scala 542:69]
  reg [6:0] pp2_REG_12; // @[elegant.scala 542:25]
  wire [3:0] _pp3_T_50 = multiplierReg_12[1:0] * multiplierReg2_12[5:4]; // @[elegant.scala 543:54]
  wire [7:0] _GEN_169 = {_pp3_T_50, 4'h0}; // @[elegant.scala 543:77]
  reg [10:0] pp3_REG_24; // @[elegant.scala 543:33]
  reg [10:0] pp3_REG_25; // @[elegant.scala 543:25]
  wire [3:0] _pp4_T_50 = multiplierReg_12[3:2] * multiplierReg2_12[1:0]; // @[elegant.scala 544:62]
  wire [5:0] _GEN_170 = {_pp4_T_50, 2'h0}; // @[elegant.scala 544:85]
  reg [6:0] pp4_REG_36; // @[elegant.scala 544:41]
  reg [6:0] pp4_REG_37; // @[elegant.scala 544:33]
  reg [6:0] pp4_REG_38; // @[elegant.scala 544:25]
  wire [3:0] _pp5_T_50 = multiplierReg_12[3:2] * multiplierReg2_12[3:2]; // @[elegant.scala 545:70]
  wire [7:0] _GEN_171 = {_pp5_T_50, 4'h0}; // @[elegant.scala 545:93]
  reg [10:0] pp5_REG_48; // @[elegant.scala 545:49]
  reg [10:0] pp5_REG_49; // @[elegant.scala 545:41]
  reg [10:0] pp5_REG_50; // @[elegant.scala 545:33]
  reg [10:0] pp5_REG_51; // @[elegant.scala 545:25]
  wire [3:0] _pp6_T_50 = multiplierReg_12[3:2] * multiplierReg2_12[5:4]; // @[elegant.scala 546:78]
  wire [9:0] _GEN_172 = {_pp6_T_50, 6'h0}; // @[elegant.scala 546:101]
  reg [10:0] pp6_REG_60; // @[elegant.scala 546:57]
  reg [10:0] pp6_REG_61; // @[elegant.scala 546:49]
  reg [10:0] pp6_REG_62; // @[elegant.scala 546:41]
  reg [10:0] pp6_REG_63; // @[elegant.scala 546:33]
  reg [10:0] pp6_REG_64; // @[elegant.scala 546:25]
  wire [3:0] _pp7_T_50 = multiplierReg_12[5:4] * multiplierReg2_12[1:0]; // @[elegant.scala 547:86]
  wire [7:0] _GEN_173 = {_pp7_T_50, 4'h0}; // @[elegant.scala 547:109]
  reg [10:0] pp7_REG_72; // @[elegant.scala 547:65]
  reg [10:0] pp7_REG_73; // @[elegant.scala 547:57]
  reg [10:0] pp7_REG_74; // @[elegant.scala 547:49]
  reg [10:0] pp7_REG_75; // @[elegant.scala 547:41]
  reg [10:0] pp7_REG_76; // @[elegant.scala 547:33]
  reg [10:0] pp7_REG_77; // @[elegant.scala 547:25]
  wire [3:0] _pp8_T_50 = multiplierReg_12[5:4] * multiplierReg2_12[3:2]; // @[elegant.scala 548:94]
  wire [9:0] _GEN_174 = {_pp8_T_50, 6'h0}; // @[elegant.scala 548:117]
  reg [10:0] pp8_REG_84; // @[elegant.scala 548:73]
  reg [10:0] pp8_REG_85; // @[elegant.scala 548:65]
  reg [10:0] pp8_REG_86; // @[elegant.scala 548:57]
  reg [10:0] pp8_REG_87; // @[elegant.scala 548:49]
  reg [10:0] pp8_REG_88; // @[elegant.scala 548:41]
  reg [10:0] pp8_REG_89; // @[elegant.scala 548:33]
  reg [10:0] pp8_REG_90; // @[elegant.scala 548:25]
  wire [12:0] _dotProductRegs_12_T = pp1_12 + pp2_12; // @[elegant.scala 549:36]
  wire [12:0] _GEN_175 = {{1'd0}, pp3_12}; // @[elegant.scala 549:43]
  wire [13:0] _dotProductRegs_12_T_1 = _dotProductRegs_12_T + _GEN_175; // @[elegant.scala 549:43]
  wire [13:0] _GEN_176 = {{2'd0}, pp4_12}; // @[elegant.scala 549:50]
  wire [14:0] _dotProductRegs_12_T_2 = _dotProductRegs_12_T_1 + _GEN_176; // @[elegant.scala 549:50]
  wire [14:0] _GEN_177 = {{3'd0}, pp5_12}; // @[elegant.scala 549:57]
  wire [15:0] _dotProductRegs_12_T_3 = _dotProductRegs_12_T_2 + _GEN_177; // @[elegant.scala 549:57]
  wire [15:0] _GEN_178 = {{4'd0}, pp6_12}; // @[elegant.scala 549:64]
  wire [16:0] _dotProductRegs_12_T_4 = _dotProductRegs_12_T_3 + _GEN_178; // @[elegant.scala 549:64]
  wire [16:0] _GEN_179 = {{5'd0}, pp7_12}; // @[elegant.scala 549:71]
  wire [17:0] _dotProductRegs_12_T_5 = _dotProductRegs_12_T_4 + _GEN_179; // @[elegant.scala 549:71]
  wire [17:0] _GEN_180 = {{6'd0}, pp8_12}; // @[elegant.scala 549:78]
  wire [18:0] _dotProductRegs_12_T_6 = _dotProductRegs_12_T_5 + _GEN_180; // @[elegant.scala 549:78]
  wire [3:0] _dotProductRegs_12_T_9 = multiplierReg_12[5:4] * multiplierReg2_12[5:4]; // @[elegant.scala 549:172]
  wire [11:0] _GEN_181 = {_dotProductRegs_12_T_9, 8'h0}; // @[elegant.scala 549:195]
  reg [18:0] dotProductRegs_12_REG; // @[elegant.scala 549:151]
  reg [18:0] dotProductRegs_12_REG_1; // @[elegant.scala 549:143]
  reg [18:0] dotProductRegs_12_REG_2; // @[elegant.scala 549:135]
  reg [18:0] dotProductRegs_12_REG_3; // @[elegant.scala 549:127]
  reg [18:0] dotProductRegs_12_REG_4; // @[elegant.scala 549:119]
  reg [18:0] dotProductRegs_12_REG_5; // @[elegant.scala 549:111]
  reg [18:0] dotProductRegs_12_REG_6; // @[elegant.scala 549:103]
  reg [18:0] dotProductRegs_12_REG_7; // @[elegant.scala 549:95]
  wire [19:0] _dotProductRegs_12_T_11 = _dotProductRegs_12_T_6 + dotProductRegs_12_REG_7; // @[elegant.scala 549:85]
  wire [12:0] _two_complement_12_T_1 = {1'h0,dotProductRegs_12}; // @[elegant.scala 553:55]
  wire [12:0] _two_complement_12_T_2 = ~_two_complement_12_T_1; // @[elegant.scala 553:49]
  wire [12:0] _two_complement_12_T_4 = _two_complement_12_T_2 + 13'h1; // @[elegant.scala 553:77]
  reg [5:0] multiplierReg_13; // @[elegant.scala 524:34]
  reg [5:0] multiplierReg2_13; // @[elegant.scala 525:35]
  reg  signReg_13; // @[elegant.scala 527:28]
  reg [11:0] pp1_13; // @[elegant.scala 528:24]
  reg [11:0] pp2_13; // @[elegant.scala 529:24]
  reg [11:0] pp3_13; // @[elegant.scala 530:24]
  reg [11:0] pp4_13; // @[elegant.scala 531:24]
  reg [11:0] pp5_13; // @[elegant.scala 532:24]
  reg [11:0] pp6_13; // @[elegant.scala 533:24]
  reg [11:0] pp7_13; // @[elegant.scala 534:24]
  reg [11:0] pp8_13; // @[elegant.scala 535:24]
  wire [3:0] _pp1_T_41 = multiplierReg_13[1:0] * multiplierReg2_13[1:0]; // @[elegant.scala 541:37]
  wire [3:0] _pp2_T_54 = multiplierReg_13[1:0] * multiplierReg2_13[3:2]; // @[elegant.scala 542:46]
  wire [5:0] _GEN_182 = {_pp2_T_54, 2'h0}; // @[elegant.scala 542:69]
  reg [6:0] pp2_REG_13; // @[elegant.scala 542:25]
  wire [3:0] _pp3_T_54 = multiplierReg_13[1:0] * multiplierReg2_13[5:4]; // @[elegant.scala 543:54]
  wire [7:0] _GEN_183 = {_pp3_T_54, 4'h0}; // @[elegant.scala 543:77]
  reg [10:0] pp3_REG_26; // @[elegant.scala 543:33]
  reg [10:0] pp3_REG_27; // @[elegant.scala 543:25]
  wire [3:0] _pp4_T_54 = multiplierReg_13[3:2] * multiplierReg2_13[1:0]; // @[elegant.scala 544:62]
  wire [5:0] _GEN_184 = {_pp4_T_54, 2'h0}; // @[elegant.scala 544:85]
  reg [6:0] pp4_REG_39; // @[elegant.scala 544:41]
  reg [6:0] pp4_REG_40; // @[elegant.scala 544:33]
  reg [6:0] pp4_REG_41; // @[elegant.scala 544:25]
  wire [3:0] _pp5_T_54 = multiplierReg_13[3:2] * multiplierReg2_13[3:2]; // @[elegant.scala 545:70]
  wire [7:0] _GEN_185 = {_pp5_T_54, 4'h0}; // @[elegant.scala 545:93]
  reg [10:0] pp5_REG_52; // @[elegant.scala 545:49]
  reg [10:0] pp5_REG_53; // @[elegant.scala 545:41]
  reg [10:0] pp5_REG_54; // @[elegant.scala 545:33]
  reg [10:0] pp5_REG_55; // @[elegant.scala 545:25]
  wire [3:0] _pp6_T_54 = multiplierReg_13[3:2] * multiplierReg2_13[5:4]; // @[elegant.scala 546:78]
  wire [9:0] _GEN_186 = {_pp6_T_54, 6'h0}; // @[elegant.scala 546:101]
  reg [10:0] pp6_REG_65; // @[elegant.scala 546:57]
  reg [10:0] pp6_REG_66; // @[elegant.scala 546:49]
  reg [10:0] pp6_REG_67; // @[elegant.scala 546:41]
  reg [10:0] pp6_REG_68; // @[elegant.scala 546:33]
  reg [10:0] pp6_REG_69; // @[elegant.scala 546:25]
  wire [3:0] _pp7_T_54 = multiplierReg_13[5:4] * multiplierReg2_13[1:0]; // @[elegant.scala 547:86]
  wire [7:0] _GEN_187 = {_pp7_T_54, 4'h0}; // @[elegant.scala 547:109]
  reg [10:0] pp7_REG_78; // @[elegant.scala 547:65]
  reg [10:0] pp7_REG_79; // @[elegant.scala 547:57]
  reg [10:0] pp7_REG_80; // @[elegant.scala 547:49]
  reg [10:0] pp7_REG_81; // @[elegant.scala 547:41]
  reg [10:0] pp7_REG_82; // @[elegant.scala 547:33]
  reg [10:0] pp7_REG_83; // @[elegant.scala 547:25]
  wire [3:0] _pp8_T_54 = multiplierReg_13[5:4] * multiplierReg2_13[3:2]; // @[elegant.scala 548:94]
  wire [9:0] _GEN_188 = {_pp8_T_54, 6'h0}; // @[elegant.scala 548:117]
  reg [10:0] pp8_REG_91; // @[elegant.scala 548:73]
  reg [10:0] pp8_REG_92; // @[elegant.scala 548:65]
  reg [10:0] pp8_REG_93; // @[elegant.scala 548:57]
  reg [10:0] pp8_REG_94; // @[elegant.scala 548:49]
  reg [10:0] pp8_REG_95; // @[elegant.scala 548:41]
  reg [10:0] pp8_REG_96; // @[elegant.scala 548:33]
  reg [10:0] pp8_REG_97; // @[elegant.scala 548:25]
  wire [12:0] _dotProductRegs_13_T = pp1_13 + pp2_13; // @[elegant.scala 549:36]
  wire [12:0] _GEN_189 = {{1'd0}, pp3_13}; // @[elegant.scala 549:43]
  wire [13:0] _dotProductRegs_13_T_1 = _dotProductRegs_13_T + _GEN_189; // @[elegant.scala 549:43]
  wire [13:0] _GEN_190 = {{2'd0}, pp4_13}; // @[elegant.scala 549:50]
  wire [14:0] _dotProductRegs_13_T_2 = _dotProductRegs_13_T_1 + _GEN_190; // @[elegant.scala 549:50]
  wire [14:0] _GEN_191 = {{3'd0}, pp5_13}; // @[elegant.scala 549:57]
  wire [15:0] _dotProductRegs_13_T_3 = _dotProductRegs_13_T_2 + _GEN_191; // @[elegant.scala 549:57]
  wire [15:0] _GEN_192 = {{4'd0}, pp6_13}; // @[elegant.scala 549:64]
  wire [16:0] _dotProductRegs_13_T_4 = _dotProductRegs_13_T_3 + _GEN_192; // @[elegant.scala 549:64]
  wire [16:0] _GEN_193 = {{5'd0}, pp7_13}; // @[elegant.scala 549:71]
  wire [17:0] _dotProductRegs_13_T_5 = _dotProductRegs_13_T_4 + _GEN_193; // @[elegant.scala 549:71]
  wire [17:0] _GEN_194 = {{6'd0}, pp8_13}; // @[elegant.scala 549:78]
  wire [18:0] _dotProductRegs_13_T_6 = _dotProductRegs_13_T_5 + _GEN_194; // @[elegant.scala 549:78]
  wire [3:0] _dotProductRegs_13_T_9 = multiplierReg_13[5:4] * multiplierReg2_13[5:4]; // @[elegant.scala 549:172]
  wire [11:0] _GEN_195 = {_dotProductRegs_13_T_9, 8'h0}; // @[elegant.scala 549:195]
  reg [18:0] dotProductRegs_13_REG; // @[elegant.scala 549:151]
  reg [18:0] dotProductRegs_13_REG_1; // @[elegant.scala 549:143]
  reg [18:0] dotProductRegs_13_REG_2; // @[elegant.scala 549:135]
  reg [18:0] dotProductRegs_13_REG_3; // @[elegant.scala 549:127]
  reg [18:0] dotProductRegs_13_REG_4; // @[elegant.scala 549:119]
  reg [18:0] dotProductRegs_13_REG_5; // @[elegant.scala 549:111]
  reg [18:0] dotProductRegs_13_REG_6; // @[elegant.scala 549:103]
  reg [18:0] dotProductRegs_13_REG_7; // @[elegant.scala 549:95]
  wire [19:0] _dotProductRegs_13_T_11 = _dotProductRegs_13_T_6 + dotProductRegs_13_REG_7; // @[elegant.scala 549:85]
  wire [12:0] _two_complement_13_T_1 = {1'h0,dotProductRegs_13}; // @[elegant.scala 553:55]
  wire [12:0] _two_complement_13_T_2 = ~_two_complement_13_T_1; // @[elegant.scala 553:49]
  wire [12:0] _two_complement_13_T_4 = _two_complement_13_T_2 + 13'h1; // @[elegant.scala 553:77]
  reg [5:0] multiplierReg_14; // @[elegant.scala 524:34]
  reg [5:0] multiplierReg2_14; // @[elegant.scala 525:35]
  reg  signReg_14; // @[elegant.scala 527:28]
  reg [11:0] pp1_14; // @[elegant.scala 528:24]
  reg [11:0] pp2_14; // @[elegant.scala 529:24]
  reg [11:0] pp3_14; // @[elegant.scala 530:24]
  reg [11:0] pp4_14; // @[elegant.scala 531:24]
  reg [11:0] pp5_14; // @[elegant.scala 532:24]
  reg [11:0] pp6_14; // @[elegant.scala 533:24]
  reg [11:0] pp7_14; // @[elegant.scala 534:24]
  reg [11:0] pp8_14; // @[elegant.scala 535:24]
  wire [3:0] _pp1_T_44 = multiplierReg_14[1:0] * multiplierReg2_14[1:0]; // @[elegant.scala 541:37]
  wire [3:0] _pp2_T_58 = multiplierReg_14[1:0] * multiplierReg2_14[3:2]; // @[elegant.scala 542:46]
  wire [5:0] _GEN_196 = {_pp2_T_58, 2'h0}; // @[elegant.scala 542:69]
  reg [6:0] pp2_REG_14; // @[elegant.scala 542:25]
  wire [3:0] _pp3_T_58 = multiplierReg_14[1:0] * multiplierReg2_14[5:4]; // @[elegant.scala 543:54]
  wire [7:0] _GEN_197 = {_pp3_T_58, 4'h0}; // @[elegant.scala 543:77]
  reg [10:0] pp3_REG_28; // @[elegant.scala 543:33]
  reg [10:0] pp3_REG_29; // @[elegant.scala 543:25]
  wire [3:0] _pp4_T_58 = multiplierReg_14[3:2] * multiplierReg2_14[1:0]; // @[elegant.scala 544:62]
  wire [5:0] _GEN_198 = {_pp4_T_58, 2'h0}; // @[elegant.scala 544:85]
  reg [6:0] pp4_REG_42; // @[elegant.scala 544:41]
  reg [6:0] pp4_REG_43; // @[elegant.scala 544:33]
  reg [6:0] pp4_REG_44; // @[elegant.scala 544:25]
  wire [3:0] _pp5_T_58 = multiplierReg_14[3:2] * multiplierReg2_14[3:2]; // @[elegant.scala 545:70]
  wire [7:0] _GEN_199 = {_pp5_T_58, 4'h0}; // @[elegant.scala 545:93]
  reg [10:0] pp5_REG_56; // @[elegant.scala 545:49]
  reg [10:0] pp5_REG_57; // @[elegant.scala 545:41]
  reg [10:0] pp5_REG_58; // @[elegant.scala 545:33]
  reg [10:0] pp5_REG_59; // @[elegant.scala 545:25]
  wire [3:0] _pp6_T_58 = multiplierReg_14[3:2] * multiplierReg2_14[5:4]; // @[elegant.scala 546:78]
  wire [9:0] _GEN_200 = {_pp6_T_58, 6'h0}; // @[elegant.scala 546:101]
  reg [10:0] pp6_REG_70; // @[elegant.scala 546:57]
  reg [10:0] pp6_REG_71; // @[elegant.scala 546:49]
  reg [10:0] pp6_REG_72; // @[elegant.scala 546:41]
  reg [10:0] pp6_REG_73; // @[elegant.scala 546:33]
  reg [10:0] pp6_REG_74; // @[elegant.scala 546:25]
  wire [3:0] _pp7_T_58 = multiplierReg_14[5:4] * multiplierReg2_14[1:0]; // @[elegant.scala 547:86]
  wire [7:0] _GEN_201 = {_pp7_T_58, 4'h0}; // @[elegant.scala 547:109]
  reg [10:0] pp7_REG_84; // @[elegant.scala 547:65]
  reg [10:0] pp7_REG_85; // @[elegant.scala 547:57]
  reg [10:0] pp7_REG_86; // @[elegant.scala 547:49]
  reg [10:0] pp7_REG_87; // @[elegant.scala 547:41]
  reg [10:0] pp7_REG_88; // @[elegant.scala 547:33]
  reg [10:0] pp7_REG_89; // @[elegant.scala 547:25]
  wire [3:0] _pp8_T_58 = multiplierReg_14[5:4] * multiplierReg2_14[3:2]; // @[elegant.scala 548:94]
  wire [9:0] _GEN_202 = {_pp8_T_58, 6'h0}; // @[elegant.scala 548:117]
  reg [10:0] pp8_REG_98; // @[elegant.scala 548:73]
  reg [10:0] pp8_REG_99; // @[elegant.scala 548:65]
  reg [10:0] pp8_REG_100; // @[elegant.scala 548:57]
  reg [10:0] pp8_REG_101; // @[elegant.scala 548:49]
  reg [10:0] pp8_REG_102; // @[elegant.scala 548:41]
  reg [10:0] pp8_REG_103; // @[elegant.scala 548:33]
  reg [10:0] pp8_REG_104; // @[elegant.scala 548:25]
  wire [12:0] _dotProductRegs_14_T = pp1_14 + pp2_14; // @[elegant.scala 549:36]
  wire [12:0] _GEN_203 = {{1'd0}, pp3_14}; // @[elegant.scala 549:43]
  wire [13:0] _dotProductRegs_14_T_1 = _dotProductRegs_14_T + _GEN_203; // @[elegant.scala 549:43]
  wire [13:0] _GEN_204 = {{2'd0}, pp4_14}; // @[elegant.scala 549:50]
  wire [14:0] _dotProductRegs_14_T_2 = _dotProductRegs_14_T_1 + _GEN_204; // @[elegant.scala 549:50]
  wire [14:0] _GEN_205 = {{3'd0}, pp5_14}; // @[elegant.scala 549:57]
  wire [15:0] _dotProductRegs_14_T_3 = _dotProductRegs_14_T_2 + _GEN_205; // @[elegant.scala 549:57]
  wire [15:0] _GEN_206 = {{4'd0}, pp6_14}; // @[elegant.scala 549:64]
  wire [16:0] _dotProductRegs_14_T_4 = _dotProductRegs_14_T_3 + _GEN_206; // @[elegant.scala 549:64]
  wire [16:0] _GEN_207 = {{5'd0}, pp7_14}; // @[elegant.scala 549:71]
  wire [17:0] _dotProductRegs_14_T_5 = _dotProductRegs_14_T_4 + _GEN_207; // @[elegant.scala 549:71]
  wire [17:0] _GEN_208 = {{6'd0}, pp8_14}; // @[elegant.scala 549:78]
  wire [18:0] _dotProductRegs_14_T_6 = _dotProductRegs_14_T_5 + _GEN_208; // @[elegant.scala 549:78]
  wire [3:0] _dotProductRegs_14_T_9 = multiplierReg_14[5:4] * multiplierReg2_14[5:4]; // @[elegant.scala 549:172]
  wire [11:0] _GEN_209 = {_dotProductRegs_14_T_9, 8'h0}; // @[elegant.scala 549:195]
  reg [18:0] dotProductRegs_14_REG; // @[elegant.scala 549:151]
  reg [18:0] dotProductRegs_14_REG_1; // @[elegant.scala 549:143]
  reg [18:0] dotProductRegs_14_REG_2; // @[elegant.scala 549:135]
  reg [18:0] dotProductRegs_14_REG_3; // @[elegant.scala 549:127]
  reg [18:0] dotProductRegs_14_REG_4; // @[elegant.scala 549:119]
  reg [18:0] dotProductRegs_14_REG_5; // @[elegant.scala 549:111]
  reg [18:0] dotProductRegs_14_REG_6; // @[elegant.scala 549:103]
  reg [18:0] dotProductRegs_14_REG_7; // @[elegant.scala 549:95]
  wire [19:0] _dotProductRegs_14_T_11 = _dotProductRegs_14_T_6 + dotProductRegs_14_REG_7; // @[elegant.scala 549:85]
  wire [12:0] _two_complement_14_T_1 = {1'h0,dotProductRegs_14}; // @[elegant.scala 553:55]
  wire [12:0] _two_complement_14_T_2 = ~_two_complement_14_T_1; // @[elegant.scala 553:49]
  wire [12:0] _two_complement_14_T_4 = _two_complement_14_T_2 + 13'h1; // @[elegant.scala 553:77]
  reg [5:0] multiplierReg_15; // @[elegant.scala 524:34]
  reg [5:0] multiplierReg2_15; // @[elegant.scala 525:35]
  reg  signReg_15; // @[elegant.scala 527:28]
  reg [11:0] pp1_15; // @[elegant.scala 528:24]
  reg [11:0] pp2_15; // @[elegant.scala 529:24]
  reg [11:0] pp3_15; // @[elegant.scala 530:24]
  reg [11:0] pp4_15; // @[elegant.scala 531:24]
  reg [11:0] pp5_15; // @[elegant.scala 532:24]
  reg [11:0] pp6_15; // @[elegant.scala 533:24]
  reg [11:0] pp7_15; // @[elegant.scala 534:24]
  reg [11:0] pp8_15; // @[elegant.scala 535:24]
  wire [3:0] _pp1_T_47 = multiplierReg_15[1:0] * multiplierReg2_15[1:0]; // @[elegant.scala 541:37]
  wire [3:0] _pp2_T_62 = multiplierReg_15[1:0] * multiplierReg2_15[3:2]; // @[elegant.scala 542:46]
  wire [5:0] _GEN_210 = {_pp2_T_62, 2'h0}; // @[elegant.scala 542:69]
  reg [6:0] pp2_REG_15; // @[elegant.scala 542:25]
  wire [3:0] _pp3_T_62 = multiplierReg_15[1:0] * multiplierReg2_15[5:4]; // @[elegant.scala 543:54]
  wire [7:0] _GEN_211 = {_pp3_T_62, 4'h0}; // @[elegant.scala 543:77]
  reg [10:0] pp3_REG_30; // @[elegant.scala 543:33]
  reg [10:0] pp3_REG_31; // @[elegant.scala 543:25]
  wire [3:0] _pp4_T_62 = multiplierReg_15[3:2] * multiplierReg2_15[1:0]; // @[elegant.scala 544:62]
  wire [5:0] _GEN_212 = {_pp4_T_62, 2'h0}; // @[elegant.scala 544:85]
  reg [6:0] pp4_REG_45; // @[elegant.scala 544:41]
  reg [6:0] pp4_REG_46; // @[elegant.scala 544:33]
  reg [6:0] pp4_REG_47; // @[elegant.scala 544:25]
  wire [3:0] _pp5_T_62 = multiplierReg_15[3:2] * multiplierReg2_15[3:2]; // @[elegant.scala 545:70]
  wire [7:0] _GEN_213 = {_pp5_T_62, 4'h0}; // @[elegant.scala 545:93]
  reg [10:0] pp5_REG_60; // @[elegant.scala 545:49]
  reg [10:0] pp5_REG_61; // @[elegant.scala 545:41]
  reg [10:0] pp5_REG_62; // @[elegant.scala 545:33]
  reg [10:0] pp5_REG_63; // @[elegant.scala 545:25]
  wire [3:0] _pp6_T_62 = multiplierReg_15[3:2] * multiplierReg2_15[5:4]; // @[elegant.scala 546:78]
  wire [9:0] _GEN_214 = {_pp6_T_62, 6'h0}; // @[elegant.scala 546:101]
  reg [10:0] pp6_REG_75; // @[elegant.scala 546:57]
  reg [10:0] pp6_REG_76; // @[elegant.scala 546:49]
  reg [10:0] pp6_REG_77; // @[elegant.scala 546:41]
  reg [10:0] pp6_REG_78; // @[elegant.scala 546:33]
  reg [10:0] pp6_REG_79; // @[elegant.scala 546:25]
  wire [3:0] _pp7_T_62 = multiplierReg_15[5:4] * multiplierReg2_15[1:0]; // @[elegant.scala 547:86]
  wire [7:0] _GEN_215 = {_pp7_T_62, 4'h0}; // @[elegant.scala 547:109]
  reg [10:0] pp7_REG_90; // @[elegant.scala 547:65]
  reg [10:0] pp7_REG_91; // @[elegant.scala 547:57]
  reg [10:0] pp7_REG_92; // @[elegant.scala 547:49]
  reg [10:0] pp7_REG_93; // @[elegant.scala 547:41]
  reg [10:0] pp7_REG_94; // @[elegant.scala 547:33]
  reg [10:0] pp7_REG_95; // @[elegant.scala 547:25]
  wire [3:0] _pp8_T_62 = multiplierReg_15[5:4] * multiplierReg2_15[3:2]; // @[elegant.scala 548:94]
  wire [9:0] _GEN_216 = {_pp8_T_62, 6'h0}; // @[elegant.scala 548:117]
  reg [10:0] pp8_REG_105; // @[elegant.scala 548:73]
  reg [10:0] pp8_REG_106; // @[elegant.scala 548:65]
  reg [10:0] pp8_REG_107; // @[elegant.scala 548:57]
  reg [10:0] pp8_REG_108; // @[elegant.scala 548:49]
  reg [10:0] pp8_REG_109; // @[elegant.scala 548:41]
  reg [10:0] pp8_REG_110; // @[elegant.scala 548:33]
  reg [10:0] pp8_REG_111; // @[elegant.scala 548:25]
  wire [12:0] _dotProductRegs_15_T = pp1_15 + pp2_15; // @[elegant.scala 549:36]
  wire [12:0] _GEN_217 = {{1'd0}, pp3_15}; // @[elegant.scala 549:43]
  wire [13:0] _dotProductRegs_15_T_1 = _dotProductRegs_15_T + _GEN_217; // @[elegant.scala 549:43]
  wire [13:0] _GEN_218 = {{2'd0}, pp4_15}; // @[elegant.scala 549:50]
  wire [14:0] _dotProductRegs_15_T_2 = _dotProductRegs_15_T_1 + _GEN_218; // @[elegant.scala 549:50]
  wire [14:0] _GEN_219 = {{3'd0}, pp5_15}; // @[elegant.scala 549:57]
  wire [15:0] _dotProductRegs_15_T_3 = _dotProductRegs_15_T_2 + _GEN_219; // @[elegant.scala 549:57]
  wire [15:0] _GEN_220 = {{4'd0}, pp6_15}; // @[elegant.scala 549:64]
  wire [16:0] _dotProductRegs_15_T_4 = _dotProductRegs_15_T_3 + _GEN_220; // @[elegant.scala 549:64]
  wire [16:0] _GEN_221 = {{5'd0}, pp7_15}; // @[elegant.scala 549:71]
  wire [17:0] _dotProductRegs_15_T_5 = _dotProductRegs_15_T_4 + _GEN_221; // @[elegant.scala 549:71]
  wire [17:0] _GEN_222 = {{6'd0}, pp8_15}; // @[elegant.scala 549:78]
  wire [18:0] _dotProductRegs_15_T_6 = _dotProductRegs_15_T_5 + _GEN_222; // @[elegant.scala 549:78]
  wire [3:0] _dotProductRegs_15_T_9 = multiplierReg_15[5:4] * multiplierReg2_15[5:4]; // @[elegant.scala 549:172]
  wire [11:0] _GEN_223 = {_dotProductRegs_15_T_9, 8'h0}; // @[elegant.scala 549:195]
  reg [18:0] dotProductRegs_15_REG; // @[elegant.scala 549:151]
  reg [18:0] dotProductRegs_15_REG_1; // @[elegant.scala 549:143]
  reg [18:0] dotProductRegs_15_REG_2; // @[elegant.scala 549:135]
  reg [18:0] dotProductRegs_15_REG_3; // @[elegant.scala 549:127]
  reg [18:0] dotProductRegs_15_REG_4; // @[elegant.scala 549:119]
  reg [18:0] dotProductRegs_15_REG_5; // @[elegant.scala 549:111]
  reg [18:0] dotProductRegs_15_REG_6; // @[elegant.scala 549:103]
  reg [18:0] dotProductRegs_15_REG_7; // @[elegant.scala 549:95]
  wire [19:0] _dotProductRegs_15_T_11 = _dotProductRegs_15_T_6 + dotProductRegs_15_REG_7; // @[elegant.scala 549:85]
  wire [12:0] _two_complement_15_T_1 = {1'h0,dotProductRegs_15}; // @[elegant.scala 553:55]
  wire [12:0] _two_complement_15_T_2 = ~_two_complement_15_T_1; // @[elegant.scala 553:49]
  wire [12:0] _two_complement_15_T_4 = _two_complement_15_T_2 + 13'h1; // @[elegant.scala 553:77]
  wire [13:0] _acc_T = $signed(two_complement_buffer_0) + $signed(two_complement_buffer_1); // @[elegant.scala 581:40]
  wire [13:0] _GEN_224 = {{1{two_complement_buffer_2[12]}},two_complement_buffer_2}; // @[elegant.scala 581:40]
  wire [14:0] _acc_T_1 = $signed(_acc_T) + $signed(_GEN_224); // @[elegant.scala 581:40]
  wire [14:0] _GEN_225 = {{2{two_complement_buffer_3[12]}},two_complement_buffer_3}; // @[elegant.scala 581:40]
  wire [15:0] _acc_T_2 = $signed(_acc_T_1) + $signed(_GEN_225); // @[elegant.scala 581:40]
  wire [15:0] _GEN_226 = {{3{two_complement_buffer_4[12]}},two_complement_buffer_4}; // @[elegant.scala 581:40]
  wire [16:0] _acc_T_3 = $signed(_acc_T_2) + $signed(_GEN_226); // @[elegant.scala 581:40]
  wire [16:0] _GEN_227 = {{4{two_complement_buffer_5[12]}},two_complement_buffer_5}; // @[elegant.scala 581:40]
  wire [17:0] _acc_T_4 = $signed(_acc_T_3) + $signed(_GEN_227); // @[elegant.scala 581:40]
  wire [17:0] _GEN_228 = {{5{two_complement_buffer_6[12]}},two_complement_buffer_6}; // @[elegant.scala 581:40]
  wire [18:0] _acc_T_5 = $signed(_acc_T_4) + $signed(_GEN_228); // @[elegant.scala 581:40]
  wire [18:0] _GEN_229 = {{6{two_complement_buffer_7[12]}},two_complement_buffer_7}; // @[elegant.scala 581:40]
  wire [19:0] _acc_T_6 = $signed(_acc_T_5) + $signed(_GEN_229); // @[elegant.scala 581:40]
  wire [19:0] _GEN_230 = {{7{two_complement_buffer_8[12]}},two_complement_buffer_8}; // @[elegant.scala 581:40]
  wire [20:0] _acc_T_7 = $signed(_acc_T_6) + $signed(_GEN_230); // @[elegant.scala 581:40]
  wire [20:0] _GEN_231 = {{8{two_complement_buffer_9[12]}},two_complement_buffer_9}; // @[elegant.scala 581:40]
  wire [21:0] _acc_T_8 = $signed(_acc_T_7) + $signed(_GEN_231); // @[elegant.scala 581:40]
  wire [21:0] _GEN_232 = {{9{two_complement_buffer_10[12]}},two_complement_buffer_10}; // @[elegant.scala 581:40]
  wire [22:0] _acc_T_9 = $signed(_acc_T_8) + $signed(_GEN_232); // @[elegant.scala 581:40]
  wire [22:0] _GEN_233 = {{10{two_complement_buffer_11[12]}},two_complement_buffer_11}; // @[elegant.scala 581:40]
  wire [23:0] _acc_T_10 = $signed(_acc_T_9) + $signed(_GEN_233); // @[elegant.scala 581:40]
  wire [23:0] _GEN_234 = {{11{two_complement_buffer_12[12]}},two_complement_buffer_12}; // @[elegant.scala 581:40]
  wire [24:0] _acc_T_11 = $signed(_acc_T_10) + $signed(_GEN_234); // @[elegant.scala 581:40]
  wire [24:0] _GEN_235 = {{12{two_complement_buffer_13[12]}},two_complement_buffer_13}; // @[elegant.scala 581:40]
  wire [25:0] _acc_T_12 = $signed(_acc_T_11) + $signed(_GEN_235); // @[elegant.scala 581:40]
  wire [25:0] _GEN_236 = {{13{two_complement_buffer_14[12]}},two_complement_buffer_14}; // @[elegant.scala 581:40]
  wire [26:0] _acc_T_13 = $signed(_acc_T_12) + $signed(_GEN_236); // @[elegant.scala 581:40]
  wire [26:0] _GEN_237 = {{14{two_complement_buffer_15[12]}},two_complement_buffer_15}; // @[elegant.scala 581:40]
  wire [27:0] _acc_T_14 = $signed(_acc_T_13) + $signed(_GEN_237); // @[elegant.scala 581:40]
  wire [27:0] _acc_hbfp_T_3 = {1'h0,acc_buf[26:0]}; // @[elegant.scala 584:57]
  wire [27:0] _acc_hbfp_T_4 = ~_acc_hbfp_T_3; // @[elegant.scala 584:51]
  wire [27:0] _acc_hbfp_T_6 = _acc_hbfp_T_4 + 28'h1; // @[elegant.scala 584:89]
  reg [7:0] right_shift; // @[elegant.scala 585:28]
  reg [7:0] actual_shift; // @[elegant.scala 586:29]
  wire [15:0] _GEN_238 = {{8'd0}, acc_hbfp[21:14]}; // @[Bitwise.scala 108:31]
  wire [15:0] _buf_T_5 = _GEN_238 & 16'hff; // @[Bitwise.scala 108:31]
  wire [15:0] _buf_T_7 = {acc_hbfp[13:6], 8'h0}; // @[Bitwise.scala 108:70]
  wire [15:0] _buf_T_9 = _buf_T_7 & 16'hff00; // @[Bitwise.scala 108:80]
  wire [15:0] _buf_T_10 = _buf_T_5 | _buf_T_9; // @[Bitwise.scala 108:39]
  wire [15:0] _GEN_239 = {{4'd0}, _buf_T_10[15:4]}; // @[Bitwise.scala 108:31]
  wire [15:0] _buf_T_15 = _GEN_239 & 16'hf0f; // @[Bitwise.scala 108:31]
  wire [15:0] _buf_T_17 = {_buf_T_10[11:0], 4'h0}; // @[Bitwise.scala 108:70]
  wire [15:0] _buf_T_19 = _buf_T_17 & 16'hf0f0; // @[Bitwise.scala 108:80]
  wire [15:0] _buf_T_20 = _buf_T_15 | _buf_T_19; // @[Bitwise.scala 108:39]
  wire [15:0] _GEN_240 = {{2'd0}, _buf_T_20[15:2]}; // @[Bitwise.scala 108:31]
  wire [15:0] _buf_T_25 = _GEN_240 & 16'h3333; // @[Bitwise.scala 108:31]
  wire [15:0] _buf_T_27 = {_buf_T_20[13:0], 2'h0}; // @[Bitwise.scala 108:70]
  wire [15:0] _buf_T_29 = _buf_T_27 & 16'hcccc; // @[Bitwise.scala 108:80]
  wire [15:0] _buf_T_30 = _buf_T_25 | _buf_T_29; // @[Bitwise.scala 108:39]
  wire [15:0] _GEN_241 = {{1'd0}, _buf_T_30[15:1]}; // @[Bitwise.scala 108:31]
  wire [15:0] _buf_T_35 = _GEN_241 & 16'h5555; // @[Bitwise.scala 108:31]
  wire [15:0] _buf_T_37 = {_buf_T_30[14:0], 1'h0}; // @[Bitwise.scala 108:70]
  wire [15:0] _buf_T_39 = _buf_T_37 & 16'haaaa; // @[Bitwise.scala 108:80]
  wire [15:0] _buf_T_40 = _buf_T_35 | _buf_T_39; // @[Bitwise.scala 108:39]
  wire [21:0] buf_ = {1'h0,_buf_T_40,acc_hbfp[22],acc_hbfp[23],acc_hbfp[24],acc_hbfp[25],acc_hbfp[26]}; // @[elegant.scala 587:17]
  wire [4:0] _right_shift_T_22 = buf_[20] ? 5'h14 : 5'h15; // @[Mux.scala 47:70]
  wire [4:0] _right_shift_T_23 = buf_[19] ? 5'h13 : _right_shift_T_22; // @[Mux.scala 47:70]
  wire [4:0] _right_shift_T_24 = buf_[18] ? 5'h12 : _right_shift_T_23; // @[Mux.scala 47:70]
  wire [4:0] _right_shift_T_25 = buf_[17] ? 5'h11 : _right_shift_T_24; // @[Mux.scala 47:70]
  wire [4:0] _right_shift_T_26 = buf_[16] ? 5'h10 : _right_shift_T_25; // @[Mux.scala 47:70]
  wire [4:0] _right_shift_T_27 = buf_[15] ? 5'hf : _right_shift_T_26; // @[Mux.scala 47:70]
  wire [4:0] _right_shift_T_28 = buf_[14] ? 5'he : _right_shift_T_27; // @[Mux.scala 47:70]
  wire [4:0] _right_shift_T_29 = buf_[13] ? 5'hd : _right_shift_T_28; // @[Mux.scala 47:70]
  wire [4:0] _right_shift_T_30 = buf_[12] ? 5'hc : _right_shift_T_29; // @[Mux.scala 47:70]
  wire [4:0] _right_shift_T_31 = buf_[11] ? 5'hb : _right_shift_T_30; // @[Mux.scala 47:70]
  wire [4:0] _right_shift_T_32 = buf_[10] ? 5'ha : _right_shift_T_31; // @[Mux.scala 47:70]
  wire [4:0] _right_shift_T_33 = buf_[9] ? 5'h9 : _right_shift_T_32; // @[Mux.scala 47:70]
  wire [4:0] _right_shift_T_34 = buf_[8] ? 5'h8 : _right_shift_T_33; // @[Mux.scala 47:70]
  wire [4:0] _right_shift_T_35 = buf_[7] ? 5'h7 : _right_shift_T_34; // @[Mux.scala 47:70]
  wire [4:0] _right_shift_T_36 = buf_[6] ? 5'h6 : _right_shift_T_35; // @[Mux.scala 47:70]
  wire [4:0] _right_shift_T_37 = buf_[5] ? 5'h5 : _right_shift_T_36; // @[Mux.scala 47:70]
  wire [4:0] _right_shift_T_38 = buf_[4] ? 5'h4 : _right_shift_T_37; // @[Mux.scala 47:70]
  wire [4:0] _right_shift_T_39 = buf_[3] ? 5'h3 : _right_shift_T_38; // @[Mux.scala 47:70]
  wire [4:0] _right_shift_T_40 = buf_[2] ? 5'h2 : _right_shift_T_39; // @[Mux.scala 47:70]
  wire [4:0] _right_shift_T_41 = buf_[1] ? 5'h1 : _right_shift_T_40; // @[Mux.scala 47:70]
  wire [4:0] _right_shift_T_42 = buf_[0] ? 5'h0 : _right_shift_T_41; // @[Mux.scala 47:70]
  wire [7:0] _actual_shift_T_1 = 8'h1a - right_shift; // @[elegant.scala 591:44]
  wire [7:0] _actual_shift_T_3 = _actual_shift_T_1 - 8'h5; // @[elegant.scala 591:58]
  wire [27:0] man_out_shifted = acc_hbfp >> actual_shift; // @[elegant.scala 593:34]
  wire [8:0] _GEN_242 = {{1'd0}, actual_shift}; // @[elegant.scala 595:28]
  wire [9:0] exp_actual = exp_output + _GEN_242; // @[elegant.scala 595:28]
  wire [8:0] _io_result_T_2 = {acc[27],exp_actual[9:2]}; // @[elegant.scala 597:44]
  wire [19:0] _GEN_243 = reset ? 20'h0 : _dotProductRegs_0_T_11; // @[elegant.scala 513:{51,51} 549:29]
  wire [19:0] _GEN_244 = reset ? 20'h0 : _dotProductRegs_1_T_11; // @[elegant.scala 513:{51,51} 549:29]
  wire [19:0] _GEN_245 = reset ? 20'h0 : _dotProductRegs_2_T_11; // @[elegant.scala 513:{51,51} 549:29]
  wire [19:0] _GEN_246 = reset ? 20'h0 : _dotProductRegs_3_T_11; // @[elegant.scala 513:{51,51} 549:29]
  wire [19:0] _GEN_247 = reset ? 20'h0 : _dotProductRegs_4_T_11; // @[elegant.scala 513:{51,51} 549:29]
  wire [19:0] _GEN_248 = reset ? 20'h0 : _dotProductRegs_5_T_11; // @[elegant.scala 513:{51,51} 549:29]
  wire [19:0] _GEN_249 = reset ? 20'h0 : _dotProductRegs_6_T_11; // @[elegant.scala 513:{51,51} 549:29]
  wire [19:0] _GEN_250 = reset ? 20'h0 : _dotProductRegs_7_T_11; // @[elegant.scala 513:{51,51} 549:29]
  wire [19:0] _GEN_251 = reset ? 20'h0 : _dotProductRegs_8_T_11; // @[elegant.scala 513:{51,51} 549:29]
  wire [19:0] _GEN_252 = reset ? 20'h0 : _dotProductRegs_9_T_11; // @[elegant.scala 513:{51,51} 549:29]
  wire [19:0] _GEN_253 = reset ? 20'h0 : _dotProductRegs_10_T_11; // @[elegant.scala 513:{51,51} 549:29]
  wire [19:0] _GEN_254 = reset ? 20'h0 : _dotProductRegs_11_T_11; // @[elegant.scala 513:{51,51} 549:29]
  wire [19:0] _GEN_255 = reset ? 20'h0 : _dotProductRegs_12_T_11; // @[elegant.scala 513:{51,51} 549:29]
  wire [19:0] _GEN_256 = reset ? 20'h0 : _dotProductRegs_13_T_11; // @[elegant.scala 513:{51,51} 549:29]
  wire [19:0] _GEN_257 = reset ? 20'h0 : _dotProductRegs_14_T_11; // @[elegant.scala 513:{51,51} 549:29]
  wire [19:0] _GEN_258 = reset ? 20'h0 : _dotProductRegs_15_T_11; // @[elegant.scala 513:{51,51} 549:29]
  assign io_result = {_io_result_T_2,man_out_shifted[5:0]}; // @[elegant.scala 597:65]
  always @(posedge clock) begin
    dotProductRegs_0 <= _GEN_243[11:0]; // @[elegant.scala 513:{51,51} 549:29]
    dotProductRegs_1 <= _GEN_244[11:0]; // @[elegant.scala 513:{51,51} 549:29]
    dotProductRegs_2 <= _GEN_245[11:0]; // @[elegant.scala 513:{51,51} 549:29]
    dotProductRegs_3 <= _GEN_246[11:0]; // @[elegant.scala 513:{51,51} 549:29]
    dotProductRegs_4 <= _GEN_247[11:0]; // @[elegant.scala 513:{51,51} 549:29]
    dotProductRegs_5 <= _GEN_248[11:0]; // @[elegant.scala 513:{51,51} 549:29]
    dotProductRegs_6 <= _GEN_249[11:0]; // @[elegant.scala 513:{51,51} 549:29]
    dotProductRegs_7 <= _GEN_250[11:0]; // @[elegant.scala 513:{51,51} 549:29]
    dotProductRegs_8 <= _GEN_251[11:0]; // @[elegant.scala 513:{51,51} 549:29]
    dotProductRegs_9 <= _GEN_252[11:0]; // @[elegant.scala 513:{51,51} 549:29]
    dotProductRegs_10 <= _GEN_253[11:0]; // @[elegant.scala 513:{51,51} 549:29]
    dotProductRegs_11 <= _GEN_254[11:0]; // @[elegant.scala 513:{51,51} 549:29]
    dotProductRegs_12 <= _GEN_255[11:0]; // @[elegant.scala 513:{51,51} 549:29]
    dotProductRegs_13 <= _GEN_256[11:0]; // @[elegant.scala 513:{51,51} 549:29]
    dotProductRegs_14 <= _GEN_257[11:0]; // @[elegant.scala 513:{51,51} 549:29]
    dotProductRegs_15 <= _GEN_258[11:0]; // @[elegant.scala 513:{51,51} 549:29]
    if (reset) begin // @[elegant.scala 514:58]
      two_complement_buffer_0 <= 13'sh0; // @[elegant.scala 514:58]
    end else begin
      two_complement_buffer_0 <= two_complement_0; // @[elegant.scala 554:32]
    end
    if (reset) begin // @[elegant.scala 514:58]
      two_complement_buffer_1 <= 13'sh0; // @[elegant.scala 514:58]
    end else begin
      two_complement_buffer_1 <= two_complement_1; // @[elegant.scala 554:32]
    end
    if (reset) begin // @[elegant.scala 514:58]
      two_complement_buffer_2 <= 13'sh0; // @[elegant.scala 514:58]
    end else begin
      two_complement_buffer_2 <= two_complement_2; // @[elegant.scala 554:32]
    end
    if (reset) begin // @[elegant.scala 514:58]
      two_complement_buffer_3 <= 13'sh0; // @[elegant.scala 514:58]
    end else begin
      two_complement_buffer_3 <= two_complement_3; // @[elegant.scala 554:32]
    end
    if (reset) begin // @[elegant.scala 514:58]
      two_complement_buffer_4 <= 13'sh0; // @[elegant.scala 514:58]
    end else begin
      two_complement_buffer_4 <= two_complement_4; // @[elegant.scala 554:32]
    end
    if (reset) begin // @[elegant.scala 514:58]
      two_complement_buffer_5 <= 13'sh0; // @[elegant.scala 514:58]
    end else begin
      two_complement_buffer_5 <= two_complement_5; // @[elegant.scala 554:32]
    end
    if (reset) begin // @[elegant.scala 514:58]
      two_complement_buffer_6 <= 13'sh0; // @[elegant.scala 514:58]
    end else begin
      two_complement_buffer_6 <= two_complement_6; // @[elegant.scala 554:32]
    end
    if (reset) begin // @[elegant.scala 514:58]
      two_complement_buffer_7 <= 13'sh0; // @[elegant.scala 514:58]
    end else begin
      two_complement_buffer_7 <= two_complement_7; // @[elegant.scala 554:32]
    end
    if (reset) begin // @[elegant.scala 514:58]
      two_complement_buffer_8 <= 13'sh0; // @[elegant.scala 514:58]
    end else begin
      two_complement_buffer_8 <= two_complement_8; // @[elegant.scala 554:32]
    end
    if (reset) begin // @[elegant.scala 514:58]
      two_complement_buffer_9 <= 13'sh0; // @[elegant.scala 514:58]
    end else begin
      two_complement_buffer_9 <= two_complement_9; // @[elegant.scala 554:32]
    end
    if (reset) begin // @[elegant.scala 514:58]
      two_complement_buffer_10 <= 13'sh0; // @[elegant.scala 514:58]
    end else begin
      two_complement_buffer_10 <= two_complement_10; // @[elegant.scala 554:32]
    end
    if (reset) begin // @[elegant.scala 514:58]
      two_complement_buffer_11 <= 13'sh0; // @[elegant.scala 514:58]
    end else begin
      two_complement_buffer_11 <= two_complement_11; // @[elegant.scala 554:32]
    end
    if (reset) begin // @[elegant.scala 514:58]
      two_complement_buffer_12 <= 13'sh0; // @[elegant.scala 514:58]
    end else begin
      two_complement_buffer_12 <= two_complement_12; // @[elegant.scala 554:32]
    end
    if (reset) begin // @[elegant.scala 514:58]
      two_complement_buffer_13 <= 13'sh0; // @[elegant.scala 514:58]
    end else begin
      two_complement_buffer_13 <= two_complement_13; // @[elegant.scala 554:32]
    end
    if (reset) begin // @[elegant.scala 514:58]
      two_complement_buffer_14 <= 13'sh0; // @[elegant.scala 514:58]
    end else begin
      two_complement_buffer_14 <= two_complement_14; // @[elegant.scala 554:32]
    end
    if (reset) begin // @[elegant.scala 514:58]
      two_complement_buffer_15 <= 13'sh0; // @[elegant.scala 514:58]
    end else begin
      two_complement_buffer_15 <= two_complement_15; // @[elegant.scala 554:32]
    end
    if (reset) begin // @[elegant.scala 515:51]
      two_complement_0 <= 13'h0; // @[elegant.scala 515:51]
    end else if (signs_0) begin // @[elegant.scala 553:31]
      two_complement_0 <= _two_complement_0_T_4;
    end else begin
      two_complement_0 <= _two_complement_0_T_1;
    end
    if (reset) begin // @[elegant.scala 515:51]
      two_complement_1 <= 13'h0; // @[elegant.scala 515:51]
    end else if (signs_1) begin // @[elegant.scala 553:31]
      two_complement_1 <= _two_complement_1_T_4;
    end else begin
      two_complement_1 <= _two_complement_1_T_1;
    end
    if (reset) begin // @[elegant.scala 515:51]
      two_complement_2 <= 13'h0; // @[elegant.scala 515:51]
    end else if (signs_2) begin // @[elegant.scala 553:31]
      two_complement_2 <= _two_complement_2_T_4;
    end else begin
      two_complement_2 <= _two_complement_2_T_1;
    end
    if (reset) begin // @[elegant.scala 515:51]
      two_complement_3 <= 13'h0; // @[elegant.scala 515:51]
    end else if (signs_3) begin // @[elegant.scala 553:31]
      two_complement_3 <= _two_complement_3_T_4;
    end else begin
      two_complement_3 <= _two_complement_3_T_1;
    end
    if (reset) begin // @[elegant.scala 515:51]
      two_complement_4 <= 13'h0; // @[elegant.scala 515:51]
    end else if (signs_4) begin // @[elegant.scala 553:31]
      two_complement_4 <= _two_complement_4_T_4;
    end else begin
      two_complement_4 <= _two_complement_4_T_1;
    end
    if (reset) begin // @[elegant.scala 515:51]
      two_complement_5 <= 13'h0; // @[elegant.scala 515:51]
    end else if (signs_5) begin // @[elegant.scala 553:31]
      two_complement_5 <= _two_complement_5_T_4;
    end else begin
      two_complement_5 <= _two_complement_5_T_1;
    end
    if (reset) begin // @[elegant.scala 515:51]
      two_complement_6 <= 13'h0; // @[elegant.scala 515:51]
    end else if (signs_6) begin // @[elegant.scala 553:31]
      two_complement_6 <= _two_complement_6_T_4;
    end else begin
      two_complement_6 <= _two_complement_6_T_1;
    end
    if (reset) begin // @[elegant.scala 515:51]
      two_complement_7 <= 13'h0; // @[elegant.scala 515:51]
    end else if (signs_7) begin // @[elegant.scala 553:31]
      two_complement_7 <= _two_complement_7_T_4;
    end else begin
      two_complement_7 <= _two_complement_7_T_1;
    end
    if (reset) begin // @[elegant.scala 515:51]
      two_complement_8 <= 13'h0; // @[elegant.scala 515:51]
    end else if (signs_8) begin // @[elegant.scala 553:31]
      two_complement_8 <= _two_complement_8_T_4;
    end else begin
      two_complement_8 <= _two_complement_8_T_1;
    end
    if (reset) begin // @[elegant.scala 515:51]
      two_complement_9 <= 13'h0; // @[elegant.scala 515:51]
    end else if (signs_9) begin // @[elegant.scala 553:31]
      two_complement_9 <= _two_complement_9_T_4;
    end else begin
      two_complement_9 <= _two_complement_9_T_1;
    end
    if (reset) begin // @[elegant.scala 515:51]
      two_complement_10 <= 13'h0; // @[elegant.scala 515:51]
    end else if (signs_10) begin // @[elegant.scala 553:31]
      two_complement_10 <= _two_complement_10_T_4;
    end else begin
      two_complement_10 <= _two_complement_10_T_1;
    end
    if (reset) begin // @[elegant.scala 515:51]
      two_complement_11 <= 13'h0; // @[elegant.scala 515:51]
    end else if (signs_11) begin // @[elegant.scala 553:31]
      two_complement_11 <= _two_complement_11_T_4;
    end else begin
      two_complement_11 <= _two_complement_11_T_1;
    end
    if (reset) begin // @[elegant.scala 515:51]
      two_complement_12 <= 13'h0; // @[elegant.scala 515:51]
    end else if (signs_12) begin // @[elegant.scala 553:31]
      two_complement_12 <= _two_complement_12_T_4;
    end else begin
      two_complement_12 <= _two_complement_12_T_1;
    end
    if (reset) begin // @[elegant.scala 515:51]
      two_complement_13 <= 13'h0; // @[elegant.scala 515:51]
    end else if (signs_13) begin // @[elegant.scala 553:31]
      two_complement_13 <= _two_complement_13_T_4;
    end else begin
      two_complement_13 <= _two_complement_13_T_1;
    end
    if (reset) begin // @[elegant.scala 515:51]
      two_complement_14 <= 13'h0; // @[elegant.scala 515:51]
    end else if (signs_14) begin // @[elegant.scala 553:31]
      two_complement_14 <= _two_complement_14_T_4;
    end else begin
      two_complement_14 <= _two_complement_14_T_1;
    end
    if (reset) begin // @[elegant.scala 515:51]
      two_complement_15 <= 13'h0; // @[elegant.scala 515:51]
    end else if (signs_15) begin // @[elegant.scala 553:31]
      two_complement_15 <= _two_complement_15_T_4;
    end else begin
      two_complement_15 <= _two_complement_15_T_1;
    end
    if (reset) begin // @[elegant.scala 516:42]
      signs_0 <= 1'h0; // @[elegant.scala 516:42]
    end else begin
      signs_0 <= signReg ^ io_in_b_sign_0; // @[elegant.scala 552:16]
    end
    if (reset) begin // @[elegant.scala 516:42]
      signs_1 <= 1'h0; // @[elegant.scala 516:42]
    end else begin
      signs_1 <= signReg_1 ^ io_in_b_sign_1; // @[elegant.scala 552:16]
    end
    if (reset) begin // @[elegant.scala 516:42]
      signs_2 <= 1'h0; // @[elegant.scala 516:42]
    end else begin
      signs_2 <= signReg_2 ^ io_in_b_sign_2; // @[elegant.scala 552:16]
    end
    if (reset) begin // @[elegant.scala 516:42]
      signs_3 <= 1'h0; // @[elegant.scala 516:42]
    end else begin
      signs_3 <= signReg_3 ^ io_in_b_sign_3; // @[elegant.scala 552:16]
    end
    if (reset) begin // @[elegant.scala 516:42]
      signs_4 <= 1'h0; // @[elegant.scala 516:42]
    end else begin
      signs_4 <= signReg_4 ^ io_in_b_sign_4; // @[elegant.scala 552:16]
    end
    if (reset) begin // @[elegant.scala 516:42]
      signs_5 <= 1'h0; // @[elegant.scala 516:42]
    end else begin
      signs_5 <= signReg_5 ^ io_in_b_sign_5; // @[elegant.scala 552:16]
    end
    if (reset) begin // @[elegant.scala 516:42]
      signs_6 <= 1'h0; // @[elegant.scala 516:42]
    end else begin
      signs_6 <= signReg_6 ^ io_in_b_sign_6; // @[elegant.scala 552:16]
    end
    if (reset) begin // @[elegant.scala 516:42]
      signs_7 <= 1'h0; // @[elegant.scala 516:42]
    end else begin
      signs_7 <= signReg_7 ^ io_in_b_sign_7; // @[elegant.scala 552:16]
    end
    if (reset) begin // @[elegant.scala 516:42]
      signs_8 <= 1'h0; // @[elegant.scala 516:42]
    end else begin
      signs_8 <= signReg_8 ^ io_in_b_sign_8; // @[elegant.scala 552:16]
    end
    if (reset) begin // @[elegant.scala 516:42]
      signs_9 <= 1'h0; // @[elegant.scala 516:42]
    end else begin
      signs_9 <= signReg_9 ^ io_in_b_sign_9; // @[elegant.scala 552:16]
    end
    if (reset) begin // @[elegant.scala 516:42]
      signs_10 <= 1'h0; // @[elegant.scala 516:42]
    end else begin
      signs_10 <= signReg_10 ^ io_in_b_sign_10; // @[elegant.scala 552:16]
    end
    if (reset) begin // @[elegant.scala 516:42]
      signs_11 <= 1'h0; // @[elegant.scala 516:42]
    end else begin
      signs_11 <= signReg_11 ^ io_in_b_sign_11; // @[elegant.scala 552:16]
    end
    if (reset) begin // @[elegant.scala 516:42]
      signs_12 <= 1'h0; // @[elegant.scala 516:42]
    end else begin
      signs_12 <= signReg_12 ^ io_in_b_sign_12; // @[elegant.scala 552:16]
    end
    if (reset) begin // @[elegant.scala 516:42]
      signs_13 <= 1'h0; // @[elegant.scala 516:42]
    end else begin
      signs_13 <= signReg_13 ^ io_in_b_sign_13; // @[elegant.scala 552:16]
    end
    if (reset) begin // @[elegant.scala 516:42]
      signs_14 <= 1'h0; // @[elegant.scala 516:42]
    end else begin
      signs_14 <= signReg_14 ^ io_in_b_sign_14; // @[elegant.scala 552:16]
    end
    if (reset) begin // @[elegant.scala 516:42]
      signs_15 <= 1'h0; // @[elegant.scala 516:42]
    end else begin
      signs_15 <= signReg_15 ^ io_in_b_sign_15; // @[elegant.scala 552:16]
    end
    if (reset) begin // @[elegant.scala 517:20]
      acc <= 28'sh0; // @[elegant.scala 517:20]
    end else begin
      acc <= _acc_T_14; // @[elegant.scala 581:7]
    end
    if (reset) begin // @[elegant.scala 518:25]
      acc_hbfp <= 28'h0; // @[elegant.scala 518:25]
    end else if (acc_buf[27]) begin // @[elegant.scala 584:18]
      acc_hbfp <= _acc_hbfp_T_6;
    end else begin
      acc_hbfp <= acc_buf;
    end
    if (reset) begin // @[elegant.scala 519:24]
      acc_buf <= 28'h0; // @[elegant.scala 519:24]
    end else begin
      acc_buf <= acc; // @[elegant.scala 582:11]
    end
    if (reset) begin // @[elegant.scala 524:34]
      multiplierReg <= 6'h0; // @[elegant.scala 524:34]
    end else begin
      multiplierReg <= io_in_a_man_0; // @[elegant.scala 538:21]
    end
    if (reset) begin // @[elegant.scala 525:35]
      multiplierReg2 <= 6'h0; // @[elegant.scala 525:35]
    end else begin
      multiplierReg2 <= io_in_b_man_0; // @[elegant.scala 539:22]
    end
    if (reset) begin // @[elegant.scala 527:28]
      signReg <= 1'h0; // @[elegant.scala 527:28]
    end else begin
      signReg <= io_in_a_sign_0; // @[elegant.scala 537:15]
    end
    if (reset) begin // @[elegant.scala 528:24]
      pp1 <= 12'h0; // @[elegant.scala 528:24]
    end else begin
      pp1 <= {{8'd0}, _pp1_T_2}; // @[elegant.scala 541:15]
    end
    if (reset) begin // @[elegant.scala 529:24]
      pp2 <= 12'h0; // @[elegant.scala 529:24]
    end else begin
      pp2 <= {{5'd0}, pp2_REG}; // @[elegant.scala 542:15]
    end
    if (reset) begin // @[elegant.scala 530:24]
      pp3 <= 12'h0; // @[elegant.scala 530:24]
    end else begin
      pp3 <= {{1'd0}, pp3_REG_1}; // @[elegant.scala 543:15]
    end
    if (reset) begin // @[elegant.scala 531:24]
      pp4 <= 12'h0; // @[elegant.scala 531:24]
    end else begin
      pp4 <= {{5'd0}, pp4_REG_2}; // @[elegant.scala 544:15]
    end
    if (reset) begin // @[elegant.scala 532:24]
      pp5 <= 12'h0; // @[elegant.scala 532:24]
    end else begin
      pp5 <= {{1'd0}, pp5_REG_3}; // @[elegant.scala 545:15]
    end
    if (reset) begin // @[elegant.scala 533:24]
      pp6 <= 12'h0; // @[elegant.scala 533:24]
    end else begin
      pp6 <= {{1'd0}, pp6_REG_4}; // @[elegant.scala 546:15]
    end
    if (reset) begin // @[elegant.scala 534:24]
      pp7 <= 12'h0; // @[elegant.scala 534:24]
    end else begin
      pp7 <= {{1'd0}, pp7_REG_5}; // @[elegant.scala 547:15]
    end
    if (reset) begin // @[elegant.scala 535:24]
      pp8 <= 12'h0; // @[elegant.scala 535:24]
    end else begin
      pp8 <= {{1'd0}, pp8_REG_6}; // @[elegant.scala 548:15]
    end
    pp2_REG <= {{1'd0}, _GEN_0}; // @[elegant.scala 542:69]
    pp3_REG <= {{3'd0}, _GEN_1}; // @[elegant.scala 543:77]
    pp3_REG_1 <= pp3_REG; // @[elegant.scala 543:25]
    pp4_REG <= {{1'd0}, _GEN_2}; // @[elegant.scala 544:85]
    pp4_REG_1 <= pp4_REG; // @[elegant.scala 544:33]
    pp4_REG_2 <= pp4_REG_1; // @[elegant.scala 544:25]
    pp5_REG <= {{3'd0}, _GEN_3}; // @[elegant.scala 545:93]
    pp5_REG_1 <= pp5_REG; // @[elegant.scala 545:41]
    pp5_REG_2 <= pp5_REG_1; // @[elegant.scala 545:33]
    pp5_REG_3 <= pp5_REG_2; // @[elegant.scala 545:25]
    pp6_REG <= {{1'd0}, _GEN_4}; // @[elegant.scala 546:101]
    pp6_REG_1 <= pp6_REG; // @[elegant.scala 546:49]
    pp6_REG_2 <= pp6_REG_1; // @[elegant.scala 546:41]
    pp6_REG_3 <= pp6_REG_2; // @[elegant.scala 546:33]
    pp6_REG_4 <= pp6_REG_3; // @[elegant.scala 546:25]
    pp7_REG <= {{3'd0}, _GEN_5}; // @[elegant.scala 547:109]
    pp7_REG_1 <= pp7_REG; // @[elegant.scala 547:57]
    pp7_REG_2 <= pp7_REG_1; // @[elegant.scala 547:49]
    pp7_REG_3 <= pp7_REG_2; // @[elegant.scala 547:41]
    pp7_REG_4 <= pp7_REG_3; // @[elegant.scala 547:33]
    pp7_REG_5 <= pp7_REG_4; // @[elegant.scala 547:25]
    pp8_REG <= {{1'd0}, _GEN_6}; // @[elegant.scala 548:117]
    pp8_REG_1 <= pp8_REG; // @[elegant.scala 548:65]
    pp8_REG_2 <= pp8_REG_1; // @[elegant.scala 548:57]
    pp8_REG_3 <= pp8_REG_2; // @[elegant.scala 548:49]
    pp8_REG_4 <= pp8_REG_3; // @[elegant.scala 548:41]
    pp8_REG_5 <= pp8_REG_4; // @[elegant.scala 548:33]
    pp8_REG_6 <= pp8_REG_5; // @[elegant.scala 548:25]
    dotProductRegs_0_REG <= {{7'd0}, _GEN_13}; // @[elegant.scala 549:195]
    dotProductRegs_0_REG_1 <= dotProductRegs_0_REG; // @[elegant.scala 549:143]
    dotProductRegs_0_REG_2 <= dotProductRegs_0_REG_1; // @[elegant.scala 549:135]
    dotProductRegs_0_REG_3 <= dotProductRegs_0_REG_2; // @[elegant.scala 549:127]
    dotProductRegs_0_REG_4 <= dotProductRegs_0_REG_3; // @[elegant.scala 549:119]
    dotProductRegs_0_REG_5 <= dotProductRegs_0_REG_4; // @[elegant.scala 549:111]
    dotProductRegs_0_REG_6 <= dotProductRegs_0_REG_5; // @[elegant.scala 549:103]
    dotProductRegs_0_REG_7 <= dotProductRegs_0_REG_6; // @[elegant.scala 549:95]
    if (reset) begin // @[elegant.scala 524:34]
      multiplierReg_1 <= 6'h0; // @[elegant.scala 524:34]
    end else begin
      multiplierReg_1 <= io_in_a_man_1; // @[elegant.scala 538:21]
    end
    if (reset) begin // @[elegant.scala 525:35]
      multiplierReg2_1 <= 6'h0; // @[elegant.scala 525:35]
    end else begin
      multiplierReg2_1 <= io_in_b_man_1; // @[elegant.scala 539:22]
    end
    if (reset) begin // @[elegant.scala 527:28]
      signReg_1 <= 1'h0; // @[elegant.scala 527:28]
    end else begin
      signReg_1 <= io_in_a_sign_1; // @[elegant.scala 537:15]
    end
    if (reset) begin // @[elegant.scala 528:24]
      pp1_1 <= 12'h0; // @[elegant.scala 528:24]
    end else begin
      pp1_1 <= {{8'd0}, _pp1_T_5}; // @[elegant.scala 541:15]
    end
    if (reset) begin // @[elegant.scala 529:24]
      pp2_1 <= 12'h0; // @[elegant.scala 529:24]
    end else begin
      pp2_1 <= {{5'd0}, pp2_REG_1}; // @[elegant.scala 542:15]
    end
    if (reset) begin // @[elegant.scala 530:24]
      pp3_1 <= 12'h0; // @[elegant.scala 530:24]
    end else begin
      pp3_1 <= {{1'd0}, pp3_REG_3}; // @[elegant.scala 543:15]
    end
    if (reset) begin // @[elegant.scala 531:24]
      pp4_1 <= 12'h0; // @[elegant.scala 531:24]
    end else begin
      pp4_1 <= {{5'd0}, pp4_REG_5}; // @[elegant.scala 544:15]
    end
    if (reset) begin // @[elegant.scala 532:24]
      pp5_1 <= 12'h0; // @[elegant.scala 532:24]
    end else begin
      pp5_1 <= {{1'd0}, pp5_REG_7}; // @[elegant.scala 545:15]
    end
    if (reset) begin // @[elegant.scala 533:24]
      pp6_1 <= 12'h0; // @[elegant.scala 533:24]
    end else begin
      pp6_1 <= {{1'd0}, pp6_REG_9}; // @[elegant.scala 546:15]
    end
    if (reset) begin // @[elegant.scala 534:24]
      pp7_1 <= 12'h0; // @[elegant.scala 534:24]
    end else begin
      pp7_1 <= {{1'd0}, pp7_REG_11}; // @[elegant.scala 547:15]
    end
    if (reset) begin // @[elegant.scala 535:24]
      pp8_1 <= 12'h0; // @[elegant.scala 535:24]
    end else begin
      pp8_1 <= {{1'd0}, pp8_REG_13}; // @[elegant.scala 548:15]
    end
    pp2_REG_1 <= {{1'd0}, _GEN_14}; // @[elegant.scala 542:69]
    pp3_REG_2 <= {{3'd0}, _GEN_15}; // @[elegant.scala 543:77]
    pp3_REG_3 <= pp3_REG_2; // @[elegant.scala 543:25]
    pp4_REG_3 <= {{1'd0}, _GEN_16}; // @[elegant.scala 544:85]
    pp4_REG_4 <= pp4_REG_3; // @[elegant.scala 544:33]
    pp4_REG_5 <= pp4_REG_4; // @[elegant.scala 544:25]
    pp5_REG_4 <= {{3'd0}, _GEN_17}; // @[elegant.scala 545:93]
    pp5_REG_5 <= pp5_REG_4; // @[elegant.scala 545:41]
    pp5_REG_6 <= pp5_REG_5; // @[elegant.scala 545:33]
    pp5_REG_7 <= pp5_REG_6; // @[elegant.scala 545:25]
    pp6_REG_5 <= {{1'd0}, _GEN_18}; // @[elegant.scala 546:101]
    pp6_REG_6 <= pp6_REG_5; // @[elegant.scala 546:49]
    pp6_REG_7 <= pp6_REG_6; // @[elegant.scala 546:41]
    pp6_REG_8 <= pp6_REG_7; // @[elegant.scala 546:33]
    pp6_REG_9 <= pp6_REG_8; // @[elegant.scala 546:25]
    pp7_REG_6 <= {{3'd0}, _GEN_19}; // @[elegant.scala 547:109]
    pp7_REG_7 <= pp7_REG_6; // @[elegant.scala 547:57]
    pp7_REG_8 <= pp7_REG_7; // @[elegant.scala 547:49]
    pp7_REG_9 <= pp7_REG_8; // @[elegant.scala 547:41]
    pp7_REG_10 <= pp7_REG_9; // @[elegant.scala 547:33]
    pp7_REG_11 <= pp7_REG_10; // @[elegant.scala 547:25]
    pp8_REG_7 <= {{1'd0}, _GEN_20}; // @[elegant.scala 548:117]
    pp8_REG_8 <= pp8_REG_7; // @[elegant.scala 548:65]
    pp8_REG_9 <= pp8_REG_8; // @[elegant.scala 548:57]
    pp8_REG_10 <= pp8_REG_9; // @[elegant.scala 548:49]
    pp8_REG_11 <= pp8_REG_10; // @[elegant.scala 548:41]
    pp8_REG_12 <= pp8_REG_11; // @[elegant.scala 548:33]
    pp8_REG_13 <= pp8_REG_12; // @[elegant.scala 548:25]
    dotProductRegs_1_REG <= {{7'd0}, _GEN_27}; // @[elegant.scala 549:195]
    dotProductRegs_1_REG_1 <= dotProductRegs_1_REG; // @[elegant.scala 549:143]
    dotProductRegs_1_REG_2 <= dotProductRegs_1_REG_1; // @[elegant.scala 549:135]
    dotProductRegs_1_REG_3 <= dotProductRegs_1_REG_2; // @[elegant.scala 549:127]
    dotProductRegs_1_REG_4 <= dotProductRegs_1_REG_3; // @[elegant.scala 549:119]
    dotProductRegs_1_REG_5 <= dotProductRegs_1_REG_4; // @[elegant.scala 549:111]
    dotProductRegs_1_REG_6 <= dotProductRegs_1_REG_5; // @[elegant.scala 549:103]
    dotProductRegs_1_REG_7 <= dotProductRegs_1_REG_6; // @[elegant.scala 549:95]
    if (reset) begin // @[elegant.scala 524:34]
      multiplierReg_2 <= 6'h0; // @[elegant.scala 524:34]
    end else begin
      multiplierReg_2 <= io_in_a_man_2; // @[elegant.scala 538:21]
    end
    if (reset) begin // @[elegant.scala 525:35]
      multiplierReg2_2 <= 6'h0; // @[elegant.scala 525:35]
    end else begin
      multiplierReg2_2 <= io_in_b_man_2; // @[elegant.scala 539:22]
    end
    if (reset) begin // @[elegant.scala 527:28]
      signReg_2 <= 1'h0; // @[elegant.scala 527:28]
    end else begin
      signReg_2 <= io_in_a_sign_2; // @[elegant.scala 537:15]
    end
    if (reset) begin // @[elegant.scala 528:24]
      pp1_2 <= 12'h0; // @[elegant.scala 528:24]
    end else begin
      pp1_2 <= {{8'd0}, _pp1_T_8}; // @[elegant.scala 541:15]
    end
    if (reset) begin // @[elegant.scala 529:24]
      pp2_2 <= 12'h0; // @[elegant.scala 529:24]
    end else begin
      pp2_2 <= {{5'd0}, pp2_REG_2}; // @[elegant.scala 542:15]
    end
    if (reset) begin // @[elegant.scala 530:24]
      pp3_2 <= 12'h0; // @[elegant.scala 530:24]
    end else begin
      pp3_2 <= {{1'd0}, pp3_REG_5}; // @[elegant.scala 543:15]
    end
    if (reset) begin // @[elegant.scala 531:24]
      pp4_2 <= 12'h0; // @[elegant.scala 531:24]
    end else begin
      pp4_2 <= {{5'd0}, pp4_REG_8}; // @[elegant.scala 544:15]
    end
    if (reset) begin // @[elegant.scala 532:24]
      pp5_2 <= 12'h0; // @[elegant.scala 532:24]
    end else begin
      pp5_2 <= {{1'd0}, pp5_REG_11}; // @[elegant.scala 545:15]
    end
    if (reset) begin // @[elegant.scala 533:24]
      pp6_2 <= 12'h0; // @[elegant.scala 533:24]
    end else begin
      pp6_2 <= {{1'd0}, pp6_REG_14}; // @[elegant.scala 546:15]
    end
    if (reset) begin // @[elegant.scala 534:24]
      pp7_2 <= 12'h0; // @[elegant.scala 534:24]
    end else begin
      pp7_2 <= {{1'd0}, pp7_REG_17}; // @[elegant.scala 547:15]
    end
    if (reset) begin // @[elegant.scala 535:24]
      pp8_2 <= 12'h0; // @[elegant.scala 535:24]
    end else begin
      pp8_2 <= {{1'd0}, pp8_REG_20}; // @[elegant.scala 548:15]
    end
    pp2_REG_2 <= {{1'd0}, _GEN_28}; // @[elegant.scala 542:69]
    pp3_REG_4 <= {{3'd0}, _GEN_29}; // @[elegant.scala 543:77]
    pp3_REG_5 <= pp3_REG_4; // @[elegant.scala 543:25]
    pp4_REG_6 <= {{1'd0}, _GEN_30}; // @[elegant.scala 544:85]
    pp4_REG_7 <= pp4_REG_6; // @[elegant.scala 544:33]
    pp4_REG_8 <= pp4_REG_7; // @[elegant.scala 544:25]
    pp5_REG_8 <= {{3'd0}, _GEN_31}; // @[elegant.scala 545:93]
    pp5_REG_9 <= pp5_REG_8; // @[elegant.scala 545:41]
    pp5_REG_10 <= pp5_REG_9; // @[elegant.scala 545:33]
    pp5_REG_11 <= pp5_REG_10; // @[elegant.scala 545:25]
    pp6_REG_10 <= {{1'd0}, _GEN_32}; // @[elegant.scala 546:101]
    pp6_REG_11 <= pp6_REG_10; // @[elegant.scala 546:49]
    pp6_REG_12 <= pp6_REG_11; // @[elegant.scala 546:41]
    pp6_REG_13 <= pp6_REG_12; // @[elegant.scala 546:33]
    pp6_REG_14 <= pp6_REG_13; // @[elegant.scala 546:25]
    pp7_REG_12 <= {{3'd0}, _GEN_33}; // @[elegant.scala 547:109]
    pp7_REG_13 <= pp7_REG_12; // @[elegant.scala 547:57]
    pp7_REG_14 <= pp7_REG_13; // @[elegant.scala 547:49]
    pp7_REG_15 <= pp7_REG_14; // @[elegant.scala 547:41]
    pp7_REG_16 <= pp7_REG_15; // @[elegant.scala 547:33]
    pp7_REG_17 <= pp7_REG_16; // @[elegant.scala 547:25]
    pp8_REG_14 <= {{1'd0}, _GEN_34}; // @[elegant.scala 548:117]
    pp8_REG_15 <= pp8_REG_14; // @[elegant.scala 548:65]
    pp8_REG_16 <= pp8_REG_15; // @[elegant.scala 548:57]
    pp8_REG_17 <= pp8_REG_16; // @[elegant.scala 548:49]
    pp8_REG_18 <= pp8_REG_17; // @[elegant.scala 548:41]
    pp8_REG_19 <= pp8_REG_18; // @[elegant.scala 548:33]
    pp8_REG_20 <= pp8_REG_19; // @[elegant.scala 548:25]
    dotProductRegs_2_REG <= {{7'd0}, _GEN_41}; // @[elegant.scala 549:195]
    dotProductRegs_2_REG_1 <= dotProductRegs_2_REG; // @[elegant.scala 549:143]
    dotProductRegs_2_REG_2 <= dotProductRegs_2_REG_1; // @[elegant.scala 549:135]
    dotProductRegs_2_REG_3 <= dotProductRegs_2_REG_2; // @[elegant.scala 549:127]
    dotProductRegs_2_REG_4 <= dotProductRegs_2_REG_3; // @[elegant.scala 549:119]
    dotProductRegs_2_REG_5 <= dotProductRegs_2_REG_4; // @[elegant.scala 549:111]
    dotProductRegs_2_REG_6 <= dotProductRegs_2_REG_5; // @[elegant.scala 549:103]
    dotProductRegs_2_REG_7 <= dotProductRegs_2_REG_6; // @[elegant.scala 549:95]
    if (reset) begin // @[elegant.scala 524:34]
      multiplierReg_3 <= 6'h0; // @[elegant.scala 524:34]
    end else begin
      multiplierReg_3 <= io_in_a_man_3; // @[elegant.scala 538:21]
    end
    if (reset) begin // @[elegant.scala 525:35]
      multiplierReg2_3 <= 6'h0; // @[elegant.scala 525:35]
    end else begin
      multiplierReg2_3 <= io_in_b_man_3; // @[elegant.scala 539:22]
    end
    if (reset) begin // @[elegant.scala 527:28]
      signReg_3 <= 1'h0; // @[elegant.scala 527:28]
    end else begin
      signReg_3 <= io_in_a_sign_3; // @[elegant.scala 537:15]
    end
    if (reset) begin // @[elegant.scala 528:24]
      pp1_3 <= 12'h0; // @[elegant.scala 528:24]
    end else begin
      pp1_3 <= {{8'd0}, _pp1_T_11}; // @[elegant.scala 541:15]
    end
    if (reset) begin // @[elegant.scala 529:24]
      pp2_3 <= 12'h0; // @[elegant.scala 529:24]
    end else begin
      pp2_3 <= {{5'd0}, pp2_REG_3}; // @[elegant.scala 542:15]
    end
    if (reset) begin // @[elegant.scala 530:24]
      pp3_3 <= 12'h0; // @[elegant.scala 530:24]
    end else begin
      pp3_3 <= {{1'd0}, pp3_REG_7}; // @[elegant.scala 543:15]
    end
    if (reset) begin // @[elegant.scala 531:24]
      pp4_3 <= 12'h0; // @[elegant.scala 531:24]
    end else begin
      pp4_3 <= {{5'd0}, pp4_REG_11}; // @[elegant.scala 544:15]
    end
    if (reset) begin // @[elegant.scala 532:24]
      pp5_3 <= 12'h0; // @[elegant.scala 532:24]
    end else begin
      pp5_3 <= {{1'd0}, pp5_REG_15}; // @[elegant.scala 545:15]
    end
    if (reset) begin // @[elegant.scala 533:24]
      pp6_3 <= 12'h0; // @[elegant.scala 533:24]
    end else begin
      pp6_3 <= {{1'd0}, pp6_REG_19}; // @[elegant.scala 546:15]
    end
    if (reset) begin // @[elegant.scala 534:24]
      pp7_3 <= 12'h0; // @[elegant.scala 534:24]
    end else begin
      pp7_3 <= {{1'd0}, pp7_REG_23}; // @[elegant.scala 547:15]
    end
    if (reset) begin // @[elegant.scala 535:24]
      pp8_3 <= 12'h0; // @[elegant.scala 535:24]
    end else begin
      pp8_3 <= {{1'd0}, pp8_REG_27}; // @[elegant.scala 548:15]
    end
    pp2_REG_3 <= {{1'd0}, _GEN_42}; // @[elegant.scala 542:69]
    pp3_REG_6 <= {{3'd0}, _GEN_43}; // @[elegant.scala 543:77]
    pp3_REG_7 <= pp3_REG_6; // @[elegant.scala 543:25]
    pp4_REG_9 <= {{1'd0}, _GEN_44}; // @[elegant.scala 544:85]
    pp4_REG_10 <= pp4_REG_9; // @[elegant.scala 544:33]
    pp4_REG_11 <= pp4_REG_10; // @[elegant.scala 544:25]
    pp5_REG_12 <= {{3'd0}, _GEN_45}; // @[elegant.scala 545:93]
    pp5_REG_13 <= pp5_REG_12; // @[elegant.scala 545:41]
    pp5_REG_14 <= pp5_REG_13; // @[elegant.scala 545:33]
    pp5_REG_15 <= pp5_REG_14; // @[elegant.scala 545:25]
    pp6_REG_15 <= {{1'd0}, _GEN_46}; // @[elegant.scala 546:101]
    pp6_REG_16 <= pp6_REG_15; // @[elegant.scala 546:49]
    pp6_REG_17 <= pp6_REG_16; // @[elegant.scala 546:41]
    pp6_REG_18 <= pp6_REG_17; // @[elegant.scala 546:33]
    pp6_REG_19 <= pp6_REG_18; // @[elegant.scala 546:25]
    pp7_REG_18 <= {{3'd0}, _GEN_47}; // @[elegant.scala 547:109]
    pp7_REG_19 <= pp7_REG_18; // @[elegant.scala 547:57]
    pp7_REG_20 <= pp7_REG_19; // @[elegant.scala 547:49]
    pp7_REG_21 <= pp7_REG_20; // @[elegant.scala 547:41]
    pp7_REG_22 <= pp7_REG_21; // @[elegant.scala 547:33]
    pp7_REG_23 <= pp7_REG_22; // @[elegant.scala 547:25]
    pp8_REG_21 <= {{1'd0}, _GEN_48}; // @[elegant.scala 548:117]
    pp8_REG_22 <= pp8_REG_21; // @[elegant.scala 548:65]
    pp8_REG_23 <= pp8_REG_22; // @[elegant.scala 548:57]
    pp8_REG_24 <= pp8_REG_23; // @[elegant.scala 548:49]
    pp8_REG_25 <= pp8_REG_24; // @[elegant.scala 548:41]
    pp8_REG_26 <= pp8_REG_25; // @[elegant.scala 548:33]
    pp8_REG_27 <= pp8_REG_26; // @[elegant.scala 548:25]
    dotProductRegs_3_REG <= {{7'd0}, _GEN_55}; // @[elegant.scala 549:195]
    dotProductRegs_3_REG_1 <= dotProductRegs_3_REG; // @[elegant.scala 549:143]
    dotProductRegs_3_REG_2 <= dotProductRegs_3_REG_1; // @[elegant.scala 549:135]
    dotProductRegs_3_REG_3 <= dotProductRegs_3_REG_2; // @[elegant.scala 549:127]
    dotProductRegs_3_REG_4 <= dotProductRegs_3_REG_3; // @[elegant.scala 549:119]
    dotProductRegs_3_REG_5 <= dotProductRegs_3_REG_4; // @[elegant.scala 549:111]
    dotProductRegs_3_REG_6 <= dotProductRegs_3_REG_5; // @[elegant.scala 549:103]
    dotProductRegs_3_REG_7 <= dotProductRegs_3_REG_6; // @[elegant.scala 549:95]
    if (reset) begin // @[elegant.scala 524:34]
      multiplierReg_4 <= 6'h0; // @[elegant.scala 524:34]
    end else begin
      multiplierReg_4 <= io_in_a_man_4; // @[elegant.scala 538:21]
    end
    if (reset) begin // @[elegant.scala 525:35]
      multiplierReg2_4 <= 6'h0; // @[elegant.scala 525:35]
    end else begin
      multiplierReg2_4 <= io_in_b_man_4; // @[elegant.scala 539:22]
    end
    if (reset) begin // @[elegant.scala 527:28]
      signReg_4 <= 1'h0; // @[elegant.scala 527:28]
    end else begin
      signReg_4 <= io_in_a_sign_4; // @[elegant.scala 537:15]
    end
    if (reset) begin // @[elegant.scala 528:24]
      pp1_4 <= 12'h0; // @[elegant.scala 528:24]
    end else begin
      pp1_4 <= {{8'd0}, _pp1_T_14}; // @[elegant.scala 541:15]
    end
    if (reset) begin // @[elegant.scala 529:24]
      pp2_4 <= 12'h0; // @[elegant.scala 529:24]
    end else begin
      pp2_4 <= {{5'd0}, pp2_REG_4}; // @[elegant.scala 542:15]
    end
    if (reset) begin // @[elegant.scala 530:24]
      pp3_4 <= 12'h0; // @[elegant.scala 530:24]
    end else begin
      pp3_4 <= {{1'd0}, pp3_REG_9}; // @[elegant.scala 543:15]
    end
    if (reset) begin // @[elegant.scala 531:24]
      pp4_4 <= 12'h0; // @[elegant.scala 531:24]
    end else begin
      pp4_4 <= {{5'd0}, pp4_REG_14}; // @[elegant.scala 544:15]
    end
    if (reset) begin // @[elegant.scala 532:24]
      pp5_4 <= 12'h0; // @[elegant.scala 532:24]
    end else begin
      pp5_4 <= {{1'd0}, pp5_REG_19}; // @[elegant.scala 545:15]
    end
    if (reset) begin // @[elegant.scala 533:24]
      pp6_4 <= 12'h0; // @[elegant.scala 533:24]
    end else begin
      pp6_4 <= {{1'd0}, pp6_REG_24}; // @[elegant.scala 546:15]
    end
    if (reset) begin // @[elegant.scala 534:24]
      pp7_4 <= 12'h0; // @[elegant.scala 534:24]
    end else begin
      pp7_4 <= {{1'd0}, pp7_REG_29}; // @[elegant.scala 547:15]
    end
    if (reset) begin // @[elegant.scala 535:24]
      pp8_4 <= 12'h0; // @[elegant.scala 535:24]
    end else begin
      pp8_4 <= {{1'd0}, pp8_REG_34}; // @[elegant.scala 548:15]
    end
    pp2_REG_4 <= {{1'd0}, _GEN_56}; // @[elegant.scala 542:69]
    pp3_REG_8 <= {{3'd0}, _GEN_57}; // @[elegant.scala 543:77]
    pp3_REG_9 <= pp3_REG_8; // @[elegant.scala 543:25]
    pp4_REG_12 <= {{1'd0}, _GEN_58}; // @[elegant.scala 544:85]
    pp4_REG_13 <= pp4_REG_12; // @[elegant.scala 544:33]
    pp4_REG_14 <= pp4_REG_13; // @[elegant.scala 544:25]
    pp5_REG_16 <= {{3'd0}, _GEN_59}; // @[elegant.scala 545:93]
    pp5_REG_17 <= pp5_REG_16; // @[elegant.scala 545:41]
    pp5_REG_18 <= pp5_REG_17; // @[elegant.scala 545:33]
    pp5_REG_19 <= pp5_REG_18; // @[elegant.scala 545:25]
    pp6_REG_20 <= {{1'd0}, _GEN_60}; // @[elegant.scala 546:101]
    pp6_REG_21 <= pp6_REG_20; // @[elegant.scala 546:49]
    pp6_REG_22 <= pp6_REG_21; // @[elegant.scala 546:41]
    pp6_REG_23 <= pp6_REG_22; // @[elegant.scala 546:33]
    pp6_REG_24 <= pp6_REG_23; // @[elegant.scala 546:25]
    pp7_REG_24 <= {{3'd0}, _GEN_61}; // @[elegant.scala 547:109]
    pp7_REG_25 <= pp7_REG_24; // @[elegant.scala 547:57]
    pp7_REG_26 <= pp7_REG_25; // @[elegant.scala 547:49]
    pp7_REG_27 <= pp7_REG_26; // @[elegant.scala 547:41]
    pp7_REG_28 <= pp7_REG_27; // @[elegant.scala 547:33]
    pp7_REG_29 <= pp7_REG_28; // @[elegant.scala 547:25]
    pp8_REG_28 <= {{1'd0}, _GEN_62}; // @[elegant.scala 548:117]
    pp8_REG_29 <= pp8_REG_28; // @[elegant.scala 548:65]
    pp8_REG_30 <= pp8_REG_29; // @[elegant.scala 548:57]
    pp8_REG_31 <= pp8_REG_30; // @[elegant.scala 548:49]
    pp8_REG_32 <= pp8_REG_31; // @[elegant.scala 548:41]
    pp8_REG_33 <= pp8_REG_32; // @[elegant.scala 548:33]
    pp8_REG_34 <= pp8_REG_33; // @[elegant.scala 548:25]
    dotProductRegs_4_REG <= {{7'd0}, _GEN_69}; // @[elegant.scala 549:195]
    dotProductRegs_4_REG_1 <= dotProductRegs_4_REG; // @[elegant.scala 549:143]
    dotProductRegs_4_REG_2 <= dotProductRegs_4_REG_1; // @[elegant.scala 549:135]
    dotProductRegs_4_REG_3 <= dotProductRegs_4_REG_2; // @[elegant.scala 549:127]
    dotProductRegs_4_REG_4 <= dotProductRegs_4_REG_3; // @[elegant.scala 549:119]
    dotProductRegs_4_REG_5 <= dotProductRegs_4_REG_4; // @[elegant.scala 549:111]
    dotProductRegs_4_REG_6 <= dotProductRegs_4_REG_5; // @[elegant.scala 549:103]
    dotProductRegs_4_REG_7 <= dotProductRegs_4_REG_6; // @[elegant.scala 549:95]
    if (reset) begin // @[elegant.scala 524:34]
      multiplierReg_5 <= 6'h0; // @[elegant.scala 524:34]
    end else begin
      multiplierReg_5 <= io_in_a_man_5; // @[elegant.scala 538:21]
    end
    if (reset) begin // @[elegant.scala 525:35]
      multiplierReg2_5 <= 6'h0; // @[elegant.scala 525:35]
    end else begin
      multiplierReg2_5 <= io_in_b_man_5; // @[elegant.scala 539:22]
    end
    if (reset) begin // @[elegant.scala 527:28]
      signReg_5 <= 1'h0; // @[elegant.scala 527:28]
    end else begin
      signReg_5 <= io_in_a_sign_5; // @[elegant.scala 537:15]
    end
    if (reset) begin // @[elegant.scala 528:24]
      pp1_5 <= 12'h0; // @[elegant.scala 528:24]
    end else begin
      pp1_5 <= {{8'd0}, _pp1_T_17}; // @[elegant.scala 541:15]
    end
    if (reset) begin // @[elegant.scala 529:24]
      pp2_5 <= 12'h0; // @[elegant.scala 529:24]
    end else begin
      pp2_5 <= {{5'd0}, pp2_REG_5}; // @[elegant.scala 542:15]
    end
    if (reset) begin // @[elegant.scala 530:24]
      pp3_5 <= 12'h0; // @[elegant.scala 530:24]
    end else begin
      pp3_5 <= {{1'd0}, pp3_REG_11}; // @[elegant.scala 543:15]
    end
    if (reset) begin // @[elegant.scala 531:24]
      pp4_5 <= 12'h0; // @[elegant.scala 531:24]
    end else begin
      pp4_5 <= {{5'd0}, pp4_REG_17}; // @[elegant.scala 544:15]
    end
    if (reset) begin // @[elegant.scala 532:24]
      pp5_5 <= 12'h0; // @[elegant.scala 532:24]
    end else begin
      pp5_5 <= {{1'd0}, pp5_REG_23}; // @[elegant.scala 545:15]
    end
    if (reset) begin // @[elegant.scala 533:24]
      pp6_5 <= 12'h0; // @[elegant.scala 533:24]
    end else begin
      pp6_5 <= {{1'd0}, pp6_REG_29}; // @[elegant.scala 546:15]
    end
    if (reset) begin // @[elegant.scala 534:24]
      pp7_5 <= 12'h0; // @[elegant.scala 534:24]
    end else begin
      pp7_5 <= {{1'd0}, pp7_REG_35}; // @[elegant.scala 547:15]
    end
    if (reset) begin // @[elegant.scala 535:24]
      pp8_5 <= 12'h0; // @[elegant.scala 535:24]
    end else begin
      pp8_5 <= {{1'd0}, pp8_REG_41}; // @[elegant.scala 548:15]
    end
    pp2_REG_5 <= {{1'd0}, _GEN_70}; // @[elegant.scala 542:69]
    pp3_REG_10 <= {{3'd0}, _GEN_71}; // @[elegant.scala 543:77]
    pp3_REG_11 <= pp3_REG_10; // @[elegant.scala 543:25]
    pp4_REG_15 <= {{1'd0}, _GEN_72}; // @[elegant.scala 544:85]
    pp4_REG_16 <= pp4_REG_15; // @[elegant.scala 544:33]
    pp4_REG_17 <= pp4_REG_16; // @[elegant.scala 544:25]
    pp5_REG_20 <= {{3'd0}, _GEN_73}; // @[elegant.scala 545:93]
    pp5_REG_21 <= pp5_REG_20; // @[elegant.scala 545:41]
    pp5_REG_22 <= pp5_REG_21; // @[elegant.scala 545:33]
    pp5_REG_23 <= pp5_REG_22; // @[elegant.scala 545:25]
    pp6_REG_25 <= {{1'd0}, _GEN_74}; // @[elegant.scala 546:101]
    pp6_REG_26 <= pp6_REG_25; // @[elegant.scala 546:49]
    pp6_REG_27 <= pp6_REG_26; // @[elegant.scala 546:41]
    pp6_REG_28 <= pp6_REG_27; // @[elegant.scala 546:33]
    pp6_REG_29 <= pp6_REG_28; // @[elegant.scala 546:25]
    pp7_REG_30 <= {{3'd0}, _GEN_75}; // @[elegant.scala 547:109]
    pp7_REG_31 <= pp7_REG_30; // @[elegant.scala 547:57]
    pp7_REG_32 <= pp7_REG_31; // @[elegant.scala 547:49]
    pp7_REG_33 <= pp7_REG_32; // @[elegant.scala 547:41]
    pp7_REG_34 <= pp7_REG_33; // @[elegant.scala 547:33]
    pp7_REG_35 <= pp7_REG_34; // @[elegant.scala 547:25]
    pp8_REG_35 <= {{1'd0}, _GEN_76}; // @[elegant.scala 548:117]
    pp8_REG_36 <= pp8_REG_35; // @[elegant.scala 548:65]
    pp8_REG_37 <= pp8_REG_36; // @[elegant.scala 548:57]
    pp8_REG_38 <= pp8_REG_37; // @[elegant.scala 548:49]
    pp8_REG_39 <= pp8_REG_38; // @[elegant.scala 548:41]
    pp8_REG_40 <= pp8_REG_39; // @[elegant.scala 548:33]
    pp8_REG_41 <= pp8_REG_40; // @[elegant.scala 548:25]
    dotProductRegs_5_REG <= {{7'd0}, _GEN_83}; // @[elegant.scala 549:195]
    dotProductRegs_5_REG_1 <= dotProductRegs_5_REG; // @[elegant.scala 549:143]
    dotProductRegs_5_REG_2 <= dotProductRegs_5_REG_1; // @[elegant.scala 549:135]
    dotProductRegs_5_REG_3 <= dotProductRegs_5_REG_2; // @[elegant.scala 549:127]
    dotProductRegs_5_REG_4 <= dotProductRegs_5_REG_3; // @[elegant.scala 549:119]
    dotProductRegs_5_REG_5 <= dotProductRegs_5_REG_4; // @[elegant.scala 549:111]
    dotProductRegs_5_REG_6 <= dotProductRegs_5_REG_5; // @[elegant.scala 549:103]
    dotProductRegs_5_REG_7 <= dotProductRegs_5_REG_6; // @[elegant.scala 549:95]
    if (reset) begin // @[elegant.scala 524:34]
      multiplierReg_6 <= 6'h0; // @[elegant.scala 524:34]
    end else begin
      multiplierReg_6 <= io_in_a_man_6; // @[elegant.scala 538:21]
    end
    if (reset) begin // @[elegant.scala 525:35]
      multiplierReg2_6 <= 6'h0; // @[elegant.scala 525:35]
    end else begin
      multiplierReg2_6 <= io_in_b_man_6; // @[elegant.scala 539:22]
    end
    if (reset) begin // @[elegant.scala 527:28]
      signReg_6 <= 1'h0; // @[elegant.scala 527:28]
    end else begin
      signReg_6 <= io_in_a_sign_6; // @[elegant.scala 537:15]
    end
    if (reset) begin // @[elegant.scala 528:24]
      pp1_6 <= 12'h0; // @[elegant.scala 528:24]
    end else begin
      pp1_6 <= {{8'd0}, _pp1_T_20}; // @[elegant.scala 541:15]
    end
    if (reset) begin // @[elegant.scala 529:24]
      pp2_6 <= 12'h0; // @[elegant.scala 529:24]
    end else begin
      pp2_6 <= {{5'd0}, pp2_REG_6}; // @[elegant.scala 542:15]
    end
    if (reset) begin // @[elegant.scala 530:24]
      pp3_6 <= 12'h0; // @[elegant.scala 530:24]
    end else begin
      pp3_6 <= {{1'd0}, pp3_REG_13}; // @[elegant.scala 543:15]
    end
    if (reset) begin // @[elegant.scala 531:24]
      pp4_6 <= 12'h0; // @[elegant.scala 531:24]
    end else begin
      pp4_6 <= {{5'd0}, pp4_REG_20}; // @[elegant.scala 544:15]
    end
    if (reset) begin // @[elegant.scala 532:24]
      pp5_6 <= 12'h0; // @[elegant.scala 532:24]
    end else begin
      pp5_6 <= {{1'd0}, pp5_REG_27}; // @[elegant.scala 545:15]
    end
    if (reset) begin // @[elegant.scala 533:24]
      pp6_6 <= 12'h0; // @[elegant.scala 533:24]
    end else begin
      pp6_6 <= {{1'd0}, pp6_REG_34}; // @[elegant.scala 546:15]
    end
    if (reset) begin // @[elegant.scala 534:24]
      pp7_6 <= 12'h0; // @[elegant.scala 534:24]
    end else begin
      pp7_6 <= {{1'd0}, pp7_REG_41}; // @[elegant.scala 547:15]
    end
    if (reset) begin // @[elegant.scala 535:24]
      pp8_6 <= 12'h0; // @[elegant.scala 535:24]
    end else begin
      pp8_6 <= {{1'd0}, pp8_REG_48}; // @[elegant.scala 548:15]
    end
    pp2_REG_6 <= {{1'd0}, _GEN_84}; // @[elegant.scala 542:69]
    pp3_REG_12 <= {{3'd0}, _GEN_85}; // @[elegant.scala 543:77]
    pp3_REG_13 <= pp3_REG_12; // @[elegant.scala 543:25]
    pp4_REG_18 <= {{1'd0}, _GEN_86}; // @[elegant.scala 544:85]
    pp4_REG_19 <= pp4_REG_18; // @[elegant.scala 544:33]
    pp4_REG_20 <= pp4_REG_19; // @[elegant.scala 544:25]
    pp5_REG_24 <= {{3'd0}, _GEN_87}; // @[elegant.scala 545:93]
    pp5_REG_25 <= pp5_REG_24; // @[elegant.scala 545:41]
    pp5_REG_26 <= pp5_REG_25; // @[elegant.scala 545:33]
    pp5_REG_27 <= pp5_REG_26; // @[elegant.scala 545:25]
    pp6_REG_30 <= {{1'd0}, _GEN_88}; // @[elegant.scala 546:101]
    pp6_REG_31 <= pp6_REG_30; // @[elegant.scala 546:49]
    pp6_REG_32 <= pp6_REG_31; // @[elegant.scala 546:41]
    pp6_REG_33 <= pp6_REG_32; // @[elegant.scala 546:33]
    pp6_REG_34 <= pp6_REG_33; // @[elegant.scala 546:25]
    pp7_REG_36 <= {{3'd0}, _GEN_89}; // @[elegant.scala 547:109]
    pp7_REG_37 <= pp7_REG_36; // @[elegant.scala 547:57]
    pp7_REG_38 <= pp7_REG_37; // @[elegant.scala 547:49]
    pp7_REG_39 <= pp7_REG_38; // @[elegant.scala 547:41]
    pp7_REG_40 <= pp7_REG_39; // @[elegant.scala 547:33]
    pp7_REG_41 <= pp7_REG_40; // @[elegant.scala 547:25]
    pp8_REG_42 <= {{1'd0}, _GEN_90}; // @[elegant.scala 548:117]
    pp8_REG_43 <= pp8_REG_42; // @[elegant.scala 548:65]
    pp8_REG_44 <= pp8_REG_43; // @[elegant.scala 548:57]
    pp8_REG_45 <= pp8_REG_44; // @[elegant.scala 548:49]
    pp8_REG_46 <= pp8_REG_45; // @[elegant.scala 548:41]
    pp8_REG_47 <= pp8_REG_46; // @[elegant.scala 548:33]
    pp8_REG_48 <= pp8_REG_47; // @[elegant.scala 548:25]
    dotProductRegs_6_REG <= {{7'd0}, _GEN_97}; // @[elegant.scala 549:195]
    dotProductRegs_6_REG_1 <= dotProductRegs_6_REG; // @[elegant.scala 549:143]
    dotProductRegs_6_REG_2 <= dotProductRegs_6_REG_1; // @[elegant.scala 549:135]
    dotProductRegs_6_REG_3 <= dotProductRegs_6_REG_2; // @[elegant.scala 549:127]
    dotProductRegs_6_REG_4 <= dotProductRegs_6_REG_3; // @[elegant.scala 549:119]
    dotProductRegs_6_REG_5 <= dotProductRegs_6_REG_4; // @[elegant.scala 549:111]
    dotProductRegs_6_REG_6 <= dotProductRegs_6_REG_5; // @[elegant.scala 549:103]
    dotProductRegs_6_REG_7 <= dotProductRegs_6_REG_6; // @[elegant.scala 549:95]
    if (reset) begin // @[elegant.scala 524:34]
      multiplierReg_7 <= 6'h0; // @[elegant.scala 524:34]
    end else begin
      multiplierReg_7 <= io_in_a_man_7; // @[elegant.scala 538:21]
    end
    if (reset) begin // @[elegant.scala 525:35]
      multiplierReg2_7 <= 6'h0; // @[elegant.scala 525:35]
    end else begin
      multiplierReg2_7 <= io_in_b_man_7; // @[elegant.scala 539:22]
    end
    if (reset) begin // @[elegant.scala 527:28]
      signReg_7 <= 1'h0; // @[elegant.scala 527:28]
    end else begin
      signReg_7 <= io_in_a_sign_7; // @[elegant.scala 537:15]
    end
    if (reset) begin // @[elegant.scala 528:24]
      pp1_7 <= 12'h0; // @[elegant.scala 528:24]
    end else begin
      pp1_7 <= {{8'd0}, _pp1_T_23}; // @[elegant.scala 541:15]
    end
    if (reset) begin // @[elegant.scala 529:24]
      pp2_7 <= 12'h0; // @[elegant.scala 529:24]
    end else begin
      pp2_7 <= {{5'd0}, pp2_REG_7}; // @[elegant.scala 542:15]
    end
    if (reset) begin // @[elegant.scala 530:24]
      pp3_7 <= 12'h0; // @[elegant.scala 530:24]
    end else begin
      pp3_7 <= {{1'd0}, pp3_REG_15}; // @[elegant.scala 543:15]
    end
    if (reset) begin // @[elegant.scala 531:24]
      pp4_7 <= 12'h0; // @[elegant.scala 531:24]
    end else begin
      pp4_7 <= {{5'd0}, pp4_REG_23}; // @[elegant.scala 544:15]
    end
    if (reset) begin // @[elegant.scala 532:24]
      pp5_7 <= 12'h0; // @[elegant.scala 532:24]
    end else begin
      pp5_7 <= {{1'd0}, pp5_REG_31}; // @[elegant.scala 545:15]
    end
    if (reset) begin // @[elegant.scala 533:24]
      pp6_7 <= 12'h0; // @[elegant.scala 533:24]
    end else begin
      pp6_7 <= {{1'd0}, pp6_REG_39}; // @[elegant.scala 546:15]
    end
    if (reset) begin // @[elegant.scala 534:24]
      pp7_7 <= 12'h0; // @[elegant.scala 534:24]
    end else begin
      pp7_7 <= {{1'd0}, pp7_REG_47}; // @[elegant.scala 547:15]
    end
    if (reset) begin // @[elegant.scala 535:24]
      pp8_7 <= 12'h0; // @[elegant.scala 535:24]
    end else begin
      pp8_7 <= {{1'd0}, pp8_REG_55}; // @[elegant.scala 548:15]
    end
    pp2_REG_7 <= {{1'd0}, _GEN_98}; // @[elegant.scala 542:69]
    pp3_REG_14 <= {{3'd0}, _GEN_99}; // @[elegant.scala 543:77]
    pp3_REG_15 <= pp3_REG_14; // @[elegant.scala 543:25]
    pp4_REG_21 <= {{1'd0}, _GEN_100}; // @[elegant.scala 544:85]
    pp4_REG_22 <= pp4_REG_21; // @[elegant.scala 544:33]
    pp4_REG_23 <= pp4_REG_22; // @[elegant.scala 544:25]
    pp5_REG_28 <= {{3'd0}, _GEN_101}; // @[elegant.scala 545:93]
    pp5_REG_29 <= pp5_REG_28; // @[elegant.scala 545:41]
    pp5_REG_30 <= pp5_REG_29; // @[elegant.scala 545:33]
    pp5_REG_31 <= pp5_REG_30; // @[elegant.scala 545:25]
    pp6_REG_35 <= {{1'd0}, _GEN_102}; // @[elegant.scala 546:101]
    pp6_REG_36 <= pp6_REG_35; // @[elegant.scala 546:49]
    pp6_REG_37 <= pp6_REG_36; // @[elegant.scala 546:41]
    pp6_REG_38 <= pp6_REG_37; // @[elegant.scala 546:33]
    pp6_REG_39 <= pp6_REG_38; // @[elegant.scala 546:25]
    pp7_REG_42 <= {{3'd0}, _GEN_103}; // @[elegant.scala 547:109]
    pp7_REG_43 <= pp7_REG_42; // @[elegant.scala 547:57]
    pp7_REG_44 <= pp7_REG_43; // @[elegant.scala 547:49]
    pp7_REG_45 <= pp7_REG_44; // @[elegant.scala 547:41]
    pp7_REG_46 <= pp7_REG_45; // @[elegant.scala 547:33]
    pp7_REG_47 <= pp7_REG_46; // @[elegant.scala 547:25]
    pp8_REG_49 <= {{1'd0}, _GEN_104}; // @[elegant.scala 548:117]
    pp8_REG_50 <= pp8_REG_49; // @[elegant.scala 548:65]
    pp8_REG_51 <= pp8_REG_50; // @[elegant.scala 548:57]
    pp8_REG_52 <= pp8_REG_51; // @[elegant.scala 548:49]
    pp8_REG_53 <= pp8_REG_52; // @[elegant.scala 548:41]
    pp8_REG_54 <= pp8_REG_53; // @[elegant.scala 548:33]
    pp8_REG_55 <= pp8_REG_54; // @[elegant.scala 548:25]
    dotProductRegs_7_REG <= {{7'd0}, _GEN_111}; // @[elegant.scala 549:195]
    dotProductRegs_7_REG_1 <= dotProductRegs_7_REG; // @[elegant.scala 549:143]
    dotProductRegs_7_REG_2 <= dotProductRegs_7_REG_1; // @[elegant.scala 549:135]
    dotProductRegs_7_REG_3 <= dotProductRegs_7_REG_2; // @[elegant.scala 549:127]
    dotProductRegs_7_REG_4 <= dotProductRegs_7_REG_3; // @[elegant.scala 549:119]
    dotProductRegs_7_REG_5 <= dotProductRegs_7_REG_4; // @[elegant.scala 549:111]
    dotProductRegs_7_REG_6 <= dotProductRegs_7_REG_5; // @[elegant.scala 549:103]
    dotProductRegs_7_REG_7 <= dotProductRegs_7_REG_6; // @[elegant.scala 549:95]
    if (reset) begin // @[elegant.scala 524:34]
      multiplierReg_8 <= 6'h0; // @[elegant.scala 524:34]
    end else begin
      multiplierReg_8 <= io_in_a_man_8; // @[elegant.scala 538:21]
    end
    if (reset) begin // @[elegant.scala 525:35]
      multiplierReg2_8 <= 6'h0; // @[elegant.scala 525:35]
    end else begin
      multiplierReg2_8 <= io_in_b_man_8; // @[elegant.scala 539:22]
    end
    if (reset) begin // @[elegant.scala 527:28]
      signReg_8 <= 1'h0; // @[elegant.scala 527:28]
    end else begin
      signReg_8 <= io_in_a_sign_8; // @[elegant.scala 537:15]
    end
    if (reset) begin // @[elegant.scala 528:24]
      pp1_8 <= 12'h0; // @[elegant.scala 528:24]
    end else begin
      pp1_8 <= {{8'd0}, _pp1_T_26}; // @[elegant.scala 541:15]
    end
    if (reset) begin // @[elegant.scala 529:24]
      pp2_8 <= 12'h0; // @[elegant.scala 529:24]
    end else begin
      pp2_8 <= {{5'd0}, pp2_REG_8}; // @[elegant.scala 542:15]
    end
    if (reset) begin // @[elegant.scala 530:24]
      pp3_8 <= 12'h0; // @[elegant.scala 530:24]
    end else begin
      pp3_8 <= {{1'd0}, pp3_REG_17}; // @[elegant.scala 543:15]
    end
    if (reset) begin // @[elegant.scala 531:24]
      pp4_8 <= 12'h0; // @[elegant.scala 531:24]
    end else begin
      pp4_8 <= {{5'd0}, pp4_REG_26}; // @[elegant.scala 544:15]
    end
    if (reset) begin // @[elegant.scala 532:24]
      pp5_8 <= 12'h0; // @[elegant.scala 532:24]
    end else begin
      pp5_8 <= {{1'd0}, pp5_REG_35}; // @[elegant.scala 545:15]
    end
    if (reset) begin // @[elegant.scala 533:24]
      pp6_8 <= 12'h0; // @[elegant.scala 533:24]
    end else begin
      pp6_8 <= {{1'd0}, pp6_REG_44}; // @[elegant.scala 546:15]
    end
    if (reset) begin // @[elegant.scala 534:24]
      pp7_8 <= 12'h0; // @[elegant.scala 534:24]
    end else begin
      pp7_8 <= {{1'd0}, pp7_REG_53}; // @[elegant.scala 547:15]
    end
    if (reset) begin // @[elegant.scala 535:24]
      pp8_8 <= 12'h0; // @[elegant.scala 535:24]
    end else begin
      pp8_8 <= {{1'd0}, pp8_REG_62}; // @[elegant.scala 548:15]
    end
    pp2_REG_8 <= {{1'd0}, _GEN_112}; // @[elegant.scala 542:69]
    pp3_REG_16 <= {{3'd0}, _GEN_113}; // @[elegant.scala 543:77]
    pp3_REG_17 <= pp3_REG_16; // @[elegant.scala 543:25]
    pp4_REG_24 <= {{1'd0}, _GEN_114}; // @[elegant.scala 544:85]
    pp4_REG_25 <= pp4_REG_24; // @[elegant.scala 544:33]
    pp4_REG_26 <= pp4_REG_25; // @[elegant.scala 544:25]
    pp5_REG_32 <= {{3'd0}, _GEN_115}; // @[elegant.scala 545:93]
    pp5_REG_33 <= pp5_REG_32; // @[elegant.scala 545:41]
    pp5_REG_34 <= pp5_REG_33; // @[elegant.scala 545:33]
    pp5_REG_35 <= pp5_REG_34; // @[elegant.scala 545:25]
    pp6_REG_40 <= {{1'd0}, _GEN_116}; // @[elegant.scala 546:101]
    pp6_REG_41 <= pp6_REG_40; // @[elegant.scala 546:49]
    pp6_REG_42 <= pp6_REG_41; // @[elegant.scala 546:41]
    pp6_REG_43 <= pp6_REG_42; // @[elegant.scala 546:33]
    pp6_REG_44 <= pp6_REG_43; // @[elegant.scala 546:25]
    pp7_REG_48 <= {{3'd0}, _GEN_117}; // @[elegant.scala 547:109]
    pp7_REG_49 <= pp7_REG_48; // @[elegant.scala 547:57]
    pp7_REG_50 <= pp7_REG_49; // @[elegant.scala 547:49]
    pp7_REG_51 <= pp7_REG_50; // @[elegant.scala 547:41]
    pp7_REG_52 <= pp7_REG_51; // @[elegant.scala 547:33]
    pp7_REG_53 <= pp7_REG_52; // @[elegant.scala 547:25]
    pp8_REG_56 <= {{1'd0}, _GEN_118}; // @[elegant.scala 548:117]
    pp8_REG_57 <= pp8_REG_56; // @[elegant.scala 548:65]
    pp8_REG_58 <= pp8_REG_57; // @[elegant.scala 548:57]
    pp8_REG_59 <= pp8_REG_58; // @[elegant.scala 548:49]
    pp8_REG_60 <= pp8_REG_59; // @[elegant.scala 548:41]
    pp8_REG_61 <= pp8_REG_60; // @[elegant.scala 548:33]
    pp8_REG_62 <= pp8_REG_61; // @[elegant.scala 548:25]
    dotProductRegs_8_REG <= {{7'd0}, _GEN_125}; // @[elegant.scala 549:195]
    dotProductRegs_8_REG_1 <= dotProductRegs_8_REG; // @[elegant.scala 549:143]
    dotProductRegs_8_REG_2 <= dotProductRegs_8_REG_1; // @[elegant.scala 549:135]
    dotProductRegs_8_REG_3 <= dotProductRegs_8_REG_2; // @[elegant.scala 549:127]
    dotProductRegs_8_REG_4 <= dotProductRegs_8_REG_3; // @[elegant.scala 549:119]
    dotProductRegs_8_REG_5 <= dotProductRegs_8_REG_4; // @[elegant.scala 549:111]
    dotProductRegs_8_REG_6 <= dotProductRegs_8_REG_5; // @[elegant.scala 549:103]
    dotProductRegs_8_REG_7 <= dotProductRegs_8_REG_6; // @[elegant.scala 549:95]
    if (reset) begin // @[elegant.scala 524:34]
      multiplierReg_9 <= 6'h0; // @[elegant.scala 524:34]
    end else begin
      multiplierReg_9 <= io_in_a_man_9; // @[elegant.scala 538:21]
    end
    if (reset) begin // @[elegant.scala 525:35]
      multiplierReg2_9 <= 6'h0; // @[elegant.scala 525:35]
    end else begin
      multiplierReg2_9 <= io_in_b_man_9; // @[elegant.scala 539:22]
    end
    if (reset) begin // @[elegant.scala 527:28]
      signReg_9 <= 1'h0; // @[elegant.scala 527:28]
    end else begin
      signReg_9 <= io_in_a_sign_9; // @[elegant.scala 537:15]
    end
    if (reset) begin // @[elegant.scala 528:24]
      pp1_9 <= 12'h0; // @[elegant.scala 528:24]
    end else begin
      pp1_9 <= {{8'd0}, _pp1_T_29}; // @[elegant.scala 541:15]
    end
    if (reset) begin // @[elegant.scala 529:24]
      pp2_9 <= 12'h0; // @[elegant.scala 529:24]
    end else begin
      pp2_9 <= {{5'd0}, pp2_REG_9}; // @[elegant.scala 542:15]
    end
    if (reset) begin // @[elegant.scala 530:24]
      pp3_9 <= 12'h0; // @[elegant.scala 530:24]
    end else begin
      pp3_9 <= {{1'd0}, pp3_REG_19}; // @[elegant.scala 543:15]
    end
    if (reset) begin // @[elegant.scala 531:24]
      pp4_9 <= 12'h0; // @[elegant.scala 531:24]
    end else begin
      pp4_9 <= {{5'd0}, pp4_REG_29}; // @[elegant.scala 544:15]
    end
    if (reset) begin // @[elegant.scala 532:24]
      pp5_9 <= 12'h0; // @[elegant.scala 532:24]
    end else begin
      pp5_9 <= {{1'd0}, pp5_REG_39}; // @[elegant.scala 545:15]
    end
    if (reset) begin // @[elegant.scala 533:24]
      pp6_9 <= 12'h0; // @[elegant.scala 533:24]
    end else begin
      pp6_9 <= {{1'd0}, pp6_REG_49}; // @[elegant.scala 546:15]
    end
    if (reset) begin // @[elegant.scala 534:24]
      pp7_9 <= 12'h0; // @[elegant.scala 534:24]
    end else begin
      pp7_9 <= {{1'd0}, pp7_REG_59}; // @[elegant.scala 547:15]
    end
    if (reset) begin // @[elegant.scala 535:24]
      pp8_9 <= 12'h0; // @[elegant.scala 535:24]
    end else begin
      pp8_9 <= {{1'd0}, pp8_REG_69}; // @[elegant.scala 548:15]
    end
    pp2_REG_9 <= {{1'd0}, _GEN_126}; // @[elegant.scala 542:69]
    pp3_REG_18 <= {{3'd0}, _GEN_127}; // @[elegant.scala 543:77]
    pp3_REG_19 <= pp3_REG_18; // @[elegant.scala 543:25]
    pp4_REG_27 <= {{1'd0}, _GEN_128}; // @[elegant.scala 544:85]
    pp4_REG_28 <= pp4_REG_27; // @[elegant.scala 544:33]
    pp4_REG_29 <= pp4_REG_28; // @[elegant.scala 544:25]
    pp5_REG_36 <= {{3'd0}, _GEN_129}; // @[elegant.scala 545:93]
    pp5_REG_37 <= pp5_REG_36; // @[elegant.scala 545:41]
    pp5_REG_38 <= pp5_REG_37; // @[elegant.scala 545:33]
    pp5_REG_39 <= pp5_REG_38; // @[elegant.scala 545:25]
    pp6_REG_45 <= {{1'd0}, _GEN_130}; // @[elegant.scala 546:101]
    pp6_REG_46 <= pp6_REG_45; // @[elegant.scala 546:49]
    pp6_REG_47 <= pp6_REG_46; // @[elegant.scala 546:41]
    pp6_REG_48 <= pp6_REG_47; // @[elegant.scala 546:33]
    pp6_REG_49 <= pp6_REG_48; // @[elegant.scala 546:25]
    pp7_REG_54 <= {{3'd0}, _GEN_131}; // @[elegant.scala 547:109]
    pp7_REG_55 <= pp7_REG_54; // @[elegant.scala 547:57]
    pp7_REG_56 <= pp7_REG_55; // @[elegant.scala 547:49]
    pp7_REG_57 <= pp7_REG_56; // @[elegant.scala 547:41]
    pp7_REG_58 <= pp7_REG_57; // @[elegant.scala 547:33]
    pp7_REG_59 <= pp7_REG_58; // @[elegant.scala 547:25]
    pp8_REG_63 <= {{1'd0}, _GEN_132}; // @[elegant.scala 548:117]
    pp8_REG_64 <= pp8_REG_63; // @[elegant.scala 548:65]
    pp8_REG_65 <= pp8_REG_64; // @[elegant.scala 548:57]
    pp8_REG_66 <= pp8_REG_65; // @[elegant.scala 548:49]
    pp8_REG_67 <= pp8_REG_66; // @[elegant.scala 548:41]
    pp8_REG_68 <= pp8_REG_67; // @[elegant.scala 548:33]
    pp8_REG_69 <= pp8_REG_68; // @[elegant.scala 548:25]
    dotProductRegs_9_REG <= {{7'd0}, _GEN_139}; // @[elegant.scala 549:195]
    dotProductRegs_9_REG_1 <= dotProductRegs_9_REG; // @[elegant.scala 549:143]
    dotProductRegs_9_REG_2 <= dotProductRegs_9_REG_1; // @[elegant.scala 549:135]
    dotProductRegs_9_REG_3 <= dotProductRegs_9_REG_2; // @[elegant.scala 549:127]
    dotProductRegs_9_REG_4 <= dotProductRegs_9_REG_3; // @[elegant.scala 549:119]
    dotProductRegs_9_REG_5 <= dotProductRegs_9_REG_4; // @[elegant.scala 549:111]
    dotProductRegs_9_REG_6 <= dotProductRegs_9_REG_5; // @[elegant.scala 549:103]
    dotProductRegs_9_REG_7 <= dotProductRegs_9_REG_6; // @[elegant.scala 549:95]
    if (reset) begin // @[elegant.scala 524:34]
      multiplierReg_10 <= 6'h0; // @[elegant.scala 524:34]
    end else begin
      multiplierReg_10 <= io_in_a_man_10; // @[elegant.scala 538:21]
    end
    if (reset) begin // @[elegant.scala 525:35]
      multiplierReg2_10 <= 6'h0; // @[elegant.scala 525:35]
    end else begin
      multiplierReg2_10 <= io_in_b_man_10; // @[elegant.scala 539:22]
    end
    if (reset) begin // @[elegant.scala 527:28]
      signReg_10 <= 1'h0; // @[elegant.scala 527:28]
    end else begin
      signReg_10 <= io_in_a_sign_10; // @[elegant.scala 537:15]
    end
    if (reset) begin // @[elegant.scala 528:24]
      pp1_10 <= 12'h0; // @[elegant.scala 528:24]
    end else begin
      pp1_10 <= {{8'd0}, _pp1_T_32}; // @[elegant.scala 541:15]
    end
    if (reset) begin // @[elegant.scala 529:24]
      pp2_10 <= 12'h0; // @[elegant.scala 529:24]
    end else begin
      pp2_10 <= {{5'd0}, pp2_REG_10}; // @[elegant.scala 542:15]
    end
    if (reset) begin // @[elegant.scala 530:24]
      pp3_10 <= 12'h0; // @[elegant.scala 530:24]
    end else begin
      pp3_10 <= {{1'd0}, pp3_REG_21}; // @[elegant.scala 543:15]
    end
    if (reset) begin // @[elegant.scala 531:24]
      pp4_10 <= 12'h0; // @[elegant.scala 531:24]
    end else begin
      pp4_10 <= {{5'd0}, pp4_REG_32}; // @[elegant.scala 544:15]
    end
    if (reset) begin // @[elegant.scala 532:24]
      pp5_10 <= 12'h0; // @[elegant.scala 532:24]
    end else begin
      pp5_10 <= {{1'd0}, pp5_REG_43}; // @[elegant.scala 545:15]
    end
    if (reset) begin // @[elegant.scala 533:24]
      pp6_10 <= 12'h0; // @[elegant.scala 533:24]
    end else begin
      pp6_10 <= {{1'd0}, pp6_REG_54}; // @[elegant.scala 546:15]
    end
    if (reset) begin // @[elegant.scala 534:24]
      pp7_10 <= 12'h0; // @[elegant.scala 534:24]
    end else begin
      pp7_10 <= {{1'd0}, pp7_REG_65}; // @[elegant.scala 547:15]
    end
    if (reset) begin // @[elegant.scala 535:24]
      pp8_10 <= 12'h0; // @[elegant.scala 535:24]
    end else begin
      pp8_10 <= {{1'd0}, pp8_REG_76}; // @[elegant.scala 548:15]
    end
    pp2_REG_10 <= {{1'd0}, _GEN_140}; // @[elegant.scala 542:69]
    pp3_REG_20 <= {{3'd0}, _GEN_141}; // @[elegant.scala 543:77]
    pp3_REG_21 <= pp3_REG_20; // @[elegant.scala 543:25]
    pp4_REG_30 <= {{1'd0}, _GEN_142}; // @[elegant.scala 544:85]
    pp4_REG_31 <= pp4_REG_30; // @[elegant.scala 544:33]
    pp4_REG_32 <= pp4_REG_31; // @[elegant.scala 544:25]
    pp5_REG_40 <= {{3'd0}, _GEN_143}; // @[elegant.scala 545:93]
    pp5_REG_41 <= pp5_REG_40; // @[elegant.scala 545:41]
    pp5_REG_42 <= pp5_REG_41; // @[elegant.scala 545:33]
    pp5_REG_43 <= pp5_REG_42; // @[elegant.scala 545:25]
    pp6_REG_50 <= {{1'd0}, _GEN_144}; // @[elegant.scala 546:101]
    pp6_REG_51 <= pp6_REG_50; // @[elegant.scala 546:49]
    pp6_REG_52 <= pp6_REG_51; // @[elegant.scala 546:41]
    pp6_REG_53 <= pp6_REG_52; // @[elegant.scala 546:33]
    pp6_REG_54 <= pp6_REG_53; // @[elegant.scala 546:25]
    pp7_REG_60 <= {{3'd0}, _GEN_145}; // @[elegant.scala 547:109]
    pp7_REG_61 <= pp7_REG_60; // @[elegant.scala 547:57]
    pp7_REG_62 <= pp7_REG_61; // @[elegant.scala 547:49]
    pp7_REG_63 <= pp7_REG_62; // @[elegant.scala 547:41]
    pp7_REG_64 <= pp7_REG_63; // @[elegant.scala 547:33]
    pp7_REG_65 <= pp7_REG_64; // @[elegant.scala 547:25]
    pp8_REG_70 <= {{1'd0}, _GEN_146}; // @[elegant.scala 548:117]
    pp8_REG_71 <= pp8_REG_70; // @[elegant.scala 548:65]
    pp8_REG_72 <= pp8_REG_71; // @[elegant.scala 548:57]
    pp8_REG_73 <= pp8_REG_72; // @[elegant.scala 548:49]
    pp8_REG_74 <= pp8_REG_73; // @[elegant.scala 548:41]
    pp8_REG_75 <= pp8_REG_74; // @[elegant.scala 548:33]
    pp8_REG_76 <= pp8_REG_75; // @[elegant.scala 548:25]
    dotProductRegs_10_REG <= {{7'd0}, _GEN_153}; // @[elegant.scala 549:195]
    dotProductRegs_10_REG_1 <= dotProductRegs_10_REG; // @[elegant.scala 549:143]
    dotProductRegs_10_REG_2 <= dotProductRegs_10_REG_1; // @[elegant.scala 549:135]
    dotProductRegs_10_REG_3 <= dotProductRegs_10_REG_2; // @[elegant.scala 549:127]
    dotProductRegs_10_REG_4 <= dotProductRegs_10_REG_3; // @[elegant.scala 549:119]
    dotProductRegs_10_REG_5 <= dotProductRegs_10_REG_4; // @[elegant.scala 549:111]
    dotProductRegs_10_REG_6 <= dotProductRegs_10_REG_5; // @[elegant.scala 549:103]
    dotProductRegs_10_REG_7 <= dotProductRegs_10_REG_6; // @[elegant.scala 549:95]
    if (reset) begin // @[elegant.scala 524:34]
      multiplierReg_11 <= 6'h0; // @[elegant.scala 524:34]
    end else begin
      multiplierReg_11 <= io_in_a_man_11; // @[elegant.scala 538:21]
    end
    if (reset) begin // @[elegant.scala 525:35]
      multiplierReg2_11 <= 6'h0; // @[elegant.scala 525:35]
    end else begin
      multiplierReg2_11 <= io_in_b_man_11; // @[elegant.scala 539:22]
    end
    if (reset) begin // @[elegant.scala 527:28]
      signReg_11 <= 1'h0; // @[elegant.scala 527:28]
    end else begin
      signReg_11 <= io_in_a_sign_11; // @[elegant.scala 537:15]
    end
    if (reset) begin // @[elegant.scala 528:24]
      pp1_11 <= 12'h0; // @[elegant.scala 528:24]
    end else begin
      pp1_11 <= {{8'd0}, _pp1_T_35}; // @[elegant.scala 541:15]
    end
    if (reset) begin // @[elegant.scala 529:24]
      pp2_11 <= 12'h0; // @[elegant.scala 529:24]
    end else begin
      pp2_11 <= {{5'd0}, pp2_REG_11}; // @[elegant.scala 542:15]
    end
    if (reset) begin // @[elegant.scala 530:24]
      pp3_11 <= 12'h0; // @[elegant.scala 530:24]
    end else begin
      pp3_11 <= {{1'd0}, pp3_REG_23}; // @[elegant.scala 543:15]
    end
    if (reset) begin // @[elegant.scala 531:24]
      pp4_11 <= 12'h0; // @[elegant.scala 531:24]
    end else begin
      pp4_11 <= {{5'd0}, pp4_REG_35}; // @[elegant.scala 544:15]
    end
    if (reset) begin // @[elegant.scala 532:24]
      pp5_11 <= 12'h0; // @[elegant.scala 532:24]
    end else begin
      pp5_11 <= {{1'd0}, pp5_REG_47}; // @[elegant.scala 545:15]
    end
    if (reset) begin // @[elegant.scala 533:24]
      pp6_11 <= 12'h0; // @[elegant.scala 533:24]
    end else begin
      pp6_11 <= {{1'd0}, pp6_REG_59}; // @[elegant.scala 546:15]
    end
    if (reset) begin // @[elegant.scala 534:24]
      pp7_11 <= 12'h0; // @[elegant.scala 534:24]
    end else begin
      pp7_11 <= {{1'd0}, pp7_REG_71}; // @[elegant.scala 547:15]
    end
    if (reset) begin // @[elegant.scala 535:24]
      pp8_11 <= 12'h0; // @[elegant.scala 535:24]
    end else begin
      pp8_11 <= {{1'd0}, pp8_REG_83}; // @[elegant.scala 548:15]
    end
    pp2_REG_11 <= {{1'd0}, _GEN_154}; // @[elegant.scala 542:69]
    pp3_REG_22 <= {{3'd0}, _GEN_155}; // @[elegant.scala 543:77]
    pp3_REG_23 <= pp3_REG_22; // @[elegant.scala 543:25]
    pp4_REG_33 <= {{1'd0}, _GEN_156}; // @[elegant.scala 544:85]
    pp4_REG_34 <= pp4_REG_33; // @[elegant.scala 544:33]
    pp4_REG_35 <= pp4_REG_34; // @[elegant.scala 544:25]
    pp5_REG_44 <= {{3'd0}, _GEN_157}; // @[elegant.scala 545:93]
    pp5_REG_45 <= pp5_REG_44; // @[elegant.scala 545:41]
    pp5_REG_46 <= pp5_REG_45; // @[elegant.scala 545:33]
    pp5_REG_47 <= pp5_REG_46; // @[elegant.scala 545:25]
    pp6_REG_55 <= {{1'd0}, _GEN_158}; // @[elegant.scala 546:101]
    pp6_REG_56 <= pp6_REG_55; // @[elegant.scala 546:49]
    pp6_REG_57 <= pp6_REG_56; // @[elegant.scala 546:41]
    pp6_REG_58 <= pp6_REG_57; // @[elegant.scala 546:33]
    pp6_REG_59 <= pp6_REG_58; // @[elegant.scala 546:25]
    pp7_REG_66 <= {{3'd0}, _GEN_159}; // @[elegant.scala 547:109]
    pp7_REG_67 <= pp7_REG_66; // @[elegant.scala 547:57]
    pp7_REG_68 <= pp7_REG_67; // @[elegant.scala 547:49]
    pp7_REG_69 <= pp7_REG_68; // @[elegant.scala 547:41]
    pp7_REG_70 <= pp7_REG_69; // @[elegant.scala 547:33]
    pp7_REG_71 <= pp7_REG_70; // @[elegant.scala 547:25]
    pp8_REG_77 <= {{1'd0}, _GEN_160}; // @[elegant.scala 548:117]
    pp8_REG_78 <= pp8_REG_77; // @[elegant.scala 548:65]
    pp8_REG_79 <= pp8_REG_78; // @[elegant.scala 548:57]
    pp8_REG_80 <= pp8_REG_79; // @[elegant.scala 548:49]
    pp8_REG_81 <= pp8_REG_80; // @[elegant.scala 548:41]
    pp8_REG_82 <= pp8_REG_81; // @[elegant.scala 548:33]
    pp8_REG_83 <= pp8_REG_82; // @[elegant.scala 548:25]
    dotProductRegs_11_REG <= {{7'd0}, _GEN_167}; // @[elegant.scala 549:195]
    dotProductRegs_11_REG_1 <= dotProductRegs_11_REG; // @[elegant.scala 549:143]
    dotProductRegs_11_REG_2 <= dotProductRegs_11_REG_1; // @[elegant.scala 549:135]
    dotProductRegs_11_REG_3 <= dotProductRegs_11_REG_2; // @[elegant.scala 549:127]
    dotProductRegs_11_REG_4 <= dotProductRegs_11_REG_3; // @[elegant.scala 549:119]
    dotProductRegs_11_REG_5 <= dotProductRegs_11_REG_4; // @[elegant.scala 549:111]
    dotProductRegs_11_REG_6 <= dotProductRegs_11_REG_5; // @[elegant.scala 549:103]
    dotProductRegs_11_REG_7 <= dotProductRegs_11_REG_6; // @[elegant.scala 549:95]
    if (reset) begin // @[elegant.scala 524:34]
      multiplierReg_12 <= 6'h0; // @[elegant.scala 524:34]
    end else begin
      multiplierReg_12 <= io_in_a_man_12; // @[elegant.scala 538:21]
    end
    if (reset) begin // @[elegant.scala 525:35]
      multiplierReg2_12 <= 6'h0; // @[elegant.scala 525:35]
    end else begin
      multiplierReg2_12 <= io_in_b_man_12; // @[elegant.scala 539:22]
    end
    if (reset) begin // @[elegant.scala 527:28]
      signReg_12 <= 1'h0; // @[elegant.scala 527:28]
    end else begin
      signReg_12 <= io_in_a_sign_12; // @[elegant.scala 537:15]
    end
    if (reset) begin // @[elegant.scala 528:24]
      pp1_12 <= 12'h0; // @[elegant.scala 528:24]
    end else begin
      pp1_12 <= {{8'd0}, _pp1_T_38}; // @[elegant.scala 541:15]
    end
    if (reset) begin // @[elegant.scala 529:24]
      pp2_12 <= 12'h0; // @[elegant.scala 529:24]
    end else begin
      pp2_12 <= {{5'd0}, pp2_REG_12}; // @[elegant.scala 542:15]
    end
    if (reset) begin // @[elegant.scala 530:24]
      pp3_12 <= 12'h0; // @[elegant.scala 530:24]
    end else begin
      pp3_12 <= {{1'd0}, pp3_REG_25}; // @[elegant.scala 543:15]
    end
    if (reset) begin // @[elegant.scala 531:24]
      pp4_12 <= 12'h0; // @[elegant.scala 531:24]
    end else begin
      pp4_12 <= {{5'd0}, pp4_REG_38}; // @[elegant.scala 544:15]
    end
    if (reset) begin // @[elegant.scala 532:24]
      pp5_12 <= 12'h0; // @[elegant.scala 532:24]
    end else begin
      pp5_12 <= {{1'd0}, pp5_REG_51}; // @[elegant.scala 545:15]
    end
    if (reset) begin // @[elegant.scala 533:24]
      pp6_12 <= 12'h0; // @[elegant.scala 533:24]
    end else begin
      pp6_12 <= {{1'd0}, pp6_REG_64}; // @[elegant.scala 546:15]
    end
    if (reset) begin // @[elegant.scala 534:24]
      pp7_12 <= 12'h0; // @[elegant.scala 534:24]
    end else begin
      pp7_12 <= {{1'd0}, pp7_REG_77}; // @[elegant.scala 547:15]
    end
    if (reset) begin // @[elegant.scala 535:24]
      pp8_12 <= 12'h0; // @[elegant.scala 535:24]
    end else begin
      pp8_12 <= {{1'd0}, pp8_REG_90}; // @[elegant.scala 548:15]
    end
    pp2_REG_12 <= {{1'd0}, _GEN_168}; // @[elegant.scala 542:69]
    pp3_REG_24 <= {{3'd0}, _GEN_169}; // @[elegant.scala 543:77]
    pp3_REG_25 <= pp3_REG_24; // @[elegant.scala 543:25]
    pp4_REG_36 <= {{1'd0}, _GEN_170}; // @[elegant.scala 544:85]
    pp4_REG_37 <= pp4_REG_36; // @[elegant.scala 544:33]
    pp4_REG_38 <= pp4_REG_37; // @[elegant.scala 544:25]
    pp5_REG_48 <= {{3'd0}, _GEN_171}; // @[elegant.scala 545:93]
    pp5_REG_49 <= pp5_REG_48; // @[elegant.scala 545:41]
    pp5_REG_50 <= pp5_REG_49; // @[elegant.scala 545:33]
    pp5_REG_51 <= pp5_REG_50; // @[elegant.scala 545:25]
    pp6_REG_60 <= {{1'd0}, _GEN_172}; // @[elegant.scala 546:101]
    pp6_REG_61 <= pp6_REG_60; // @[elegant.scala 546:49]
    pp6_REG_62 <= pp6_REG_61; // @[elegant.scala 546:41]
    pp6_REG_63 <= pp6_REG_62; // @[elegant.scala 546:33]
    pp6_REG_64 <= pp6_REG_63; // @[elegant.scala 546:25]
    pp7_REG_72 <= {{3'd0}, _GEN_173}; // @[elegant.scala 547:109]
    pp7_REG_73 <= pp7_REG_72; // @[elegant.scala 547:57]
    pp7_REG_74 <= pp7_REG_73; // @[elegant.scala 547:49]
    pp7_REG_75 <= pp7_REG_74; // @[elegant.scala 547:41]
    pp7_REG_76 <= pp7_REG_75; // @[elegant.scala 547:33]
    pp7_REG_77 <= pp7_REG_76; // @[elegant.scala 547:25]
    pp8_REG_84 <= {{1'd0}, _GEN_174}; // @[elegant.scala 548:117]
    pp8_REG_85 <= pp8_REG_84; // @[elegant.scala 548:65]
    pp8_REG_86 <= pp8_REG_85; // @[elegant.scala 548:57]
    pp8_REG_87 <= pp8_REG_86; // @[elegant.scala 548:49]
    pp8_REG_88 <= pp8_REG_87; // @[elegant.scala 548:41]
    pp8_REG_89 <= pp8_REG_88; // @[elegant.scala 548:33]
    pp8_REG_90 <= pp8_REG_89; // @[elegant.scala 548:25]
    dotProductRegs_12_REG <= {{7'd0}, _GEN_181}; // @[elegant.scala 549:195]
    dotProductRegs_12_REG_1 <= dotProductRegs_12_REG; // @[elegant.scala 549:143]
    dotProductRegs_12_REG_2 <= dotProductRegs_12_REG_1; // @[elegant.scala 549:135]
    dotProductRegs_12_REG_3 <= dotProductRegs_12_REG_2; // @[elegant.scala 549:127]
    dotProductRegs_12_REG_4 <= dotProductRegs_12_REG_3; // @[elegant.scala 549:119]
    dotProductRegs_12_REG_5 <= dotProductRegs_12_REG_4; // @[elegant.scala 549:111]
    dotProductRegs_12_REG_6 <= dotProductRegs_12_REG_5; // @[elegant.scala 549:103]
    dotProductRegs_12_REG_7 <= dotProductRegs_12_REG_6; // @[elegant.scala 549:95]
    if (reset) begin // @[elegant.scala 524:34]
      multiplierReg_13 <= 6'h0; // @[elegant.scala 524:34]
    end else begin
      multiplierReg_13 <= io_in_a_man_13; // @[elegant.scala 538:21]
    end
    if (reset) begin // @[elegant.scala 525:35]
      multiplierReg2_13 <= 6'h0; // @[elegant.scala 525:35]
    end else begin
      multiplierReg2_13 <= io_in_b_man_13; // @[elegant.scala 539:22]
    end
    if (reset) begin // @[elegant.scala 527:28]
      signReg_13 <= 1'h0; // @[elegant.scala 527:28]
    end else begin
      signReg_13 <= io_in_a_sign_13; // @[elegant.scala 537:15]
    end
    if (reset) begin // @[elegant.scala 528:24]
      pp1_13 <= 12'h0; // @[elegant.scala 528:24]
    end else begin
      pp1_13 <= {{8'd0}, _pp1_T_41}; // @[elegant.scala 541:15]
    end
    if (reset) begin // @[elegant.scala 529:24]
      pp2_13 <= 12'h0; // @[elegant.scala 529:24]
    end else begin
      pp2_13 <= {{5'd0}, pp2_REG_13}; // @[elegant.scala 542:15]
    end
    if (reset) begin // @[elegant.scala 530:24]
      pp3_13 <= 12'h0; // @[elegant.scala 530:24]
    end else begin
      pp3_13 <= {{1'd0}, pp3_REG_27}; // @[elegant.scala 543:15]
    end
    if (reset) begin // @[elegant.scala 531:24]
      pp4_13 <= 12'h0; // @[elegant.scala 531:24]
    end else begin
      pp4_13 <= {{5'd0}, pp4_REG_41}; // @[elegant.scala 544:15]
    end
    if (reset) begin // @[elegant.scala 532:24]
      pp5_13 <= 12'h0; // @[elegant.scala 532:24]
    end else begin
      pp5_13 <= {{1'd0}, pp5_REG_55}; // @[elegant.scala 545:15]
    end
    if (reset) begin // @[elegant.scala 533:24]
      pp6_13 <= 12'h0; // @[elegant.scala 533:24]
    end else begin
      pp6_13 <= {{1'd0}, pp6_REG_69}; // @[elegant.scala 546:15]
    end
    if (reset) begin // @[elegant.scala 534:24]
      pp7_13 <= 12'h0; // @[elegant.scala 534:24]
    end else begin
      pp7_13 <= {{1'd0}, pp7_REG_83}; // @[elegant.scala 547:15]
    end
    if (reset) begin // @[elegant.scala 535:24]
      pp8_13 <= 12'h0; // @[elegant.scala 535:24]
    end else begin
      pp8_13 <= {{1'd0}, pp8_REG_97}; // @[elegant.scala 548:15]
    end
    pp2_REG_13 <= {{1'd0}, _GEN_182}; // @[elegant.scala 542:69]
    pp3_REG_26 <= {{3'd0}, _GEN_183}; // @[elegant.scala 543:77]
    pp3_REG_27 <= pp3_REG_26; // @[elegant.scala 543:25]
    pp4_REG_39 <= {{1'd0}, _GEN_184}; // @[elegant.scala 544:85]
    pp4_REG_40 <= pp4_REG_39; // @[elegant.scala 544:33]
    pp4_REG_41 <= pp4_REG_40; // @[elegant.scala 544:25]
    pp5_REG_52 <= {{3'd0}, _GEN_185}; // @[elegant.scala 545:93]
    pp5_REG_53 <= pp5_REG_52; // @[elegant.scala 545:41]
    pp5_REG_54 <= pp5_REG_53; // @[elegant.scala 545:33]
    pp5_REG_55 <= pp5_REG_54; // @[elegant.scala 545:25]
    pp6_REG_65 <= {{1'd0}, _GEN_186}; // @[elegant.scala 546:101]
    pp6_REG_66 <= pp6_REG_65; // @[elegant.scala 546:49]
    pp6_REG_67 <= pp6_REG_66; // @[elegant.scala 546:41]
    pp6_REG_68 <= pp6_REG_67; // @[elegant.scala 546:33]
    pp6_REG_69 <= pp6_REG_68; // @[elegant.scala 546:25]
    pp7_REG_78 <= {{3'd0}, _GEN_187}; // @[elegant.scala 547:109]
    pp7_REG_79 <= pp7_REG_78; // @[elegant.scala 547:57]
    pp7_REG_80 <= pp7_REG_79; // @[elegant.scala 547:49]
    pp7_REG_81 <= pp7_REG_80; // @[elegant.scala 547:41]
    pp7_REG_82 <= pp7_REG_81; // @[elegant.scala 547:33]
    pp7_REG_83 <= pp7_REG_82; // @[elegant.scala 547:25]
    pp8_REG_91 <= {{1'd0}, _GEN_188}; // @[elegant.scala 548:117]
    pp8_REG_92 <= pp8_REG_91; // @[elegant.scala 548:65]
    pp8_REG_93 <= pp8_REG_92; // @[elegant.scala 548:57]
    pp8_REG_94 <= pp8_REG_93; // @[elegant.scala 548:49]
    pp8_REG_95 <= pp8_REG_94; // @[elegant.scala 548:41]
    pp8_REG_96 <= pp8_REG_95; // @[elegant.scala 548:33]
    pp8_REG_97 <= pp8_REG_96; // @[elegant.scala 548:25]
    dotProductRegs_13_REG <= {{7'd0}, _GEN_195}; // @[elegant.scala 549:195]
    dotProductRegs_13_REG_1 <= dotProductRegs_13_REG; // @[elegant.scala 549:143]
    dotProductRegs_13_REG_2 <= dotProductRegs_13_REG_1; // @[elegant.scala 549:135]
    dotProductRegs_13_REG_3 <= dotProductRegs_13_REG_2; // @[elegant.scala 549:127]
    dotProductRegs_13_REG_4 <= dotProductRegs_13_REG_3; // @[elegant.scala 549:119]
    dotProductRegs_13_REG_5 <= dotProductRegs_13_REG_4; // @[elegant.scala 549:111]
    dotProductRegs_13_REG_6 <= dotProductRegs_13_REG_5; // @[elegant.scala 549:103]
    dotProductRegs_13_REG_7 <= dotProductRegs_13_REG_6; // @[elegant.scala 549:95]
    if (reset) begin // @[elegant.scala 524:34]
      multiplierReg_14 <= 6'h0; // @[elegant.scala 524:34]
    end else begin
      multiplierReg_14 <= io_in_a_man_14; // @[elegant.scala 538:21]
    end
    if (reset) begin // @[elegant.scala 525:35]
      multiplierReg2_14 <= 6'h0; // @[elegant.scala 525:35]
    end else begin
      multiplierReg2_14 <= io_in_b_man_14; // @[elegant.scala 539:22]
    end
    if (reset) begin // @[elegant.scala 527:28]
      signReg_14 <= 1'h0; // @[elegant.scala 527:28]
    end else begin
      signReg_14 <= io_in_a_sign_14; // @[elegant.scala 537:15]
    end
    if (reset) begin // @[elegant.scala 528:24]
      pp1_14 <= 12'h0; // @[elegant.scala 528:24]
    end else begin
      pp1_14 <= {{8'd0}, _pp1_T_44}; // @[elegant.scala 541:15]
    end
    if (reset) begin // @[elegant.scala 529:24]
      pp2_14 <= 12'h0; // @[elegant.scala 529:24]
    end else begin
      pp2_14 <= {{5'd0}, pp2_REG_14}; // @[elegant.scala 542:15]
    end
    if (reset) begin // @[elegant.scala 530:24]
      pp3_14 <= 12'h0; // @[elegant.scala 530:24]
    end else begin
      pp3_14 <= {{1'd0}, pp3_REG_29}; // @[elegant.scala 543:15]
    end
    if (reset) begin // @[elegant.scala 531:24]
      pp4_14 <= 12'h0; // @[elegant.scala 531:24]
    end else begin
      pp4_14 <= {{5'd0}, pp4_REG_44}; // @[elegant.scala 544:15]
    end
    if (reset) begin // @[elegant.scala 532:24]
      pp5_14 <= 12'h0; // @[elegant.scala 532:24]
    end else begin
      pp5_14 <= {{1'd0}, pp5_REG_59}; // @[elegant.scala 545:15]
    end
    if (reset) begin // @[elegant.scala 533:24]
      pp6_14 <= 12'h0; // @[elegant.scala 533:24]
    end else begin
      pp6_14 <= {{1'd0}, pp6_REG_74}; // @[elegant.scala 546:15]
    end
    if (reset) begin // @[elegant.scala 534:24]
      pp7_14 <= 12'h0; // @[elegant.scala 534:24]
    end else begin
      pp7_14 <= {{1'd0}, pp7_REG_89}; // @[elegant.scala 547:15]
    end
    if (reset) begin // @[elegant.scala 535:24]
      pp8_14 <= 12'h0; // @[elegant.scala 535:24]
    end else begin
      pp8_14 <= {{1'd0}, pp8_REG_104}; // @[elegant.scala 548:15]
    end
    pp2_REG_14 <= {{1'd0}, _GEN_196}; // @[elegant.scala 542:69]
    pp3_REG_28 <= {{3'd0}, _GEN_197}; // @[elegant.scala 543:77]
    pp3_REG_29 <= pp3_REG_28; // @[elegant.scala 543:25]
    pp4_REG_42 <= {{1'd0}, _GEN_198}; // @[elegant.scala 544:85]
    pp4_REG_43 <= pp4_REG_42; // @[elegant.scala 544:33]
    pp4_REG_44 <= pp4_REG_43; // @[elegant.scala 544:25]
    pp5_REG_56 <= {{3'd0}, _GEN_199}; // @[elegant.scala 545:93]
    pp5_REG_57 <= pp5_REG_56; // @[elegant.scala 545:41]
    pp5_REG_58 <= pp5_REG_57; // @[elegant.scala 545:33]
    pp5_REG_59 <= pp5_REG_58; // @[elegant.scala 545:25]
    pp6_REG_70 <= {{1'd0}, _GEN_200}; // @[elegant.scala 546:101]
    pp6_REG_71 <= pp6_REG_70; // @[elegant.scala 546:49]
    pp6_REG_72 <= pp6_REG_71; // @[elegant.scala 546:41]
    pp6_REG_73 <= pp6_REG_72; // @[elegant.scala 546:33]
    pp6_REG_74 <= pp6_REG_73; // @[elegant.scala 546:25]
    pp7_REG_84 <= {{3'd0}, _GEN_201}; // @[elegant.scala 547:109]
    pp7_REG_85 <= pp7_REG_84; // @[elegant.scala 547:57]
    pp7_REG_86 <= pp7_REG_85; // @[elegant.scala 547:49]
    pp7_REG_87 <= pp7_REG_86; // @[elegant.scala 547:41]
    pp7_REG_88 <= pp7_REG_87; // @[elegant.scala 547:33]
    pp7_REG_89 <= pp7_REG_88; // @[elegant.scala 547:25]
    pp8_REG_98 <= {{1'd0}, _GEN_202}; // @[elegant.scala 548:117]
    pp8_REG_99 <= pp8_REG_98; // @[elegant.scala 548:65]
    pp8_REG_100 <= pp8_REG_99; // @[elegant.scala 548:57]
    pp8_REG_101 <= pp8_REG_100; // @[elegant.scala 548:49]
    pp8_REG_102 <= pp8_REG_101; // @[elegant.scala 548:41]
    pp8_REG_103 <= pp8_REG_102; // @[elegant.scala 548:33]
    pp8_REG_104 <= pp8_REG_103; // @[elegant.scala 548:25]
    dotProductRegs_14_REG <= {{7'd0}, _GEN_209}; // @[elegant.scala 549:195]
    dotProductRegs_14_REG_1 <= dotProductRegs_14_REG; // @[elegant.scala 549:143]
    dotProductRegs_14_REG_2 <= dotProductRegs_14_REG_1; // @[elegant.scala 549:135]
    dotProductRegs_14_REG_3 <= dotProductRegs_14_REG_2; // @[elegant.scala 549:127]
    dotProductRegs_14_REG_4 <= dotProductRegs_14_REG_3; // @[elegant.scala 549:119]
    dotProductRegs_14_REG_5 <= dotProductRegs_14_REG_4; // @[elegant.scala 549:111]
    dotProductRegs_14_REG_6 <= dotProductRegs_14_REG_5; // @[elegant.scala 549:103]
    dotProductRegs_14_REG_7 <= dotProductRegs_14_REG_6; // @[elegant.scala 549:95]
    if (reset) begin // @[elegant.scala 524:34]
      multiplierReg_15 <= 6'h0; // @[elegant.scala 524:34]
    end else begin
      multiplierReg_15 <= io_in_a_man_15; // @[elegant.scala 538:21]
    end
    if (reset) begin // @[elegant.scala 525:35]
      multiplierReg2_15 <= 6'h0; // @[elegant.scala 525:35]
    end else begin
      multiplierReg2_15 <= io_in_b_man_15; // @[elegant.scala 539:22]
    end
    if (reset) begin // @[elegant.scala 527:28]
      signReg_15 <= 1'h0; // @[elegant.scala 527:28]
    end else begin
      signReg_15 <= io_in_a_sign_15; // @[elegant.scala 537:15]
    end
    if (reset) begin // @[elegant.scala 528:24]
      pp1_15 <= 12'h0; // @[elegant.scala 528:24]
    end else begin
      pp1_15 <= {{8'd0}, _pp1_T_47}; // @[elegant.scala 541:15]
    end
    if (reset) begin // @[elegant.scala 529:24]
      pp2_15 <= 12'h0; // @[elegant.scala 529:24]
    end else begin
      pp2_15 <= {{5'd0}, pp2_REG_15}; // @[elegant.scala 542:15]
    end
    if (reset) begin // @[elegant.scala 530:24]
      pp3_15 <= 12'h0; // @[elegant.scala 530:24]
    end else begin
      pp3_15 <= {{1'd0}, pp3_REG_31}; // @[elegant.scala 543:15]
    end
    if (reset) begin // @[elegant.scala 531:24]
      pp4_15 <= 12'h0; // @[elegant.scala 531:24]
    end else begin
      pp4_15 <= {{5'd0}, pp4_REG_47}; // @[elegant.scala 544:15]
    end
    if (reset) begin // @[elegant.scala 532:24]
      pp5_15 <= 12'h0; // @[elegant.scala 532:24]
    end else begin
      pp5_15 <= {{1'd0}, pp5_REG_63}; // @[elegant.scala 545:15]
    end
    if (reset) begin // @[elegant.scala 533:24]
      pp6_15 <= 12'h0; // @[elegant.scala 533:24]
    end else begin
      pp6_15 <= {{1'd0}, pp6_REG_79}; // @[elegant.scala 546:15]
    end
    if (reset) begin // @[elegant.scala 534:24]
      pp7_15 <= 12'h0; // @[elegant.scala 534:24]
    end else begin
      pp7_15 <= {{1'd0}, pp7_REG_95}; // @[elegant.scala 547:15]
    end
    if (reset) begin // @[elegant.scala 535:24]
      pp8_15 <= 12'h0; // @[elegant.scala 535:24]
    end else begin
      pp8_15 <= {{1'd0}, pp8_REG_111}; // @[elegant.scala 548:15]
    end
    pp2_REG_15 <= {{1'd0}, _GEN_210}; // @[elegant.scala 542:69]
    pp3_REG_30 <= {{3'd0}, _GEN_211}; // @[elegant.scala 543:77]
    pp3_REG_31 <= pp3_REG_30; // @[elegant.scala 543:25]
    pp4_REG_45 <= {{1'd0}, _GEN_212}; // @[elegant.scala 544:85]
    pp4_REG_46 <= pp4_REG_45; // @[elegant.scala 544:33]
    pp4_REG_47 <= pp4_REG_46; // @[elegant.scala 544:25]
    pp5_REG_60 <= {{3'd0}, _GEN_213}; // @[elegant.scala 545:93]
    pp5_REG_61 <= pp5_REG_60; // @[elegant.scala 545:41]
    pp5_REG_62 <= pp5_REG_61; // @[elegant.scala 545:33]
    pp5_REG_63 <= pp5_REG_62; // @[elegant.scala 545:25]
    pp6_REG_75 <= {{1'd0}, _GEN_214}; // @[elegant.scala 546:101]
    pp6_REG_76 <= pp6_REG_75; // @[elegant.scala 546:49]
    pp6_REG_77 <= pp6_REG_76; // @[elegant.scala 546:41]
    pp6_REG_78 <= pp6_REG_77; // @[elegant.scala 546:33]
    pp6_REG_79 <= pp6_REG_78; // @[elegant.scala 546:25]
    pp7_REG_90 <= {{3'd0}, _GEN_215}; // @[elegant.scala 547:109]
    pp7_REG_91 <= pp7_REG_90; // @[elegant.scala 547:57]
    pp7_REG_92 <= pp7_REG_91; // @[elegant.scala 547:49]
    pp7_REG_93 <= pp7_REG_92; // @[elegant.scala 547:41]
    pp7_REG_94 <= pp7_REG_93; // @[elegant.scala 547:33]
    pp7_REG_95 <= pp7_REG_94; // @[elegant.scala 547:25]
    pp8_REG_105 <= {{1'd0}, _GEN_216}; // @[elegant.scala 548:117]
    pp8_REG_106 <= pp8_REG_105; // @[elegant.scala 548:65]
    pp8_REG_107 <= pp8_REG_106; // @[elegant.scala 548:57]
    pp8_REG_108 <= pp8_REG_107; // @[elegant.scala 548:49]
    pp8_REG_109 <= pp8_REG_108; // @[elegant.scala 548:41]
    pp8_REG_110 <= pp8_REG_109; // @[elegant.scala 548:33]
    pp8_REG_111 <= pp8_REG_110; // @[elegant.scala 548:25]
    dotProductRegs_15_REG <= {{7'd0}, _GEN_223}; // @[elegant.scala 549:195]
    dotProductRegs_15_REG_1 <= dotProductRegs_15_REG; // @[elegant.scala 549:143]
    dotProductRegs_15_REG_2 <= dotProductRegs_15_REG_1; // @[elegant.scala 549:135]
    dotProductRegs_15_REG_3 <= dotProductRegs_15_REG_2; // @[elegant.scala 549:127]
    dotProductRegs_15_REG_4 <= dotProductRegs_15_REG_3; // @[elegant.scala 549:119]
    dotProductRegs_15_REG_5 <= dotProductRegs_15_REG_4; // @[elegant.scala 549:111]
    dotProductRegs_15_REG_6 <= dotProductRegs_15_REG_5; // @[elegant.scala 549:103]
    dotProductRegs_15_REG_7 <= dotProductRegs_15_REG_6; // @[elegant.scala 549:95]
    if (reset) begin // @[elegant.scala 585:28]
      right_shift <= 8'h0; // @[elegant.scala 585:28]
    end else begin
      right_shift <= {{3'd0}, _right_shift_T_42}; // @[elegant.scala 589:15]
    end
    if (reset) begin // @[elegant.scala 586:29]
      actual_shift <= 8'h0; // @[elegant.scala 586:29]
    end else begin
      actual_shift <= _actual_shift_T_3; // @[elegant.scala 591:16]
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
  dotProductRegs_0 = _RAND_0[11:0];
  _RAND_1 = {1{`RANDOM}};
  dotProductRegs_1 = _RAND_1[11:0];
  _RAND_2 = {1{`RANDOM}};
  dotProductRegs_2 = _RAND_2[11:0];
  _RAND_3 = {1{`RANDOM}};
  dotProductRegs_3 = _RAND_3[11:0];
  _RAND_4 = {1{`RANDOM}};
  dotProductRegs_4 = _RAND_4[11:0];
  _RAND_5 = {1{`RANDOM}};
  dotProductRegs_5 = _RAND_5[11:0];
  _RAND_6 = {1{`RANDOM}};
  dotProductRegs_6 = _RAND_6[11:0];
  _RAND_7 = {1{`RANDOM}};
  dotProductRegs_7 = _RAND_7[11:0];
  _RAND_8 = {1{`RANDOM}};
  dotProductRegs_8 = _RAND_8[11:0];
  _RAND_9 = {1{`RANDOM}};
  dotProductRegs_9 = _RAND_9[11:0];
  _RAND_10 = {1{`RANDOM}};
  dotProductRegs_10 = _RAND_10[11:0];
  _RAND_11 = {1{`RANDOM}};
  dotProductRegs_11 = _RAND_11[11:0];
  _RAND_12 = {1{`RANDOM}};
  dotProductRegs_12 = _RAND_12[11:0];
  _RAND_13 = {1{`RANDOM}};
  dotProductRegs_13 = _RAND_13[11:0];
  _RAND_14 = {1{`RANDOM}};
  dotProductRegs_14 = _RAND_14[11:0];
  _RAND_15 = {1{`RANDOM}};
  dotProductRegs_15 = _RAND_15[11:0];
  _RAND_16 = {1{`RANDOM}};
  two_complement_buffer_0 = _RAND_16[12:0];
  _RAND_17 = {1{`RANDOM}};
  two_complement_buffer_1 = _RAND_17[12:0];
  _RAND_18 = {1{`RANDOM}};
  two_complement_buffer_2 = _RAND_18[12:0];
  _RAND_19 = {1{`RANDOM}};
  two_complement_buffer_3 = _RAND_19[12:0];
  _RAND_20 = {1{`RANDOM}};
  two_complement_buffer_4 = _RAND_20[12:0];
  _RAND_21 = {1{`RANDOM}};
  two_complement_buffer_5 = _RAND_21[12:0];
  _RAND_22 = {1{`RANDOM}};
  two_complement_buffer_6 = _RAND_22[12:0];
  _RAND_23 = {1{`RANDOM}};
  two_complement_buffer_7 = _RAND_23[12:0];
  _RAND_24 = {1{`RANDOM}};
  two_complement_buffer_8 = _RAND_24[12:0];
  _RAND_25 = {1{`RANDOM}};
  two_complement_buffer_9 = _RAND_25[12:0];
  _RAND_26 = {1{`RANDOM}};
  two_complement_buffer_10 = _RAND_26[12:0];
  _RAND_27 = {1{`RANDOM}};
  two_complement_buffer_11 = _RAND_27[12:0];
  _RAND_28 = {1{`RANDOM}};
  two_complement_buffer_12 = _RAND_28[12:0];
  _RAND_29 = {1{`RANDOM}};
  two_complement_buffer_13 = _RAND_29[12:0];
  _RAND_30 = {1{`RANDOM}};
  two_complement_buffer_14 = _RAND_30[12:0];
  _RAND_31 = {1{`RANDOM}};
  two_complement_buffer_15 = _RAND_31[12:0];
  _RAND_32 = {1{`RANDOM}};
  two_complement_0 = _RAND_32[12:0];
  _RAND_33 = {1{`RANDOM}};
  two_complement_1 = _RAND_33[12:0];
  _RAND_34 = {1{`RANDOM}};
  two_complement_2 = _RAND_34[12:0];
  _RAND_35 = {1{`RANDOM}};
  two_complement_3 = _RAND_35[12:0];
  _RAND_36 = {1{`RANDOM}};
  two_complement_4 = _RAND_36[12:0];
  _RAND_37 = {1{`RANDOM}};
  two_complement_5 = _RAND_37[12:0];
  _RAND_38 = {1{`RANDOM}};
  two_complement_6 = _RAND_38[12:0];
  _RAND_39 = {1{`RANDOM}};
  two_complement_7 = _RAND_39[12:0];
  _RAND_40 = {1{`RANDOM}};
  two_complement_8 = _RAND_40[12:0];
  _RAND_41 = {1{`RANDOM}};
  two_complement_9 = _RAND_41[12:0];
  _RAND_42 = {1{`RANDOM}};
  two_complement_10 = _RAND_42[12:0];
  _RAND_43 = {1{`RANDOM}};
  two_complement_11 = _RAND_43[12:0];
  _RAND_44 = {1{`RANDOM}};
  two_complement_12 = _RAND_44[12:0];
  _RAND_45 = {1{`RANDOM}};
  two_complement_13 = _RAND_45[12:0];
  _RAND_46 = {1{`RANDOM}};
  two_complement_14 = _RAND_46[12:0];
  _RAND_47 = {1{`RANDOM}};
  two_complement_15 = _RAND_47[12:0];
  _RAND_48 = {1{`RANDOM}};
  signs_0 = _RAND_48[0:0];
  _RAND_49 = {1{`RANDOM}};
  signs_1 = _RAND_49[0:0];
  _RAND_50 = {1{`RANDOM}};
  signs_2 = _RAND_50[0:0];
  _RAND_51 = {1{`RANDOM}};
  signs_3 = _RAND_51[0:0];
  _RAND_52 = {1{`RANDOM}};
  signs_4 = _RAND_52[0:0];
  _RAND_53 = {1{`RANDOM}};
  signs_5 = _RAND_53[0:0];
  _RAND_54 = {1{`RANDOM}};
  signs_6 = _RAND_54[0:0];
  _RAND_55 = {1{`RANDOM}};
  signs_7 = _RAND_55[0:0];
  _RAND_56 = {1{`RANDOM}};
  signs_8 = _RAND_56[0:0];
  _RAND_57 = {1{`RANDOM}};
  signs_9 = _RAND_57[0:0];
  _RAND_58 = {1{`RANDOM}};
  signs_10 = _RAND_58[0:0];
  _RAND_59 = {1{`RANDOM}};
  signs_11 = _RAND_59[0:0];
  _RAND_60 = {1{`RANDOM}};
  signs_12 = _RAND_60[0:0];
  _RAND_61 = {1{`RANDOM}};
  signs_13 = _RAND_61[0:0];
  _RAND_62 = {1{`RANDOM}};
  signs_14 = _RAND_62[0:0];
  _RAND_63 = {1{`RANDOM}};
  signs_15 = _RAND_63[0:0];
  _RAND_64 = {1{`RANDOM}};
  acc = _RAND_64[27:0];
  _RAND_65 = {1{`RANDOM}};
  acc_hbfp = _RAND_65[27:0];
  _RAND_66 = {1{`RANDOM}};
  acc_buf = _RAND_66[27:0];
  _RAND_67 = {1{`RANDOM}};
  multiplierReg = _RAND_67[5:0];
  _RAND_68 = {1{`RANDOM}};
  multiplierReg2 = _RAND_68[5:0];
  _RAND_69 = {1{`RANDOM}};
  signReg = _RAND_69[0:0];
  _RAND_70 = {1{`RANDOM}};
  pp1 = _RAND_70[11:0];
  _RAND_71 = {1{`RANDOM}};
  pp2 = _RAND_71[11:0];
  _RAND_72 = {1{`RANDOM}};
  pp3 = _RAND_72[11:0];
  _RAND_73 = {1{`RANDOM}};
  pp4 = _RAND_73[11:0];
  _RAND_74 = {1{`RANDOM}};
  pp5 = _RAND_74[11:0];
  _RAND_75 = {1{`RANDOM}};
  pp6 = _RAND_75[11:0];
  _RAND_76 = {1{`RANDOM}};
  pp7 = _RAND_76[11:0];
  _RAND_77 = {1{`RANDOM}};
  pp8 = _RAND_77[11:0];
  _RAND_78 = {1{`RANDOM}};
  pp2_REG = _RAND_78[6:0];
  _RAND_79 = {1{`RANDOM}};
  pp3_REG = _RAND_79[10:0];
  _RAND_80 = {1{`RANDOM}};
  pp3_REG_1 = _RAND_80[10:0];
  _RAND_81 = {1{`RANDOM}};
  pp4_REG = _RAND_81[6:0];
  _RAND_82 = {1{`RANDOM}};
  pp4_REG_1 = _RAND_82[6:0];
  _RAND_83 = {1{`RANDOM}};
  pp4_REG_2 = _RAND_83[6:0];
  _RAND_84 = {1{`RANDOM}};
  pp5_REG = _RAND_84[10:0];
  _RAND_85 = {1{`RANDOM}};
  pp5_REG_1 = _RAND_85[10:0];
  _RAND_86 = {1{`RANDOM}};
  pp5_REG_2 = _RAND_86[10:0];
  _RAND_87 = {1{`RANDOM}};
  pp5_REG_3 = _RAND_87[10:0];
  _RAND_88 = {1{`RANDOM}};
  pp6_REG = _RAND_88[10:0];
  _RAND_89 = {1{`RANDOM}};
  pp6_REG_1 = _RAND_89[10:0];
  _RAND_90 = {1{`RANDOM}};
  pp6_REG_2 = _RAND_90[10:0];
  _RAND_91 = {1{`RANDOM}};
  pp6_REG_3 = _RAND_91[10:0];
  _RAND_92 = {1{`RANDOM}};
  pp6_REG_4 = _RAND_92[10:0];
  _RAND_93 = {1{`RANDOM}};
  pp7_REG = _RAND_93[10:0];
  _RAND_94 = {1{`RANDOM}};
  pp7_REG_1 = _RAND_94[10:0];
  _RAND_95 = {1{`RANDOM}};
  pp7_REG_2 = _RAND_95[10:0];
  _RAND_96 = {1{`RANDOM}};
  pp7_REG_3 = _RAND_96[10:0];
  _RAND_97 = {1{`RANDOM}};
  pp7_REG_4 = _RAND_97[10:0];
  _RAND_98 = {1{`RANDOM}};
  pp7_REG_5 = _RAND_98[10:0];
  _RAND_99 = {1{`RANDOM}};
  pp8_REG = _RAND_99[10:0];
  _RAND_100 = {1{`RANDOM}};
  pp8_REG_1 = _RAND_100[10:0];
  _RAND_101 = {1{`RANDOM}};
  pp8_REG_2 = _RAND_101[10:0];
  _RAND_102 = {1{`RANDOM}};
  pp8_REG_3 = _RAND_102[10:0];
  _RAND_103 = {1{`RANDOM}};
  pp8_REG_4 = _RAND_103[10:0];
  _RAND_104 = {1{`RANDOM}};
  pp8_REG_5 = _RAND_104[10:0];
  _RAND_105 = {1{`RANDOM}};
  pp8_REG_6 = _RAND_105[10:0];
  _RAND_106 = {1{`RANDOM}};
  dotProductRegs_0_REG = _RAND_106[18:0];
  _RAND_107 = {1{`RANDOM}};
  dotProductRegs_0_REG_1 = _RAND_107[18:0];
  _RAND_108 = {1{`RANDOM}};
  dotProductRegs_0_REG_2 = _RAND_108[18:0];
  _RAND_109 = {1{`RANDOM}};
  dotProductRegs_0_REG_3 = _RAND_109[18:0];
  _RAND_110 = {1{`RANDOM}};
  dotProductRegs_0_REG_4 = _RAND_110[18:0];
  _RAND_111 = {1{`RANDOM}};
  dotProductRegs_0_REG_5 = _RAND_111[18:0];
  _RAND_112 = {1{`RANDOM}};
  dotProductRegs_0_REG_6 = _RAND_112[18:0];
  _RAND_113 = {1{`RANDOM}};
  dotProductRegs_0_REG_7 = _RAND_113[18:0];
  _RAND_114 = {1{`RANDOM}};
  multiplierReg_1 = _RAND_114[5:0];
  _RAND_115 = {1{`RANDOM}};
  multiplierReg2_1 = _RAND_115[5:0];
  _RAND_116 = {1{`RANDOM}};
  signReg_1 = _RAND_116[0:0];
  _RAND_117 = {1{`RANDOM}};
  pp1_1 = _RAND_117[11:0];
  _RAND_118 = {1{`RANDOM}};
  pp2_1 = _RAND_118[11:0];
  _RAND_119 = {1{`RANDOM}};
  pp3_1 = _RAND_119[11:0];
  _RAND_120 = {1{`RANDOM}};
  pp4_1 = _RAND_120[11:0];
  _RAND_121 = {1{`RANDOM}};
  pp5_1 = _RAND_121[11:0];
  _RAND_122 = {1{`RANDOM}};
  pp6_1 = _RAND_122[11:0];
  _RAND_123 = {1{`RANDOM}};
  pp7_1 = _RAND_123[11:0];
  _RAND_124 = {1{`RANDOM}};
  pp8_1 = _RAND_124[11:0];
  _RAND_125 = {1{`RANDOM}};
  pp2_REG_1 = _RAND_125[6:0];
  _RAND_126 = {1{`RANDOM}};
  pp3_REG_2 = _RAND_126[10:0];
  _RAND_127 = {1{`RANDOM}};
  pp3_REG_3 = _RAND_127[10:0];
  _RAND_128 = {1{`RANDOM}};
  pp4_REG_3 = _RAND_128[6:0];
  _RAND_129 = {1{`RANDOM}};
  pp4_REG_4 = _RAND_129[6:0];
  _RAND_130 = {1{`RANDOM}};
  pp4_REG_5 = _RAND_130[6:0];
  _RAND_131 = {1{`RANDOM}};
  pp5_REG_4 = _RAND_131[10:0];
  _RAND_132 = {1{`RANDOM}};
  pp5_REG_5 = _RAND_132[10:0];
  _RAND_133 = {1{`RANDOM}};
  pp5_REG_6 = _RAND_133[10:0];
  _RAND_134 = {1{`RANDOM}};
  pp5_REG_7 = _RAND_134[10:0];
  _RAND_135 = {1{`RANDOM}};
  pp6_REG_5 = _RAND_135[10:0];
  _RAND_136 = {1{`RANDOM}};
  pp6_REG_6 = _RAND_136[10:0];
  _RAND_137 = {1{`RANDOM}};
  pp6_REG_7 = _RAND_137[10:0];
  _RAND_138 = {1{`RANDOM}};
  pp6_REG_8 = _RAND_138[10:0];
  _RAND_139 = {1{`RANDOM}};
  pp6_REG_9 = _RAND_139[10:0];
  _RAND_140 = {1{`RANDOM}};
  pp7_REG_6 = _RAND_140[10:0];
  _RAND_141 = {1{`RANDOM}};
  pp7_REG_7 = _RAND_141[10:0];
  _RAND_142 = {1{`RANDOM}};
  pp7_REG_8 = _RAND_142[10:0];
  _RAND_143 = {1{`RANDOM}};
  pp7_REG_9 = _RAND_143[10:0];
  _RAND_144 = {1{`RANDOM}};
  pp7_REG_10 = _RAND_144[10:0];
  _RAND_145 = {1{`RANDOM}};
  pp7_REG_11 = _RAND_145[10:0];
  _RAND_146 = {1{`RANDOM}};
  pp8_REG_7 = _RAND_146[10:0];
  _RAND_147 = {1{`RANDOM}};
  pp8_REG_8 = _RAND_147[10:0];
  _RAND_148 = {1{`RANDOM}};
  pp8_REG_9 = _RAND_148[10:0];
  _RAND_149 = {1{`RANDOM}};
  pp8_REG_10 = _RAND_149[10:0];
  _RAND_150 = {1{`RANDOM}};
  pp8_REG_11 = _RAND_150[10:0];
  _RAND_151 = {1{`RANDOM}};
  pp8_REG_12 = _RAND_151[10:0];
  _RAND_152 = {1{`RANDOM}};
  pp8_REG_13 = _RAND_152[10:0];
  _RAND_153 = {1{`RANDOM}};
  dotProductRegs_1_REG = _RAND_153[18:0];
  _RAND_154 = {1{`RANDOM}};
  dotProductRegs_1_REG_1 = _RAND_154[18:0];
  _RAND_155 = {1{`RANDOM}};
  dotProductRegs_1_REG_2 = _RAND_155[18:0];
  _RAND_156 = {1{`RANDOM}};
  dotProductRegs_1_REG_3 = _RAND_156[18:0];
  _RAND_157 = {1{`RANDOM}};
  dotProductRegs_1_REG_4 = _RAND_157[18:0];
  _RAND_158 = {1{`RANDOM}};
  dotProductRegs_1_REG_5 = _RAND_158[18:0];
  _RAND_159 = {1{`RANDOM}};
  dotProductRegs_1_REG_6 = _RAND_159[18:0];
  _RAND_160 = {1{`RANDOM}};
  dotProductRegs_1_REG_7 = _RAND_160[18:0];
  _RAND_161 = {1{`RANDOM}};
  multiplierReg_2 = _RAND_161[5:0];
  _RAND_162 = {1{`RANDOM}};
  multiplierReg2_2 = _RAND_162[5:0];
  _RAND_163 = {1{`RANDOM}};
  signReg_2 = _RAND_163[0:0];
  _RAND_164 = {1{`RANDOM}};
  pp1_2 = _RAND_164[11:0];
  _RAND_165 = {1{`RANDOM}};
  pp2_2 = _RAND_165[11:0];
  _RAND_166 = {1{`RANDOM}};
  pp3_2 = _RAND_166[11:0];
  _RAND_167 = {1{`RANDOM}};
  pp4_2 = _RAND_167[11:0];
  _RAND_168 = {1{`RANDOM}};
  pp5_2 = _RAND_168[11:0];
  _RAND_169 = {1{`RANDOM}};
  pp6_2 = _RAND_169[11:0];
  _RAND_170 = {1{`RANDOM}};
  pp7_2 = _RAND_170[11:0];
  _RAND_171 = {1{`RANDOM}};
  pp8_2 = _RAND_171[11:0];
  _RAND_172 = {1{`RANDOM}};
  pp2_REG_2 = _RAND_172[6:0];
  _RAND_173 = {1{`RANDOM}};
  pp3_REG_4 = _RAND_173[10:0];
  _RAND_174 = {1{`RANDOM}};
  pp3_REG_5 = _RAND_174[10:0];
  _RAND_175 = {1{`RANDOM}};
  pp4_REG_6 = _RAND_175[6:0];
  _RAND_176 = {1{`RANDOM}};
  pp4_REG_7 = _RAND_176[6:0];
  _RAND_177 = {1{`RANDOM}};
  pp4_REG_8 = _RAND_177[6:0];
  _RAND_178 = {1{`RANDOM}};
  pp5_REG_8 = _RAND_178[10:0];
  _RAND_179 = {1{`RANDOM}};
  pp5_REG_9 = _RAND_179[10:0];
  _RAND_180 = {1{`RANDOM}};
  pp5_REG_10 = _RAND_180[10:0];
  _RAND_181 = {1{`RANDOM}};
  pp5_REG_11 = _RAND_181[10:0];
  _RAND_182 = {1{`RANDOM}};
  pp6_REG_10 = _RAND_182[10:0];
  _RAND_183 = {1{`RANDOM}};
  pp6_REG_11 = _RAND_183[10:0];
  _RAND_184 = {1{`RANDOM}};
  pp6_REG_12 = _RAND_184[10:0];
  _RAND_185 = {1{`RANDOM}};
  pp6_REG_13 = _RAND_185[10:0];
  _RAND_186 = {1{`RANDOM}};
  pp6_REG_14 = _RAND_186[10:0];
  _RAND_187 = {1{`RANDOM}};
  pp7_REG_12 = _RAND_187[10:0];
  _RAND_188 = {1{`RANDOM}};
  pp7_REG_13 = _RAND_188[10:0];
  _RAND_189 = {1{`RANDOM}};
  pp7_REG_14 = _RAND_189[10:0];
  _RAND_190 = {1{`RANDOM}};
  pp7_REG_15 = _RAND_190[10:0];
  _RAND_191 = {1{`RANDOM}};
  pp7_REG_16 = _RAND_191[10:0];
  _RAND_192 = {1{`RANDOM}};
  pp7_REG_17 = _RAND_192[10:0];
  _RAND_193 = {1{`RANDOM}};
  pp8_REG_14 = _RAND_193[10:0];
  _RAND_194 = {1{`RANDOM}};
  pp8_REG_15 = _RAND_194[10:0];
  _RAND_195 = {1{`RANDOM}};
  pp8_REG_16 = _RAND_195[10:0];
  _RAND_196 = {1{`RANDOM}};
  pp8_REG_17 = _RAND_196[10:0];
  _RAND_197 = {1{`RANDOM}};
  pp8_REG_18 = _RAND_197[10:0];
  _RAND_198 = {1{`RANDOM}};
  pp8_REG_19 = _RAND_198[10:0];
  _RAND_199 = {1{`RANDOM}};
  pp8_REG_20 = _RAND_199[10:0];
  _RAND_200 = {1{`RANDOM}};
  dotProductRegs_2_REG = _RAND_200[18:0];
  _RAND_201 = {1{`RANDOM}};
  dotProductRegs_2_REG_1 = _RAND_201[18:0];
  _RAND_202 = {1{`RANDOM}};
  dotProductRegs_2_REG_2 = _RAND_202[18:0];
  _RAND_203 = {1{`RANDOM}};
  dotProductRegs_2_REG_3 = _RAND_203[18:0];
  _RAND_204 = {1{`RANDOM}};
  dotProductRegs_2_REG_4 = _RAND_204[18:0];
  _RAND_205 = {1{`RANDOM}};
  dotProductRegs_2_REG_5 = _RAND_205[18:0];
  _RAND_206 = {1{`RANDOM}};
  dotProductRegs_2_REG_6 = _RAND_206[18:0];
  _RAND_207 = {1{`RANDOM}};
  dotProductRegs_2_REG_7 = _RAND_207[18:0];
  _RAND_208 = {1{`RANDOM}};
  multiplierReg_3 = _RAND_208[5:0];
  _RAND_209 = {1{`RANDOM}};
  multiplierReg2_3 = _RAND_209[5:0];
  _RAND_210 = {1{`RANDOM}};
  signReg_3 = _RAND_210[0:0];
  _RAND_211 = {1{`RANDOM}};
  pp1_3 = _RAND_211[11:0];
  _RAND_212 = {1{`RANDOM}};
  pp2_3 = _RAND_212[11:0];
  _RAND_213 = {1{`RANDOM}};
  pp3_3 = _RAND_213[11:0];
  _RAND_214 = {1{`RANDOM}};
  pp4_3 = _RAND_214[11:0];
  _RAND_215 = {1{`RANDOM}};
  pp5_3 = _RAND_215[11:0];
  _RAND_216 = {1{`RANDOM}};
  pp6_3 = _RAND_216[11:0];
  _RAND_217 = {1{`RANDOM}};
  pp7_3 = _RAND_217[11:0];
  _RAND_218 = {1{`RANDOM}};
  pp8_3 = _RAND_218[11:0];
  _RAND_219 = {1{`RANDOM}};
  pp2_REG_3 = _RAND_219[6:0];
  _RAND_220 = {1{`RANDOM}};
  pp3_REG_6 = _RAND_220[10:0];
  _RAND_221 = {1{`RANDOM}};
  pp3_REG_7 = _RAND_221[10:0];
  _RAND_222 = {1{`RANDOM}};
  pp4_REG_9 = _RAND_222[6:0];
  _RAND_223 = {1{`RANDOM}};
  pp4_REG_10 = _RAND_223[6:0];
  _RAND_224 = {1{`RANDOM}};
  pp4_REG_11 = _RAND_224[6:0];
  _RAND_225 = {1{`RANDOM}};
  pp5_REG_12 = _RAND_225[10:0];
  _RAND_226 = {1{`RANDOM}};
  pp5_REG_13 = _RAND_226[10:0];
  _RAND_227 = {1{`RANDOM}};
  pp5_REG_14 = _RAND_227[10:0];
  _RAND_228 = {1{`RANDOM}};
  pp5_REG_15 = _RAND_228[10:0];
  _RAND_229 = {1{`RANDOM}};
  pp6_REG_15 = _RAND_229[10:0];
  _RAND_230 = {1{`RANDOM}};
  pp6_REG_16 = _RAND_230[10:0];
  _RAND_231 = {1{`RANDOM}};
  pp6_REG_17 = _RAND_231[10:0];
  _RAND_232 = {1{`RANDOM}};
  pp6_REG_18 = _RAND_232[10:0];
  _RAND_233 = {1{`RANDOM}};
  pp6_REG_19 = _RAND_233[10:0];
  _RAND_234 = {1{`RANDOM}};
  pp7_REG_18 = _RAND_234[10:0];
  _RAND_235 = {1{`RANDOM}};
  pp7_REG_19 = _RAND_235[10:0];
  _RAND_236 = {1{`RANDOM}};
  pp7_REG_20 = _RAND_236[10:0];
  _RAND_237 = {1{`RANDOM}};
  pp7_REG_21 = _RAND_237[10:0];
  _RAND_238 = {1{`RANDOM}};
  pp7_REG_22 = _RAND_238[10:0];
  _RAND_239 = {1{`RANDOM}};
  pp7_REG_23 = _RAND_239[10:0];
  _RAND_240 = {1{`RANDOM}};
  pp8_REG_21 = _RAND_240[10:0];
  _RAND_241 = {1{`RANDOM}};
  pp8_REG_22 = _RAND_241[10:0];
  _RAND_242 = {1{`RANDOM}};
  pp8_REG_23 = _RAND_242[10:0];
  _RAND_243 = {1{`RANDOM}};
  pp8_REG_24 = _RAND_243[10:0];
  _RAND_244 = {1{`RANDOM}};
  pp8_REG_25 = _RAND_244[10:0];
  _RAND_245 = {1{`RANDOM}};
  pp8_REG_26 = _RAND_245[10:0];
  _RAND_246 = {1{`RANDOM}};
  pp8_REG_27 = _RAND_246[10:0];
  _RAND_247 = {1{`RANDOM}};
  dotProductRegs_3_REG = _RAND_247[18:0];
  _RAND_248 = {1{`RANDOM}};
  dotProductRegs_3_REG_1 = _RAND_248[18:0];
  _RAND_249 = {1{`RANDOM}};
  dotProductRegs_3_REG_2 = _RAND_249[18:0];
  _RAND_250 = {1{`RANDOM}};
  dotProductRegs_3_REG_3 = _RAND_250[18:0];
  _RAND_251 = {1{`RANDOM}};
  dotProductRegs_3_REG_4 = _RAND_251[18:0];
  _RAND_252 = {1{`RANDOM}};
  dotProductRegs_3_REG_5 = _RAND_252[18:0];
  _RAND_253 = {1{`RANDOM}};
  dotProductRegs_3_REG_6 = _RAND_253[18:0];
  _RAND_254 = {1{`RANDOM}};
  dotProductRegs_3_REG_7 = _RAND_254[18:0];
  _RAND_255 = {1{`RANDOM}};
  multiplierReg_4 = _RAND_255[5:0];
  _RAND_256 = {1{`RANDOM}};
  multiplierReg2_4 = _RAND_256[5:0];
  _RAND_257 = {1{`RANDOM}};
  signReg_4 = _RAND_257[0:0];
  _RAND_258 = {1{`RANDOM}};
  pp1_4 = _RAND_258[11:0];
  _RAND_259 = {1{`RANDOM}};
  pp2_4 = _RAND_259[11:0];
  _RAND_260 = {1{`RANDOM}};
  pp3_4 = _RAND_260[11:0];
  _RAND_261 = {1{`RANDOM}};
  pp4_4 = _RAND_261[11:0];
  _RAND_262 = {1{`RANDOM}};
  pp5_4 = _RAND_262[11:0];
  _RAND_263 = {1{`RANDOM}};
  pp6_4 = _RAND_263[11:0];
  _RAND_264 = {1{`RANDOM}};
  pp7_4 = _RAND_264[11:0];
  _RAND_265 = {1{`RANDOM}};
  pp8_4 = _RAND_265[11:0];
  _RAND_266 = {1{`RANDOM}};
  pp2_REG_4 = _RAND_266[6:0];
  _RAND_267 = {1{`RANDOM}};
  pp3_REG_8 = _RAND_267[10:0];
  _RAND_268 = {1{`RANDOM}};
  pp3_REG_9 = _RAND_268[10:0];
  _RAND_269 = {1{`RANDOM}};
  pp4_REG_12 = _RAND_269[6:0];
  _RAND_270 = {1{`RANDOM}};
  pp4_REG_13 = _RAND_270[6:0];
  _RAND_271 = {1{`RANDOM}};
  pp4_REG_14 = _RAND_271[6:0];
  _RAND_272 = {1{`RANDOM}};
  pp5_REG_16 = _RAND_272[10:0];
  _RAND_273 = {1{`RANDOM}};
  pp5_REG_17 = _RAND_273[10:0];
  _RAND_274 = {1{`RANDOM}};
  pp5_REG_18 = _RAND_274[10:0];
  _RAND_275 = {1{`RANDOM}};
  pp5_REG_19 = _RAND_275[10:0];
  _RAND_276 = {1{`RANDOM}};
  pp6_REG_20 = _RAND_276[10:0];
  _RAND_277 = {1{`RANDOM}};
  pp6_REG_21 = _RAND_277[10:0];
  _RAND_278 = {1{`RANDOM}};
  pp6_REG_22 = _RAND_278[10:0];
  _RAND_279 = {1{`RANDOM}};
  pp6_REG_23 = _RAND_279[10:0];
  _RAND_280 = {1{`RANDOM}};
  pp6_REG_24 = _RAND_280[10:0];
  _RAND_281 = {1{`RANDOM}};
  pp7_REG_24 = _RAND_281[10:0];
  _RAND_282 = {1{`RANDOM}};
  pp7_REG_25 = _RAND_282[10:0];
  _RAND_283 = {1{`RANDOM}};
  pp7_REG_26 = _RAND_283[10:0];
  _RAND_284 = {1{`RANDOM}};
  pp7_REG_27 = _RAND_284[10:0];
  _RAND_285 = {1{`RANDOM}};
  pp7_REG_28 = _RAND_285[10:0];
  _RAND_286 = {1{`RANDOM}};
  pp7_REG_29 = _RAND_286[10:0];
  _RAND_287 = {1{`RANDOM}};
  pp8_REG_28 = _RAND_287[10:0];
  _RAND_288 = {1{`RANDOM}};
  pp8_REG_29 = _RAND_288[10:0];
  _RAND_289 = {1{`RANDOM}};
  pp8_REG_30 = _RAND_289[10:0];
  _RAND_290 = {1{`RANDOM}};
  pp8_REG_31 = _RAND_290[10:0];
  _RAND_291 = {1{`RANDOM}};
  pp8_REG_32 = _RAND_291[10:0];
  _RAND_292 = {1{`RANDOM}};
  pp8_REG_33 = _RAND_292[10:0];
  _RAND_293 = {1{`RANDOM}};
  pp8_REG_34 = _RAND_293[10:0];
  _RAND_294 = {1{`RANDOM}};
  dotProductRegs_4_REG = _RAND_294[18:0];
  _RAND_295 = {1{`RANDOM}};
  dotProductRegs_4_REG_1 = _RAND_295[18:0];
  _RAND_296 = {1{`RANDOM}};
  dotProductRegs_4_REG_2 = _RAND_296[18:0];
  _RAND_297 = {1{`RANDOM}};
  dotProductRegs_4_REG_3 = _RAND_297[18:0];
  _RAND_298 = {1{`RANDOM}};
  dotProductRegs_4_REG_4 = _RAND_298[18:0];
  _RAND_299 = {1{`RANDOM}};
  dotProductRegs_4_REG_5 = _RAND_299[18:0];
  _RAND_300 = {1{`RANDOM}};
  dotProductRegs_4_REG_6 = _RAND_300[18:0];
  _RAND_301 = {1{`RANDOM}};
  dotProductRegs_4_REG_7 = _RAND_301[18:0];
  _RAND_302 = {1{`RANDOM}};
  multiplierReg_5 = _RAND_302[5:0];
  _RAND_303 = {1{`RANDOM}};
  multiplierReg2_5 = _RAND_303[5:0];
  _RAND_304 = {1{`RANDOM}};
  signReg_5 = _RAND_304[0:0];
  _RAND_305 = {1{`RANDOM}};
  pp1_5 = _RAND_305[11:0];
  _RAND_306 = {1{`RANDOM}};
  pp2_5 = _RAND_306[11:0];
  _RAND_307 = {1{`RANDOM}};
  pp3_5 = _RAND_307[11:0];
  _RAND_308 = {1{`RANDOM}};
  pp4_5 = _RAND_308[11:0];
  _RAND_309 = {1{`RANDOM}};
  pp5_5 = _RAND_309[11:0];
  _RAND_310 = {1{`RANDOM}};
  pp6_5 = _RAND_310[11:0];
  _RAND_311 = {1{`RANDOM}};
  pp7_5 = _RAND_311[11:0];
  _RAND_312 = {1{`RANDOM}};
  pp8_5 = _RAND_312[11:0];
  _RAND_313 = {1{`RANDOM}};
  pp2_REG_5 = _RAND_313[6:0];
  _RAND_314 = {1{`RANDOM}};
  pp3_REG_10 = _RAND_314[10:0];
  _RAND_315 = {1{`RANDOM}};
  pp3_REG_11 = _RAND_315[10:0];
  _RAND_316 = {1{`RANDOM}};
  pp4_REG_15 = _RAND_316[6:0];
  _RAND_317 = {1{`RANDOM}};
  pp4_REG_16 = _RAND_317[6:0];
  _RAND_318 = {1{`RANDOM}};
  pp4_REG_17 = _RAND_318[6:0];
  _RAND_319 = {1{`RANDOM}};
  pp5_REG_20 = _RAND_319[10:0];
  _RAND_320 = {1{`RANDOM}};
  pp5_REG_21 = _RAND_320[10:0];
  _RAND_321 = {1{`RANDOM}};
  pp5_REG_22 = _RAND_321[10:0];
  _RAND_322 = {1{`RANDOM}};
  pp5_REG_23 = _RAND_322[10:0];
  _RAND_323 = {1{`RANDOM}};
  pp6_REG_25 = _RAND_323[10:0];
  _RAND_324 = {1{`RANDOM}};
  pp6_REG_26 = _RAND_324[10:0];
  _RAND_325 = {1{`RANDOM}};
  pp6_REG_27 = _RAND_325[10:0];
  _RAND_326 = {1{`RANDOM}};
  pp6_REG_28 = _RAND_326[10:0];
  _RAND_327 = {1{`RANDOM}};
  pp6_REG_29 = _RAND_327[10:0];
  _RAND_328 = {1{`RANDOM}};
  pp7_REG_30 = _RAND_328[10:0];
  _RAND_329 = {1{`RANDOM}};
  pp7_REG_31 = _RAND_329[10:0];
  _RAND_330 = {1{`RANDOM}};
  pp7_REG_32 = _RAND_330[10:0];
  _RAND_331 = {1{`RANDOM}};
  pp7_REG_33 = _RAND_331[10:0];
  _RAND_332 = {1{`RANDOM}};
  pp7_REG_34 = _RAND_332[10:0];
  _RAND_333 = {1{`RANDOM}};
  pp7_REG_35 = _RAND_333[10:0];
  _RAND_334 = {1{`RANDOM}};
  pp8_REG_35 = _RAND_334[10:0];
  _RAND_335 = {1{`RANDOM}};
  pp8_REG_36 = _RAND_335[10:0];
  _RAND_336 = {1{`RANDOM}};
  pp8_REG_37 = _RAND_336[10:0];
  _RAND_337 = {1{`RANDOM}};
  pp8_REG_38 = _RAND_337[10:0];
  _RAND_338 = {1{`RANDOM}};
  pp8_REG_39 = _RAND_338[10:0];
  _RAND_339 = {1{`RANDOM}};
  pp8_REG_40 = _RAND_339[10:0];
  _RAND_340 = {1{`RANDOM}};
  pp8_REG_41 = _RAND_340[10:0];
  _RAND_341 = {1{`RANDOM}};
  dotProductRegs_5_REG = _RAND_341[18:0];
  _RAND_342 = {1{`RANDOM}};
  dotProductRegs_5_REG_1 = _RAND_342[18:0];
  _RAND_343 = {1{`RANDOM}};
  dotProductRegs_5_REG_2 = _RAND_343[18:0];
  _RAND_344 = {1{`RANDOM}};
  dotProductRegs_5_REG_3 = _RAND_344[18:0];
  _RAND_345 = {1{`RANDOM}};
  dotProductRegs_5_REG_4 = _RAND_345[18:0];
  _RAND_346 = {1{`RANDOM}};
  dotProductRegs_5_REG_5 = _RAND_346[18:0];
  _RAND_347 = {1{`RANDOM}};
  dotProductRegs_5_REG_6 = _RAND_347[18:0];
  _RAND_348 = {1{`RANDOM}};
  dotProductRegs_5_REG_7 = _RAND_348[18:0];
  _RAND_349 = {1{`RANDOM}};
  multiplierReg_6 = _RAND_349[5:0];
  _RAND_350 = {1{`RANDOM}};
  multiplierReg2_6 = _RAND_350[5:0];
  _RAND_351 = {1{`RANDOM}};
  signReg_6 = _RAND_351[0:0];
  _RAND_352 = {1{`RANDOM}};
  pp1_6 = _RAND_352[11:0];
  _RAND_353 = {1{`RANDOM}};
  pp2_6 = _RAND_353[11:0];
  _RAND_354 = {1{`RANDOM}};
  pp3_6 = _RAND_354[11:0];
  _RAND_355 = {1{`RANDOM}};
  pp4_6 = _RAND_355[11:0];
  _RAND_356 = {1{`RANDOM}};
  pp5_6 = _RAND_356[11:0];
  _RAND_357 = {1{`RANDOM}};
  pp6_6 = _RAND_357[11:0];
  _RAND_358 = {1{`RANDOM}};
  pp7_6 = _RAND_358[11:0];
  _RAND_359 = {1{`RANDOM}};
  pp8_6 = _RAND_359[11:0];
  _RAND_360 = {1{`RANDOM}};
  pp2_REG_6 = _RAND_360[6:0];
  _RAND_361 = {1{`RANDOM}};
  pp3_REG_12 = _RAND_361[10:0];
  _RAND_362 = {1{`RANDOM}};
  pp3_REG_13 = _RAND_362[10:0];
  _RAND_363 = {1{`RANDOM}};
  pp4_REG_18 = _RAND_363[6:0];
  _RAND_364 = {1{`RANDOM}};
  pp4_REG_19 = _RAND_364[6:0];
  _RAND_365 = {1{`RANDOM}};
  pp4_REG_20 = _RAND_365[6:0];
  _RAND_366 = {1{`RANDOM}};
  pp5_REG_24 = _RAND_366[10:0];
  _RAND_367 = {1{`RANDOM}};
  pp5_REG_25 = _RAND_367[10:0];
  _RAND_368 = {1{`RANDOM}};
  pp5_REG_26 = _RAND_368[10:0];
  _RAND_369 = {1{`RANDOM}};
  pp5_REG_27 = _RAND_369[10:0];
  _RAND_370 = {1{`RANDOM}};
  pp6_REG_30 = _RAND_370[10:0];
  _RAND_371 = {1{`RANDOM}};
  pp6_REG_31 = _RAND_371[10:0];
  _RAND_372 = {1{`RANDOM}};
  pp6_REG_32 = _RAND_372[10:0];
  _RAND_373 = {1{`RANDOM}};
  pp6_REG_33 = _RAND_373[10:0];
  _RAND_374 = {1{`RANDOM}};
  pp6_REG_34 = _RAND_374[10:0];
  _RAND_375 = {1{`RANDOM}};
  pp7_REG_36 = _RAND_375[10:0];
  _RAND_376 = {1{`RANDOM}};
  pp7_REG_37 = _RAND_376[10:0];
  _RAND_377 = {1{`RANDOM}};
  pp7_REG_38 = _RAND_377[10:0];
  _RAND_378 = {1{`RANDOM}};
  pp7_REG_39 = _RAND_378[10:0];
  _RAND_379 = {1{`RANDOM}};
  pp7_REG_40 = _RAND_379[10:0];
  _RAND_380 = {1{`RANDOM}};
  pp7_REG_41 = _RAND_380[10:0];
  _RAND_381 = {1{`RANDOM}};
  pp8_REG_42 = _RAND_381[10:0];
  _RAND_382 = {1{`RANDOM}};
  pp8_REG_43 = _RAND_382[10:0];
  _RAND_383 = {1{`RANDOM}};
  pp8_REG_44 = _RAND_383[10:0];
  _RAND_384 = {1{`RANDOM}};
  pp8_REG_45 = _RAND_384[10:0];
  _RAND_385 = {1{`RANDOM}};
  pp8_REG_46 = _RAND_385[10:0];
  _RAND_386 = {1{`RANDOM}};
  pp8_REG_47 = _RAND_386[10:0];
  _RAND_387 = {1{`RANDOM}};
  pp8_REG_48 = _RAND_387[10:0];
  _RAND_388 = {1{`RANDOM}};
  dotProductRegs_6_REG = _RAND_388[18:0];
  _RAND_389 = {1{`RANDOM}};
  dotProductRegs_6_REG_1 = _RAND_389[18:0];
  _RAND_390 = {1{`RANDOM}};
  dotProductRegs_6_REG_2 = _RAND_390[18:0];
  _RAND_391 = {1{`RANDOM}};
  dotProductRegs_6_REG_3 = _RAND_391[18:0];
  _RAND_392 = {1{`RANDOM}};
  dotProductRegs_6_REG_4 = _RAND_392[18:0];
  _RAND_393 = {1{`RANDOM}};
  dotProductRegs_6_REG_5 = _RAND_393[18:0];
  _RAND_394 = {1{`RANDOM}};
  dotProductRegs_6_REG_6 = _RAND_394[18:0];
  _RAND_395 = {1{`RANDOM}};
  dotProductRegs_6_REG_7 = _RAND_395[18:0];
  _RAND_396 = {1{`RANDOM}};
  multiplierReg_7 = _RAND_396[5:0];
  _RAND_397 = {1{`RANDOM}};
  multiplierReg2_7 = _RAND_397[5:0];
  _RAND_398 = {1{`RANDOM}};
  signReg_7 = _RAND_398[0:0];
  _RAND_399 = {1{`RANDOM}};
  pp1_7 = _RAND_399[11:0];
  _RAND_400 = {1{`RANDOM}};
  pp2_7 = _RAND_400[11:0];
  _RAND_401 = {1{`RANDOM}};
  pp3_7 = _RAND_401[11:0];
  _RAND_402 = {1{`RANDOM}};
  pp4_7 = _RAND_402[11:0];
  _RAND_403 = {1{`RANDOM}};
  pp5_7 = _RAND_403[11:0];
  _RAND_404 = {1{`RANDOM}};
  pp6_7 = _RAND_404[11:0];
  _RAND_405 = {1{`RANDOM}};
  pp7_7 = _RAND_405[11:0];
  _RAND_406 = {1{`RANDOM}};
  pp8_7 = _RAND_406[11:0];
  _RAND_407 = {1{`RANDOM}};
  pp2_REG_7 = _RAND_407[6:0];
  _RAND_408 = {1{`RANDOM}};
  pp3_REG_14 = _RAND_408[10:0];
  _RAND_409 = {1{`RANDOM}};
  pp3_REG_15 = _RAND_409[10:0];
  _RAND_410 = {1{`RANDOM}};
  pp4_REG_21 = _RAND_410[6:0];
  _RAND_411 = {1{`RANDOM}};
  pp4_REG_22 = _RAND_411[6:0];
  _RAND_412 = {1{`RANDOM}};
  pp4_REG_23 = _RAND_412[6:0];
  _RAND_413 = {1{`RANDOM}};
  pp5_REG_28 = _RAND_413[10:0];
  _RAND_414 = {1{`RANDOM}};
  pp5_REG_29 = _RAND_414[10:0];
  _RAND_415 = {1{`RANDOM}};
  pp5_REG_30 = _RAND_415[10:0];
  _RAND_416 = {1{`RANDOM}};
  pp5_REG_31 = _RAND_416[10:0];
  _RAND_417 = {1{`RANDOM}};
  pp6_REG_35 = _RAND_417[10:0];
  _RAND_418 = {1{`RANDOM}};
  pp6_REG_36 = _RAND_418[10:0];
  _RAND_419 = {1{`RANDOM}};
  pp6_REG_37 = _RAND_419[10:0];
  _RAND_420 = {1{`RANDOM}};
  pp6_REG_38 = _RAND_420[10:0];
  _RAND_421 = {1{`RANDOM}};
  pp6_REG_39 = _RAND_421[10:0];
  _RAND_422 = {1{`RANDOM}};
  pp7_REG_42 = _RAND_422[10:0];
  _RAND_423 = {1{`RANDOM}};
  pp7_REG_43 = _RAND_423[10:0];
  _RAND_424 = {1{`RANDOM}};
  pp7_REG_44 = _RAND_424[10:0];
  _RAND_425 = {1{`RANDOM}};
  pp7_REG_45 = _RAND_425[10:0];
  _RAND_426 = {1{`RANDOM}};
  pp7_REG_46 = _RAND_426[10:0];
  _RAND_427 = {1{`RANDOM}};
  pp7_REG_47 = _RAND_427[10:0];
  _RAND_428 = {1{`RANDOM}};
  pp8_REG_49 = _RAND_428[10:0];
  _RAND_429 = {1{`RANDOM}};
  pp8_REG_50 = _RAND_429[10:0];
  _RAND_430 = {1{`RANDOM}};
  pp8_REG_51 = _RAND_430[10:0];
  _RAND_431 = {1{`RANDOM}};
  pp8_REG_52 = _RAND_431[10:0];
  _RAND_432 = {1{`RANDOM}};
  pp8_REG_53 = _RAND_432[10:0];
  _RAND_433 = {1{`RANDOM}};
  pp8_REG_54 = _RAND_433[10:0];
  _RAND_434 = {1{`RANDOM}};
  pp8_REG_55 = _RAND_434[10:0];
  _RAND_435 = {1{`RANDOM}};
  dotProductRegs_7_REG = _RAND_435[18:0];
  _RAND_436 = {1{`RANDOM}};
  dotProductRegs_7_REG_1 = _RAND_436[18:0];
  _RAND_437 = {1{`RANDOM}};
  dotProductRegs_7_REG_2 = _RAND_437[18:0];
  _RAND_438 = {1{`RANDOM}};
  dotProductRegs_7_REG_3 = _RAND_438[18:0];
  _RAND_439 = {1{`RANDOM}};
  dotProductRegs_7_REG_4 = _RAND_439[18:0];
  _RAND_440 = {1{`RANDOM}};
  dotProductRegs_7_REG_5 = _RAND_440[18:0];
  _RAND_441 = {1{`RANDOM}};
  dotProductRegs_7_REG_6 = _RAND_441[18:0];
  _RAND_442 = {1{`RANDOM}};
  dotProductRegs_7_REG_7 = _RAND_442[18:0];
  _RAND_443 = {1{`RANDOM}};
  multiplierReg_8 = _RAND_443[5:0];
  _RAND_444 = {1{`RANDOM}};
  multiplierReg2_8 = _RAND_444[5:0];
  _RAND_445 = {1{`RANDOM}};
  signReg_8 = _RAND_445[0:0];
  _RAND_446 = {1{`RANDOM}};
  pp1_8 = _RAND_446[11:0];
  _RAND_447 = {1{`RANDOM}};
  pp2_8 = _RAND_447[11:0];
  _RAND_448 = {1{`RANDOM}};
  pp3_8 = _RAND_448[11:0];
  _RAND_449 = {1{`RANDOM}};
  pp4_8 = _RAND_449[11:0];
  _RAND_450 = {1{`RANDOM}};
  pp5_8 = _RAND_450[11:0];
  _RAND_451 = {1{`RANDOM}};
  pp6_8 = _RAND_451[11:0];
  _RAND_452 = {1{`RANDOM}};
  pp7_8 = _RAND_452[11:0];
  _RAND_453 = {1{`RANDOM}};
  pp8_8 = _RAND_453[11:0];
  _RAND_454 = {1{`RANDOM}};
  pp2_REG_8 = _RAND_454[6:0];
  _RAND_455 = {1{`RANDOM}};
  pp3_REG_16 = _RAND_455[10:0];
  _RAND_456 = {1{`RANDOM}};
  pp3_REG_17 = _RAND_456[10:0];
  _RAND_457 = {1{`RANDOM}};
  pp4_REG_24 = _RAND_457[6:0];
  _RAND_458 = {1{`RANDOM}};
  pp4_REG_25 = _RAND_458[6:0];
  _RAND_459 = {1{`RANDOM}};
  pp4_REG_26 = _RAND_459[6:0];
  _RAND_460 = {1{`RANDOM}};
  pp5_REG_32 = _RAND_460[10:0];
  _RAND_461 = {1{`RANDOM}};
  pp5_REG_33 = _RAND_461[10:0];
  _RAND_462 = {1{`RANDOM}};
  pp5_REG_34 = _RAND_462[10:0];
  _RAND_463 = {1{`RANDOM}};
  pp5_REG_35 = _RAND_463[10:0];
  _RAND_464 = {1{`RANDOM}};
  pp6_REG_40 = _RAND_464[10:0];
  _RAND_465 = {1{`RANDOM}};
  pp6_REG_41 = _RAND_465[10:0];
  _RAND_466 = {1{`RANDOM}};
  pp6_REG_42 = _RAND_466[10:0];
  _RAND_467 = {1{`RANDOM}};
  pp6_REG_43 = _RAND_467[10:0];
  _RAND_468 = {1{`RANDOM}};
  pp6_REG_44 = _RAND_468[10:0];
  _RAND_469 = {1{`RANDOM}};
  pp7_REG_48 = _RAND_469[10:0];
  _RAND_470 = {1{`RANDOM}};
  pp7_REG_49 = _RAND_470[10:0];
  _RAND_471 = {1{`RANDOM}};
  pp7_REG_50 = _RAND_471[10:0];
  _RAND_472 = {1{`RANDOM}};
  pp7_REG_51 = _RAND_472[10:0];
  _RAND_473 = {1{`RANDOM}};
  pp7_REG_52 = _RAND_473[10:0];
  _RAND_474 = {1{`RANDOM}};
  pp7_REG_53 = _RAND_474[10:0];
  _RAND_475 = {1{`RANDOM}};
  pp8_REG_56 = _RAND_475[10:0];
  _RAND_476 = {1{`RANDOM}};
  pp8_REG_57 = _RAND_476[10:0];
  _RAND_477 = {1{`RANDOM}};
  pp8_REG_58 = _RAND_477[10:0];
  _RAND_478 = {1{`RANDOM}};
  pp8_REG_59 = _RAND_478[10:0];
  _RAND_479 = {1{`RANDOM}};
  pp8_REG_60 = _RAND_479[10:0];
  _RAND_480 = {1{`RANDOM}};
  pp8_REG_61 = _RAND_480[10:0];
  _RAND_481 = {1{`RANDOM}};
  pp8_REG_62 = _RAND_481[10:0];
  _RAND_482 = {1{`RANDOM}};
  dotProductRegs_8_REG = _RAND_482[18:0];
  _RAND_483 = {1{`RANDOM}};
  dotProductRegs_8_REG_1 = _RAND_483[18:0];
  _RAND_484 = {1{`RANDOM}};
  dotProductRegs_8_REG_2 = _RAND_484[18:0];
  _RAND_485 = {1{`RANDOM}};
  dotProductRegs_8_REG_3 = _RAND_485[18:0];
  _RAND_486 = {1{`RANDOM}};
  dotProductRegs_8_REG_4 = _RAND_486[18:0];
  _RAND_487 = {1{`RANDOM}};
  dotProductRegs_8_REG_5 = _RAND_487[18:0];
  _RAND_488 = {1{`RANDOM}};
  dotProductRegs_8_REG_6 = _RAND_488[18:0];
  _RAND_489 = {1{`RANDOM}};
  dotProductRegs_8_REG_7 = _RAND_489[18:0];
  _RAND_490 = {1{`RANDOM}};
  multiplierReg_9 = _RAND_490[5:0];
  _RAND_491 = {1{`RANDOM}};
  multiplierReg2_9 = _RAND_491[5:0];
  _RAND_492 = {1{`RANDOM}};
  signReg_9 = _RAND_492[0:0];
  _RAND_493 = {1{`RANDOM}};
  pp1_9 = _RAND_493[11:0];
  _RAND_494 = {1{`RANDOM}};
  pp2_9 = _RAND_494[11:0];
  _RAND_495 = {1{`RANDOM}};
  pp3_9 = _RAND_495[11:0];
  _RAND_496 = {1{`RANDOM}};
  pp4_9 = _RAND_496[11:0];
  _RAND_497 = {1{`RANDOM}};
  pp5_9 = _RAND_497[11:0];
  _RAND_498 = {1{`RANDOM}};
  pp6_9 = _RAND_498[11:0];
  _RAND_499 = {1{`RANDOM}};
  pp7_9 = _RAND_499[11:0];
  _RAND_500 = {1{`RANDOM}};
  pp8_9 = _RAND_500[11:0];
  _RAND_501 = {1{`RANDOM}};
  pp2_REG_9 = _RAND_501[6:0];
  _RAND_502 = {1{`RANDOM}};
  pp3_REG_18 = _RAND_502[10:0];
  _RAND_503 = {1{`RANDOM}};
  pp3_REG_19 = _RAND_503[10:0];
  _RAND_504 = {1{`RANDOM}};
  pp4_REG_27 = _RAND_504[6:0];
  _RAND_505 = {1{`RANDOM}};
  pp4_REG_28 = _RAND_505[6:0];
  _RAND_506 = {1{`RANDOM}};
  pp4_REG_29 = _RAND_506[6:0];
  _RAND_507 = {1{`RANDOM}};
  pp5_REG_36 = _RAND_507[10:0];
  _RAND_508 = {1{`RANDOM}};
  pp5_REG_37 = _RAND_508[10:0];
  _RAND_509 = {1{`RANDOM}};
  pp5_REG_38 = _RAND_509[10:0];
  _RAND_510 = {1{`RANDOM}};
  pp5_REG_39 = _RAND_510[10:0];
  _RAND_511 = {1{`RANDOM}};
  pp6_REG_45 = _RAND_511[10:0];
  _RAND_512 = {1{`RANDOM}};
  pp6_REG_46 = _RAND_512[10:0];
  _RAND_513 = {1{`RANDOM}};
  pp6_REG_47 = _RAND_513[10:0];
  _RAND_514 = {1{`RANDOM}};
  pp6_REG_48 = _RAND_514[10:0];
  _RAND_515 = {1{`RANDOM}};
  pp6_REG_49 = _RAND_515[10:0];
  _RAND_516 = {1{`RANDOM}};
  pp7_REG_54 = _RAND_516[10:0];
  _RAND_517 = {1{`RANDOM}};
  pp7_REG_55 = _RAND_517[10:0];
  _RAND_518 = {1{`RANDOM}};
  pp7_REG_56 = _RAND_518[10:0];
  _RAND_519 = {1{`RANDOM}};
  pp7_REG_57 = _RAND_519[10:0];
  _RAND_520 = {1{`RANDOM}};
  pp7_REG_58 = _RAND_520[10:0];
  _RAND_521 = {1{`RANDOM}};
  pp7_REG_59 = _RAND_521[10:0];
  _RAND_522 = {1{`RANDOM}};
  pp8_REG_63 = _RAND_522[10:0];
  _RAND_523 = {1{`RANDOM}};
  pp8_REG_64 = _RAND_523[10:0];
  _RAND_524 = {1{`RANDOM}};
  pp8_REG_65 = _RAND_524[10:0];
  _RAND_525 = {1{`RANDOM}};
  pp8_REG_66 = _RAND_525[10:0];
  _RAND_526 = {1{`RANDOM}};
  pp8_REG_67 = _RAND_526[10:0];
  _RAND_527 = {1{`RANDOM}};
  pp8_REG_68 = _RAND_527[10:0];
  _RAND_528 = {1{`RANDOM}};
  pp8_REG_69 = _RAND_528[10:0];
  _RAND_529 = {1{`RANDOM}};
  dotProductRegs_9_REG = _RAND_529[18:0];
  _RAND_530 = {1{`RANDOM}};
  dotProductRegs_9_REG_1 = _RAND_530[18:0];
  _RAND_531 = {1{`RANDOM}};
  dotProductRegs_9_REG_2 = _RAND_531[18:0];
  _RAND_532 = {1{`RANDOM}};
  dotProductRegs_9_REG_3 = _RAND_532[18:0];
  _RAND_533 = {1{`RANDOM}};
  dotProductRegs_9_REG_4 = _RAND_533[18:0];
  _RAND_534 = {1{`RANDOM}};
  dotProductRegs_9_REG_5 = _RAND_534[18:0];
  _RAND_535 = {1{`RANDOM}};
  dotProductRegs_9_REG_6 = _RAND_535[18:0];
  _RAND_536 = {1{`RANDOM}};
  dotProductRegs_9_REG_7 = _RAND_536[18:0];
  _RAND_537 = {1{`RANDOM}};
  multiplierReg_10 = _RAND_537[5:0];
  _RAND_538 = {1{`RANDOM}};
  multiplierReg2_10 = _RAND_538[5:0];
  _RAND_539 = {1{`RANDOM}};
  signReg_10 = _RAND_539[0:0];
  _RAND_540 = {1{`RANDOM}};
  pp1_10 = _RAND_540[11:0];
  _RAND_541 = {1{`RANDOM}};
  pp2_10 = _RAND_541[11:0];
  _RAND_542 = {1{`RANDOM}};
  pp3_10 = _RAND_542[11:0];
  _RAND_543 = {1{`RANDOM}};
  pp4_10 = _RAND_543[11:0];
  _RAND_544 = {1{`RANDOM}};
  pp5_10 = _RAND_544[11:0];
  _RAND_545 = {1{`RANDOM}};
  pp6_10 = _RAND_545[11:0];
  _RAND_546 = {1{`RANDOM}};
  pp7_10 = _RAND_546[11:0];
  _RAND_547 = {1{`RANDOM}};
  pp8_10 = _RAND_547[11:0];
  _RAND_548 = {1{`RANDOM}};
  pp2_REG_10 = _RAND_548[6:0];
  _RAND_549 = {1{`RANDOM}};
  pp3_REG_20 = _RAND_549[10:0];
  _RAND_550 = {1{`RANDOM}};
  pp3_REG_21 = _RAND_550[10:0];
  _RAND_551 = {1{`RANDOM}};
  pp4_REG_30 = _RAND_551[6:0];
  _RAND_552 = {1{`RANDOM}};
  pp4_REG_31 = _RAND_552[6:0];
  _RAND_553 = {1{`RANDOM}};
  pp4_REG_32 = _RAND_553[6:0];
  _RAND_554 = {1{`RANDOM}};
  pp5_REG_40 = _RAND_554[10:0];
  _RAND_555 = {1{`RANDOM}};
  pp5_REG_41 = _RAND_555[10:0];
  _RAND_556 = {1{`RANDOM}};
  pp5_REG_42 = _RAND_556[10:0];
  _RAND_557 = {1{`RANDOM}};
  pp5_REG_43 = _RAND_557[10:0];
  _RAND_558 = {1{`RANDOM}};
  pp6_REG_50 = _RAND_558[10:0];
  _RAND_559 = {1{`RANDOM}};
  pp6_REG_51 = _RAND_559[10:0];
  _RAND_560 = {1{`RANDOM}};
  pp6_REG_52 = _RAND_560[10:0];
  _RAND_561 = {1{`RANDOM}};
  pp6_REG_53 = _RAND_561[10:0];
  _RAND_562 = {1{`RANDOM}};
  pp6_REG_54 = _RAND_562[10:0];
  _RAND_563 = {1{`RANDOM}};
  pp7_REG_60 = _RAND_563[10:0];
  _RAND_564 = {1{`RANDOM}};
  pp7_REG_61 = _RAND_564[10:0];
  _RAND_565 = {1{`RANDOM}};
  pp7_REG_62 = _RAND_565[10:0];
  _RAND_566 = {1{`RANDOM}};
  pp7_REG_63 = _RAND_566[10:0];
  _RAND_567 = {1{`RANDOM}};
  pp7_REG_64 = _RAND_567[10:0];
  _RAND_568 = {1{`RANDOM}};
  pp7_REG_65 = _RAND_568[10:0];
  _RAND_569 = {1{`RANDOM}};
  pp8_REG_70 = _RAND_569[10:0];
  _RAND_570 = {1{`RANDOM}};
  pp8_REG_71 = _RAND_570[10:0];
  _RAND_571 = {1{`RANDOM}};
  pp8_REG_72 = _RAND_571[10:0];
  _RAND_572 = {1{`RANDOM}};
  pp8_REG_73 = _RAND_572[10:0];
  _RAND_573 = {1{`RANDOM}};
  pp8_REG_74 = _RAND_573[10:0];
  _RAND_574 = {1{`RANDOM}};
  pp8_REG_75 = _RAND_574[10:0];
  _RAND_575 = {1{`RANDOM}};
  pp8_REG_76 = _RAND_575[10:0];
  _RAND_576 = {1{`RANDOM}};
  dotProductRegs_10_REG = _RAND_576[18:0];
  _RAND_577 = {1{`RANDOM}};
  dotProductRegs_10_REG_1 = _RAND_577[18:0];
  _RAND_578 = {1{`RANDOM}};
  dotProductRegs_10_REG_2 = _RAND_578[18:0];
  _RAND_579 = {1{`RANDOM}};
  dotProductRegs_10_REG_3 = _RAND_579[18:0];
  _RAND_580 = {1{`RANDOM}};
  dotProductRegs_10_REG_4 = _RAND_580[18:0];
  _RAND_581 = {1{`RANDOM}};
  dotProductRegs_10_REG_5 = _RAND_581[18:0];
  _RAND_582 = {1{`RANDOM}};
  dotProductRegs_10_REG_6 = _RAND_582[18:0];
  _RAND_583 = {1{`RANDOM}};
  dotProductRegs_10_REG_7 = _RAND_583[18:0];
  _RAND_584 = {1{`RANDOM}};
  multiplierReg_11 = _RAND_584[5:0];
  _RAND_585 = {1{`RANDOM}};
  multiplierReg2_11 = _RAND_585[5:0];
  _RAND_586 = {1{`RANDOM}};
  signReg_11 = _RAND_586[0:0];
  _RAND_587 = {1{`RANDOM}};
  pp1_11 = _RAND_587[11:0];
  _RAND_588 = {1{`RANDOM}};
  pp2_11 = _RAND_588[11:0];
  _RAND_589 = {1{`RANDOM}};
  pp3_11 = _RAND_589[11:0];
  _RAND_590 = {1{`RANDOM}};
  pp4_11 = _RAND_590[11:0];
  _RAND_591 = {1{`RANDOM}};
  pp5_11 = _RAND_591[11:0];
  _RAND_592 = {1{`RANDOM}};
  pp6_11 = _RAND_592[11:0];
  _RAND_593 = {1{`RANDOM}};
  pp7_11 = _RAND_593[11:0];
  _RAND_594 = {1{`RANDOM}};
  pp8_11 = _RAND_594[11:0];
  _RAND_595 = {1{`RANDOM}};
  pp2_REG_11 = _RAND_595[6:0];
  _RAND_596 = {1{`RANDOM}};
  pp3_REG_22 = _RAND_596[10:0];
  _RAND_597 = {1{`RANDOM}};
  pp3_REG_23 = _RAND_597[10:0];
  _RAND_598 = {1{`RANDOM}};
  pp4_REG_33 = _RAND_598[6:0];
  _RAND_599 = {1{`RANDOM}};
  pp4_REG_34 = _RAND_599[6:0];
  _RAND_600 = {1{`RANDOM}};
  pp4_REG_35 = _RAND_600[6:0];
  _RAND_601 = {1{`RANDOM}};
  pp5_REG_44 = _RAND_601[10:0];
  _RAND_602 = {1{`RANDOM}};
  pp5_REG_45 = _RAND_602[10:0];
  _RAND_603 = {1{`RANDOM}};
  pp5_REG_46 = _RAND_603[10:0];
  _RAND_604 = {1{`RANDOM}};
  pp5_REG_47 = _RAND_604[10:0];
  _RAND_605 = {1{`RANDOM}};
  pp6_REG_55 = _RAND_605[10:0];
  _RAND_606 = {1{`RANDOM}};
  pp6_REG_56 = _RAND_606[10:0];
  _RAND_607 = {1{`RANDOM}};
  pp6_REG_57 = _RAND_607[10:0];
  _RAND_608 = {1{`RANDOM}};
  pp6_REG_58 = _RAND_608[10:0];
  _RAND_609 = {1{`RANDOM}};
  pp6_REG_59 = _RAND_609[10:0];
  _RAND_610 = {1{`RANDOM}};
  pp7_REG_66 = _RAND_610[10:0];
  _RAND_611 = {1{`RANDOM}};
  pp7_REG_67 = _RAND_611[10:0];
  _RAND_612 = {1{`RANDOM}};
  pp7_REG_68 = _RAND_612[10:0];
  _RAND_613 = {1{`RANDOM}};
  pp7_REG_69 = _RAND_613[10:0];
  _RAND_614 = {1{`RANDOM}};
  pp7_REG_70 = _RAND_614[10:0];
  _RAND_615 = {1{`RANDOM}};
  pp7_REG_71 = _RAND_615[10:0];
  _RAND_616 = {1{`RANDOM}};
  pp8_REG_77 = _RAND_616[10:0];
  _RAND_617 = {1{`RANDOM}};
  pp8_REG_78 = _RAND_617[10:0];
  _RAND_618 = {1{`RANDOM}};
  pp8_REG_79 = _RAND_618[10:0];
  _RAND_619 = {1{`RANDOM}};
  pp8_REG_80 = _RAND_619[10:0];
  _RAND_620 = {1{`RANDOM}};
  pp8_REG_81 = _RAND_620[10:0];
  _RAND_621 = {1{`RANDOM}};
  pp8_REG_82 = _RAND_621[10:0];
  _RAND_622 = {1{`RANDOM}};
  pp8_REG_83 = _RAND_622[10:0];
  _RAND_623 = {1{`RANDOM}};
  dotProductRegs_11_REG = _RAND_623[18:0];
  _RAND_624 = {1{`RANDOM}};
  dotProductRegs_11_REG_1 = _RAND_624[18:0];
  _RAND_625 = {1{`RANDOM}};
  dotProductRegs_11_REG_2 = _RAND_625[18:0];
  _RAND_626 = {1{`RANDOM}};
  dotProductRegs_11_REG_3 = _RAND_626[18:0];
  _RAND_627 = {1{`RANDOM}};
  dotProductRegs_11_REG_4 = _RAND_627[18:0];
  _RAND_628 = {1{`RANDOM}};
  dotProductRegs_11_REG_5 = _RAND_628[18:0];
  _RAND_629 = {1{`RANDOM}};
  dotProductRegs_11_REG_6 = _RAND_629[18:0];
  _RAND_630 = {1{`RANDOM}};
  dotProductRegs_11_REG_7 = _RAND_630[18:0];
  _RAND_631 = {1{`RANDOM}};
  multiplierReg_12 = _RAND_631[5:0];
  _RAND_632 = {1{`RANDOM}};
  multiplierReg2_12 = _RAND_632[5:0];
  _RAND_633 = {1{`RANDOM}};
  signReg_12 = _RAND_633[0:0];
  _RAND_634 = {1{`RANDOM}};
  pp1_12 = _RAND_634[11:0];
  _RAND_635 = {1{`RANDOM}};
  pp2_12 = _RAND_635[11:0];
  _RAND_636 = {1{`RANDOM}};
  pp3_12 = _RAND_636[11:0];
  _RAND_637 = {1{`RANDOM}};
  pp4_12 = _RAND_637[11:0];
  _RAND_638 = {1{`RANDOM}};
  pp5_12 = _RAND_638[11:0];
  _RAND_639 = {1{`RANDOM}};
  pp6_12 = _RAND_639[11:0];
  _RAND_640 = {1{`RANDOM}};
  pp7_12 = _RAND_640[11:0];
  _RAND_641 = {1{`RANDOM}};
  pp8_12 = _RAND_641[11:0];
  _RAND_642 = {1{`RANDOM}};
  pp2_REG_12 = _RAND_642[6:0];
  _RAND_643 = {1{`RANDOM}};
  pp3_REG_24 = _RAND_643[10:0];
  _RAND_644 = {1{`RANDOM}};
  pp3_REG_25 = _RAND_644[10:0];
  _RAND_645 = {1{`RANDOM}};
  pp4_REG_36 = _RAND_645[6:0];
  _RAND_646 = {1{`RANDOM}};
  pp4_REG_37 = _RAND_646[6:0];
  _RAND_647 = {1{`RANDOM}};
  pp4_REG_38 = _RAND_647[6:0];
  _RAND_648 = {1{`RANDOM}};
  pp5_REG_48 = _RAND_648[10:0];
  _RAND_649 = {1{`RANDOM}};
  pp5_REG_49 = _RAND_649[10:0];
  _RAND_650 = {1{`RANDOM}};
  pp5_REG_50 = _RAND_650[10:0];
  _RAND_651 = {1{`RANDOM}};
  pp5_REG_51 = _RAND_651[10:0];
  _RAND_652 = {1{`RANDOM}};
  pp6_REG_60 = _RAND_652[10:0];
  _RAND_653 = {1{`RANDOM}};
  pp6_REG_61 = _RAND_653[10:0];
  _RAND_654 = {1{`RANDOM}};
  pp6_REG_62 = _RAND_654[10:0];
  _RAND_655 = {1{`RANDOM}};
  pp6_REG_63 = _RAND_655[10:0];
  _RAND_656 = {1{`RANDOM}};
  pp6_REG_64 = _RAND_656[10:0];
  _RAND_657 = {1{`RANDOM}};
  pp7_REG_72 = _RAND_657[10:0];
  _RAND_658 = {1{`RANDOM}};
  pp7_REG_73 = _RAND_658[10:0];
  _RAND_659 = {1{`RANDOM}};
  pp7_REG_74 = _RAND_659[10:0];
  _RAND_660 = {1{`RANDOM}};
  pp7_REG_75 = _RAND_660[10:0];
  _RAND_661 = {1{`RANDOM}};
  pp7_REG_76 = _RAND_661[10:0];
  _RAND_662 = {1{`RANDOM}};
  pp7_REG_77 = _RAND_662[10:0];
  _RAND_663 = {1{`RANDOM}};
  pp8_REG_84 = _RAND_663[10:0];
  _RAND_664 = {1{`RANDOM}};
  pp8_REG_85 = _RAND_664[10:0];
  _RAND_665 = {1{`RANDOM}};
  pp8_REG_86 = _RAND_665[10:0];
  _RAND_666 = {1{`RANDOM}};
  pp8_REG_87 = _RAND_666[10:0];
  _RAND_667 = {1{`RANDOM}};
  pp8_REG_88 = _RAND_667[10:0];
  _RAND_668 = {1{`RANDOM}};
  pp8_REG_89 = _RAND_668[10:0];
  _RAND_669 = {1{`RANDOM}};
  pp8_REG_90 = _RAND_669[10:0];
  _RAND_670 = {1{`RANDOM}};
  dotProductRegs_12_REG = _RAND_670[18:0];
  _RAND_671 = {1{`RANDOM}};
  dotProductRegs_12_REG_1 = _RAND_671[18:0];
  _RAND_672 = {1{`RANDOM}};
  dotProductRegs_12_REG_2 = _RAND_672[18:0];
  _RAND_673 = {1{`RANDOM}};
  dotProductRegs_12_REG_3 = _RAND_673[18:0];
  _RAND_674 = {1{`RANDOM}};
  dotProductRegs_12_REG_4 = _RAND_674[18:0];
  _RAND_675 = {1{`RANDOM}};
  dotProductRegs_12_REG_5 = _RAND_675[18:0];
  _RAND_676 = {1{`RANDOM}};
  dotProductRegs_12_REG_6 = _RAND_676[18:0];
  _RAND_677 = {1{`RANDOM}};
  dotProductRegs_12_REG_7 = _RAND_677[18:0];
  _RAND_678 = {1{`RANDOM}};
  multiplierReg_13 = _RAND_678[5:0];
  _RAND_679 = {1{`RANDOM}};
  multiplierReg2_13 = _RAND_679[5:0];
  _RAND_680 = {1{`RANDOM}};
  signReg_13 = _RAND_680[0:0];
  _RAND_681 = {1{`RANDOM}};
  pp1_13 = _RAND_681[11:0];
  _RAND_682 = {1{`RANDOM}};
  pp2_13 = _RAND_682[11:0];
  _RAND_683 = {1{`RANDOM}};
  pp3_13 = _RAND_683[11:0];
  _RAND_684 = {1{`RANDOM}};
  pp4_13 = _RAND_684[11:0];
  _RAND_685 = {1{`RANDOM}};
  pp5_13 = _RAND_685[11:0];
  _RAND_686 = {1{`RANDOM}};
  pp6_13 = _RAND_686[11:0];
  _RAND_687 = {1{`RANDOM}};
  pp7_13 = _RAND_687[11:0];
  _RAND_688 = {1{`RANDOM}};
  pp8_13 = _RAND_688[11:0];
  _RAND_689 = {1{`RANDOM}};
  pp2_REG_13 = _RAND_689[6:0];
  _RAND_690 = {1{`RANDOM}};
  pp3_REG_26 = _RAND_690[10:0];
  _RAND_691 = {1{`RANDOM}};
  pp3_REG_27 = _RAND_691[10:0];
  _RAND_692 = {1{`RANDOM}};
  pp4_REG_39 = _RAND_692[6:0];
  _RAND_693 = {1{`RANDOM}};
  pp4_REG_40 = _RAND_693[6:0];
  _RAND_694 = {1{`RANDOM}};
  pp4_REG_41 = _RAND_694[6:0];
  _RAND_695 = {1{`RANDOM}};
  pp5_REG_52 = _RAND_695[10:0];
  _RAND_696 = {1{`RANDOM}};
  pp5_REG_53 = _RAND_696[10:0];
  _RAND_697 = {1{`RANDOM}};
  pp5_REG_54 = _RAND_697[10:0];
  _RAND_698 = {1{`RANDOM}};
  pp5_REG_55 = _RAND_698[10:0];
  _RAND_699 = {1{`RANDOM}};
  pp6_REG_65 = _RAND_699[10:0];
  _RAND_700 = {1{`RANDOM}};
  pp6_REG_66 = _RAND_700[10:0];
  _RAND_701 = {1{`RANDOM}};
  pp6_REG_67 = _RAND_701[10:0];
  _RAND_702 = {1{`RANDOM}};
  pp6_REG_68 = _RAND_702[10:0];
  _RAND_703 = {1{`RANDOM}};
  pp6_REG_69 = _RAND_703[10:0];
  _RAND_704 = {1{`RANDOM}};
  pp7_REG_78 = _RAND_704[10:0];
  _RAND_705 = {1{`RANDOM}};
  pp7_REG_79 = _RAND_705[10:0];
  _RAND_706 = {1{`RANDOM}};
  pp7_REG_80 = _RAND_706[10:0];
  _RAND_707 = {1{`RANDOM}};
  pp7_REG_81 = _RAND_707[10:0];
  _RAND_708 = {1{`RANDOM}};
  pp7_REG_82 = _RAND_708[10:0];
  _RAND_709 = {1{`RANDOM}};
  pp7_REG_83 = _RAND_709[10:0];
  _RAND_710 = {1{`RANDOM}};
  pp8_REG_91 = _RAND_710[10:0];
  _RAND_711 = {1{`RANDOM}};
  pp8_REG_92 = _RAND_711[10:0];
  _RAND_712 = {1{`RANDOM}};
  pp8_REG_93 = _RAND_712[10:0];
  _RAND_713 = {1{`RANDOM}};
  pp8_REG_94 = _RAND_713[10:0];
  _RAND_714 = {1{`RANDOM}};
  pp8_REG_95 = _RAND_714[10:0];
  _RAND_715 = {1{`RANDOM}};
  pp8_REG_96 = _RAND_715[10:0];
  _RAND_716 = {1{`RANDOM}};
  pp8_REG_97 = _RAND_716[10:0];
  _RAND_717 = {1{`RANDOM}};
  dotProductRegs_13_REG = _RAND_717[18:0];
  _RAND_718 = {1{`RANDOM}};
  dotProductRegs_13_REG_1 = _RAND_718[18:0];
  _RAND_719 = {1{`RANDOM}};
  dotProductRegs_13_REG_2 = _RAND_719[18:0];
  _RAND_720 = {1{`RANDOM}};
  dotProductRegs_13_REG_3 = _RAND_720[18:0];
  _RAND_721 = {1{`RANDOM}};
  dotProductRegs_13_REG_4 = _RAND_721[18:0];
  _RAND_722 = {1{`RANDOM}};
  dotProductRegs_13_REG_5 = _RAND_722[18:0];
  _RAND_723 = {1{`RANDOM}};
  dotProductRegs_13_REG_6 = _RAND_723[18:0];
  _RAND_724 = {1{`RANDOM}};
  dotProductRegs_13_REG_7 = _RAND_724[18:0];
  _RAND_725 = {1{`RANDOM}};
  multiplierReg_14 = _RAND_725[5:0];
  _RAND_726 = {1{`RANDOM}};
  multiplierReg2_14 = _RAND_726[5:0];
  _RAND_727 = {1{`RANDOM}};
  signReg_14 = _RAND_727[0:0];
  _RAND_728 = {1{`RANDOM}};
  pp1_14 = _RAND_728[11:0];
  _RAND_729 = {1{`RANDOM}};
  pp2_14 = _RAND_729[11:0];
  _RAND_730 = {1{`RANDOM}};
  pp3_14 = _RAND_730[11:0];
  _RAND_731 = {1{`RANDOM}};
  pp4_14 = _RAND_731[11:0];
  _RAND_732 = {1{`RANDOM}};
  pp5_14 = _RAND_732[11:0];
  _RAND_733 = {1{`RANDOM}};
  pp6_14 = _RAND_733[11:0];
  _RAND_734 = {1{`RANDOM}};
  pp7_14 = _RAND_734[11:0];
  _RAND_735 = {1{`RANDOM}};
  pp8_14 = _RAND_735[11:0];
  _RAND_736 = {1{`RANDOM}};
  pp2_REG_14 = _RAND_736[6:0];
  _RAND_737 = {1{`RANDOM}};
  pp3_REG_28 = _RAND_737[10:0];
  _RAND_738 = {1{`RANDOM}};
  pp3_REG_29 = _RAND_738[10:0];
  _RAND_739 = {1{`RANDOM}};
  pp4_REG_42 = _RAND_739[6:0];
  _RAND_740 = {1{`RANDOM}};
  pp4_REG_43 = _RAND_740[6:0];
  _RAND_741 = {1{`RANDOM}};
  pp4_REG_44 = _RAND_741[6:0];
  _RAND_742 = {1{`RANDOM}};
  pp5_REG_56 = _RAND_742[10:0];
  _RAND_743 = {1{`RANDOM}};
  pp5_REG_57 = _RAND_743[10:0];
  _RAND_744 = {1{`RANDOM}};
  pp5_REG_58 = _RAND_744[10:0];
  _RAND_745 = {1{`RANDOM}};
  pp5_REG_59 = _RAND_745[10:0];
  _RAND_746 = {1{`RANDOM}};
  pp6_REG_70 = _RAND_746[10:0];
  _RAND_747 = {1{`RANDOM}};
  pp6_REG_71 = _RAND_747[10:0];
  _RAND_748 = {1{`RANDOM}};
  pp6_REG_72 = _RAND_748[10:0];
  _RAND_749 = {1{`RANDOM}};
  pp6_REG_73 = _RAND_749[10:0];
  _RAND_750 = {1{`RANDOM}};
  pp6_REG_74 = _RAND_750[10:0];
  _RAND_751 = {1{`RANDOM}};
  pp7_REG_84 = _RAND_751[10:0];
  _RAND_752 = {1{`RANDOM}};
  pp7_REG_85 = _RAND_752[10:0];
  _RAND_753 = {1{`RANDOM}};
  pp7_REG_86 = _RAND_753[10:0];
  _RAND_754 = {1{`RANDOM}};
  pp7_REG_87 = _RAND_754[10:0];
  _RAND_755 = {1{`RANDOM}};
  pp7_REG_88 = _RAND_755[10:0];
  _RAND_756 = {1{`RANDOM}};
  pp7_REG_89 = _RAND_756[10:0];
  _RAND_757 = {1{`RANDOM}};
  pp8_REG_98 = _RAND_757[10:0];
  _RAND_758 = {1{`RANDOM}};
  pp8_REG_99 = _RAND_758[10:0];
  _RAND_759 = {1{`RANDOM}};
  pp8_REG_100 = _RAND_759[10:0];
  _RAND_760 = {1{`RANDOM}};
  pp8_REG_101 = _RAND_760[10:0];
  _RAND_761 = {1{`RANDOM}};
  pp8_REG_102 = _RAND_761[10:0];
  _RAND_762 = {1{`RANDOM}};
  pp8_REG_103 = _RAND_762[10:0];
  _RAND_763 = {1{`RANDOM}};
  pp8_REG_104 = _RAND_763[10:0];
  _RAND_764 = {1{`RANDOM}};
  dotProductRegs_14_REG = _RAND_764[18:0];
  _RAND_765 = {1{`RANDOM}};
  dotProductRegs_14_REG_1 = _RAND_765[18:0];
  _RAND_766 = {1{`RANDOM}};
  dotProductRegs_14_REG_2 = _RAND_766[18:0];
  _RAND_767 = {1{`RANDOM}};
  dotProductRegs_14_REG_3 = _RAND_767[18:0];
  _RAND_768 = {1{`RANDOM}};
  dotProductRegs_14_REG_4 = _RAND_768[18:0];
  _RAND_769 = {1{`RANDOM}};
  dotProductRegs_14_REG_5 = _RAND_769[18:0];
  _RAND_770 = {1{`RANDOM}};
  dotProductRegs_14_REG_6 = _RAND_770[18:0];
  _RAND_771 = {1{`RANDOM}};
  dotProductRegs_14_REG_7 = _RAND_771[18:0];
  _RAND_772 = {1{`RANDOM}};
  multiplierReg_15 = _RAND_772[5:0];
  _RAND_773 = {1{`RANDOM}};
  multiplierReg2_15 = _RAND_773[5:0];
  _RAND_774 = {1{`RANDOM}};
  signReg_15 = _RAND_774[0:0];
  _RAND_775 = {1{`RANDOM}};
  pp1_15 = _RAND_775[11:0];
  _RAND_776 = {1{`RANDOM}};
  pp2_15 = _RAND_776[11:0];
  _RAND_777 = {1{`RANDOM}};
  pp3_15 = _RAND_777[11:0];
  _RAND_778 = {1{`RANDOM}};
  pp4_15 = _RAND_778[11:0];
  _RAND_779 = {1{`RANDOM}};
  pp5_15 = _RAND_779[11:0];
  _RAND_780 = {1{`RANDOM}};
  pp6_15 = _RAND_780[11:0];
  _RAND_781 = {1{`RANDOM}};
  pp7_15 = _RAND_781[11:0];
  _RAND_782 = {1{`RANDOM}};
  pp8_15 = _RAND_782[11:0];
  _RAND_783 = {1{`RANDOM}};
  pp2_REG_15 = _RAND_783[6:0];
  _RAND_784 = {1{`RANDOM}};
  pp3_REG_30 = _RAND_784[10:0];
  _RAND_785 = {1{`RANDOM}};
  pp3_REG_31 = _RAND_785[10:0];
  _RAND_786 = {1{`RANDOM}};
  pp4_REG_45 = _RAND_786[6:0];
  _RAND_787 = {1{`RANDOM}};
  pp4_REG_46 = _RAND_787[6:0];
  _RAND_788 = {1{`RANDOM}};
  pp4_REG_47 = _RAND_788[6:0];
  _RAND_789 = {1{`RANDOM}};
  pp5_REG_60 = _RAND_789[10:0];
  _RAND_790 = {1{`RANDOM}};
  pp5_REG_61 = _RAND_790[10:0];
  _RAND_791 = {1{`RANDOM}};
  pp5_REG_62 = _RAND_791[10:0];
  _RAND_792 = {1{`RANDOM}};
  pp5_REG_63 = _RAND_792[10:0];
  _RAND_793 = {1{`RANDOM}};
  pp6_REG_75 = _RAND_793[10:0];
  _RAND_794 = {1{`RANDOM}};
  pp6_REG_76 = _RAND_794[10:0];
  _RAND_795 = {1{`RANDOM}};
  pp6_REG_77 = _RAND_795[10:0];
  _RAND_796 = {1{`RANDOM}};
  pp6_REG_78 = _RAND_796[10:0];
  _RAND_797 = {1{`RANDOM}};
  pp6_REG_79 = _RAND_797[10:0];
  _RAND_798 = {1{`RANDOM}};
  pp7_REG_90 = _RAND_798[10:0];
  _RAND_799 = {1{`RANDOM}};
  pp7_REG_91 = _RAND_799[10:0];
  _RAND_800 = {1{`RANDOM}};
  pp7_REG_92 = _RAND_800[10:0];
  _RAND_801 = {1{`RANDOM}};
  pp7_REG_93 = _RAND_801[10:0];
  _RAND_802 = {1{`RANDOM}};
  pp7_REG_94 = _RAND_802[10:0];
  _RAND_803 = {1{`RANDOM}};
  pp7_REG_95 = _RAND_803[10:0];
  _RAND_804 = {1{`RANDOM}};
  pp8_REG_105 = _RAND_804[10:0];
  _RAND_805 = {1{`RANDOM}};
  pp8_REG_106 = _RAND_805[10:0];
  _RAND_806 = {1{`RANDOM}};
  pp8_REG_107 = _RAND_806[10:0];
  _RAND_807 = {1{`RANDOM}};
  pp8_REG_108 = _RAND_807[10:0];
  _RAND_808 = {1{`RANDOM}};
  pp8_REG_109 = _RAND_808[10:0];
  _RAND_809 = {1{`RANDOM}};
  pp8_REG_110 = _RAND_809[10:0];
  _RAND_810 = {1{`RANDOM}};
  pp8_REG_111 = _RAND_810[10:0];
  _RAND_811 = {1{`RANDOM}};
  dotProductRegs_15_REG = _RAND_811[18:0];
  _RAND_812 = {1{`RANDOM}};
  dotProductRegs_15_REG_1 = _RAND_812[18:0];
  _RAND_813 = {1{`RANDOM}};
  dotProductRegs_15_REG_2 = _RAND_813[18:0];
  _RAND_814 = {1{`RANDOM}};
  dotProductRegs_15_REG_3 = _RAND_814[18:0];
  _RAND_815 = {1{`RANDOM}};
  dotProductRegs_15_REG_4 = _RAND_815[18:0];
  _RAND_816 = {1{`RANDOM}};
  dotProductRegs_15_REG_5 = _RAND_816[18:0];
  _RAND_817 = {1{`RANDOM}};
  dotProductRegs_15_REG_6 = _RAND_817[18:0];
  _RAND_818 = {1{`RANDOM}};
  dotProductRegs_15_REG_7 = _RAND_818[18:0];
  _RAND_819 = {1{`RANDOM}};
  right_shift = _RAND_819[7:0];
  _RAND_820 = {1{`RANDOM}};
  actual_shift = _RAND_820[7:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
