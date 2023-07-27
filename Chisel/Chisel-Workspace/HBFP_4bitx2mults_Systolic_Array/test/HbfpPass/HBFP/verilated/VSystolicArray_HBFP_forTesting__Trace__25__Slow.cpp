// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSystolicArray_HBFP_forTesting__Syms.h"


void VSystolicArray_HBFP_forTesting::traceFullSub12(void* userp, VerilatedVcd* tracep) {
    VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp = static_cast<VSystolicArray_HBFP_forTesting__Syms*>(userp);
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+98046,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+98047,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_4))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_4))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+98048,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98049,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98050,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+98051,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_5))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_5))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+98052,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98053,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98054,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+98055,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_6))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_6))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+98056,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98057,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98058,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+98059,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_7))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_7))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+98060,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98061,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98062,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+98063,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_8))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_8))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+98064,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98065,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_8)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98066,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+98067,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_9))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_9))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+98068,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98069,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_9)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98070,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+98071,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_10))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_10))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+98072,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98073,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_10)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98074,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+98075,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_11))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_11))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+98076,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98077,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_11)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98078,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+98079,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_12))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_12))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+98080,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98081,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_12)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98082,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+98083,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_13))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_13))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+98084,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98085,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_13)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98086,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+98087,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_14))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_14))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+98088,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98089,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_14)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98090,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+98091,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_15))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_15))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+98092,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98093,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_15)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98094,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_6.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_6.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_6.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_6.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+98095,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+98096,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_0))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_0))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+98097,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98098,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98099,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+98100,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_1))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_1))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+98101,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98102,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98103,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+98104,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_2))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_2))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+98105,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98106,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98107,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+98108,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_3))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_3))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+98109,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98110,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98111,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+98112,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_4))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_4))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+98113,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98114,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98115,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+98116,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_5))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_5))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+98117,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98118,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98119,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+98120,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_6))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_6))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+98121,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98122,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98123,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+98124,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_7))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_7))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+98125,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98126,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98127,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+98128,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_8))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_8))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+98129,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98130,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_8)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98131,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+98132,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_9))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_9))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+98133,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98134,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_9)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98135,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+98136,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_10))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_10))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+98137,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98138,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_10)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98139,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+98140,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_11))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_11))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+98141,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98142,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_11)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98143,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+98144,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_12))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_12))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+98145,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98146,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_12)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98147,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+98148,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_13))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_13))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+98149,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98150,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_13)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98151,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+98152,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_14))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_14))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+98153,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98154,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_14)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98155,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+98156,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_15))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_15))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+98157,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98158,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_15)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98159,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_7.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_7.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_7.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_7.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+98160,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+98161,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_0))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_0))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+98162,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98163,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98164,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+98165,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_1))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_1))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+98166,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98167,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98168,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+98169,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_2))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_2))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+98170,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98171,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98172,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+98173,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_3))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_3))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+98174,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98175,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98176,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+98177,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_4))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_4))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+98178,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98179,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98180,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+98181,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_5))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_5))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+98182,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98183,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98184,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+98185,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_6))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_6))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+98186,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98187,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98188,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+98189,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_7))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_7))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+98190,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98191,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98192,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+98193,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_8))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_8))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+98194,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98195,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_8)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98196,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+98197,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_9))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_9))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+98198,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98199,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_9)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98200,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+98201,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_10))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_10))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+98202,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98203,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_10)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98204,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+98205,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_11))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_11))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+98206,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98207,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_11)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98208,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+98209,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_12))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_12))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+98210,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98211,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_12)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98212,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+98213,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_13))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_13))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+98214,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98215,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_13)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98216,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+98217,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_14))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_14))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+98218,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98219,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_14)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98220,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+98221,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_15))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_15))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+98222,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98223,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_15)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98224,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_8.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_8.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_8.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_8.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+98225,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+98226,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_0))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_0))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+98227,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98228,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98229,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+98230,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_1))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_1))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+98231,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98232,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98233,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+98234,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_2))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_2))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+98235,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98236,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98237,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+98238,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_3))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_3))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+98239,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98240,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98241,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+98242,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_4))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_4))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+98243,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98244,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98245,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+98246,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_5))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_5))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+98247,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98248,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98249,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+98250,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_6))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_6))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+98251,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98252,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98253,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+98254,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_7))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_7))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+98255,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98256,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98257,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_hor_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+98258,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_8))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_8))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+98259,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_hor_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98260,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_8)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98261,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_hor_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+98262,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_9))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_9))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+98263,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_hor_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98264,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_9)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98265,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_hor_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+98266,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_10))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_10))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+98267,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_hor_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98268,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_10)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98269,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_hor_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+98270,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_11))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_11))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+98271,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_hor_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98272,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_11)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98273,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_hor_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+98274,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_12))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_12))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+98275,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_hor_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98276,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_12)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98277,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_hor_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+98278,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_13))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_13))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+98279,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_hor_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98280,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_13)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98281,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_hor_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+98282,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_14))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_14))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+98283,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_hor_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98284,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_14)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98285,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_hor_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+98286,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_15))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_15))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+98287,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_hor_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98288,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_8_io_in_ver_man_15)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98289,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_9.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_9.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_9.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_9.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+98290,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+98291,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_0))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_0))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+98292,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98293,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98294,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+98295,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_1))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_1))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+98296,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98297,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98298,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+98299,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_2))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_2))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+98300,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98301,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98302,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+98303,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_3))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_3))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+98304,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98305,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98306,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+98307,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_4))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_4))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+98308,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98309,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98310,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+98311,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_5))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_5))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+98312,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98313,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98314,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+98315,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_6))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_6))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+98316,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98317,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98318,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+98319,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_7))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_7))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+98320,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98321,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98322,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_hor_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+98323,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_8))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_8))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+98324,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_hor_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98325,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_8)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98326,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_hor_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+98327,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_9))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_9))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+98328,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_hor_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98329,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_9)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98330,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_hor_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+98331,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_10))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_10))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+98332,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_hor_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98333,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_10)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98334,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_hor_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+98335,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_11))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_11))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+98336,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_hor_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98337,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_11)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98338,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_hor_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+98339,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_12))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_12))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+98340,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_hor_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98341,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_12)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98342,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_hor_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+98343,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_13))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_13))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+98344,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_hor_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98345,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_13)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98346,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_hor_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+98347,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_14))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_14))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+98348,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_hor_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98349,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_14)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98350,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_hor_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+98351,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_15))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_15))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+98352,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_hor_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98353,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_9_io_in_ver_man_15)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98354,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_10.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_10.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_10.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_10.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+98355,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+98356,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_0))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_0))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+98357,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98358,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98359,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+98360,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_1))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_1))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+98361,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98362,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98363,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+98364,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_2))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_2))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+98365,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98366,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98367,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+98368,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_3))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_3))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+98369,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98370,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98371,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+98372,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_4))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_4))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+98373,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98374,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98375,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+98376,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_5))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_5))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+98377,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98378,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98379,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+98380,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_6))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_6))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+98381,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98382,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98383,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+98384,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_7))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_7))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+98385,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98386,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98387,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_hor_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+98388,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_8))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_8))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+98389,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_hor_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98390,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_8)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98391,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_hor_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+98392,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_9))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_9))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+98393,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_hor_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98394,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_9)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98395,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_hor_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+98396,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_10))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_10))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+98397,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_hor_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98398,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_10)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98399,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_hor_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+98400,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_11))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_11))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+98401,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_hor_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98402,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_11)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98403,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_hor_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+98404,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_12))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_12))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+98405,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_hor_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98406,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_12)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98407,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_hor_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+98408,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_13))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_13))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+98409,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_hor_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98410,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_13)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98411,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_hor_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+98412,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_14))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_14))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+98413,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_hor_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98414,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_14)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98415,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_hor_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+98416,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_15))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_15))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+98417,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_hor_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98418,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_10_io_in_ver_man_15)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98419,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_11.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_11.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_11.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_11.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+98420,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+98421,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_0))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_0))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+98422,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98423,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98424,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+98425,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_1))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_1))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+98426,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98427,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98428,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+98429,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_2))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_2))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+98430,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98431,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98432,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+98433,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_3))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_3))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+98434,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98435,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98436,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+98437,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_4))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_4))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+98438,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98439,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98440,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+98441,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_5))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_5))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+98442,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98443,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98444,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+98445,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_6))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_6))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+98446,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98447,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98448,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+98449,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_7))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_7))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+98450,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98451,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98452,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_hor_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+98453,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_8))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_8))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+98454,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_hor_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98455,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_8)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98456,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_hor_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+98457,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_9))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_9))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+98458,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_hor_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98459,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_9)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98460,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_hor_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+98461,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_10))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_10))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+98462,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_hor_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98463,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_10)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98464,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_hor_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+98465,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_11))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_11))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+98466,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_hor_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98467,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_11)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98468,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_hor_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+98469,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_12))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_12))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+98470,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_hor_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98471,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_12)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98472,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_hor_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+98473,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_13))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_13))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+98474,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_hor_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98475,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_13)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98476,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_hor_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+98477,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_14))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_14))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+98478,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_hor_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98479,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_14)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98480,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_hor_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+98481,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_15))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_15))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+98482,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_hor_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98483,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_11_io_in_ver_man_15)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98484,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_12.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_12.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_12.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_12.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+98485,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+98486,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_0))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_0))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+98487,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98488,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98489,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+98490,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_1))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_1))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+98491,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98492,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98493,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+98494,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_2))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_2))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+98495,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98496,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98497,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+98498,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_3))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_3))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+98499,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98500,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98501,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+98502,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_4))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_4))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+98503,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98504,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98505,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+98506,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_5))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_5))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+98507,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98508,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98509,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+98510,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_6))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_6))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+98511,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98512,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98513,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+98514,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_7))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_7))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+98515,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98516,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98517,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_hor_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+98518,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_8))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_8))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+98519,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_hor_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98520,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_8)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98521,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_hor_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+98522,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_9))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_9))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+98523,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_hor_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98524,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_9)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98525,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_hor_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+98526,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_10))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_10))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+98527,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_hor_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98528,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_10)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98529,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_hor_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+98530,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_11))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_11))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+98531,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_hor_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98532,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_11)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98533,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_hor_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+98534,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_12))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_12))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+98535,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_hor_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98536,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_12)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98537,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_hor_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+98538,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_13))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_13))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+98539,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_hor_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98540,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_13)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98541,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_hor_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+98542,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_14))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_14))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+98543,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_hor_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98544,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_14)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98545,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_hor_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+98546,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_15))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_15))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+98547,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_hor_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98548,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_12_io_in_ver_man_15)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98549,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_13.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_13.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_13.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_13.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+98550,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+98551,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_0))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_0))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+98552,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98553,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98554,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+98555,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_1))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_1))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+98556,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98557,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98558,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+98559,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_2))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_2))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+98560,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98561,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98562,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+98563,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_3))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_3))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+98564,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98565,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98566,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+98567,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_4))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_4))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+98568,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98569,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98570,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+98571,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_5))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_5))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+98572,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98573,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98574,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+98575,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_6))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_6))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+98576,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98577,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98578,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+98579,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_7))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_7))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+98580,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98581,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98582,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_hor_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+98583,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_8))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_8))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+98584,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_hor_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98585,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_8)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98586,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_hor_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+98587,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_9))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_9))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+98588,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_hor_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98589,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_9)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98590,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_hor_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+98591,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_10))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_10))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+98592,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_hor_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98593,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_10)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98594,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_hor_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+98595,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_11))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_11))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+98596,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_hor_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98597,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_11)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98598,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_hor_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+98599,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_12))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_12))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+98600,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_hor_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98601,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_12)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98602,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_hor_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+98603,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_13))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_13))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+98604,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_hor_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98605,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_13)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98606,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_hor_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+98607,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_14))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_14))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+98608,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_hor_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98609,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_14)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98610,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_hor_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+98611,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_15))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_15))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+98612,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_hor_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98613,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_13_io_in_ver_man_15)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98614,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_14.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_14.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_14.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_14.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+98615,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+98616,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_0))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_0))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+98617,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98618,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98619,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+98620,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_1))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_1))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+98621,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98622,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98623,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+98624,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_2))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_2))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+98625,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98626,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98627,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+98628,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_3))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_3))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+98629,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98630,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98631,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+98632,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_4))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_4))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+98633,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98634,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98635,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+98636,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_5))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_5))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+98637,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98638,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98639,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+98640,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_6))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_6))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+98641,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98642,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98643,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+98644,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_7))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_7))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+98645,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98646,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98647,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_hor_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+98648,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_8))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_8))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+98649,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_hor_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98650,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_8)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98651,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_hor_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+98652,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_9))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_9))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+98653,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_hor_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98654,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_9)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98655,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_hor_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+98656,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_10))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_10))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+98657,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_hor_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98658,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_10)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98659,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_hor_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+98660,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_11))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_11))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+98661,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_hor_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98662,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_11)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98663,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_hor_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+98664,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_12))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_12))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+98665,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_hor_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98666,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_12)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98667,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_hor_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+98668,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_13))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_13))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+98669,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_hor_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98670,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_13)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98671,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_hor_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+98672,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_14))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_14))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+98673,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_hor_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98674,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_14)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98675,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_hor_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+98676,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_15))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_15))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+98677,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_hor_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98678,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_14_io_in_ver_man_15)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98679,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_15.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_15.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_15.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_15.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+98680,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+98681,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_0))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_0))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+98682,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98683,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98684,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+98685,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_1))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_1))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+98686,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98687,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98688,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+98689,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_2))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_2))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+98690,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98691,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98692,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+98693,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_3))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_3))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+98694,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98695,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98696,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+98697,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_4))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_4))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+98698,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98699,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98700,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+98701,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_5))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_5))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+98702,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98703,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98704,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+98705,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_6))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_6))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+98706,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98707,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98708,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+98709,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_7))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_7))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+98710,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98711,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98712,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_hor_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+98713,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_8))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_8))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+98714,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_hor_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98715,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_8)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98716,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_hor_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+98717,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_9))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_9))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+98718,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_hor_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98719,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_9)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98720,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_hor_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+98721,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_10))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_10))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+98722,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_hor_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98723,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_10)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98724,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_hor_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+98725,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_11))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_11))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+98726,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_hor_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98727,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_11)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98728,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_hor_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+98729,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_12))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_12))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+98730,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_hor_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98731,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_12)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98732,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_hor_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+98733,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_13))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_13))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+98734,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_hor_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98735,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_13)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98736,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_hor_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+98737,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_14))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_14))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+98738,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_hor_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98739,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_14)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98740,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_hor_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+98741,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_15))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_15))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+98742,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_hor_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98743,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_man_15)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98744,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+98745,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+98746,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_0))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_0))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+98747,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98748,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98749,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+98750,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_1))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_1))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+98751,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98752,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98753,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+98754,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_2))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_2))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+98755,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98756,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98757,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+98758,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_3))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_3))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+98759,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98760,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98761,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+98762,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_4))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_4))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+98763,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98764,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98765,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+98766,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_5))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_5))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+98767,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98768,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98769,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+98770,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_6))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_6))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+98771,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98772,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98773,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+98774,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_7))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_7))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+98775,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98776,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98777,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+98778,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_8))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_8))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+98779,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98780,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_8)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98781,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+98782,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_9))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_9))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+98783,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98784,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_9)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98785,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+98786,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_10))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_10))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+98787,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98788,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_10)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98789,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+98790,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_11))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_11))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+98791,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98792,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_11)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98793,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+98794,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_12))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_12))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+98795,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98796,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_12)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98797,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+98798,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_13))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_13))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+98799,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98800,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_13)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98801,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+98802,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_14))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_14))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+98803,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98804,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_14)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98805,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+98806,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_15))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_15))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+98807,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98808,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_15)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98809,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+98810,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+98811,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_0))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_0))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+98812,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98813,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98814,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+98815,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_1))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_1))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+98816,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98817,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98818,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+98819,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_2))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_2))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+98820,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98821,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98822,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+98823,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_3))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_3))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+98824,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98825,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98826,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+98827,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_4))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_4))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+98828,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98829,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98830,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+98831,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_5))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_5))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+98832,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98833,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98834,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+98835,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_6))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_6))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+98836,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98837,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98838,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+98839,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_7))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_7))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+98840,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98841,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98842,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+98843,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_8))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_8))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+98844,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98845,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_8)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98846,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+98847,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_9))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_9))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+98848,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98849,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_9)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98850,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+98851,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_10))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_10))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+98852,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98853,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_10)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98854,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+98855,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_11))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_11))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+98856,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98857,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_11)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98858,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+98859,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_12))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_12))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+98860,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98861,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_12)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98862,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+98863,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_13))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_13))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+98864,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98865,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_13)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98866,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+98867,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_14))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_14))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+98868,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98869,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_14)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98870,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+98871,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_15))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_15))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+98872,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98873,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_15)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98874,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+98875,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+98876,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_0))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_0))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+98877,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98878,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98879,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+98880,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_1))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_1))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+98881,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98882,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98883,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+98884,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_2))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_2))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+98885,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98886,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98887,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+98888,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_3))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_3))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+98889,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98890,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98891,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+98892,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_4))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_4))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+98893,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98894,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98895,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+98896,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_5))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_5))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+98897,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98898,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98899,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+98900,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_6))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_6))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+98901,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98902,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98903,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+98904,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_7))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_7))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+98905,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98906,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98907,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+98908,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_8))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_8))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+98909,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98910,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_8)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98911,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+98912,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_9))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_9))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+98913,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98914,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_9)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98915,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+98916,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_10))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_10))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+98917,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98918,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_10)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98919,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+98920,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_11))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_11))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+98921,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98922,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_11)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98923,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+98924,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_12))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_12))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+98925,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98926,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_12)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98927,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+98928,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_13))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_13))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+98929,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98930,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_13)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98931,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+98932,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_14))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_14))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+98933,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98934,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_14)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98935,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+98936,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_15))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_15))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+98937,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98938,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_15)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98939,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+98940,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+98941,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_0))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_0))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+98942,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98943,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98944,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+98945,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_1))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_1))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+98946,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98947,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98948,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+98949,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_2))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_2))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+98950,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98951,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98952,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+98953,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_3))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_3))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+98954,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98955,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98956,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+98957,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_4))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_4))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+98958,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98959,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98960,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+98961,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_5))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_5))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+98962,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98963,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98964,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+98965,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_6))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_6))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+98966,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98967,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98968,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+98969,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_7))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_7))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+98970,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98971,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98972,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+98973,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_8))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_8))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+98974,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98975,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_8)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98976,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+98977,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_9))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_9))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+98978,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98979,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_9)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98980,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+98981,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_10))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_10))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+98982,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98983,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_10)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98984,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+98985,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_11))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_11))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+98986,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98987,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_11)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98988,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+98989,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_12))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_12))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+98990,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98991,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_12)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98992,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+98993,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_13))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_13))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+98994,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98995,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_13)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98996,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+98997,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_14))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_14))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+98998,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98999,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_14)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99000,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+99001,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_15))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_15))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+99002,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99003,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_15)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99004,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_4.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_4.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_4.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_4.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+99005,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+99006,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_0))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_0))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+99007,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99008,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99009,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+99010,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_1))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_1))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+99011,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99012,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99013,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+99014,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_2))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_2))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+99015,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99016,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99017,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+99018,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_3))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_3))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+99019,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99020,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99021,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+99022,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_4))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_4))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+99023,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99024,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99025,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+99026,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_5))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_5))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+99027,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99028,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99029,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+99030,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_6))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_6))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+99031,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99032,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99033,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+99034,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_7))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_7))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+99035,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99036,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99037,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+99038,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_8))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_8))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+99039,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99040,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_8)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99041,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+99042,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_9))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_9))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+99043,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99044,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_9)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99045,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+99046,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_10))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_10))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+99047,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99048,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_10)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99049,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+99050,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_11))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_11))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+99051,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99052,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_11)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99053,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+99054,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_12))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_12))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+99055,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99056,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_12)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99057,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+99058,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_13))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_13))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+99059,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99060,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_13)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99061,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+99062,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_14))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_14))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+99063,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99064,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_14)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99065,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+99066,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_15))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_15))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+99067,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99068,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_15)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99069,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_5.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_5.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_5.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_5.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+99070,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+99071,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_0))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_0))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+99072,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99073,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99074,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+99075,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_1))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_1))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+99076,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99077,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99078,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+99079,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_2))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_2))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+99080,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99081,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99082,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+99083,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_3))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_3))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+99084,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99085,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99086,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+99087,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_4))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_4))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+99088,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99089,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99090,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+99091,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_5))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_5))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+99092,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99093,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99094,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+99095,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_6))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_6))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+99096,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99097,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99098,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+99099,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_7))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_7))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+99100,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99101,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99102,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+99103,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_8))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_8))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+99104,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99105,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_8)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99106,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+99107,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_9))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_9))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+99108,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99109,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_9)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99110,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+99111,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_10))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_10))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+99112,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99113,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_10)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99114,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+99115,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_11))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_11))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+99116,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99117,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_11)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99118,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+99119,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_12))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_12))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+99120,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99121,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_12)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99122,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+99123,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_13))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_13))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+99124,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99125,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_13)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99126,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+99127,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_14))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_14))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+99128,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99129,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_14)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99130,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+99131,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_15))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_15))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+99132,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99133,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_15)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99134,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_6.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_6.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_6.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_6.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+99135,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+99136,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_0))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_0))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+99137,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99138,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99139,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+99140,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_1))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_1))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+99141,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99142,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99143,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+99144,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_2))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_2))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+99145,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99146,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99147,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+99148,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_3))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_3))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+99149,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99150,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99151,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+99152,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_4))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_4))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+99153,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99154,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99155,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+99156,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_5))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_5))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+99157,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99158,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99159,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+99160,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_6))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_6))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+99161,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99162,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99163,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+99164,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_7))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_7))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+99165,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99166,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99167,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+99168,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_8))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_8))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+99169,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99170,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_8)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99171,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+99172,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_9))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_9))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+99173,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99174,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_9)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99175,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+99176,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_10))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_10))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+99177,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99178,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_10)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99179,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+99180,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_11))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_11))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+99181,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99182,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_11)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99183,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+99184,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_12))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_12))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+99185,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99186,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_12)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99187,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+99188,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_13))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_13))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+99189,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99190,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_13)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99191,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+99192,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_14))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_14))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+99193,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99194,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_14)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99195,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+99196,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_15))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_15))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+99197,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99198,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_15)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99199,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_7.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_7.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_7.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_7.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+99200,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+99201,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_0))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_0))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+99202,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99203,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99204,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+99205,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_1))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_1))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+99206,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99207,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99208,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+99209,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_2))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_2))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+99210,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99211,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99212,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+99213,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_3))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_3))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+99214,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99215,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99216,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+99217,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_4))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_4))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+99218,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99219,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99220,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+99221,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_5))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_5))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+99222,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99223,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99224,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+99225,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_6))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_6))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+99226,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99227,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99228,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+99229,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_7))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_7))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+99230,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99231,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99232,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+99233,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_8))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_8))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+99234,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99235,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_8)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99236,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+99237,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_9))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_9))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+99238,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99239,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_9)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99240,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+99241,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_10))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_10))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+99242,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99243,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_10)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99244,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+99245,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_11))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_11))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+99246,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99247,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_11)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99248,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+99249,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_12))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_12))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+99250,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99251,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_12)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99252,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+99253,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_13))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_13))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+99254,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99255,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_13)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99256,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+99257,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_14))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_14))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+99258,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99259,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_14)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99260,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+99261,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_15))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_15))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+99262,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99263,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_15)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99264,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_8.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_8.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_8.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_8.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+99265,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+99266,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_0))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_0))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+99267,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99268,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99269,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+99270,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_1))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_1))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+99271,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99272,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99273,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+99274,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_2))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_2))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+99275,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99276,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99277,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+99278,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_3))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_3))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+99279,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99280,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99281,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+99282,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_4))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_4))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+99283,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99284,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99285,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+99286,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_5))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_5))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+99287,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99288,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99289,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+99290,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_6))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_6))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+99291,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99292,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99293,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+99294,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_7))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_7))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+99295,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99296,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99297,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+99298,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_8))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_8))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+99299,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99300,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_8)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99301,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+99302,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_9))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_9))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+99303,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99304,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_9)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99305,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+99306,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_10))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_10))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+99307,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99308,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_10)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99309,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+99310,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_11))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_11))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+99311,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99312,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_11)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99313,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+99314,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_12))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_12))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+99315,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99316,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_12)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99317,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+99318,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_13))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_13))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+99319,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99320,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_13)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99321,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+99322,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_14))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_14))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+99323,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99324,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_14)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99325,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+99326,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_15))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_15))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+99327,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99328,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_man_15)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99329,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_9.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_9.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_9.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_9.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+99330,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+99331,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_0))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_0))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+99332,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99333,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99334,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+99335,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_1))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_1))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+99336,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99337,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99338,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+99339,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_2))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_2))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+99340,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99341,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99342,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+99343,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_3))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_3))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+99344,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99345,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99346,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+99347,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_4))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_4))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+99348,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99349,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+99350,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+99351,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_5))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_5))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+99352,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99353,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_man_5)
                                                    : 0U)))),4);
    }
}
