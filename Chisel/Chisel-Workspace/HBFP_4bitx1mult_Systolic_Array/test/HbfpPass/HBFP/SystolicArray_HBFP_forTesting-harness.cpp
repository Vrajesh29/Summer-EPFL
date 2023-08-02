#include "VSystolicArray_HBFP_forTesting.h"
#include "verilated.h"

#define TOP_CLASS VSystolicArray_HBFP_forTesting

#ifndef VM_TRACE_FST
#define VM_TRACE_FST 0
#endif

static const bool verbose = false;

#if VM_TRACE
#if VM_TRACE_FST
  #include "verilated_fst_c.h"
  #define VERILATED_C VerilatedFstC
#else // !(VM_TRACE_FST)
  #include "verilated_vcd_c.h"
  #define VERILATED_C VerilatedVcdC
#endif
#else // !(VM_TRACE)
  #define VERILATED_C VerilatedVcdC
#endif
#include <iostream>


// Override Verilator definition so first $finish ends simulation
// Note: VL_USER_FINISH needs to be defined when compiling Verilator code
static bool encounteredFinish = false;
void vl_finish(const char* filename, int linenum, const char* hier) {
  // std::cout << "finish! (" << filename << ", " << linenum << ", " << hier << ")" << std::endl;
  Verilated::runFlushCallbacks();
  encounteredFinish = true;
}


static bool encounteredFatal = false;
void vl_fatal(const char* filename, int linenum, const char* hier, const char* msg) {
  std::cerr << "fatal! (" << filename << ", " << linenum << ", " << hier << ", " << msg << ")" << std::endl;
  Verilated::runFlushCallbacks();
  encounteredFatal = true;
}


static bool encounteredStop = false;
void vl_stop(const char* filename, int linenum, const char* hier) {
  // std::cout << "stop! (" << filename << ", " << linenum << ", " << hier << ")" << std::endl;
  Verilated::runFlushCallbacks();
  encounteredStop = true;
}


// Global because older versions of verilator do not support contexts
static vluint64_t global_time = 0;
double sc_time_stamp () { return global_time; }

static void _startCoverageAndDump(VERILATED_C** tfp, const std::string& dumpfile, TOP_CLASS* top) {

#if VM_TRACE || VM_COVERAGE
    Verilated::traceEverOn(true);
#endif
#if VM_TRACE
    if (verbose) VL_PRINTF("Enabling waves..\n");
    *tfp = new VERILATED_C;
    top->trace(*tfp, 99);
    (*tfp)->open(dumpfile.c_str());
#endif
}

static int64_t _step(VERILATED_C* tfp, TOP_CLASS* top, vluint64_t& main_time) {
    top->clock = 0;
    global_time = main_time;
    top->eval();
#if VM_TRACE
    if (tfp) tfp->dump(main_time);
#endif
    main_time++;
    top->clock = 1;
    global_time = main_time;
    top->eval();
#if VM_TRACE
    if (tfp) tfp->dump(main_time);
#endif
    main_time++;
    if(encounteredStop) {
      // vl_stop is called by verilator when an assertion fails or when the fatal command is executed
      encounteredStop = false;
      encounteredFinish = false;
      return 2;
    } else if(encounteredFinish) {
      // vl_finish is called by verilator when a finish command is executed (stop(0))
      encounteredFinish = false;
      return 1;
    } else if(encounteredFatal) {
      encounteredFatal = false;
      return 3;
    }
    return 0;
}

static void _finish(VERILATED_C* tfp, TOP_CLASS* top) {
#if VM_TRACE
  if (tfp) tfp->close();
  delete tfp;
#endif
#if VM_COVERAGE
  VerilatedCov::write("/home/vpatel/Documents/Chisel/Chisel-Workspace/HBFP_4bitx1mult_Systolic_Array/test/HbfpPass/HBFP/coverage.dat");
#endif
  top->final();
  // TODO: re-enable!
  // delete top;
}

struct sim_state {
  TOP_CLASS* dut;
  VERILATED_C* tfp;
  vluint64_t main_time;

  sim_state() :
    dut(new TOP_CLASS),
    tfp(nullptr),
    main_time(0)
  {
    // std::cout << "Allocating! " << ((long long) dut) << std::endl;
  }

