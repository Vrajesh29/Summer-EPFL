// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSystolicArray_HBFP_forTesting__Syms.h"


void VSystolicArray_HBFP_forTesting::traceFullSub18(void* userp, VerilatedVcd* tracep) {
    VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp = static_cast<VSystolicArray_HBFP_forTesting__Syms*>(userp);
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+105894,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_14.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_14.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_14.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_14.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+105895,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+105896,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+105897,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105898,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105899,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+105900,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+105901,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105902,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105903,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+105904,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+105905,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105906,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105907,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+105908,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+105909,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105910,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105911,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+105912,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+105913,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105914,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105915,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+105916,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+105917,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105918,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105919,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+105920,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+105921,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105922,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105923,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+105924,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+105925,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105926,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105927,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+105928,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+105929,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105930,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105931,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+105932,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+105933,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105934,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105935,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+105936,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+105937,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105938,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105939,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+105940,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+105941,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105942,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105943,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+105944,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+105945,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105946,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105947,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+105948,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+105949,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105950,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105951,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+105952,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+105953,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105954,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105955,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+105956,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+105957,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105958,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_14_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105959,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_15.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_15.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_15.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_15.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+105960,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+105961,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+105962,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105963,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105964,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+105965,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+105966,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105967,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105968,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+105969,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+105970,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105971,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105972,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+105973,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+105974,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105975,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105976,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+105977,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+105978,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105979,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105980,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+105981,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+105982,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105983,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105984,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+105985,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+105986,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105987,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105988,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+105989,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+105990,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105991,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105992,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+105993,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+105994,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105995,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105996,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+105997,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+105998,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105999,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106000,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+106001,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+106002,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106003,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106004,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+106005,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+106006,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106007,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106008,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+106009,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+106010,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106011,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106012,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+106013,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+106014,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106015,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106016,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+106017,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+106018,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106019,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106020,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+106021,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+106022,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106023,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_15_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106024,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_0.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_0.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_0.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_0.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+106025,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+106026,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+106027,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106028,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106029,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+106030,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+106031,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106032,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106033,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+106034,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+106035,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106036,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106037,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+106038,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+106039,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106040,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106041,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+106042,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+106043,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106044,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106045,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+106046,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+106047,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106048,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106049,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+106050,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+106051,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106052,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106053,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+106054,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+106055,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106056,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106057,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+106058,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+106059,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106060,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106061,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+106062,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+106063,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106064,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106065,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+106066,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+106067,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106068,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106069,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+106070,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+106071,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106072,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106073,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+106074,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+106075,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106076,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106077,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+106078,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+106079,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106080,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106081,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+106082,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+106083,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106084,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106085,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+106086,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+106087,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106088,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_0_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106089,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_1.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_1.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_1.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_1.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+106090,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+106091,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+106092,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106093,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106094,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+106095,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+106096,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106097,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106098,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+106099,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+106100,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106101,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106102,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+106103,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+106104,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106105,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106106,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+106107,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+106108,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106109,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106110,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+106111,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+106112,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106113,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106114,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+106115,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+106116,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106117,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106118,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+106119,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+106120,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106121,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106122,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+106123,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+106124,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106125,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106126,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+106127,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+106128,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106129,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106130,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+106131,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+106132,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106133,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106134,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+106135,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+106136,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106137,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106138,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+106139,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+106140,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106141,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106142,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+106143,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+106144,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106145,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106146,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+106147,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+106148,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106149,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106150,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+106151,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+106152,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106153,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_1_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106154,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_2.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_2.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_2.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_2.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+106155,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+106156,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+106157,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106158,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106159,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+106160,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+106161,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106162,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106163,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+106164,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+106165,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106166,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106167,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+106168,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+106169,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106170,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106171,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+106172,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+106173,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106174,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106175,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+106176,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+106177,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106178,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106179,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+106180,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+106181,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106182,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106183,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+106184,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+106185,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106186,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106187,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+106188,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+106189,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106190,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106191,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+106192,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+106193,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106194,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106195,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+106196,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+106197,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106198,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106199,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+106200,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+106201,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106202,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106203,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+106204,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+106205,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106206,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106207,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+106208,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+106209,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106210,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106211,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+106212,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+106213,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106214,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106215,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+106216,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+106217,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106218,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_2_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106219,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_3.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_3.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_3.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_3.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+106220,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+106221,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+106222,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106223,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106224,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+106225,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+106226,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106227,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106228,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+106229,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+106230,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106231,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106232,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+106233,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+106234,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106235,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106236,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+106237,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+106238,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106239,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106240,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+106241,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+106242,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106243,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106244,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+106245,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+106246,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106247,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106248,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+106249,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+106250,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106251,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106252,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+106253,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+106254,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106255,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106256,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+106257,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+106258,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106259,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106260,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+106261,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+106262,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106263,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106264,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+106265,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+106266,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106267,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106268,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+106269,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+106270,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106271,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106272,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+106273,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+106274,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106275,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106276,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+106277,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+106278,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106279,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106280,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+106281,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+106282,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106283,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_3_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106284,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_4.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_4.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_4.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_4.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+106285,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+106286,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+106287,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106288,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106289,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+106290,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+106291,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106292,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106293,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+106294,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+106295,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106296,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106297,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+106298,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+106299,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106300,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106301,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+106302,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+106303,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106304,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106305,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+106306,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+106307,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106308,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106309,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+106310,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+106311,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106312,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106313,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+106314,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+106315,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106316,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106317,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+106318,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+106319,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106320,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106321,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+106322,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+106323,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106324,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106325,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+106326,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+106327,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106328,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106329,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+106330,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+106331,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106332,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106333,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+106334,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+106335,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106336,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106337,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+106338,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+106339,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106340,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106341,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+106342,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+106343,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106344,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106345,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+106346,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+106347,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106348,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_4_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106349,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_5.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_5.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_5.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_5.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+106350,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+106351,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+106352,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106353,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106354,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+106355,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+106356,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106357,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106358,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+106359,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+106360,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106361,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106362,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+106363,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+106364,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106365,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106366,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+106367,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+106368,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106369,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106370,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+106371,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+106372,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106373,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106374,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+106375,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+106376,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106377,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106378,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+106379,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+106380,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106381,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106382,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+106383,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+106384,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106385,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106386,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+106387,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+106388,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106389,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106390,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+106391,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+106392,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106393,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106394,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+106395,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+106396,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106397,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106398,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+106399,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+106400,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106401,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106402,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+106403,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+106404,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106405,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106406,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+106407,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+106408,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106409,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106410,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+106411,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+106412,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106413,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106414,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_6.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_6.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_6.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_6.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+106415,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+106416,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+106417,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106418,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106419,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+106420,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+106421,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106422,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106423,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+106424,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+106425,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106426,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106427,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+106428,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+106429,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106430,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106431,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+106432,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+106433,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106434,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106435,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+106436,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+106437,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106438,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106439,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+106440,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+106441,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106442,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106443,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+106444,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+106445,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106446,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106447,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+106448,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+106449,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106450,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106451,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+106452,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+106453,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106454,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106455,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+106456,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+106457,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106458,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106459,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+106460,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+106461,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106462,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106463,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+106464,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+106465,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106466,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106467,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+106468,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+106469,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106470,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106471,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+106472,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+106473,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106474,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106475,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+106476,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+106477,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106478,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106479,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_7.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_7.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_7.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_7.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+106480,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+106481,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+106482,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106483,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106484,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+106485,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+106486,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106487,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106488,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+106489,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+106490,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106491,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106492,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+106493,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+106494,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106495,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106496,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+106497,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+106498,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106499,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106500,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+106501,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+106502,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106503,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106504,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+106505,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+106506,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106507,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106508,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+106509,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+106510,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106511,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106512,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+106513,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+106514,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106515,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106516,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+106517,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+106518,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106519,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106520,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+106521,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+106522,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106523,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106524,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+106525,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+106526,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106527,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106528,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+106529,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+106530,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106531,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106532,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+106533,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+106534,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106535,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106536,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+106537,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+106538,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106539,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106540,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+106541,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+106542,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106543,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106544,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_8.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_8.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_8.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_8.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+106545,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+106546,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+106547,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106548,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106549,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+106550,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+106551,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106552,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106553,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+106554,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+106555,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106556,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106557,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+106558,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+106559,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106560,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106561,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+106562,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+106563,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106564,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106565,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+106566,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+106567,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106568,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106569,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+106570,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+106571,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106572,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106573,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+106574,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+106575,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106576,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106577,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+106578,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+106579,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106580,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106581,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+106582,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+106583,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106584,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106585,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+106586,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+106587,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106588,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106589,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+106590,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+106591,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106592,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106593,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+106594,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+106595,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106596,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106597,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+106598,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+106599,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106600,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106601,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+106602,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+106603,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106604,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106605,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+106606,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+106607,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106608,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106609,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_9.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_9.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_9.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_9.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+106610,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+106611,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+106612,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106613,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106614,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+106615,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+106616,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106617,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106618,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+106619,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+106620,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106621,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106622,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+106623,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+106624,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106625,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106626,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+106627,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+106628,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106629,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106630,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+106631,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+106632,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106633,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106634,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+106635,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+106636,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106637,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106638,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+106639,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+106640,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106641,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106642,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+106643,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+106644,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106645,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106646,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+106647,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+106648,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106649,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106650,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+106651,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+106652,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106653,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106654,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+106655,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+106656,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106657,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106658,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+106659,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+106660,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106661,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106662,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+106663,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+106664,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106665,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106666,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+106667,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+106668,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106669,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106670,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+106671,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+106672,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106673,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106674,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_10.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_10.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_10.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_10.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+106675,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+106676,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+106677,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106678,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106679,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+106680,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+106681,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106682,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106683,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+106684,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+106685,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106686,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106687,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+106688,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+106689,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106690,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106691,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+106692,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+106693,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106694,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106695,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+106696,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+106697,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106698,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106699,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+106700,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+106701,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106702,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106703,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+106704,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+106705,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106706,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106707,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+106708,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+106709,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106710,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106711,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+106712,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+106713,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106714,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106715,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+106716,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+106717,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106718,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106719,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+106720,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+106721,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106722,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106723,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+106724,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+106725,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106726,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106727,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+106728,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+106729,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106730,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106731,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+106732,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+106733,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106734,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106735,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+106736,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+106737,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106738,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106739,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_11.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_11.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_11.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_11.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+106740,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+106741,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+106742,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106743,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106744,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+106745,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+106746,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106747,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106748,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+106749,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+106750,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106751,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106752,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+106753,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+106754,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106755,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106756,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+106757,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+106758,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106759,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106760,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+106761,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+106762,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106763,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106764,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+106765,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+106766,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106767,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106768,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+106769,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+106770,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106771,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106772,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+106773,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+106774,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106775,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106776,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+106777,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+106778,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106779,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106780,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+106781,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+106782,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106783,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106784,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+106785,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+106786,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106787,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106788,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+106789,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+106790,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106791,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106792,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+106793,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+106794,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106795,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106796,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+106797,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+106798,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106799,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106800,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+106801,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+106802,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106803,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106804,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_12.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_12.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_12.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_12.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+106805,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+106806,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+106807,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106808,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106809,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+106810,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+106811,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106812,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106813,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+106814,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+106815,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106816,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106817,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+106818,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+106819,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106820,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106821,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+106822,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+106823,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106824,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106825,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+106826,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+106827,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106828,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106829,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+106830,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+106831,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106832,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106833,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+106834,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+106835,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106836,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106837,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+106838,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+106839,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106840,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106841,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+106842,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+106843,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106844,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106845,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+106846,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+106847,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106848,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106849,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+106850,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+106851,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106852,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106853,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+106854,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+106855,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106856,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106857,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+106858,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+106859,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106860,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106861,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+106862,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+106863,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106864,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106865,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+106866,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+106867,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106868,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106869,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_13.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_13.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_13.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_13.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+106870,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+106871,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+106872,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106873,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106874,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+106875,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+106876,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106877,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106878,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+106879,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+106880,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106881,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106882,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+106883,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+106884,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106885,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106886,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+106887,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+106888,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106889,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106890,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+106891,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+106892,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106893,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106894,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+106895,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+106896,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106897,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106898,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+106899,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+106900,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106901,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106902,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+106903,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+106904,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106905,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106906,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+106907,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+106908,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106909,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106910,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+106911,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+106912,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106913,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106914,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+106915,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+106916,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106917,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106918,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+106919,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+106920,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106921,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106922,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+106923,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+106924,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106925,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106926,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+106927,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+106928,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106929,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106930,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+106931,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+106932,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106933,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106934,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_14.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_14.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_14.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_14.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+106935,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+106936,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+106937,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106938,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106939,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+106940,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+106941,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106942,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106943,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+106944,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+106945,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106946,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106947,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+106948,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+106949,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106950,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106951,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+106952,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+106953,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106954,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106955,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+106956,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+106957,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106958,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106959,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+106960,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+106961,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106962,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106963,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+106964,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+106965,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106966,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106967,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+106968,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+106969,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106970,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106971,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+106972,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+106973,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106974,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106975,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+106976,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+106977,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106978,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106979,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+106980,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+106981,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106982,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106983,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+106984,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+106985,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106986,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106987,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+106988,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+106989,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106990,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106991,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+106992,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+106993,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106994,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106995,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+106996,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+106997,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+106998,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+106999,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_15.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_15.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_15.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_15.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+107000,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+107001,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+107002,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+107003,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+107004,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+107005,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+107006,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+107007,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+107008,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+107009,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+107010,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+107011,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+107012,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+107013,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+107014,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+107015,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+107016,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+107017,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+107018,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+107019,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+107020,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+107021,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+107022,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+107023,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+107024,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+107025,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+107026,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+107027,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+107028,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+107029,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+107030,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+107031,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+107032,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+107033,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+107034,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+107035,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+107036,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+107037,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+107038,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+107039,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+107040,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+107041,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+107042,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+107043,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+107044,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+107045,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+107046,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+107047,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+107048,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+107049,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+107050,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+107051,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+107052,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+107053,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+107054,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+107055,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+107056,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+107057,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+107058,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+107059,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+107060,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+107061,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+107062,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+107063,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+107064,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_0.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_0.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_0.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_0.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+107065,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+107066,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+107067,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+107068,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+107069,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+107070,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+107071,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+107072,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+107073,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+107074,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+107075,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+107076,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+107077,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+107078,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+107079,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+107080,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+107081,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+107082,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+107083,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+107084,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+107085,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+107086,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+107087,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+107088,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+107089,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+107090,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+107091,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+107092,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+107093,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+107094,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+107095,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+107096,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+107097,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+107098,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+107099,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+107100,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+107101,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+107102,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+107103,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+107104,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+107105,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+107106,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+107107,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+107108,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+107109,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+107110,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+107111,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+107112,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+107113,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+107114,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+107115,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+107116,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+107117,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+107118,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+107119,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+107120,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+107121,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+107122,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+107123,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+107124,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+107125,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+107126,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+107127,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+107128,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_0_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+107129,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_1.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_1.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_1.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_1.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+107130,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+107131,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+107132,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+107133,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+107134,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+107135,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+107136,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+107137,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+107138,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+107139,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+107140,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+107141,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+107142,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+107143,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+107144,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+107145,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+107146,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+107147,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+107148,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+107149,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+107150,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+107151,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+107152,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+107153,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+107154,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+107155,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+107156,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+107157,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+107158,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+107159,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+107160,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+107161,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+107162,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+107163,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+107164,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+107165,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+107166,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+107167,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+107168,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+107169,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+107170,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+107171,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+107172,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+107173,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+107174,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+107175,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+107176,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+107177,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+107178,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+107179,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+107180,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+107181,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+107182,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+107183,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+107184,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+107185,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+107186,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+107187,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+107188,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+107189,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+107190,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+107191,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+107192,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+107193,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_1_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+107194,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_2.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_2.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_2.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_2.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+107195,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_2_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_2_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+107196,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_2_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_2_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_2_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_2_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+107197,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_2_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+107198,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_2_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_2_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+107199,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_2_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_2_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+107200,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_2_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_2_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_2_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_2_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+107201,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_2_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
    }
}
