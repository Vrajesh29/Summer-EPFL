// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSystolicArray_HBFP_forTesting__Syms.h"


void VSystolicArray_HBFP_forTesting::traceFullSub21(void* userp, VerilatedVcd* tracep) {
    VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp = static_cast<VSystolicArray_HBFP_forTesting__Syms*>(userp);
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+109818,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109819,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+109820,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+109821,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109822,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109823,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+109824,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+109825,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109826,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109827,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+109828,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+109829,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109830,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109831,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+109832,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+109833,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109834,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109835,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+109836,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+109837,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109838,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109839,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+109840,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+109841,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109842,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109843,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+109844,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+109845,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109846,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109847,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+109848,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+109849,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109850,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109851,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+109852,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+109853,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109854,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109855,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+109856,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+109857,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109858,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109859,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_11.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_11.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_11.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_11.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+109860,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+109861,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+109862,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109863,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109864,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+109865,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+109866,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109867,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109868,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+109869,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+109870,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109871,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109872,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+109873,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+109874,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109875,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109876,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+109877,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+109878,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109879,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109880,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+109881,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+109882,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109883,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109884,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+109885,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+109886,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109887,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109888,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+109889,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+109890,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109891,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109892,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+109893,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+109894,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109895,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109896,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+109897,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+109898,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109899,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109900,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+109901,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+109902,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109903,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109904,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+109905,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+109906,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109907,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109908,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+109909,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+109910,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109911,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109912,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+109913,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+109914,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109915,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109916,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+109917,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+109918,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109919,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109920,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+109921,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+109922,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109923,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109924,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_12.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_12.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_12.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_12.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+109925,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+109926,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+109927,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109928,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109929,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+109930,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+109931,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109932,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109933,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+109934,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+109935,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109936,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109937,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+109938,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+109939,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109940,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109941,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+109942,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+109943,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109944,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109945,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+109946,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+109947,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109948,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109949,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+109950,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+109951,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109952,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109953,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+109954,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+109955,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109956,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109957,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+109958,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+109959,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109960,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109961,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+109962,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+109963,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109964,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109965,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+109966,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+109967,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109968,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109969,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+109970,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+109971,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109972,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109973,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+109974,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+109975,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109976,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109977,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+109978,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+109979,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109980,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109981,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+109982,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+109983,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109984,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109985,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+109986,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+109987,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109988,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109989,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_13.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_13.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_13.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_13.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+109990,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+109991,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+109992,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109993,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109994,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+109995,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+109996,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109997,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109998,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+109999,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+110000,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110001,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110002,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+110003,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+110004,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110005,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110006,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+110007,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+110008,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110009,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110010,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+110011,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+110012,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110013,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110014,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+110015,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+110016,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110017,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110018,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+110019,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+110020,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110021,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110022,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+110023,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+110024,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110025,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110026,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+110027,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+110028,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110029,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110030,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+110031,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+110032,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110033,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110034,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+110035,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+110036,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110037,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110038,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+110039,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+110040,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110041,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110042,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+110043,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+110044,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110045,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110046,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+110047,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+110048,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110049,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110050,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+110051,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+110052,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110053,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110054,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_14.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_14.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_14.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_14.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+110055,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+110056,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+110057,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110058,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110059,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+110060,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+110061,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110062,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110063,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+110064,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+110065,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110066,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110067,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+110068,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+110069,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110070,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110071,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+110072,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+110073,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110074,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110075,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+110076,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+110077,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110078,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110079,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+110080,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+110081,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110082,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110083,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+110084,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+110085,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110086,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110087,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+110088,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+110089,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110090,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110091,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+110092,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+110093,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110094,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110095,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+110096,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+110097,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110098,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110099,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+110100,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+110101,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110102,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110103,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+110104,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+110105,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110106,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110107,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+110108,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+110109,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110110,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110111,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+110112,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+110113,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110114,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110115,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+110116,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+110117,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110118,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110119,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_15.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_15.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_15.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_15.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+110120,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+110121,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+110122,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110123,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110124,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+110125,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+110126,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110127,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110128,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+110129,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+110130,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110131,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110132,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+110133,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+110134,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110135,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110136,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+110137,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+110138,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110139,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110140,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+110141,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+110142,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110143,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110144,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+110145,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+110146,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110147,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110148,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+110149,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+110150,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110151,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110152,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+110153,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+110154,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110155,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110156,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+110157,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+110158,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110159,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110160,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+110161,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+110162,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110163,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110164,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+110165,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+110166,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110167,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110168,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+110169,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+110170,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110171,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110172,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+110173,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+110174,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110175,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110176,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+110177,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+110178,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110179,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110180,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+110181,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+110182,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110183,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110184,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_0.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_0.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_0.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_0.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+110185,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+110186,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+110187,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110188,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110189,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+110190,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+110191,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110192,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110193,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+110194,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+110195,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110196,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110197,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+110198,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+110199,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110200,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110201,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+110202,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+110203,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110204,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110205,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+110206,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+110207,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110208,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110209,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+110210,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+110211,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110212,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110213,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+110214,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+110215,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110216,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110217,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+110218,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+110219,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110220,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110221,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+110222,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+110223,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110224,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110225,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+110226,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+110227,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110228,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110229,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+110230,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+110231,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110232,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110233,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+110234,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+110235,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110236,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110237,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+110238,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+110239,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110240,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110241,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+110242,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+110243,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110244,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110245,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+110246,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+110247,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110248,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110249,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_1.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_1.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_1.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_1.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+110250,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+110251,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+110252,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110253,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110254,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+110255,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+110256,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110257,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110258,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+110259,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+110260,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110261,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110262,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+110263,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+110264,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110265,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110266,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+110267,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+110268,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110269,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110270,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+110271,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+110272,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110273,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110274,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+110275,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+110276,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110277,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110278,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+110279,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+110280,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110281,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110282,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+110283,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+110284,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110285,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110286,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+110287,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+110288,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110289,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110290,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+110291,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+110292,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110293,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110294,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+110295,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+110296,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110297,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110298,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+110299,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+110300,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110301,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110302,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+110303,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+110304,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110305,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110306,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+110307,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+110308,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110309,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110310,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+110311,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+110312,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110313,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110314,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_2.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_2.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_2.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_2.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+110315,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+110316,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+110317,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110318,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110319,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+110320,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+110321,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110322,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110323,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+110324,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+110325,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110326,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110327,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+110328,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+110329,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110330,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110331,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+110332,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+110333,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110334,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110335,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+110336,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+110337,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110338,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110339,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+110340,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+110341,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110342,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110343,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+110344,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+110345,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110346,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110347,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+110348,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+110349,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110350,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110351,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+110352,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+110353,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110354,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110355,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+110356,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+110357,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110358,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110359,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+110360,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+110361,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110362,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110363,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+110364,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+110365,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110366,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110367,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+110368,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+110369,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110370,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110371,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+110372,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+110373,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110374,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110375,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+110376,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+110377,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110378,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110379,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_3.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_3.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_3.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_3.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+110380,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+110381,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+110382,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110383,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110384,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+110385,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+110386,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110387,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110388,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+110389,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+110390,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110391,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110392,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+110393,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+110394,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110395,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110396,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+110397,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+110398,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110399,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110400,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+110401,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+110402,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110403,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110404,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+110405,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+110406,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110407,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110408,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+110409,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+110410,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110411,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110412,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+110413,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+110414,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110415,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110416,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+110417,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+110418,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110419,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110420,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+110421,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+110422,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110423,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110424,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+110425,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+110426,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110427,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110428,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+110429,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+110430,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110431,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110432,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+110433,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+110434,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110435,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110436,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+110437,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+110438,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110439,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110440,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+110441,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+110442,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110443,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110444,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_4.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_4.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_4.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_4.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+110445,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+110446,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+110447,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110448,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110449,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+110450,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+110451,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110452,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110453,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+110454,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+110455,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110456,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110457,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+110458,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+110459,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110460,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110461,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+110462,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+110463,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110464,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110465,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+110466,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+110467,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110468,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110469,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+110470,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+110471,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110472,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110473,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+110474,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+110475,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110476,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110477,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+110478,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+110479,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110480,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110481,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+110482,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+110483,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110484,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110485,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+110486,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+110487,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110488,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110489,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+110490,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+110491,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110492,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110493,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+110494,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+110495,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110496,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110497,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+110498,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+110499,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110500,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110501,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+110502,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+110503,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110504,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110505,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+110506,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+110507,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110508,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_4_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110509,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_5.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_5.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_5.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_5.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+110510,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+110511,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+110512,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110513,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110514,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+110515,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+110516,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110517,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110518,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+110519,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+110520,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110521,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110522,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+110523,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+110524,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110525,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110526,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+110527,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+110528,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110529,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110530,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+110531,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+110532,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110533,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110534,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+110535,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+110536,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110537,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110538,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+110539,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+110540,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110541,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110542,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+110543,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+110544,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110545,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110546,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+110547,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+110548,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110549,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110550,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+110551,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+110552,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110553,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110554,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+110555,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+110556,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110557,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110558,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+110559,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+110560,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110561,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110562,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+110563,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+110564,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110565,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110566,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+110567,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+110568,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110569,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110570,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+110571,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+110572,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110573,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110574,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_6.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_6.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_6.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_6.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+110575,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+110576,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+110577,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110578,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110579,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+110580,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+110581,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110582,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110583,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+110584,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+110585,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110586,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110587,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+110588,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+110589,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110590,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110591,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+110592,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+110593,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110594,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110595,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+110596,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+110597,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110598,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110599,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+110600,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+110601,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110602,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110603,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+110604,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+110605,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110606,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110607,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+110608,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+110609,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110610,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110611,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+110612,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+110613,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110614,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110615,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+110616,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+110617,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110618,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110619,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+110620,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+110621,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110622,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110623,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+110624,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+110625,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110626,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110627,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+110628,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+110629,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110630,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110631,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+110632,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+110633,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110634,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110635,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+110636,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+110637,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110638,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110639,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_7.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_7.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_7.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_7.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+110640,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+110641,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+110642,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110643,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110644,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+110645,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+110646,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110647,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110648,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+110649,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+110650,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110651,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110652,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+110653,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+110654,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110655,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110656,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+110657,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+110658,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110659,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110660,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+110661,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+110662,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110663,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110664,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+110665,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+110666,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110667,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110668,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+110669,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+110670,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110671,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110672,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+110673,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+110674,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110675,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110676,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+110677,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+110678,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110679,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110680,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+110681,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+110682,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110683,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110684,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+110685,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+110686,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110687,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110688,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+110689,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+110690,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110691,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110692,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+110693,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+110694,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110695,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110696,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+110697,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+110698,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110699,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110700,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+110701,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+110702,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110703,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110704,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_8.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_8.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_8.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_8.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+110705,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+110706,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+110707,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110708,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110709,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+110710,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+110711,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110712,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110713,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+110714,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+110715,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110716,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110717,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+110718,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+110719,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110720,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110721,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+110722,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+110723,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110724,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110725,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+110726,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+110727,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110728,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110729,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+110730,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+110731,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110732,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110733,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+110734,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+110735,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110736,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110737,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+110738,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+110739,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110740,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110741,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+110742,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+110743,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110744,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110745,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+110746,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+110747,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110748,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110749,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+110750,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+110751,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110752,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110753,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+110754,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+110755,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110756,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110757,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+110758,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+110759,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110760,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110761,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+110762,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+110763,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110764,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110765,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+110766,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+110767,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110768,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110769,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_9.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_9.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_9.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_9.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+110770,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+110771,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+110772,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110773,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110774,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+110775,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+110776,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110777,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110778,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+110779,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+110780,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110781,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110782,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+110783,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+110784,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110785,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110786,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+110787,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+110788,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110789,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110790,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+110791,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+110792,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110793,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110794,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+110795,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+110796,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110797,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110798,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+110799,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+110800,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110801,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110802,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+110803,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+110804,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110805,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110806,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+110807,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+110808,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110809,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110810,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+110811,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+110812,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110813,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110814,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+110815,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+110816,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110817,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110818,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+110819,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+110820,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110821,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110822,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+110823,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+110824,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110825,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110826,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+110827,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+110828,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110829,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110830,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+110831,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+110832,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110833,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110834,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_10.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_10.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_10.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_10.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+110835,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+110836,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+110837,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110838,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110839,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+110840,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+110841,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110842,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110843,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+110844,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+110845,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110846,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110847,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+110848,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+110849,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110850,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110851,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+110852,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+110853,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110854,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110855,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+110856,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+110857,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110858,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110859,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+110860,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+110861,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110862,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110863,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+110864,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+110865,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110866,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110867,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+110868,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+110869,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110870,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110871,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+110872,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+110873,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110874,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110875,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+110876,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+110877,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110878,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110879,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+110880,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+110881,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110882,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110883,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+110884,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+110885,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110886,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110887,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+110888,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+110889,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110890,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110891,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+110892,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+110893,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110894,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110895,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+110896,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+110897,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110898,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110899,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_11.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_11.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_11.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_11.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+110900,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+110901,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+110902,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110903,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110904,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+110905,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+110906,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110907,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110908,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+110909,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+110910,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110911,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110912,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+110913,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+110914,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110915,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110916,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+110917,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+110918,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110919,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110920,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+110921,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+110922,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110923,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110924,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+110925,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+110926,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110927,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110928,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+110929,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+110930,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110931,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110932,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+110933,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+110934,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110935,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110936,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+110937,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+110938,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110939,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110940,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+110941,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+110942,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110943,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110944,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+110945,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+110946,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110947,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110948,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+110949,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+110950,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110951,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110952,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+110953,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+110954,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110955,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110956,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+110957,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+110958,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110959,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110960,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+110961,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+110962,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110963,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110964,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_12.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_12.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_12.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_12.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+110965,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+110966,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+110967,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110968,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110969,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+110970,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+110971,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110972,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110973,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+110974,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+110975,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110976,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110977,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+110978,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+110979,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110980,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110981,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+110982,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+110983,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110984,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110985,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+110986,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+110987,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110988,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110989,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+110990,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+110991,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110992,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110993,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+110994,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+110995,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+110996,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+110997,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+110998,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+110999,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+111000,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+111001,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+111002,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+111003,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+111004,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+111005,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+111006,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+111007,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+111008,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+111009,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+111010,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+111011,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+111012,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+111013,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+111014,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+111015,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+111016,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+111017,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+111018,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+111019,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+111020,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+111021,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+111022,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+111023,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+111024,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+111025,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+111026,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+111027,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+111028,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+111029,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_13.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_13.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_13.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_13.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+111030,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+111031,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+111032,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+111033,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+111034,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+111035,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+111036,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+111037,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+111038,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+111039,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+111040,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+111041,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+111042,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+111043,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+111044,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+111045,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+111046,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+111047,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+111048,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+111049,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+111050,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+111051,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+111052,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+111053,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+111054,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+111055,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+111056,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+111057,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+111058,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+111059,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+111060,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+111061,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+111062,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+111063,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+111064,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+111065,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+111066,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+111067,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+111068,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+111069,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+111070,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+111071,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+111072,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+111073,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+111074,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+111075,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+111076,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+111077,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+111078,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+111079,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+111080,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+111081,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+111082,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+111083,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+111084,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+111085,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+111086,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+111087,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+111088,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+111089,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+111090,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+111091,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+111092,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+111093,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+111094,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_14.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_14.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_14.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_14.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+111095,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+111096,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+111097,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+111098,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+111099,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+111100,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+111101,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+111102,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+111103,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+111104,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+111105,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+111106,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+111107,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+111108,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+111109,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+111110,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+111111,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+111112,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+111113,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+111114,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+111115,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+111116,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+111117,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+111118,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+111119,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+111120,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+111121,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+111122,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+111123,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+111124,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+111125,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
    }
}
