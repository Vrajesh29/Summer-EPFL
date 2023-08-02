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

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_0__65(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_0__65\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT___counter_T_1 = (3U & ((IData)(1U) 
                                                 + (IData)(this->__PVT__mac__DOT__counter)));
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    if (vlTOPp->io_in_flag) {
        this->__PVT__adder_io_in_b_sign = this->__PVT__adder_io_in_b_r_2_sign;
        this->__PVT__adder_io_in_b_man = this->__PVT__adder_io_in_b_r_2_man;
        this->__PVT__adder_io_in_b_exp = this->__PVT__adder_io_in_b_r_2_exp;
    } else {
        this->__PVT__adder_io_in_b_sign = this->__PVT__result_buffer_sign;
        this->__PVT__adder_io_in_b_man = this->__PVT__result_buffer_man;
        this->__PVT__adder_io_in_b_exp = this->__PVT__result_buffer_exp;
    }
    this->__PVT__mac__DOT__sum = (0x3fffU & (VL_EXTENDS_II(14,13, 
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
                                             + VL_EXTENDS_II(14,13, 
                                                             ((0x1f80U 
                                                               & ((- (IData)(
                                                                             (1U 
                                                                              & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_7) 
                                                                                >> 6U)))) 
                                                                  << 7U)) 
                                                              | (IData)(this->__PVT__mac__DOT__two_complement_buffer_7)))));
    this->__PVT__mac_io_out_result_man = (0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(this->__PVT__mac__DOT__acc_hbfp)
                                                    : 
                                                   ((0xfU 
                                                     < 
                                                     (0x3fU 
                                                      & (IData)(this->__PVT__mac__DOT__acc_hbfp)))
                                                     ? 0xfU
                                                     : (IData)(this->__PVT__mac__DOT__acc_hbfp))));
    this->__PVT__adder__DOT___exp_diff_T = ((0xffU 
                                             & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                            > (IData)(this->__PVT__adder_io_in_b_exp));
    this->__PVT__adder__DOT__exp_diff = (0xffU & ((
                                                   (0xffU 
                                                    & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                                   > (IData)(this->__PVT__adder_io_in_b_exp))
                                                   ? 
                                                  ((IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5) 
                                                   - (IData)(this->__PVT__adder_io_in_b_exp))
                                                   : 
                                                  ((IData)(this->__PVT__adder_io_in_b_exp) 
                                                   - (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5))));
    if ((5U >= (IData)(this->__PVT__adder__DOT__exp_diff))) {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 
            = (0x3fU & ((IData)(this->__PVT__adder_io_in_b_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
        this->__PVT__adder__DOT___io_out_result_sign_T_4 
            = (0x3fU & ((IData)(this->__PVT__mac_io_out_result_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
    } else {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__adder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__adder__DOT__addition = (0x7fU & ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                                   ? 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 6U)) 
                                                    == (IData)(this->__PVT__adder_io_in_b_sign))
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
                                                    == (IData)(this->__PVT__adder_io_in_b_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__adder_io_in_b_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                    : 
                                                   (0x3fU 
                                                    & (((IData)(this->__PVT__adder_io_in_b_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        ? 
                                                       ((IData)(this->__PVT__adder_io_in_b_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                        - (IData)(this->__PVT__adder_io_in_b_man)))))));
}

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_0__192(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_0__192\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_0) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_1) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_2) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_3) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_4) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_5) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_6) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_7) 
                     >> 4U));
    } else {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_7;
    }
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((0U 
                                                          == (IData)(this->__PVT__mac__DOT__counter))
                                                          ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2)
                                                          : 
                                                         ((1U 
                                                           == (IData)(this->__PVT__mac__DOT__counter))
                                                           ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6)
                                                           : 
                                                          ((2U 
                                                            == (IData)(this->__PVT__mac__DOT__counter))
                                                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2)
                                                            : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6))))) 
                                                     * 
                                                     (0xfU 
                                                      & ((0U 
                                                          == (IData)(this->__PVT__mac__DOT__counter))
                                                          ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2)
                                                          : 
                                                         ((1U 
                                                           == (IData)(this->__PVT__mac__DOT__counter))
                                                           ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2)
                                                           : 
                                                          ((IData)(vlTOPp->io_in_flag)
                                                            ? 
                                                           (3U 
                                                            & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_0) 
                                                               >> 4U))
                                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_0)))))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_1) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_1)))))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_2) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_2)))))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_3) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_3)))))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_4) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_4)))))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_5) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_5)))))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_6) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_6)))))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_7) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_7)))))));
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___partial_result_T_3 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_15 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_1) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_27 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_2) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_39 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_3) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_51 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_4) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_63 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_5) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_75 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_6) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_87 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_7) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out) 
                             << 4U)));
    } else {
        this->__PVT__mac__DOT___partial_result_T_3 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_io_out));
        this->__PVT__mac__DOT___partial_result_T_15 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out));
        this->__PVT__mac__DOT___partial_result_T_27 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out));
        this->__PVT__mac__DOT___partial_result_T_39 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out));
        this->__PVT__mac__DOT___partial_result_T_51 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out));
        this->__PVT__mac__DOT___partial_result_T_63 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out));
        this->__PVT__mac__DOT___partial_result_T_75 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out));
        this->__PVT__mac__DOT___partial_result_T_87 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out));
    }
    if (vlTOPp->reset) {
        this->__PVT__mac__DOT___GEN_175 = 0U;
        this->__PVT__mac__DOT___GEN_176 = 0U;
        this->__PVT__mac__DOT___GEN_177 = 0U;
        this->__PVT__mac__DOT___GEN_178 = 0U;
        this->__PVT__mac__DOT___GEN_179 = 0U;
        this->__PVT__mac__DOT___GEN_180 = 0U;
        this->__PVT__mac__DOT___GEN_181 = 0U;
        this->__PVT__mac__DOT___GEN_182 = 0U;
    } else {
        this->__PVT__mac__DOT___GEN_175 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_3)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_3)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_io_out))))));
        this->__PVT__mac__DOT___GEN_176 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_15)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_15)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_1) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out))))));
        this->__PVT__mac__DOT___GEN_177 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_27)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_27)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_2) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out))))));
        this->__PVT__mac__DOT___GEN_178 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_39)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_39)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_3) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out))))));
        this->__PVT__mac__DOT___GEN_179 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_51)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_51)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_4) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out))))));
        this->__PVT__mac__DOT___GEN_180 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_63)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_63)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_5) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out))))));
        this->__PVT__mac__DOT___GEN_181 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_75)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_75)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_6) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out))))));
        this->__PVT__mac__DOT___GEN_182 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_87)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_87)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_7) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out))))));
    }
}

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_1__185(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_1__185\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_man_0) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_man_1) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_man_2) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_man_3) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_man_4) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_man_5) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_man_6) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_man_7) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_7));
    } else {
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_7;
    }
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((0U 
                                                          == (IData)(this->__PVT__mac__DOT__counter))
                                                          ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2)
                                                          : 
                                                         ((1U 
                                                           == (IData)(this->__PVT__mac__DOT__counter))
                                                           ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6)
                                                           : 
                                                          ((2U 
                                                            == (IData)(this->__PVT__mac__DOT__counter))
                                                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2)
                                                            : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6))))) 
                                                     * 
                                                     (0xfU 
                                                      & ((0U 
                                                          == (IData)(this->__PVT__mac__DOT__counter))
                                                          ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2)
                                                          : 
                                                         ((1U 
                                                           == (IData)(this->__PVT__mac__DOT__counter))
                                                           ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2)
                                                           : 
                                                          ((IData)(vlTOPp->io_in_flag)
                                                            ? 
                                                           (3U 
                                                            & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_0) 
                                                               >> 4U))
                                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_0)))))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_1) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_1)))))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_2) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_2)))))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_3) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_3)))))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_4) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_4)))))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_5) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_5)))))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_6) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_6)))))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_7) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_7)))))));
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___partial_result_T_3 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_15 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_1) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_27 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_2) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_39 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_3) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_51 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_4) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_63 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_5) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_75 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_6) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_87 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_7) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out) 
                             << 4U)));
    } else {
        this->__PVT__mac__DOT___partial_result_T_3 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_io_out));
        this->__PVT__mac__DOT___partial_result_T_15 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out));
        this->__PVT__mac__DOT___partial_result_T_27 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out));
        this->__PVT__mac__DOT___partial_result_T_39 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out));
        this->__PVT__mac__DOT___partial_result_T_51 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out));
        this->__PVT__mac__DOT___partial_result_T_63 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out));
        this->__PVT__mac__DOT___partial_result_T_75 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out));
        this->__PVT__mac__DOT___partial_result_T_87 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out));
    }
    if (vlTOPp->reset) {
        this->__PVT__mac__DOT___GEN_175 = 0U;
        this->__PVT__mac__DOT___GEN_176 = 0U;
        this->__PVT__mac__DOT___GEN_177 = 0U;
        this->__PVT__mac__DOT___GEN_178 = 0U;
        this->__PVT__mac__DOT___GEN_179 = 0U;
        this->__PVT__mac__DOT___GEN_180 = 0U;
        this->__PVT__mac__DOT___GEN_181 = 0U;
        this->__PVT__mac__DOT___GEN_182 = 0U;
    } else {
        this->__PVT__mac__DOT___GEN_175 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_3)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_3)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_io_out))))));
        this->__PVT__mac__DOT___GEN_176 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_15)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_15)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_1) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out))))));
        this->__PVT__mac__DOT___GEN_177 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_27)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_27)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_2) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out))))));
        this->__PVT__mac__DOT___GEN_178 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_39)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_39)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_3) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out))))));
        this->__PVT__mac__DOT___GEN_179 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_51)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_51)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_4) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out))))));
        this->__PVT__mac__DOT___GEN_180 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_63)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_63)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_5) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out))))));
        this->__PVT__mac__DOT___GEN_181 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_75)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_75)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_6) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out))))));
        this->__PVT__mac__DOT___GEN_182 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_87)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_87)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_7) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out))))));
    }
}

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_2__186(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_2__186\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_man_0) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_man_1) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_man_2) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_man_3) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_man_4) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_man_5) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_man_6) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_man_7) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_7));
    } else {
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_7;
    }
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((0U 
                                                          == (IData)(this->__PVT__mac__DOT__counter))
                                                          ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2)
                                                          : 
                                                         ((1U 
                                                           == (IData)(this->__PVT__mac__DOT__counter))
                                                           ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6)
                                                           : 
                                                          ((2U 
                                                            == (IData)(this->__PVT__mac__DOT__counter))
                                                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2)
                                                            : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6))))) 
                                                     * 
                                                     (0xfU 
                                                      & ((0U 
                                                          == (IData)(this->__PVT__mac__DOT__counter))
                                                          ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2)
                                                          : 
                                                         ((1U 
                                                           == (IData)(this->__PVT__mac__DOT__counter))
                                                           ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2)
                                                           : 
                                                          ((IData)(vlTOPp->io_in_flag)
                                                            ? 
                                                           (3U 
                                                            & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_0) 
                                                               >> 4U))
                                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_0)))))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_1) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_1)))))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_2) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_2)))))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_3) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_3)))))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_4) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_4)))))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_5) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_5)))))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_6) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_6)))))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_7) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_7)))))));
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___partial_result_T_3 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_15 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_1) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_27 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_2) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_39 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_3) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_51 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_4) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_63 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_5) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_75 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_6) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_87 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_7) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out) 
                             << 4U)));
    } else {
        this->__PVT__mac__DOT___partial_result_T_3 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_io_out));
        this->__PVT__mac__DOT___partial_result_T_15 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out));
        this->__PVT__mac__DOT___partial_result_T_27 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out));
        this->__PVT__mac__DOT___partial_result_T_39 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out));
        this->__PVT__mac__DOT___partial_result_T_51 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out));
        this->__PVT__mac__DOT___partial_result_T_63 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out));
        this->__PVT__mac__DOT___partial_result_T_75 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out));
        this->__PVT__mac__DOT___partial_result_T_87 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out));
    }
    if (vlTOPp->reset) {
        this->__PVT__mac__DOT___GEN_175 = 0U;
        this->__PVT__mac__DOT___GEN_176 = 0U;
        this->__PVT__mac__DOT___GEN_177 = 0U;
        this->__PVT__mac__DOT___GEN_178 = 0U;
        this->__PVT__mac__DOT___GEN_179 = 0U;
        this->__PVT__mac__DOT___GEN_180 = 0U;
        this->__PVT__mac__DOT___GEN_181 = 0U;
        this->__PVT__mac__DOT___GEN_182 = 0U;
    } else {
        this->__PVT__mac__DOT___GEN_175 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_3)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_3)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_io_out))))));
        this->__PVT__mac__DOT___GEN_176 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_15)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_15)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_1) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out))))));
        this->__PVT__mac__DOT___GEN_177 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_27)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_27)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_2) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out))))));
        this->__PVT__mac__DOT___GEN_178 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_39)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_39)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_3) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out))))));
        this->__PVT__mac__DOT___GEN_179 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_51)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_51)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_4) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out))))));
        this->__PVT__mac__DOT___GEN_180 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_63)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_63)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_5) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out))))));
        this->__PVT__mac__DOT___GEN_181 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_75)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_75)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_6) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out))))));
        this->__PVT__mac__DOT___GEN_182 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_87)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_87)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_7) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out))))));
    }
}

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_3__187(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_3__187\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_man_0) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_man_1) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_man_2) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_man_3) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_man_4) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_man_5) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_man_6) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_man_7) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_7));
    } else {
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_7;
    }
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((0U 
                                                          == (IData)(this->__PVT__mac__DOT__counter))
                                                          ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2)
                                                          : 
                                                         ((1U 
                                                           == (IData)(this->__PVT__mac__DOT__counter))
                                                           ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6)
                                                           : 
                                                          ((2U 
                                                            == (IData)(this->__PVT__mac__DOT__counter))
                                                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2)
                                                            : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6))))) 
                                                     * 
                                                     (0xfU 
                                                      & ((0U 
                                                          == (IData)(this->__PVT__mac__DOT__counter))
                                                          ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2)
                                                          : 
                                                         ((1U 
                                                           == (IData)(this->__PVT__mac__DOT__counter))
                                                           ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2)
                                                           : 
                                                          ((IData)(vlTOPp->io_in_flag)
                                                            ? 
                                                           (3U 
                                                            & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_0) 
                                                               >> 4U))
                                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_0)))))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_1) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_1)))))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_2) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_2)))))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_3) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_3)))))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_4) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_4)))))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_5) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_5)))))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_6) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_6)))))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_7) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_7)))))));
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___partial_result_T_3 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_15 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_1) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_27 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_2) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_39 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_3) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_51 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_4) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_63 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_5) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_75 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_6) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_87 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_7) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out) 
                             << 4U)));
    } else {
        this->__PVT__mac__DOT___partial_result_T_3 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_io_out));
        this->__PVT__mac__DOT___partial_result_T_15 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out));
        this->__PVT__mac__DOT___partial_result_T_27 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out));
        this->__PVT__mac__DOT___partial_result_T_39 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out));
        this->__PVT__mac__DOT___partial_result_T_51 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out));
        this->__PVT__mac__DOT___partial_result_T_63 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out));
        this->__PVT__mac__DOT___partial_result_T_75 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out));
        this->__PVT__mac__DOT___partial_result_T_87 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out));
    }
    if (vlTOPp->reset) {
        this->__PVT__mac__DOT___GEN_175 = 0U;
        this->__PVT__mac__DOT___GEN_176 = 0U;
        this->__PVT__mac__DOT___GEN_177 = 0U;
        this->__PVT__mac__DOT___GEN_178 = 0U;
        this->__PVT__mac__DOT___GEN_179 = 0U;
        this->__PVT__mac__DOT___GEN_180 = 0U;
        this->__PVT__mac__DOT___GEN_181 = 0U;
        this->__PVT__mac__DOT___GEN_182 = 0U;
    } else {
        this->__PVT__mac__DOT___GEN_175 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_3)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_3)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_io_out))))));
        this->__PVT__mac__DOT___GEN_176 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_15)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_15)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_1) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out))))));
        this->__PVT__mac__DOT___GEN_177 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_27)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_27)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_2) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out))))));
        this->__PVT__mac__DOT___GEN_178 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_39)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_39)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_3) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out))))));
        this->__PVT__mac__DOT___GEN_179 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_51)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_51)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_4) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out))))));
        this->__PVT__mac__DOT___GEN_180 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_63)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_63)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_5) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out))))));
        this->__PVT__mac__DOT___GEN_181 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_75)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_75)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_6) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out))))));
        this->__PVT__mac__DOT___GEN_182 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_87)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_87)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_7) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out))))));
    }
}

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_4__188(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_4__188\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_hor_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_hor_man_0) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_hor_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_hor_man_1) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_hor_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_hor_man_2) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_hor_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_hor_man_3) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_hor_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_hor_man_4) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_hor_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_hor_man_5) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_hor_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_hor_man_6) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_hor_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_hor_man_7) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_ver_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_ver_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_ver_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_ver_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_ver_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_ver_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_ver_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_ver_man_7));
    } else {
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_ver_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_ver_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_ver_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_ver_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_ver_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_ver_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_ver_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_ver_man_7;
    }
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((0U 
                                                          == (IData)(this->__PVT__mac__DOT__counter))
                                                          ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2)
                                                          : 
                                                         ((1U 
                                                           == (IData)(this->__PVT__mac__DOT__counter))
                                                           ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6)
                                                           : 
                                                          ((2U 
                                                            == (IData)(this->__PVT__mac__DOT__counter))
                                                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2)
                                                            : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6))))) 
                                                     * 
                                                     (0xfU 
                                                      & ((0U 
                                                          == (IData)(this->__PVT__mac__DOT__counter))
                                                          ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2)
                                                          : 
                                                         ((1U 
                                                           == (IData)(this->__PVT__mac__DOT__counter))
                                                           ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2)
                                                           : 
                                                          ((IData)(vlTOPp->io_in_flag)
                                                            ? 
                                                           (3U 
                                                            & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_ver_man_0) 
                                                               >> 4U))
                                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_ver_man_0)))))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_ver_man_1) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_ver_man_1)))))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_ver_man_2) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_ver_man_2)))))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_ver_man_3) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_ver_man_3)))))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_ver_man_4) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_ver_man_4)))))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_ver_man_5) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_ver_man_5)))))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_ver_man_6) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_ver_man_6)))))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_ver_man_7) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_4_io_in_ver_man_7)))))));
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___partial_result_T_3 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_15 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_1) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_27 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_2) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_39 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_3) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_51 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_4) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_63 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_5) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_75 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_6) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_87 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_7) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out) 
                             << 4U)));
    } else {
        this->__PVT__mac__DOT___partial_result_T_3 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_io_out));
        this->__PVT__mac__DOT___partial_result_T_15 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out));
        this->__PVT__mac__DOT___partial_result_T_27 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out));
        this->__PVT__mac__DOT___partial_result_T_39 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out));
        this->__PVT__mac__DOT___partial_result_T_51 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out));
        this->__PVT__mac__DOT___partial_result_T_63 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out));
        this->__PVT__mac__DOT___partial_result_T_75 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out));
        this->__PVT__mac__DOT___partial_result_T_87 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out));
    }
    if (vlTOPp->reset) {
        this->__PVT__mac__DOT___GEN_175 = 0U;
        this->__PVT__mac__DOT___GEN_176 = 0U;
        this->__PVT__mac__DOT___GEN_177 = 0U;
        this->__PVT__mac__DOT___GEN_178 = 0U;
        this->__PVT__mac__DOT___GEN_179 = 0U;
        this->__PVT__mac__DOT___GEN_180 = 0U;
        this->__PVT__mac__DOT___GEN_181 = 0U;
        this->__PVT__mac__DOT___GEN_182 = 0U;
    } else {
        this->__PVT__mac__DOT___GEN_175 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_3)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_3)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_io_out))))));
        this->__PVT__mac__DOT___GEN_176 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_15)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_15)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_1) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out))))));
        this->__PVT__mac__DOT___GEN_177 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_27)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_27)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_2) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out))))));
        this->__PVT__mac__DOT___GEN_178 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_39)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_39)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_3) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out))))));
        this->__PVT__mac__DOT___GEN_179 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_51)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_51)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_4) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out))))));
        this->__PVT__mac__DOT___GEN_180 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_63)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_63)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_5) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out))))));
        this->__PVT__mac__DOT___GEN_181 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_75)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_75)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_6) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out))))));
        this->__PVT__mac__DOT___GEN_182 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_87)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_87)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_7) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out))))));
    }
}

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_5__189(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_5__189\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_hor_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_hor_man_0) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_hor_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_hor_man_1) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_hor_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_hor_man_2) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_hor_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_hor_man_3) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_hor_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_hor_man_4) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_hor_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_hor_man_5) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_hor_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_hor_man_6) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_hor_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_hor_man_7) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_ver_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_ver_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_ver_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_ver_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_ver_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_ver_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_ver_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_ver_man_7));
    } else {
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_ver_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_ver_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_ver_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_ver_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_ver_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_ver_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_ver_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_ver_man_7;
    }
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((0U 
                                                          == (IData)(this->__PVT__mac__DOT__counter))
                                                          ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2)
                                                          : 
                                                         ((1U 
                                                           == (IData)(this->__PVT__mac__DOT__counter))
                                                           ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6)
                                                           : 
                                                          ((2U 
                                                            == (IData)(this->__PVT__mac__DOT__counter))
                                                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2)
                                                            : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6))))) 
                                                     * 
                                                     (0xfU 
                                                      & ((0U 
                                                          == (IData)(this->__PVT__mac__DOT__counter))
                                                          ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2)
                                                          : 
                                                         ((1U 
                                                           == (IData)(this->__PVT__mac__DOT__counter))
                                                           ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2)
                                                           : 
                                                          ((IData)(vlTOPp->io_in_flag)
                                                            ? 
                                                           (3U 
                                                            & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_ver_man_0) 
                                                               >> 4U))
                                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_ver_man_0)))))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_ver_man_1) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_ver_man_1)))))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_ver_man_2) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_ver_man_2)))))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_ver_man_3) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_ver_man_3)))))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_ver_man_4) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_ver_man_4)))))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_ver_man_5) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_ver_man_5)))))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_ver_man_6) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_ver_man_6)))))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_ver_man_7) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_5_io_in_ver_man_7)))))));
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___partial_result_T_3 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_15 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_1) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_27 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_2) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_39 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_3) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_51 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_4) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_63 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_5) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_75 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_6) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_87 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_7) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out) 
                             << 4U)));
    } else {
        this->__PVT__mac__DOT___partial_result_T_3 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_io_out));
        this->__PVT__mac__DOT___partial_result_T_15 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out));
        this->__PVT__mac__DOT___partial_result_T_27 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out));
        this->__PVT__mac__DOT___partial_result_T_39 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out));
        this->__PVT__mac__DOT___partial_result_T_51 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out));
        this->__PVT__mac__DOT___partial_result_T_63 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out));
        this->__PVT__mac__DOT___partial_result_T_75 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out));
        this->__PVT__mac__DOT___partial_result_T_87 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out));
    }
    if (vlTOPp->reset) {
        this->__PVT__mac__DOT___GEN_175 = 0U;
        this->__PVT__mac__DOT___GEN_176 = 0U;
        this->__PVT__mac__DOT___GEN_177 = 0U;
        this->__PVT__mac__DOT___GEN_178 = 0U;
        this->__PVT__mac__DOT___GEN_179 = 0U;
        this->__PVT__mac__DOT___GEN_180 = 0U;
        this->__PVT__mac__DOT___GEN_181 = 0U;
        this->__PVT__mac__DOT___GEN_182 = 0U;
    } else {
        this->__PVT__mac__DOT___GEN_175 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_3)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_3)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_io_out))))));
        this->__PVT__mac__DOT___GEN_176 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_15)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_15)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_1) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out))))));
        this->__PVT__mac__DOT___GEN_177 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_27)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_27)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_2) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out))))));
        this->__PVT__mac__DOT___GEN_178 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_39)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_39)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_3) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out))))));
        this->__PVT__mac__DOT___GEN_179 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_51)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_51)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_4) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out))))));
        this->__PVT__mac__DOT___GEN_180 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_63)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_63)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_5) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out))))));
        this->__PVT__mac__DOT___GEN_181 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_75)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_75)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_6) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out))))));
        this->__PVT__mac__DOT___GEN_182 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_87)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_87)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_7) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out))))));
    }
}

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_6__190(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_6__190\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_hor_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_hor_man_0) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_hor_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_hor_man_1) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_hor_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_hor_man_2) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_hor_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_hor_man_3) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_hor_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_hor_man_4) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_hor_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_hor_man_5) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_hor_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_hor_man_6) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_hor_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_hor_man_7) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_ver_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_ver_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_ver_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_ver_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_ver_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_ver_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_ver_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_ver_man_7));
    } else {
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_ver_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_ver_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_ver_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_ver_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_ver_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_ver_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_ver_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_ver_man_7;
    }
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((0U 
                                                          == (IData)(this->__PVT__mac__DOT__counter))
                                                          ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2)
                                                          : 
                                                         ((1U 
                                                           == (IData)(this->__PVT__mac__DOT__counter))
                                                           ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6)
                                                           : 
                                                          ((2U 
                                                            == (IData)(this->__PVT__mac__DOT__counter))
                                                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2)
                                                            : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6))))) 
                                                     * 
                                                     (0xfU 
                                                      & ((0U 
                                                          == (IData)(this->__PVT__mac__DOT__counter))
                                                          ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2)
                                                          : 
                                                         ((1U 
                                                           == (IData)(this->__PVT__mac__DOT__counter))
                                                           ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2)
                                                           : 
                                                          ((IData)(vlTOPp->io_in_flag)
                                                            ? 
                                                           (3U 
                                                            & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_ver_man_0) 
                                                               >> 4U))
                                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_ver_man_0)))))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_ver_man_1) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_ver_man_1)))))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_ver_man_2) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_ver_man_2)))))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_ver_man_3) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_ver_man_3)))))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_ver_man_4) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_ver_man_4)))))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_ver_man_5) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_ver_man_5)))))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_ver_man_6) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_ver_man_6)))))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_ver_man_7) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_6_io_in_ver_man_7)))))));
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___partial_result_T_3 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_15 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_1) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_27 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_2) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_39 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_3) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_51 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_4) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_63 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_5) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_75 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_6) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_87 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_7) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out) 
                             << 4U)));
    } else {
        this->__PVT__mac__DOT___partial_result_T_3 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_io_out));
        this->__PVT__mac__DOT___partial_result_T_15 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out));
        this->__PVT__mac__DOT___partial_result_T_27 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out));
        this->__PVT__mac__DOT___partial_result_T_39 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out));
        this->__PVT__mac__DOT___partial_result_T_51 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out));
        this->__PVT__mac__DOT___partial_result_T_63 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out));
        this->__PVT__mac__DOT___partial_result_T_75 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out));
        this->__PVT__mac__DOT___partial_result_T_87 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out));
    }
    if (vlTOPp->reset) {
        this->__PVT__mac__DOT___GEN_175 = 0U;
        this->__PVT__mac__DOT___GEN_176 = 0U;
        this->__PVT__mac__DOT___GEN_177 = 0U;
        this->__PVT__mac__DOT___GEN_178 = 0U;
        this->__PVT__mac__DOT___GEN_179 = 0U;
        this->__PVT__mac__DOT___GEN_180 = 0U;
        this->__PVT__mac__DOT___GEN_181 = 0U;
        this->__PVT__mac__DOT___GEN_182 = 0U;
    } else {
        this->__PVT__mac__DOT___GEN_175 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_3)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_3)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_io_out))))));
        this->__PVT__mac__DOT___GEN_176 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_15)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_15)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_1) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out))))));
        this->__PVT__mac__DOT___GEN_177 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_27)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_27)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_2) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out))))));
        this->__PVT__mac__DOT___GEN_178 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_39)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_39)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_3) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out))))));
        this->__PVT__mac__DOT___GEN_179 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_51)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_51)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_4) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out))))));
        this->__PVT__mac__DOT___GEN_180 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_63)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_63)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_5) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out))))));
        this->__PVT__mac__DOT___GEN_181 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_75)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_75)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_6) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out))))));
        this->__PVT__mac__DOT___GEN_182 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_87)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_87)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_7) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out))))));
    }
}

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_7__191(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_7__191\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_hor_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_hor_man_0) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_hor_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_hor_man_1) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_hor_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_hor_man_2) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_hor_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_hor_man_3) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_hor_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_hor_man_4) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_hor_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_hor_man_5) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_hor_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_hor_man_6) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_hor_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_hor_man_7) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_ver_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_ver_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_ver_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_ver_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_ver_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_ver_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_ver_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_ver_man_7));
    } else {
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_ver_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_ver_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_ver_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_ver_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_ver_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_ver_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_ver_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_ver_man_7;
    }
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((0U 
                                                          == (IData)(this->__PVT__mac__DOT__counter))
                                                          ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2)
                                                          : 
                                                         ((1U 
                                                           == (IData)(this->__PVT__mac__DOT__counter))
                                                           ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6)
                                                           : 
                                                          ((2U 
                                                            == (IData)(this->__PVT__mac__DOT__counter))
                                                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2)
                                                            : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6))))) 
                                                     * 
                                                     (0xfU 
                                                      & ((0U 
                                                          == (IData)(this->__PVT__mac__DOT__counter))
                                                          ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2)
                                                          : 
                                                         ((1U 
                                                           == (IData)(this->__PVT__mac__DOT__counter))
                                                           ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2)
                                                           : 
                                                          ((IData)(vlTOPp->io_in_flag)
                                                            ? 
                                                           (3U 
                                                            & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_ver_man_0) 
                                                               >> 4U))
                                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_ver_man_0)))))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_ver_man_1) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_ver_man_1)))))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_ver_man_2) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_ver_man_2)))))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_ver_man_3) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_ver_man_3)))))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_ver_man_4) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_ver_man_4)))))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_ver_man_5) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_ver_man_5)))))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_ver_man_6) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_ver_man_6)))))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_ver_man_7) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_7_io_in_ver_man_7)))))));
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___partial_result_T_3 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_15 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_1) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_27 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_2) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_39 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_3) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_51 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_4) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_63 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_5) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_75 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_6) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_87 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_7) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out) 
                             << 4U)));
    } else {
        this->__PVT__mac__DOT___partial_result_T_3 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_io_out));
        this->__PVT__mac__DOT___partial_result_T_15 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out));
        this->__PVT__mac__DOT___partial_result_T_27 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out));
        this->__PVT__mac__DOT___partial_result_T_39 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out));
        this->__PVT__mac__DOT___partial_result_T_51 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out));
        this->__PVT__mac__DOT___partial_result_T_63 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out));
        this->__PVT__mac__DOT___partial_result_T_75 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out));
        this->__PVT__mac__DOT___partial_result_T_87 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out));
    }
    if (vlTOPp->reset) {
        this->__PVT__mac__DOT___GEN_175 = 0U;
        this->__PVT__mac__DOT___GEN_176 = 0U;
        this->__PVT__mac__DOT___GEN_177 = 0U;
        this->__PVT__mac__DOT___GEN_178 = 0U;
        this->__PVT__mac__DOT___GEN_179 = 0U;
        this->__PVT__mac__DOT___GEN_180 = 0U;
        this->__PVT__mac__DOT___GEN_181 = 0U;
        this->__PVT__mac__DOT___GEN_182 = 0U;
    } else {
        this->__PVT__mac__DOT___GEN_175 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_3)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_3)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_io_out))))));
        this->__PVT__mac__DOT___GEN_176 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_15)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_15)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_1) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out))))));
        this->__PVT__mac__DOT___GEN_177 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_27)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_27)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_2) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out))))));
        this->__PVT__mac__DOT___GEN_178 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_39)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_39)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_3) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out))))));
        this->__PVT__mac__DOT___GEN_179 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_51)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_51)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_4) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out))))));
        this->__PVT__mac__DOT___GEN_180 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_63)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_63)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_5) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out))))));
        this->__PVT__mac__DOT___GEN_181 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_75)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_75)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_6) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out))))));
        this->__PVT__mac__DOT___GEN_182 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_87)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_87)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_7) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out))))));
    }
}

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_0__129(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_0__129\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_0) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_1) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_2) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_3) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_4) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_5) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_6) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_7) 
                     >> 4U));
    } else {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_7;
    }
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((0U 
                                                          == (IData)(this->__PVT__mac__DOT__counter))
                                                          ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2)
                                                          : 
                                                         ((1U 
                                                           == (IData)(this->__PVT__mac__DOT__counter))
                                                           ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6)
                                                           : 
                                                          ((2U 
                                                            == (IData)(this->__PVT__mac__DOT__counter))
                                                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2)
                                                            : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6))))) 
                                                     * 
                                                     (0xfU 
                                                      & ((0U 
                                                          == (IData)(this->__PVT__mac__DOT__counter))
                                                          ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2)
                                                          : 
                                                         ((1U 
                                                           == (IData)(this->__PVT__mac__DOT__counter))
                                                           ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2)
                                                           : 
                                                          ((IData)(vlTOPp->io_in_flag)
                                                            ? 
                                                           (3U 
                                                            & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_man_0) 
                                                               >> 4U))
                                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_man_0)))))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_man_1) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_man_1)))))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_man_2) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_man_2)))))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_man_3) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_man_3)))))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_man_4) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_man_4)))))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_man_5) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_man_5)))))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_man_6) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_man_6)))))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_man_7) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_man_7)))))));
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___partial_result_T_3 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_15 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_1) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_27 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_2) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_39 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_3) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_51 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_4) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_63 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_5) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_75 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_6) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_87 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_7) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out) 
                             << 4U)));
    } else {
        this->__PVT__mac__DOT___partial_result_T_3 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_io_out));
        this->__PVT__mac__DOT___partial_result_T_15 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out));
        this->__PVT__mac__DOT___partial_result_T_27 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out));
        this->__PVT__mac__DOT___partial_result_T_39 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out));
        this->__PVT__mac__DOT___partial_result_T_51 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out));
        this->__PVT__mac__DOT___partial_result_T_63 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out));
        this->__PVT__mac__DOT___partial_result_T_75 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out));
        this->__PVT__mac__DOT___partial_result_T_87 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out));
    }
    if (vlTOPp->reset) {
        this->__PVT__mac__DOT___GEN_175 = 0U;
        this->__PVT__mac__DOT___GEN_176 = 0U;
        this->__PVT__mac__DOT___GEN_177 = 0U;
        this->__PVT__mac__DOT___GEN_178 = 0U;
        this->__PVT__mac__DOT___GEN_179 = 0U;
        this->__PVT__mac__DOT___GEN_180 = 0U;
        this->__PVT__mac__DOT___GEN_181 = 0U;
        this->__PVT__mac__DOT___GEN_182 = 0U;
    } else {
        this->__PVT__mac__DOT___GEN_175 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_3)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_3)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_io_out))))));
        this->__PVT__mac__DOT___GEN_176 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_15)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_15)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_1) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out))))));
        this->__PVT__mac__DOT___GEN_177 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_27)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_27)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_2) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out))))));
        this->__PVT__mac__DOT___GEN_178 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_39)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_39)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_3) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out))))));
        this->__PVT__mac__DOT___GEN_179 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_51)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_51)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_4) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out))))));
        this->__PVT__mac__DOT___GEN_180 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_63)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_63)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_5) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out))))));
        this->__PVT__mac__DOT___GEN_181 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_75)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_75)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_6) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out))))));
        this->__PVT__mac__DOT___GEN_182 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_87)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_87)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_7) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out))))));
    }
}

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1__130(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1__130\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_0) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_1) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_2) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_3) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_4) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_5) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_6) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_7) 
                     >> 4U));
    } else {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_7;
    }
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((0U 
                                                          == (IData)(this->__PVT__mac__DOT__counter))
                                                          ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2)
                                                          : 
                                                         ((1U 
                                                           == (IData)(this->__PVT__mac__DOT__counter))
                                                           ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6)
                                                           : 
                                                          ((2U 
                                                            == (IData)(this->__PVT__mac__DOT__counter))
                                                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2)
                                                            : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6))))) 
                                                     * 
                                                     (0xfU 
                                                      & ((0U 
                                                          == (IData)(this->__PVT__mac__DOT__counter))
                                                          ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2)
                                                          : 
                                                         ((1U 
                                                           == (IData)(this->__PVT__mac__DOT__counter))
                                                           ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2)
                                                           : 
                                                          ((IData)(vlTOPp->io_in_flag)
                                                            ? 
                                                           (3U 
                                                            & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_0) 
                                                               >> 4U))
                                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_0)))))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_1) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_1)))))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_2) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_2)))))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_3) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_3)))))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_4) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_4)))))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_5) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_5)))))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_6) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_6)))))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_7) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_7)))))));
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___partial_result_T_3 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_15 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_1) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_27 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_2) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_39 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_3) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_51 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_4) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_63 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_5) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_75 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_6) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_87 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_7) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out) 
                             << 4U)));
    } else {
        this->__PVT__mac__DOT___partial_result_T_3 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_io_out));
        this->__PVT__mac__DOT___partial_result_T_15 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out));
        this->__PVT__mac__DOT___partial_result_T_27 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out));
        this->__PVT__mac__DOT___partial_result_T_39 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out));
        this->__PVT__mac__DOT___partial_result_T_51 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out));
        this->__PVT__mac__DOT___partial_result_T_63 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out));
        this->__PVT__mac__DOT___partial_result_T_75 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out));
        this->__PVT__mac__DOT___partial_result_T_87 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out));
    }
    if (vlTOPp->reset) {
        this->__PVT__mac__DOT___GEN_175 = 0U;
        this->__PVT__mac__DOT___GEN_176 = 0U;
        this->__PVT__mac__DOT___GEN_177 = 0U;
        this->__PVT__mac__DOT___GEN_178 = 0U;
        this->__PVT__mac__DOT___GEN_179 = 0U;
        this->__PVT__mac__DOT___GEN_180 = 0U;
        this->__PVT__mac__DOT___GEN_181 = 0U;
        this->__PVT__mac__DOT___GEN_182 = 0U;
    } else {
        this->__PVT__mac__DOT___GEN_175 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_3)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_3)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_io_out))))));
        this->__PVT__mac__DOT___GEN_176 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_15)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_15)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_1) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out))))));
        this->__PVT__mac__DOT___GEN_177 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_27)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_27)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_2) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out))))));
        this->__PVT__mac__DOT___GEN_178 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_39)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_39)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_3) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out))))));
        this->__PVT__mac__DOT___GEN_179 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_51)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_51)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_4) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out))))));
        this->__PVT__mac__DOT___GEN_180 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_63)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_63)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_5) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out))))));
        this->__PVT__mac__DOT___GEN_181 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_75)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_75)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_6) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out))))));
        this->__PVT__mac__DOT___GEN_182 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_87)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_87)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_7) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out))))));
    }
}

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2__131(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2__131\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_0) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_1) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_2) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_3) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_4) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_5) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_6) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_7) 
                     >> 4U));
    } else {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_7;
    }
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((0U 
                                                          == (IData)(this->__PVT__mac__DOT__counter))
                                                          ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2)
                                                          : 
                                                         ((1U 
                                                           == (IData)(this->__PVT__mac__DOT__counter))
                                                           ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6)
                                                           : 
                                                          ((2U 
                                                            == (IData)(this->__PVT__mac__DOT__counter))
                                                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2)
                                                            : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6))))) 
                                                     * 
                                                     (0xfU 
                                                      & ((0U 
                                                          == (IData)(this->__PVT__mac__DOT__counter))
                                                          ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2)
                                                          : 
                                                         ((1U 
                                                           == (IData)(this->__PVT__mac__DOT__counter))
                                                           ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2)
                                                           : 
                                                          ((IData)(vlTOPp->io_in_flag)
                                                            ? 
                                                           (3U 
                                                            & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_0) 
                                                               >> 4U))
                                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_0)))))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_1) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_1)))))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_2) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_2)))))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_3) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_3)))))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_4) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_4)))))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_5) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_5)))))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_6) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_6)))))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_7) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_7)))))));
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___partial_result_T_3 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_15 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_1) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_27 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_2) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_39 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_3) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_51 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_4) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_63 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_5) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_75 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_6) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_87 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_7) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out) 
                             << 4U)));
    } else {
        this->__PVT__mac__DOT___partial_result_T_3 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_io_out));
        this->__PVT__mac__DOT___partial_result_T_15 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out));
        this->__PVT__mac__DOT___partial_result_T_27 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out));
        this->__PVT__mac__DOT___partial_result_T_39 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out));
        this->__PVT__mac__DOT___partial_result_T_51 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out));
        this->__PVT__mac__DOT___partial_result_T_63 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out));
        this->__PVT__mac__DOT___partial_result_T_75 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out));
        this->__PVT__mac__DOT___partial_result_T_87 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out));
    }
    if (vlTOPp->reset) {
        this->__PVT__mac__DOT___GEN_175 = 0U;
        this->__PVT__mac__DOT___GEN_176 = 0U;
        this->__PVT__mac__DOT___GEN_177 = 0U;
        this->__PVT__mac__DOT___GEN_178 = 0U;
        this->__PVT__mac__DOT___GEN_179 = 0U;
        this->__PVT__mac__DOT___GEN_180 = 0U;
        this->__PVT__mac__DOT___GEN_181 = 0U;
        this->__PVT__mac__DOT___GEN_182 = 0U;
    } else {
        this->__PVT__mac__DOT___GEN_175 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_3)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_3)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_io_out))))));
        this->__PVT__mac__DOT___GEN_176 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_15)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_15)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_1) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out))))));
        this->__PVT__mac__DOT___GEN_177 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_27)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_27)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_2) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out))))));
        this->__PVT__mac__DOT___GEN_178 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_39)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_39)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_3) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out))))));
        this->__PVT__mac__DOT___GEN_179 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_51)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_51)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_4) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out))))));
        this->__PVT__mac__DOT___GEN_180 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_63)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_63)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_5) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out))))));
        this->__PVT__mac__DOT___GEN_181 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_75)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_75)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_6) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out))))));
        this->__PVT__mac__DOT___GEN_182 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_87)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_87)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_7) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out))))));
    }
}

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3__132(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3__132\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_0) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_1) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_2) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_3) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_4) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_5) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_6) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_7) 
                     >> 4U));
    } else {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_7;
    }
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((0U 
                                                          == (IData)(this->__PVT__mac__DOT__counter))
                                                          ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2)
                                                          : 
                                                         ((1U 
                                                           == (IData)(this->__PVT__mac__DOT__counter))
                                                           ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6)
                                                           : 
                                                          ((2U 
                                                            == (IData)(this->__PVT__mac__DOT__counter))
                                                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2)
                                                            : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6))))) 
                                                     * 
                                                     (0xfU 
                                                      & ((0U 
                                                          == (IData)(this->__PVT__mac__DOT__counter))
                                                          ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2)
                                                          : 
                                                         ((1U 
                                                           == (IData)(this->__PVT__mac__DOT__counter))
                                                           ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2)
                                                           : 
                                                          ((IData)(vlTOPp->io_in_flag)
                                                            ? 
                                                           (3U 
                                                            & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_0) 
                                                               >> 4U))
                                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_0)))))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_1) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_1)))))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_2) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_2)))))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_3) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_3)))))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_4) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_4)))))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_5) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_5)))))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_6) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_6)))))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_7) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_7)))))));
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___partial_result_T_3 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_15 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_1) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_27 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_2) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_39 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_3) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_51 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_4) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_63 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_5) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_75 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_6) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_87 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_7) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out) 
                             << 4U)));
    } else {
        this->__PVT__mac__DOT___partial_result_T_3 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_io_out));
        this->__PVT__mac__DOT___partial_result_T_15 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out));
        this->__PVT__mac__DOT___partial_result_T_27 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out));
        this->__PVT__mac__DOT___partial_result_T_39 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out));
        this->__PVT__mac__DOT___partial_result_T_51 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out));
        this->__PVT__mac__DOT___partial_result_T_63 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out));
        this->__PVT__mac__DOT___partial_result_T_75 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out));
        this->__PVT__mac__DOT___partial_result_T_87 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out));
    }
    if (vlTOPp->reset) {
        this->__PVT__mac__DOT___GEN_175 = 0U;
        this->__PVT__mac__DOT___GEN_176 = 0U;
        this->__PVT__mac__DOT___GEN_177 = 0U;
        this->__PVT__mac__DOT___GEN_178 = 0U;
        this->__PVT__mac__DOT___GEN_179 = 0U;
        this->__PVT__mac__DOT___GEN_180 = 0U;
        this->__PVT__mac__DOT___GEN_181 = 0U;
        this->__PVT__mac__DOT___GEN_182 = 0U;
    } else {
        this->__PVT__mac__DOT___GEN_175 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_3)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_3)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_io_out))))));
        this->__PVT__mac__DOT___GEN_176 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_15)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_15)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_1) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out))))));
        this->__PVT__mac__DOT___GEN_177 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_27)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_27)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_2) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out))))));
        this->__PVT__mac__DOT___GEN_178 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_39)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_39)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_3) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out))))));
        this->__PVT__mac__DOT___GEN_179 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_51)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_51)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_4) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out))))));
        this->__PVT__mac__DOT___GEN_180 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_63)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_63)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_5) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out))))));
        this->__PVT__mac__DOT___GEN_181 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_75)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_75)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_6) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out))))));
        this->__PVT__mac__DOT___GEN_182 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_87)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_87)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_7) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out))))));
    }
}

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_4__133(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_4__133\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_0) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_1) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_2) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_3) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_4) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_5) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_6) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_7) 
                     >> 4U));
    } else {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_7;
    }
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((0U 
                                                          == (IData)(this->__PVT__mac__DOT__counter))
                                                          ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2)
                                                          : 
                                                         ((1U 
                                                           == (IData)(this->__PVT__mac__DOT__counter))
                                                           ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6)
                                                           : 
                                                          ((2U 
                                                            == (IData)(this->__PVT__mac__DOT__counter))
                                                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2)
                                                            : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6))))) 
                                                     * 
                                                     (0xfU 
                                                      & ((0U 
                                                          == (IData)(this->__PVT__mac__DOT__counter))
                                                          ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2)
                                                          : 
                                                         ((1U 
                                                           == (IData)(this->__PVT__mac__DOT__counter))
                                                           ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2)
                                                           : 
                                                          ((IData)(vlTOPp->io_in_flag)
                                                            ? 
                                                           (3U 
                                                            & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_0) 
                                                               >> 4U))
                                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_0)))))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_1) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_1)))))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_2) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_2)))))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_3) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_3)))))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_4) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_4)))))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_5) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_5)))))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_6) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_6)))))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_7) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_7)))))));
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___partial_result_T_3 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_15 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_1) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_27 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_2) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_39 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_3) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_51 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_4) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_63 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_5) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_75 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_6) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_87 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_7) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out) 
                             << 4U)));
    } else {
        this->__PVT__mac__DOT___partial_result_T_3 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_io_out));
        this->__PVT__mac__DOT___partial_result_T_15 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out));
        this->__PVT__mac__DOT___partial_result_T_27 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out));
        this->__PVT__mac__DOT___partial_result_T_39 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out));
        this->__PVT__mac__DOT___partial_result_T_51 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out));
        this->__PVT__mac__DOT___partial_result_T_63 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out));
        this->__PVT__mac__DOT___partial_result_T_75 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out));
        this->__PVT__mac__DOT___partial_result_T_87 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out));
    }
    if (vlTOPp->reset) {
        this->__PVT__mac__DOT___GEN_175 = 0U;
        this->__PVT__mac__DOT___GEN_176 = 0U;
        this->__PVT__mac__DOT___GEN_177 = 0U;
        this->__PVT__mac__DOT___GEN_178 = 0U;
        this->__PVT__mac__DOT___GEN_179 = 0U;
        this->__PVT__mac__DOT___GEN_180 = 0U;
        this->__PVT__mac__DOT___GEN_181 = 0U;
        this->__PVT__mac__DOT___GEN_182 = 0U;
    } else {
        this->__PVT__mac__DOT___GEN_175 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_3)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_3)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_io_out))))));
        this->__PVT__mac__DOT___GEN_176 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_15)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_15)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_1) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out))))));
        this->__PVT__mac__DOT___GEN_177 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_27)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_27)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_2) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out))))));
        this->__PVT__mac__DOT___GEN_178 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_39)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_39)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_3) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out))))));
        this->__PVT__mac__DOT___GEN_179 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_51)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_51)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_4) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out))))));
        this->__PVT__mac__DOT___GEN_180 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_63)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_63)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_5) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out))))));
        this->__PVT__mac__DOT___GEN_181 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_75)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_75)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_6) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out))))));
        this->__PVT__mac__DOT___GEN_182 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_87)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_87)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_7) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out))))));
    }
}

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_5__134(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_5__134\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_0) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_1) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_2) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_3) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_4) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_5) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_6) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_7) 
                     >> 4U));
    } else {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_7;
    }
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((0U 
                                                          == (IData)(this->__PVT__mac__DOT__counter))
                                                          ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2)
                                                          : 
                                                         ((1U 
                                                           == (IData)(this->__PVT__mac__DOT__counter))
                                                           ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6)
                                                           : 
                                                          ((2U 
                                                            == (IData)(this->__PVT__mac__DOT__counter))
                                                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2)
                                                            : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6))))) 
                                                     * 
                                                     (0xfU 
                                                      & ((0U 
                                                          == (IData)(this->__PVT__mac__DOT__counter))
                                                          ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2)
                                                          : 
                                                         ((1U 
                                                           == (IData)(this->__PVT__mac__DOT__counter))
                                                           ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2)
                                                           : 
                                                          ((IData)(vlTOPp->io_in_flag)
                                                            ? 
                                                           (3U 
                                                            & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_0) 
                                                               >> 4U))
                                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_0)))))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_1) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_1)))))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_2) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_2)))))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_3) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_3)))))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_4) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_4)))))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_5) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_5)))))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_6) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_6)))))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_7) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_7)))))));
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___partial_result_T_3 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_15 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_1) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_27 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_2) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_39 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_3) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_51 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_4) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_63 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_5) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_75 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_6) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_87 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_7) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out) 
                             << 4U)));
    } else {
        this->__PVT__mac__DOT___partial_result_T_3 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_io_out));
        this->__PVT__mac__DOT___partial_result_T_15 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out));
        this->__PVT__mac__DOT___partial_result_T_27 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out));
        this->__PVT__mac__DOT___partial_result_T_39 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out));
        this->__PVT__mac__DOT___partial_result_T_51 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out));
        this->__PVT__mac__DOT___partial_result_T_63 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out));
        this->__PVT__mac__DOT___partial_result_T_75 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out));
        this->__PVT__mac__DOT___partial_result_T_87 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out));
    }
    if (vlTOPp->reset) {
        this->__PVT__mac__DOT___GEN_175 = 0U;
        this->__PVT__mac__DOT___GEN_176 = 0U;
        this->__PVT__mac__DOT___GEN_177 = 0U;
        this->__PVT__mac__DOT___GEN_178 = 0U;
        this->__PVT__mac__DOT___GEN_179 = 0U;
        this->__PVT__mac__DOT___GEN_180 = 0U;
        this->__PVT__mac__DOT___GEN_181 = 0U;
        this->__PVT__mac__DOT___GEN_182 = 0U;
    } else {
        this->__PVT__mac__DOT___GEN_175 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_3)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_3)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_io_out))))));
        this->__PVT__mac__DOT___GEN_176 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_15)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_15)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_1) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out))))));
        this->__PVT__mac__DOT___GEN_177 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_27)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_27)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_2) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out))))));
        this->__PVT__mac__DOT___GEN_178 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_39)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_39)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_3) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out))))));
        this->__PVT__mac__DOT___GEN_179 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_51)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_51)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_4) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out))))));
        this->__PVT__mac__DOT___GEN_180 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_63)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_63)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_5) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out))))));
        this->__PVT__mac__DOT___GEN_181 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_75)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_75)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_6) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out))))));
        this->__PVT__mac__DOT___GEN_182 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_87)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_87)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_7) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out))))));
    }
}

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_6__135(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_6__135\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_0) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_1) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_2) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_3) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_4) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_5) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_6) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_7) 
                     >> 4U));
    } else {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_7;
    }
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((0U 
                                                          == (IData)(this->__PVT__mac__DOT__counter))
                                                          ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2)
                                                          : 
                                                         ((1U 
                                                           == (IData)(this->__PVT__mac__DOT__counter))
                                                           ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6)
                                                           : 
                                                          ((2U 
                                                            == (IData)(this->__PVT__mac__DOT__counter))
                                                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2)
                                                            : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6))))) 
                                                     * 
                                                     (0xfU 
                                                      & ((0U 
                                                          == (IData)(this->__PVT__mac__DOT__counter))
                                                          ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2)
                                                          : 
                                                         ((1U 
                                                           == (IData)(this->__PVT__mac__DOT__counter))
                                                           ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2)
                                                           : 
                                                          ((IData)(vlTOPp->io_in_flag)
                                                            ? 
                                                           (3U 
                                                            & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_0) 
                                                               >> 4U))
                                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_0)))))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_1) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_1)))))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_2) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_2)))))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_3) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_3)))))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_4) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_4)))))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_5) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_5)))))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_6) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_6)))))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_7) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_7)))))));
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___partial_result_T_3 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_15 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_1) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_27 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_2) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_39 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_3) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_51 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_4) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_63 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_5) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_75 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_6) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_87 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_7) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out) 
                             << 4U)));
    } else {
        this->__PVT__mac__DOT___partial_result_T_3 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_io_out));
        this->__PVT__mac__DOT___partial_result_T_15 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out));
        this->__PVT__mac__DOT___partial_result_T_27 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out));
        this->__PVT__mac__DOT___partial_result_T_39 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out));
        this->__PVT__mac__DOT___partial_result_T_51 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out));
        this->__PVT__mac__DOT___partial_result_T_63 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out));
        this->__PVT__mac__DOT___partial_result_T_75 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out));
        this->__PVT__mac__DOT___partial_result_T_87 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out));
    }
    if (vlTOPp->reset) {
        this->__PVT__mac__DOT___GEN_175 = 0U;
        this->__PVT__mac__DOT___GEN_176 = 0U;
        this->__PVT__mac__DOT___GEN_177 = 0U;
        this->__PVT__mac__DOT___GEN_178 = 0U;
        this->__PVT__mac__DOT___GEN_179 = 0U;
        this->__PVT__mac__DOT___GEN_180 = 0U;
        this->__PVT__mac__DOT___GEN_181 = 0U;
        this->__PVT__mac__DOT___GEN_182 = 0U;
    } else {
        this->__PVT__mac__DOT___GEN_175 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_3)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_3)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_io_out))))));
        this->__PVT__mac__DOT___GEN_176 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_15)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_15)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_1) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out))))));
        this->__PVT__mac__DOT___GEN_177 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_27)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_27)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_2) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out))))));
        this->__PVT__mac__DOT___GEN_178 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_39)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_39)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_3) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out))))));
        this->__PVT__mac__DOT___GEN_179 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_51)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_51)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_4) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out))))));
        this->__PVT__mac__DOT___GEN_180 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_63)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_63)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_5) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out))))));
        this->__PVT__mac__DOT___GEN_181 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_75)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_75)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_6) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out))))));
        this->__PVT__mac__DOT___GEN_182 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_87)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_87)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_7) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out))))));
    }
}

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_7__136(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_7__136\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_0) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_1) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_2) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_3) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_4) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_5) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_6) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_7) 
                     >> 4U));
    } else {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_7;
    }
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((0U 
                                                          == (IData)(this->__PVT__mac__DOT__counter))
                                                          ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2)
                                                          : 
                                                         ((1U 
                                                           == (IData)(this->__PVT__mac__DOT__counter))
                                                           ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6)
                                                           : 
                                                          ((2U 
                                                            == (IData)(this->__PVT__mac__DOT__counter))
                                                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2)
                                                            : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6))))) 
                                                     * 
                                                     (0xfU 
                                                      & ((0U 
                                                          == (IData)(this->__PVT__mac__DOT__counter))
                                                          ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2)
                                                          : 
                                                         ((1U 
                                                           == (IData)(this->__PVT__mac__DOT__counter))
                                                           ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2)
                                                           : 
                                                          ((IData)(vlTOPp->io_in_flag)
                                                            ? 
                                                           (3U 
                                                            & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_0) 
                                                               >> 4U))
                                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_0)))))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_1) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_1)))))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_2) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_2)))))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_3) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_3)))))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_4) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_4)))))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_5) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_5)))))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_6) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_6)))))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_7) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_7)))))));
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___partial_result_T_3 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_15 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_1) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_27 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_2) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_39 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_3) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_51 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_4) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_63 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_5) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_75 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_6) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_87 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_7) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out) 
                             << 4U)));
    } else {
        this->__PVT__mac__DOT___partial_result_T_3 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_io_out));
        this->__PVT__mac__DOT___partial_result_T_15 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out));
        this->__PVT__mac__DOT___partial_result_T_27 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out));
        this->__PVT__mac__DOT___partial_result_T_39 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out));
        this->__PVT__mac__DOT___partial_result_T_51 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out));
        this->__PVT__mac__DOT___partial_result_T_63 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out));
        this->__PVT__mac__DOT___partial_result_T_75 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out));
        this->__PVT__mac__DOT___partial_result_T_87 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out));
    }
    if (vlTOPp->reset) {
        this->__PVT__mac__DOT___GEN_175 = 0U;
        this->__PVT__mac__DOT___GEN_176 = 0U;
        this->__PVT__mac__DOT___GEN_177 = 0U;
        this->__PVT__mac__DOT___GEN_178 = 0U;
        this->__PVT__mac__DOT___GEN_179 = 0U;
        this->__PVT__mac__DOT___GEN_180 = 0U;
        this->__PVT__mac__DOT___GEN_181 = 0U;
        this->__PVT__mac__DOT___GEN_182 = 0U;
    } else {
        this->__PVT__mac__DOT___GEN_175 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_3)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_3)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_io_out))))));
        this->__PVT__mac__DOT___GEN_176 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_15)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_15)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_1) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out))))));
        this->__PVT__mac__DOT___GEN_177 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_27)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_27)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_2) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out))))));
        this->__PVT__mac__DOT___GEN_178 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_39)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_39)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_3) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out))))));
        this->__PVT__mac__DOT___GEN_179 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_51)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_51)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_4) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out))))));
        this->__PVT__mac__DOT___GEN_180 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_63)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_63)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_5) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out))))));
        this->__PVT__mac__DOT___GEN_181 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_75)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_75)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_6) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out))))));
        this->__PVT__mac__DOT___GEN_182 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_87)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_87)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_7) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out))))));
    }
}

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0__137(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0__137\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_0) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_1) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_2) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_3) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_4) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_5) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_6) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_7) 
                     >> 4U));
    } else {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_7;
    }
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((0U 
                                                          == (IData)(this->__PVT__mac__DOT__counter))
                                                          ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2)
                                                          : 
                                                         ((1U 
                                                           == (IData)(this->__PVT__mac__DOT__counter))
                                                           ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6)
                                                           : 
                                                          ((2U 
                                                            == (IData)(this->__PVT__mac__DOT__counter))
                                                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2)
                                                            : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6))))) 
                                                     * 
                                                     (0xfU 
                                                      & ((0U 
                                                          == (IData)(this->__PVT__mac__DOT__counter))
                                                          ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2)
                                                          : 
                                                         ((1U 
                                                           == (IData)(this->__PVT__mac__DOT__counter))
                                                           ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2)
                                                           : 
                                                          ((IData)(vlTOPp->io_in_flag)
                                                            ? 
                                                           (3U 
                                                            & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_0) 
                                                               >> 4U))
                                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_0)))))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_1) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_1)))))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_2) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_2)))))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_3) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_3)))))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_4) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_4)))))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_5) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_5)))))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_6) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_6)))))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_7) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_7)))))));
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___partial_result_T_3 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_15 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_1) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_27 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_2) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_39 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_3) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_51 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_4) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_63 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_5) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_75 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_6) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_87 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_7) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out) 
                             << 4U)));
    } else {
        this->__PVT__mac__DOT___partial_result_T_3 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_io_out));
        this->__PVT__mac__DOT___partial_result_T_15 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out));
        this->__PVT__mac__DOT___partial_result_T_27 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out));
        this->__PVT__mac__DOT___partial_result_T_39 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out));
        this->__PVT__mac__DOT___partial_result_T_51 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out));
        this->__PVT__mac__DOT___partial_result_T_63 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out));
        this->__PVT__mac__DOT___partial_result_T_75 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out));
        this->__PVT__mac__DOT___partial_result_T_87 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out));
    }
    if (vlTOPp->reset) {
        this->__PVT__mac__DOT___GEN_175 = 0U;
        this->__PVT__mac__DOT___GEN_176 = 0U;
        this->__PVT__mac__DOT___GEN_177 = 0U;
        this->__PVT__mac__DOT___GEN_178 = 0U;
        this->__PVT__mac__DOT___GEN_179 = 0U;
        this->__PVT__mac__DOT___GEN_180 = 0U;
        this->__PVT__mac__DOT___GEN_181 = 0U;
        this->__PVT__mac__DOT___GEN_182 = 0U;
    } else {
        this->__PVT__mac__DOT___GEN_175 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_3)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_3)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_io_out))))));
        this->__PVT__mac__DOT___GEN_176 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_15)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_15)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_1) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out))))));
        this->__PVT__mac__DOT___GEN_177 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_27)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_27)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_2) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out))))));
        this->__PVT__mac__DOT___GEN_178 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_39)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_39)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_3) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out))))));
        this->__PVT__mac__DOT___GEN_179 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_51)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_51)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_4) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out))))));
        this->__PVT__mac__DOT___GEN_180 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_63)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_63)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_5) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out))))));
        this->__PVT__mac__DOT___GEN_181 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_75)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_75)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_6) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out))))));
        this->__PVT__mac__DOT___GEN_182 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_87)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_87)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_7) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out))))));
    }
}