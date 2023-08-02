// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSystolicArray_HBFP_forTesting.h for the primary calling header

#include "VSystolicArray_HBFP_forTesting_HBFP_PE.h"
#include "VSystolicArray_HBFP_forTesting__Syms.h"

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1__138(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1__138\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_0) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_1) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_2) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_3) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_4) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_5) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_6) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_7) 
                     >> 4U));
    } else {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_7;
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
                                                            & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_0) 
                                                               >> 4U))
                                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_0)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_1) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_1)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_2) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_2)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_3) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_3)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_4) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_4)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_5) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_5)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_6) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_6)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_7) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_7)))))));
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

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2__139(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2__139\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_0) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_1) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_2) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_3) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_4) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_5) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_6) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_7) 
                     >> 4U));
    } else {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_7;
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
                                                            & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_0) 
                                                               >> 4U))
                                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_0)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_1) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_1)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_2) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_2)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_3) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_3)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_4) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_4)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_5) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_5)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_6) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_6)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_7) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_7)))))));
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

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3__140(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3__140\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_man_0) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_man_1) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_man_2) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_man_3) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_man_4) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_man_5) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_man_6) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_man_7) 
                     >> 4U));
    } else {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_man_7;
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
                                                            & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_0) 
                                                               >> 4U))
                                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_0)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_1) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_1)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_2) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_2)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_3) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_3)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_4) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_4)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_5) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_5)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_6) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_6)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_7) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_7)))))));
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

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_4__141(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_4__141\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_0) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_1) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_2) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_3) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_4) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_5) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_6) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_7) 
                     >> 4U));
    } else {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_7;
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
                                                            & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_0) 
                                                               >> 4U))
                                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_0)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_1) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_1)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_2) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_2)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_3) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_3)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_4) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_4)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_5) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_5)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_6) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_6)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_7) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_7)))))));
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

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_5__142(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_5__142\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_0) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_1) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_2) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_3) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_4) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_5) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_6) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_7) 
                     >> 4U));
    } else {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_7;
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
                                                            & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_0) 
                                                               >> 4U))
                                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_0)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_1) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_1)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_2) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_2)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_3) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_3)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_4) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_4)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_5) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_5)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_6) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_6)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_7) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_7)))))));
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

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_6__143(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_6__143\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_0) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_1) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_2) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_3) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_4) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_5) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_6) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_7) 
                     >> 4U));
    } else {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_7;
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
                                                            & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_0) 
                                                               >> 4U))
                                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_0)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_1) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_1)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_2) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_2)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_3) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_3)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_4) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_4)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_5) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_5)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_6) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_6)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_7) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_7)))))));
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

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_7__144(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_7__144\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_0) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_1) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_2) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_3) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_4) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_5) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_6) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_7) 
                     >> 4U));
    } else {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_7;
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
                                                            & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_0) 
                                                               >> 4U))
                                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_0)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_1) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_1)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_2) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_2)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_3) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_3)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_4) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_4)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_5) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_5)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_6) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_6)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_7) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_7)))))));
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

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0__145(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0__145\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_0) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_1) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_2) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_3) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_4) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_5) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_6) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_7) 
                     >> 4U));
    } else {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_7;
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
                                                            & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_0) 
                                                               >> 4U))
                                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_0)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_1) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_1)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_2) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_2)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_3) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_3)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_4) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_4)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_5) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_5)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_6) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_6)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_7) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_7)))))));
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

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1__146(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1__146\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_0) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_1) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_2) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_3) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_4) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_5) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_6) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_7) 
                     >> 4U));
    } else {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_7;
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
                                                            & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_0) 
                                                               >> 4U))
                                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_0)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_1) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_1)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_2) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_2)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_3) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_3)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_4) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_4)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_5) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_5)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_6) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_6)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_7) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_7)))))));
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

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2__147(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2__147\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_0) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_1) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_2) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_3) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_4) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_5) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_6) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_7) 
                     >> 4U));
    } else {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_7;
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
                                                            & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_0) 
                                                               >> 4U))
                                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_0)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_1) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_1)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_2) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_2)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_3) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_3)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_4) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_4)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_5) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_5)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_6) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_6)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_7) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_7)))))));
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

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3__148(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3__148\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_0) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_1) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_2) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_3) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_4) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_5) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_6) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_7) 
                     >> 4U));
    } else {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_7;
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
                                                            & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_0) 
                                                               >> 4U))
                                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_0)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_1) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_1)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_2) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_2)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_3) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_3)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_4) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_4)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_5) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_5)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_6) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_6)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_7) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_7)))))));
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

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_4__149(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_4__149\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_0) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_1) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_2) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_3) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_4) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_5) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_6) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_7) 
                     >> 4U));
    } else {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_7;
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
                                                            & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_0) 
                                                               >> 4U))
                                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_0)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_1) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_1)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_2) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_2)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_3) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_3)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_4) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_4)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_5) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_5)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_6) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_6)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_7) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_7)))))));
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

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_5__150(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_5__150\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_0) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_1) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_2) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_3) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_4) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_5) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_6) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_7) 
                     >> 4U));
    } else {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_7;
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
                                                            & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_0) 
                                                               >> 4U))
                                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_0)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_1) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_1)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_2) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_2)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_3) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_3)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_4) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_4)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_5) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_5)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_6) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_6)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_7) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_7)))))));
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

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_6__151(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_6__151\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_0) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_1) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_2) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_3) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_4) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_5) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_6) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_7) 
                     >> 4U));
    } else {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_7;
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
                                                            & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_0) 
                                                               >> 4U))
                                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_0)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_1) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_1)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_2) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_2)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_3) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_3)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_4) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_4)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_5) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_5)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_6) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_6)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_7) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_7)))))));
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

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_7__152(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_7__152\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_0) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_1) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_2) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_3) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_4) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_5) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_6) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_7) 
                     >> 4U));
    } else {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_7;
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
                                                            & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_0) 
                                                               >> 4U))
                                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_0)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_1) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_1)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_2) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_2)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_3) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_3)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_4) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_4)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_5) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_5)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_6) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_6)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_7) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_7)))))));
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

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_0__153(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_0__153\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_0) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_1) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_2) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_3) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_4) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_5) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_6) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_7) 
                     >> 4U));
    } else {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_7;
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
                                                            & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_0) 
                                                               >> 4U))
                                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_0)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_1) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_1)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_2) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_2)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_3) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_3)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_4) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_4)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_5) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_5)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_6) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_6)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_7) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_7)))))));
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

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_1__154(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_1__154\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_0) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_1) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_2) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_3) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_4) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_5) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_6) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_7) 
                     >> 4U));
    } else {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_7;
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
                                                            & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_0) 
                                                               >> 4U))
                                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_0)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_1) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_1)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_2) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_2)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_3) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_3)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_4) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_4)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_5) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_5)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_6) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_6)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_7) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_7)))))));
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
