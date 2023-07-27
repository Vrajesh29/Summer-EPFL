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

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_0__257(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_0__257\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT___sum_T_9 = (0x1ffffU & (
                                                   VL_EXTENDS_II(17,16, 
                                                                 (0xffffU 
                                                                  & (VL_EXTENDS_II(16,15, 
                                                                                (0x7fffU 
                                                                                & (VL_EXTENDS_II(15,14, 
                                                                                (0x3fffU 
                                                                                & (VL_EXTENDS_II(14,13, 
                                                                                (0x1fffU 
                                                                                & (VL_EXTENDS_II(13,12, 
                                                                                (0xfffU 
                                                                                & (VL_EXTENDS_II(12,11, 
                                                                                (0x7ffU 
                                                                                & (VL_EXTENDS_II(11,10, 
                                                                                (0x3ffU 
                                                                                & (VL_EXTENDS_II(10,9, 
                                                                                (0x1ffU 
                                                                                & (VL_EXTENDS_II(9,8, 
                                                                                (0xffU 
                                                                                & (VL_EXTENDS_II(8,7, (IData)(this->__PVT__mac__DOT__two_complement_buffer_0)) 
                                                                                + 
                                                                                VL_EXTENDS_II(8,7, (IData)(this->__PVT__mac__DOT__two_complement_buffer_1))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(9,8, 
                                                                                ((0x80U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_2) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_2)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(10,9, 
                                                                                ((0x180U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_3) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_3)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(11,10, 
                                                                                ((0x380U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_4) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_4)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(12,11, 
                                                                                ((0x780U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_5) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_5)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(13,12, 
                                                                                ((0xf80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_6) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_6)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(14,13, 
                                                                                ((0x1f80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_7) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_7)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(15,14, 
                                                                                ((0x3f80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_8) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_8)))))) 
                                                                     + 
                                                                     VL_EXTENDS_II(16,15, 
                                                                                ((0x7f80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_9) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_9)))))) 
                                                   + 
                                                   VL_EXTENDS_II(17,16, 
                                                                 ((0xff80U 
                                                                   & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_10) 
                                                                                >> 6U)))) 
                                                                      << 7U)) 
                                                                  | (IData)(this->__PVT__mac__DOT__two_complement_buffer_10)))));
    this->__PVT__mac_io_out_result_man = (0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(this->__PVT__mac__DOT__acc_hbfp)
                                                    : 
                                                   ((0xfU 
                                                     < 
                                                     (0x3fU 
                                                      & (IData)(this->__PVT__mac__DOT__acc_hbfp)))
                                                     ? 0xfU
                                                     : (IData)(this->__PVT__mac__DOT__acc_hbfp))));
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__sum = (0x3fffffU & (VL_EXTENDS_II(22,21, 
                                                             (0x1fffffU 
                                                              & (VL_EXTENDS_II(21,20, 
                                                                               (0xfffffU 
                                                                                & (VL_EXTENDS_II(20,19, 
                                                                                (0x7ffffU 
                                                                                & (VL_EXTENDS_II(19,18, 
                                                                                (0x3ffffU 
                                                                                & (VL_EXTENDS_II(18,17, this->__PVT__mac__DOT___sum_T_9) 
                                                                                + 
                                                                                VL_EXTENDS_II(18,17, 
                                                                                ((0x1ff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_11) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_11)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(19,18, 
                                                                                ((0x3ff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_12) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_12)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(20,19, 
                                                                                ((0x7ff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_13) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_13)))))) 
                                                                 + 
                                                                 VL_EXTENDS_II(21,20, 
                                                                               ((0xfff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_14) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_14)))))) 
                                               + VL_EXTENDS_II(22,21, 
                                                               ((0x1fff80U 
                                                                 & ((- (IData)(
                                                                               (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_15) 
                                                                                >> 6U)))) 
                                                                    << 7U)) 
                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_15)))));
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
    if ((5U >= (IData)(this->__PVT__adder__DOT__exp_diff))) {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 
            = (0x3fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
        this->__PVT__adder__DOT___io_out_result_sign_T_4 
            = (0x3fU & ((IData)(this->__PVT__mac_io_out_result_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
    } else {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__adder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__adder__DOT___io_out_result_sign_T_3 
        = (1U & (((IData)(this->__PVT__mac_io_out_result_man) 
                  > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                  ? ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                     >> 6U) : (IData)(this->__PVT__result_buffer_sign)));
    this->__PVT__adder__DOT___io_out_result_sign_T_6 
        = (1U & (((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                  > (IData)(this->__PVT__result_buffer_man))
                  ? ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                     >> 6U) : (IData)(this->__PVT__result_buffer_sign)));
    this->__PVT__adder__DOT__addition = (0x7fU & ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                                   ? 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 6U)) 
                                                    == (IData)(this->__PVT__result_buffer_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__mac_io_out_result_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                    : 
                                                   (0x3fU 
                                                    & (((IData)(this->__PVT__mac_io_out_result_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        ? 
                                                       ((IData)(this->__PVT__mac_io_out_result_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1) 
                                                        - (IData)(this->__PVT__mac_io_out_result_man)))))
                                                   : 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 6U)) 
                                                    == (IData)(this->__PVT__result_buffer_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__result_buffer_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                    : 
                                                   (0x3fU 
                                                    & (((IData)(this->__PVT__result_buffer_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        ? 
                                                       ((IData)(this->__PVT__result_buffer_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                        - (IData)(this->__PVT__result_buffer_man)))))));
}

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_0__528(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_0__528\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_0)))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_1))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_1))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_1)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_2))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_2))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_2)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_3))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_3))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_3)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_4))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_4))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_4)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_5))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_5))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_5)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_6))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_6))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_6)))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_7))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_7))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_7)))));
    this->__PVT__mac__DOT__multiplier_1_8_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_8))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_8))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_8))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_8)))));
    this->__PVT__mac__DOT__multiplier_1_9_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_9))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_9))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_9))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_9)))));
    this->__PVT__mac__DOT__multiplier_1_10_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_10))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_10))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_10))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_10)))));
    this->__PVT__mac__DOT__multiplier_1_11_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_11))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_11))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_11))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_11)))));
    this->__PVT__mac__DOT__multiplier_1_12_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_12))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_12))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_12))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_12)))));
    this->__PVT__mac__DOT__multiplier_1_13_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_13))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_13))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_13))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_13)))));
    this->__PVT__mac__DOT__multiplier_1_14_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_14))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_14))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_14))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_14)))));
    this->__PVT__mac__DOT__multiplier_1_15_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_15))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_15))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_15))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_15)))));
}

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_1__529(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_1__529\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_r_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_r_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_0)))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_r_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_r_man_1))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_1))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_1)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_r_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_r_man_2))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_2))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_2)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_r_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_r_man_3))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_3))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_3)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_r_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_r_man_4))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_4))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_4)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_r_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_r_man_5))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_5))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_5)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_r_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_r_man_6))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_6))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_6)))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_r_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_r_man_7))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_7))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_7)))));
    this->__PVT__mac__DOT__multiplier_1_8_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_r_man_8))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_r_man_8))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_8))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_8)))));
    this->__PVT__mac__DOT__multiplier_1_9_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_r_man_9))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_r_man_9))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_9))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_9)))));
    this->__PVT__mac__DOT__multiplier_1_10_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_r_man_10))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_r_man_10))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_10))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_10)))));
    this->__PVT__mac__DOT__multiplier_1_11_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_r_man_11))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_r_man_11))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_11))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_11)))));
    this->__PVT__mac__DOT__multiplier_1_12_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_r_man_12))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_r_man_12))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_12))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_12)))));
    this->__PVT__mac__DOT__multiplier_1_13_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_r_man_13))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_r_man_13))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_13))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_13)))));
    this->__PVT__mac__DOT__multiplier_1_14_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_r_man_14))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_r_man_14))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_14))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_14)))));
    this->__PVT__mac__DOT__multiplier_1_15_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_r_man_15))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_r_man_15))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_15))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_15)))));
}

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_2__530(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_2__530\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_r_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_r_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_0)))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_r_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_r_man_1))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_1))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_1)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_r_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_r_man_2))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_2))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_2)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_r_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_r_man_3))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_3))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_3)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_r_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_r_man_4))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_4))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_4)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_r_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_r_man_5))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_5))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_5)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_r_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_r_man_6))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_6))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_6)))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_r_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_r_man_7))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_7))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_7)))));
    this->__PVT__mac__DOT__multiplier_1_8_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_r_man_8))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_r_man_8))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_8))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_8)))));
    this->__PVT__mac__DOT__multiplier_1_9_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_r_man_9))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_r_man_9))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_9))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_9)))));
    this->__PVT__mac__DOT__multiplier_1_10_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_r_man_10))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_r_man_10))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_10))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_10)))));
    this->__PVT__mac__DOT__multiplier_1_11_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_r_man_11))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_r_man_11))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_11))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_11)))));
    this->__PVT__mac__DOT__multiplier_1_12_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_r_man_12))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_r_man_12))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_12))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_12)))));
    this->__PVT__mac__DOT__multiplier_1_13_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_r_man_13))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_r_man_13))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_13))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_13)))));
    this->__PVT__mac__DOT__multiplier_1_14_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_r_man_14))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_r_man_14))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_14))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_14)))));
    this->__PVT__mac__DOT__multiplier_1_15_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_r_man_15))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_r_man_15))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_15))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_15)))));
}

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_3__531(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_3__531\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_r_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_r_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_0)))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_r_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_r_man_1))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_1))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_1)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_r_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_r_man_2))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_2))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_2)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_r_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_r_man_3))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_3))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_3)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_r_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_r_man_4))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_4))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_4)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_r_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_r_man_5))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_5))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_5)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_r_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_r_man_6))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_6))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_6)))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_r_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_r_man_7))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_7))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_7)))));
    this->__PVT__mac__DOT__multiplier_1_8_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_r_man_8))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_r_man_8))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_8))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_8)))));
    this->__PVT__mac__DOT__multiplier_1_9_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_r_man_9))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_r_man_9))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_9))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_9)))));
    this->__PVT__mac__DOT__multiplier_1_10_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_r_man_10))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_r_man_10))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_10))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_10)))));
    this->__PVT__mac__DOT__multiplier_1_11_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_r_man_11))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_r_man_11))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_11))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_11)))));
    this->__PVT__mac__DOT__multiplier_1_12_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_r_man_12))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_r_man_12))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_12))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_12)))));
    this->__PVT__mac__DOT__multiplier_1_13_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_r_man_13))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_r_man_13))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_13))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_13)))));
    this->__PVT__mac__DOT__multiplier_1_14_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_r_man_14))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_r_man_14))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_14))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_14)))));
    this->__PVT__mac__DOT__multiplier_1_15_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_r_man_15))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_r_man_15))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_15))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_15)))));
}

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_4__532(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_4__532\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_hor_r_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_hor_r_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_ver_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_ver_man_0)))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_hor_r_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_hor_r_man_1))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_ver_man_1))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_ver_man_1)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_hor_r_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_hor_r_man_2))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_ver_man_2))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_ver_man_2)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_hor_r_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_hor_r_man_3))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_ver_man_3))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_ver_man_3)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_hor_r_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_hor_r_man_4))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_ver_man_4))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_ver_man_4)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_hor_r_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_hor_r_man_5))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_ver_man_5))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_ver_man_5)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_hor_r_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_hor_r_man_6))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_ver_man_6))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_ver_man_6)))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_hor_r_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_hor_r_man_7))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_ver_man_7))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_ver_man_7)))));
    this->__PVT__mac__DOT__multiplier_1_8_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_hor_r_man_8))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_hor_r_man_8))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_ver_man_8))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_ver_man_8)))));
    this->__PVT__mac__DOT__multiplier_1_9_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_hor_r_man_9))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_hor_r_man_9))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_ver_man_9))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_ver_man_9)))));
    this->__PVT__mac__DOT__multiplier_1_10_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_hor_r_man_10))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_hor_r_man_10))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_ver_man_10))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_ver_man_10)))));
    this->__PVT__mac__DOT__multiplier_1_11_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_hor_r_man_11))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_hor_r_man_11))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_ver_man_11))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_ver_man_11)))));
    this->__PVT__mac__DOT__multiplier_1_12_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_hor_r_man_12))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_hor_r_man_12))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_ver_man_12))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_ver_man_12)))));
    this->__PVT__mac__DOT__multiplier_1_13_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_hor_r_man_13))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_hor_r_man_13))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_ver_man_13))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_ver_man_13)))));
    this->__PVT__mac__DOT__multiplier_1_14_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_hor_r_man_14))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_hor_r_man_14))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_ver_man_14))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_ver_man_14)))));
    this->__PVT__mac__DOT__multiplier_1_15_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_hor_r_man_15))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_hor_r_man_15))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_ver_man_15))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_ver_man_15)))));
}

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_5__533(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_5__533\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_hor_r_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_hor_r_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_ver_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_ver_man_0)))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_hor_r_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_hor_r_man_1))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_ver_man_1))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_ver_man_1)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_hor_r_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_hor_r_man_2))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_ver_man_2))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_ver_man_2)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_hor_r_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_hor_r_man_3))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_ver_man_3))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_ver_man_3)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_hor_r_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_hor_r_man_4))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_ver_man_4))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_ver_man_4)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_hor_r_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_hor_r_man_5))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_ver_man_5))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_ver_man_5)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_hor_r_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_hor_r_man_6))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_ver_man_6))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_ver_man_6)))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_hor_r_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_hor_r_man_7))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_ver_man_7))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_ver_man_7)))));
    this->__PVT__mac__DOT__multiplier_1_8_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_hor_r_man_8))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_hor_r_man_8))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_ver_man_8))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_ver_man_8)))));
    this->__PVT__mac__DOT__multiplier_1_9_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_hor_r_man_9))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_hor_r_man_9))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_ver_man_9))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_ver_man_9)))));
    this->__PVT__mac__DOT__multiplier_1_10_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_hor_r_man_10))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_hor_r_man_10))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_ver_man_10))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_ver_man_10)))));
    this->__PVT__mac__DOT__multiplier_1_11_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_hor_r_man_11))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_hor_r_man_11))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_ver_man_11))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_ver_man_11)))));
    this->__PVT__mac__DOT__multiplier_1_12_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_hor_r_man_12))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_hor_r_man_12))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_ver_man_12))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_ver_man_12)))));
    this->__PVT__mac__DOT__multiplier_1_13_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_hor_r_man_13))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_hor_r_man_13))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_ver_man_13))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_ver_man_13)))));
    this->__PVT__mac__DOT__multiplier_1_14_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_hor_r_man_14))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_hor_r_man_14))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_ver_man_14))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_ver_man_14)))));
    this->__PVT__mac__DOT__multiplier_1_15_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_hor_r_man_15))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_hor_r_man_15))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_ver_man_15))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_ver_man_15)))));
}

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_6__534(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_6__534\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_hor_r_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_hor_r_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_ver_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_ver_man_0)))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_hor_r_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_hor_r_man_1))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_ver_man_1))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_ver_man_1)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_hor_r_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_hor_r_man_2))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_ver_man_2))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_ver_man_2)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_hor_r_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_hor_r_man_3))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_ver_man_3))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_ver_man_3)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_hor_r_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_hor_r_man_4))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_ver_man_4))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_ver_man_4)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_hor_r_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_hor_r_man_5))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_ver_man_5))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_ver_man_5)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_hor_r_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_hor_r_man_6))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_ver_man_6))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_ver_man_6)))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_hor_r_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_hor_r_man_7))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_ver_man_7))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_ver_man_7)))));
    this->__PVT__mac__DOT__multiplier_1_8_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_hor_r_man_8))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_hor_r_man_8))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_ver_man_8))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_ver_man_8)))));
    this->__PVT__mac__DOT__multiplier_1_9_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_hor_r_man_9))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_hor_r_man_9))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_ver_man_9))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_ver_man_9)))));
    this->__PVT__mac__DOT__multiplier_1_10_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_hor_r_man_10))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_hor_r_man_10))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_ver_man_10))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_ver_man_10)))));
    this->__PVT__mac__DOT__multiplier_1_11_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_hor_r_man_11))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_hor_r_man_11))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_ver_man_11))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_ver_man_11)))));
    this->__PVT__mac__DOT__multiplier_1_12_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_hor_r_man_12))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_hor_r_man_12))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_ver_man_12))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_ver_man_12)))));
    this->__PVT__mac__DOT__multiplier_1_13_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_hor_r_man_13))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_hor_r_man_13))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_ver_man_13))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_ver_man_13)))));
    this->__PVT__mac__DOT__multiplier_1_14_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_hor_r_man_14))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_hor_r_man_14))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_ver_man_14))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_ver_man_14)))));
    this->__PVT__mac__DOT__multiplier_1_15_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_hor_r_man_15))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_hor_r_man_15))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_ver_man_15))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_ver_man_15)))));
}

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_7__535(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_7__535\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_hor_r_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_hor_r_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_ver_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_ver_man_0)))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_hor_r_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_hor_r_man_1))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_ver_man_1))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_ver_man_1)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_hor_r_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_hor_r_man_2))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_ver_man_2))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_ver_man_2)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_hor_r_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_hor_r_man_3))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_ver_man_3))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_ver_man_3)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_hor_r_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_hor_r_man_4))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_ver_man_4))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_ver_man_4)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_hor_r_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_hor_r_man_5))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_ver_man_5))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_ver_man_5)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_hor_r_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_hor_r_man_6))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_ver_man_6))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_ver_man_6)))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_hor_r_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_hor_r_man_7))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_ver_man_7))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_ver_man_7)))));
    this->__PVT__mac__DOT__multiplier_1_8_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_hor_r_man_8))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_hor_r_man_8))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_ver_man_8))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_ver_man_8)))));
    this->__PVT__mac__DOT__multiplier_1_9_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_hor_r_man_9))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_hor_r_man_9))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_ver_man_9))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_ver_man_9)))));
    this->__PVT__mac__DOT__multiplier_1_10_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_hor_r_man_10))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_hor_r_man_10))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_ver_man_10))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_ver_man_10)))));
    this->__PVT__mac__DOT__multiplier_1_11_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_hor_r_man_11))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_hor_r_man_11))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_ver_man_11))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_ver_man_11)))));
    this->__PVT__mac__DOT__multiplier_1_12_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_hor_r_man_12))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_hor_r_man_12))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_ver_man_12))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_ver_man_12)))));
    this->__PVT__mac__DOT__multiplier_1_13_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_hor_r_man_13))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_hor_r_man_13))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_ver_man_13))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_ver_man_13)))));
    this->__PVT__mac__DOT__multiplier_1_14_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_hor_r_man_14))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_hor_r_man_14))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_ver_man_14))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_ver_man_14)))));
    this->__PVT__mac__DOT__multiplier_1_15_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_hor_r_man_15))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_hor_r_man_15))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_ver_man_15))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_ver_man_15)))));
}

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_8__536(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_8__536\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_8_io_in_hor_r_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_8_io_in_hor_r_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_8_io_in_ver_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_8_io_in_ver_man_0)))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_8_io_in_hor_r_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_8_io_in_hor_r_man_1))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_8_io_in_ver_man_1))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_8_io_in_ver_man_1)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_8_io_in_hor_r_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_8_io_in_hor_r_man_2))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_8_io_in_ver_man_2))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_8_io_in_ver_man_2)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_8_io_in_hor_r_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_8_io_in_hor_r_man_3))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_8_io_in_ver_man_3))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_8_io_in_ver_man_3)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_8_io_in_hor_r_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_8_io_in_hor_r_man_4))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_8_io_in_ver_man_4))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_8_io_in_ver_man_4)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_8_io_in_hor_r_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_8_io_in_hor_r_man_5))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_8_io_in_ver_man_5))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_8_io_in_ver_man_5)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_8_io_in_hor_r_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_8_io_in_hor_r_man_6))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_8_io_in_ver_man_6))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_8_io_in_ver_man_6)))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_8_io_in_hor_r_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_8_io_in_hor_r_man_7))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_8_io_in_ver_man_7))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_8_io_in_ver_man_7)))));
    this->__PVT__mac__DOT__multiplier_1_8_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_8_io_in_hor_r_man_8))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_8_io_in_hor_r_man_8))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_8_io_in_ver_man_8))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_8_io_in_ver_man_8)))));
    this->__PVT__mac__DOT__multiplier_1_9_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_8_io_in_hor_r_man_9))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_8_io_in_hor_r_man_9))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_8_io_in_ver_man_9))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_8_io_in_ver_man_9)))));
    this->__PVT__mac__DOT__multiplier_1_10_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_8_io_in_hor_r_man_10))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_8_io_in_hor_r_man_10))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_8_io_in_ver_man_10))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_8_io_in_ver_man_10)))));
    this->__PVT__mac__DOT__multiplier_1_11_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_8_io_in_hor_r_man_11))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_8_io_in_hor_r_man_11))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_8_io_in_ver_man_11))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_8_io_in_ver_man_11)))));
    this->__PVT__mac__DOT__multiplier_1_12_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_8_io_in_hor_r_man_12))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_8_io_in_hor_r_man_12))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_8_io_in_ver_man_12))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_8_io_in_ver_man_12)))));
    this->__PVT__mac__DOT__multiplier_1_13_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_8_io_in_hor_r_man_13))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_8_io_in_hor_r_man_13))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_8_io_in_ver_man_13))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_8_io_in_ver_man_13)))));
    this->__PVT__mac__DOT__multiplier_1_14_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_8_io_in_hor_r_man_14))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_8_io_in_hor_r_man_14))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_8_io_in_ver_man_14))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_8_io_in_ver_man_14)))));
    this->__PVT__mac__DOT__multiplier_1_15_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_8_io_in_hor_r_man_15))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_8_io_in_hor_r_man_15))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_8_io_in_ver_man_15))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_8_io_in_ver_man_15)))));
}

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_9__537(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_9__537\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_9_io_in_hor_r_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_9_io_in_hor_r_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_9_io_in_ver_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_9_io_in_ver_man_0)))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_9_io_in_hor_r_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_9_io_in_hor_r_man_1))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_9_io_in_ver_man_1))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_9_io_in_ver_man_1)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_9_io_in_hor_r_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_9_io_in_hor_r_man_2))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_9_io_in_ver_man_2))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_9_io_in_ver_man_2)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_9_io_in_hor_r_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_9_io_in_hor_r_man_3))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_9_io_in_ver_man_3))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_9_io_in_ver_man_3)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_9_io_in_hor_r_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_9_io_in_hor_r_man_4))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_9_io_in_ver_man_4))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_9_io_in_ver_man_4)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_9_io_in_hor_r_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_9_io_in_hor_r_man_5))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_9_io_in_ver_man_5))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_9_io_in_ver_man_5)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_9_io_in_hor_r_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_9_io_in_hor_r_man_6))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_9_io_in_ver_man_6))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_9_io_in_ver_man_6)))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_9_io_in_hor_r_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_9_io_in_hor_r_man_7))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_9_io_in_ver_man_7))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_9_io_in_ver_man_7)))));
    this->__PVT__mac__DOT__multiplier_1_8_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_9_io_in_hor_r_man_8))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_9_io_in_hor_r_man_8))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_9_io_in_ver_man_8))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_9_io_in_ver_man_8)))));
    this->__PVT__mac__DOT__multiplier_1_9_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_9_io_in_hor_r_man_9))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_9_io_in_hor_r_man_9))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_9_io_in_ver_man_9))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_9_io_in_ver_man_9)))));
    this->__PVT__mac__DOT__multiplier_1_10_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_9_io_in_hor_r_man_10))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_9_io_in_hor_r_man_10))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_9_io_in_ver_man_10))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_9_io_in_ver_man_10)))));
    this->__PVT__mac__DOT__multiplier_1_11_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_9_io_in_hor_r_man_11))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_9_io_in_hor_r_man_11))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_9_io_in_ver_man_11))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_9_io_in_ver_man_11)))));
    this->__PVT__mac__DOT__multiplier_1_12_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_9_io_in_hor_r_man_12))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_9_io_in_hor_r_man_12))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_9_io_in_ver_man_12))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_9_io_in_ver_man_12)))));
    this->__PVT__mac__DOT__multiplier_1_13_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_9_io_in_hor_r_man_13))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_9_io_in_hor_r_man_13))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_9_io_in_ver_man_13))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_9_io_in_ver_man_13)))));
    this->__PVT__mac__DOT__multiplier_1_14_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_9_io_in_hor_r_man_14))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_9_io_in_hor_r_man_14))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_9_io_in_ver_man_14))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_9_io_in_ver_man_14)))));
    this->__PVT__mac__DOT__multiplier_1_15_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_9_io_in_hor_r_man_15))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_9_io_in_hor_r_man_15))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_9_io_in_ver_man_15))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_9_io_in_ver_man_15)))));
}

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_10__538(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_10__538\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_10_io_in_hor_r_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_10_io_in_hor_r_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_10_io_in_ver_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_10_io_in_ver_man_0)))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_10_io_in_hor_r_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_10_io_in_hor_r_man_1))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_10_io_in_ver_man_1))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_10_io_in_ver_man_1)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_10_io_in_hor_r_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_10_io_in_hor_r_man_2))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_10_io_in_ver_man_2))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_10_io_in_ver_man_2)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_10_io_in_hor_r_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_10_io_in_hor_r_man_3))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_10_io_in_ver_man_3))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_10_io_in_ver_man_3)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_10_io_in_hor_r_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_10_io_in_hor_r_man_4))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_10_io_in_ver_man_4))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_10_io_in_ver_man_4)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_10_io_in_hor_r_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_10_io_in_hor_r_man_5))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_10_io_in_ver_man_5))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_10_io_in_ver_man_5)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_10_io_in_hor_r_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_10_io_in_hor_r_man_6))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_10_io_in_ver_man_6))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_10_io_in_ver_man_6)))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_10_io_in_hor_r_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_10_io_in_hor_r_man_7))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_10_io_in_ver_man_7))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_10_io_in_ver_man_7)))));
    this->__PVT__mac__DOT__multiplier_1_8_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_10_io_in_hor_r_man_8))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_10_io_in_hor_r_man_8))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_10_io_in_ver_man_8))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_10_io_in_ver_man_8)))));
    this->__PVT__mac__DOT__multiplier_1_9_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_10_io_in_hor_r_man_9))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_10_io_in_hor_r_man_9))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_10_io_in_ver_man_9))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_10_io_in_ver_man_9)))));
    this->__PVT__mac__DOT__multiplier_1_10_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_10_io_in_hor_r_man_10))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_10_io_in_hor_r_man_10))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_10_io_in_ver_man_10))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_10_io_in_ver_man_10)))));
    this->__PVT__mac__DOT__multiplier_1_11_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_10_io_in_hor_r_man_11))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_10_io_in_hor_r_man_11))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_10_io_in_ver_man_11))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_10_io_in_ver_man_11)))));
    this->__PVT__mac__DOT__multiplier_1_12_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_10_io_in_hor_r_man_12))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_10_io_in_hor_r_man_12))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_10_io_in_ver_man_12))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_10_io_in_ver_man_12)))));
    this->__PVT__mac__DOT__multiplier_1_13_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_10_io_in_hor_r_man_13))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_10_io_in_hor_r_man_13))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_10_io_in_ver_man_13))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_10_io_in_ver_man_13)))));
    this->__PVT__mac__DOT__multiplier_1_14_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_10_io_in_hor_r_man_14))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_10_io_in_hor_r_man_14))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_10_io_in_ver_man_14))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_10_io_in_ver_man_14)))));
    this->__PVT__mac__DOT__multiplier_1_15_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_10_io_in_hor_r_man_15))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_10_io_in_hor_r_man_15))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_10_io_in_ver_man_15))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_10_io_in_ver_man_15)))));
}

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_11__539(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_11__539\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_11_io_in_hor_r_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_11_io_in_hor_r_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_11_io_in_ver_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_11_io_in_ver_man_0)))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_11_io_in_hor_r_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_11_io_in_hor_r_man_1))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_11_io_in_ver_man_1))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_11_io_in_ver_man_1)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_11_io_in_hor_r_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_11_io_in_hor_r_man_2))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_11_io_in_ver_man_2))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_11_io_in_ver_man_2)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_11_io_in_hor_r_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_11_io_in_hor_r_man_3))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_11_io_in_ver_man_3))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_11_io_in_ver_man_3)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_11_io_in_hor_r_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_11_io_in_hor_r_man_4))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_11_io_in_ver_man_4))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_11_io_in_ver_man_4)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_11_io_in_hor_r_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_11_io_in_hor_r_man_5))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_11_io_in_ver_man_5))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_11_io_in_ver_man_5)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_11_io_in_hor_r_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_11_io_in_hor_r_man_6))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_11_io_in_ver_man_6))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_11_io_in_ver_man_6)))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_11_io_in_hor_r_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_11_io_in_hor_r_man_7))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_11_io_in_ver_man_7))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_11_io_in_ver_man_7)))));
    this->__PVT__mac__DOT__multiplier_1_8_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_11_io_in_hor_r_man_8))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_11_io_in_hor_r_man_8))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_11_io_in_ver_man_8))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_11_io_in_ver_man_8)))));
    this->__PVT__mac__DOT__multiplier_1_9_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_11_io_in_hor_r_man_9))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_11_io_in_hor_r_man_9))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_11_io_in_ver_man_9))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_11_io_in_ver_man_9)))));
    this->__PVT__mac__DOT__multiplier_1_10_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_11_io_in_hor_r_man_10))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_11_io_in_hor_r_man_10))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_11_io_in_ver_man_10))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_11_io_in_ver_man_10)))));
    this->__PVT__mac__DOT__multiplier_1_11_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_11_io_in_hor_r_man_11))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_11_io_in_hor_r_man_11))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_11_io_in_ver_man_11))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_11_io_in_ver_man_11)))));
    this->__PVT__mac__DOT__multiplier_1_12_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_11_io_in_hor_r_man_12))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_11_io_in_hor_r_man_12))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_11_io_in_ver_man_12))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_11_io_in_ver_man_12)))));
    this->__PVT__mac__DOT__multiplier_1_13_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_11_io_in_hor_r_man_13))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_11_io_in_hor_r_man_13))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_11_io_in_ver_man_13))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_11_io_in_ver_man_13)))));
    this->__PVT__mac__DOT__multiplier_1_14_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_11_io_in_hor_r_man_14))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_11_io_in_hor_r_man_14))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_11_io_in_ver_man_14))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_11_io_in_ver_man_14)))));
    this->__PVT__mac__DOT__multiplier_1_15_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_11_io_in_hor_r_man_15))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_11_io_in_hor_r_man_15))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_11_io_in_ver_man_15))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_11_io_in_ver_man_15)))));
}

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_12__540(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_12__540\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_12_io_in_hor_r_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_12_io_in_hor_r_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_12_io_in_ver_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_12_io_in_ver_man_0)))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_12_io_in_hor_r_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_12_io_in_hor_r_man_1))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_12_io_in_ver_man_1))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_12_io_in_ver_man_1)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_12_io_in_hor_r_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_12_io_in_hor_r_man_2))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_12_io_in_ver_man_2))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_12_io_in_ver_man_2)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_12_io_in_hor_r_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_12_io_in_hor_r_man_3))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_12_io_in_ver_man_3))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_12_io_in_ver_man_3)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_12_io_in_hor_r_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_12_io_in_hor_r_man_4))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_12_io_in_ver_man_4))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_12_io_in_ver_man_4)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_12_io_in_hor_r_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_12_io_in_hor_r_man_5))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_12_io_in_ver_man_5))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_12_io_in_ver_man_5)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_12_io_in_hor_r_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_12_io_in_hor_r_man_6))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_12_io_in_ver_man_6))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_12_io_in_ver_man_6)))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_12_io_in_hor_r_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_12_io_in_hor_r_man_7))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_12_io_in_ver_man_7))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_12_io_in_ver_man_7)))));
    this->__PVT__mac__DOT__multiplier_1_8_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_12_io_in_hor_r_man_8))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_12_io_in_hor_r_man_8))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_12_io_in_ver_man_8))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_12_io_in_ver_man_8)))));
    this->__PVT__mac__DOT__multiplier_1_9_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_12_io_in_hor_r_man_9))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_12_io_in_hor_r_man_9))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_12_io_in_ver_man_9))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_12_io_in_ver_man_9)))));
    this->__PVT__mac__DOT__multiplier_1_10_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_12_io_in_hor_r_man_10))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_12_io_in_hor_r_man_10))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_12_io_in_ver_man_10))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_12_io_in_ver_man_10)))));
    this->__PVT__mac__DOT__multiplier_1_11_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_12_io_in_hor_r_man_11))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_12_io_in_hor_r_man_11))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_12_io_in_ver_man_11))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_12_io_in_ver_man_11)))));
    this->__PVT__mac__DOT__multiplier_1_12_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_12_io_in_hor_r_man_12))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_12_io_in_hor_r_man_12))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_12_io_in_ver_man_12))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_12_io_in_ver_man_12)))));
    this->__PVT__mac__DOT__multiplier_1_13_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_12_io_in_hor_r_man_13))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_12_io_in_hor_r_man_13))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_12_io_in_ver_man_13))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_12_io_in_ver_man_13)))));
    this->__PVT__mac__DOT__multiplier_1_14_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_12_io_in_hor_r_man_14))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_12_io_in_hor_r_man_14))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_12_io_in_ver_man_14))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_12_io_in_ver_man_14)))));
    this->__PVT__mac__DOT__multiplier_1_15_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_12_io_in_hor_r_man_15))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_12_io_in_hor_r_man_15))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_12_io_in_ver_man_15))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_12_io_in_ver_man_15)))));
}

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_13__541(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_13__541\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_13_io_in_hor_r_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_13_io_in_hor_r_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_13_io_in_ver_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_13_io_in_ver_man_0)))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_13_io_in_hor_r_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_13_io_in_hor_r_man_1))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_13_io_in_ver_man_1))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_13_io_in_ver_man_1)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_13_io_in_hor_r_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_13_io_in_hor_r_man_2))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_13_io_in_ver_man_2))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_13_io_in_ver_man_2)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_13_io_in_hor_r_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_13_io_in_hor_r_man_3))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_13_io_in_ver_man_3))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_13_io_in_ver_man_3)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_13_io_in_hor_r_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_13_io_in_hor_r_man_4))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_13_io_in_ver_man_4))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_13_io_in_ver_man_4)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_13_io_in_hor_r_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_13_io_in_hor_r_man_5))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_13_io_in_ver_man_5))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_13_io_in_ver_man_5)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_13_io_in_hor_r_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_13_io_in_hor_r_man_6))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_13_io_in_ver_man_6))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_13_io_in_ver_man_6)))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_13_io_in_hor_r_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_13_io_in_hor_r_man_7))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_13_io_in_ver_man_7))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_13_io_in_ver_man_7)))));
    this->__PVT__mac__DOT__multiplier_1_8_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_13_io_in_hor_r_man_8))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_13_io_in_hor_r_man_8))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_13_io_in_ver_man_8))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_13_io_in_ver_man_8)))));
    this->__PVT__mac__DOT__multiplier_1_9_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_13_io_in_hor_r_man_9))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_13_io_in_hor_r_man_9))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_13_io_in_ver_man_9))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_13_io_in_ver_man_9)))));
    this->__PVT__mac__DOT__multiplier_1_10_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_13_io_in_hor_r_man_10))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_13_io_in_hor_r_man_10))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_13_io_in_ver_man_10))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_13_io_in_ver_man_10)))));
    this->__PVT__mac__DOT__multiplier_1_11_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_13_io_in_hor_r_man_11))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_13_io_in_hor_r_man_11))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_13_io_in_ver_man_11))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_13_io_in_ver_man_11)))));
    this->__PVT__mac__DOT__multiplier_1_12_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_13_io_in_hor_r_man_12))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_13_io_in_hor_r_man_12))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_13_io_in_ver_man_12))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_13_io_in_ver_man_12)))));
    this->__PVT__mac__DOT__multiplier_1_13_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_13_io_in_hor_r_man_13))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_13_io_in_hor_r_man_13))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_13_io_in_ver_man_13))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_13_io_in_ver_man_13)))));
    this->__PVT__mac__DOT__multiplier_1_14_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_13_io_in_hor_r_man_14))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_13_io_in_hor_r_man_14))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_13_io_in_ver_man_14))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_13_io_in_ver_man_14)))));
    this->__PVT__mac__DOT__multiplier_1_15_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_13_io_in_hor_r_man_15))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_13_io_in_hor_r_man_15))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_13_io_in_ver_man_15))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_13_io_in_ver_man_15)))));
}

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_14__542(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_14__542\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_14_io_in_hor_r_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_14_io_in_hor_r_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_14_io_in_ver_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_14_io_in_ver_man_0)))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_14_io_in_hor_r_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_14_io_in_hor_r_man_1))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_14_io_in_ver_man_1))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_14_io_in_ver_man_1)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_14_io_in_hor_r_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_14_io_in_hor_r_man_2))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_14_io_in_ver_man_2))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_14_io_in_ver_man_2)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_14_io_in_hor_r_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_14_io_in_hor_r_man_3))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_14_io_in_ver_man_3))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_14_io_in_ver_man_3)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_14_io_in_hor_r_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_14_io_in_hor_r_man_4))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_14_io_in_ver_man_4))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_14_io_in_ver_man_4)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_14_io_in_hor_r_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_14_io_in_hor_r_man_5))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_14_io_in_ver_man_5))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_14_io_in_ver_man_5)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_14_io_in_hor_r_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_14_io_in_hor_r_man_6))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_14_io_in_ver_man_6))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_14_io_in_ver_man_6)))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_14_io_in_hor_r_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_14_io_in_hor_r_man_7))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_14_io_in_ver_man_7))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_14_io_in_ver_man_7)))));
    this->__PVT__mac__DOT__multiplier_1_8_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_14_io_in_hor_r_man_8))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_14_io_in_hor_r_man_8))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_14_io_in_ver_man_8))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_14_io_in_ver_man_8)))));
    this->__PVT__mac__DOT__multiplier_1_9_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_14_io_in_hor_r_man_9))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_14_io_in_hor_r_man_9))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_14_io_in_ver_man_9))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_14_io_in_ver_man_9)))));
    this->__PVT__mac__DOT__multiplier_1_10_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_14_io_in_hor_r_man_10))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_14_io_in_hor_r_man_10))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_14_io_in_ver_man_10))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_14_io_in_ver_man_10)))));
    this->__PVT__mac__DOT__multiplier_1_11_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_14_io_in_hor_r_man_11))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_14_io_in_hor_r_man_11))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_14_io_in_ver_man_11))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_14_io_in_ver_man_11)))));
    this->__PVT__mac__DOT__multiplier_1_12_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_14_io_in_hor_r_man_12))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_14_io_in_hor_r_man_12))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_14_io_in_ver_man_12))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_14_io_in_ver_man_12)))));
    this->__PVT__mac__DOT__multiplier_1_13_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_14_io_in_hor_r_man_13))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_14_io_in_hor_r_man_13))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_14_io_in_ver_man_13))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_14_io_in_ver_man_13)))));
    this->__PVT__mac__DOT__multiplier_1_14_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_14_io_in_hor_r_man_14))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_14_io_in_hor_r_man_14))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_14_io_in_ver_man_14))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_14_io_in_ver_man_14)))));
    this->__PVT__mac__DOT__multiplier_1_15_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_14_io_in_hor_r_man_15))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_14_io_in_hor_r_man_15))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_14_io_in_ver_man_15))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_14_io_in_ver_man_15)))));
}

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_15__543(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_15__543\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_hor_r_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_hor_r_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_ver_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_ver_man_0)))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_hor_r_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_hor_r_man_1))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_ver_man_1))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_ver_man_1)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_hor_r_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_hor_r_man_2))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_ver_man_2))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_ver_man_2)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_hor_r_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_hor_r_man_3))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_ver_man_3))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_ver_man_3)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_hor_r_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_hor_r_man_4))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_ver_man_4))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_ver_man_4)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_hor_r_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_hor_r_man_5))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_ver_man_5))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_ver_man_5)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_hor_r_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_hor_r_man_6))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_ver_man_6))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_ver_man_6)))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_hor_r_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_hor_r_man_7))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_ver_man_7))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_ver_man_7)))));
    this->__PVT__mac__DOT__multiplier_1_8_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_hor_r_man_8))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_hor_r_man_8))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_ver_man_8))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_ver_man_8)))));
    this->__PVT__mac__DOT__multiplier_1_9_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_hor_r_man_9))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_hor_r_man_9))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_ver_man_9))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_ver_man_9)))));
    this->__PVT__mac__DOT__multiplier_1_10_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_hor_r_man_10))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_hor_r_man_10))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_ver_man_10))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_ver_man_10)))));
    this->__PVT__mac__DOT__multiplier_1_11_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_hor_r_man_11))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_hor_r_man_11))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_ver_man_11))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_ver_man_11)))));
    this->__PVT__mac__DOT__multiplier_1_12_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_hor_r_man_12))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_hor_r_man_12))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_ver_man_12))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_ver_man_12)))));
    this->__PVT__mac__DOT__multiplier_1_13_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_hor_r_man_13))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_hor_r_man_13))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_ver_man_13))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_ver_man_13)))));
    this->__PVT__mac__DOT__multiplier_1_14_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_hor_r_man_14))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_hor_r_man_14))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_ver_man_14))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_ver_man_14)))));
    this->__PVT__mac__DOT__multiplier_1_15_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_hor_r_man_15))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_hor_r_man_15))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_ver_man_15))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_ver_man_15)))));
}

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_0__513(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_0__513\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_0)))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_1))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_1))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_1)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_2))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_2))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_2)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_3))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_3))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_3)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_4))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_4))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_4)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_5))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_5))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_5)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_6))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_6))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_6)))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_7))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_7))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_7)))));
    this->__PVT__mac__DOT__multiplier_1_8_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_8))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_8))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_8))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_8)))));
    this->__PVT__mac__DOT__multiplier_1_9_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_9))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_9))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_9))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_9)))));
    this->__PVT__mac__DOT__multiplier_1_10_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_10))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_10))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_10))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_10)))));
    this->__PVT__mac__DOT__multiplier_1_11_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_11))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_11))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_11))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_11)))));
    this->__PVT__mac__DOT__multiplier_1_12_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_12))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_12))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_12))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_12)))));
    this->__PVT__mac__DOT__multiplier_1_13_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_13))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_13))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_13))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_13)))));
    this->__PVT__mac__DOT__multiplier_1_14_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_14))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_14))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_14))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_14)))));
    this->__PVT__mac__DOT__multiplier_1_15_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_15))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_15))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_15))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_15)))));
}

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1__274(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1__274\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT___sum_T_9 = (0x1ffffU & (
                                                   VL_EXTENDS_II(17,16, 
                                                                 (0xffffU 
                                                                  & (VL_EXTENDS_II(16,15, 
                                                                                (0x7fffU 
                                                                                & (VL_EXTENDS_II(15,14, 
                                                                                (0x3fffU 
                                                                                & (VL_EXTENDS_II(14,13, 
                                                                                (0x1fffU 
                                                                                & (VL_EXTENDS_II(13,12, 
                                                                                (0xfffU 
                                                                                & (VL_EXTENDS_II(12,11, 
                                                                                (0x7ffU 
                                                                                & (VL_EXTENDS_II(11,10, 
                                                                                (0x3ffU 
                                                                                & (VL_EXTENDS_II(10,9, 
                                                                                (0x1ffU 
                                                                                & (VL_EXTENDS_II(9,8, 
                                                                                (0xffU 
                                                                                & (VL_EXTENDS_II(8,7, (IData)(this->__PVT__mac__DOT__two_complement_buffer_0)) 
                                                                                + 
                                                                                VL_EXTENDS_II(8,7, (IData)(this->__PVT__mac__DOT__two_complement_buffer_1))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(9,8, 
                                                                                ((0x80U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_2) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_2)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(10,9, 
                                                                                ((0x180U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_3) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_3)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(11,10, 
                                                                                ((0x380U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_4) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_4)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(12,11, 
                                                                                ((0x780U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_5) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_5)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(13,12, 
                                                                                ((0xf80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_6) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_6)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(14,13, 
                                                                                ((0x1f80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_7) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_7)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(15,14, 
                                                                                ((0x3f80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_8) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_8)))))) 
                                                                     + 
                                                                     VL_EXTENDS_II(16,15, 
                                                                                ((0x7f80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_9) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_9)))))) 
                                                   + 
                                                   VL_EXTENDS_II(17,16, 
                                                                 ((0xff80U 
                                                                   & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_10) 
                                                                                >> 6U)))) 
                                                                      << 7U)) 
                                                                  | (IData)(this->__PVT__mac__DOT__two_complement_buffer_10)))));
    this->__PVT__mac_io_out_result_man = (0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(this->__PVT__mac__DOT__acc_hbfp)
                                                    : 
                                                   ((0xfU 
                                                     < 
                                                     (0x3fU 
                                                      & (IData)(this->__PVT__mac__DOT__acc_hbfp)))
                                                     ? 0xfU
                                                     : (IData)(this->__PVT__mac__DOT__acc_hbfp))));
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_0)))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_1))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_1))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_1)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_2))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_2))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_2)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_3))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_3))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_3)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_4))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_4))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_4)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_5))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_5))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_5)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_6))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_6))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_6)))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_7))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_7))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_7)))));
    this->__PVT__mac__DOT__multiplier_1_8_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_8))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_8))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_8))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_8)))));
    this->__PVT__mac__DOT__multiplier_1_9_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_9))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_9))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_9))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_9)))));
    this->__PVT__mac__DOT__multiplier_1_10_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_10))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_10))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_10))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_10)))));
    this->__PVT__mac__DOT__multiplier_1_11_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_11))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_11))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_11))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_11)))));
    this->__PVT__mac__DOT__multiplier_1_12_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_12))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_12))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_12))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_12)))));
    this->__PVT__mac__DOT__multiplier_1_13_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_13))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_13))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_13))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_13)))));
    this->__PVT__mac__DOT__multiplier_1_14_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_14))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_14))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_14))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_14)))));
    this->__PVT__mac__DOT__multiplier_1_15_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_15))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_15))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_15))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_15)))));
    this->__PVT__mac__DOT__sum = (0x3fffffU & (VL_EXTENDS_II(22,21, 
                                                             (0x1fffffU 
                                                              & (VL_EXTENDS_II(21,20, 
                                                                               (0xfffffU 
                                                                                & (VL_EXTENDS_II(20,19, 
                                                                                (0x7ffffU 
                                                                                & (VL_EXTENDS_II(19,18, 
                                                                                (0x3ffffU 
                                                                                & (VL_EXTENDS_II(18,17, this->__PVT__mac__DOT___sum_T_9) 
                                                                                + 
                                                                                VL_EXTENDS_II(18,17, 
                                                                                ((0x1ff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_11) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_11)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(19,18, 
                                                                                ((0x3ff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_12) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_12)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(20,19, 
                                                                                ((0x7ff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_13) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_13)))))) 
                                                                 + 
                                                                 VL_EXTENDS_II(21,20, 
                                                                               ((0xfff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_14) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_14)))))) 
                                               + VL_EXTENDS_II(22,21, 
                                                               ((0x1fff80U 
                                                                 & ((- (IData)(
                                                                               (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_15) 
                                                                                >> 6U)))) 
                                                                    << 7U)) 
                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_15)))));
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
    if ((5U >= (IData)(this->__PVT__adder__DOT__exp_diff))) {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 
            = (0x3fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
        this->__PVT__adder__DOT___io_out_result_sign_T_4 
            = (0x3fU & ((IData)(this->__PVT__mac_io_out_result_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
    } else {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__adder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__adder__DOT___io_out_result_sign_T_3 
        = (1U & (((IData)(this->__PVT__mac_io_out_result_man) 
                  > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                  ? ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                     >> 6U) : (IData)(this->__PVT__result_buffer_sign)));
    this->__PVT__adder__DOT___io_out_result_sign_T_6 
        = (1U & (((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                  > (IData)(this->__PVT__result_buffer_man))
                  ? ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                     >> 6U) : (IData)(this->__PVT__result_buffer_sign)));
    this->__PVT__adder__DOT__addition = (0x7fU & ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                                   ? 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 6U)) 
                                                    == (IData)(this->__PVT__result_buffer_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__mac_io_out_result_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                    : 
                                                   (0x3fU 
                                                    & (((IData)(this->__PVT__mac_io_out_result_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        ? 
                                                       ((IData)(this->__PVT__mac_io_out_result_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1) 
                                                        - (IData)(this->__PVT__mac_io_out_result_man)))))
                                                   : 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 6U)) 
                                                    == (IData)(this->__PVT__result_buffer_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__result_buffer_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                    : 
                                                   (0x3fU 
                                                    & (((IData)(this->__PVT__result_buffer_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        ? 
                                                       ((IData)(this->__PVT__result_buffer_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                        - (IData)(this->__PVT__result_buffer_man)))))));
}

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2__275(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2__275\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT___sum_T_9 = (0x1ffffU & (
                                                   VL_EXTENDS_II(17,16, 
                                                                 (0xffffU 
                                                                  & (VL_EXTENDS_II(16,15, 
                                                                                (0x7fffU 
                                                                                & (VL_EXTENDS_II(15,14, 
                                                                                (0x3fffU 
                                                                                & (VL_EXTENDS_II(14,13, 
                                                                                (0x1fffU 
                                                                                & (VL_EXTENDS_II(13,12, 
                                                                                (0xfffU 
                                                                                & (VL_EXTENDS_II(12,11, 
                                                                                (0x7ffU 
                                                                                & (VL_EXTENDS_II(11,10, 
                                                                                (0x3ffU 
                                                                                & (VL_EXTENDS_II(10,9, 
                                                                                (0x1ffU 
                                                                                & (VL_EXTENDS_II(9,8, 
                                                                                (0xffU 
                                                                                & (VL_EXTENDS_II(8,7, (IData)(this->__PVT__mac__DOT__two_complement_buffer_0)) 
                                                                                + 
                                                                                VL_EXTENDS_II(8,7, (IData)(this->__PVT__mac__DOT__two_complement_buffer_1))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(9,8, 
                                                                                ((0x80U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_2) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_2)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(10,9, 
                                                                                ((0x180U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_3) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_3)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(11,10, 
                                                                                ((0x380U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_4) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_4)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(12,11, 
                                                                                ((0x780U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_5) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_5)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(13,12, 
                                                                                ((0xf80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_6) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_6)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(14,13, 
                                                                                ((0x1f80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_7) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_7)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(15,14, 
                                                                                ((0x3f80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_8) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_8)))))) 
                                                                     + 
                                                                     VL_EXTENDS_II(16,15, 
                                                                                ((0x7f80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_9) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_9)))))) 
                                                   + 
                                                   VL_EXTENDS_II(17,16, 
                                                                 ((0xff80U 
                                                                   & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_10) 
                                                                                >> 6U)))) 
                                                                      << 7U)) 
                                                                  | (IData)(this->__PVT__mac__DOT__two_complement_buffer_10)))));
    this->__PVT__mac_io_out_result_man = (0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(this->__PVT__mac__DOT__acc_hbfp)
                                                    : 
                                                   ((0xfU 
                                                     < 
                                                     (0x3fU 
                                                      & (IData)(this->__PVT__mac__DOT__acc_hbfp)))
                                                     ? 0xfU
                                                     : (IData)(this->__PVT__mac__DOT__acc_hbfp))));
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_0)))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_1))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_1))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_1)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_2))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_2))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_2)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_3))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_3))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_3)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_4))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_4))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_4)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_5))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_5))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_5)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_6))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_6))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_6)))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_7))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_7))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_7)))));
    this->__PVT__mac__DOT__multiplier_1_8_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_8))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_8))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_8))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_8)))));
    this->__PVT__mac__DOT__multiplier_1_9_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_9))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_9))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_9))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_9)))));
    this->__PVT__mac__DOT__multiplier_1_10_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_10))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_10))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_10))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_10)))));
    this->__PVT__mac__DOT__multiplier_1_11_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_11))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_11))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_11))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_11)))));
    this->__PVT__mac__DOT__multiplier_1_12_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_12))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_12))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_12))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_12)))));
    this->__PVT__mac__DOT__multiplier_1_13_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_13))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_13))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_13))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_13)))));
    this->__PVT__mac__DOT__multiplier_1_14_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_14))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_14))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_14))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_14)))));
    this->__PVT__mac__DOT__multiplier_1_15_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_15))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_15))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_15))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_15)))));
    this->__PVT__mac__DOT__sum = (0x3fffffU & (VL_EXTENDS_II(22,21, 
                                                             (0x1fffffU 
                                                              & (VL_EXTENDS_II(21,20, 
                                                                               (0xfffffU 
                                                                                & (VL_EXTENDS_II(20,19, 
                                                                                (0x7ffffU 
                                                                                & (VL_EXTENDS_II(19,18, 
                                                                                (0x3ffffU 
                                                                                & (VL_EXTENDS_II(18,17, this->__PVT__mac__DOT___sum_T_9) 
                                                                                + 
                                                                                VL_EXTENDS_II(18,17, 
                                                                                ((0x1ff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_11) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_11)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(19,18, 
                                                                                ((0x3ff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_12) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_12)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(20,19, 
                                                                                ((0x7ff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_13) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_13)))))) 
                                                                 + 
                                                                 VL_EXTENDS_II(21,20, 
                                                                               ((0xfff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_14) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_14)))))) 
                                               + VL_EXTENDS_II(22,21, 
                                                               ((0x1fff80U 
                                                                 & ((- (IData)(
                                                                               (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_15) 
                                                                                >> 6U)))) 
                                                                    << 7U)) 
                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_15)))));
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
    if ((5U >= (IData)(this->__PVT__adder__DOT__exp_diff))) {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 
            = (0x3fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
        this->__PVT__adder__DOT___io_out_result_sign_T_4 
            = (0x3fU & ((IData)(this->__PVT__mac_io_out_result_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
    } else {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__adder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__adder__DOT___io_out_result_sign_T_3 
        = (1U & (((IData)(this->__PVT__mac_io_out_result_man) 
                  > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                  ? ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                     >> 6U) : (IData)(this->__PVT__result_buffer_sign)));
    this->__PVT__adder__DOT___io_out_result_sign_T_6 
        = (1U & (((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                  > (IData)(this->__PVT__result_buffer_man))
                  ? ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                     >> 6U) : (IData)(this->__PVT__result_buffer_sign)));
    this->__PVT__adder__DOT__addition = (0x7fU & ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                                   ? 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 6U)) 
                                                    == (IData)(this->__PVT__result_buffer_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__mac_io_out_result_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                    : 
                                                   (0x3fU 
                                                    & (((IData)(this->__PVT__mac_io_out_result_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        ? 
                                                       ((IData)(this->__PVT__mac_io_out_result_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1) 
                                                        - (IData)(this->__PVT__mac_io_out_result_man)))))
                                                   : 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 6U)) 
                                                    == (IData)(this->__PVT__result_buffer_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__result_buffer_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                    : 
                                                   (0x3fU 
                                                    & (((IData)(this->__PVT__result_buffer_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        ? 
                                                       ((IData)(this->__PVT__result_buffer_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                        - (IData)(this->__PVT__result_buffer_man)))))));
}

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3__276(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3__276\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT___sum_T_9 = (0x1ffffU & (
                                                   VL_EXTENDS_II(17,16, 
                                                                 (0xffffU 
                                                                  & (VL_EXTENDS_II(16,15, 
                                                                                (0x7fffU 
                                                                                & (VL_EXTENDS_II(15,14, 
                                                                                (0x3fffU 
                                                                                & (VL_EXTENDS_II(14,13, 
                                                                                (0x1fffU 
                                                                                & (VL_EXTENDS_II(13,12, 
                                                                                (0xfffU 
                                                                                & (VL_EXTENDS_II(12,11, 
                                                                                (0x7ffU 
                                                                                & (VL_EXTENDS_II(11,10, 
                                                                                (0x3ffU 
                                                                                & (VL_EXTENDS_II(10,9, 
                                                                                (0x1ffU 
                                                                                & (VL_EXTENDS_II(9,8, 
                                                                                (0xffU 
                                                                                & (VL_EXTENDS_II(8,7, (IData)(this->__PVT__mac__DOT__two_complement_buffer_0)) 
                                                                                + 
                                                                                VL_EXTENDS_II(8,7, (IData)(this->__PVT__mac__DOT__two_complement_buffer_1))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(9,8, 
                                                                                ((0x80U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_2) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_2)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(10,9, 
                                                                                ((0x180U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_3) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_3)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(11,10, 
                                                                                ((0x380U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_4) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_4)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(12,11, 
                                                                                ((0x780U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_5) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_5)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(13,12, 
                                                                                ((0xf80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_6) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_6)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(14,13, 
                                                                                ((0x1f80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_7) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_7)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(15,14, 
                                                                                ((0x3f80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_8) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_8)))))) 
                                                                     + 
                                                                     VL_EXTENDS_II(16,15, 
                                                                                ((0x7f80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_9) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_9)))))) 
                                                   + 
                                                   VL_EXTENDS_II(17,16, 
                                                                 ((0xff80U 
                                                                   & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_10) 
                                                                                >> 6U)))) 
                                                                      << 7U)) 
                                                                  | (IData)(this->__PVT__mac__DOT__two_complement_buffer_10)))));
    this->__PVT__mac_io_out_result_man = (0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(this->__PVT__mac__DOT__acc_hbfp)
                                                    : 
                                                   ((0xfU 
                                                     < 
                                                     (0x3fU 
                                                      & (IData)(this->__PVT__mac__DOT__acc_hbfp)))
                                                     ? 0xfU
                                                     : (IData)(this->__PVT__mac__DOT__acc_hbfp))));
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_0)))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_1))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_1))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_1)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_2))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_2))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_2)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_3))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_3))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_3)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_4))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_4))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_4)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_5))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_5))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_5)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_6))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_6))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_6)))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_7))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_7))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_7)))));
    this->__PVT__mac__DOT__multiplier_1_8_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_8))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_8))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_8))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_8)))));
    this->__PVT__mac__DOT__multiplier_1_9_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_9))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_9))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_9))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_9)))));
    this->__PVT__mac__DOT__multiplier_1_10_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_10))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_10))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_10))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_10)))));
    this->__PVT__mac__DOT__multiplier_1_11_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_11))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_11))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_11))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_11)))));
    this->__PVT__mac__DOT__multiplier_1_12_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_12))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_12))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_12))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_12)))));
    this->__PVT__mac__DOT__multiplier_1_13_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_13))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_13))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_13))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_13)))));
    this->__PVT__mac__DOT__multiplier_1_14_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_14))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_14))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_14))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_14)))));
    this->__PVT__mac__DOT__multiplier_1_15_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_15))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_15))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_15))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_15)))));
    this->__PVT__mac__DOT__sum = (0x3fffffU & (VL_EXTENDS_II(22,21, 
                                                             (0x1fffffU 
                                                              & (VL_EXTENDS_II(21,20, 
                                                                               (0xfffffU 
                                                                                & (VL_EXTENDS_II(20,19, 
                                                                                (0x7ffffU 
                                                                                & (VL_EXTENDS_II(19,18, 
                                                                                (0x3ffffU 
                                                                                & (VL_EXTENDS_II(18,17, this->__PVT__mac__DOT___sum_T_9) 
                                                                                + 
                                                                                VL_EXTENDS_II(18,17, 
                                                                                ((0x1ff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_11) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_11)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(19,18, 
                                                                                ((0x3ff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_12) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_12)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(20,19, 
                                                                                ((0x7ff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_13) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_13)))))) 
                                                                 + 
                                                                 VL_EXTENDS_II(21,20, 
                                                                               ((0xfff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_14) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_14)))))) 
                                               + VL_EXTENDS_II(22,21, 
                                                               ((0x1fff80U 
                                                                 & ((- (IData)(
                                                                               (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_15) 
                                                                                >> 6U)))) 
                                                                    << 7U)) 
                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_15)))));
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
    if ((5U >= (IData)(this->__PVT__adder__DOT__exp_diff))) {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 
            = (0x3fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
        this->__PVT__adder__DOT___io_out_result_sign_T_4 
            = (0x3fU & ((IData)(this->__PVT__mac_io_out_result_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
    } else {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__adder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__adder__DOT___io_out_result_sign_T_3 
        = (1U & (((IData)(this->__PVT__mac_io_out_result_man) 
                  > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                  ? ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                     >> 6U) : (IData)(this->__PVT__result_buffer_sign)));
    this->__PVT__adder__DOT___io_out_result_sign_T_6 
        = (1U & (((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                  > (IData)(this->__PVT__result_buffer_man))
                  ? ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                     >> 6U) : (IData)(this->__PVT__result_buffer_sign)));
    this->__PVT__adder__DOT__addition = (0x7fU & ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                                   ? 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 6U)) 
                                                    == (IData)(this->__PVT__result_buffer_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__mac_io_out_result_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                    : 
                                                   (0x3fU 
                                                    & (((IData)(this->__PVT__mac_io_out_result_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        ? 
                                                       ((IData)(this->__PVT__mac_io_out_result_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1) 
                                                        - (IData)(this->__PVT__mac_io_out_result_man)))))
                                                   : 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 6U)) 
                                                    == (IData)(this->__PVT__result_buffer_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__result_buffer_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                    : 
                                                   (0x3fU 
                                                    & (((IData)(this->__PVT__result_buffer_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        ? 
                                                       ((IData)(this->__PVT__result_buffer_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                        - (IData)(this->__PVT__result_buffer_man)))))));
}

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_4__277(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_4__277\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT___sum_T_9 = (0x1ffffU & (
                                                   VL_EXTENDS_II(17,16, 
                                                                 (0xffffU 
                                                                  & (VL_EXTENDS_II(16,15, 
                                                                                (0x7fffU 
                                                                                & (VL_EXTENDS_II(15,14, 
                                                                                (0x3fffU 
                                                                                & (VL_EXTENDS_II(14,13, 
                                                                                (0x1fffU 
                                                                                & (VL_EXTENDS_II(13,12, 
                                                                                (0xfffU 
                                                                                & (VL_EXTENDS_II(12,11, 
                                                                                (0x7ffU 
                                                                                & (VL_EXTENDS_II(11,10, 
                                                                                (0x3ffU 
                                                                                & (VL_EXTENDS_II(10,9, 
                                                                                (0x1ffU 
                                                                                & (VL_EXTENDS_II(9,8, 
                                                                                (0xffU 
                                                                                & (VL_EXTENDS_II(8,7, (IData)(this->__PVT__mac__DOT__two_complement_buffer_0)) 
                                                                                + 
                                                                                VL_EXTENDS_II(8,7, (IData)(this->__PVT__mac__DOT__two_complement_buffer_1))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(9,8, 
                                                                                ((0x80U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_2) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_2)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(10,9, 
                                                                                ((0x180U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_3) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_3)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(11,10, 
                                                                                ((0x380U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_4) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_4)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(12,11, 
                                                                                ((0x780U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_5) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_5)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(13,12, 
                                                                                ((0xf80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_6) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_6)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(14,13, 
                                                                                ((0x1f80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_7) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_7)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(15,14, 
                                                                                ((0x3f80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_8) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_8)))))) 
                                                                     + 
                                                                     VL_EXTENDS_II(16,15, 
                                                                                ((0x7f80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_9) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_9)))))) 
                                                   + 
                                                   VL_EXTENDS_II(17,16, 
                                                                 ((0xff80U 
                                                                   & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_10) 
                                                                                >> 6U)))) 
                                                                      << 7U)) 
                                                                  | (IData)(this->__PVT__mac__DOT__two_complement_buffer_10)))));
    this->__PVT__mac_io_out_result_man = (0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(this->__PVT__mac__DOT__acc_hbfp)
                                                    : 
                                                   ((0xfU 
                                                     < 
                                                     (0x3fU 
                                                      & (IData)(this->__PVT__mac__DOT__acc_hbfp)))
                                                     ? 0xfU
                                                     : (IData)(this->__PVT__mac__DOT__acc_hbfp))));
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_0)))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_1))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_1))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_1)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_2))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_2))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_2)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_3))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_3))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_3)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_4))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_4))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_4)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_5))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_5))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_5)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_6))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_6))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_6)))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_7))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_7))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_7)))));
    this->__PVT__mac__DOT__multiplier_1_8_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_8))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_8))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_8))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_8)))));
    this->__PVT__mac__DOT__multiplier_1_9_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_9))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_9))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_9))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_9)))));
    this->__PVT__mac__DOT__multiplier_1_10_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_10))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_10))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_10))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_10)))));
    this->__PVT__mac__DOT__multiplier_1_11_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_11))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_11))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_11))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_11)))));
    this->__PVT__mac__DOT__multiplier_1_12_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_12))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_12))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_12))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_12)))));
    this->__PVT__mac__DOT__multiplier_1_13_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_13))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_13))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_13))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_13)))));
    this->__PVT__mac__DOT__multiplier_1_14_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_14))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_14))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_14))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_14)))));
    this->__PVT__mac__DOT__multiplier_1_15_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_15))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_15))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_15))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_15)))));
    this->__PVT__mac__DOT__sum = (0x3fffffU & (VL_EXTENDS_II(22,21, 
                                                             (0x1fffffU 
                                                              & (VL_EXTENDS_II(21,20, 
                                                                               (0xfffffU 
                                                                                & (VL_EXTENDS_II(20,19, 
                                                                                (0x7ffffU 
                                                                                & (VL_EXTENDS_II(19,18, 
                                                                                (0x3ffffU 
                                                                                & (VL_EXTENDS_II(18,17, this->__PVT__mac__DOT___sum_T_9) 
                                                                                + 
                                                                                VL_EXTENDS_II(18,17, 
                                                                                ((0x1ff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_11) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_11)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(19,18, 
                                                                                ((0x3ff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_12) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_12)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(20,19, 
                                                                                ((0x7ff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_13) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_13)))))) 
                                                                 + 
                                                                 VL_EXTENDS_II(21,20, 
                                                                               ((0xfff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_14) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_14)))))) 
                                               + VL_EXTENDS_II(22,21, 
                                                               ((0x1fff80U 
                                                                 & ((- (IData)(
                                                                               (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_15) 
                                                                                >> 6U)))) 
                                                                    << 7U)) 
                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_15)))));
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
    if ((5U >= (IData)(this->__PVT__adder__DOT__exp_diff))) {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 
            = (0x3fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
        this->__PVT__adder__DOT___io_out_result_sign_T_4 
            = (0x3fU & ((IData)(this->__PVT__mac_io_out_result_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
    } else {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__adder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__adder__DOT___io_out_result_sign_T_3 
        = (1U & (((IData)(this->__PVT__mac_io_out_result_man) 
                  > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                  ? ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                     >> 6U) : (IData)(this->__PVT__result_buffer_sign)));
    this->__PVT__adder__DOT___io_out_result_sign_T_6 
        = (1U & (((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                  > (IData)(this->__PVT__result_buffer_man))
                  ? ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                     >> 6U) : (IData)(this->__PVT__result_buffer_sign)));
    this->__PVT__adder__DOT__addition = (0x7fU & ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                                   ? 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 6U)) 
                                                    == (IData)(this->__PVT__result_buffer_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__mac_io_out_result_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                    : 
                                                   (0x3fU 
                                                    & (((IData)(this->__PVT__mac_io_out_result_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        ? 
                                                       ((IData)(this->__PVT__mac_io_out_result_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1) 
                                                        - (IData)(this->__PVT__mac_io_out_result_man)))))
                                                   : 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 6U)) 
                                                    == (IData)(this->__PVT__result_buffer_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__result_buffer_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                    : 
                                                   (0x3fU 
                                                    & (((IData)(this->__PVT__result_buffer_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        ? 
                                                       ((IData)(this->__PVT__result_buffer_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                        - (IData)(this->__PVT__result_buffer_man)))))));
}

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_5__278(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_5__278\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT___sum_T_9 = (0x1ffffU & (
                                                   VL_EXTENDS_II(17,16, 
                                                                 (0xffffU 
                                                                  & (VL_EXTENDS_II(16,15, 
                                                                                (0x7fffU 
                                                                                & (VL_EXTENDS_II(15,14, 
                                                                                (0x3fffU 
                                                                                & (VL_EXTENDS_II(14,13, 
                                                                                (0x1fffU 
                                                                                & (VL_EXTENDS_II(13,12, 
                                                                                (0xfffU 
                                                                                & (VL_EXTENDS_II(12,11, 
                                                                                (0x7ffU 
                                                                                & (VL_EXTENDS_II(11,10, 
                                                                                (0x3ffU 
                                                                                & (VL_EXTENDS_II(10,9, 
                                                                                (0x1ffU 
                                                                                & (VL_EXTENDS_II(9,8, 
                                                                                (0xffU 
                                                                                & (VL_EXTENDS_II(8,7, (IData)(this->__PVT__mac__DOT__two_complement_buffer_0)) 
                                                                                + 
                                                                                VL_EXTENDS_II(8,7, (IData)(this->__PVT__mac__DOT__two_complement_buffer_1))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(9,8, 
                                                                                ((0x80U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_2) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_2)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(10,9, 
                                                                                ((0x180U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_3) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_3)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(11,10, 
                                                                                ((0x380U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_4) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_4)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(12,11, 
                                                                                ((0x780U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_5) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_5)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(13,12, 
                                                                                ((0xf80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_6) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_6)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(14,13, 
                                                                                ((0x1f80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_7) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_7)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(15,14, 
                                                                                ((0x3f80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_8) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_8)))))) 
                                                                     + 
                                                                     VL_EXTENDS_II(16,15, 
                                                                                ((0x7f80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_9) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_9)))))) 
                                                   + 
                                                   VL_EXTENDS_II(17,16, 
                                                                 ((0xff80U 
                                                                   & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_10) 
                                                                                >> 6U)))) 
                                                                      << 7U)) 
                                                                  | (IData)(this->__PVT__mac__DOT__two_complement_buffer_10)))));
    this->__PVT__mac_io_out_result_man = (0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(this->__PVT__mac__DOT__acc_hbfp)
                                                    : 
                                                   ((0xfU 
                                                     < 
                                                     (0x3fU 
                                                      & (IData)(this->__PVT__mac__DOT__acc_hbfp)))
                                                     ? 0xfU
                                                     : (IData)(this->__PVT__mac__DOT__acc_hbfp))));
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_0)))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_1))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_1))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_1)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_2))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_2))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_2)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_3))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_3))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_3)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_4))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_4))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_4)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_5))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_5))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_5)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_6))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_6))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_6)))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_7))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_7))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_7)))));
    this->__PVT__mac__DOT__multiplier_1_8_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_8))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_8))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_8))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_8)))));
    this->__PVT__mac__DOT__multiplier_1_9_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_9))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_9))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_9))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_9)))));
    this->__PVT__mac__DOT__multiplier_1_10_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_10))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_10))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_10))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_10)))));
    this->__PVT__mac__DOT__multiplier_1_11_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_11))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_11))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_11))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_11)))));
    this->__PVT__mac__DOT__multiplier_1_12_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_12))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_12))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_12))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_12)))));
    this->__PVT__mac__DOT__multiplier_1_13_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_13))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_13))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_13))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_13)))));
    this->__PVT__mac__DOT__multiplier_1_14_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_14))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_14))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_14))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_14)))));
    this->__PVT__mac__DOT__multiplier_1_15_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_15))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_15))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_15))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_15)))));
    this->__PVT__mac__DOT__sum = (0x3fffffU & (VL_EXTENDS_II(22,21, 
                                                             (0x1fffffU 
                                                              & (VL_EXTENDS_II(21,20, 
                                                                               (0xfffffU 
                                                                                & (VL_EXTENDS_II(20,19, 
                                                                                (0x7ffffU 
                                                                                & (VL_EXTENDS_II(19,18, 
                                                                                (0x3ffffU 
                                                                                & (VL_EXTENDS_II(18,17, this->__PVT__mac__DOT___sum_T_9) 
                                                                                + 
                                                                                VL_EXTENDS_II(18,17, 
                                                                                ((0x1ff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_11) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_11)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(19,18, 
                                                                                ((0x3ff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_12) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_12)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(20,19, 
                                                                                ((0x7ff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_13) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_13)))))) 
                                                                 + 
                                                                 VL_EXTENDS_II(21,20, 
                                                                               ((0xfff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_14) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_14)))))) 
                                               + VL_EXTENDS_II(22,21, 
                                                               ((0x1fff80U 
                                                                 & ((- (IData)(
                                                                               (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_15) 
                                                                                >> 6U)))) 
                                                                    << 7U)) 
                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_15)))));
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
    if ((5U >= (IData)(this->__PVT__adder__DOT__exp_diff))) {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 
            = (0x3fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
        this->__PVT__adder__DOT___io_out_result_sign_T_4 
            = (0x3fU & ((IData)(this->__PVT__mac_io_out_result_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
    } else {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__adder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__adder__DOT___io_out_result_sign_T_3 
        = (1U & (((IData)(this->__PVT__mac_io_out_result_man) 
                  > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                  ? ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                     >> 6U) : (IData)(this->__PVT__result_buffer_sign)));
    this->__PVT__adder__DOT___io_out_result_sign_T_6 
        = (1U & (((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                  > (IData)(this->__PVT__result_buffer_man))
                  ? ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                     >> 6U) : (IData)(this->__PVT__result_buffer_sign)));
    this->__PVT__adder__DOT__addition = (0x7fU & ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                                   ? 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 6U)) 
                                                    == (IData)(this->__PVT__result_buffer_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__mac_io_out_result_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                    : 
                                                   (0x3fU 
                                                    & (((IData)(this->__PVT__mac_io_out_result_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        ? 
                                                       ((IData)(this->__PVT__mac_io_out_result_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1) 
                                                        - (IData)(this->__PVT__mac_io_out_result_man)))))
                                                   : 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 6U)) 
                                                    == (IData)(this->__PVT__result_buffer_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__result_buffer_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                    : 
                                                   (0x3fU 
                                                    & (((IData)(this->__PVT__result_buffer_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        ? 
                                                       ((IData)(this->__PVT__result_buffer_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                        - (IData)(this->__PVT__result_buffer_man)))))));
}

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_6__279(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_6__279\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT___sum_T_9 = (0x1ffffU & (
                                                   VL_EXTENDS_II(17,16, 
                                                                 (0xffffU 
                                                                  & (VL_EXTENDS_II(16,15, 
                                                                                (0x7fffU 
                                                                                & (VL_EXTENDS_II(15,14, 
                                                                                (0x3fffU 
                                                                                & (VL_EXTENDS_II(14,13, 
                                                                                (0x1fffU 
                                                                                & (VL_EXTENDS_II(13,12, 
                                                                                (0xfffU 
                                                                                & (VL_EXTENDS_II(12,11, 
                                                                                (0x7ffU 
                                                                                & (VL_EXTENDS_II(11,10, 
                                                                                (0x3ffU 
                                                                                & (VL_EXTENDS_II(10,9, 
                                                                                (0x1ffU 
                                                                                & (VL_EXTENDS_II(9,8, 
                                                                                (0xffU 
                                                                                & (VL_EXTENDS_II(8,7, (IData)(this->__PVT__mac__DOT__two_complement_buffer_0)) 
                                                                                + 
                                                                                VL_EXTENDS_II(8,7, (IData)(this->__PVT__mac__DOT__two_complement_buffer_1))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(9,8, 
                                                                                ((0x80U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_2) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_2)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(10,9, 
                                                                                ((0x180U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_3) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_3)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(11,10, 
                                                                                ((0x380U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_4) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_4)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(12,11, 
                                                                                ((0x780U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_5) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_5)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(13,12, 
                                                                                ((0xf80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_6) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_6)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(14,13, 
                                                                                ((0x1f80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_7) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_7)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(15,14, 
                                                                                ((0x3f80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_8) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_8)))))) 
                                                                     + 
                                                                     VL_EXTENDS_II(16,15, 
                                                                                ((0x7f80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_9) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_9)))))) 
                                                   + 
                                                   VL_EXTENDS_II(17,16, 
                                                                 ((0xff80U 
                                                                   & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_10) 
                                                                                >> 6U)))) 
                                                                      << 7U)) 
                                                                  | (IData)(this->__PVT__mac__DOT__two_complement_buffer_10)))));
    this->__PVT__mac_io_out_result_man = (0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(this->__PVT__mac__DOT__acc_hbfp)
                                                    : 
                                                   ((0xfU 
                                                     < 
                                                     (0x3fU 
                                                      & (IData)(this->__PVT__mac__DOT__acc_hbfp)))
                                                     ? 0xfU
                                                     : (IData)(this->__PVT__mac__DOT__acc_hbfp))));
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_0)))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_1))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_1))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_1)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_2))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_2))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_2)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_3))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_3))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_3)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_4))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_4))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_4)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_5))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_5))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_5)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_6))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_6))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_6)))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_7))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_7))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_7)))));
    this->__PVT__mac__DOT__multiplier_1_8_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_8))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_8))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_8))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_8)))));
    this->__PVT__mac__DOT__multiplier_1_9_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_9))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_9))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_9))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_9)))));
    this->__PVT__mac__DOT__multiplier_1_10_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_10))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_10))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_10))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_10)))));
    this->__PVT__mac__DOT__multiplier_1_11_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_11))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_11))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_11))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_11)))));
    this->__PVT__mac__DOT__multiplier_1_12_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_12))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_12))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_12))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_12)))));
    this->__PVT__mac__DOT__multiplier_1_13_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_13))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_13))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_13))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_13)))));
    this->__PVT__mac__DOT__multiplier_1_14_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_14))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_14))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_14))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_14)))));
    this->__PVT__mac__DOT__multiplier_1_15_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_15))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_15))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_15))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_15)))));
    this->__PVT__mac__DOT__sum = (0x3fffffU & (VL_EXTENDS_II(22,21, 
                                                             (0x1fffffU 
                                                              & (VL_EXTENDS_II(21,20, 
                                                                               (0xfffffU 
                                                                                & (VL_EXTENDS_II(20,19, 
                                                                                (0x7ffffU 
                                                                                & (VL_EXTENDS_II(19,18, 
                                                                                (0x3ffffU 
                                                                                & (VL_EXTENDS_II(18,17, this->__PVT__mac__DOT___sum_T_9) 
                                                                                + 
                                                                                VL_EXTENDS_II(18,17, 
                                                                                ((0x1ff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_11) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_11)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(19,18, 
                                                                                ((0x3ff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_12) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_12)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(20,19, 
                                                                                ((0x7ff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_13) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_13)))))) 
                                                                 + 
                                                                 VL_EXTENDS_II(21,20, 
                                                                               ((0xfff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_14) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_14)))))) 
                                               + VL_EXTENDS_II(22,21, 
                                                               ((0x1fff80U 
                                                                 & ((- (IData)(
                                                                               (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_15) 
                                                                                >> 6U)))) 
                                                                    << 7U)) 
                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_15)))));
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
    if ((5U >= (IData)(this->__PVT__adder__DOT__exp_diff))) {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 
            = (0x3fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
        this->__PVT__adder__DOT___io_out_result_sign_T_4 
            = (0x3fU & ((IData)(this->__PVT__mac_io_out_result_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
    } else {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__adder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__adder__DOT___io_out_result_sign_T_3 
        = (1U & (((IData)(this->__PVT__mac_io_out_result_man) 
                  > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                  ? ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                     >> 6U) : (IData)(this->__PVT__result_buffer_sign)));
    this->__PVT__adder__DOT___io_out_result_sign_T_6 
        = (1U & (((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                  > (IData)(this->__PVT__result_buffer_man))
                  ? ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                     >> 6U) : (IData)(this->__PVT__result_buffer_sign)));
    this->__PVT__adder__DOT__addition = (0x7fU & ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                                   ? 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 6U)) 
                                                    == (IData)(this->__PVT__result_buffer_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__mac_io_out_result_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                    : 
                                                   (0x3fU 
                                                    & (((IData)(this->__PVT__mac_io_out_result_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        ? 
                                                       ((IData)(this->__PVT__mac_io_out_result_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1) 
                                                        - (IData)(this->__PVT__mac_io_out_result_man)))))
                                                   : 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 6U)) 
                                                    == (IData)(this->__PVT__result_buffer_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__result_buffer_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                    : 
                                                   (0x3fU 
                                                    & (((IData)(this->__PVT__result_buffer_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        ? 
                                                       ((IData)(this->__PVT__result_buffer_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                        - (IData)(this->__PVT__result_buffer_man)))))));
}

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_7__280(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_7__280\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT___sum_T_9 = (0x1ffffU & (
                                                   VL_EXTENDS_II(17,16, 
                                                                 (0xffffU 
                                                                  & (VL_EXTENDS_II(16,15, 
                                                                                (0x7fffU 
                                                                                & (VL_EXTENDS_II(15,14, 
                                                                                (0x3fffU 
                                                                                & (VL_EXTENDS_II(14,13, 
                                                                                (0x1fffU 
                                                                                & (VL_EXTENDS_II(13,12, 
                                                                                (0xfffU 
                                                                                & (VL_EXTENDS_II(12,11, 
                                                                                (0x7ffU 
                                                                                & (VL_EXTENDS_II(11,10, 
                                                                                (0x3ffU 
                                                                                & (VL_EXTENDS_II(10,9, 
                                                                                (0x1ffU 
                                                                                & (VL_EXTENDS_II(9,8, 
                                                                                (0xffU 
                                                                                & (VL_EXTENDS_II(8,7, (IData)(this->__PVT__mac__DOT__two_complement_buffer_0)) 
                                                                                + 
                                                                                VL_EXTENDS_II(8,7, (IData)(this->__PVT__mac__DOT__two_complement_buffer_1))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(9,8, 
                                                                                ((0x80U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_2) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_2)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(10,9, 
                                                                                ((0x180U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_3) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_3)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(11,10, 
                                                                                ((0x380U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_4) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_4)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(12,11, 
                                                                                ((0x780U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_5) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_5)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(13,12, 
                                                                                ((0xf80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_6) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_6)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(14,13, 
                                                                                ((0x1f80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_7) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_7)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(15,14, 
                                                                                ((0x3f80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_8) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_8)))))) 
                                                                     + 
                                                                     VL_EXTENDS_II(16,15, 
                                                                                ((0x7f80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_9) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_9)))))) 
                                                   + 
                                                   VL_EXTENDS_II(17,16, 
                                                                 ((0xff80U 
                                                                   & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_10) 
                                                                                >> 6U)))) 
                                                                      << 7U)) 
                                                                  | (IData)(this->__PVT__mac__DOT__two_complement_buffer_10)))));
    this->__PVT__mac_io_out_result_man = (0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(this->__PVT__mac__DOT__acc_hbfp)
                                                    : 
                                                   ((0xfU 
                                                     < 
                                                     (0x3fU 
                                                      & (IData)(this->__PVT__mac__DOT__acc_hbfp)))
                                                     ? 0xfU
                                                     : (IData)(this->__PVT__mac__DOT__acc_hbfp))));
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_0)))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_1))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_1))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_1)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_2))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_2))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_2)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_3))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_3))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_3)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_4))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_4))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_4)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_5))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_5))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_5)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_6))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_6))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_6)))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_7))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_7))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_7)))));
    this->__PVT__mac__DOT__multiplier_1_8_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_8))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_8))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_8))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_8)))));
    this->__PVT__mac__DOT__multiplier_1_9_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_9))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_9))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_9))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_9)))));
    this->__PVT__mac__DOT__multiplier_1_10_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_10))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_10))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_10))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_10)))));
    this->__PVT__mac__DOT__multiplier_1_11_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_11))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_11))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_11))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_11)))));
    this->__PVT__mac__DOT__multiplier_1_12_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_12))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_12))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_12))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_12)))));
    this->__PVT__mac__DOT__multiplier_1_13_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_13))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_13))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_13))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_13)))));
    this->__PVT__mac__DOT__multiplier_1_14_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_14))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_14))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_14))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_14)))));
    this->__PVT__mac__DOT__multiplier_1_15_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_15))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_15))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_15))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_15)))));
    this->__PVT__mac__DOT__sum = (0x3fffffU & (VL_EXTENDS_II(22,21, 
                                                             (0x1fffffU 
                                                              & (VL_EXTENDS_II(21,20, 
                                                                               (0xfffffU 
                                                                                & (VL_EXTENDS_II(20,19, 
                                                                                (0x7ffffU 
                                                                                & (VL_EXTENDS_II(19,18, 
                                                                                (0x3ffffU 
                                                                                & (VL_EXTENDS_II(18,17, this->__PVT__mac__DOT___sum_T_9) 
                                                                                + 
                                                                                VL_EXTENDS_II(18,17, 
                                                                                ((0x1ff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_11) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_11)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(19,18, 
                                                                                ((0x3ff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_12) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_12)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(20,19, 
                                                                                ((0x7ff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_13) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_13)))))) 
                                                                 + 
                                                                 VL_EXTENDS_II(21,20, 
                                                                               ((0xfff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_14) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_14)))))) 
                                               + VL_EXTENDS_II(22,21, 
                                                               ((0x1fff80U 
                                                                 & ((- (IData)(
                                                                               (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_15) 
                                                                                >> 6U)))) 
                                                                    << 7U)) 
                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_15)))));
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
    if ((5U >= (IData)(this->__PVT__adder__DOT__exp_diff))) {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 
            = (0x3fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
        this->__PVT__adder__DOT___io_out_result_sign_T_4 
            = (0x3fU & ((IData)(this->__PVT__mac_io_out_result_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
    } else {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__adder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__adder__DOT___io_out_result_sign_T_3 
        = (1U & (((IData)(this->__PVT__mac_io_out_result_man) 
                  > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                  ? ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                     >> 6U) : (IData)(this->__PVT__result_buffer_sign)));
    this->__PVT__adder__DOT___io_out_result_sign_T_6 
        = (1U & (((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                  > (IData)(this->__PVT__result_buffer_man))
                  ? ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                     >> 6U) : (IData)(this->__PVT__result_buffer_sign)));
    this->__PVT__adder__DOT__addition = (0x7fU & ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                                   ? 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 6U)) 
                                                    == (IData)(this->__PVT__result_buffer_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__mac_io_out_result_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                    : 
                                                   (0x3fU 
                                                    & (((IData)(this->__PVT__mac_io_out_result_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        ? 
                                                       ((IData)(this->__PVT__mac_io_out_result_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1) 
                                                        - (IData)(this->__PVT__mac_io_out_result_man)))))
                                                   : 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 6U)) 
                                                    == (IData)(this->__PVT__result_buffer_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__result_buffer_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                    : 
                                                   (0x3fU 
                                                    & (((IData)(this->__PVT__result_buffer_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        ? 
                                                       ((IData)(this->__PVT__result_buffer_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                        - (IData)(this->__PVT__result_buffer_man)))))));
}

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_8__281(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_8__281\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT___sum_T_9 = (0x1ffffU & (
                                                   VL_EXTENDS_II(17,16, 
                                                                 (0xffffU 
                                                                  & (VL_EXTENDS_II(16,15, 
                                                                                (0x7fffU 
                                                                                & (VL_EXTENDS_II(15,14, 
                                                                                (0x3fffU 
                                                                                & (VL_EXTENDS_II(14,13, 
                                                                                (0x1fffU 
                                                                                & (VL_EXTENDS_II(13,12, 
                                                                                (0xfffU 
                                                                                & (VL_EXTENDS_II(12,11, 
                                                                                (0x7ffU 
                                                                                & (VL_EXTENDS_II(11,10, 
                                                                                (0x3ffU 
                                                                                & (VL_EXTENDS_II(10,9, 
                                                                                (0x1ffU 
                                                                                & (VL_EXTENDS_II(9,8, 
                                                                                (0xffU 
                                                                                & (VL_EXTENDS_II(8,7, (IData)(this->__PVT__mac__DOT__two_complement_buffer_0)) 
                                                                                + 
                                                                                VL_EXTENDS_II(8,7, (IData)(this->__PVT__mac__DOT__two_complement_buffer_1))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(9,8, 
                                                                                ((0x80U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_2) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_2)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(10,9, 
                                                                                ((0x180U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_3) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_3)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(11,10, 
                                                                                ((0x380U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_4) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_4)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(12,11, 
                                                                                ((0x780U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_5) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_5)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(13,12, 
                                                                                ((0xf80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_6) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_6)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(14,13, 
                                                                                ((0x1f80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_7) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_7)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(15,14, 
                                                                                ((0x3f80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_8) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_8)))))) 
                                                                     + 
                                                                     VL_EXTENDS_II(16,15, 
                                                                                ((0x7f80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_9) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_9)))))) 
                                                   + 
                                                   VL_EXTENDS_II(17,16, 
                                                                 ((0xff80U 
                                                                   & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_10) 
                                                                                >> 6U)))) 
                                                                      << 7U)) 
                                                                  | (IData)(this->__PVT__mac__DOT__two_complement_buffer_10)))));
    this->__PVT__mac_io_out_result_man = (0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(this->__PVT__mac__DOT__acc_hbfp)
                                                    : 
                                                   ((0xfU 
                                                     < 
                                                     (0x3fU 
                                                      & (IData)(this->__PVT__mac__DOT__acc_hbfp)))
                                                     ? 0xfU
                                                     : (IData)(this->__PVT__mac__DOT__acc_hbfp))));
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_0)))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_1))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_1))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_1)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_2))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_2))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_2)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_3))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_3))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_3)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_4))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_4))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_4)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_5))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_5))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_5)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_6))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_6))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_6)))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_7))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_7))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_7)))));
    this->__PVT__mac__DOT__multiplier_1_8_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_8))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_8))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_8))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_8)))));
    this->__PVT__mac__DOT__multiplier_1_9_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_9))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_9))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_9))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_9)))));
    this->__PVT__mac__DOT__multiplier_1_10_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_10))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_10))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_10))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_10)))));
    this->__PVT__mac__DOT__multiplier_1_11_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_11))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_11))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_11))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_11)))));
    this->__PVT__mac__DOT__multiplier_1_12_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_12))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_12))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_12))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_12)))));
    this->__PVT__mac__DOT__multiplier_1_13_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_13))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_13))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_13))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_13)))));
    this->__PVT__mac__DOT__multiplier_1_14_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_14))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_14))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_14))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_14)))));
    this->__PVT__mac__DOT__multiplier_1_15_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_15))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_15))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_15))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_15)))));
    this->__PVT__mac__DOT__sum = (0x3fffffU & (VL_EXTENDS_II(22,21, 
                                                             (0x1fffffU 
                                                              & (VL_EXTENDS_II(21,20, 
                                                                               (0xfffffU 
                                                                                & (VL_EXTENDS_II(20,19, 
                                                                                (0x7ffffU 
                                                                                & (VL_EXTENDS_II(19,18, 
                                                                                (0x3ffffU 
                                                                                & (VL_EXTENDS_II(18,17, this->__PVT__mac__DOT___sum_T_9) 
                                                                                + 
                                                                                VL_EXTENDS_II(18,17, 
                                                                                ((0x1ff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_11) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_11)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(19,18, 
                                                                                ((0x3ff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_12) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_12)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(20,19, 
                                                                                ((0x7ff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_13) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_13)))))) 
                                                                 + 
                                                                 VL_EXTENDS_II(21,20, 
                                                                               ((0xfff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_14) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_14)))))) 
                                               + VL_EXTENDS_II(22,21, 
                                                               ((0x1fff80U 
                                                                 & ((- (IData)(
                                                                               (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_15) 
                                                                                >> 6U)))) 
                                                                    << 7U)) 
                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_15)))));
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
    if ((5U >= (IData)(this->__PVT__adder__DOT__exp_diff))) {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 
            = (0x3fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
        this->__PVT__adder__DOT___io_out_result_sign_T_4 
            = (0x3fU & ((IData)(this->__PVT__mac_io_out_result_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
    } else {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__adder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__adder__DOT___io_out_result_sign_T_3 
        = (1U & (((IData)(this->__PVT__mac_io_out_result_man) 
                  > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                  ? ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                     >> 6U) : (IData)(this->__PVT__result_buffer_sign)));
    this->__PVT__adder__DOT___io_out_result_sign_T_6 
        = (1U & (((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                  > (IData)(this->__PVT__result_buffer_man))
                  ? ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                     >> 6U) : (IData)(this->__PVT__result_buffer_sign)));
    this->__PVT__adder__DOT__addition = (0x7fU & ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                                   ? 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 6U)) 
                                                    == (IData)(this->__PVT__result_buffer_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__mac_io_out_result_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                    : 
                                                   (0x3fU 
                                                    & (((IData)(this->__PVT__mac_io_out_result_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        ? 
                                                       ((IData)(this->__PVT__mac_io_out_result_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1) 
                                                        - (IData)(this->__PVT__mac_io_out_result_man)))))
                                                   : 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 6U)) 
                                                    == (IData)(this->__PVT__result_buffer_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__result_buffer_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                    : 
                                                   (0x3fU 
                                                    & (((IData)(this->__PVT__result_buffer_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        ? 
                                                       ((IData)(this->__PVT__result_buffer_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                        - (IData)(this->__PVT__result_buffer_man)))))));
}

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_9__282(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_9__282\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT___sum_T_9 = (0x1ffffU & (
                                                   VL_EXTENDS_II(17,16, 
                                                                 (0xffffU 
                                                                  & (VL_EXTENDS_II(16,15, 
                                                                                (0x7fffU 
                                                                                & (VL_EXTENDS_II(15,14, 
                                                                                (0x3fffU 
                                                                                & (VL_EXTENDS_II(14,13, 
                                                                                (0x1fffU 
                                                                                & (VL_EXTENDS_II(13,12, 
                                                                                (0xfffU 
                                                                                & (VL_EXTENDS_II(12,11, 
                                                                                (0x7ffU 
                                                                                & (VL_EXTENDS_II(11,10, 
                                                                                (0x3ffU 
                                                                                & (VL_EXTENDS_II(10,9, 
                                                                                (0x1ffU 
                                                                                & (VL_EXTENDS_II(9,8, 
                                                                                (0xffU 
                                                                                & (VL_EXTENDS_II(8,7, (IData)(this->__PVT__mac__DOT__two_complement_buffer_0)) 
                                                                                + 
                                                                                VL_EXTENDS_II(8,7, (IData)(this->__PVT__mac__DOT__two_complement_buffer_1))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(9,8, 
                                                                                ((0x80U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_2) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_2)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(10,9, 
                                                                                ((0x180U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_3) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_3)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(11,10, 
                                                                                ((0x380U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_4) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_4)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(12,11, 
                                                                                ((0x780U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_5) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_5)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(13,12, 
                                                                                ((0xf80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_6) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_6)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(14,13, 
                                                                                ((0x1f80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_7) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_7)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(15,14, 
                                                                                ((0x3f80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_8) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_8)))))) 
                                                                     + 
                                                                     VL_EXTENDS_II(16,15, 
                                                                                ((0x7f80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_9) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_9)))))) 
                                                   + 
                                                   VL_EXTENDS_II(17,16, 
                                                                 ((0xff80U 
                                                                   & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_10) 
                                                                                >> 6U)))) 
                                                                      << 7U)) 
                                                                  | (IData)(this->__PVT__mac__DOT__two_complement_buffer_10)))));
    this->__PVT__mac_io_out_result_man = (0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(this->__PVT__mac__DOT__acc_hbfp)
                                                    : 
                                                   ((0xfU 
                                                     < 
                                                     (0x3fU 
                                                      & (IData)(this->__PVT__mac__DOT__acc_hbfp)))
                                                     ? 0xfU
                                                     : (IData)(this->__PVT__mac__DOT__acc_hbfp))));
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_0)))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_1))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_1))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_1)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_2))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_2))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_2)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_3))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_3))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_3)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_4))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_4))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_4)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_5))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_5))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_5)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_6))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_6))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_6)))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_7))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_7))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_7)))));
    this->__PVT__mac__DOT__multiplier_1_8_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_8))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_8))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_8))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_8)))));
    this->__PVT__mac__DOT__multiplier_1_9_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_9))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_9))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_9))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_9)))));
    this->__PVT__mac__DOT__multiplier_1_10_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_10))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_10))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_10))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_10)))));
    this->__PVT__mac__DOT__multiplier_1_11_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_11))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_11))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_11))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_11)))));
    this->__PVT__mac__DOT__multiplier_1_12_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_12))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_12))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_12))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_12)))));
    this->__PVT__mac__DOT__multiplier_1_13_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_13))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_13))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_13))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_13)))));
    this->__PVT__mac__DOT__multiplier_1_14_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_14))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_14))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_14))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_14)))));
    this->__PVT__mac__DOT__multiplier_1_15_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_15))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_15))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_15))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_15)))));
    this->__PVT__mac__DOT__sum = (0x3fffffU & (VL_EXTENDS_II(22,21, 
                                                             (0x1fffffU 
                                                              & (VL_EXTENDS_II(21,20, 
                                                                               (0xfffffU 
                                                                                & (VL_EXTENDS_II(20,19, 
                                                                                (0x7ffffU 
                                                                                & (VL_EXTENDS_II(19,18, 
                                                                                (0x3ffffU 
                                                                                & (VL_EXTENDS_II(18,17, this->__PVT__mac__DOT___sum_T_9) 
                                                                                + 
                                                                                VL_EXTENDS_II(18,17, 
                                                                                ((0x1ff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_11) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_11)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(19,18, 
                                                                                ((0x3ff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_12) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_12)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(20,19, 
                                                                                ((0x7ff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_13) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_13)))))) 
                                                                 + 
                                                                 VL_EXTENDS_II(21,20, 
                                                                               ((0xfff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_14) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_14)))))) 
                                               + VL_EXTENDS_II(22,21, 
                                                               ((0x1fff80U 
                                                                 & ((- (IData)(
                                                                               (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_15) 
                                                                                >> 6U)))) 
                                                                    << 7U)) 
                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_15)))));
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
    if ((5U >= (IData)(this->__PVT__adder__DOT__exp_diff))) {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 
            = (0x3fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
        this->__PVT__adder__DOT___io_out_result_sign_T_4 
            = (0x3fU & ((IData)(this->__PVT__mac_io_out_result_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
    } else {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__adder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__adder__DOT___io_out_result_sign_T_3 
        = (1U & (((IData)(this->__PVT__mac_io_out_result_man) 
                  > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                  ? ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                     >> 6U) : (IData)(this->__PVT__result_buffer_sign)));
    this->__PVT__adder__DOT___io_out_result_sign_T_6 
        = (1U & (((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                  > (IData)(this->__PVT__result_buffer_man))
                  ? ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                     >> 6U) : (IData)(this->__PVT__result_buffer_sign)));
    this->__PVT__adder__DOT__addition = (0x7fU & ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                                   ? 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 6U)) 
                                                    == (IData)(this->__PVT__result_buffer_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__mac_io_out_result_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                    : 
                                                   (0x3fU 
                                                    & (((IData)(this->__PVT__mac_io_out_result_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        ? 
                                                       ((IData)(this->__PVT__mac_io_out_result_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1) 
                                                        - (IData)(this->__PVT__mac_io_out_result_man)))))
                                                   : 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 6U)) 
                                                    == (IData)(this->__PVT__result_buffer_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__result_buffer_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                    : 
                                                   (0x3fU 
                                                    & (((IData)(this->__PVT__result_buffer_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        ? 
                                                       ((IData)(this->__PVT__result_buffer_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                        - (IData)(this->__PVT__result_buffer_man)))))));
}

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_10__283(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_10__283\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT___sum_T_9 = (0x1ffffU & (
                                                   VL_EXTENDS_II(17,16, 
                                                                 (0xffffU 
                                                                  & (VL_EXTENDS_II(16,15, 
                                                                                (0x7fffU 
                                                                                & (VL_EXTENDS_II(15,14, 
                                                                                (0x3fffU 
                                                                                & (VL_EXTENDS_II(14,13, 
                                                                                (0x1fffU 
                                                                                & (VL_EXTENDS_II(13,12, 
                                                                                (0xfffU 
                                                                                & (VL_EXTENDS_II(12,11, 
                                                                                (0x7ffU 
                                                                                & (VL_EXTENDS_II(11,10, 
                                                                                (0x3ffU 
                                                                                & (VL_EXTENDS_II(10,9, 
                                                                                (0x1ffU 
                                                                                & (VL_EXTENDS_II(9,8, 
                                                                                (0xffU 
                                                                                & (VL_EXTENDS_II(8,7, (IData)(this->__PVT__mac__DOT__two_complement_buffer_0)) 
                                                                                + 
                                                                                VL_EXTENDS_II(8,7, (IData)(this->__PVT__mac__DOT__two_complement_buffer_1))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(9,8, 
                                                                                ((0x80U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_2) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_2)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(10,9, 
                                                                                ((0x180U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_3) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_3)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(11,10, 
                                                                                ((0x380U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_4) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_4)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(12,11, 
                                                                                ((0x780U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_5) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_5)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(13,12, 
                                                                                ((0xf80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_6) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_6)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(14,13, 
                                                                                ((0x1f80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_7) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_7)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(15,14, 
                                                                                ((0x3f80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_8) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_8)))))) 
                                                                     + 
                                                                     VL_EXTENDS_II(16,15, 
                                                                                ((0x7f80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_9) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_9)))))) 
                                                   + 
                                                   VL_EXTENDS_II(17,16, 
                                                                 ((0xff80U 
                                                                   & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_10) 
                                                                                >> 6U)))) 
                                                                      << 7U)) 
                                                                  | (IData)(this->__PVT__mac__DOT__two_complement_buffer_10)))));
    this->__PVT__mac_io_out_result_man = (0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(this->__PVT__mac__DOT__acc_hbfp)
                                                    : 
                                                   ((0xfU 
                                                     < 
                                                     (0x3fU 
                                                      & (IData)(this->__PVT__mac__DOT__acc_hbfp)))
                                                     ? 0xfU
                                                     : (IData)(this->__PVT__mac__DOT__acc_hbfp))));
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_r_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_r_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_r_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_r_man_0)))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_r_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_r_man_1))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_r_man_1))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_r_man_1)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_r_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_r_man_2))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_r_man_2))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_r_man_2)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_r_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_r_man_3))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_r_man_3))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_r_man_3)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_r_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_r_man_4))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_r_man_4))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_r_man_4)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_r_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_r_man_5))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_r_man_5))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_r_man_5)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_r_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_r_man_6))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_r_man_6))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_r_man_6)))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_r_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_r_man_7))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_r_man_7))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_r_man_7)))));
    this->__PVT__mac__DOT__multiplier_1_8_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_r_man_8))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_r_man_8))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_r_man_8))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_r_man_8)))));
    this->__PVT__mac__DOT__multiplier_1_9_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_r_man_9))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_r_man_9))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_r_man_9))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_r_man_9)))));
    this->__PVT__mac__DOT__multiplier_1_10_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_r_man_10))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_r_man_10))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_r_man_10))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_r_man_10)))));
    this->__PVT__mac__DOT__multiplier_1_11_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_r_man_11))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_r_man_11))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_r_man_11))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_r_man_11)))));
    this->__PVT__mac__DOT__multiplier_1_12_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_r_man_12))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_r_man_12))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_r_man_12))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_r_man_12)))));
    this->__PVT__mac__DOT__multiplier_1_13_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_r_man_13))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_r_man_13))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_r_man_13))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_r_man_13)))));
    this->__PVT__mac__DOT__multiplier_1_14_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_r_man_14))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_r_man_14))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_r_man_14))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_r_man_14)))));
    this->__PVT__mac__DOT__multiplier_1_15_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_r_man_15))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_r_man_15))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_r_man_15))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_r_man_15)))));
    this->__PVT__mac__DOT__sum = (0x3fffffU & (VL_EXTENDS_II(22,21, 
                                                             (0x1fffffU 
                                                              & (VL_EXTENDS_II(21,20, 
                                                                               (0xfffffU 
                                                                                & (VL_EXTENDS_II(20,19, 
                                                                                (0x7ffffU 
                                                                                & (VL_EXTENDS_II(19,18, 
                                                                                (0x3ffffU 
                                                                                & (VL_EXTENDS_II(18,17, this->__PVT__mac__DOT___sum_T_9) 
                                                                                + 
                                                                                VL_EXTENDS_II(18,17, 
                                                                                ((0x1ff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_11) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_11)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(19,18, 
                                                                                ((0x3ff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_12) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_12)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(20,19, 
                                                                                ((0x7ff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_13) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_13)))))) 
                                                                 + 
                                                                 VL_EXTENDS_II(21,20, 
                                                                               ((0xfff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_14) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_14)))))) 
                                               + VL_EXTENDS_II(22,21, 
                                                               ((0x1fff80U 
                                                                 & ((- (IData)(
                                                                               (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_15) 
                                                                                >> 6U)))) 
                                                                    << 7U)) 
                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_15)))));
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
    if ((5U >= (IData)(this->__PVT__adder__DOT__exp_diff))) {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 
            = (0x3fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
        this->__PVT__adder__DOT___io_out_result_sign_T_4 
            = (0x3fU & ((IData)(this->__PVT__mac_io_out_result_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
    } else {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__adder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__adder__DOT___io_out_result_sign_T_3 
        = (1U & (((IData)(this->__PVT__mac_io_out_result_man) 
                  > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                  ? ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                     >> 6U) : (IData)(this->__PVT__result_buffer_sign)));
    this->__PVT__adder__DOT___io_out_result_sign_T_6 
        = (1U & (((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                  > (IData)(this->__PVT__result_buffer_man))
                  ? ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                     >> 6U) : (IData)(this->__PVT__result_buffer_sign)));
    this->__PVT__adder__DOT__addition = (0x7fU & ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                                   ? 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 6U)) 
                                                    == (IData)(this->__PVT__result_buffer_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__mac_io_out_result_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                    : 
                                                   (0x3fU 
                                                    & (((IData)(this->__PVT__mac_io_out_result_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        ? 
                                                       ((IData)(this->__PVT__mac_io_out_result_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1) 
                                                        - (IData)(this->__PVT__mac_io_out_result_man)))))
                                                   : 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 6U)) 
                                                    == (IData)(this->__PVT__result_buffer_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__result_buffer_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                    : 
                                                   (0x3fU 
                                                    & (((IData)(this->__PVT__result_buffer_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        ? 
                                                       ((IData)(this->__PVT__result_buffer_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                        - (IData)(this->__PVT__result_buffer_man)))))));
}

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_11__284(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_11__284\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT___sum_T_9 = (0x1ffffU & (
                                                   VL_EXTENDS_II(17,16, 
                                                                 (0xffffU 
                                                                  & (VL_EXTENDS_II(16,15, 
                                                                                (0x7fffU 
                                                                                & (VL_EXTENDS_II(15,14, 
                                                                                (0x3fffU 
                                                                                & (VL_EXTENDS_II(14,13, 
                                                                                (0x1fffU 
                                                                                & (VL_EXTENDS_II(13,12, 
                                                                                (0xfffU 
                                                                                & (VL_EXTENDS_II(12,11, 
                                                                                (0x7ffU 
                                                                                & (VL_EXTENDS_II(11,10, 
                                                                                (0x3ffU 
                                                                                & (VL_EXTENDS_II(10,9, 
                                                                                (0x1ffU 
                                                                                & (VL_EXTENDS_II(9,8, 
                                                                                (0xffU 
                                                                                & (VL_EXTENDS_II(8,7, (IData)(this->__PVT__mac__DOT__two_complement_buffer_0)) 
                                                                                + 
                                                                                VL_EXTENDS_II(8,7, (IData)(this->__PVT__mac__DOT__two_complement_buffer_1))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(9,8, 
                                                                                ((0x80U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_2) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_2)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(10,9, 
                                                                                ((0x180U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_3) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_3)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(11,10, 
                                                                                ((0x380U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_4) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_4)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(12,11, 
                                                                                ((0x780U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_5) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_5)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(13,12, 
                                                                                ((0xf80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_6) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_6)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(14,13, 
                                                                                ((0x1f80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_7) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_7)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(15,14, 
                                                                                ((0x3f80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_8) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_8)))))) 
                                                                     + 
                                                                     VL_EXTENDS_II(16,15, 
                                                                                ((0x7f80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_9) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_9)))))) 
                                                   + 
                                                   VL_EXTENDS_II(17,16, 
                                                                 ((0xff80U 
                                                                   & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_10) 
                                                                                >> 6U)))) 
                                                                      << 7U)) 
                                                                  | (IData)(this->__PVT__mac__DOT__two_complement_buffer_10)))));
    this->__PVT__mac_io_out_result_man = (0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(this->__PVT__mac__DOT__acc_hbfp)
                                                    : 
                                                   ((0xfU 
                                                     < 
                                                     (0x3fU 
                                                      & (IData)(this->__PVT__mac__DOT__acc_hbfp)))
                                                     ? 0xfU
                                                     : (IData)(this->__PVT__mac__DOT__acc_hbfp))));
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_hor_r_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_hor_r_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_r_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_r_man_0)))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_hor_r_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_hor_r_man_1))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_r_man_1))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_r_man_1)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_hor_r_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_hor_r_man_2))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_r_man_2))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_r_man_2)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_hor_r_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_hor_r_man_3))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_r_man_3))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_r_man_3)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_hor_r_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_hor_r_man_4))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_r_man_4))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_r_man_4)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_hor_r_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_hor_r_man_5))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_r_man_5))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_r_man_5)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_hor_r_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_hor_r_man_6))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_r_man_6))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_r_man_6)))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_hor_r_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_hor_r_man_7))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_r_man_7))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_r_man_7)))));
    this->__PVT__mac__DOT__multiplier_1_8_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_hor_r_man_8))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_hor_r_man_8))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_r_man_8))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_r_man_8)))));
    this->__PVT__mac__DOT__multiplier_1_9_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_hor_r_man_9))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_hor_r_man_9))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_r_man_9))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_r_man_9)))));
    this->__PVT__mac__DOT__multiplier_1_10_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_hor_r_man_10))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_hor_r_man_10))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_r_man_10))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_r_man_10)))));
    this->__PVT__mac__DOT__multiplier_1_11_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_hor_r_man_11))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_hor_r_man_11))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_r_man_11))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_r_man_11)))));
    this->__PVT__mac__DOT__multiplier_1_12_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_hor_r_man_12))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_hor_r_man_12))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_r_man_12))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_r_man_12)))));
    this->__PVT__mac__DOT__multiplier_1_13_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_hor_r_man_13))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_hor_r_man_13))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_r_man_13))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_r_man_13)))));
    this->__PVT__mac__DOT__multiplier_1_14_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_hor_r_man_14))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_hor_r_man_14))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_r_man_14))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_r_man_14)))));
    this->__PVT__mac__DOT__multiplier_1_15_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_hor_r_man_15))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_hor_r_man_15))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_r_man_15))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_r_man_15)))));
    this->__PVT__mac__DOT__sum = (0x3fffffU & (VL_EXTENDS_II(22,21, 
                                                             (0x1fffffU 
                                                              & (VL_EXTENDS_II(21,20, 
                                                                               (0xfffffU 
                                                                                & (VL_EXTENDS_II(20,19, 
                                                                                (0x7ffffU 
                                                                                & (VL_EXTENDS_II(19,18, 
                                                                                (0x3ffffU 
                                                                                & (VL_EXTENDS_II(18,17, this->__PVT__mac__DOT___sum_T_9) 
                                                                                + 
                                                                                VL_EXTENDS_II(18,17, 
                                                                                ((0x1ff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_11) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_11)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(19,18, 
                                                                                ((0x3ff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_12) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_12)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(20,19, 
                                                                                ((0x7ff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_13) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_13)))))) 
                                                                 + 
                                                                 VL_EXTENDS_II(21,20, 
                                                                               ((0xfff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_14) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_14)))))) 
                                               + VL_EXTENDS_II(22,21, 
                                                               ((0x1fff80U 
                                                                 & ((- (IData)(
                                                                               (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_15) 
                                                                                >> 6U)))) 
                                                                    << 7U)) 
                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_15)))));
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
    if ((5U >= (IData)(this->__PVT__adder__DOT__exp_diff))) {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 
            = (0x3fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
        this->__PVT__adder__DOT___io_out_result_sign_T_4 
            = (0x3fU & ((IData)(this->__PVT__mac_io_out_result_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
    } else {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__adder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__adder__DOT___io_out_result_sign_T_3 
        = (1U & (((IData)(this->__PVT__mac_io_out_result_man) 
                  > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                  ? ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                     >> 6U) : (IData)(this->__PVT__result_buffer_sign)));
    this->__PVT__adder__DOT___io_out_result_sign_T_6 
        = (1U & (((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                  > (IData)(this->__PVT__result_buffer_man))
                  ? ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                     >> 6U) : (IData)(this->__PVT__result_buffer_sign)));
    this->__PVT__adder__DOT__addition = (0x7fU & ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                                   ? 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 6U)) 
                                                    == (IData)(this->__PVT__result_buffer_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__mac_io_out_result_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                    : 
                                                   (0x3fU 
                                                    & (((IData)(this->__PVT__mac_io_out_result_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        ? 
                                                       ((IData)(this->__PVT__mac_io_out_result_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1) 
                                                        - (IData)(this->__PVT__mac_io_out_result_man)))))
                                                   : 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 6U)) 
                                                    == (IData)(this->__PVT__result_buffer_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__result_buffer_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                    : 
                                                   (0x3fU 
                                                    & (((IData)(this->__PVT__result_buffer_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        ? 
                                                       ((IData)(this->__PVT__result_buffer_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                        - (IData)(this->__PVT__result_buffer_man)))))));
}

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_12__285(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_12__285\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT___sum_T_9 = (0x1ffffU & (
                                                   VL_EXTENDS_II(17,16, 
                                                                 (0xffffU 
                                                                  & (VL_EXTENDS_II(16,15, 
                                                                                (0x7fffU 
                                                                                & (VL_EXTENDS_II(15,14, 
                                                                                (0x3fffU 
                                                                                & (VL_EXTENDS_II(14,13, 
                                                                                (0x1fffU 
                                                                                & (VL_EXTENDS_II(13,12, 
                                                                                (0xfffU 
                                                                                & (VL_EXTENDS_II(12,11, 
                                                                                (0x7ffU 
                                                                                & (VL_EXTENDS_II(11,10, 
                                                                                (0x3ffU 
                                                                                & (VL_EXTENDS_II(10,9, 
                                                                                (0x1ffU 
                                                                                & (VL_EXTENDS_II(9,8, 
                                                                                (0xffU 
                                                                                & (VL_EXTENDS_II(8,7, (IData)(this->__PVT__mac__DOT__two_complement_buffer_0)) 
                                                                                + 
                                                                                VL_EXTENDS_II(8,7, (IData)(this->__PVT__mac__DOT__two_complement_buffer_1))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(9,8, 
                                                                                ((0x80U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_2) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_2)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(10,9, 
                                                                                ((0x180U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_3) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_3)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(11,10, 
                                                                                ((0x380U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_4) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_4)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(12,11, 
                                                                                ((0x780U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_5) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_5)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(13,12, 
                                                                                ((0xf80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_6) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_6)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(14,13, 
                                                                                ((0x1f80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_7) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_7)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(15,14, 
                                                                                ((0x3f80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_8) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_8)))))) 
                                                                     + 
                                                                     VL_EXTENDS_II(16,15, 
                                                                                ((0x7f80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_9) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_9)))))) 
                                                   + 
                                                   VL_EXTENDS_II(17,16, 
                                                                 ((0xff80U 
                                                                   & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_10) 
                                                                                >> 6U)))) 
                                                                      << 7U)) 
                                                                  | (IData)(this->__PVT__mac__DOT__two_complement_buffer_10)))));
    this->__PVT__mac_io_out_result_man = (0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(this->__PVT__mac__DOT__acc_hbfp)
                                                    : 
                                                   ((0xfU 
                                                     < 
                                                     (0x3fU 
                                                      & (IData)(this->__PVT__mac__DOT__acc_hbfp)))
                                                     ? 0xfU
                                                     : (IData)(this->__PVT__mac__DOT__acc_hbfp))));
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_hor_r_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_hor_r_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_r_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_r_man_0)))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_hor_r_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_hor_r_man_1))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_r_man_1))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_r_man_1)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_hor_r_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_hor_r_man_2))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_r_man_2))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_r_man_2)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_hor_r_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_hor_r_man_3))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_r_man_3))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_r_man_3)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_hor_r_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_hor_r_man_4))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_r_man_4))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_r_man_4)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_hor_r_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_hor_r_man_5))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_r_man_5))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_r_man_5)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_hor_r_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_hor_r_man_6))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_r_man_6))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_r_man_6)))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_hor_r_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_hor_r_man_7))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_r_man_7))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_r_man_7)))));
    this->__PVT__mac__DOT__multiplier_1_8_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_hor_r_man_8))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_hor_r_man_8))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_r_man_8))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_r_man_8)))));
    this->__PVT__mac__DOT__multiplier_1_9_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_hor_r_man_9))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_hor_r_man_9))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_r_man_9))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_r_man_9)))));
    this->__PVT__mac__DOT__multiplier_1_10_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_hor_r_man_10))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_hor_r_man_10))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_r_man_10))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_r_man_10)))));
    this->__PVT__mac__DOT__multiplier_1_11_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_hor_r_man_11))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_hor_r_man_11))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_r_man_11))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_r_man_11)))));
    this->__PVT__mac__DOT__multiplier_1_12_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_hor_r_man_12))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_hor_r_man_12))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_r_man_12))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_r_man_12)))));
    this->__PVT__mac__DOT__multiplier_1_13_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_hor_r_man_13))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_hor_r_man_13))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_r_man_13))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_r_man_13)))));
    this->__PVT__mac__DOT__multiplier_1_14_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_hor_r_man_14))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_hor_r_man_14))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_r_man_14))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_r_man_14)))));
    this->__PVT__mac__DOT__multiplier_1_15_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_hor_r_man_15))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_hor_r_man_15))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_r_man_15))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_r_man_15)))));
    this->__PVT__mac__DOT__sum = (0x3fffffU & (VL_EXTENDS_II(22,21, 
                                                             (0x1fffffU 
                                                              & (VL_EXTENDS_II(21,20, 
                                                                               (0xfffffU 
                                                                                & (VL_EXTENDS_II(20,19, 
                                                                                (0x7ffffU 
                                                                                & (VL_EXTENDS_II(19,18, 
                                                                                (0x3ffffU 
                                                                                & (VL_EXTENDS_II(18,17, this->__PVT__mac__DOT___sum_T_9) 
                                                                                + 
                                                                                VL_EXTENDS_II(18,17, 
                                                                                ((0x1ff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_11) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_11)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(19,18, 
                                                                                ((0x3ff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_12) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_12)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(20,19, 
                                                                                ((0x7ff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_13) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_13)))))) 
                                                                 + 
                                                                 VL_EXTENDS_II(21,20, 
                                                                               ((0xfff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_14) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_14)))))) 
                                               + VL_EXTENDS_II(22,21, 
                                                               ((0x1fff80U 
                                                                 & ((- (IData)(
                                                                               (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_15) 
                                                                                >> 6U)))) 
                                                                    << 7U)) 
                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_15)))));
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
    if ((5U >= (IData)(this->__PVT__adder__DOT__exp_diff))) {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 
            = (0x3fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
        this->__PVT__adder__DOT___io_out_result_sign_T_4 
            = (0x3fU & ((IData)(this->__PVT__mac_io_out_result_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
    } else {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__adder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__adder__DOT___io_out_result_sign_T_3 
        = (1U & (((IData)(this->__PVT__mac_io_out_result_man) 
                  > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                  ? ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                     >> 6U) : (IData)(this->__PVT__result_buffer_sign)));
    this->__PVT__adder__DOT___io_out_result_sign_T_6 
        = (1U & (((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                  > (IData)(this->__PVT__result_buffer_man))
                  ? ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                     >> 6U) : (IData)(this->__PVT__result_buffer_sign)));
    this->__PVT__adder__DOT__addition = (0x7fU & ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                                   ? 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 6U)) 
                                                    == (IData)(this->__PVT__result_buffer_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__mac_io_out_result_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                    : 
                                                   (0x3fU 
                                                    & (((IData)(this->__PVT__mac_io_out_result_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        ? 
                                                       ((IData)(this->__PVT__mac_io_out_result_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1) 
                                                        - (IData)(this->__PVT__mac_io_out_result_man)))))
                                                   : 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 6U)) 
                                                    == (IData)(this->__PVT__result_buffer_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__result_buffer_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                    : 
                                                   (0x3fU 
                                                    & (((IData)(this->__PVT__result_buffer_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        ? 
                                                       ((IData)(this->__PVT__result_buffer_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                        - (IData)(this->__PVT__result_buffer_man)))))));
}

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_13__286(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_13__286\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT___sum_T_9 = (0x1ffffU & (
                                                   VL_EXTENDS_II(17,16, 
                                                                 (0xffffU 
                                                                  & (VL_EXTENDS_II(16,15, 
                                                                                (0x7fffU 
                                                                                & (VL_EXTENDS_II(15,14, 
                                                                                (0x3fffU 
                                                                                & (VL_EXTENDS_II(14,13, 
                                                                                (0x1fffU 
                                                                                & (VL_EXTENDS_II(13,12, 
                                                                                (0xfffU 
                                                                                & (VL_EXTENDS_II(12,11, 
                                                                                (0x7ffU 
                                                                                & (VL_EXTENDS_II(11,10, 
                                                                                (0x3ffU 
                                                                                & (VL_EXTENDS_II(10,9, 
                                                                                (0x1ffU 
                                                                                & (VL_EXTENDS_II(9,8, 
                                                                                (0xffU 
                                                                                & (VL_EXTENDS_II(8,7, (IData)(this->__PVT__mac__DOT__two_complement_buffer_0)) 
                                                                                + 
                                                                                VL_EXTENDS_II(8,7, (IData)(this->__PVT__mac__DOT__two_complement_buffer_1))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(9,8, 
                                                                                ((0x80U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_2) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_2)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(10,9, 
                                                                                ((0x180U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_3) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_3)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(11,10, 
                                                                                ((0x380U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_4) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_4)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(12,11, 
                                                                                ((0x780U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_5) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_5)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(13,12, 
                                                                                ((0xf80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_6) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_6)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(14,13, 
                                                                                ((0x1f80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_7) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_7)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(15,14, 
                                                                                ((0x3f80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_8) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_8)))))) 
                                                                     + 
                                                                     VL_EXTENDS_II(16,15, 
                                                                                ((0x7f80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_9) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_9)))))) 
                                                   + 
                                                   VL_EXTENDS_II(17,16, 
                                                                 ((0xff80U 
                                                                   & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_10) 
                                                                                >> 6U)))) 
                                                                      << 7U)) 
                                                                  | (IData)(this->__PVT__mac__DOT__two_complement_buffer_10)))));
    this->__PVT__mac_io_out_result_man = (0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(this->__PVT__mac__DOT__acc_hbfp)
                                                    : 
                                                   ((0xfU 
                                                     < 
                                                     (0x3fU 
                                                      & (IData)(this->__PVT__mac__DOT__acc_hbfp)))
                                                     ? 0xfU
                                                     : (IData)(this->__PVT__mac__DOT__acc_hbfp))));
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_hor_r_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_hor_r_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_r_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_r_man_0)))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_hor_r_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_hor_r_man_1))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_r_man_1))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_r_man_1)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_hor_r_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_hor_r_man_2))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_r_man_2))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_r_man_2)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_hor_r_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_hor_r_man_3))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_r_man_3))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_r_man_3)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_hor_r_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_hor_r_man_4))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_r_man_4))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_r_man_4)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_hor_r_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_hor_r_man_5))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_r_man_5))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_r_man_5)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_hor_r_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_hor_r_man_6))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_r_man_6))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_r_man_6)))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_hor_r_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_hor_r_man_7))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_r_man_7))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_r_man_7)))));
    this->__PVT__mac__DOT__multiplier_1_8_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_hor_r_man_8))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_hor_r_man_8))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_r_man_8))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_r_man_8)))));
    this->__PVT__mac__DOT__multiplier_1_9_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_hor_r_man_9))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_hor_r_man_9))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_r_man_9))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_r_man_9)))));
    this->__PVT__mac__DOT__multiplier_1_10_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_hor_r_man_10))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_hor_r_man_10))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_r_man_10))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_r_man_10)))));
    this->__PVT__mac__DOT__multiplier_1_11_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_hor_r_man_11))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_hor_r_man_11))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_r_man_11))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_r_man_11)))));
    this->__PVT__mac__DOT__multiplier_1_12_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_hor_r_man_12))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_hor_r_man_12))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_r_man_12))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_r_man_12)))));
    this->__PVT__mac__DOT__multiplier_1_13_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_hor_r_man_13))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_hor_r_man_13))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_r_man_13))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_r_man_13)))));
    this->__PVT__mac__DOT__multiplier_1_14_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_hor_r_man_14))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_hor_r_man_14))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_r_man_14))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_r_man_14)))));
    this->__PVT__mac__DOT__multiplier_1_15_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_hor_r_man_15))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_hor_r_man_15))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_r_man_15))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_r_man_15)))));
    this->__PVT__mac__DOT__sum = (0x3fffffU & (VL_EXTENDS_II(22,21, 
                                                             (0x1fffffU 
                                                              & (VL_EXTENDS_II(21,20, 
                                                                               (0xfffffU 
                                                                                & (VL_EXTENDS_II(20,19, 
                                                                                (0x7ffffU 
                                                                                & (VL_EXTENDS_II(19,18, 
                                                                                (0x3ffffU 
                                                                                & (VL_EXTENDS_II(18,17, this->__PVT__mac__DOT___sum_T_9) 
                                                                                + 
                                                                                VL_EXTENDS_II(18,17, 
                                                                                ((0x1ff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_11) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_11)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(19,18, 
                                                                                ((0x3ff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_12) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_12)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(20,19, 
                                                                                ((0x7ff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_13) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_13)))))) 
                                                                 + 
                                                                 VL_EXTENDS_II(21,20, 
                                                                               ((0xfff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_14) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_14)))))) 
                                               + VL_EXTENDS_II(22,21, 
                                                               ((0x1fff80U 
                                                                 & ((- (IData)(
                                                                               (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_15) 
                                                                                >> 6U)))) 
                                                                    << 7U)) 
                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_15)))));
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
    if ((5U >= (IData)(this->__PVT__adder__DOT__exp_diff))) {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 
            = (0x3fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
        this->__PVT__adder__DOT___io_out_result_sign_T_4 
            = (0x3fU & ((IData)(this->__PVT__mac_io_out_result_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
    } else {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__adder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__adder__DOT___io_out_result_sign_T_3 
        = (1U & (((IData)(this->__PVT__mac_io_out_result_man) 
                  > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                  ? ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                     >> 6U) : (IData)(this->__PVT__result_buffer_sign)));
    this->__PVT__adder__DOT___io_out_result_sign_T_6 
        = (1U & (((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                  > (IData)(this->__PVT__result_buffer_man))
                  ? ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                     >> 6U) : (IData)(this->__PVT__result_buffer_sign)));
    this->__PVT__adder__DOT__addition = (0x7fU & ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                                   ? 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 6U)) 
                                                    == (IData)(this->__PVT__result_buffer_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__mac_io_out_result_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                    : 
                                                   (0x3fU 
                                                    & (((IData)(this->__PVT__mac_io_out_result_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        ? 
                                                       ((IData)(this->__PVT__mac_io_out_result_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1) 
                                                        - (IData)(this->__PVT__mac_io_out_result_man)))))
                                                   : 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 6U)) 
                                                    == (IData)(this->__PVT__result_buffer_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__result_buffer_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                    : 
                                                   (0x3fU 
                                                    & (((IData)(this->__PVT__result_buffer_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        ? 
                                                       ((IData)(this->__PVT__result_buffer_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                        - (IData)(this->__PVT__result_buffer_man)))))));
}