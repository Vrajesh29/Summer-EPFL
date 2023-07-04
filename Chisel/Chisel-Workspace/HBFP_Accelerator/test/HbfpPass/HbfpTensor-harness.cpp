#include "VHbfpTensor.h"
#include "verilated.h"

#define TOP_CLASS VHbfpTensor

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
  VerilatedCov::write("/home/vpatel/Documents/Chisel/Chisel-Workspace/HBFP_Accelerator/test/HbfpPass/coverage.dat");
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
      case 1 : dut->io_man_a_0 = u; break;
      case 2 : dut->io_man_a_1 = u; break;
      case 3 : dut->io_man_a_2 = u; break;
      case 4 : dut->io_man_a_3 = u; break;
      case 5 : dut->io_man_a_4 = u; break;
      case 6 : dut->io_man_a_5 = u; break;
      case 7 : dut->io_man_a_6 = u; break;
      case 8 : dut->io_man_a_7 = u; break;
      case 9 : dut->io_man_a_8 = u; break;
      case 10 : dut->io_man_a_9 = u; break;
      case 11 : dut->io_man_a_10 = u; break;
      case 12 : dut->io_man_a_11 = u; break;
      case 13 : dut->io_man_a_12 = u; break;
      case 14 : dut->io_man_a_13 = u; break;
      case 15 : dut->io_man_a_14 = u; break;
      case 16 : dut->io_man_a_15 = u; break;
      case 17 : dut->io_man_a_16 = u; break;
      case 18 : dut->io_man_a_17 = u; break;
      case 19 : dut->io_man_a_18 = u; break;
      case 20 : dut->io_man_a_19 = u; break;
      case 21 : dut->io_man_a_20 = u; break;
      case 22 : dut->io_man_a_21 = u; break;
      case 23 : dut->io_man_a_22 = u; break;
      case 24 : dut->io_man_a_23 = u; break;
      case 25 : dut->io_man_a_24 = u; break;
      case 26 : dut->io_man_a_25 = u; break;
      case 27 : dut->io_man_a_26 = u; break;
      case 28 : dut->io_man_a_27 = u; break;
      case 29 : dut->io_man_a_28 = u; break;
      case 30 : dut->io_man_a_29 = u; break;
      case 31 : dut->io_man_a_30 = u; break;
      case 32 : dut->io_man_a_31 = u; break;
      case 33 : dut->io_man_a_32 = u; break;
      case 34 : dut->io_man_a_33 = u; break;
      case 35 : dut->io_man_a_34 = u; break;
      case 36 : dut->io_man_a_35 = u; break;
      case 37 : dut->io_man_a_36 = u; break;
      case 38 : dut->io_man_a_37 = u; break;
      case 39 : dut->io_man_a_38 = u; break;
      case 40 : dut->io_man_a_39 = u; break;
      case 41 : dut->io_man_a_40 = u; break;
      case 42 : dut->io_man_a_41 = u; break;
      case 43 : dut->io_man_a_42 = u; break;
      case 44 : dut->io_man_a_43 = u; break;
      case 45 : dut->io_man_a_44 = u; break;
      case 46 : dut->io_man_a_45 = u; break;
      case 47 : dut->io_man_a_46 = u; break;
      case 48 : dut->io_man_a_47 = u; break;
      case 49 : dut->io_man_a_48 = u; break;
      case 50 : dut->io_man_a_49 = u; break;
      case 51 : dut->io_man_a_50 = u; break;
      case 52 : dut->io_man_a_51 = u; break;
      case 53 : dut->io_man_a_52 = u; break;
      case 54 : dut->io_man_a_53 = u; break;
      case 55 : dut->io_man_a_54 = u; break;
      case 56 : dut->io_man_a_55 = u; break;
      case 57 : dut->io_man_a_56 = u; break;
      case 58 : dut->io_man_a_57 = u; break;
      case 59 : dut->io_man_a_58 = u; break;
      case 60 : dut->io_man_a_59 = u; break;
      case 61 : dut->io_man_a_60 = u; break;
      case 62 : dut->io_man_a_61 = u; break;
      case 63 : dut->io_man_a_62 = u; break;
      case 64 : dut->io_man_a_63 = u; break;
      case 65 : dut->io_man_b_0 = u; break;
      case 66 : dut->io_man_b_1 = u; break;
      case 67 : dut->io_man_b_2 = u; break;
      case 68 : dut->io_man_b_3 = u; break;
      case 69 : dut->io_man_b_4 = u; break;
      case 70 : dut->io_man_b_5 = u; break;
      case 71 : dut->io_man_b_6 = u; break;
      case 72 : dut->io_man_b_7 = u; break;
      case 73 : dut->io_man_b_8 = u; break;
      case 74 : dut->io_man_b_9 = u; break;
      case 75 : dut->io_man_b_10 = u; break;
      case 76 : dut->io_man_b_11 = u; break;
      case 77 : dut->io_man_b_12 = u; break;
      case 78 : dut->io_man_b_13 = u; break;
      case 79 : dut->io_man_b_14 = u; break;
      case 80 : dut->io_man_b_15 = u; break;
      case 81 : dut->io_man_b_16 = u; break;
      case 82 : dut->io_man_b_17 = u; break;
      case 83 : dut->io_man_b_18 = u; break;
      case 84 : dut->io_man_b_19 = u; break;
      case 85 : dut->io_man_b_20 = u; break;
      case 86 : dut->io_man_b_21 = u; break;
      case 87 : dut->io_man_b_22 = u; break;
      case 88 : dut->io_man_b_23 = u; break;
      case 89 : dut->io_man_b_24 = u; break;
      case 90 : dut->io_man_b_25 = u; break;
      case 91 : dut->io_man_b_26 = u; break;
      case 92 : dut->io_man_b_27 = u; break;
      case 93 : dut->io_man_b_28 = u; break;
      case 94 : dut->io_man_b_29 = u; break;
      case 95 : dut->io_man_b_30 = u; break;
      case 96 : dut->io_man_b_31 = u; break;
      case 97 : dut->io_man_b_32 = u; break;
      case 98 : dut->io_man_b_33 = u; break;
      case 99 : dut->io_man_b_34 = u; break;
      case 100 : dut->io_man_b_35 = u; break;
      case 101 : dut->io_man_b_36 = u; break;
      case 102 : dut->io_man_b_37 = u; break;
      case 103 : dut->io_man_b_38 = u; break;
      case 104 : dut->io_man_b_39 = u; break;
      case 105 : dut->io_man_b_40 = u; break;
      case 106 : dut->io_man_b_41 = u; break;
      case 107 : dut->io_man_b_42 = u; break;
      case 108 : dut->io_man_b_43 = u; break;
      case 109 : dut->io_man_b_44 = u; break;
      case 110 : dut->io_man_b_45 = u; break;
      case 111 : dut->io_man_b_46 = u; break;
      case 112 : dut->io_man_b_47 = u; break;
      case 113 : dut->io_man_b_48 = u; break;
      case 114 : dut->io_man_b_49 = u; break;
      case 115 : dut->io_man_b_50 = u; break;
      case 116 : dut->io_man_b_51 = u; break;
      case 117 : dut->io_man_b_52 = u; break;
      case 118 : dut->io_man_b_53 = u; break;
      case 119 : dut->io_man_b_54 = u; break;
      case 120 : dut->io_man_b_55 = u; break;
      case 121 : dut->io_man_b_56 = u; break;
      case 122 : dut->io_man_b_57 = u; break;
      case 123 : dut->io_man_b_58 = u; break;
      case 124 : dut->io_man_b_59 = u; break;
      case 125 : dut->io_man_b_60 = u; break;
      case 126 : dut->io_man_b_61 = u; break;
      case 127 : dut->io_man_b_62 = u; break;
      case 128 : dut->io_man_b_63 = u; break;
      case 129 : dut->io_sign_a_0 = u; break;
      case 130 : dut->io_sign_a_1 = u; break;
      case 131 : dut->io_sign_a_2 = u; break;
      case 132 : dut->io_sign_a_3 = u; break;
      case 133 : dut->io_sign_a_4 = u; break;
      case 134 : dut->io_sign_a_5 = u; break;
      case 135 : dut->io_sign_a_6 = u; break;
      case 136 : dut->io_sign_a_7 = u; break;
      case 137 : dut->io_sign_a_8 = u; break;
      case 138 : dut->io_sign_a_9 = u; break;
      case 139 : dut->io_sign_a_10 = u; break;
      case 140 : dut->io_sign_a_11 = u; break;
      case 141 : dut->io_sign_a_12 = u; break;
      case 142 : dut->io_sign_a_13 = u; break;
      case 143 : dut->io_sign_a_14 = u; break;
      case 144 : dut->io_sign_a_15 = u; break;
      case 145 : dut->io_sign_a_16 = u; break;
      case 146 : dut->io_sign_a_17 = u; break;
      case 147 : dut->io_sign_a_18 = u; break;
      case 148 : dut->io_sign_a_19 = u; break;
      case 149 : dut->io_sign_a_20 = u; break;
      case 150 : dut->io_sign_a_21 = u; break;
      case 151 : dut->io_sign_a_22 = u; break;
      case 152 : dut->io_sign_a_23 = u; break;
      case 153 : dut->io_sign_a_24 = u; break;
      case 154 : dut->io_sign_a_25 = u; break;
      case 155 : dut->io_sign_a_26 = u; break;
      case 156 : dut->io_sign_a_27 = u; break;
      case 157 : dut->io_sign_a_28 = u; break;
      case 158 : dut->io_sign_a_29 = u; break;
      case 159 : dut->io_sign_a_30 = u; break;
      case 160 : dut->io_sign_a_31 = u; break;
      case 161 : dut->io_sign_a_32 = u; break;
      case 162 : dut->io_sign_a_33 = u; break;
      case 163 : dut->io_sign_a_34 = u; break;
      case 164 : dut->io_sign_a_35 = u; break;
      case 165 : dut->io_sign_a_36 = u; break;
      case 166 : dut->io_sign_a_37 = u; break;
      case 167 : dut->io_sign_a_38 = u; break;
      case 168 : dut->io_sign_a_39 = u; break;
      case 169 : dut->io_sign_a_40 = u; break;
      case 170 : dut->io_sign_a_41 = u; break;
      case 171 : dut->io_sign_a_42 = u; break;
      case 172 : dut->io_sign_a_43 = u; break;
      case 173 : dut->io_sign_a_44 = u; break;
      case 174 : dut->io_sign_a_45 = u; break;
      case 175 : dut->io_sign_a_46 = u; break;
      case 176 : dut->io_sign_a_47 = u; break;
      case 177 : dut->io_sign_a_48 = u; break;
      case 178 : dut->io_sign_a_49 = u; break;
      case 179 : dut->io_sign_a_50 = u; break;
      case 180 : dut->io_sign_a_51 = u; break;
      case 181 : dut->io_sign_a_52 = u; break;
      case 182 : dut->io_sign_a_53 = u; break;
      case 183 : dut->io_sign_a_54 = u; break;
      case 184 : dut->io_sign_a_55 = u; break;
      case 185 : dut->io_sign_a_56 = u; break;
      case 186 : dut->io_sign_a_57 = u; break;
      case 187 : dut->io_sign_a_58 = u; break;
      case 188 : dut->io_sign_a_59 = u; break;
      case 189 : dut->io_sign_a_60 = u; break;
      case 190 : dut->io_sign_a_61 = u; break;
      case 191 : dut->io_sign_a_62 = u; break;
      case 192 : dut->io_sign_a_63 = u; break;
      case 193 : dut->io_sign_b_0 = u; break;
      case 194 : dut->io_sign_b_1 = u; break;
      case 195 : dut->io_sign_b_2 = u; break;
      case 196 : dut->io_sign_b_3 = u; break;
      case 197 : dut->io_sign_b_4 = u; break;
      case 198 : dut->io_sign_b_5 = u; break;
      case 199 : dut->io_sign_b_6 = u; break;
      case 200 : dut->io_sign_b_7 = u; break;
      case 201 : dut->io_sign_b_8 = u; break;
      case 202 : dut->io_sign_b_9 = u; break;
      case 203 : dut->io_sign_b_10 = u; break;
      case 204 : dut->io_sign_b_11 = u; break;
      case 205 : dut->io_sign_b_12 = u; break;
      case 206 : dut->io_sign_b_13 = u; break;
      case 207 : dut->io_sign_b_14 = u; break;
      case 208 : dut->io_sign_b_15 = u; break;
      case 209 : dut->io_sign_b_16 = u; break;
      case 210 : dut->io_sign_b_17 = u; break;
      case 211 : dut->io_sign_b_18 = u; break;
      case 212 : dut->io_sign_b_19 = u; break;
      case 213 : dut->io_sign_b_20 = u; break;
      case 214 : dut->io_sign_b_21 = u; break;
      case 215 : dut->io_sign_b_22 = u; break;
      case 216 : dut->io_sign_b_23 = u; break;
      case 217 : dut->io_sign_b_24 = u; break;
      case 218 : dut->io_sign_b_25 = u; break;
      case 219 : dut->io_sign_b_26 = u; break;
      case 220 : dut->io_sign_b_27 = u; break;
      case 221 : dut->io_sign_b_28 = u; break;
      case 222 : dut->io_sign_b_29 = u; break;
      case 223 : dut->io_sign_b_30 = u; break;
      case 224 : dut->io_sign_b_31 = u; break;
      case 225 : dut->io_sign_b_32 = u; break;
      case 226 : dut->io_sign_b_33 = u; break;
      case 227 : dut->io_sign_b_34 = u; break;
      case 228 : dut->io_sign_b_35 = u; break;
      case 229 : dut->io_sign_b_36 = u; break;
      case 230 : dut->io_sign_b_37 = u; break;
      case 231 : dut->io_sign_b_38 = u; break;
      case 232 : dut->io_sign_b_39 = u; break;
      case 233 : dut->io_sign_b_40 = u; break;
      case 234 : dut->io_sign_b_41 = u; break;
      case 235 : dut->io_sign_b_42 = u; break;
      case 236 : dut->io_sign_b_43 = u; break;
      case 237 : dut->io_sign_b_44 = u; break;
      case 238 : dut->io_sign_b_45 = u; break;
      case 239 : dut->io_sign_b_46 = u; break;
      case 240 : dut->io_sign_b_47 = u; break;
      case 241 : dut->io_sign_b_48 = u; break;
      case 242 : dut->io_sign_b_49 = u; break;
      case 243 : dut->io_sign_b_50 = u; break;
      case 244 : dut->io_sign_b_51 = u; break;
      case 245 : dut->io_sign_b_52 = u; break;
      case 246 : dut->io_sign_b_53 = u; break;
      case 247 : dut->io_sign_b_54 = u; break;
      case 248 : dut->io_sign_b_55 = u; break;
      case 249 : dut->io_sign_b_56 = u; break;
      case 250 : dut->io_sign_b_57 = u; break;
      case 251 : dut->io_sign_b_58 = u; break;
      case 252 : dut->io_sign_b_59 = u; break;
      case 253 : dut->io_sign_b_60 = u; break;
      case 254 : dut->io_sign_b_61 = u; break;
      case 255 : dut->io_sign_b_62 = u; break;
      case 256 : dut->io_sign_b_63 = u; break;
      case 257 : dut->io_exp_a_0 = u; break;
      case 258 : dut->io_exp_a_1 = u; break;
      case 259 : dut->io_exp_a_2 = u; break;
      case 260 : dut->io_exp_a_3 = u; break;
      case 261 : dut->io_exp_b_0 = u; break;
      case 262 : dut->io_exp_b_1 = u; break;
      case 263 : dut->io_exp_b_2 = u; break;
      case 264 : dut->io_exp_b_3 = u; break;
      case 265 : dut->io_control = u; break;
      case 266 : dut->io_control2 = u; break;

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
      case 1 : value = dut->io_man_a_0; break;
      case 2 : value = dut->io_man_a_1; break;
      case 3 : value = dut->io_man_a_2; break;
      case 4 : value = dut->io_man_a_3; break;
      case 5 : value = dut->io_man_a_4; break;
      case 6 : value = dut->io_man_a_5; break;
      case 7 : value = dut->io_man_a_6; break;
      case 8 : value = dut->io_man_a_7; break;
      case 9 : value = dut->io_man_a_8; break;
      case 10 : value = dut->io_man_a_9; break;
      case 11 : value = dut->io_man_a_10; break;
      case 12 : value = dut->io_man_a_11; break;
      case 13 : value = dut->io_man_a_12; break;
      case 14 : value = dut->io_man_a_13; break;
      case 15 : value = dut->io_man_a_14; break;
      case 16 : value = dut->io_man_a_15; break;
      case 17 : value = dut->io_man_a_16; break;
      case 18 : value = dut->io_man_a_17; break;
      case 19 : value = dut->io_man_a_18; break;
      case 20 : value = dut->io_man_a_19; break;
      case 21 : value = dut->io_man_a_20; break;
      case 22 : value = dut->io_man_a_21; break;
      case 23 : value = dut->io_man_a_22; break;
      case 24 : value = dut->io_man_a_23; break;
      case 25 : value = dut->io_man_a_24; break;
      case 26 : value = dut->io_man_a_25; break;
      case 27 : value = dut->io_man_a_26; break;
      case 28 : value = dut->io_man_a_27; break;
      case 29 : value = dut->io_man_a_28; break;
      case 30 : value = dut->io_man_a_29; break;
      case 31 : value = dut->io_man_a_30; break;
      case 32 : value = dut->io_man_a_31; break;
      case 33 : value = dut->io_man_a_32; break;
      case 34 : value = dut->io_man_a_33; break;
      case 35 : value = dut->io_man_a_34; break;
      case 36 : value = dut->io_man_a_35; break;
      case 37 : value = dut->io_man_a_36; break;
      case 38 : value = dut->io_man_a_37; break;
      case 39 : value = dut->io_man_a_38; break;
      case 40 : value = dut->io_man_a_39; break;
      case 41 : value = dut->io_man_a_40; break;
      case 42 : value = dut->io_man_a_41; break;
      case 43 : value = dut->io_man_a_42; break;
      case 44 : value = dut->io_man_a_43; break;
      case 45 : value = dut->io_man_a_44; break;
      case 46 : value = dut->io_man_a_45; break;
      case 47 : value = dut->io_man_a_46; break;
      case 48 : value = dut->io_man_a_47; break;
      case 49 : value = dut->io_man_a_48; break;
      case 50 : value = dut->io_man_a_49; break;
      case 51 : value = dut->io_man_a_50; break;
      case 52 : value = dut->io_man_a_51; break;
      case 53 : value = dut->io_man_a_52; break;
      case 54 : value = dut->io_man_a_53; break;
      case 55 : value = dut->io_man_a_54; break;
      case 56 : value = dut->io_man_a_55; break;
      case 57 : value = dut->io_man_a_56; break;
      case 58 : value = dut->io_man_a_57; break;
      case 59 : value = dut->io_man_a_58; break;
      case 60 : value = dut->io_man_a_59; break;
      case 61 : value = dut->io_man_a_60; break;
      case 62 : value = dut->io_man_a_61; break;
      case 63 : value = dut->io_man_a_62; break;
      case 64 : value = dut->io_man_a_63; break;
      case 65 : value = dut->io_man_b_0; break;
      case 66 : value = dut->io_man_b_1; break;
      case 67 : value = dut->io_man_b_2; break;
      case 68 : value = dut->io_man_b_3; break;
      case 69 : value = dut->io_man_b_4; break;
      case 70 : value = dut->io_man_b_5; break;
      case 71 : value = dut->io_man_b_6; break;
      case 72 : value = dut->io_man_b_7; break;
      case 73 : value = dut->io_man_b_8; break;
      case 74 : value = dut->io_man_b_9; break;
      case 75 : value = dut->io_man_b_10; break;
      case 76 : value = dut->io_man_b_11; break;
      case 77 : value = dut->io_man_b_12; break;
      case 78 : value = dut->io_man_b_13; break;
      case 79 : value = dut->io_man_b_14; break;
      case 80 : value = dut->io_man_b_15; break;
      case 81 : value = dut->io_man_b_16; break;
      case 82 : value = dut->io_man_b_17; break;
      case 83 : value = dut->io_man_b_18; break;
      case 84 : value = dut->io_man_b_19; break;
      case 85 : value = dut->io_man_b_20; break;
      case 86 : value = dut->io_man_b_21; break;
      case 87 : value = dut->io_man_b_22; break;
      case 88 : value = dut->io_man_b_23; break;
      case 89 : value = dut->io_man_b_24; break;
      case 90 : value = dut->io_man_b_25; break;
      case 91 : value = dut->io_man_b_26; break;
      case 92 : value = dut->io_man_b_27; break;
      case 93 : value = dut->io_man_b_28; break;
      case 94 : value = dut->io_man_b_29; break;
      case 95 : value = dut->io_man_b_30; break;
      case 96 : value = dut->io_man_b_31; break;
      case 97 : value = dut->io_man_b_32; break;
      case 98 : value = dut->io_man_b_33; break;
      case 99 : value = dut->io_man_b_34; break;
      case 100 : value = dut->io_man_b_35; break;
      case 101 : value = dut->io_man_b_36; break;
      case 102 : value = dut->io_man_b_37; break;
      case 103 : value = dut->io_man_b_38; break;
      case 104 : value = dut->io_man_b_39; break;
      case 105 : value = dut->io_man_b_40; break;
      case 106 : value = dut->io_man_b_41; break;
      case 107 : value = dut->io_man_b_42; break;
      case 108 : value = dut->io_man_b_43; break;
      case 109 : value = dut->io_man_b_44; break;
      case 110 : value = dut->io_man_b_45; break;
      case 111 : value = dut->io_man_b_46; break;
      case 112 : value = dut->io_man_b_47; break;
      case 113 : value = dut->io_man_b_48; break;
      case 114 : value = dut->io_man_b_49; break;
      case 115 : value = dut->io_man_b_50; break;
      case 116 : value = dut->io_man_b_51; break;
      case 117 : value = dut->io_man_b_52; break;
      case 118 : value = dut->io_man_b_53; break;
      case 119 : value = dut->io_man_b_54; break;
      case 120 : value = dut->io_man_b_55; break;
      case 121 : value = dut->io_man_b_56; break;
      case 122 : value = dut->io_man_b_57; break;
      case 123 : value = dut->io_man_b_58; break;
      case 124 : value = dut->io_man_b_59; break;
      case 125 : value = dut->io_man_b_60; break;
      case 126 : value = dut->io_man_b_61; break;
      case 127 : value = dut->io_man_b_62; break;
      case 128 : value = dut->io_man_b_63; break;
      case 129 : value = dut->io_sign_a_0; break;
      case 130 : value = dut->io_sign_a_1; break;
      case 131 : value = dut->io_sign_a_2; break;
      case 132 : value = dut->io_sign_a_3; break;
      case 133 : value = dut->io_sign_a_4; break;
      case 134 : value = dut->io_sign_a_5; break;
      case 135 : value = dut->io_sign_a_6; break;
      case 136 : value = dut->io_sign_a_7; break;
      case 137 : value = dut->io_sign_a_8; break;
      case 138 : value = dut->io_sign_a_9; break;
      case 139 : value = dut->io_sign_a_10; break;
      case 140 : value = dut->io_sign_a_11; break;
      case 141 : value = dut->io_sign_a_12; break;
      case 142 : value = dut->io_sign_a_13; break;
      case 143 : value = dut->io_sign_a_14; break;
      case 144 : value = dut->io_sign_a_15; break;
      case 145 : value = dut->io_sign_a_16; break;
      case 146 : value = dut->io_sign_a_17; break;
      case 147 : value = dut->io_sign_a_18; break;
      case 148 : value = dut->io_sign_a_19; break;
      case 149 : value = dut->io_sign_a_20; break;
      case 150 : value = dut->io_sign_a_21; break;
      case 151 : value = dut->io_sign_a_22; break;
      case 152 : value = dut->io_sign_a_23; break;
      case 153 : value = dut->io_sign_a_24; break;
      case 154 : value = dut->io_sign_a_25; break;
      case 155 : value = dut->io_sign_a_26; break;
      case 156 : value = dut->io_sign_a_27; break;
      case 157 : value = dut->io_sign_a_28; break;
      case 158 : value = dut->io_sign_a_29; break;
      case 159 : value = dut->io_sign_a_30; break;
      case 160 : value = dut->io_sign_a_31; break;
      case 161 : value = dut->io_sign_a_32; break;
      case 162 : value = dut->io_sign_a_33; break;
      case 163 : value = dut->io_sign_a_34; break;
      case 164 : value = dut->io_sign_a_35; break;
      case 165 : value = dut->io_sign_a_36; break;
      case 166 : value = dut->io_sign_a_37; break;
      case 167 : value = dut->io_sign_a_38; break;
      case 168 : value = dut->io_sign_a_39; break;
      case 169 : value = dut->io_sign_a_40; break;
      case 170 : value = dut->io_sign_a_41; break;
      case 171 : value = dut->io_sign_a_42; break;
      case 172 : value = dut->io_sign_a_43; break;
      case 173 : value = dut->io_sign_a_44; break;
      case 174 : value = dut->io_sign_a_45; break;
      case 175 : value = dut->io_sign_a_46; break;
      case 176 : value = dut->io_sign_a_47; break;
      case 177 : value = dut->io_sign_a_48; break;
      case 178 : value = dut->io_sign_a_49; break;
      case 179 : value = dut->io_sign_a_50; break;
      case 180 : value = dut->io_sign_a_51; break;
      case 181 : value = dut->io_sign_a_52; break;
      case 182 : value = dut->io_sign_a_53; break;
      case 183 : value = dut->io_sign_a_54; break;
      case 184 : value = dut->io_sign_a_55; break;
      case 185 : value = dut->io_sign_a_56; break;
      case 186 : value = dut->io_sign_a_57; break;
      case 187 : value = dut->io_sign_a_58; break;
      case 188 : value = dut->io_sign_a_59; break;
      case 189 : value = dut->io_sign_a_60; break;
      case 190 : value = dut->io_sign_a_61; break;
      case 191 : value = dut->io_sign_a_62; break;
      case 192 : value = dut->io_sign_a_63; break;
      case 193 : value = dut->io_sign_b_0; break;
      case 194 : value = dut->io_sign_b_1; break;
      case 195 : value = dut->io_sign_b_2; break;
      case 196 : value = dut->io_sign_b_3; break;
      case 197 : value = dut->io_sign_b_4; break;
      case 198 : value = dut->io_sign_b_5; break;
      case 199 : value = dut->io_sign_b_6; break;
      case 200 : value = dut->io_sign_b_7; break;
      case 201 : value = dut->io_sign_b_8; break;
      case 202 : value = dut->io_sign_b_9; break;
      case 203 : value = dut->io_sign_b_10; break;
      case 204 : value = dut->io_sign_b_11; break;
      case 205 : value = dut->io_sign_b_12; break;
      case 206 : value = dut->io_sign_b_13; break;
      case 207 : value = dut->io_sign_b_14; break;
      case 208 : value = dut->io_sign_b_15; break;
      case 209 : value = dut->io_sign_b_16; break;
      case 210 : value = dut->io_sign_b_17; break;
      case 211 : value = dut->io_sign_b_18; break;
      case 212 : value = dut->io_sign_b_19; break;
      case 213 : value = dut->io_sign_b_20; break;
      case 214 : value = dut->io_sign_b_21; break;
      case 215 : value = dut->io_sign_b_22; break;
      case 216 : value = dut->io_sign_b_23; break;
      case 217 : value = dut->io_sign_b_24; break;
      case 218 : value = dut->io_sign_b_25; break;
      case 219 : value = dut->io_sign_b_26; break;
      case 220 : value = dut->io_sign_b_27; break;
      case 221 : value = dut->io_sign_b_28; break;
      case 222 : value = dut->io_sign_b_29; break;
      case 223 : value = dut->io_sign_b_30; break;
      case 224 : value = dut->io_sign_b_31; break;
      case 225 : value = dut->io_sign_b_32; break;
      case 226 : value = dut->io_sign_b_33; break;
      case 227 : value = dut->io_sign_b_34; break;
      case 228 : value = dut->io_sign_b_35; break;
      case 229 : value = dut->io_sign_b_36; break;
      case 230 : value = dut->io_sign_b_37; break;
      case 231 : value = dut->io_sign_b_38; break;
      case 232 : value = dut->io_sign_b_39; break;
      case 233 : value = dut->io_sign_b_40; break;
      case 234 : value = dut->io_sign_b_41; break;
      case 235 : value = dut->io_sign_b_42; break;
      case 236 : value = dut->io_sign_b_43; break;
      case 237 : value = dut->io_sign_b_44; break;
      case 238 : value = dut->io_sign_b_45; break;
      case 239 : value = dut->io_sign_b_46; break;
      case 240 : value = dut->io_sign_b_47; break;
      case 241 : value = dut->io_sign_b_48; break;
      case 242 : value = dut->io_sign_b_49; break;
      case 243 : value = dut->io_sign_b_50; break;
      case 244 : value = dut->io_sign_b_51; break;
      case 245 : value = dut->io_sign_b_52; break;
      case 246 : value = dut->io_sign_b_53; break;
      case 247 : value = dut->io_sign_b_54; break;
      case 248 : value = dut->io_sign_b_55; break;
      case 249 : value = dut->io_sign_b_56; break;
      case 250 : value = dut->io_sign_b_57; break;
      case 251 : value = dut->io_sign_b_58; break;
      case 252 : value = dut->io_sign_b_59; break;
      case 253 : value = dut->io_sign_b_60; break;
      case 254 : value = dut->io_sign_b_61; break;
      case 255 : value = dut->io_sign_b_62; break;
      case 256 : value = dut->io_sign_b_63; break;
      case 257 : value = dut->io_exp_a_0; break;
      case 258 : value = dut->io_exp_a_1; break;
      case 259 : value = dut->io_exp_a_2; break;
      case 260 : value = dut->io_exp_a_3; break;
      case 261 : value = dut->io_exp_b_0; break;
      case 262 : value = dut->io_exp_b_1; break;
      case 263 : value = dut->io_exp_b_2; break;
      case 264 : value = dut->io_exp_b_3; break;
      case 265 : value = dut->io_control; break;
      case 266 : value = dut->io_control2; break;
      case 267 : value = dut->io_result; break;

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
  std::string dumpfile = "/home/vpatel/Documents/Chisel/Chisel-Workspace/HBFP_Accelerator/test/HbfpPass/HbfpTensor.vcd";
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