  inline int64_t step(int32_t cycles) {
    for(int32_t i = 0; i < cycles; i++) {
      const int64_t status = _step(tfp, dut, main_time);
      if(status > 0) {
        // early exit on failure
        return (status << 32) | ((int64_t)(i + 1));
      }
    }
    return (int64_t)cycles;
  }
  inline void update() { dut->eval(); }
  inline void finish() {
    dut->eval();
    _finish(tfp, dut);
  }
  inline void resetCoverage() { VerilatedCov::zero(); }
  inline void writeCoverage(const char* filename) {
    VerilatedCov::write(filename);
  }
  inline void poke(int32_t id, int64_t value) {
    const uint64_t u = value;
    // std::cout << "poking: " << std::hex << u << std::endl;
    switch(id) {
      case 0 : dut->reset = u; break;
      case 1 : dut->io_in_hor_0_valid = u; break;
      case 2 : dut->io_in_hor_0_bits_sign_0 = u; break;
      case 3 : dut->io_in_hor_0_bits_sign_1 = u; break;
      case 4 : dut->io_in_hor_0_bits_sign_2 = u; break;
      case 5 : dut->io_in_hor_0_bits_sign_3 = u; break;
      case 6 : dut->io_in_hor_0_bits_sign_4 = u; break;
      case 7 : dut->io_in_hor_0_bits_sign_5 = u; break;
      case 8 : dut->io_in_hor_0_bits_sign_6 = u; break;
      case 9 : dut->io_in_hor_0_bits_sign_7 = u; break;
      case 10 : dut->io_in_hor_0_bits_man_0 = u; break;
      case 11 : dut->io_in_hor_0_bits_man_1 = u; break;
      case 12 : dut->io_in_hor_0_bits_man_2 = u; break;
      case 13 : dut->io_in_hor_0_bits_man_3 = u; break;
      case 14 : dut->io_in_hor_0_bits_man_4 = u; break;
      case 15 : dut->io_in_hor_0_bits_man_5 = u; break;
      case 16 : dut->io_in_hor_0_bits_man_6 = u; break;
      case 17 : dut->io_in_hor_0_bits_man_7 = u; break;
      case 18 : dut->io_in_hor_0_bits_exp = u; break;
      case 19 : dut->io_in_hor_1_valid = u; break;
      case 20 : dut->io_in_hor_1_bits_sign_0 = u; break;
      case 21 : dut->io_in_hor_1_bits_sign_1 = u; break;
      case 22 : dut->io_in_hor_1_bits_sign_2 = u; break;
      case 23 : dut->io_in_hor_1_bits_sign_3 = u; break;
      case 24 : dut->io_in_hor_1_bits_sign_4 = u; break;
      case 25 : dut->io_in_hor_1_bits_sign_5 = u; break;
      case 26 : dut->io_in_hor_1_bits_sign_6 = u; break;
      case 27 : dut->io_in_hor_1_bits_sign_7 = u; break;
      case 28 : dut->io_in_hor_1_bits_man_0 = u; break;
      case 29 : dut->io_in_hor_1_bits_man_1 = u; break;
      case 30 : dut->io_in_hor_1_bits_man_2 = u; break;
      case 31 : dut->io_in_hor_1_bits_man_3 = u; break;
      case 32 : dut->io_in_hor_1_bits_man_4 = u; break;
      case 33 : dut->io_in_hor_1_bits_man_5 = u; break;
      case 34 : dut->io_in_hor_1_bits_man_6 = u; break;
      case 35 : dut->io_in_hor_1_bits_man_7 = u; break;
      case 36 : dut->io_in_hor_1_bits_exp = u; break;
      case 37 : dut->io_in_hor_2_valid = u; break;
      case 38 : dut->io_in_hor_2_bits_sign_0 = u; break;
      case 39 : dut->io_in_hor_2_bits_sign_1 = u; break;
      case 40 : dut->io_in_hor_2_bits_sign_2 = u; break;
      case 41 : dut->io_in_hor_2_bits_sign_3 = u; break;
      case 42 : dut->io_in_hor_2_bits_sign_4 = u; break;
      case 43 : dut->io_in_hor_2_bits_sign_5 = u; break;
      case 44 : dut->io_in_hor_2_bits_sign_6 = u; break;
      case 45 : dut->io_in_hor_2_bits_sign_7 = u; break;
      case 46 : dut->io_in_hor_2_bits_man_0 = u; break;
      case 47 : dut->io_in_hor_2_bits_man_1 = u; break;
      case 48 : dut->io_in_hor_2_bits_man_2 = u; break;
      case 49 : dut->io_in_hor_2_bits_man_3 = u; break;
      case 50 : dut->io_in_hor_2_bits_man_4 = u; break;
      case 51 : dut->io_in_hor_2_bits_man_5 = u; break;
      case 52 : dut->io_in_hor_2_bits_man_6 = u; break;
      case 53 : dut->io_in_hor_2_bits_man_7 = u; break;
      case 54 : dut->io_in_hor_2_bits_exp = u; break;
      case 55 : dut->io_in_hor_3_valid = u; break;
      case 56 : dut->io_in_hor_3_bits_sign_0 = u; break;
      case 57 : dut->io_in_hor_3_bits_sign_1 = u; break;
      case 58 : dut->io_in_hor_3_bits_sign_2 = u; break;
      case 59 : dut->io_in_hor_3_bits_sign_3 = u; break;
      case 60 : dut->io_in_hor_3_bits_sign_4 = u; break;
      case 61 : dut->io_in_hor_3_bits_sign_5 = u; break;
      case 62 : dut->io_in_hor_3_bits_sign_6 = u; break;
      case 63 : dut->io_in_hor_3_bits_sign_7 = u; break;
      case 64 : dut->io_in_hor_3_bits_man_0 = u; break;
      case 65 : dut->io_in_hor_3_bits_man_1 = u; break;
      case 66 : dut->io_in_hor_3_bits_man_2 = u; break;
      case 67 : dut->io_in_hor_3_bits_man_3 = u; break;
      case 68 : dut->io_in_hor_3_bits_man_4 = u; break;
      case 69 : dut->io_in_hor_3_bits_man_5 = u; break;
      case 70 : dut->io_in_hor_3_bits_man_6 = u; break;
      case 71 : dut->io_in_hor_3_bits_man_7 = u; break;
      case 72 : dut->io_in_hor_3_bits_exp = u; break;
      case 73 : dut->io_in_hor_4_valid = u; break;
      case 74 : dut->io_in_hor_4_bits_sign_0 = u; break;
      case 75 : dut->io_in_hor_4_bits_sign_1 = u; break;
      case 76 : dut->io_in_hor_4_bits_sign_2 = u; break;
      case 77 : dut->io_in_hor_4_bits_sign_3 = u; break;
      case 78 : dut->io_in_hor_4_bits_sign_4 = u; break;
      case 79 : dut->io_in_hor_4_bits_sign_5 = u; break;
      case 80 : dut->io_in_hor_4_bits_sign_6 = u; break;
      case 81 : dut->io_in_hor_4_bits_sign_7 = u; break;
      case 82 : dut->io_in_hor_4_bits_man_0 = u; break;
      case 83 : dut->io_in_hor_4_bits_man_1 = u; break;
      case 84 : dut->io_in_hor_4_bits_man_2 = u; break;
      case 85 : dut->io_in_hor_4_bits_man_3 = u; break;
      case 86 : dut->io_in_hor_4_bits_man_4 = u; break;
      case 87 : dut->io_in_hor_4_bits_man_5 = u; break;
      case 88 : dut->io_in_hor_4_bits_man_6 = u; break;
      case 89 : dut->io_in_hor_4_bits_man_7 = u; break;
      case 90 : dut->io_in_hor_4_bits_exp = u; break;
      case 91 : dut->io_in_hor_5_valid = u; break;
      case 92 : dut->io_in_hor_5_bits_sign_0 = u; break;
      case 93 : dut->io_in_hor_5_bits_sign_1 = u; break;
      case 94 : dut->io_in_hor_5_bits_sign_2 = u; break;
      case 95 : dut->io_in_hor_5_bits_sign_3 = u; break;
      case 96 : dut->io_in_hor_5_bits_sign_4 = u; break;
      case 97 : dut->io_in_hor_5_bits_sign_5 = u; break;
      case 98 : dut->io_in_hor_5_bits_sign_6 = u; break;
      case 99 : dut->io_in_hor_5_bits_sign_7 = u; break;
      case 100 : dut->io_in_hor_5_bits_man_0 = u; break;
      case 101 : dut->io_in_hor_5_bits_man_1 = u; break;
      case 102 : dut->io_in_hor_5_bits_man_2 = u; break;
      case 103 : dut->io_in_hor_5_bits_man_3 = u; break;
      case 104 : dut->io_in_hor_5_bits_man_4 = u; break;
      case 105 : dut->io_in_hor_5_bits_man_5 = u; break;
      case 106 : dut->io_in_hor_5_bits_man_6 = u; break;
      case 107 : dut->io_in_hor_5_bits_man_7 = u; break;
      case 108 : dut->io_in_hor_5_bits_exp = u; break;
      case 109 : dut->io_in_hor_6_valid = u; break;
      case 110 : dut->io_in_hor_6_bits_sign_0 = u; break;
      case 111 : dut->io_in_hor_6_bits_sign_1 = u; break;
      case 112 : dut->io_in_hor_6_bits_sign_2 = u; break;
      case 113 : dut->io_in_hor_6_bits_sign_3 = u; break;
      case 114 : dut->io_in_hor_6_bits_sign_4 = u; break;
      case 115 : dut->io_in_hor_6_bits_sign_5 = u; break;
      case 116 : dut->io_in_hor_6_bits_sign_6 = u; break;
      case 117 : dut->io_in_hor_6_bits_sign_7 = u; break;
      case 118 : dut->io_in_hor_6_bits_man_0 = u; break;
      case 119 : dut->io_in_hor_6_bits_man_1 = u; break;
      case 120 : dut->io_in_hor_6_bits_man_2 = u; break;
      case 121 : dut->io_in_hor_6_bits_man_3 = u; break;
      case 122 : dut->io_in_hor_6_bits_man_4 = u; break;
      case 123 : dut->io_in_hor_6_bits_man_5 = u; break;
      case 124 : dut->io_in_hor_6_bits_man_6 = u; break;
      case 125 : dut->io_in_hor_6_bits_man_7 = u; break;
      case 126 : dut->io_in_hor_6_bits_exp = u; break;
      case 127 : dut->io_in_hor_7_valid = u; break;
      case 128 : dut->io_in_hor_7_bits_sign_0 = u; break;
      case 129 : dut->io_in_hor_7_bits_sign_1 = u; break;
      case 130 : dut->io_in_hor_7_bits_sign_2 = u; break;
      case 131 : dut->io_in_hor_7_bits_sign_3 = u; break;
      case 132 : dut->io_in_hor_7_bits_sign_4 = u; break;
      case 133 : dut->io_in_hor_7_bits_sign_5 = u; break;
      case 134 : dut->io_in_hor_7_bits_sign_6 = u; break;
      case 135 : dut->io_in_hor_7_bits_sign_7 = u; break;
      case 136 : dut->io_in_hor_7_bits_man_0 = u; break;
      case 137 : dut->io_in_hor_7_bits_man_1 = u; break;
      case 138 : dut->io_in_hor_7_bits_man_2 = u; break;
      case 139 : dut->io_in_hor_7_bits_man_3 = u; break;
      case 140 : dut->io_in_hor_7_bits_man_4 = u; break;
      case 141 : dut->io_in_hor_7_bits_man_5 = u; break;
      case 142 : dut->io_in_hor_7_bits_man_6 = u; break;
      case 143 : dut->io_in_hor_7_bits_man_7 = u; break;
      case 144 : dut->io_in_hor_7_bits_exp = u; break;
      case 145 : dut->io_in_ver_0_valid = u; break;
      case 146 : dut->io_in_ver_0_bits_sign_0 = u; break;
      case 147 : dut->io_in_ver_0_bits_sign_1 = u; break;
      case 148 : dut->io_in_ver_0_bits_sign_2 = u; break;
      case 149 : dut->io_in_ver_0_bits_sign_3 = u; break;
      case 150 : dut->io_in_ver_0_bits_sign_4 = u; break;
      case 151 : dut->io_in_ver_0_bits_sign_5 = u; break;
      case 152 : dut->io_in_ver_0_bits_sign_6 = u; break;
      case 153 : dut->io_in_ver_0_bits_sign_7 = u; break;
      case 154 : dut->io_in_ver_0_bits_man_0 = u; break;
      case 155 : dut->io_in_ver_0_bits_man_1 = u; break;
      case 156 : dut->io_in_ver_0_bits_man_2 = u; break;
      case 157 : dut->io_in_ver_0_bits_man_3 = u; break;
      case 158 : dut->io_in_ver_0_bits_man_4 = u; break;
      case 159 : dut->io_in_ver_0_bits_man_5 = u; break;
      case 160 : dut->io_in_ver_0_bits_man_6 = u; break;
      case 161 : dut->io_in_ver_0_bits_man_7 = u; break;
      case 162 : dut->io_in_ver_0_bits_exp = u; break;
      case 163 : dut->io_in_ver_1_valid = u; break;
      case 164 : dut->io_in_ver_1_bits_sign_0 = u; break;
      case 165 : dut->io_in_ver_1_bits_sign_1 = u; break;
      case 166 : dut->io_in_ver_1_bits_sign_2 = u; break;
      case 167 : dut->io_in_ver_1_bits_sign_3 = u; break;
      case 168 : dut->io_in_ver_1_bits_sign_4 = u; break;
      case 169 : dut->io_in_ver_1_bits_sign_5 = u; break;
      case 170 : dut->io_in_ver_1_bits_sign_6 = u; break;
      case 171 : dut->io_in_ver_1_bits_sign_7 = u; break;
      case 172 : dut->io_in_ver_1_bits_man_0 = u; break;
      case 173 : dut->io_in_ver_1_bits_man_1 = u; break;
      case 174 : dut->io_in_ver_1_bits_man_2 = u; break;
      case 175 : dut->io_in_ver_1_bits_man_3 = u; break;
      case 176 : dut->io_in_ver_1_bits_man_4 = u; break;
      case 177 : dut->io_in_ver_1_bits_man_5 = u; break;
      case 178 : dut->io_in_ver_1_bits_man_6 = u; break;
      case 179 : dut->io_in_ver_1_bits_man_7 = u; break;
      case 180 : dut->io_in_ver_1_bits_exp = u; break;
      case 181 : dut->io_in_ver_2_valid = u; break;
      case 182 : dut->io_in_ver_2_bits_sign_0 = u; break;
      case 183 : dut->io_in_ver_2_bits_sign_1 = u; break;
      case 184 : dut->io_in_ver_2_bits_sign_2 = u; break;
      case 185 : dut->io_in_ver_2_bits_sign_3 = u; break;
      case 186 : dut->io_in_ver_2_bits_sign_4 = u; break;
      case 187 : dut->io_in_ver_2_bits_sign_5 = u; break;
      case 188 : dut->io_in_ver_2_bits_sign_6 = u; break;
      case 189 : dut->io_in_ver_2_bits_sign_7 = u; break;
      case 190 : dut->io_in_ver_2_bits_man_0 = u; break;
      case 191 : dut->io_in_ver_2_bits_man_1 = u; break;
      case 192 : dut->io_in_ver_2_bits_man_2 = u; break;
      case 193 : dut->io_in_ver_2_bits_man_3 = u; break;
      case 194 : dut->io_in_ver_2_bits_man_4 = u; break;
      case 195 : dut->io_in_ver_2_bits_man_5 = u; break;
      case 196 : dut->io_in_ver_2_bits_man_6 = u; break;
      case 197 : dut->io_in_ver_2_bits_man_7 = u; break;
      case 198 : dut->io_in_ver_2_bits_exp = u; break;
      case 199 : dut->io_in_ver_3_valid = u; break;
      case 200 : dut->io_in_ver_3_bits_sign_0 = u; break;
      case 201 : dut->io_in_ver_3_bits_sign_1 = u; break;
      case 202 : dut->io_in_ver_3_bits_sign_2 = u; break;
      case 203 : dut->io_in_ver_3_bits_sign_3 = u; break;
      case 204 : dut->io_in_ver_3_bits_sign_4 = u; break;
      case 205 : dut->io_in_ver_3_bits_sign_5 = u; break;
      case 206 : dut->io_in_ver_3_bits_sign_6 = u; break;
      case 207 : dut->io_in_ver_3_bits_sign_7 = u; break;
      case 208 : dut->io_in_ver_3_bits_man_0 = u; break;
      case 209 : dut->io_in_ver_3_bits_man_1 = u; break;
      case 210 : dut->io_in_ver_3_bits_man_2 = u; break;
      case 211 : dut->io_in_ver_3_bits_man_3 = u; break;
      case 212 : dut->io_in_ver_3_bits_man_4 = u; break;
      case 213 : dut->io_in_ver_3_bits_man_5 = u; break;
      case 214 : dut->io_in_ver_3_bits_man_6 = u; break;
      case 215 : dut->io_in_ver_3_bits_man_7 = u; break;
      case 216 : dut->io_in_ver_3_bits_exp = u; break;
      case 217 : dut->io_in_ver_4_valid = u; break;
      case 218 : dut->io_in_ver_4_bits_sign_0 = u; break;
      case 219 : dut->io_in_ver_4_bits_sign_1 = u; break;
      case 220 : dut->io_in_ver_4_bits_sign_2 = u; break;
      case 221 : dut->io_in_ver_4_bits_sign_3 = u; break;
      case 222 : dut->io_in_ver_4_bits_sign_4 = u; break;
      case 223 : dut->io_in_ver_4_bits_sign_5 = u; break;
      case 224 : dut->io_in_ver_4_bits_sign_6 = u; break;
      case 225 : dut->io_in_ver_4_bits_sign_7 = u; break;
      case 226 : dut->io_in_ver_4_bits_man_0 = u; break;
      case 227 : dut->io_in_ver_4_bits_man_1 = u; break;
      case 228 : dut->io_in_ver_4_bits_man_2 = u; break;
      case 229 : dut->io_in_ver_4_bits_man_3 = u; break;
      case 230 : dut->io_in_ver_4_bits_man_4 = u; break;
      case 231 : dut->io_in_ver_4_bits_man_5 = u; break;
      case 232 : dut->io_in_ver_4_bits_man_6 = u; break;
      case 233 : dut->io_in_ver_4_bits_man_7 = u; break;
      case 234 : dut->io_in_ver_4_bits_exp = u; break;
      case 235 : dut->io_in_ver_5_valid = u; break;
      case 236 : dut->io_in_ver_5_bits_sign_0 = u; break;
      case 237 : dut->io_in_ver_5_bits_sign_1 = u; break;
      case 238 : dut->io_in_ver_5_bits_sign_2 = u; break;
      case 239 : dut->io_in_ver_5_bits_sign_3 = u; break;
      case 240 : dut->io_in_ver_5_bits_sign_4 = u; break;
      case 241 : dut->io_in_ver_5_bits_sign_5 = u; break;
      case 242 : dut->io_in_ver_5_bits_sign_6 = u; break;
      case 243 : dut->io_in_ver_5_bits_sign_7 = u; break;
      case 244 : dut->io_in_ver_5_bits_man_0 = u; break;
      case 245 : dut->io_in_ver_5_bits_man_1 = u; break;
      case 246 : dut->io_in_ver_5_bits_man_2 = u; break;
      case 247 : dut->io_in_ver_5_bits_man_3 = u; break;
      case 248 : dut->io_in_ver_5_bits_man_4 = u; break;
      case 249 : dut->io_in_ver_5_bits_man_5 = u; break;
      case 250 : dut->io_in_ver_5_bits_man_6 = u; break;
      case 251 : dut->io_in_ver_5_bits_man_7 = u; break;
      case 252 : dut->io_in_ver_5_bits_exp = u; break;
      case 253 : dut->io_in_ver_6_valid = u; break;
      case 254 : dut->io_in_ver_6_bits_sign_0 = u; break;
      case 255 : dut->io_in_ver_6_bits_sign_1 = u; break;
      case 256 : dut->io_in_ver_6_bits_sign_2 = u; break;
      case 257 : dut->io_in_ver_6_bits_sign_3 = u; break;
      case 258 : dut->io_in_ver_6_bits_sign_4 = u; break;
      case 259 : dut->io_in_ver_6_bits_sign_5 = u; break;
      case 260 : dut->io_in_ver_6_bits_sign_6 = u; break;
      case 261 : dut->io_in_ver_6_bits_sign_7 = u; break;
      case 262 : dut->io_in_ver_6_bits_man_0 = u; break;
      case 263 : dut->io_in_ver_6_bits_man_1 = u; break;
      case 264 : dut->io_in_ver_6_bits_man_2 = u; break;
      case 265 : dut->io_in_ver_6_bits_man_3 = u; break;
      case 266 : dut->io_in_ver_6_bits_man_4 = u; break;
      case 267 : dut->io_in_ver_6_bits_man_5 = u; break;
      case 268 : dut->io_in_ver_6_bits_man_6 = u; break;
      case 269 : dut->io_in_ver_6_bits_man_7 = u; break;
      case 270 : dut->io_in_ver_6_bits_exp = u; break;
      case 271 : dut->io_in_ver_7_valid = u; break;
      case 272 : dut->io_in_ver_7_bits_sign_0 = u; break;
      case 273 : dut->io_in_ver_7_bits_sign_1 = u; break;
      case 274 : dut->io_in_ver_7_bits_sign_2 = u; break;
      case 275 : dut->io_in_ver_7_bits_sign_3 = u; break;
      case 276 : dut->io_in_ver_7_bits_sign_4 = u; break;
      case 277 : dut->io_in_ver_7_bits_sign_5 = u; break;
      case 278 : dut->io_in_ver_7_bits_sign_6 = u; break;
      case 279 : dut->io_in_ver_7_bits_sign_7 = u; break;
      case 280 : dut->io_in_ver_7_bits_man_0 = u; break;
      case 281 : dut->io_in_ver_7_bits_man_1 = u; break;
      case 282 : dut->io_in_ver_7_bits_man_2 = u; break;
      case 283 : dut->io_in_ver_7_bits_man_3 = u; break;
      case 284 : dut->io_in_ver_7_bits_man_4 = u; break;
      case 285 : dut->io_in_ver_7_bits_man_5 = u; break;
      case 286 : dut->io_in_ver_7_bits_man_6 = u; break;
      case 287 : dut->io_in_ver_7_bits_man_7 = u; break;
      case 288 : dut->io_in_ver_7_bits_exp = u; break;
      case 289 : dut->io_in_flag = u; break;

    default:
      std::cerr << "Cannot find the object of id = " << id << std::endl;
      finish();
      break;
    }
  }
  inline int64_t peek(int32_t id) {
    uint64_t value = 0;
    switch(id) {
      case 0 : value = dut->reset; break;
      case 1 : value = dut->io_in_hor_0_valid; break;
      case 2 : value = dut->io_in_hor_0_bits_sign_0; break;
      case 3 : value = dut->io_in_hor_0_bits_sign_1; break;
      case 4 : value = dut->io_in_hor_0_bits_sign_2; break;
      case 5 : value = dut->io_in_hor_0_bits_sign_3; break;
      case 6 : value = dut->io_in_hor_0_bits_sign_4; break;
      case 7 : value = dut->io_in_hor_0_bits_sign_5; break;
      case 8 : value = dut->io_in_hor_0_bits_sign_6; break;
      case 9 : value = dut->io_in_hor_0_bits_sign_7; break;
      case 10 : value = dut->io_in_hor_0_bits_man_0; break;
      case 11 : value = dut->io_in_hor_0_bits_man_1; break;
      case 12 : value = dut->io_in_hor_0_bits_man_2; break;
      case 13 : value = dut->io_in_hor_0_bits_man_3; break;
      case 14 : value = dut->io_in_hor_0_bits_man_4; break;
      case 15 : value = dut->io_in_hor_0_bits_man_5; break;
      case 16 : value = dut->io_in_hor_0_bits_man_6; break;
      case 17 : value = dut->io_in_hor_0_bits_man_7; break;
      case 18 : value = dut->io_in_hor_0_bits_exp; break;
      case 19 : value = dut->io_in_hor_1_valid; break;
      case 20 : value = dut->io_in_hor_1_bits_sign_0; break;
      case 21 : value = dut->io_in_hor_1_bits_sign_1; break;
      case 22 : value = dut->io_in_hor_1_bits_sign_2; break;
      case 23 : value = dut->io_in_hor_1_bits_sign_3; break;
      case 24 : value = dut->io_in_hor_1_bits_sign_4; break;
      case 25 : value = dut->io_in_hor_1_bits_sign_5; break;
      case 26 : value = dut->io_in_hor_1_bits_sign_6; break;
      case 27 : value = dut->io_in_hor_1_bits_sign_7; break;
      case 28 : value = dut->io_in_hor_1_bits_man_0; break;
      case 29 : value = dut->io_in_hor_1_bits_man_1; break;
      case 30 : value = dut->io_in_hor_1_bits_man_2; break;
      case 31 : value = dut->io_in_hor_1_bits_man_3; break;
      case 32 : value = dut->io_in_hor_1_bits_man_4; break;
      case 33 : value = dut->io_in_hor_1_bits_man_5; break;
      case 34 : value = dut->io_in_hor_1_bits_man_6; break;
      case 35 : value = dut->io_in_hor_1_bits_man_7; break;
      case 36 : value = dut->io_in_hor_1_bits_exp; break;
      case 37 : value = dut->io_in_hor_2_valid; break;
      case 38 : value = dut->io_in_hor_2_bits_sign_0; break;
      case 39 : value = dut->io_in_hor_2_bits_sign_1; break;
      case 40 : value = dut->io_in_hor_2_bits_sign_2; break;
      case 41 : value = dut->io_in_hor_2_bits_sign_3; break;
      case 42 : value = dut->io_in_hor_2_bits_sign_4; break;
      case 43 : value = dut->io_in_hor_2_bits_sign_5; break;
      case 44 : value = dut->io_in_hor_2_bits_sign_6; break;
      case 45 : value = dut->io_in_hor_2_bits_sign_7; break;
      case 46 : value = dut->io_in_hor_2_bits_man_0; break;
      case 47 : value = dut->io_in_hor_2_bits_man_1; break;
      case 48 : value = dut->io_in_hor_2_bits_man_2; break;
      case 49 : value = dut->io_in_hor_2_bits_man_3; break;
      case 50 : value = dut->io_in_hor_2_bits_man_4; break;
      case 51 : value = dut->io_in_hor_2_bits_man_5; break;
      case 52 : value = dut->io_in_hor_2_bits_man_6; break;
      case 53 : value = dut->io_in_hor_2_bits_man_7; break;
      case 54 : value = dut->io_in_hor_2_bits_exp; break;
      case 55 : value = dut->io_in_hor_3_valid; break;
      case 56 : value = dut->io_in_hor_3_bits_sign_0; break;
      case 57 : value = dut->io_in_hor_3_bits_sign_1; break;
      case 58 : value = dut->io_in_hor_3_bits_sign_2; break;
      case 59 : value = dut->io_in_hor_3_bits_sign_3; break;
      case 60 : value = dut->io_in_hor_3_bits_sign_4; break;
      case 61 : value = dut->io_in_hor_3_bits_sign_5; break;
      case 62 : value = dut->io_in_hor_3_bits_sign_6; break;
      case 63 : value = dut->io_in_hor_3_bits_sign_7; break;
      case 64 : value = dut->io_in_hor_3_bits_man_0; break;
      case 65 : value = dut->io_in_hor_3_bits_man_1; break;
      case 66 : value = dut->io_in_hor_3_bits_man_2; break;
      case 67 : value = dut->io_in_hor_3_bits_man_3; break;
      case 68 : value = dut->io_in_hor_3_bits_man_4; break;
      case 69 : value = dut->io_in_hor_3_bits_man_5; break;
      case 70 : value = dut->io_in_hor_3_bits_man_6; break;
      case 71 : value = dut->io_in_hor_3_bits_man_7; break;
      case 72 : value = dut->io_in_hor_3_bits_exp; break;
      case 73 : value = dut->io_in_hor_4_valid; break;
      case 74 : value = dut->io_in_hor_4_bits_sign_0; break;
      case 75 : value = dut->io_in_hor_4_bits_sign_1; break;
      case 76 : value = dut->io_in_hor_4_bits_sign_2; break;
      case 77 : value = dut->io_in_hor_4_bits_sign_3; break;
      case 78 : value = dut->io_in_hor_4_bits_sign_4; break;
      case 79 : value = dut->io_in_hor_4_bits_sign_5; break;
      case 80 : value = dut->io_in_hor_4_bits_sign_6; break;
      case 81 : value = dut->io_in_hor_4_bits_sign_7; break;
      case 82 : value = dut->io_in_hor_4_bits_man_0; break;
      case 83 : value = dut->io_in_hor_4_bits_man_1; break;
      case 84 : value = dut->io_in_hor_4_bits_man_2; break;
      case 85 : value = dut->io_in_hor_4_bits_man_3; break;
      case 86 : value = dut->io_in_hor_4_bits_man_4; break;
      case 87 : value = dut->io_in_hor_4_bits_man_5; break;
      case 88 : value = dut->io_in_hor_4_bits_man_6; break;
      case 89 : value = dut->io_in_hor_4_bits_man_7; break;
      case 90 : value = dut->io_in_hor_4_bits_exp; break;
      case 91 : value = dut->io_in_hor_5_valid; break;
      case 92 : value = dut->io_in_hor_5_bits_sign_0; break;
      case 93 : value = dut->io_in_hor_5_bits_sign_1; break;
      case 94 : value = dut->io_in_hor_5_bits_sign_2; break;
      case 95 : value = dut->io_in_hor_5_bits_sign_3; break;
      case 96 : value = dut->io_in_hor_5_bits_sign_4; break;
      case 97 : value = dut->io_in_hor_5_bits_sign_5; break;
      case 98 : value = dut->io_in_hor_5_bits_sign_6; break;
      case 99 : value = dut->io_in_hor_5_bits_sign_7; break;
      case 100 : value = dut->io_in_hor_5_bits_man_0; break;
      case 101 : value = dut->io_in_hor_5_bits_man_1; break;
      case 102 : value = dut->io_in_hor_5_bits_man_2; break;
      case 103 : value = dut->io_in_hor_5_bits_man_3; break;
      case 104 : value = dut->io_in_hor_5_bits_man_4; break;
      case 105 : value = dut->io_in_hor_5_bits_man_5; break;
      case 106 : value = dut->io_in_hor_5_bits_man_6; break;
      case 107 : value = dut->io_in_hor_5_bits_man_7; break;
      case 108 : value = dut->io_in_hor_5_bits_exp; break;
      case 109 : value = dut->io_in_hor_6_valid; break;
      case 110 : value = dut->io_in_hor_6_bits_sign_0; break;
      case 111 : value = dut->io_in_hor_6_bits_sign_1; break;
      case 112 : value = dut->io_in_hor_6_bits_sign_2; break;
      case 113 : value = dut->io_in_hor_6_bits_sign_3; break;
      case 114 : value = dut->io_in_hor_6_bits_sign_4; break;
      case 115 : value = dut->io_in_hor_6_bits_sign_5; break;
      case 116 : value = dut->io_in_hor_6_bits_sign_6; break;
      case 117 : value = dut->io_in_hor_6_bits_sign_7; break;
      case 118 : value = dut->io_in_hor_6_bits_man_0; break;
      case 119 : value = dut->io_in_hor_6_bits_man_1; break;
      case 120 : value = dut->io_in_hor_6_bits_man_2; break;
      case 121 : value = dut->io_in_hor_6_bits_man_3; break;
      case 122 : value = dut->io_in_hor_6_bits_man_4; break;
      case 123 : value = dut->io_in_hor_6_bits_man_5; break;
      case 124 : value = dut->io_in_hor_6_bits_man_6; break;
      case 125 : value = dut->io_in_hor_6_bits_man_7; break;
      case 126 : value = dut->io_in_hor_6_bits_exp; break;
      case 127 : value = dut->io_in_hor_7_valid; break;
      case 128 : value = dut->io_in_hor_7_bits_sign_0; break;
      case 129 : value = dut->io_in_hor_7_bits_sign_1; break;
      case 130 : value = dut->io_in_hor_7_bits_sign_2; break;
      case 131 : value = dut->io_in_hor_7_bits_sign_3; break;
      case 132 : value = dut->io_in_hor_7_bits_sign_4; break;
      case 133 : value = dut->io_in_hor_7_bits_sign_5; break;
      case 134 : value = dut->io_in_hor_7_bits_sign_6; break;
      case 135 : value = dut->io_in_hor_7_bits_sign_7; break;
      case 136 : value = dut->io_in_hor_7_bits_man_0; break;
      case 137 : value = dut->io_in_hor_7_bits_man_1; break;
      case 138 : value = dut->io_in_hor_7_bits_man_2; break;
      case 139 : value = dut->io_in_hor_7_bits_man_3; break;
      case 140 : value = dut->io_in_hor_7_bits_man_4; break;
      case 141 : value = dut->io_in_hor_7_bits_man_5; break;
      case 142 : value = dut->io_in_hor_7_bits_man_6; break;
      case 143 : value = dut->io_in_hor_7_bits_man_7; break;
      case 144 : value = dut->io_in_hor_7_bits_exp; break;
      case 145 : value = dut->io_in_ver_0_valid; break;
      case 146 : value = dut->io_in_ver_0_bits_sign_0; break;
      case 147 : value = dut->io_in_ver_0_bits_sign_1; break;
      case 148 : value = dut->io_in_ver_0_bits_sign_2; break;
      case 149 : value = dut->io_in_ver_0_bits_sign_3; break;
      case 150 : value = dut->io_in_ver_0_bits_sign_4; break;
      case 151 : value = dut->io_in_ver_0_bits_sign_5; break;
      case 152 : value = dut->io_in_ver_0_bits_sign_6; break;
      case 153 : value = dut->io_in_ver_0_bits_sign_7; break;
      case 154 : value = dut->io_in_ver_0_bits_man_0; break;
      case 155 : value = dut->io_in_ver_0_bits_man_1; break;
      case 156 : value = dut->io_in_ver_0_bits_man_2; break;
      case 157 : value = dut->io_in_ver_0_bits_man_3; break;
      case 158 : value = dut->io_in_ver_0_bits_man_4; break;
      case 159 : value = dut->io_in_ver_0_bits_man_5; break;
      case 160 : value = dut->io_in_ver_0_bits_man_6; break;
      case 161 : value = dut->io_in_ver_0_bits_man_7; break;
      case 162 : value = dut->io_in_ver_0_bits_exp; break;
      case 163 : value = dut->io_in_ver_1_valid; break;
      case 164 : value = dut->io_in_ver_1_bits_sign_0; break;
      case 165 : value = dut->io_in_ver_1_bits_sign_1; break;
      case 166 : value = dut->io_in_ver_1_bits_sign_2; break;
      case 167 : value = dut->io_in_ver_1_bits_sign_3; break;
      case 168 : value = dut->io_in_ver_1_bits_sign_4; break;
      case 169 : value = dut->io_in_ver_1_bits_sign_5; break;
      case 170 : value = dut->io_in_ver_1_bits_sign_6; break;
      case 171 : value = dut->io_in_ver_1_bits_sign_7; break;
      case 172 : value = dut->io_in_ver_1_bits_man_0; break;
      case 173 : value = dut->io_in_ver_1_bits_man_1; break;
      case 174 : value = dut->io_in_ver_1_bits_man_2; break;
      case 175 : value = dut->io_in_ver_1_bits_man_3; break;
      case 176 : value = dut->io_in_ver_1_bits_man_4; break;
      case 177 : value = dut->io_in_ver_1_bits_man_5; break;
      case 178 : value = dut->io_in_ver_1_bits_man_6; break;
      case 179 : value = dut->io_in_ver_1_bits_man_7; break;
      case 180 : value = dut->io_in_ver_1_bits_exp; break;
      case 181 : value = dut->io_in_ver_2_valid; break;
      case 182 : value = dut->io_in_ver_2_bits_sign_0; break;
      case 183 : value = dut->io_in_ver_2_bits_sign_1; break;
      case 184 : value = dut->io_in_ver_2_bits_sign_2; break;
      case 185 : value = dut->io_in_ver_2_bits_sign_3; break;
      case 186 : value = dut->io_in_ver_2_bits_sign_4; break;
      case 187 : value = dut->io_in_ver_2_bits_sign_5; break;
      case 188 : value = dut->io_in_ver_2_bits_sign_6; break;
      case 189 : value = dut->io_in_ver_2_bits_sign_7; break;
      case 190 : value = dut->io_in_ver_2_bits_man_0; break;
      case 191 : value = dut->io_in_ver_2_bits_man_1; break;
      case 192 : value = dut->io_in_ver_2_bits_man_2; break;
      case 193 : value = dut->io_in_ver_2_bits_man_3; break;
      case 194 : value = dut->io_in_ver_2_bits_man_4; break;
      case 195 : value = dut->io_in_ver_2_bits_man_5; break;
      case 196 : value = dut->io_in_ver_2_bits_man_6; break;
      case 197 : value = dut->io_in_ver_2_bits_man_7; break;
      case 198 : value = dut->io_in_ver_2_bits_exp; break;
      case 199 : value = dut->io_in_ver_3_valid; break;
      case 200 : value = dut->io_in_ver_3_bits_sign_0; break;
      case 201 : value = dut->io_in_ver_3_bits_sign_1; break;
      case 202 : value = dut->io_in_ver_3_bits_sign_2; break;
      case 203 : value = dut->io_in_ver_3_bits_sign_3; break;
      case 204 : value = dut->io_in_ver_3_bits_sign_4; break;
      case 205 : value = dut->io_in_ver_3_bits_sign_5; break;
      case 206 : value = dut->io_in_ver_3_bits_sign_6; break;
      case 207 : value = dut->io_in_ver_3_bits_sign_7; break;
      case 208 : value = dut->io_in_ver_3_bits_man_0; break;
      case 209 : value = dut->io_in_ver_3_bits_man_1; break;
      case 210 : value = dut->io_in_ver_3_bits_man_2; break;
      case 211 : value = dut->io_in_ver_3_bits_man_3; break;
      case 212 : value = dut->io_in_ver_3_bits_man_4; break;
      case 213 : value = dut->io_in_ver_3_bits_man_5; break;
      case 214 : value = dut->io_in_ver_3_bits_man_6; break;
      case 215 : value = dut->io_in_ver_3_bits_man_7; break;
      case 216 : value = dut->io_in_ver_3_bits_exp; break;
      case 217 : value = dut->io_in_ver_4_valid; break;
      case 218 : value = dut->io_in_ver_4_bits_sign_0; break;
      case 219 : value = dut->io_in_ver_4_bits_sign_1; break;
      case 220 : value = dut->io_in_ver_4_bits_sign_2; break;
      case 221 : value = dut->io_in_ver_4_bits_sign_3; break;
      case 222 : value = dut->io_in_ver_4_bits_sign_4; break;
      case 223 : value = dut->io_in_ver_4_bits_sign_5; break;
      case 224 : value = dut->io_in_ver_4_bits_sign_6; break;
      case 225 : value = dut->io_in_ver_4_bits_sign_7; break;
      case 226 : value = dut->io_in_ver_4_bits_man_0; break;
      case 227 : value = dut->io_in_ver_4_bits_man_1; break;
      case 228 : value = dut->io_in_ver_4_bits_man_2; break;
      case 229 : value = dut->io_in_ver_4_bits_man_3; break;
      case 230 : value = dut->io_in_ver_4_bits_man_4; break;
      case 231 : value = dut->io_in_ver_4_bits_man_5; break;
      case 232 : value = dut->io_in_ver_4_bits_man_6; break;
      case 233 : value = dut->io_in_ver_4_bits_man_7; break;
      case 234 : value = dut->io_in_ver_4_bits_exp; break;
      case 235 : value = dut->io_in_ver_5_valid; break;
      case 236 : value = dut->io_in_ver_5_bits_sign_0; break;
      case 237 : value = dut->io_in_ver_5_bits_sign_1; break;
      case 238 : value = dut->io_in_ver_5_bits_sign_2; break;
      case 239 : value = dut->io_in_ver_5_bits_sign_3; break;
      case 240 : value = dut->io_in_ver_5_bits_sign_4; break;
      case 241 : value = dut->io_in_ver_5_bits_sign_5; break;
      case 242 : value = dut->io_in_ver_5_bits_sign_6; break;
      case 243 : value = dut->io_in_ver_5_bits_sign_7; break;
      case 244 : value = dut->io_in_ver_5_bits_man_0; break;
      case 245 : value = dut->io_in_ver_5_bits_man_1; break;
      case 246 : value = dut->io_in_ver_5_bits_man_2; break;
      case 247 : value = dut->io_in_ver_5_bits_man_3; break;
      case 248 : value = dut->io_in_ver_5_bits_man_4; break;
      case 249 : value = dut->io_in_ver_5_bits_man_5; break;
      case 250 : value = dut->io_in_ver_5_bits_man_6; break;
      case 251 : value = dut->io_in_ver_5_bits_man_7; break;
      case 252 : value = dut->io_in_ver_5_bits_exp; break;
      case 253 : value = dut->io_in_ver_6_valid; break;
      case 254 : value = dut->io_in_ver_6_bits_sign_0; break;
      case 255 : value = dut->io_in_ver_6_bits_sign_1; break;
      case 256 : value = dut->io_in_ver_6_bits_sign_2; break;
      case 257 : value = dut->io_in_ver_6_bits_sign_3; break;
      case 258 : value = dut->io_in_ver_6_bits_sign_4; break;
      case 259 : value = dut->io_in_ver_6_bits_sign_5; break;
      case 260 : value = dut->io_in_ver_6_bits_sign_6; break;
      case 261 : value = dut->io_in_ver_6_bits_sign_7; break;
      case 262 : value = dut->io_in_ver_6_bits_man_0; break;
      case 263 : value = dut->io_in_ver_6_bits_man_1; break;
      case 264 : value = dut->io_in_ver_6_bits_man_2; break;
      case 265 : value = dut->io_in_ver_6_bits_man_3; break;
      case 266 : value = dut->io_in_ver_6_bits_man_4; break;
      case 267 : value = dut->io_in_ver_6_bits_man_5; break;
      case 268 : value = dut->io_in_ver_6_bits_man_6; break;
      case 269 : value = dut->io_in_ver_6_bits_man_7; break;
      case 270 : value = dut->io_in_ver_6_bits_exp; break;
      case 271 : value = dut->io_in_ver_7_valid; break;
      case 272 : value = dut->io_in_ver_7_bits_sign_0; break;
      case 273 : value = dut->io_in_ver_7_bits_sign_1; break;
      case 274 : value = dut->io_in_ver_7_bits_sign_2; break;
      case 275 : value = dut->io_in_ver_7_bits_sign_3; break;
      case 276 : value = dut->io_in_ver_7_bits_sign_4; break;
      case 277 : value = dut->io_in_ver_7_bits_sign_5; break;
      case 278 : value = dut->io_in_ver_7_bits_sign_6; break;
      case 279 : value = dut->io_in_ver_7_bits_sign_7; break;
      case 280 : value = dut->io_in_ver_7_bits_man_0; break;
      case 281 : value = dut->io_in_ver_7_bits_man_1; break;
      case 282 : value = dut->io_in_ver_7_bits_man_2; break;
      case 283 : value = dut->io_in_ver_7_bits_man_3; break;
      case 284 : value = dut->io_in_ver_7_bits_man_4; break;
      case 285 : value = dut->io_in_ver_7_bits_man_5; break;
      case 286 : value = dut->io_in_ver_7_bits_man_6; break;
      case 287 : value = dut->io_in_ver_7_bits_man_7; break;
      case 288 : value = dut->io_in_ver_7_bits_exp; break;
      case 289 : value = dut->io_in_flag; break;
      case 290 : value = dut->io_in_hor_0_ready; break;
      case 291 : value = dut->io_in_hor_1_ready; break;
      case 292 : value = dut->io_in_hor_2_ready; break;
      case 293 : value = dut->io_in_hor_3_ready; break;
      case 294 : value = dut->io_in_hor_4_ready; break;
      case 295 : value = dut->io_in_hor_5_ready; break;
      case 296 : value = dut->io_in_hor_6_ready; break;
      case 297 : value = dut->io_in_hor_7_ready; break;
      case 298 : value = dut->io_in_ver_0_ready; break;
      case 299 : value = dut->io_in_ver_1_ready; break;
      case 300 : value = dut->io_in_ver_2_ready; break;
      case 301 : value = dut->io_in_ver_3_ready; break;
      case 302 : value = dut->io_in_ver_4_ready; break;
      case 303 : value = dut->io_in_ver_5_ready; break;
      case 304 : value = dut->io_in_ver_6_ready; break;
      case 305 : value = dut->io_in_ver_7_ready; break;
      case 306 : value = dut->io_out_0_0_result_sign; break;
      case 307 : value = dut->io_out_0_0_result_man; break;
      case 308 : value = dut->io_out_0_0_result_exp; break;
      case 309 : value = dut->io_out_0_1_result_sign; break;
      case 310 : value = dut->io_out_0_1_result_man; break;
      case 311 : value = dut->io_out_0_1_result_exp; break;
      case 312 : value = dut->io_out_0_2_result_sign; break;
      case 313 : value = dut->io_out_0_2_result_man; break;
      case 314 : value = dut->io_out_0_2_result_exp; break;
      case 315 : value = dut->io_out_0_3_result_sign; break;
      case 316 : value = dut->io_out_0_3_result_man; break;
      case 317 : value = dut->io_out_0_3_result_exp; break;
      case 318 : value = dut->io_out_0_4_result_sign; break;
      case 319 : value = dut->io_out_0_4_result_man; break;
      case 320 : value = dut->io_out_0_4_result_exp; break;
      case 321 : value = dut->io_out_0_5_result_sign; break;
      case 322 : value = dut->io_out_0_5_result_man; break;
      case 323 : value = dut->io_out_0_5_result_exp; break;
      case 324 : value = dut->io_out_0_6_result_sign; break;
      case 325 : value = dut->io_out_0_6_result_man; break;
      case 326 : value = dut->io_out_0_6_result_exp; break;
      case 327 : value = dut->io_out_0_7_result_sign; break;
      case 328 : value = dut->io_out_0_7_result_man; break;
      case 329 : value = dut->io_out_0_7_result_exp; break;
      case 330 : value = dut->io_out_1_0_result_sign; break;
      case 331 : value = dut->io_out_1_0_result_man; break;
      case 332 : value = dut->io_out_1_0_result_exp; break;
      case 333 : value = dut->io_out_1_1_result_sign; break;
      case 334 : value = dut->io_out_1_1_result_man; break;
      case 335 : value = dut->io_out_1_1_result_exp; break;
      case 336 : value = dut->io_out_1_2_result_sign; break;
      case 337 : value = dut->io_out_1_2_result_man; break;
      case 338 : value = dut->io_out_1_2_result_exp; break;
      case 339 : value = dut->io_out_1_3_result_sign; break;
      case 340 : value = dut->io_out_1_3_result_man; break;
      case 341 : value = dut->io_out_1_3_result_exp; break;
      case 342 : value = dut->io_out_1_4_result_sign; break;
      case 343 : value = dut->io_out_1_4_result_man; break;
      case 344 : value = dut->io_out_1_4_result_exp; break;
      case 345 : value = dut->io_out_1_5_result_sign; break;
      case 346 : value = dut->io_out_1_5_result_man; break;
      case 347 : value = dut->io_out_1_5_result_exp; break;
      case 348 : value = dut->io_out_1_6_result_sign; break;
      case 349 : value = dut->io_out_1_6_result_man; break;
      case 350 : value = dut->io_out_1_6_result_exp; break;
      case 351 : value = dut->io_out_1_7_result_sign; break;
      case 352 : value = dut->io_out_1_7_result_man; break;
      case 353 : value = dut->io_out_1_7_result_exp; break;
      case 354 : value = dut->io_out_2_0_result_sign; break;
      case 355 : value = dut->io_out_2_0_result_man; break;
      case 356 : value = dut->io_out_2_0_result_exp; break;
      case 357 : value = dut->io_out_2_1_result_sign; break;
      case 358 : value = dut->io_out_2_1_result_man; break;
      case 359 : value = dut->io_out_2_1_result_exp; break;
      case 360 : value = dut->io_out_2_2_result_sign; break;
      case 361 : value = dut->io_out_2_2_result_man; break;
      case 362 : value = dut->io_out_2_2_result_exp; break;
      case 363 : value = dut->io_out_2_3_result_sign; break;
      case 364 : value = dut->io_out_2_3_result_man; break;
      case 365 : value = dut->io_out_2_3_result_exp; break;
      case 366 : value = dut->io_out_2_4_result_sign; break;
      case 367 : value = dut->io_out_2_4_result_man; break;
      case 368 : value = dut->io_out_2_4_result_exp; break;
      case 369 : value = dut->io_out_2_5_result_sign; break;
      case 370 : value = dut->io_out_2_5_result_man; break;
      case 371 : value = dut->io_out_2_5_result_exp; break;
      case 372 : value = dut->io_out_2_6_result_sign; break;
      case 373 : value = dut->io_out_2_6_result_man; break;
      case 374 : value = dut->io_out_2_6_result_exp; break;
      case 375 : value = dut->io_out_2_7_result_sign; break;
      case 376 : value = dut->io_out_2_7_result_man; break;
      case 377 : value = dut->io_out_2_7_result_exp; break;
      case 378 : value = dut->io_out_3_0_result_sign; break;
      case 379 : value = dut->io_out_3_0_result_man; break;
      case 380 : value = dut->io_out_3_0_result_exp; break;
      case 381 : value = dut->io_out_3_1_result_sign; break;
      case 382 : value = dut->io_out_3_1_result_man; break;
      case 383 : value = dut->io_out_3_1_result_exp; break;
      case 384 : value = dut->io_out_3_2_result_sign; break;
      case 385 : value = dut->io_out_3_2_result_man; break;
      case 386 : value = dut->io_out_3_2_result_exp; break;
      case 387 : value = dut->io_out_3_3_result_sign; break;
      case 388 : value = dut->io_out_3_3_result_man; break;
      case 389 : value = dut->io_out_3_3_result_exp; break;
      case 390 : value = dut->io_out_3_4_result_sign; break;
      case 391 : value = dut->io_out_3_4_result_man; break;
      case 392 : value = dut->io_out_3_4_result_exp; break;
      case 393 : value = dut->io_out_3_5_result_sign; break;
      case 394 : value = dut->io_out_3_5_result_man; break;
      case 395 : value = dut->io_out_3_5_result_exp; break;
      case 396 : value = dut->io_out_3_6_result_sign; break;
      case 397 : value = dut->io_out_3_6_result_man; break;
      case 398 : value = dut->io_out_3_6_result_exp; break;
      case 399 : value = dut->io_out_3_7_result_sign; break;
      case 400 : value = dut->io_out_3_7_result_man; break;
      case 401 : value = dut->io_out_3_7_result_exp; break;
      case 402 : value = dut->io_out_4_0_result_sign; break;
      case 403 : value = dut->io_out_4_0_result_man; break;
      case 404 : value = dut->io_out_4_0_result_exp; break;
      case 405 : value = dut->io_out_4_1_result_sign; break;
      case 406 : value = dut->io_out_4_1_result_man; break;
      case 407 : value = dut->io_out_4_1_result_exp; break;
      case 408 : value = dut->io_out_4_2_result_sign; break;
      case 409 : value = dut->io_out_4_2_result_man; break;
      case 410 : value = dut->io_out_4_2_result_exp; break;
      case 411 : value = dut->io_out_4_3_result_sign; break;
      case 412 : value = dut->io_out_4_3_result_man; break;
      case 413 : value = dut->io_out_4_3_result_exp; break;
      case 414 : value = dut->io_out_4_4_result_sign; break;
      case 415 : value = dut->io_out_4_4_result_man; break;
      case 416 : value = dut->io_out_4_4_result_exp; break;
      case 417 : value = dut->io_out_4_5_result_sign; break;
      case 418 : value = dut->io_out_4_5_result_man; break;
      case 419 : value = dut->io_out_4_5_result_exp; break;
      case 420 : value = dut->io_out_4_6_result_sign; break;
      case 421 : value = dut->io_out_4_6_result_man; break;
      case 422 : value = dut->io_out_4_6_result_exp; break;
      case 423 : value = dut->io_out_4_7_result_sign; break;
      case 424 : value = dut->io_out_4_7_result_man; break;
      case 425 : value = dut->io_out_4_7_result_exp; break;
      case 426 : value = dut->io_out_5_0_result_sign; break;
      case 427 : value = dut->io_out_5_0_result_man; break;
      case 428 : value = dut->io_out_5_0_result_exp; break;
      case 429 : value = dut->io_out_5_1_result_sign; break;
      case 430 : value = dut->io_out_5_1_result_man; break;
      case 431 : value = dut->io_out_5_1_result_exp; break;
      case 432 : value = dut->io_out_5_2_result_sign; break;
      case 433 : value = dut->io_out_5_2_result_man; break;
      case 434 : value = dut->io_out_5_2_result_exp; break;
      case 435 : value = dut->io_out_5_3_result_sign; break;
      case 436 : value = dut->io_out_5_3_result_man; break;
      case 437 : value = dut->io_out_5_3_result_exp; break;
      case 438 : value = dut->io_out_5_4_result_sign; break;
      case 439 : value = dut->io_out_5_4_result_man; break;
      case 440 : value = dut->io_out_5_4_result_exp; break;
      case 441 : value = dut->io_out_5_5_result_sign; break;
      case 442 : value = dut->io_out_5_5_result_man; break;
      case 443 : value = dut->io_out_5_5_result_exp; break;
      case 444 : value = dut->io_out_5_6_result_sign; break;
      case 445 : value = dut->io_out_5_6_result_man; break;
      case 446 : value = dut->io_out_5_6_result_exp; break;
      case 447 : value = dut->io_out_5_7_result_sign; break;
      case 448 : value = dut->io_out_5_7_result_man; break;
      case 449 : value = dut->io_out_5_7_result_exp; break;
      case 450 : value = dut->io_out_6_0_result_sign; break;
      case 451 : value = dut->io_out_6_0_result_man; break;
      case 452 : value = dut->io_out_6_0_result_exp; break;
      case 453 : value = dut->io_out_6_1_result_sign; break;
      case 454 : value = dut->io_out_6_1_result_man; break;
      case 455 : value = dut->io_out_6_1_result_exp; break;
      case 456 : value = dut->io_out_6_2_result_sign; break;
      case 457 : value = dut->io_out_6_2_result_man; break;
      case 458 : value = dut->io_out_6_2_result_exp; break;
      case 459 : value = dut->io_out_6_3_result_sign; break;
      case 460 : value = dut->io_out_6_3_result_man; break;
      case 461 : value = dut->io_out_6_3_result_exp; break;
      case 462 : value = dut->io_out_6_4_result_sign; break;
      case 463 : value = dut->io_out_6_4_result_man; break;
      case 464 : value = dut->io_out_6_4_result_exp; break;
      case 465 : value = dut->io_out_6_5_result_sign; break;
      case 466 : value = dut->io_out_6_5_result_man; break;
      case 467 : value = dut->io_out_6_5_result_exp; break;
      case 468 : value = dut->io_out_6_6_result_sign; break;
      case 469 : value = dut->io_out_6_6_result_man; break;
      case 470 : value = dut->io_out_6_6_result_exp; break;
      case 471 : value = dut->io_out_6_7_result_sign; break;
      case 472 : value = dut->io_out_6_7_result_man; break;
      case 473 : value = dut->io_out_6_7_result_exp; break;
      case 474 : value = dut->io_out_7_0_result_sign; break;
      case 475 : value = dut->io_out_7_0_result_man; break;
      case 476 : value = dut->io_out_7_0_result_exp; break;
      case 477 : value = dut->io_out_7_1_result_sign; break;
      case 478 : value = dut->io_out_7_1_result_man; break;
      case 479 : value = dut->io_out_7_1_result_exp; break;
      case 480 : value = dut->io_out_7_2_result_sign; break;
      case 481 : value = dut->io_out_7_2_result_man; break;
      case 482 : value = dut->io_out_7_2_result_exp; break;
      case 483 : value = dut->io_out_7_3_result_sign; break;
      case 484 : value = dut->io_out_7_3_result_man; break;
      case 485 : value = dut->io_out_7_3_result_exp; break;
      case 486 : value = dut->io_out_7_4_result_sign; break;
      case 487 : value = dut->io_out_7_4_result_man; break;
      case 488 : value = dut->io_out_7_4_result_exp; break;
      case 489 : value = dut->io_out_7_5_result_sign; break;
      case 490 : value = dut->io_out_7_5_result_man; break;
      case 491 : value = dut->io_out_7_5_result_exp; break;
      case 492 : value = dut->io_out_7_6_result_sign; break;
      case 493 : value = dut->io_out_7_6_result_man; break;
      case 494 : value = dut->io_out_7_6_result_exp; break;
      case 495 : value = dut->io_out_7_7_result_sign; break;
      case 496 : value = dut->io_out_7_7_result_man; break;
      case 497 : value = dut->io_out_7_7_result_exp; break;

    default:
      std::cerr << "Cannot find the object of id = " << id << std::endl;
      finish();
      return -1;
    }
    // std::cout << "peeking: " << std::hex << value << std::endl;
    return value;
  }
  inline void poke_wide(int32_t id, int32_t offset, int64_t value) {
    const uint64_t u = value;
    WData* data = nullptr;
    size_t words = 0;
    switch(id) {

    default:
      std::cerr << "Cannot find the object of id = " << id << std::endl;
      finish();
      break;
    }
    const size_t firstWord = offset * 2;
    const size_t secondWord = firstWord + 1;
    if(firstWord >= words || firstWord < 0) {
      std::cerr << "Out of bounds index for id = " << id << " index = " << offset << std::endl;
      finish();
    } else if(secondWord >= words) {
      data[firstWord] = u;
    } else {
      data[firstWord] = u & 0xffffffffu;
      data[secondWord] = (u >> 32) & 0xffffffffu;
    }
  }
  inline int64_t peek_wide(int32_t id, int32_t offset) {
    WData* data = nullptr;
    size_t words = 0;
    switch(id) {

    default:
      std::cerr << "Cannot find the object of id = " << id << std::endl;
      finish();
      return -1;
    }
    const size_t firstWord = offset * 2;
    const size_t secondWord = firstWord + 1;
    if(firstWord >= words || firstWord < 0) {
      std::cerr << "Out of bounds index for id = " << id << " index = " << offset << std::endl;
      finish();
      return -1;
    } else if(secondWord >= words) {
      return (uint64_t)data[firstWord];
    } else {
      return (((uint64_t)data[secondWord]) << 32) | ((uint64_t)data[firstWord]);
    }
  }

