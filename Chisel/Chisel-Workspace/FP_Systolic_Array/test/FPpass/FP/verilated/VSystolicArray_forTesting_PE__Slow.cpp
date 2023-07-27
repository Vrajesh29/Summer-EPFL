// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSystolicArray_forTesting.h for the primary calling header

#include "VSystolicArray_forTesting_PE.h"
#include "VSystolicArray_forTesting__Syms.h"

//==========

VL_CTOR_IMP(VSystolicArray_forTesting_PE) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void VSystolicArray_forTesting_PE::__Vconfigure(VSystolicArray_forTesting__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    _configure_coverage(vlSymsp, first);
}

VSystolicArray_forTesting_PE::~VSystolicArray_forTesting_PE() {
}

// Coverage
#ifndef CHISEL_VL_COVER_INSERT
#define CHISEL_VL_COVER_INSERT(countp, ...) \
    VL_IF_COVER(VerilatedCov::_inserti(countp); VerilatedCov::_insertf(__FILE__, __LINE__); \
                chisel_insertp("hier", name(), __VA_ARGS__))

#ifdef VM_COVERAGE
static void chisel_insertp(
  const char* key0, const char* valp0, const char* key1, const char* valp1,
  const char* key2, int lineno, const char* key3, int column,
  const char* key4, const std::string& hier_str,
  const char* key5, const char* valp5, const char* key6, const char* valp6,
  const char* key7 = nullptr, const char* valp7 = nullptr) {

    std::string val2str = vlCovCvtToStr(lineno);
    std::string val3str = vlCovCvtToStr(column);
    VerilatedCov::_insertp(
        key0, valp0, key1, valp1, key2, val2str.c_str(),
        key3, val3str.c_str(), key4, hier_str.c_str(),
        key5, valp5, key6, valp6, key7, valp7,
        // turn on per instance cover points
        "per_instance", "1");
}
#endif // VM_COVERAGE
#endif // CHISEL_VL_COVER_INSERT


void VSystolicArray_forTesting_PE::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    CHISEL_VL_COVER_INSERT(count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",std::string(name())+hierp,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}

void VSystolicArray_forTesting_PE::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    io_in_hor_sign = VL_RAND_RESET_I(1);
    io_in_hor_man = VL_RAND_RESET_I(5);
    io_in_hor_exp = VL_RAND_RESET_I(8);
    io_in_ver_sign = VL_RAND_RESET_I(1);
    io_in_ver_man = VL_RAND_RESET_I(5);
    io_in_ver_exp = VL_RAND_RESET_I(8);
    io_out_hor_sign = VL_RAND_RESET_I(1);
    io_out_hor_man = VL_RAND_RESET_I(5);
    io_out_hor_exp = VL_RAND_RESET_I(8);
    io_out_ver_sign = VL_RAND_RESET_I(1);
    io_out_ver_man = VL_RAND_RESET_I(5);
    io_out_ver_exp = VL_RAND_RESET_I(8);
    io_out_result_sign = VL_RAND_RESET_I(1);
    io_out_result_man = VL_RAND_RESET_I(5);
    io_out_result_exp = VL_RAND_RESET_I(8);
    __PVT__fpmult_io_out_result_sign = VL_RAND_RESET_I(1);
    __PVT__fpadder_io_out_result_exp = VL_RAND_RESET_I(8);
    __PVT__result_buffer_sign = VL_RAND_RESET_I(1);
    __PVT__result_buffer_man = VL_RAND_RESET_I(5);
    __PVT__result_buffer_exp = VL_RAND_RESET_I(8);
    __PVT__fpmult__DOT__exp_addition = VL_RAND_RESET_I(9);
    __PVT__fpmult__DOT___io_out_result_exp_T_5 = VL_RAND_RESET_I(9);
    __PVT__fpmult__DOT___io_out_result_man_T = VL_RAND_RESET_I(10);
    __PVT__fpmult__DOT___io_out_result_man_T_7 = VL_RAND_RESET_I(10);
    __PVT__fpadder__DOT___exp_diff_T = VL_RAND_RESET_I(1);
    __PVT__fpadder__DOT__exp_diff = VL_RAND_RESET_I(8);
    __PVT__fpadder__DOT___io_out_result_sign_T_1 = VL_RAND_RESET_I(5);
    __PVT__fpadder__DOT___io_out_result_sign_T_3 = VL_RAND_RESET_I(1);
    __PVT__fpadder__DOT___io_out_result_sign_T_4 = VL_RAND_RESET_I(5);
    __PVT__fpadder__DOT___io_out_result_sign_T_6 = VL_RAND_RESET_I(1);
    __PVT__fpadder__DOT__addition = VL_RAND_RESET_I(6);
}

void VSystolicArray_forTesting_PE::_configure_coverage(VSystolicArray_forTesting__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_configure_coverage\n"); );
    // Body
    if (false && vlSymsp && first) {}  // Prevent unused
}