// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSystolicArray_HBFP_forTesting.h for the primary calling header

#include "VSystolicArray_HBFP_forTesting_HBFP_PE.h"
#include "VSystolicArray_HBFP_forTesting__Syms.h"

//==========

VL_CTOR_IMP(VSystolicArray_HBFP_forTesting_HBFP_PE) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void VSystolicArray_HBFP_forTesting_HBFP_PE::__Vconfigure(VSystolicArray_HBFP_forTesting__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    _configure_coverage(vlSymsp, first);
}

VSystolicArray_HBFP_forTesting_HBFP_PE::~VSystolicArray_HBFP_forTesting_HBFP_PE() {
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


void VSystolicArray_HBFP_forTesting_HBFP_PE::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    CHISEL_VL_COVER_INSERT(count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",std::string(name())+hierp,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_0__33(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_0__33\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__sum = (0xffU & (VL_EXTENDS_II(8,7, 
                                                         (0x7fU 
                                                          & (VL_EXTENDS_II(7,6, 
                                                                           (0x3fU 
                                                                            & (VL_EXTENDS_II(6,5, (IData)(this->__PVT__mac__DOT__two_complement_buffer_0)) 
                                                                               + 
                                                                               VL_EXTENDS_II(6,5, (IData)(this->__PVT__mac__DOT__two_complement_buffer_1))))) 
                                                             + 
                                                             VL_EXTENDS_II(7,6, 
                                                                           ((0x20U 
                                                                             & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_2) 
                                                                                << 1U)) 
                                                                            | (IData)(this->__PVT__mac__DOT__two_complement_buffer_2)))))) 
                                           + VL_EXTENDS_II(8,7, 
                                                           ((0x60U 
                                                             & ((- (IData)(
                                                                           (1U 
                                                                            & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_3) 
                                                                               >> 4U)))) 
                                                                << 5U)) 
                                                            | (IData)(this->__PVT__mac__DOT__two_complement_buffer_3)))));
    this->__PVT__mac__DOT___io_out_result_man_T_10 
        = ((IData)(vlTOPp->io_in_flag) ? (0xfU & (IData)(this->__PVT__mac__DOT__acc_hbfp))
            : (0xfU & (IData)(this->__PVT__mac__DOT__acc_hbfp)));
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_0) 
                                                     * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_0)));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_1) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_1)));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_2) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_2)));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_3) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_3)));
    this->__PVT__adder__DOT___exp_diff_T = ((0xffU 
                                             & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                            > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__adder__DOT__exp_diff = (0xffU & ((
                                                   (0xffU 
                                                    & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                                   > (IData)(this->__PVT__result_buffer_exp))
                                                   ? 
                                                  ((IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5) 
                                                   - (IData)(this->__PVT__result_buffer_exp))
                                                   : 
                                                  ((IData)(this->__PVT__result_buffer_exp) 
                                                   - (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5))));
    this->__PVT__adder_io_out_result_exp = (0xffU & 
                                            ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                              ? (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)
                                              : (IData)(this->__PVT__result_buffer_exp)));
    if ((3U >= (IData)(this->__PVT__adder__DOT__exp_diff))) {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 
            = (0xfU & ((IData)(this->__PVT__result_buffer_man) 
                       >> (IData)(this->__PVT__adder__DOT__exp_diff)));
        this->__PVT__adder__DOT___io_out_result_sign_T_4 
            = (0xfU & ((0xfU & (IData)(this->__PVT__mac__DOT___io_out_result_man_T_10)) 
                       >> (IData)(this->__PVT__adder__DOT__exp_diff)));
    } else {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__adder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__adder__DOT___io_out_result_sign_T_3 
        = (1U & (((0xfU & (IData)(this->__PVT__mac__DOT___io_out_result_man_T_10)) 
                  > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                  ? ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                     >> 4U) : (IData)(this->__PVT__result_buffer_sign)));
    this->__PVT__adder__DOT___io_out_result_sign_T_6 
        = (1U & (((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                  > (IData)(this->__PVT__result_buffer_man))
                  ? ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                     >> 4U) : (IData)(this->__PVT__result_buffer_sign)));
    this->__PVT__adder__DOT__addition = (0x1fU & ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                                   ? 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 4U)) 
                                                    == (IData)(this->__PVT__result_buffer_sign))
                                                    ? 
                                                   ((0xfU 
                                                     & (IData)(this->__PVT__mac__DOT___io_out_result_man_T_10)) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                    : 
                                                   (0xfU 
                                                    & (((0xfU 
                                                         & (IData)(this->__PVT__mac__DOT___io_out_result_man_T_10)) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        ? 
                                                       ((IData)(this->__PVT__mac__DOT___io_out_result_man_T_10) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1) 
                                                        - (IData)(this->__PVT__mac__DOT___io_out_result_man_T_10)))))
                                                   : 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 4U)) 
                                                    == (IData)(this->__PVT__result_buffer_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__result_buffer_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                    : 
                                                   (0xfU 
                                                    & (((IData)(this->__PVT__result_buffer_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        ? 
                                                       ((IData)(this->__PVT__result_buffer_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                        - (IData)(this->__PVT__result_buffer_man)))))));
}

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_1__34(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_1__34\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__sum = (0xffU & (VL_EXTENDS_II(8,7, 
                                                         (0x7fU 
                                                          & (VL_EXTENDS_II(7,6, 
                                                                           (0x3fU 
                                                                            & (VL_EXTENDS_II(6,5, (IData)(this->__PVT__mac__DOT__two_complement_buffer_0)) 
                                                                               + 
                                                                               VL_EXTENDS_II(6,5, (IData)(this->__PVT__mac__DOT__two_complement_buffer_1))))) 
                                                             + 
                                                             VL_EXTENDS_II(7,6, 
                                                                           ((0x20U 
                                                                             & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_2) 
                                                                                << 1U)) 
                                                                            | (IData)(this->__PVT__mac__DOT__two_complement_buffer_2)))))) 
                                           + VL_EXTENDS_II(8,7, 
                                                           ((0x60U 
                                                             & ((- (IData)(
                                                                           (1U 
                                                                            & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_3) 
                                                                               >> 4U)))) 
                                                                << 5U)) 
                                                            | (IData)(this->__PVT__mac__DOT__two_complement_buffer_3)))));
    this->__PVT__mac__DOT___io_out_result_man_T_10 
        = ((IData)(vlTOPp->io_in_flag) ? (0xfU & (IData)(this->__PVT__mac__DOT__acc_hbfp))
            : (0xfU & (IData)(this->__PVT__mac__DOT__acc_hbfp)));
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_r_man_0) 
                                                     * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_0)));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_r_man_1) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_1)));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_r_man_2) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_2)));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_r_man_3) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_3)));
    this->__PVT__adder__DOT___exp_diff_T = ((0xffU 
                                             & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                            > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__adder__DOT__exp_diff = (0xffU & ((
                                                   (0xffU 
                                                    & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                                   > (IData)(this->__PVT__result_buffer_exp))
                                                   ? 
                                                  ((IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5) 
                                                   - (IData)(this->__PVT__result_buffer_exp))
                                                   : 
                                                  ((IData)(this->__PVT__result_buffer_exp) 
                                                   - (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5))));
    this->__PVT__adder_io_out_result_exp = (0xffU & 
                                            ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                              ? (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)
                                              : (IData)(this->__PVT__result_buffer_exp)));
    if ((3U >= (IData)(this->__PVT__adder__DOT__exp_diff))) {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 
            = (0xfU & ((IData)(this->__PVT__result_buffer_man) 
                       >> (IData)(this->__PVT__adder__DOT__exp_diff)));
        this->__PVT__adder__DOT___io_out_result_sign_T_4 
            = (0xfU & ((0xfU & (IData)(this->__PVT__mac__DOT___io_out_result_man_T_10)) 
                       >> (IData)(this->__PVT__adder__DOT__exp_diff)));
    } else {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__adder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__adder__DOT___io_out_result_sign_T_3 
        = (1U & (((0xfU & (IData)(this->__PVT__mac__DOT___io_out_result_man_T_10)) 
                  > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                  ? ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                     >> 4U) : (IData)(this->__PVT__result_buffer_sign)));
    this->__PVT__adder__DOT___io_out_result_sign_T_6 
        = (1U & (((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                  > (IData)(this->__PVT__result_buffer_man))
                  ? ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                     >> 4U) : (IData)(this->__PVT__result_buffer_sign)));
    this->__PVT__adder__DOT__addition = (0x1fU & ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                                   ? 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 4U)) 
                                                    == (IData)(this->__PVT__result_buffer_sign))
                                                    ? 
                                                   ((0xfU 
                                                     & (IData)(this->__PVT__mac__DOT___io_out_result_man_T_10)) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                    : 
                                                   (0xfU 
                                                    & (((0xfU 
                                                         & (IData)(this->__PVT__mac__DOT___io_out_result_man_T_10)) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        ? 
                                                       ((IData)(this->__PVT__mac__DOT___io_out_result_man_T_10) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1) 
                                                        - (IData)(this->__PVT__mac__DOT___io_out_result_man_T_10)))))
                                                   : 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 4U)) 
                                                    == (IData)(this->__PVT__result_buffer_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__result_buffer_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                    : 
                                                   (0xfU 
                                                    & (((IData)(this->__PVT__result_buffer_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        ? 
                                                       ((IData)(this->__PVT__result_buffer_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                        - (IData)(this->__PVT__result_buffer_man)))))));
}

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_2__35(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_2__35\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__sum = (0xffU & (VL_EXTENDS_II(8,7, 
                                                         (0x7fU 
                                                          & (VL_EXTENDS_II(7,6, 
                                                                           (0x3fU 
                                                                            & (VL_EXTENDS_II(6,5, (IData)(this->__PVT__mac__DOT__two_complement_buffer_0)) 
                                                                               + 
                                                                               VL_EXTENDS_II(6,5, (IData)(this->__PVT__mac__DOT__two_complement_buffer_1))))) 
                                                             + 
                                                             VL_EXTENDS_II(7,6, 
                                                                           ((0x20U 
                                                                             & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_2) 
                                                                                << 1U)) 
                                                                            | (IData)(this->__PVT__mac__DOT__two_complement_buffer_2)))))) 
                                           + VL_EXTENDS_II(8,7, 
                                                           ((0x60U 
                                                             & ((- (IData)(
                                                                           (1U 
                                                                            & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_3) 
                                                                               >> 4U)))) 
                                                                << 5U)) 
                                                            | (IData)(this->__PVT__mac__DOT__two_complement_buffer_3)))));
    this->__PVT__mac__DOT___io_out_result_man_T_10 
        = ((IData)(vlTOPp->io_in_flag) ? (0xfU & (IData)(this->__PVT__mac__DOT__acc_hbfp))
            : (0xfU & (IData)(this->__PVT__mac__DOT__acc_hbfp)));
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_r_man_0) 
                                                     * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_0)));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_r_man_1) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_1)));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_r_man_2) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_2)));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_r_man_3) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_3)));
    this->__PVT__adder__DOT___exp_diff_T = ((0xffU 
                                             & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                            > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__adder__DOT__exp_diff = (0xffU & ((
                                                   (0xffU 
                                                    & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                                   > (IData)(this->__PVT__result_buffer_exp))
                                                   ? 
                                                  ((IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5) 
                                                   - (IData)(this->__PVT__result_buffer_exp))
                                                   : 
                                                  ((IData)(this->__PVT__result_buffer_exp) 
                                                   - (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5))));
    this->__PVT__adder_io_out_result_exp = (0xffU & 
                                            ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                              ? (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)
                                              : (IData)(this->__PVT__result_buffer_exp)));
    if ((3U >= (IData)(this->__PVT__adder__DOT__exp_diff))) {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 
            = (0xfU & ((IData)(this->__PVT__result_buffer_man) 
                       >> (IData)(this->__PVT__adder__DOT__exp_diff)));
        this->__PVT__adder__DOT___io_out_result_sign_T_4 
            = (0xfU & ((0xfU & (IData)(this->__PVT__mac__DOT___io_out_result_man_T_10)) 
                       >> (IData)(this->__PVT__adder__DOT__exp_diff)));
    } else {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__adder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__adder__DOT___io_out_result_sign_T_3 
        = (1U & (((0xfU & (IData)(this->__PVT__mac__DOT___io_out_result_man_T_10)) 
                  > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                  ? ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                     >> 4U) : (IData)(this->__PVT__result_buffer_sign)));
    this->__PVT__adder__DOT___io_out_result_sign_T_6 
        = (1U & (((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                  > (IData)(this->__PVT__result_buffer_man))
                  ? ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                     >> 4U) : (IData)(this->__PVT__result_buffer_sign)));
    this->__PVT__adder__DOT__addition = (0x1fU & ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                                   ? 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 4U)) 
                                                    == (IData)(this->__PVT__result_buffer_sign))
                                                    ? 
                                                   ((0xfU 
                                                     & (IData)(this->__PVT__mac__DOT___io_out_result_man_T_10)) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                    : 
                                                   (0xfU 
                                                    & (((0xfU 
                                                         & (IData)(this->__PVT__mac__DOT___io_out_result_man_T_10)) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        ? 
                                                       ((IData)(this->__PVT__mac__DOT___io_out_result_man_T_10) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1) 
                                                        - (IData)(this->__PVT__mac__DOT___io_out_result_man_T_10)))))
                                                   : 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 4U)) 
                                                    == (IData)(this->__PVT__result_buffer_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__result_buffer_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                    : 
                                                   (0xfU 
                                                    & (((IData)(this->__PVT__result_buffer_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        ? 
                                                       ((IData)(this->__PVT__result_buffer_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                        - (IData)(this->__PVT__result_buffer_man)))))));
}

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_3__36(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_3__36\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__sum = (0xffU & (VL_EXTENDS_II(8,7, 
                                                         (0x7fU 
                                                          & (VL_EXTENDS_II(7,6, 
                                                                           (0x3fU 
                                                                            & (VL_EXTENDS_II(6,5, (IData)(this->__PVT__mac__DOT__two_complement_buffer_0)) 
                                                                               + 
                                                                               VL_EXTENDS_II(6,5, (IData)(this->__PVT__mac__DOT__two_complement_buffer_1))))) 
                                                             + 
                                                             VL_EXTENDS_II(7,6, 
                                                                           ((0x20U 
                                                                             & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_2) 
                                                                                << 1U)) 
                                                                            | (IData)(this->__PVT__mac__DOT__two_complement_buffer_2)))))) 
                                           + VL_EXTENDS_II(8,7, 
                                                           ((0x60U 
                                                             & ((- (IData)(
                                                                           (1U 
                                                                            & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_3) 
                                                                               >> 4U)))) 
                                                                << 5U)) 
                                                            | (IData)(this->__PVT__mac__DOT__two_complement_buffer_3)))));
    this->__PVT__mac__DOT___io_out_result_man_T_10 
        = ((IData)(vlTOPp->io_in_flag) ? (0xfU & (IData)(this->__PVT__mac__DOT__acc_hbfp))
            : (0xfU & (IData)(this->__PVT__mac__DOT__acc_hbfp)));
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_r_man_0) 
                                                     * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_0)));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_r_man_1) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_1)));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_r_man_2) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_2)));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_r_man_3) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_3)));
    this->__PVT__adder__DOT___exp_diff_T = ((0xffU 
                                             & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                            > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__adder__DOT__exp_diff = (0xffU & ((
                                                   (0xffU 
                                                    & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                                   > (IData)(this->__PVT__result_buffer_exp))
                                                   ? 
                                                  ((IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5) 
                                                   - (IData)(this->__PVT__result_buffer_exp))
                                                   : 
                                                  ((IData)(this->__PVT__result_buffer_exp) 
                                                   - (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5))));
    this->__PVT__adder_io_out_result_exp = (0xffU & 
                                            ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                              ? (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)
                                              : (IData)(this->__PVT__result_buffer_exp)));
    if ((3U >= (IData)(this->__PVT__adder__DOT__exp_diff))) {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 
            = (0xfU & ((IData)(this->__PVT__result_buffer_man) 
                       >> (IData)(this->__PVT__adder__DOT__exp_diff)));
        this->__PVT__adder__DOT___io_out_result_sign_T_4 
            = (0xfU & ((0xfU & (IData)(this->__PVT__mac__DOT___io_out_result_man_T_10)) 
                       >> (IData)(this->__PVT__adder__DOT__exp_diff)));
    } else {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__adder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__adder__DOT___io_out_result_sign_T_3 
        = (1U & (((0xfU & (IData)(this->__PVT__mac__DOT___io_out_result_man_T_10)) 
                  > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                  ? ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                     >> 4U) : (IData)(this->__PVT__result_buffer_sign)));
    this->__PVT__adder__DOT___io_out_result_sign_T_6 
        = (1U & (((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                  > (IData)(this->__PVT__result_buffer_man))
                  ? ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                     >> 4U) : (IData)(this->__PVT__result_buffer_sign)));
    this->__PVT__adder__DOT__addition = (0x1fU & ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                                   ? 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 4U)) 
                                                    == (IData)(this->__PVT__result_buffer_sign))
                                                    ? 
                                                   ((0xfU 
                                                     & (IData)(this->__PVT__mac__DOT___io_out_result_man_T_10)) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                    : 
                                                   (0xfU 
                                                    & (((0xfU 
                                                         & (IData)(this->__PVT__mac__DOT___io_out_result_man_T_10)) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        ? 
                                                       ((IData)(this->__PVT__mac__DOT___io_out_result_man_T_10) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1) 
                                                        - (IData)(this->__PVT__mac__DOT___io_out_result_man_T_10)))))
                                                   : 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 4U)) 
                                                    == (IData)(this->__PVT__result_buffer_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__result_buffer_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                    : 
                                                   (0xfU 
                                                    & (((IData)(this->__PVT__result_buffer_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        ? 
                                                       ((IData)(this->__PVT__result_buffer_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                        - (IData)(this->__PVT__result_buffer_man)))))));
}

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_0__37(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_0__37\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__sum = (0xffU & (VL_EXTENDS_II(8,7, 
                                                         (0x7fU 
                                                          & (VL_EXTENDS_II(7,6, 
                                                                           (0x3fU 
                                                                            & (VL_EXTENDS_II(6,5, (IData)(this->__PVT__mac__DOT__two_complement_buffer_0)) 
                                                                               + 
                                                                               VL_EXTENDS_II(6,5, (IData)(this->__PVT__mac__DOT__two_complement_buffer_1))))) 
                                                             + 
                                                             VL_EXTENDS_II(7,6, 
                                                                           ((0x20U 
                                                                             & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_2) 
                                                                                << 1U)) 
                                                                            | (IData)(this->__PVT__mac__DOT__two_complement_buffer_2)))))) 
                                           + VL_EXTENDS_II(8,7, 
                                                           ((0x60U 
                                                             & ((- (IData)(
                                                                           (1U 
                                                                            & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_3) 
                                                                               >> 4U)))) 
                                                                << 5U)) 
                                                            | (IData)(this->__PVT__mac__DOT__two_complement_buffer_3)))));
    this->__PVT__mac__DOT___io_out_result_man_T_10 
        = ((IData)(vlTOPp->io_in_flag) ? (0xfU & (IData)(this->__PVT__mac__DOT__acc_hbfp))
            : (0xfU & (IData)(this->__PVT__mac__DOT__acc_hbfp)));
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_0) 
                                                     * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_0)));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_1) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_1)));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_2) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_2)));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_3) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_3)));
    this->__PVT__adder__DOT___exp_diff_T = ((0xffU 
                                             & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                            > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__adder__DOT__exp_diff = (0xffU & ((
                                                   (0xffU 
                                                    & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                                   > (IData)(this->__PVT__result_buffer_exp))
                                                   ? 
                                                  ((IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5) 
                                                   - (IData)(this->__PVT__result_buffer_exp))
                                                   : 
                                                  ((IData)(this->__PVT__result_buffer_exp) 
                                                   - (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5))));
    this->__PVT__adder_io_out_result_exp = (0xffU & 
                                            ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                              ? (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)
                                              : (IData)(this->__PVT__result_buffer_exp)));
    if ((3U >= (IData)(this->__PVT__adder__DOT__exp_diff))) {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 
            = (0xfU & ((IData)(this->__PVT__result_buffer_man) 
                       >> (IData)(this->__PVT__adder__DOT__exp_diff)));
        this->__PVT__adder__DOT___io_out_result_sign_T_4 
            = (0xfU & ((0xfU & (IData)(this->__PVT__mac__DOT___io_out_result_man_T_10)) 
                       >> (IData)(this->__PVT__adder__DOT__exp_diff)));
    } else {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__adder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__adder__DOT___io_out_result_sign_T_3 
        = (1U & (((0xfU & (IData)(this->__PVT__mac__DOT___io_out_result_man_T_10)) 
                  > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                  ? ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                     >> 4U) : (IData)(this->__PVT__result_buffer_sign)));
    this->__PVT__adder__DOT___io_out_result_sign_T_6 
        = (1U & (((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                  > (IData)(this->__PVT__result_buffer_man))
                  ? ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                     >> 4U) : (IData)(this->__PVT__result_buffer_sign)));
    this->__PVT__adder__DOT__addition = (0x1fU & ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                                   ? 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 4U)) 
                                                    == (IData)(this->__PVT__result_buffer_sign))
                                                    ? 
                                                   ((0xfU 
                                                     & (IData)(this->__PVT__mac__DOT___io_out_result_man_T_10)) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                    : 
                                                   (0xfU 
                                                    & (((0xfU 
                                                         & (IData)(this->__PVT__mac__DOT___io_out_result_man_T_10)) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        ? 
                                                       ((IData)(this->__PVT__mac__DOT___io_out_result_man_T_10) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1) 
                                                        - (IData)(this->__PVT__mac__DOT___io_out_result_man_T_10)))))
                                                   : 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 4U)) 
                                                    == (IData)(this->__PVT__result_buffer_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__result_buffer_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                    : 
                                                   (0xfU 
                                                    & (((IData)(this->__PVT__result_buffer_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        ? 
                                                       ((IData)(this->__PVT__result_buffer_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                        - (IData)(this->__PVT__result_buffer_man)))))));
}

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1__38(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1__38\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__sum = (0xffU & (VL_EXTENDS_II(8,7, 
                                                         (0x7fU 
                                                          & (VL_EXTENDS_II(7,6, 
                                                                           (0x3fU 
                                                                            & (VL_EXTENDS_II(6,5, (IData)(this->__PVT__mac__DOT__two_complement_buffer_0)) 
                                                                               + 
                                                                               VL_EXTENDS_II(6,5, (IData)(this->__PVT__mac__DOT__two_complement_buffer_1))))) 
                                                             + 
                                                             VL_EXTENDS_II(7,6, 
                                                                           ((0x20U 
                                                                             & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_2) 
                                                                                << 1U)) 
                                                                            | (IData)(this->__PVT__mac__DOT__two_complement_buffer_2)))))) 
                                           + VL_EXTENDS_II(8,7, 
                                                           ((0x60U 
                                                             & ((- (IData)(
                                                                           (1U 
                                                                            & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_3) 
                                                                               >> 4U)))) 
                                                                << 5U)) 
                                                            | (IData)(this->__PVT__mac__DOT__two_complement_buffer_3)))));
    this->__PVT__mac__DOT___io_out_result_man_T_10 
        = ((IData)(vlTOPp->io_in_flag) ? (0xfU & (IData)(this->__PVT__mac__DOT__acc_hbfp))
            : (0xfU & (IData)(this->__PVT__mac__DOT__acc_hbfp)));
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_0) 
                                                     * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_0)));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_1) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_1)));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_2) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_2)));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_3) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_3)));
    this->__PVT__adder__DOT___exp_diff_T = ((0xffU 
                                             & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                            > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__adder__DOT__exp_diff = (0xffU & ((
                                                   (0xffU 
                                                    & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                                   > (IData)(this->__PVT__result_buffer_exp))
                                                   ? 
                                                  ((IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5) 
                                                   - (IData)(this->__PVT__result_buffer_exp))
                                                   : 
                                                  ((IData)(this->__PVT__result_buffer_exp) 
                                                   - (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5))));
    this->__PVT__adder_io_out_result_exp = (0xffU & 
                                            ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                              ? (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)
                                              : (IData)(this->__PVT__result_buffer_exp)));
    if ((3U >= (IData)(this->__PVT__adder__DOT__exp_diff))) {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 
            = (0xfU & ((IData)(this->__PVT__result_buffer_man) 
                       >> (IData)(this->__PVT__adder__DOT__exp_diff)));
        this->__PVT__adder__DOT___io_out_result_sign_T_4 
            = (0xfU & ((0xfU & (IData)(this->__PVT__mac__DOT___io_out_result_man_T_10)) 
                       >> (IData)(this->__PVT__adder__DOT__exp_diff)));
    } else {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__adder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__adder__DOT___io_out_result_sign_T_3 
        = (1U & (((0xfU & (IData)(this->__PVT__mac__DOT___io_out_result_man_T_10)) 
                  > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                  ? ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                     >> 4U) : (IData)(this->__PVT__result_buffer_sign)));
    this->__PVT__adder__DOT___io_out_result_sign_T_6 
        = (1U & (((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                  > (IData)(this->__PVT__result_buffer_man))
                  ? ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                     >> 4U) : (IData)(this->__PVT__result_buffer_sign)));
    this->__PVT__adder__DOT__addition = (0x1fU & ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                                   ? 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 4U)) 
                                                    == (IData)(this->__PVT__result_buffer_sign))
                                                    ? 
                                                   ((0xfU 
                                                     & (IData)(this->__PVT__mac__DOT___io_out_result_man_T_10)) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                    : 
                                                   (0xfU 
                                                    & (((0xfU 
                                                         & (IData)(this->__PVT__mac__DOT___io_out_result_man_T_10)) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        ? 
                                                       ((IData)(this->__PVT__mac__DOT___io_out_result_man_T_10) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1) 
                                                        - (IData)(this->__PVT__mac__DOT___io_out_result_man_T_10)))))
                                                   : 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 4U)) 
                                                    == (IData)(this->__PVT__result_buffer_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__result_buffer_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                    : 
                                                   (0xfU 
                                                    & (((IData)(this->__PVT__result_buffer_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        ? 
                                                       ((IData)(this->__PVT__result_buffer_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                        - (IData)(this->__PVT__result_buffer_man)))))));
}

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2__39(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2__39\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__sum = (0xffU & (VL_EXTENDS_II(8,7, 
                                                         (0x7fU 
                                                          & (VL_EXTENDS_II(7,6, 
                                                                           (0x3fU 
                                                                            & (VL_EXTENDS_II(6,5, (IData)(this->__PVT__mac__DOT__two_complement_buffer_0)) 
                                                                               + 
                                                                               VL_EXTENDS_II(6,5, (IData)(this->__PVT__mac__DOT__two_complement_buffer_1))))) 
                                                             + 
                                                             VL_EXTENDS_II(7,6, 
                                                                           ((0x20U 
                                                                             & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_2) 
                                                                                << 1U)) 
                                                                            | (IData)(this->__PVT__mac__DOT__two_complement_buffer_2)))))) 
                                           + VL_EXTENDS_II(8,7, 
                                                           ((0x60U 
                                                             & ((- (IData)(
                                                                           (1U 
                                                                            & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_3) 
                                                                               >> 4U)))) 
                                                                << 5U)) 
                                                            | (IData)(this->__PVT__mac__DOT__two_complement_buffer_3)))));
    this->__PVT__mac__DOT___io_out_result_man_T_10 
        = ((IData)(vlTOPp->io_in_flag) ? (0xfU & (IData)(this->__PVT__mac__DOT__acc_hbfp))
            : (0xfU & (IData)(this->__PVT__mac__DOT__acc_hbfp)));
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_0) 
                                                     * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_0)));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_1) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_1)));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_2) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_2)));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_3) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_3)));
    this->__PVT__adder__DOT___exp_diff_T = ((0xffU 
                                             & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                            > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__adder__DOT__exp_diff = (0xffU & ((
                                                   (0xffU 
                                                    & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                                   > (IData)(this->__PVT__result_buffer_exp))
                                                   ? 
                                                  ((IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5) 
                                                   - (IData)(this->__PVT__result_buffer_exp))
                                                   : 
                                                  ((IData)(this->__PVT__result_buffer_exp) 
                                                   - (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5))));
    this->__PVT__adder_io_out_result_exp = (0xffU & 
                                            ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                              ? (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)
                                              : (IData)(this->__PVT__result_buffer_exp)));
    if ((3U >= (IData)(this->__PVT__adder__DOT__exp_diff))) {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 
            = (0xfU & ((IData)(this->__PVT__result_buffer_man) 
                       >> (IData)(this->__PVT__adder__DOT__exp_diff)));
        this->__PVT__adder__DOT___io_out_result_sign_T_4 
            = (0xfU & ((0xfU & (IData)(this->__PVT__mac__DOT___io_out_result_man_T_10)) 
                       >> (IData)(this->__PVT__adder__DOT__exp_diff)));
    } else {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__adder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__adder__DOT___io_out_result_sign_T_3 
        = (1U & (((0xfU & (IData)(this->__PVT__mac__DOT___io_out_result_man_T_10)) 
                  > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                  ? ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                     >> 4U) : (IData)(this->__PVT__result_buffer_sign)));
    this->__PVT__adder__DOT___io_out_result_sign_T_6 
        = (1U & (((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                  > (IData)(this->__PVT__result_buffer_man))
                  ? ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                     >> 4U) : (IData)(this->__PVT__result_buffer_sign)));
    this->__PVT__adder__DOT__addition = (0x1fU & ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                                   ? 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 4U)) 
                                                    == (IData)(this->__PVT__result_buffer_sign))
                                                    ? 
                                                   ((0xfU 
                                                     & (IData)(this->__PVT__mac__DOT___io_out_result_man_T_10)) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                    : 
                                                   (0xfU 
                                                    & (((0xfU 
                                                         & (IData)(this->__PVT__mac__DOT___io_out_result_man_T_10)) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        ? 
                                                       ((IData)(this->__PVT__mac__DOT___io_out_result_man_T_10) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1) 
                                                        - (IData)(this->__PVT__mac__DOT___io_out_result_man_T_10)))))
                                                   : 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 4U)) 
                                                    == (IData)(this->__PVT__result_buffer_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__result_buffer_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                    : 
                                                   (0xfU 
                                                    & (((IData)(this->__PVT__result_buffer_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        ? 
                                                       ((IData)(this->__PVT__result_buffer_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                        - (IData)(this->__PVT__result_buffer_man)))))));
}

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3__40(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3__40\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__sum = (0xffU & (VL_EXTENDS_II(8,7, 
                                                         (0x7fU 
                                                          & (VL_EXTENDS_II(7,6, 
                                                                           (0x3fU 
                                                                            & (VL_EXTENDS_II(6,5, (IData)(this->__PVT__mac__DOT__two_complement_buffer_0)) 
                                                                               + 
                                                                               VL_EXTENDS_II(6,5, (IData)(this->__PVT__mac__DOT__two_complement_buffer_1))))) 
                                                             + 
                                                             VL_EXTENDS_II(7,6, 
                                                                           ((0x20U 
                                                                             & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_2) 
                                                                                << 1U)) 
                                                                            | (IData)(this->__PVT__mac__DOT__two_complement_buffer_2)))))) 
                                           + VL_EXTENDS_II(8,7, 
                                                           ((0x60U 
                                                             & ((- (IData)(
                                                                           (1U 
                                                                            & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_3) 
                                                                               >> 4U)))) 
                                                                << 5U)) 
                                                            | (IData)(this->__PVT__mac__DOT__two_complement_buffer_3)))));
    this->__PVT__mac__DOT___io_out_result_man_T_10 
        = ((IData)(vlTOPp->io_in_flag) ? (0xfU & (IData)(this->__PVT__mac__DOT__acc_hbfp))
            : (0xfU & (IData)(this->__PVT__mac__DOT__acc_hbfp)));
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_0) 
                                                     * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_0)));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_1) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_1)));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_2) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_2)));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_3) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_3)));
    this->__PVT__adder__DOT___exp_diff_T = ((0xffU 
                                             & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                            > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__adder__DOT__exp_diff = (0xffU & ((
                                                   (0xffU 
                                                    & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                                   > (IData)(this->__PVT__result_buffer_exp))
                                                   ? 
                                                  ((IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5) 
                                                   - (IData)(this->__PVT__result_buffer_exp))
                                                   : 
                                                  ((IData)(this->__PVT__result_buffer_exp) 
                                                   - (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5))));
    this->__PVT__adder_io_out_result_exp = (0xffU & 
                                            ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                              ? (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)
                                              : (IData)(this->__PVT__result_buffer_exp)));
    if ((3U >= (IData)(this->__PVT__adder__DOT__exp_diff))) {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 
            = (0xfU & ((IData)(this->__PVT__result_buffer_man) 
                       >> (IData)(this->__PVT__adder__DOT__exp_diff)));
        this->__PVT__adder__DOT___io_out_result_sign_T_4 
            = (0xfU & ((0xfU & (IData)(this->__PVT__mac__DOT___io_out_result_man_T_10)) 
                       >> (IData)(this->__PVT__adder__DOT__exp_diff)));
    } else {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__adder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__adder__DOT___io_out_result_sign_T_3 
        = (1U & (((0xfU & (IData)(this->__PVT__mac__DOT___io_out_result_man_T_10)) 
                  > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                  ? ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                     >> 4U) : (IData)(this->__PVT__result_buffer_sign)));
    this->__PVT__adder__DOT___io_out_result_sign_T_6 
        = (1U & (((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                  > (IData)(this->__PVT__result_buffer_man))
                  ? ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                     >> 4U) : (IData)(this->__PVT__result_buffer_sign)));
    this->__PVT__adder__DOT__addition = (0x1fU & ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                                   ? 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 4U)) 
                                                    == (IData)(this->__PVT__result_buffer_sign))
                                                    ? 
                                                   ((0xfU 
                                                     & (IData)(this->__PVT__mac__DOT___io_out_result_man_T_10)) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                    : 
                                                   (0xfU 
                                                    & (((0xfU 
                                                         & (IData)(this->__PVT__mac__DOT___io_out_result_man_T_10)) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        ? 
                                                       ((IData)(this->__PVT__mac__DOT___io_out_result_man_T_10) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1) 
                                                        - (IData)(this->__PVT__mac__DOT___io_out_result_man_T_10)))))
                                                   : 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 4U)) 
                                                    == (IData)(this->__PVT__result_buffer_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__result_buffer_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                    : 
                                                   (0xfU 
                                                    & (((IData)(this->__PVT__result_buffer_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        ? 
                                                       ((IData)(this->__PVT__result_buffer_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                        - (IData)(this->__PVT__result_buffer_man)))))));
}

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0__41(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0__41\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__sum = (0xffU & (VL_EXTENDS_II(8,7, 
                                                         (0x7fU 
                                                          & (VL_EXTENDS_II(7,6, 
                                                                           (0x3fU 
                                                                            & (VL_EXTENDS_II(6,5, (IData)(this->__PVT__mac__DOT__two_complement_buffer_0)) 
                                                                               + 
                                                                               VL_EXTENDS_II(6,5, (IData)(this->__PVT__mac__DOT__two_complement_buffer_1))))) 
                                                             + 
                                                             VL_EXTENDS_II(7,6, 
                                                                           ((0x20U 
                                                                             & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_2) 
                                                                                << 1U)) 
                                                                            | (IData)(this->__PVT__mac__DOT__two_complement_buffer_2)))))) 
                                           + VL_EXTENDS_II(8,7, 
                                                           ((0x60U 
                                                             & ((- (IData)(
                                                                           (1U 
                                                                            & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_3) 
                                                                               >> 4U)))) 
                                                                << 5U)) 
                                                            | (IData)(this->__PVT__mac__DOT__two_complement_buffer_3)))));
    this->__PVT__mac__DOT___io_out_result_man_T_10 
        = ((IData)(vlTOPp->io_in_flag) ? (0xfU & (IData)(this->__PVT__mac__DOT__acc_hbfp))
            : (0xfU & (IData)(this->__PVT__mac__DOT__acc_hbfp)));
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_0) 
                                                     * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_r_man_0)));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_1) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_r_man_1)));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_2) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_r_man_2)));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_3) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_r_man_3)));
    this->__PVT__adder__DOT___exp_diff_T = ((0xffU 
                                             & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                            > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__adder__DOT__exp_diff = (0xffU & ((
                                                   (0xffU 
                                                    & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                                   > (IData)(this->__PVT__result_buffer_exp))
                                                   ? 
                                                  ((IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5) 
                                                   - (IData)(this->__PVT__result_buffer_exp))
                                                   : 
                                                  ((IData)(this->__PVT__result_buffer_exp) 
                                                   - (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5))));
    this->__PVT__adder_io_out_result_exp = (0xffU & 
                                            ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                              ? (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)
                                              : (IData)(this->__PVT__result_buffer_exp)));
    if ((3U >= (IData)(this->__PVT__adder__DOT__exp_diff))) {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 
            = (0xfU & ((IData)(this->__PVT__result_buffer_man) 
                       >> (IData)(this->__PVT__adder__DOT__exp_diff)));
        this->__PVT__adder__DOT___io_out_result_sign_T_4 
            = (0xfU & ((0xfU & (IData)(this->__PVT__mac__DOT___io_out_result_man_T_10)) 
                       >> (IData)(this->__PVT__adder__DOT__exp_diff)));
    } else {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__adder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__adder__DOT___io_out_result_sign_T_3 
        = (1U & (((0xfU & (IData)(this->__PVT__mac__DOT___io_out_result_man_T_10)) 
                  > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                  ? ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                     >> 4U) : (IData)(this->__PVT__result_buffer_sign)));
    this->__PVT__adder__DOT___io_out_result_sign_T_6 
        = (1U & (((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                  > (IData)(this->__PVT__result_buffer_man))
                  ? ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                     >> 4U) : (IData)(this->__PVT__result_buffer_sign)));
    this->__PVT__adder__DOT__addition = (0x1fU & ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                                   ? 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 4U)) 
                                                    == (IData)(this->__PVT__result_buffer_sign))
                                                    ? 
                                                   ((0xfU 
                                                     & (IData)(this->__PVT__mac__DOT___io_out_result_man_T_10)) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                    : 
                                                   (0xfU 
                                                    & (((0xfU 
                                                         & (IData)(this->__PVT__mac__DOT___io_out_result_man_T_10)) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        ? 
                                                       ((IData)(this->__PVT__mac__DOT___io_out_result_man_T_10) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1) 
                                                        - (IData)(this->__PVT__mac__DOT___io_out_result_man_T_10)))))
                                                   : 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 4U)) 
                                                    == (IData)(this->__PVT__result_buffer_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__result_buffer_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                    : 
                                                   (0xfU 
                                                    & (((IData)(this->__PVT__result_buffer_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        ? 
                                                       ((IData)(this->__PVT__result_buffer_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                        - (IData)(this->__PVT__result_buffer_man)))))));
}

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1__42(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1__42\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__sum = (0xffU & (VL_EXTENDS_II(8,7, 
                                                         (0x7fU 
                                                          & (VL_EXTENDS_II(7,6, 
                                                                           (0x3fU 
                                                                            & (VL_EXTENDS_II(6,5, (IData)(this->__PVT__mac__DOT__two_complement_buffer_0)) 
                                                                               + 
                                                                               VL_EXTENDS_II(6,5, (IData)(this->__PVT__mac__DOT__two_complement_buffer_1))))) 
                                                             + 
                                                             VL_EXTENDS_II(7,6, 
                                                                           ((0x20U 
                                                                             & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_2) 
                                                                                << 1U)) 
                                                                            | (IData)(this->__PVT__mac__DOT__two_complement_buffer_2)))))) 
                                           + VL_EXTENDS_II(8,7, 
                                                           ((0x60U 
                                                             & ((- (IData)(
                                                                           (1U 
                                                                            & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_3) 
                                                                               >> 4U)))) 
                                                                << 5U)) 
                                                            | (IData)(this->__PVT__mac__DOT__two_complement_buffer_3)))));
    this->__PVT__mac__DOT___io_out_result_man_T_10 
        = ((IData)(vlTOPp->io_in_flag) ? (0xfU & (IData)(this->__PVT__mac__DOT__acc_hbfp))
            : (0xfU & (IData)(this->__PVT__mac__DOT__acc_hbfp)));
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_r_man_0) 
                                                     * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_r_man_0)));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_r_man_1) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_r_man_1)));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_r_man_2) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_r_man_2)));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_r_man_3) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_r_man_3)));
    this->__PVT__adder__DOT___exp_diff_T = ((0xffU 
                                             & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                            > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__adder__DOT__exp_diff = (0xffU & ((
                                                   (0xffU 
                                                    & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                                   > (IData)(this->__PVT__result_buffer_exp))
                                                   ? 
                                                  ((IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5) 
                                                   - (IData)(this->__PVT__result_buffer_exp))
                                                   : 
                                                  ((IData)(this->__PVT__result_buffer_exp) 
                                                   - (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5))));
    this->__PVT__adder_io_out_result_exp = (0xffU & 
                                            ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                              ? (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)
                                              : (IData)(this->__PVT__result_buffer_exp)));
    if ((3U >= (IData)(this->__PVT__adder__DOT__exp_diff))) {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 
            = (0xfU & ((IData)(this->__PVT__result_buffer_man) 
                       >> (IData)(this->__PVT__adder__DOT__exp_diff)));
        this->__PVT__adder__DOT___io_out_result_sign_T_4 
            = (0xfU & ((0xfU & (IData)(this->__PVT__mac__DOT___io_out_result_man_T_10)) 
                       >> (IData)(this->__PVT__adder__DOT__exp_diff)));
    } else {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__adder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__adder__DOT___io_out_result_sign_T_3 
        = (1U & (((0xfU & (IData)(this->__PVT__mac__DOT___io_out_result_man_T_10)) 
                  > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                  ? ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                     >> 4U) : (IData)(this->__PVT__result_buffer_sign)));
    this->__PVT__adder__DOT___io_out_result_sign_T_6 
        = (1U & (((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                  > (IData)(this->__PVT__result_buffer_man))
                  ? ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                     >> 4U) : (IData)(this->__PVT__result_buffer_sign)));
    this->__PVT__adder__DOT__addition = (0x1fU & ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                                   ? 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 4U)) 
                                                    == (IData)(this->__PVT__result_buffer_sign))
                                                    ? 
                                                   ((0xfU 
                                                     & (IData)(this->__PVT__mac__DOT___io_out_result_man_T_10)) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                    : 
                                                   (0xfU 
                                                    & (((0xfU 
                                                         & (IData)(this->__PVT__mac__DOT___io_out_result_man_T_10)) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        ? 
                                                       ((IData)(this->__PVT__mac__DOT___io_out_result_man_T_10) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1) 
                                                        - (IData)(this->__PVT__mac__DOT___io_out_result_man_T_10)))))
                                                   : 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 4U)) 
                                                    == (IData)(this->__PVT__result_buffer_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__result_buffer_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                    : 
                                                   (0xfU 
                                                    & (((IData)(this->__PVT__result_buffer_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        ? 
                                                       ((IData)(this->__PVT__result_buffer_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                        - (IData)(this->__PVT__result_buffer_man)))))));
}

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2__43(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2__43\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__sum = (0xffU & (VL_EXTENDS_II(8,7, 
                                                         (0x7fU 
                                                          & (VL_EXTENDS_II(7,6, 
                                                                           (0x3fU 
                                                                            & (VL_EXTENDS_II(6,5, (IData)(this->__PVT__mac__DOT__two_complement_buffer_0)) 
                                                                               + 
                                                                               VL_EXTENDS_II(6,5, (IData)(this->__PVT__mac__DOT__two_complement_buffer_1))))) 
                                                             + 
                                                             VL_EXTENDS_II(7,6, 
                                                                           ((0x20U 
                                                                             & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_2) 
                                                                                << 1U)) 
                                                                            | (IData)(this->__PVT__mac__DOT__two_complement_buffer_2)))))) 
                                           + VL_EXTENDS_II(8,7, 
                                                           ((0x60U 
                                                             & ((- (IData)(
                                                                           (1U 
                                                                            & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_3) 
                                                                               >> 4U)))) 
                                                                << 5U)) 
                                                            | (IData)(this->__PVT__mac__DOT__two_complement_buffer_3)))));
    this->__PVT__mac__DOT___io_out_result_man_T_10 
        = ((IData)(vlTOPp->io_in_flag) ? (0xfU & (IData)(this->__PVT__mac__DOT__acc_hbfp))
            : (0xfU & (IData)(this->__PVT__mac__DOT__acc_hbfp)));
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_r_man_0) 
                                                     * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_r_man_0)));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_r_man_1) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_r_man_1)));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_r_man_2) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_r_man_2)));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_r_man_3) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_r_man_3)));
    this->__PVT__adder__DOT___exp_diff_T = ((0xffU 
                                             & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                            > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__adder__DOT__exp_diff = (0xffU & ((
                                                   (0xffU 
                                                    & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                                   > (IData)(this->__PVT__result_buffer_exp))
                                                   ? 
                                                  ((IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5) 
                                                   - (IData)(this->__PVT__result_buffer_exp))
                                                   : 
                                                  ((IData)(this->__PVT__result_buffer_exp) 
                                                   - (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5))));
    this->__PVT__adder_io_out_result_exp = (0xffU & 
                                            ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                              ? (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)
                                              : (IData)(this->__PVT__result_buffer_exp)));
    if ((3U >= (IData)(this->__PVT__adder__DOT__exp_diff))) {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 
            = (0xfU & ((IData)(this->__PVT__result_buffer_man) 
                       >> (IData)(this->__PVT__adder__DOT__exp_diff)));
        this->__PVT__adder__DOT___io_out_result_sign_T_4 
            = (0xfU & ((0xfU & (IData)(this->__PVT__mac__DOT___io_out_result_man_T_10)) 
                       >> (IData)(this->__PVT__adder__DOT__exp_diff)));
    } else {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__adder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__adder__DOT___io_out_result_sign_T_3 
        = (1U & (((0xfU & (IData)(this->__PVT__mac__DOT___io_out_result_man_T_10)) 
                  > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                  ? ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                     >> 4U) : (IData)(this->__PVT__result_buffer_sign)));
    this->__PVT__adder__DOT___io_out_result_sign_T_6 
        = (1U & (((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                  > (IData)(this->__PVT__result_buffer_man))
                  ? ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                     >> 4U) : (IData)(this->__PVT__result_buffer_sign)));
    this->__PVT__adder__DOT__addition = (0x1fU & ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                                   ? 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 4U)) 
                                                    == (IData)(this->__PVT__result_buffer_sign))
                                                    ? 
                                                   ((0xfU 
                                                     & (IData)(this->__PVT__mac__DOT___io_out_result_man_T_10)) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                    : 
                                                   (0xfU 
                                                    & (((0xfU 
                                                         & (IData)(this->__PVT__mac__DOT___io_out_result_man_T_10)) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        ? 
                                                       ((IData)(this->__PVT__mac__DOT___io_out_result_man_T_10) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1) 
                                                        - (IData)(this->__PVT__mac__DOT___io_out_result_man_T_10)))))
                                                   : 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 4U)) 
                                                    == (IData)(this->__PVT__result_buffer_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__result_buffer_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                    : 
                                                   (0xfU 
                                                    & (((IData)(this->__PVT__result_buffer_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        ? 
                                                       ((IData)(this->__PVT__result_buffer_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                        - (IData)(this->__PVT__result_buffer_man)))))));
}

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3__44(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3__44\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__sum = (0xffU & (VL_EXTENDS_II(8,7, 
                                                         (0x7fU 
                                                          & (VL_EXTENDS_II(7,6, 
                                                                           (0x3fU 
                                                                            & (VL_EXTENDS_II(6,5, (IData)(this->__PVT__mac__DOT__two_complement_buffer_0)) 
                                                                               + 
                                                                               VL_EXTENDS_II(6,5, (IData)(this->__PVT__mac__DOT__two_complement_buffer_1))))) 
                                                             + 
                                                             VL_EXTENDS_II(7,6, 
                                                                           ((0x20U 
                                                                             & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_2) 
                                                                                << 1U)) 
                                                                            | (IData)(this->__PVT__mac__DOT__two_complement_buffer_2)))))) 
                                           + VL_EXTENDS_II(8,7, 
                                                           ((0x60U 
                                                             & ((- (IData)(
                                                                           (1U 
                                                                            & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_3) 
                                                                               >> 4U)))) 
                                                                << 5U)) 
                                                            | (IData)(this->__PVT__mac__DOT__two_complement_buffer_3)))));
    this->__PVT__mac__DOT___io_out_result_man_T_10 
        = ((IData)(vlTOPp->io_in_flag) ? (0xfU & (IData)(this->__PVT__mac__DOT__acc_hbfp))
            : (0xfU & (IData)(this->__PVT__mac__DOT__acc_hbfp)));
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_r_man_0) 
                                                     * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_r_man_0)));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_r_man_1) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_r_man_1)));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_r_man_2) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_r_man_2)));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_r_man_3) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_r_man_3)));
    this->__PVT__adder__DOT___exp_diff_T = ((0xffU 
                                             & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                            > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__adder__DOT__exp_diff = (0xffU & ((
                                                   (0xffU 
                                                    & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                                   > (IData)(this->__PVT__result_buffer_exp))
                                                   ? 
                                                  ((IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5) 
                                                   - (IData)(this->__PVT__result_buffer_exp))
                                                   : 
                                                  ((IData)(this->__PVT__result_buffer_exp) 
                                                   - (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5))));
    this->__PVT__adder_io_out_result_exp = (0xffU & 
                                            ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                              ? (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)
                                              : (IData)(this->__PVT__result_buffer_exp)));
    if ((3U >= (IData)(this->__PVT__adder__DOT__exp_diff))) {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 
            = (0xfU & ((IData)(this->__PVT__result_buffer_man) 
                       >> (IData)(this->__PVT__adder__DOT__exp_diff)));
        this->__PVT__adder__DOT___io_out_result_sign_T_4 
            = (0xfU & ((0xfU & (IData)(this->__PVT__mac__DOT___io_out_result_man_T_10)) 
                       >> (IData)(this->__PVT__adder__DOT__exp_diff)));
    } else {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__adder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__adder__DOT___io_out_result_sign_T_3 
        = (1U & (((0xfU & (IData)(this->__PVT__mac__DOT___io_out_result_man_T_10)) 
                  > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                  ? ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                     >> 4U) : (IData)(this->__PVT__result_buffer_sign)));
    this->__PVT__adder__DOT___io_out_result_sign_T_6 
        = (1U & (((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                  > (IData)(this->__PVT__result_buffer_man))
                  ? ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                     >> 4U) : (IData)(this->__PVT__result_buffer_sign)));
    this->__PVT__adder__DOT__addition = (0x1fU & ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                                   ? 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 4U)) 
                                                    == (IData)(this->__PVT__result_buffer_sign))
                                                    ? 
                                                   ((0xfU 
                                                     & (IData)(this->__PVT__mac__DOT___io_out_result_man_T_10)) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                    : 
                                                   (0xfU 
                                                    & (((0xfU 
                                                         & (IData)(this->__PVT__mac__DOT___io_out_result_man_T_10)) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        ? 
                                                       ((IData)(this->__PVT__mac__DOT___io_out_result_man_T_10) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1) 
                                                        - (IData)(this->__PVT__mac__DOT___io_out_result_man_T_10)))))
                                                   : 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 4U)) 
                                                    == (IData)(this->__PVT__result_buffer_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__result_buffer_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                    : 
                                                   (0xfU 
                                                    & (((IData)(this->__PVT__result_buffer_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        ? 
                                                       ((IData)(this->__PVT__result_buffer_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                        - (IData)(this->__PVT__result_buffer_man)))))));
}

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0__45(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0__45\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__sum = (0xffU & (VL_EXTENDS_II(8,7, 
                                                         (0x7fU 
                                                          & (VL_EXTENDS_II(7,6, 
                                                                           (0x3fU 
                                                                            & (VL_EXTENDS_II(6,5, (IData)(this->__PVT__mac__DOT__two_complement_buffer_0)) 
                                                                               + 
                                                                               VL_EXTENDS_II(6,5, (IData)(this->__PVT__mac__DOT__two_complement_buffer_1))))) 
                                                             + 
                                                             VL_EXTENDS_II(7,6, 
                                                                           ((0x20U 
                                                                             & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_2) 
                                                                                << 1U)) 
                                                                            | (IData)(this->__PVT__mac__DOT__two_complement_buffer_2)))))) 
                                           + VL_EXTENDS_II(8,7, 
                                                           ((0x60U 
                                                             & ((- (IData)(
                                                                           (1U 
                                                                            & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_3) 
                                                                               >> 4U)))) 
                                                                << 5U)) 
                                                            | (IData)(this->__PVT__mac__DOT__two_complement_buffer_3)))));
    this->__PVT__mac__DOT___io_out_result_man_T_10 
        = ((IData)(vlTOPp->io_in_flag) ? (0xfU & (IData)(this->__PVT__mac__DOT__acc_hbfp))
            : (0xfU & (IData)(this->__PVT__mac__DOT__acc_hbfp)));
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_0) 
                                                     * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_0)));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_1) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_1)));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_2) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_2)));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_3) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_3)));
    this->__PVT__adder__DOT___exp_diff_T = ((0xffU 
                                             & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                            > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__adder__DOT__exp_diff = (0xffU & ((
                                                   (0xffU 
                                                    & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                                   > (IData)(this->__PVT__result_buffer_exp))
                                                   ? 
                                                  ((IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5) 
                                                   - (IData)(this->__PVT__result_buffer_exp))
                                                   : 
                                                  ((IData)(this->__PVT__result_buffer_exp) 
                                                   - (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5))));
    this->__PVT__adder_io_out_result_exp = (0xffU & 
                                            ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                              ? (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)
                                              : (IData)(this->__PVT__result_buffer_exp)));
    if ((3U >= (IData)(this->__PVT__adder__DOT__exp_diff))) {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 
            = (0xfU & ((IData)(this->__PVT__result_buffer_man) 
                       >> (IData)(this->__PVT__adder__DOT__exp_diff)));
        this->__PVT__adder__DOT___io_out_result_sign_T_4 
            = (0xfU & ((0xfU & (IData)(this->__PVT__mac__DOT___io_out_result_man_T_10)) 
                       >> (IData)(this->__PVT__adder__DOT__exp_diff)));
    } else {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__adder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__adder__DOT___io_out_result_sign_T_3 
        = (1U & (((0xfU & (IData)(this->__PVT__mac__DOT___io_out_result_man_T_10)) 
                  > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                  ? ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                     >> 4U) : (IData)(this->__PVT__result_buffer_sign)));
    this->__PVT__adder__DOT___io_out_result_sign_T_6 
        = (1U & (((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                  > (IData)(this->__PVT__result_buffer_man))
                  ? ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                     >> 4U) : (IData)(this->__PVT__result_buffer_sign)));
    this->__PVT__adder__DOT__addition = (0x1fU & ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                                   ? 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 4U)) 
                                                    == (IData)(this->__PVT__result_buffer_sign))
                                                    ? 
                                                   ((0xfU 
                                                     & (IData)(this->__PVT__mac__DOT___io_out_result_man_T_10)) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                    : 
                                                   (0xfU 
                                                    & (((0xfU 
                                                         & (IData)(this->__PVT__mac__DOT___io_out_result_man_T_10)) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        ? 
                                                       ((IData)(this->__PVT__mac__DOT___io_out_result_man_T_10) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1) 
                                                        - (IData)(this->__PVT__mac__DOT___io_out_result_man_T_10)))))
                                                   : 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 4U)) 
                                                    == (IData)(this->__PVT__result_buffer_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__result_buffer_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                    : 
                                                   (0xfU 
                                                    & (((IData)(this->__PVT__result_buffer_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        ? 
                                                       ((IData)(this->__PVT__result_buffer_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                        - (IData)(this->__PVT__result_buffer_man)))))));
}

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1__46(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1__46\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__sum = (0xffU & (VL_EXTENDS_II(8,7, 
                                                         (0x7fU 
                                                          & (VL_EXTENDS_II(7,6, 
                                                                           (0x3fU 
                                                                            & (VL_EXTENDS_II(6,5, (IData)(this->__PVT__mac__DOT__two_complement_buffer_0)) 
                                                                               + 
                                                                               VL_EXTENDS_II(6,5, (IData)(this->__PVT__mac__DOT__two_complement_buffer_1))))) 
                                                             + 
                                                             VL_EXTENDS_II(7,6, 
                                                                           ((0x20U 
                                                                             & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_2) 
                                                                                << 1U)) 
                                                                            | (IData)(this->__PVT__mac__DOT__two_complement_buffer_2)))))) 
                                           + VL_EXTENDS_II(8,7, 
                                                           ((0x60U 
                                                             & ((- (IData)(
                                                                           (1U 
                                                                            & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_3) 
                                                                               >> 4U)))) 
                                                                << 5U)) 
                                                            | (IData)(this->__PVT__mac__DOT__two_complement_buffer_3)))));
    this->__PVT__mac__DOT___io_out_result_man_T_10 
        = ((IData)(vlTOPp->io_in_flag) ? (0xfU & (IData)(this->__PVT__mac__DOT__acc_hbfp))
            : (0xfU & (IData)(this->__PVT__mac__DOT__acc_hbfp)));
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_0) 
                                                     * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_0)));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_1) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_1)));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_2) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_2)));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_3) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_3)));
    this->__PVT__adder__DOT___exp_diff_T = ((0xffU 
                                             & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                            > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__adder__DOT__exp_diff = (0xffU & ((
                                                   (0xffU 
                                                    & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                                   > (IData)(this->__PVT__result_buffer_exp))
                                                   ? 
                                                  ((IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5) 
                                                   - (IData)(this->__PVT__result_buffer_exp))
                                                   : 
                                                  ((IData)(this->__PVT__result_buffer_exp) 
                                                   - (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5))));
    this->__PVT__adder_io_out_result_exp = (0xffU & 
                                            ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                              ? (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)
                                              : (IData)(this->__PVT__result_buffer_exp)));
    if ((3U >= (IData)(this->__PVT__adder__DOT__exp_diff))) {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 
            = (0xfU & ((IData)(this->__PVT__result_buffer_man) 
                       >> (IData)(this->__PVT__adder__DOT__exp_diff)));
        this->__PVT__adder__DOT___io_out_result_sign_T_4 
            = (0xfU & ((0xfU & (IData)(this->__PVT__mac__DOT___io_out_result_man_T_10)) 
                       >> (IData)(this->__PVT__adder__DOT__exp_diff)));
    } else {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__adder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__adder__DOT___io_out_result_sign_T_3 
        = (1U & (((0xfU & (IData)(this->__PVT__mac__DOT___io_out_result_man_T_10)) 
                  > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                  ? ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                     >> 4U) : (IData)(this->__PVT__result_buffer_sign)));
    this->__PVT__adder__DOT___io_out_result_sign_T_6 
        = (1U & (((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                  > (IData)(this->__PVT__result_buffer_man))
                  ? ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                     >> 4U) : (IData)(this->__PVT__result_buffer_sign)));
    this->__PVT__adder__DOT__addition = (0x1fU & ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                                   ? 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 4U)) 
                                                    == (IData)(this->__PVT__result_buffer_sign))
                                                    ? 
                                                   ((0xfU 
                                                     & (IData)(this->__PVT__mac__DOT___io_out_result_man_T_10)) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                    : 
                                                   (0xfU 
                                                    & (((0xfU 
                                                         & (IData)(this->__PVT__mac__DOT___io_out_result_man_T_10)) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        ? 
                                                       ((IData)(this->__PVT__mac__DOT___io_out_result_man_T_10) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1) 
                                                        - (IData)(this->__PVT__mac__DOT___io_out_result_man_T_10)))))
                                                   : 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 4U)) 
                                                    == (IData)(this->__PVT__result_buffer_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__result_buffer_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                    : 
                                                   (0xfU 
                                                    & (((IData)(this->__PVT__result_buffer_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        ? 
                                                       ((IData)(this->__PVT__result_buffer_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                        - (IData)(this->__PVT__result_buffer_man)))))));
}

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2__47(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2__47\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__sum = (0xffU & (VL_EXTENDS_II(8,7, 
                                                         (0x7fU 
                                                          & (VL_EXTENDS_II(7,6, 
                                                                           (0x3fU 
                                                                            & (VL_EXTENDS_II(6,5, (IData)(this->__PVT__mac__DOT__two_complement_buffer_0)) 
                                                                               + 
                                                                               VL_EXTENDS_II(6,5, (IData)(this->__PVT__mac__DOT__two_complement_buffer_1))))) 
                                                             + 
                                                             VL_EXTENDS_II(7,6, 
                                                                           ((0x20U 
                                                                             & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_2) 
                                                                                << 1U)) 
                                                                            | (IData)(this->__PVT__mac__DOT__two_complement_buffer_2)))))) 
                                           + VL_EXTENDS_II(8,7, 
                                                           ((0x60U 
                                                             & ((- (IData)(
                                                                           (1U 
                                                                            & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_3) 
                                                                               >> 4U)))) 
                                                                << 5U)) 
                                                            | (IData)(this->__PVT__mac__DOT__two_complement_buffer_3)))));
    this->__PVT__mac__DOT___io_out_result_man_T_10 
        = ((IData)(vlTOPp->io_in_flag) ? (0xfU & (IData)(this->__PVT__mac__DOT__acc_hbfp))
            : (0xfU & (IData)(this->__PVT__mac__DOT__acc_hbfp)));
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_0) 
                                                     * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_0)));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_1) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_1)));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_2) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_2)));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_3) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_3)));
    this->__PVT__adder__DOT___exp_diff_T = ((0xffU 
                                             & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                            > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__adder__DOT__exp_diff = (0xffU & ((
                                                   (0xffU 
                                                    & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                                   > (IData)(this->__PVT__result_buffer_exp))
                                                   ? 
                                                  ((IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5) 
                                                   - (IData)(this->__PVT__result_buffer_exp))
                                                   : 
                                                  ((IData)(this->__PVT__result_buffer_exp) 
                                                   - (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5))));
    this->__PVT__adder_io_out_result_exp = (0xffU & 
                                            ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                              ? (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)
                                              : (IData)(this->__PVT__result_buffer_exp)));
    if ((3U >= (IData)(this->__PVT__adder__DOT__exp_diff))) {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 
            = (0xfU & ((IData)(this->__PVT__result_buffer_man) 
                       >> (IData)(this->__PVT__adder__DOT__exp_diff)));
        this->__PVT__adder__DOT___io_out_result_sign_T_4 
            = (0xfU & ((0xfU & (IData)(this->__PVT__mac__DOT___io_out_result_man_T_10)) 
                       >> (IData)(this->__PVT__adder__DOT__exp_diff)));
    } else {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__adder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__adder__DOT___io_out_result_sign_T_3 
        = (1U & (((0xfU & (IData)(this->__PVT__mac__DOT___io_out_result_man_T_10)) 
                  > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                  ? ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                     >> 4U) : (IData)(this->__PVT__result_buffer_sign)));
    this->__PVT__adder__DOT___io_out_result_sign_T_6 
        = (1U & (((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                  > (IData)(this->__PVT__result_buffer_man))
                  ? ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                     >> 4U) : (IData)(this->__PVT__result_buffer_sign)));
    this->__PVT__adder__DOT__addition = (0x1fU & ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                                   ? 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 4U)) 
                                                    == (IData)(this->__PVT__result_buffer_sign))
                                                    ? 
                                                   ((0xfU 
                                                     & (IData)(this->__PVT__mac__DOT___io_out_result_man_T_10)) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                    : 
                                                   (0xfU 
                                                    & (((0xfU 
                                                         & (IData)(this->__PVT__mac__DOT___io_out_result_man_T_10)) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        ? 
                                                       ((IData)(this->__PVT__mac__DOT___io_out_result_man_T_10) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1) 
                                                        - (IData)(this->__PVT__mac__DOT___io_out_result_man_T_10)))))
                                                   : 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 4U)) 
                                                    == (IData)(this->__PVT__result_buffer_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__result_buffer_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                    : 
                                                   (0xfU 
                                                    & (((IData)(this->__PVT__result_buffer_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        ? 
                                                       ((IData)(this->__PVT__result_buffer_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                        - (IData)(this->__PVT__result_buffer_man)))))));
}

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3__48(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3__48\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__sum = (0xffU & (VL_EXTENDS_II(8,7, 
                                                         (0x7fU 
                                                          & (VL_EXTENDS_II(7,6, 
                                                                           (0x3fU 
                                                                            & (VL_EXTENDS_II(6,5, (IData)(this->__PVT__mac__DOT__two_complement_buffer_0)) 
                                                                               + 
                                                                               VL_EXTENDS_II(6,5, (IData)(this->__PVT__mac__DOT__two_complement_buffer_1))))) 
                                                             + 
                                                             VL_EXTENDS_II(7,6, 
                                                                           ((0x20U 
                                                                             & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_2) 
                                                                                << 1U)) 
                                                                            | (IData)(this->__PVT__mac__DOT__two_complement_buffer_2)))))) 
                                           + VL_EXTENDS_II(8,7, 
                                                           ((0x60U 
                                                             & ((- (IData)(
                                                                           (1U 
                                                                            & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_3) 
                                                                               >> 4U)))) 
                                                                << 5U)) 
                                                            | (IData)(this->__PVT__mac__DOT__two_complement_buffer_3)))));
    this->__PVT__mac__DOT___io_out_result_man_T_10 
        = ((IData)(vlTOPp->io_in_flag) ? (0xfU & (IData)(this->__PVT__mac__DOT__acc_hbfp))
            : (0xfU & (IData)(this->__PVT__mac__DOT__acc_hbfp)));
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_0) 
                                                     * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_0)));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_1) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_1)));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_2) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_2)));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_3) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_3)));
    this->__PVT__adder__DOT___exp_diff_T = ((0xffU 
                                             & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                            > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__adder__DOT__exp_diff = (0xffU & ((
                                                   (0xffU 
                                                    & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                                   > (IData)(this->__PVT__result_buffer_exp))
                                                   ? 
                                                  ((IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5) 
                                                   - (IData)(this->__PVT__result_buffer_exp))
                                                   : 
                                                  ((IData)(this->__PVT__result_buffer_exp) 
                                                   - (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5))));
    this->__PVT__adder_io_out_result_exp = (0xffU & 
                                            ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                              ? (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)
                                              : (IData)(this->__PVT__result_buffer_exp)));
    if ((3U >= (IData)(this->__PVT__adder__DOT__exp_diff))) {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 
            = (0xfU & ((IData)(this->__PVT__result_buffer_man) 
                       >> (IData)(this->__PVT__adder__DOT__exp_diff)));
        this->__PVT__adder__DOT___io_out_result_sign_T_4 
            = (0xfU & ((0xfU & (IData)(this->__PVT__mac__DOT___io_out_result_man_T_10)) 
                       >> (IData)(this->__PVT__adder__DOT__exp_diff)));
    } else {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__adder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__adder__DOT___io_out_result_sign_T_3 
        = (1U & (((0xfU & (IData)(this->__PVT__mac__DOT___io_out_result_man_T_10)) 
                  > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                  ? ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                     >> 4U) : (IData)(this->__PVT__result_buffer_sign)));
    this->__PVT__adder__DOT___io_out_result_sign_T_6 
        = (1U & (((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                  > (IData)(this->__PVT__result_buffer_man))
                  ? ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                     >> 4U) : (IData)(this->__PVT__result_buffer_sign)));
    this->__PVT__adder__DOT__addition = (0x1fU & ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                                   ? 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 4U)) 
                                                    == (IData)(this->__PVT__result_buffer_sign))
                                                    ? 
                                                   ((0xfU 
                                                     & (IData)(this->__PVT__mac__DOT___io_out_result_man_T_10)) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                    : 
                                                   (0xfU 
                                                    & (((0xfU 
                                                         & (IData)(this->__PVT__mac__DOT___io_out_result_man_T_10)) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        ? 
                                                       ((IData)(this->__PVT__mac__DOT___io_out_result_man_T_10) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1) 
                                                        - (IData)(this->__PVT__mac__DOT___io_out_result_man_T_10)))))
                                                   : 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 4U)) 
                                                    == (IData)(this->__PVT__result_buffer_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__result_buffer_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                    : 
                                                   (0xfU 
                                                    & (((IData)(this->__PVT__result_buffer_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        ? 
                                                       ((IData)(this->__PVT__result_buffer_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                        - (IData)(this->__PVT__result_buffer_man)))))));
}