  inline void set_args(int32_t argc, const char** argv) {
    Verilated::commandArgs(argc, argv);
  }
};

static sim_state* create_sim_state() {
  sim_state *s = new sim_state();
  std::string dumpfile = "/home/vpatel/Documents/Chisel/Chisel-Workspace/HBFP_4bitx1mult_Systolic_Array/test/HbfpPass/HBFP/SystolicArray_HBFP_forTesting.vcd";
  _startCoverageAndDump(&s->tfp, dumpfile, s->dut);
  return s;
}
// we only export the symbols that we prefixed with a unique id
#define _EXPORT __attribute__((visibility("default")))
extern "C" {

_EXPORT void* sim_init() {
  // void* ptr = create_sim_state();
  // std::cout << "native ptr: " << std::hex << ptr << std::endl;
  // return ptr;
  return (void*) create_sim_state();
}

_EXPORT int64_t step(void* s, int32_t cycles) {
  return ((sim_state*)s)->step(cycles);
}

_EXPORT void update(void* s) {
  ((sim_state*)s)->update();
}

_EXPORT void finish(void* s) {
  ((sim_state*)s)->finish();
}

_EXPORT void resetCoverage(void* s) {
  ((sim_state*)s)->resetCoverage();
}

_EXPORT void writeCoverage(void* s, const char* filename) {
  ((sim_state*)s)->writeCoverage(filename);
}

_EXPORT void poke(void* s, int32_t id, int64_t value) {
  ((sim_state*)s)->poke(id, value);
}

_EXPORT int64_t peek(void* s, int32_t id) {
  return ((sim_state*)s)->peek(id);
}

_EXPORT void poke_wide(void* s, int32_t id, int32_t offset, int64_t value) {
  ((sim_state*)s)->poke_wide(id, offset, value);
}

_EXPORT int64_t peek_wide(void* s, int32_t id, int32_t offset) {
  return ((sim_state*)s)->peek_wide(id, offset);
}

_EXPORT void set_args(void* s, int32_t argc, const char** argv) {
  ((sim_state*)s)->set_args(argc, argv);
}
} /* extern C */
