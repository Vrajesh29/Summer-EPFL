// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSystolicArray_HBFP_forTesting.h for the primary calling header

#include "VSystolicArray_HBFP_forTesting_HBFP_PE.h"
#include "VSystolicArray_HBFP_forTesting__Syms.h"

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_2__155(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_2__155\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_0) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_1) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_2) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_3) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_4) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_5) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_6) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_7) 
                     >> 4U));
    } else {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_7;
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
                                                            & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_0) 
                                                               >> 4U))
                                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_0)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_1) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_1)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_2) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_2)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_3) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_3)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_4) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_4)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_5) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_5)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_6) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_6)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_7) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_7)))))));
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

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_3__156(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_3__156\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_0) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_1) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_2) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_3) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_4) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_5) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_6) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_7) 
                     >> 4U));
    } else {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_7;
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
                                                            & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_0) 
                                                               >> 4U))
                                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_0)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_1) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_1)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_2) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_2)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_3) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_3)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_4) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_4)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_5) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_5)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_6) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_6)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_7) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_7)))))));
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

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_4__157(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_4__157\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_0) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_1) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_2) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_3) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_4) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_5) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_6) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_7) 
                     >> 4U));
    } else {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_7;
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
                                                            & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_0) 
                                                               >> 4U))
                                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_0)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_1) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_1)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_2) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_2)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_3) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_3)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_4) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_4)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_5) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_5)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_6) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_6)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_7) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_7)))))));
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

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_5__158(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_5__158\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_0) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_1) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_2) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_3) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_4) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_5) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_6) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_7) 
                     >> 4U));
    } else {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_7;
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
                                                            & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_0) 
                                                               >> 4U))
                                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_0)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_1) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_1)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_2) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_2)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_3) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_3)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_4) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_4)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_5) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_5)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_6) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_6)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_7) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_7)))))));
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

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_6__159(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_6__159\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_0) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_1) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_2) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_3) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_4) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_5) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_6) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_7) 
                     >> 4U));
    } else {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_7;
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
                                                            & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_0) 
                                                               >> 4U))
                                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_0)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_1) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_1)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_2) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_2)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_3) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_3)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_4) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_4)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_5) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_5)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_6) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_6)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_7) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_7)))))));
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

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_7__160(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_7__160\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_0) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_1) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_2) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_3) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_4) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_5) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_6) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_7) 
                     >> 4U));
    } else {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_7;
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
                                                            & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_0) 
                                                               >> 4U))
                                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_0)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_1) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_1)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_2) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_2)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_3) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_3)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_4) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_4)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_5) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_5)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_6) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_6)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_7) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_7)))))));
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

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_0__161(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_0__161\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_0) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_1) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_2) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_3) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_4) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_5) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_6) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_7) 
                     >> 4U));
    } else {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_7;
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
                                                            & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_0) 
                                                               >> 4U))
                                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_0)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_1) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_1)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_2) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_2)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_3) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_3)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_4) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_4)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_5) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_5)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_6) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_6)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_7) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_7)))))));
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

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_1__162(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_1__162\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_hor_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_hor_man_0) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_hor_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_hor_man_1) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_hor_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_hor_man_2) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_hor_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_hor_man_3) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_hor_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_hor_man_4) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_hor_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_hor_man_5) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_hor_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_hor_man_6) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_hor_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_hor_man_7) 
                     >> 4U));
    } else {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_hor_man_7;
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
                                                            & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_0) 
                                                               >> 4U))
                                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_0)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_1) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_1)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_2) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_2)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_3) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_3)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_4) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_4)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_5) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_5)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_6) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_6)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_7) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_7)))))));
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

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_2__163(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_2__163\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_hor_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_hor_man_0) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_hor_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_hor_man_1) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_hor_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_hor_man_2) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_hor_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_hor_man_3) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_hor_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_hor_man_4) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_hor_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_hor_man_5) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_hor_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_hor_man_6) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_hor_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_hor_man_7) 
                     >> 4U));
    } else {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_hor_man_7;
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
                                                            & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_0) 
                                                               >> 4U))
                                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_0)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_1) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_1)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_2) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_2)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_3) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_3)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_4) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_4)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_5) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_5)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_6) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_6)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_7) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_7)))))));
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

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_3__164(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_3__164\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_hor_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_hor_man_0) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_hor_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_hor_man_1) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_hor_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_hor_man_2) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_hor_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_hor_man_3) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_hor_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_hor_man_4) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_hor_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_hor_man_5) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_hor_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_hor_man_6) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_hor_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_hor_man_7) 
                     >> 4U));
    } else {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_hor_man_7;
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
                                                            & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_0) 
                                                               >> 4U))
                                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_0)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_1) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_1)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_2) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_2)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_3) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_3)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_4) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_4)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_5) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_5)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_6) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_6)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_7) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_7)))))));
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

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_4__165(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_4__165\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_hor_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_hor_man_0) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_hor_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_hor_man_1) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_hor_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_hor_man_2) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_hor_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_hor_man_3) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_hor_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_hor_man_4) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_hor_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_hor_man_5) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_hor_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_hor_man_6) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_hor_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_hor_man_7) 
                     >> 4U));
    } else {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_hor_man_7;
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
                                                            & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_0) 
                                                               >> 4U))
                                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_0)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_1) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_1)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_2) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_2)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_3) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_3)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_4) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_4)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_5) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_5)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_6) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_6)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_7) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_7)))))));
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

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_5__166(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_5__166\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_0) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_1) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_2) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_3) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_4) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_5) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_6) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_7) 
                     >> 4U));
    } else {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_7;
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
                                                            & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_0) 
                                                               >> 4U))
                                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_0)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_1) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_1)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_2) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_2)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_3) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_3)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_4) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_4)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_5) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_5)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_6) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_6)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_7) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_7)))))));
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

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_6__167(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_6__167\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_0) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_1) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_2) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_3) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_4) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_5) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_6) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_7) 
                     >> 4U));
    } else {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_7;
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
                                                            & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_0) 
                                                               >> 4U))
                                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_0)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_1) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_1)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_2) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_2)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_3) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_3)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_4) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_4)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_5) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_5)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_6) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_6)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_7) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_7)))))));
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

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_7__168(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_7__168\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_0) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_1) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_2) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_3) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_4) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_5) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_6) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_7) 
                     >> 4U));
    } else {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_7;
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
                                                            & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_0) 
                                                               >> 4U))
                                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_0)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_1) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_1)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_2) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_2)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_3) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_3)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_4) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_4)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_5) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_5)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_6) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_6)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_7) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_7)))))));
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

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_0__169(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_0__169\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_0) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_1) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_2) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_3) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_4) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_5) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_6) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_7) 
                     >> 4U));
    } else {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_7;
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
                                                            & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_0) 
                                                               >> 4U))
                                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_0)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_1) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_1)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_2) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_2)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_3) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_3)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_4) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_4)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_5) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_5)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_6) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_6)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_7) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_7)))))));
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

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_1__170(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_1__170\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_0) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_1) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_2) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_3) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_4) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_5) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_6) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_7) 
                     >> 4U));
    } else {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_7;
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
                                                            & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_0) 
                                                               >> 4U))
                                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_0)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_1) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_1)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_2) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_2)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_3) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_3)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_4) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_4)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_5) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_5)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_6) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_6)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_7) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_7)))))));
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

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_2__171(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_2__171\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_0) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_1) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_2) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_3) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_4) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_5) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_6) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_7) 
                     >> 4U));
    } else {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_7;
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
                                                            & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_0) 
                                                               >> 4U))
                                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_0)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_1) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_1)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_2) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_2)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_3) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_3)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_4) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_4)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_5) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_5)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_6) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_6)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_7) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_7)))))));
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
