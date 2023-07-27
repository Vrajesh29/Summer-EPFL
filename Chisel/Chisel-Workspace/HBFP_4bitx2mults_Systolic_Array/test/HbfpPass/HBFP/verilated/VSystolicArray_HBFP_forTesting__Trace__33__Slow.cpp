// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSystolicArray_HBFP_forTesting__Syms.h"


void VSystolicArray_HBFP_forTesting::traceFullSub20(void* userp, VerilatedVcd* tracep) {
    VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp = static_cast<VSystolicArray_HBFP_forTesting__Syms*>(userp);
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+108510,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108511,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+108512,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+108513,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108514,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108515,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+108516,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+108517,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108518,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108519,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+108520,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+108521,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108522,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108523,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+108524,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+108525,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108526,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108527,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+108528,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+108529,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108530,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108531,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+108532,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+108533,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108534,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108535,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+108536,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+108537,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108538,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108539,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+108540,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+108541,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108542,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108543,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+108544,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+108545,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108546,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108547,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+108548,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+108549,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108550,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108551,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+108552,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+108553,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108554,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108555,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+108556,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+108557,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108558,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_6_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108559,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_7.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_7.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_7.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_7.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+108560,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+108561,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+108562,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108563,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108564,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+108565,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+108566,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108567,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108568,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+108569,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+108570,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108571,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108572,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+108573,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+108574,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108575,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108576,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+108577,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+108578,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108579,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108580,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+108581,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+108582,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108583,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108584,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+108585,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+108586,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108587,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108588,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+108589,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+108590,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108591,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108592,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+108593,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+108594,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108595,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108596,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+108597,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+108598,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108599,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108600,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+108601,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+108602,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108603,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108604,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+108605,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+108606,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108607,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108608,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+108609,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+108610,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108611,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108612,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+108613,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+108614,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108615,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108616,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+108617,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+108618,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108619,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108620,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+108621,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+108622,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108623,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_7_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108624,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_8.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_8.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_8.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_8.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+108625,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+108626,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+108627,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108628,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108629,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+108630,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+108631,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108632,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108633,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+108634,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+108635,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108636,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108637,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+108638,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+108639,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108640,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108641,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+108642,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+108643,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108644,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108645,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+108646,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+108647,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108648,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108649,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+108650,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+108651,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108652,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108653,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+108654,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+108655,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108656,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108657,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+108658,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+108659,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108660,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108661,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+108662,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+108663,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108664,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108665,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+108666,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+108667,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108668,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108669,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+108670,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+108671,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108672,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108673,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+108674,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+108675,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108676,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108677,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+108678,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+108679,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108680,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108681,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+108682,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+108683,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108684,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108685,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+108686,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+108687,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108688,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_8_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108689,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_9.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_9.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_9.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_9.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+108690,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+108691,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+108692,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108693,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108694,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+108695,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+108696,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108697,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108698,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+108699,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+108700,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108701,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108702,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+108703,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+108704,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108705,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108706,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+108707,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+108708,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108709,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108710,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+108711,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+108712,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108713,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108714,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+108715,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+108716,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108717,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108718,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+108719,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+108720,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108721,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108722,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+108723,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+108724,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108725,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108726,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+108727,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+108728,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108729,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108730,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+108731,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+108732,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108733,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108734,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+108735,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+108736,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108737,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108738,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+108739,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+108740,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108741,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108742,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+108743,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+108744,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108745,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108746,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+108747,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+108748,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108749,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108750,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+108751,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+108752,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108753,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_9_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108754,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_10.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_10.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_10.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_10.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+108755,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+108756,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+108757,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108758,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108759,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+108760,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+108761,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108762,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108763,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+108764,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+108765,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108766,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108767,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+108768,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+108769,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108770,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108771,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+108772,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+108773,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108774,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108775,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+108776,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+108777,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108778,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108779,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+108780,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+108781,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108782,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108783,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+108784,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+108785,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108786,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108787,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+108788,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+108789,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108790,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108791,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+108792,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+108793,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108794,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108795,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+108796,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+108797,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108798,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108799,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+108800,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+108801,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108802,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108803,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+108804,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+108805,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108806,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108807,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+108808,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+108809,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108810,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108811,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+108812,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+108813,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108814,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108815,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+108816,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+108817,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108818,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_10_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108819,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_11.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_11.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_11.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_11.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+108820,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+108821,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+108822,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108823,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108824,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+108825,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+108826,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108827,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108828,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+108829,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+108830,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108831,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108832,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+108833,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+108834,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108835,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108836,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+108837,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+108838,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108839,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108840,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+108841,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+108842,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108843,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108844,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+108845,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+108846,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108847,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108848,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+108849,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+108850,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108851,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108852,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+108853,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+108854,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108855,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108856,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+108857,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+108858,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108859,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108860,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+108861,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+108862,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108863,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108864,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+108865,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+108866,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108867,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108868,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+108869,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+108870,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108871,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108872,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+108873,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+108874,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108875,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108876,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+108877,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+108878,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108879,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108880,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+108881,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+108882,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108883,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_11_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108884,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_12.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_12.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_12.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_12.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+108885,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+108886,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+108887,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108888,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108889,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+108890,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+108891,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108892,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108893,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+108894,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+108895,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108896,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108897,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+108898,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+108899,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108900,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108901,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+108902,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+108903,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108904,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108905,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+108906,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+108907,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108908,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108909,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+108910,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+108911,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108912,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108913,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+108914,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+108915,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108916,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108917,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+108918,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+108919,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108920,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108921,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+108922,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+108923,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108924,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108925,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+108926,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+108927,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108928,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108929,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+108930,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+108931,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108932,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108933,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+108934,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+108935,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108936,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108937,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+108938,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+108939,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108940,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108941,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+108942,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+108943,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108944,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108945,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+108946,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+108947,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108948,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_12_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108949,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_13.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_13.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_13.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_13.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+108950,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+108951,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+108952,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108953,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108954,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+108955,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+108956,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108957,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108958,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+108959,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+108960,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108961,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108962,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+108963,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+108964,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108965,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108966,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+108967,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+108968,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108969,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108970,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+108971,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+108972,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108973,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108974,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+108975,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+108976,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108977,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108978,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+108979,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+108980,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108981,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108982,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+108983,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+108984,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108985,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108986,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+108987,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+108988,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108989,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108990,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+108991,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+108992,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108993,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108994,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+108995,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+108996,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+108997,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+108998,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+108999,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+109000,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109001,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109002,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+109003,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+109004,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109005,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109006,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+109007,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+109008,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109009,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109010,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+109011,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+109012,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109013,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_13_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109014,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_14.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_14.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_14.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_14.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+109015,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+109016,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+109017,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109018,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109019,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+109020,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+109021,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109022,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109023,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+109024,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+109025,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109026,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109027,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+109028,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+109029,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109030,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109031,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+109032,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+109033,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109034,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109035,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+109036,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+109037,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109038,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109039,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+109040,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+109041,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109042,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109043,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+109044,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+109045,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109046,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109047,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+109048,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+109049,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109050,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109051,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+109052,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+109053,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109054,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109055,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+109056,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+109057,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109058,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109059,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+109060,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+109061,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109062,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109063,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+109064,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+109065,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109066,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109067,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+109068,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+109069,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109070,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109071,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+109072,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+109073,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109074,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109075,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+109076,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+109077,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109078,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109079,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_15.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_15.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_15.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_15.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+109080,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+109081,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+109082,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109083,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109084,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+109085,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+109086,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109087,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109088,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+109089,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+109090,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109091,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109092,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+109093,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+109094,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109095,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109096,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+109097,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+109098,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109099,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109100,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+109101,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+109102,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109103,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109104,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+109105,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+109106,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109107,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109108,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+109109,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+109110,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109111,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109112,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+109113,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+109114,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109115,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109116,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+109117,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+109118,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109119,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109120,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+109121,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+109122,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109123,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109124,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+109125,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+109126,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109127,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109128,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+109129,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+109130,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109131,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109132,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+109133,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+109134,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109135,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109136,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+109137,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+109138,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109139,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109140,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+109141,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+109142,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109143,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109144,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_0.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_0.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_0.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_0.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+109145,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+109146,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+109147,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109148,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109149,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+109150,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+109151,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109152,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109153,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+109154,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+109155,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109156,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109157,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+109158,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+109159,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109160,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109161,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+109162,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+109163,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109164,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109165,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+109166,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+109167,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109168,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109169,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+109170,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+109171,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109172,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109173,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+109174,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+109175,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109176,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109177,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+109178,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+109179,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109180,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109181,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+109182,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+109183,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109184,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109185,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+109186,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+109187,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109188,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109189,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+109190,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+109191,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109192,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109193,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+109194,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+109195,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109196,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109197,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+109198,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+109199,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109200,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109201,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+109202,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+109203,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109204,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109205,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+109206,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+109207,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109208,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109209,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_1.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_1.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_1.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_1.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+109210,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+109211,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+109212,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109213,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109214,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+109215,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+109216,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109217,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109218,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+109219,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+109220,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109221,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109222,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+109223,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+109224,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109225,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109226,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+109227,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+109228,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109229,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109230,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+109231,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+109232,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109233,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109234,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+109235,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+109236,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109237,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109238,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+109239,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+109240,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109241,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109242,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+109243,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+109244,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109245,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109246,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+109247,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+109248,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109249,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109250,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+109251,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+109252,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109253,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109254,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+109255,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+109256,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109257,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109258,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+109259,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+109260,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109261,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109262,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+109263,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+109264,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109265,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109266,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+109267,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+109268,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109269,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109270,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+109271,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+109272,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109273,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109274,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_2.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_2.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_2.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_2.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+109275,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+109276,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+109277,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109278,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109279,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+109280,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+109281,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109282,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109283,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+109284,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+109285,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109286,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109287,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+109288,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+109289,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109290,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109291,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+109292,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+109293,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109294,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109295,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+109296,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+109297,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109298,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109299,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+109300,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+109301,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109302,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109303,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+109304,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+109305,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109306,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109307,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+109308,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+109309,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109310,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109311,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+109312,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+109313,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109314,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109315,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+109316,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+109317,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109318,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109319,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+109320,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+109321,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109322,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109323,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+109324,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+109325,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109326,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109327,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+109328,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+109329,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109330,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109331,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+109332,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+109333,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109334,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109335,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+109336,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+109337,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109338,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109339,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_3.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_3.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_3.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_3.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+109340,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+109341,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+109342,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109343,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109344,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+109345,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+109346,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109347,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109348,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+109349,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+109350,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109351,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109352,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+109353,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+109354,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109355,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109356,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+109357,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+109358,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109359,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109360,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+109361,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+109362,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109363,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109364,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+109365,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+109366,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109367,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109368,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+109369,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+109370,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109371,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109372,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+109373,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+109374,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109375,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109376,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+109377,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+109378,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109379,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109380,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+109381,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+109382,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109383,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109384,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+109385,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+109386,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109387,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109388,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+109389,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+109390,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109391,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109392,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+109393,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+109394,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109395,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109396,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+109397,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+109398,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109399,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109400,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+109401,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+109402,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109403,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109404,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_4.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_4.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_4.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_4.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+109405,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+109406,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+109407,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109408,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109409,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+109410,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+109411,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109412,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109413,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+109414,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+109415,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109416,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109417,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+109418,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+109419,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109420,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109421,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+109422,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+109423,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109424,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109425,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+109426,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+109427,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109428,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109429,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+109430,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+109431,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109432,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109433,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+109434,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+109435,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109436,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109437,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+109438,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+109439,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109440,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109441,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+109442,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+109443,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109444,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109445,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+109446,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+109447,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109448,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109449,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+109450,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+109451,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109452,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109453,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+109454,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+109455,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109456,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109457,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+109458,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+109459,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109460,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109461,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+109462,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+109463,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109464,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109465,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+109466,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+109467,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109468,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109469,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_5.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_5.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_5.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_5.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+109470,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+109471,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+109472,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109473,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109474,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+109475,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+109476,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109477,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109478,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+109479,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+109480,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109481,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109482,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+109483,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+109484,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109485,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109486,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+109487,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+109488,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109489,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109490,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+109491,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+109492,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109493,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109494,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+109495,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+109496,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109497,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109498,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+109499,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+109500,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109501,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109502,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+109503,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+109504,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109505,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109506,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+109507,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+109508,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109509,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109510,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+109511,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+109512,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109513,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109514,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+109515,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+109516,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109517,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109518,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+109519,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+109520,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109521,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109522,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+109523,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+109524,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109525,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109526,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+109527,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+109528,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109529,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109530,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+109531,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+109532,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109533,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109534,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_6.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_6.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_6.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_6.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+109535,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+109536,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+109537,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109538,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109539,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+109540,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+109541,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109542,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109543,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+109544,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+109545,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109546,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109547,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+109548,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+109549,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109550,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109551,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+109552,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+109553,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109554,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109555,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+109556,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+109557,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109558,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109559,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+109560,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+109561,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109562,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109563,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+109564,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+109565,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109566,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109567,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+109568,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+109569,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109570,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109571,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+109572,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+109573,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109574,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109575,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+109576,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+109577,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109578,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109579,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+109580,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+109581,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109582,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109583,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+109584,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+109585,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109586,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109587,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+109588,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+109589,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109590,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109591,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+109592,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+109593,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109594,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109595,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+109596,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+109597,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109598,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109599,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_7.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_7.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_7.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_7.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+109600,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+109601,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+109602,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109603,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109604,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+109605,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+109606,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109607,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109608,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+109609,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+109610,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109611,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109612,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+109613,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+109614,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109615,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109616,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+109617,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+109618,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109619,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109620,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+109621,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+109622,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109623,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109624,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+109625,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+109626,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109627,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109628,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+109629,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+109630,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109631,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109632,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+109633,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+109634,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109635,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109636,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+109637,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+109638,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109639,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109640,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+109641,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+109642,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109643,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109644,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+109645,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+109646,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109647,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109648,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+109649,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+109650,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109651,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109652,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+109653,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+109654,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109655,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109656,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+109657,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+109658,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109659,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109660,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+109661,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+109662,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109663,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109664,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_8.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_8.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_8.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_8.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+109665,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+109666,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+109667,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109668,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109669,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+109670,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+109671,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109672,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109673,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+109674,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+109675,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109676,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109677,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+109678,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+109679,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109680,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109681,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+109682,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+109683,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109684,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109685,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+109686,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+109687,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109688,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109689,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+109690,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+109691,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109692,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109693,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+109694,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+109695,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109696,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109697,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+109698,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+109699,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109700,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109701,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+109702,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+109703,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109704,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109705,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+109706,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+109707,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109708,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109709,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+109710,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+109711,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109712,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109713,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+109714,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+109715,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109716,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109717,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+109718,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+109719,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109720,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109721,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+109722,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+109723,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109724,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109725,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+109726,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+109727,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109728,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109729,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_9.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_9.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_9.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_9.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+109730,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+109731,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+109732,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109733,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109734,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+109735,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+109736,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109737,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109738,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+109739,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+109740,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109741,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109742,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+109743,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+109744,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109745,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109746,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+109747,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+109748,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109749,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109750,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+109751,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+109752,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109753,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109754,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+109755,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+109756,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109757,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109758,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+109759,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+109760,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109761,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109762,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+109763,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+109764,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109765,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109766,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+109767,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+109768,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109769,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109770,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+109771,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+109772,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109773,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109774,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+109775,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+109776,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109777,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109778,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+109779,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+109780,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109781,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109782,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+109783,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+109784,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109785,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109786,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+109787,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+109788,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109789,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109790,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+109791,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+109792,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109793,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109794,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_10.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_10.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_10.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_10.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+109795,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+109796,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+109797,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109798,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109799,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+109800,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+109801,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109802,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109803,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+109804,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+109805,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109806,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109807,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+109808,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+109809,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109810,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109811,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+109812,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+109813,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+109814,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+109815,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+109816,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+109817,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
    }
}
