// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSystolicArray_HBFP_forTesting__Syms.h"


void VSystolicArray_HBFP_forTesting::traceFullSub13(void* userp, VerilatedVcd* tracep) {
    VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp = static_cast<VSystolicArray_HBFP_forTesting__Syms*>(userp);
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+99354,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+99355,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_6))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_6))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+99356,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99357,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99358,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+99359,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_7))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_7))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+99360,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99361,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99362,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+99363,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_8))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_8))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+99364,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99365,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_8)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99366,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+99367,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_9))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_9))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+99368,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99369,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_9)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99370,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+99371,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_10))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_10))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+99372,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99373,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_10)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99374,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+99375,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_11))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_11))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+99376,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99377,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_11)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99378,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+99379,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_12))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_12))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+99380,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99381,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_12)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99382,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+99383,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_13))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_13))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+99384,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99385,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_13)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99386,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+99387,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_14))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_14))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+99388,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99389,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_14)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99390,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+99391,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_15))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_15))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+99392,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99393,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_15)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99394,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_10.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_10.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_10.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_10.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+99395,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+99396,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_0))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_0))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+99397,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99398,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99399,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+99400,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_1))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_1))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+99401,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99402,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99403,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+99404,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_2))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_2))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+99405,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99406,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99407,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+99408,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_3))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_3))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+99409,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99410,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99411,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+99412,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_4))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_4))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+99413,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99414,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99415,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+99416,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_5))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_5))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+99417,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99418,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99419,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+99420,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_6))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_6))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+99421,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99422,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99423,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+99424,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_7))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_7))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+99425,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99426,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99427,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+99428,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_8))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_8))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+99429,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99430,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_8)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99431,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+99432,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_9))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_9))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+99433,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99434,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_9)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99435,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+99436,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_10))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_10))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+99437,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99438,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_10)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99439,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+99440,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_11))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_11))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+99441,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99442,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_11)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99443,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+99444,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_12))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_12))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+99445,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99446,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_12)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99447,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+99448,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_13))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_13))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+99449,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99450,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_13)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99451,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+99452,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_14))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_14))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+99453,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99454,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_14)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99455,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+99456,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_15))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_15))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+99457,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99458,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_man_15)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99459,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_11.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_11.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_11.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_11.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+99460,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+99461,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_0))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_0))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+99462,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99463,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99464,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+99465,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_1))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_1))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+99466,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99467,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99468,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+99469,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_2))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_2))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+99470,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99471,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99472,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+99473,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_3))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_3))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+99474,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99475,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99476,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+99477,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_4))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_4))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+99478,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99479,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99480,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+99481,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_5))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_5))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+99482,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99483,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99484,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+99485,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_6))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_6))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+99486,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99487,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99488,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+99489,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_7))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_7))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+99490,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99491,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99492,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_hor_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+99493,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_8))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_8))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+99494,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_hor_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99495,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_8)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99496,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_hor_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+99497,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_9))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_9))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+99498,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_hor_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99499,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_9)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99500,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_hor_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+99501,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_10))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_10))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+99502,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_hor_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99503,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_10)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99504,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_hor_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+99505,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_11))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_11))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+99506,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_hor_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99507,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_11)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99508,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_hor_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+99509,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_12))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_12))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+99510,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_hor_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99511,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_12)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99512,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_hor_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+99513,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_13))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_13))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+99514,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_hor_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99515,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_13)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99516,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_hor_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+99517,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_14))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_14))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+99518,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_hor_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99519,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_14)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99520,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_hor_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+99521,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_15))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_15))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+99522,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_hor_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99523,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_11_io_in_ver_man_15)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99524,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_12.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_12.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_12.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_12.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+99525,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+99526,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_0))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_0))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+99527,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99528,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99529,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+99530,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_1))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_1))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+99531,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99532,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99533,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+99534,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_2))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_2))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+99535,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99536,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99537,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+99538,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_3))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_3))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+99539,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99540,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99541,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+99542,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_4))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_4))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+99543,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99544,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99545,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+99546,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_5))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_5))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+99547,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99548,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99549,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+99550,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_6))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_6))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+99551,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99552,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99553,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+99554,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_7))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_7))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+99555,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99556,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99557,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_hor_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+99558,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_8))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_8))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+99559,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_hor_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99560,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_8)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99561,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_hor_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+99562,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_9))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_9))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+99563,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_hor_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99564,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_9)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99565,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_hor_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+99566,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_10))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_10))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+99567,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_hor_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99568,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_10)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99569,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_hor_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+99570,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_11))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_11))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+99571,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_hor_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99572,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_11)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99573,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_hor_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+99574,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_12))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_12))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+99575,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_hor_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99576,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_12)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99577,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_hor_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+99578,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_13))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_13))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+99579,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_hor_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99580,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_13)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99581,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_hor_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+99582,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_14))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_14))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+99583,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_hor_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99584,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_14)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99585,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_hor_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+99586,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_15))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_15))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+99587,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_hor_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99588,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_12_io_in_ver_man_15)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99589,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_13.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_13.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_13.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_13.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+99590,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+99591,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_0))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_0))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+99592,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99593,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99594,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+99595,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_1))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_1))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+99596,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99597,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99598,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+99599,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_2))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_2))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+99600,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99601,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99602,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+99603,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_3))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_3))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+99604,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99605,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99606,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+99607,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_4))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_4))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+99608,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99609,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99610,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+99611,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_5))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_5))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+99612,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99613,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99614,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+99615,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_6))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_6))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+99616,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99617,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99618,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+99619,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_7))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_7))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+99620,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99621,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99622,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_hor_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+99623,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_8))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_8))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+99624,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_hor_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99625,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_8)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99626,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_hor_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+99627,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_9))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_9))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+99628,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_hor_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99629,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_9)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99630,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_hor_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+99631,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_10))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_10))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+99632,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_hor_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99633,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_10)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99634,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_hor_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+99635,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_11))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_11))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+99636,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_hor_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99637,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_11)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99638,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_hor_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+99639,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_12))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_12))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+99640,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_hor_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99641,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_12)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99642,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_hor_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+99643,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_13))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_13))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+99644,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_hor_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99645,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_13)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99646,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_hor_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+99647,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_14))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_14))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+99648,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_hor_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99649,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_14)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99650,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_hor_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+99651,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_15))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_15))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+99652,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_hor_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99653,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_13_io_in_ver_man_15)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99654,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_14.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_14.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_14.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_14.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+99655,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+99656,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_0))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_0))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+99657,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99658,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99659,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+99660,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_1))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_1))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+99661,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99662,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99663,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+99664,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_2))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_2))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+99665,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99666,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99667,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+99668,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_3))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_3))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+99669,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99670,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99671,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+99672,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_4))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_4))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+99673,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99674,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99675,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+99676,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_5))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_5))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+99677,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99678,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99679,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+99680,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_6))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_6))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+99681,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99682,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99683,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+99684,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_7))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_7))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+99685,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99686,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99687,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_hor_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+99688,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_8))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_8))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+99689,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_hor_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99690,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_8)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99691,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_hor_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+99692,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_9))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_9))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+99693,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_hor_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99694,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_9)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99695,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_hor_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+99696,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_10))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_10))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+99697,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_hor_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99698,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_10)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99699,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_hor_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+99700,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_11))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_11))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+99701,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_hor_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99702,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_11)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99703,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_hor_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+99704,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_12))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_12))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+99705,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_hor_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99706,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_12)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99707,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_hor_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+99708,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_13))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_13))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+99709,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_hor_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99710,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_13)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99711,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_hor_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+99712,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_14))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_14))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+99713,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_hor_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99714,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_14)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99715,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_hor_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+99716,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_15))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_15))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+99717,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_hor_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99718,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_14_io_in_ver_man_15)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99719,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_15.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_15.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_15.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_15.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+99720,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+99721,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_0))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_0))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+99722,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99723,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99724,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+99725,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_1))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_1))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+99726,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99727,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99728,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+99729,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_2))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_2))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+99730,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99731,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99732,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+99733,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_3))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_3))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+99734,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99735,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99736,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+99737,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_4))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_4))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+99738,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99739,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99740,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+99741,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_5))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_5))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+99742,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99743,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99744,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+99745,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_6))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_6))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+99746,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99747,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99748,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+99749,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_7))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_7))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+99750,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99751,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99752,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_hor_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+99753,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_8))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_8))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+99754,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_hor_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99755,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_8)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99756,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_hor_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+99757,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_9))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_9))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+99758,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_hor_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99759,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_9)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99760,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_hor_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+99761,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_10))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_10))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+99762,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_hor_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99763,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_10)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99764,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_hor_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+99765,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_11))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_11))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+99766,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_hor_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99767,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_11)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99768,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_hor_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+99769,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_12))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_12))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+99770,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_hor_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99771,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_12)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99772,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_hor_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+99773,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_13))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_13))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+99774,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_hor_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99775,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_13)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99776,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_hor_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+99777,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_14))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_14))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+99778,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_hor_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99779,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_14)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99780,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_hor_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+99781,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_15))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_15))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+99782,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_hor_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99783,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_15_io_in_ver_man_15)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99784,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_0.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_0.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_0.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_0.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+99785,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+99786,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_0))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_0))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+99787,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99788,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99789,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+99790,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_1))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_1))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+99791,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99792,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99793,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+99794,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_2))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_2))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+99795,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99796,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99797,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+99798,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_3))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_3))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+99799,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99800,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99801,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+99802,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_4))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_4))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+99803,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99804,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99805,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+99806,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_5))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_5))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+99807,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99808,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99809,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+99810,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_6))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_6))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+99811,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99812,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99813,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+99814,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_7))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_7))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+99815,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99816,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99817,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+99818,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_8))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_8))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+99819,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99820,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_8)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99821,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+99822,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_9))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_9))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+99823,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99824,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_9)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99825,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+99826,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_10))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_10))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+99827,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99828,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_10)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99829,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+99830,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_11))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_11))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+99831,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99832,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_11)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99833,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+99834,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_12))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_12))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+99835,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99836,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_12)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99837,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+99838,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_13))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_13))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+99839,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99840,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_13)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99841,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+99842,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_14))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_14))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+99843,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99844,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_14)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99845,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+99846,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_15))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_15))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+99847,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99848,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_15)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99849,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_1.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_1.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_1.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_1.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+99850,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+99851,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_0))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_0))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+99852,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99853,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99854,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+99855,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_1))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_1))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+99856,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99857,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99858,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+99859,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_2))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_2))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+99860,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99861,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99862,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+99863,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_3))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_3))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+99864,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99865,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99866,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+99867,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_4))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_4))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+99868,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99869,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99870,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+99871,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_5))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_5))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+99872,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99873,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99874,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+99875,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_6))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_6))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+99876,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99877,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99878,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+99879,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_7))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_7))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+99880,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99881,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99882,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+99883,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_8))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_8))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+99884,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99885,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_8)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99886,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+99887,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_9))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_9))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+99888,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99889,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_9)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99890,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+99891,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_10))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_10))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+99892,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99893,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_10)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99894,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+99895,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_11))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_11))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+99896,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99897,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_11)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99898,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+99899,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_12))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_12))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+99900,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99901,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_12)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99902,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+99903,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_13))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_13))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+99904,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99905,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_13)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99906,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+99907,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_14))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_14))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+99908,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99909,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_14)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99910,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+99911,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_15))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_15))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+99912,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99913,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_15)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99914,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_2.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_2.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_2.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_2.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+99915,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+99916,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_0))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_0))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+99917,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99918,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99919,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+99920,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_1))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_1))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+99921,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99922,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99923,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+99924,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_2))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_2))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+99925,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99926,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99927,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+99928,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_3))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_3))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+99929,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99930,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99931,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+99932,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_4))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_4))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+99933,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99934,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99935,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+99936,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_5))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_5))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+99937,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99938,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99939,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+99940,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_6))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_6))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+99941,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99942,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99943,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+99944,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_7))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_7))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+99945,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99946,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99947,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+99948,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_8))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_8))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+99949,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99950,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_8)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99951,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+99952,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_9))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_9))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+99953,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99954,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_9)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99955,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+99956,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_10))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_10))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+99957,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99958,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_10)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99959,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+99960,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_11))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_11))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+99961,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99962,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_11)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99963,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+99964,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_12))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_12))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+99965,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99966,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_12)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99967,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+99968,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_13))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_13))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+99969,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99970,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_13)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99971,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+99972,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_14))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_14))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+99973,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99974,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_14)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99975,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+99976,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_15))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_15))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+99977,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99978,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_15)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99979,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_3.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_3.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_3.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_3.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+99980,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+99981,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_0))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_0))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+99982,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99983,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99984,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+99985,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_1))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_1))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+99986,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99987,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99988,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+99989,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_2))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_2))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+99990,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99991,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99992,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+99993,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_3))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_3))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+99994,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99995,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99996,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+99997,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_4))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_4))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+99998,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99999,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+100000,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+100001,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+100002,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100003,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100004,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+100005,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+100006,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100007,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100008,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+100009,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+100010,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100011,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100012,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+100013,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+100014,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100015,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100016,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+100017,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+100018,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100019,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100020,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+100021,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+100022,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100023,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100024,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+100025,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+100026,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100027,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100028,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+100029,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+100030,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100031,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100032,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+100033,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+100034,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100035,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100036,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+100037,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+100038,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100039,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100040,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+100041,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+100042,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100043,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100044,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_4.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_4.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_4.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_4.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+100045,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+100046,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+100047,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100048,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100049,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+100050,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+100051,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100052,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100053,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+100054,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+100055,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100056,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100057,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+100058,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+100059,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100060,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100061,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+100062,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+100063,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100064,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100065,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+100066,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+100067,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100068,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100069,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+100070,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+100071,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100072,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100073,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+100074,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+100075,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100076,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100077,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+100078,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+100079,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100080,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100081,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+100082,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+100083,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100084,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100085,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+100086,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+100087,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100088,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100089,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+100090,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+100091,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100092,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100093,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+100094,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+100095,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100096,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100097,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+100098,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+100099,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100100,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100101,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+100102,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+100103,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100104,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100105,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+100106,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+100107,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100108,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100109,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_5.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_5.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_5.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_5.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+100110,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+100111,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+100112,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100113,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100114,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+100115,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+100116,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100117,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100118,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+100119,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+100120,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100121,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100122,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+100123,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+100124,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100125,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100126,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+100127,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+100128,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100129,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100130,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+100131,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+100132,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100133,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100134,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+100135,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+100136,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100137,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100138,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+100139,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+100140,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100141,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100142,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+100143,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+100144,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100145,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100146,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+100147,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+100148,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100149,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100150,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+100151,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+100152,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100153,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100154,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+100155,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+100156,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100157,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100158,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+100159,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+100160,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100161,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100162,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+100163,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+100164,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100165,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100166,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+100167,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+100168,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100169,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100170,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+100171,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+100172,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100173,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100174,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_6.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_6.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_6.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_6.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+100175,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+100176,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+100177,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100178,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100179,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+100180,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+100181,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100182,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100183,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+100184,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+100185,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100186,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100187,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+100188,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+100189,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100190,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100191,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+100192,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+100193,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100194,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100195,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+100196,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+100197,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100198,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100199,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+100200,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+100201,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100202,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100203,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+100204,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+100205,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100206,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100207,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+100208,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+100209,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100210,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100211,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+100212,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+100213,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100214,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100215,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+100216,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+100217,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100218,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100219,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+100220,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+100221,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100222,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100223,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+100224,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+100225,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100226,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100227,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+100228,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+100229,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100230,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100231,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+100232,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+100233,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100234,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100235,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+100236,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+100237,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100238,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100239,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_7.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_7.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_7.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_7.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+100240,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+100241,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+100242,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100243,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100244,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+100245,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+100246,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100247,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100248,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+100249,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+100250,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100251,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100252,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+100253,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+100254,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100255,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100256,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+100257,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+100258,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100259,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100260,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+100261,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+100262,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100263,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100264,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+100265,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+100266,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100267,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100268,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+100269,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+100270,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100271,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100272,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+100273,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+100274,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100275,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100276,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+100277,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+100278,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100279,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100280,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+100281,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+100282,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100283,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100284,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+100285,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+100286,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100287,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100288,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+100289,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+100290,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100291,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100292,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+100293,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+100294,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100295,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100296,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+100297,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+100298,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100299,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100300,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+100301,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+100302,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100303,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100304,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_8.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_8.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_8.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_8.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+100305,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+100306,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+100307,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100308,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100309,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+100310,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+100311,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100312,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100313,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+100314,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+100315,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100316,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100317,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+100318,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+100319,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100320,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100321,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+100322,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+100323,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100324,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100325,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+100326,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+100327,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100328,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100329,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+100330,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+100331,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100332,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100333,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+100334,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+100335,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100336,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100337,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+100338,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+100339,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100340,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100341,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+100342,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+100343,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100344,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100345,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+100346,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+100347,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100348,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100349,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+100350,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+100351,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100352,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100353,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+100354,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+100355,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100356,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100357,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+100358,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+100359,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100360,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100361,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+100362,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+100363,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100364,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100365,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+100366,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+100367,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100368,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_8_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100369,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_9.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_9.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_9.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_9.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+100370,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+100371,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+100372,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100373,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100374,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+100375,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+100376,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100377,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100378,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+100379,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+100380,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100381,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100382,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+100383,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+100384,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100385,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100386,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+100387,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+100388,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100389,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100390,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+100391,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+100392,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100393,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100394,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+100395,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+100396,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100397,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100398,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+100399,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+100400,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100401,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100402,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+100403,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+100404,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100405,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100406,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+100407,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+100408,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100409,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100410,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+100411,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+100412,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100413,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100414,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+100415,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+100416,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100417,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100418,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+100419,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+100420,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100421,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100422,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+100423,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+100424,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100425,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100426,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+100427,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+100428,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100429,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100430,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+100431,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+100432,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100433,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_9_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100434,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_10.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_10.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_10.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_10.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+100435,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+100436,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+100437,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100438,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100439,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+100440,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+100441,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100442,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100443,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+100444,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+100445,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100446,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100447,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+100448,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+100449,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100450,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100451,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+100452,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+100453,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100454,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100455,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+100456,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+100457,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100458,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100459,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+100460,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+100461,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100462,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100463,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+100464,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+100465,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100466,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100467,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+100468,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+100469,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100470,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100471,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+100472,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+100473,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100474,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100475,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+100476,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+100477,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100478,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100479,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+100480,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+100481,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100482,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100483,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+100484,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+100485,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100486,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100487,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+100488,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+100489,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100490,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100491,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+100492,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+100493,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100494,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100495,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+100496,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+100497,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100498,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_10_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100499,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_11.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_11.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_11.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_11.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+100500,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+100501,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+100502,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100503,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100504,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+100505,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+100506,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100507,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100508,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+100509,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+100510,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100511,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100512,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+100513,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+100514,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100515,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100516,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+100517,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+100518,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100519,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100520,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+100521,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+100522,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100523,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100524,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+100525,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+100526,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100527,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100528,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+100529,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+100530,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100531,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100532,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+100533,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+100534,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100535,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100536,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+100537,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+100538,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100539,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100540,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+100541,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+100542,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100543,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100544,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+100545,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+100546,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100547,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100548,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+100549,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+100550,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100551,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100552,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+100553,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+100554,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100555,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100556,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+100557,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+100558,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100559,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100560,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+100561,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+100562,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100563,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_11_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100564,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_12.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_12.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_12.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_12.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+100565,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+100566,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+100567,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100568,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100569,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+100570,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+100571,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100572,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100573,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+100574,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+100575,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100576,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100577,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+100578,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+100579,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100580,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100581,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+100582,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+100583,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100584,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100585,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+100586,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+100587,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100588,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100589,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+100590,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+100591,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100592,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100593,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+100594,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+100595,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100596,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100597,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+100598,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+100599,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100600,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100601,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+100602,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+100603,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100604,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100605,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+100606,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+100607,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100608,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100609,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+100610,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+100611,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100612,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100613,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+100614,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+100615,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100616,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100617,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+100618,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+100619,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100620,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100621,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+100622,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+100623,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100624,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100625,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+100626,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+100627,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100628,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_12_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100629,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_13.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_13.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_13.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_13.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+100630,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_13_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_13_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+100631,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_13_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_13_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_13_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_13_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+100632,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_13_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100633,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_13_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_13_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100634,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_13_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_13_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+100635,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_13_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_13_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_13_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_13_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+100636,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_13_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100637,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_13_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_13_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100638,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_13_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_13_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+100639,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_13_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_13_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_13_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_13_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+100640,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_13_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100641,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_13_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_13_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100642,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_13_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_13_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+100643,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_13_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_13_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_13_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_13_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+100644,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_13_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100645,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_13_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_13_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100646,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_13_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_13_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+100647,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_13_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_13_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_13_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_13_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+100648,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_13_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100649,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_13_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_13_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100650,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_13_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_13_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+100651,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_13_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_13_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_13_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_13_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+100652,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_13_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100653,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_13_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_13_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100654,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_13_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_13_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+100655,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_13_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_13_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_13_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_13_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+100656,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_13_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100657,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_13_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_13_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+100658,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_13_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_13_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+100659,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_13_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_13_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_13_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_13_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+100660,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_13_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100661,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_13_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_13_io_in_ver_man_7)
                                                  : 0U)))),4);
    }
}