void VSystolicArray_HBFP_forTesting_HBFP_PE::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    io_in_hor_sign_0 = VL_RAND_RESET_I(1);
    io_in_hor_sign_1 = VL_RAND_RESET_I(1);
    io_in_hor_sign_2 = VL_RAND_RESET_I(1);
    io_in_hor_sign_3 = VL_RAND_RESET_I(1);
    io_in_hor_man_0 = VL_RAND_RESET_I(4);
    io_in_hor_man_1 = VL_RAND_RESET_I(4);
    io_in_hor_man_2 = VL_RAND_RESET_I(4);
    io_in_hor_man_3 = VL_RAND_RESET_I(4);
    io_in_hor_exp = VL_RAND_RESET_I(8);
    io_in_ver_sign_0 = VL_RAND_RESET_I(1);
    io_in_ver_sign_1 = VL_RAND_RESET_I(1);
    io_in_ver_sign_2 = VL_RAND_RESET_I(1);
    io_in_ver_sign_3 = VL_RAND_RESET_I(1);
    io_in_ver_man_0 = VL_RAND_RESET_I(4);
    io_in_ver_man_1 = VL_RAND_RESET_I(4);
    io_in_ver_man_2 = VL_RAND_RESET_I(4);
    io_in_ver_man_3 = VL_RAND_RESET_I(4);
    io_in_ver_exp = VL_RAND_RESET_I(8);
    io_in_flag = VL_RAND_RESET_I(1);
    io_out_hor_sign_0 = VL_RAND_RESET_I(1);
    io_out_hor_sign_1 = VL_RAND_RESET_I(1);
    io_out_hor_sign_2 = VL_RAND_RESET_I(1);
    io_out_hor_sign_3 = VL_RAND_RESET_I(1);
    io_out_hor_man_0 = VL_RAND_RESET_I(4);
    io_out_hor_man_1 = VL_RAND_RESET_I(4);
    io_out_hor_man_2 = VL_RAND_RESET_I(4);
    io_out_hor_man_3 = VL_RAND_RESET_I(4);
    io_out_hor_exp = VL_RAND_RESET_I(8);
    io_out_ver_sign_0 = VL_RAND_RESET_I(1);
    io_out_ver_sign_1 = VL_RAND_RESET_I(1);
    io_out_ver_sign_2 = VL_RAND_RESET_I(1);
    io_out_ver_sign_3 = VL_RAND_RESET_I(1);
    io_out_ver_man_0 = VL_RAND_RESET_I(4);
    io_out_ver_man_1 = VL_RAND_RESET_I(4);
    io_out_ver_man_2 = VL_RAND_RESET_I(4);
    io_out_ver_man_3 = VL_RAND_RESET_I(4);
    io_out_ver_exp = VL_RAND_RESET_I(8);
    io_out_result_sign = VL_RAND_RESET_I(1);
    io_out_result_man = VL_RAND_RESET_I(4);
    io_out_result_exp = VL_RAND_RESET_I(8);
    __PVT__adder_io_out_result_exp = VL_RAND_RESET_I(8);
    __PVT__result_buffer_sign = VL_RAND_RESET_I(1);
    __PVT__result_buffer_man = VL_RAND_RESET_I(4);
    __PVT__result_buffer_exp = VL_RAND_RESET_I(8);
    __PVT__mac__DOT__multiplier_1_io_out = VL_RAND_RESET_I(8);
    __PVT__mac__DOT__multiplier_1_1_io_out = VL_RAND_RESET_I(8);
    __PVT__mac__DOT__multiplier_1_2_io_out = VL_RAND_RESET_I(8);
    __PVT__mac__DOT__multiplier_1_3_io_out = VL_RAND_RESET_I(8);
    __PVT__mac__DOT__exp_addition_r = VL_RAND_RESET_I(9);
    __PVT__mac__DOT__exp_addition_r_1 = VL_RAND_RESET_I(9);
    __PVT__mac__DOT__exp_addition_r_2 = VL_RAND_RESET_I(9);
    __PVT__mac__DOT__exp_addition = VL_RAND_RESET_I(9);
    __PVT__mac__DOT___io_out_result_exp_T_5 = VL_RAND_RESET_I(9);
    __PVT__mac__DOT__dotProductRegs_0 = VL_RAND_RESET_I(4);
    __PVT__mac__DOT__dotProductRegs_1 = VL_RAND_RESET_I(4);
    __PVT__mac__DOT__dotProductRegs_2 = VL_RAND_RESET_I(4);
    __PVT__mac__DOT__dotProductRegs_3 = VL_RAND_RESET_I(4);
    __PVT__mac__DOT__two_complement_buffer_0 = VL_RAND_RESET_I(5);
    __PVT__mac__DOT__two_complement_buffer_1 = VL_RAND_RESET_I(5);
    __PVT__mac__DOT__two_complement_buffer_2 = VL_RAND_RESET_I(5);
    __PVT__mac__DOT__two_complement_buffer_3 = VL_RAND_RESET_I(5);
    __PVT__mac__DOT__signs_0 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__signs_1 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__signs_2 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__signs_3 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__final_result = VL_RAND_RESET_I(8);
    __PVT__mac__DOT__signs_0_r = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__final_result_1 = VL_RAND_RESET_I(8);
    __PVT__mac__DOT__signs_1_r = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__final_result_2 = VL_RAND_RESET_I(8);
    __PVT__mac__DOT__signs_2_r = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__final_result_3 = VL_RAND_RESET_I(8);
    __PVT__mac__DOT__signs_3_r = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__sum = VL_RAND_RESET_I(8);
    __PVT__mac__DOT__acc_hbfp = VL_RAND_RESET_I(5);
    __PVT__mac__DOT___io_out_result_man_T_10 = VL_RAND_RESET_I(5);
    __PVT__adder__DOT___exp_diff_T = VL_RAND_RESET_I(1);
    __PVT__adder__DOT__exp_diff = VL_RAND_RESET_I(8);
    __PVT__adder__DOT___io_out_result_sign_T_1 = VL_RAND_RESET_I(4);
    __PVT__adder__DOT___io_out_result_sign_T_3 = VL_RAND_RESET_I(1);
    __PVT__adder__DOT___io_out_result_sign_T_4 = VL_RAND_RESET_I(4);
    __PVT__adder__DOT___io_out_result_sign_T_6 = VL_RAND_RESET_I(1);
    __PVT__adder__DOT__addition = VL_RAND_RESET_I(5);
}

void VSystolicArray_HBFP_forTesting_HBFP_PE::_configure_coverage(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_configure_coverage\n"); );
    // Body
    if (false && vlSymsp && first) {}  // Prevent unused
}